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
 * @summary 启用账号组规则
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
 * @summary 启用账号组规则
 *
 * @param request ActiveAggregateConfigRulesRequest
 * @return ActiveAggregateConfigRulesResponse
 */
ActiveAggregateConfigRulesResponse Client::activeAggregateConfigRules(const ActiveAggregateConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeAggregateConfigRulesWithOptions(request, runtime);
}

/**
 * @summary 启用指定规则
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
 * @summary 启用指定规则
 *
 * @param request ActiveConfigRulesRequest
 * @return ActiveConfigRulesResponse
 */
ActiveConfigRulesResponse Client::activeConfigRules(const ActiveConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeConfigRulesWithOptions(request, runtime);
}

/**
 * @summary 将指定账号组规则加入指定账号组合规包
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
 * @summary 将指定账号组规则加入指定账号组合规包
 *
 * @param request AttachAggregateConfigRuleToCompliancePackRequest
 * @return AttachAggregateConfigRuleToCompliancePackResponse
 */
AttachAggregateConfigRuleToCompliancePackResponse Client::attachAggregateConfigRuleToCompliancePack(const AttachAggregateConfigRuleToCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachAggregateConfigRuleToCompliancePackWithOptions(request, runtime);
}

/**
 * @summary 将指定规则加入指定合规包
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
 * @summary 将指定规则加入指定合规包
 *
 * @param request AttachConfigRuleToCompliancePackRequest
 * @return AttachConfigRuleToCompliancePackResponse
 */
AttachConfigRuleToCompliancePackResponse Client::attachConfigRuleToCompliancePack(const AttachConfigRuleToCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachConfigRuleToCompliancePackWithOptions(request, runtime);
}

/**
 * @summary 合规包复制
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
 * @summary 合规包复制
 *
 * @param request CopyCompliancePacksRequest
 * @return CopyCompliancePacksResponse
 */
CopyCompliancePacksResponse Client::copyCompliancePacks(const CopyCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary 规则复制
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
 * @summary 规则复制
 *
 * @param request CopyConfigRulesRequest
 * @return CopyConfigRulesResponse
 */
CopyConfigRulesResponse Client::copyConfigRules(const CopyConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyConfigRulesWithOptions(request, runtime);
}

/**
 * @summary 生成当前账号搜索结果下载文件
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
 * @summary 生成当前账号搜索结果下载文件
 *
 * @param request CreateAdvancedSearchFileRequest
 * @return CreateAdvancedSearchFileResponse
 */
CreateAdvancedSearchFileResponse Client::createAdvancedSearchFile(const CreateAdvancedSearchFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAdvancedSearchFileWithOptions(request, runtime);
}

/**
 * @summary Creates a downloadable file of advanced search results for resources in an account group.
 *
 * @description This topic provides an example of how to query for ECS instances in the account group `ca-edd3626622af00b3****` and create a downloadable file of the search results.
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
 * @summary Creates a downloadable file of advanced search results for resources in an account group.
 *
 * @description This topic provides an example of how to query for ECS instances in the account group `ca-edd3626622af00b3****` and create a downloadable file of the search results.
 *
 * @param request CreateAggregateAdvancedSearchFileRequest
 * @return CreateAggregateAdvancedSearchFileResponse
 */
CreateAggregateAdvancedSearchFileResponse Client::createAggregateAdvancedSearchFile(const CreateAggregateAdvancedSearchFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateAdvancedSearchFileWithOptions(request, runtime);
}

/**
 * @summary Creates a compliance pack for a specified account group.
 *
 * @description A compliance pack is a collection of rules. When you create a compliance pack, you can select default rules from a compliance pack template. You can also select rules from rule templates and the list of existing rules.
 * After a compliance pack is created, its rules are evaluated once by default. Subsequent evaluations are automatically triggered based on the trigger mechanism of the rules. You can also manually trigger an evaluation.
 * A compliance pack template is a collection of rules created by CloudConfig for a specific compliance scenario.
 * This topic provides an example of how to create a compliance pack for the account group `ca-f632626622af0079****` using the compliance pack template `ClassifiedProtectionPreCheck` (Classified Protection Level 3 Pre-check).
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
 * @summary Creates a compliance pack for a specified account group.
 *
 * @description A compliance pack is a collection of rules. When you create a compliance pack, you can select default rules from a compliance pack template. You can also select rules from rule templates and the list of existing rules.
 * After a compliance pack is created, its rules are evaluated once by default. Subsequent evaluations are automatically triggered based on the trigger mechanism of the rules. You can also manually trigger an evaluation.
 * A compliance pack template is a collection of rules created by CloudConfig for a specific compliance scenario.
 * This topic provides an example of how to create a compliance pack for the account group `ca-f632626622af0079****` using the compliance pack template `ClassifiedProtectionPreCheck` (Classified Protection Level 3 Pre-check).
 *
 * @param request CreateAggregateCompliancePackRequest
 * @return CreateAggregateCompliancePackResponse
 */
CreateAggregateCompliancePackResponse Client::createAggregateCompliancePack(const CreateAggregateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Creates a delivery channel for a specified account group to deliver resource data to Simple Log Service (SLS), Object Storage Service (OSS), or Simple Message Queue (formerly MNS).
 *
 * @description ### Background information
 * - Deliver to Simple Log Service (SLS)
 *   To deliver configuration history, non-compliance events, and scheduled resource snapshots to a Logstore in Simple Log Service (SLS), you must first create a log project and a Logstore. This lets you query and analyze logs. For examples of the content in JSON format, see [Example of resource configuration change history](https://help.aliyun.com/document_detail/308347.html), [Example of resource non-compliance event](https://help.aliyun.com/document_detail/307122.html), and [Example of scheduled resource snapshot](https://help.aliyun.com/document_detail/611894.html).
 * - Deliver to Object Storage Service (OSS)
 *   To deliver scheduled resource snapshots or configuration history to a specified location in Object Storage Service (OSS), you must first create a bucket. This lets you view or download files in JSON format. For examples of the content in JSON format, see [Example of scheduled resource snapshot](https://help.aliyun.com/document_detail/305669.html) and [Example of resource configuration change history](https://help.aliyun.com/document_detail/189738.html).
 * - Deliver to Simple Message Queue (MNS)
 *   To deliver resource configuration change history and resource non-compliance events to a specified topic in Simple Message Queue (formerly MNS), you must first create a topic. This lets you configure the push method and content for the topic. For examples of the content in JSON format, see [Example of resource configuration change history](https://help.aliyun.com/document_detail/309462.html) and [Example of resource non-compliance event](https://help.aliyun.com/document_detail/309463.html).
 * ### Limits
 * You can create a maximum of five delivery channels for each account group.
 * ### Usage notes
 * This example shows how to create a delivery channel of the `OSS` type for the account group `ca-a4e5626622af0079****`. The Amazon Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The response shows that the delivery channel is created and its ID is `cdc-8e45ff4e06a3a8****`.
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
 * @summary Creates a delivery channel for a specified account group to deliver resource data to Simple Log Service (SLS), Object Storage Service (OSS), or Simple Message Queue (formerly MNS).
 *
 * @description ### Background information
 * - Deliver to Simple Log Service (SLS)
 *   To deliver configuration history, non-compliance events, and scheduled resource snapshots to a Logstore in Simple Log Service (SLS), you must first create a log project and a Logstore. This lets you query and analyze logs. For examples of the content in JSON format, see [Example of resource configuration change history](https://help.aliyun.com/document_detail/308347.html), [Example of resource non-compliance event](https://help.aliyun.com/document_detail/307122.html), and [Example of scheduled resource snapshot](https://help.aliyun.com/document_detail/611894.html).
 * - Deliver to Object Storage Service (OSS)
 *   To deliver scheduled resource snapshots or configuration history to a specified location in Object Storage Service (OSS), you must first create a bucket. This lets you view or download files in JSON format. For examples of the content in JSON format, see [Example of scheduled resource snapshot](https://help.aliyun.com/document_detail/305669.html) and [Example of resource configuration change history](https://help.aliyun.com/document_detail/189738.html).
 * - Deliver to Simple Message Queue (MNS)
 *   To deliver resource configuration change history and resource non-compliance events to a specified topic in Simple Message Queue (formerly MNS), you must first create a topic. This lets you configure the push method and content for the topic. For examples of the content in JSON format, see [Example of resource configuration change history](https://help.aliyun.com/document_detail/309462.html) and [Example of resource non-compliance event](https://help.aliyun.com/document_detail/309463.html).
 * ### Limits
 * You can create a maximum of five delivery channels for each account group.
 * ### Usage notes
 * This example shows how to create a delivery channel of the `OSS` type for the account group `ca-a4e5626622af0079****`. The Amazon Resource Name (ARN) of the delivery destination is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The response shows that the delivery channel is created and its ID is `cdc-8e45ff4e06a3a8****`.
 *
 * @param request CreateAggregateConfigDeliveryChannelRequest
 * @return CreateAggregateConfigDeliveryChannelResponse
 */
CreateAggregateConfigDeliveryChannelResponse Client::createAggregateConfigDeliveryChannel(const CreateAggregateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a rule for a specified account group. You can create a rule from a template or create a custom rule using Function Compute. The rule checks your resources for compliance. After a rule is created, it automatically runs once. Cloud Config then runs evaluations based on the rule\\"s trigger. You can also run evaluations manually.
 *
 * @description ### Limits
 * Each management account and delegated administrator account can have up to 200 rules.
 * ### Background information
 * Cloud Config supports the following methods for creating rules:
 * - Create rules from templates
 *   Rule templates are predefined rule functions that Cloud Config provides in Function Compute (FC). Use rule templates to create rules quickly. For more information about rules, see [the referenced document](https://help.aliyun.com/document_detail/128273.html).
 * - Create rules based on functions in Function Compute
 *   Custom function rules are rules whose code is hosted in FC functions. If the predefined rule templates in Cloud Config do not meet your compliance requirements, write function code to check compliance in complex scenarios. For more information about custom function rules, see [the referenced document](https://help.aliyun.com/document_detail/127405.html).
 * ### Usage notes
 * This example shows how to create a rule for the account group `ca-a4e5626622af0079****` using the \\`required-tags\\` template. The response shows that the rule is created with the ID `cr-4e3d626622af0080****`.
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

  if (!!request.hasConditions()) {
    body["Conditions"] = request.getConditions();
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
 * @summary Creates a rule for a specified account group. You can create a rule from a template or create a custom rule using Function Compute. The rule checks your resources for compliance. After a rule is created, it automatically runs once. Cloud Config then runs evaluations based on the rule\\"s trigger. You can also run evaluations manually.
 *
 * @description ### Limits
 * Each management account and delegated administrator account can have up to 200 rules.
 * ### Background information
 * Cloud Config supports the following methods for creating rules:
 * - Create rules from templates
 *   Rule templates are predefined rule functions that Cloud Config provides in Function Compute (FC). Use rule templates to create rules quickly. For more information about rules, see [the referenced document](https://help.aliyun.com/document_detail/128273.html).
 * - Create rules based on functions in Function Compute
 *   Custom function rules are rules whose code is hosted in FC functions. If the predefined rule templates in Cloud Config do not meet your compliance requirements, write function code to check compliance in complex scenarios. For more information about custom function rules, see [the referenced document](https://help.aliyun.com/document_detail/127405.html).
 * ### Usage notes
 * This example shows how to create a rule for the account group `ca-a4e5626622af0079****` using the \\`required-tags\\` template. The response shows that the rule is created with the ID `cr-4e3d626622af0080****`.
 *
 * @param request CreateAggregateConfigRuleRequest
 * @return CreateAggregateConfigRuleResponse
 */
CreateAggregateConfigRuleResponse Client::createAggregateConfigRule(const CreateAggregateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a remediation for a rule in a specified account group.
 *
 * @description ### Background information
 * - Template-based remediation: Uses public templates provided by Operation Orchestration Service (OOS) to quickly remediate non-compliant resources.
 *   Only one remediation can be created for a rule. This type of remediation is supported only for rules that are created from specific templates.
 * - Custom remediation: Runs custom code in Function Compute (FC) to quickly remediate non-compliant resources.
 *   Only one remediation can be created for a rule. This type of remediation is supported for rules created from templates and for custom rules.
 * ### Usage notes
 * This topic provides an example of how to create a remediation for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`. The response shows that the remediation is created and its ID is `crr-909ba2d4716700eb****`.
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
 * @summary Creates a remediation for a rule in a specified account group.
 *
 * @description ### Background information
 * - Template-based remediation: Uses public templates provided by Operation Orchestration Service (OOS) to quickly remediate non-compliant resources.
 *   Only one remediation can be created for a rule. This type of remediation is supported only for rules that are created from specific templates.
 * - Custom remediation: Runs custom code in Function Compute (FC) to quickly remediate non-compliant resources.
 *   Only one remediation can be created for a rule. This type of remediation is supported for rules created from templates and for custom rules.
 * ### Usage notes
 * This topic provides an example of how to create a remediation for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`. The response shows that the remediation is created and its ID is `crr-909ba2d4716700eb****`.
 *
 * @param request CreateAggregateRemediationRequest
 * @return CreateAggregateRemediationResponse
 */
CreateAggregateRemediationResponse Client::createAggregateRemediation(const CreateAggregateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregateRemediationWithOptions(request, runtime);
}

/**
 * @summary A management account or a delegated administrator account in a resource directory can create an account group to centrally manage resources, compliance packages, and rules across multiple member accounts.
 *
 * @description ### Limits
 * A management account or a delegated administrator account can create a maximum of 5 account groups. Each account group can contain a maximum of 200 member accounts.
 * ### Background information
 * For more information about account groups, including their concepts, use cases, and the impact of member account changes on Cloud Config, see [Overview](https://help.aliyun.com/document_detail/211534.html).
 * Cloud Config supports the following types of account groups:
 * - Global account group: A global account group contains all members in a resource directory and automatically synchronizes member changes. A management account or a delegated administrator account can create only one global account group.
 * - Custom account group: To create a custom account group, a management account or a delegated administrator account selects some or all member accounts from the resource directory.
 *   - If a new member is added to the resource directory, the change is not automatically synchronized. The management account or delegated administrator account must manually add the new member to the account group.
 *   - If a member is removed from the resource directory, the management account or delegated administrator account loses the permissions to manage that member\\"s compliance. The custom account group automatically detects this change and removes the member from the group.
 * - Folder account group: When an account group is created from a folder, it automatically detects and synchronizes changes to the members within that folder. The members in a folder account group are always consistent with the members in the selected folder.
 *   A management account or a delegated administrator account can select only one non-empty folder to create a folder account group.
 * ### Usage notes
 * This topic provides an example of how to use a management account to create a custom account group of the `CUSTOM` type. The account group is named `Test_Group` and has the description `Test Group`. The member accounts are as follows:
 * - The member account ID is `171322098523****` and the member account name is `Alice`.
 * - The member account ID is `100532098349****` and the member account name is `Tom`.
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
 * @summary A management account or a delegated administrator account in a resource directory can create an account group to centrally manage resources, compliance packages, and rules across multiple member accounts.
 *
 * @description ### Limits
 * A management account or a delegated administrator account can create a maximum of 5 account groups. Each account group can contain a maximum of 200 member accounts.
 * ### Background information
 * For more information about account groups, including their concepts, use cases, and the impact of member account changes on Cloud Config, see [Overview](https://help.aliyun.com/document_detail/211534.html).
 * Cloud Config supports the following types of account groups:
 * - Global account group: A global account group contains all members in a resource directory and automatically synchronizes member changes. A management account or a delegated administrator account can create only one global account group.
 * - Custom account group: To create a custom account group, a management account or a delegated administrator account selects some or all member accounts from the resource directory.
 *   - If a new member is added to the resource directory, the change is not automatically synchronized. The management account or delegated administrator account must manually add the new member to the account group.
 *   - If a member is removed from the resource directory, the management account or delegated administrator account loses the permissions to manage that member\\"s compliance. The custom account group automatically detects this change and removes the member from the group.
 * - Folder account group: When an account group is created from a folder, it automatically detects and synchronizes changes to the members within that folder. The members in a folder account group are always consistent with the members in the selected folder.
 *   A management account or a delegated administrator account can select only one non-empty folder to create a folder account group.
 * ### Usage notes
 * This topic provides an example of how to use a management account to create a custom account group of the `CUSTOM` type. The account group is named `Test_Group` and has the description `Test Group`. The member accounts are as follows:
 * - The member account ID is `171322098523****` and the member account name is `Alice`.
 * - The member account ID is `100532098349****` and the member account name is `Tom`.
 *
 * @param request CreateAggregatorRequest
 * @return CreateAggregatorResponse
 */
CreateAggregatorResponse Client::createAggregator(const CreateAggregatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAggregatorWithOptions(request, runtime);
}

/**
 * @summary 为当前账号创建合规包
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
 * @summary 为当前账号创建合规包
 *
 * @param request CreateCompliancePackRequest
 * @return CreateCompliancePackResponse
 */
CreateCompliancePackResponse Client::createCompliancePack(const CreateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCompliancePackWithOptions(request, runtime);
}

/**
 * @summary Creates a delivery channel to deliver resource data to Simple Log Service (SLS), Object Storage Service (OSS), or Simple Message Queue (formerly MNS).
 *
 * @description ### Background information
 * - Deliver to Simple Log Service (SLS)
 *   When you deliver resource configuration histories, non-compliant events, and scheduled snapshots to a Logstore in SLS, you must first create a project and a Logstore. This lets you query and analyze logs. For examples of the content of the JSON files, see [Resource configuration history examples](https://help.aliyun.com/document_detail/308347.html), [Non-compliant event examples](https://help.aliyun.com/document_detail/307122.html), and [Scheduled resource snapshot examples](https://help.aliyun.com/document_detail/611894.html).
 * - Deliver to Object Storage Service (OSS)
 *   When you deliver scheduled resource snapshots or configuration histories to a specified location in OSS, you must first create a bucket. This lets you view or download the JSON files. For examples of the content of the JSON files, see [Scheduled resource snapshot examples](https://help.aliyun.com/document_detail/305669.html) and [Resource configuration history examples](https://help.aliyun.com/document_detail/189738.html).
 * - Deliver to Simple Message Queue (formerly MNS)
 *   When you deliver resource configuration histories and non-compliant events to a specified topic in MNS, you must first create a topic. This lets you set the push method and content for the topic. For examples of the content of the JSON files, see [Resource configuration history examples](https://help.aliyun.com/document_detail/309462.html) and [Non-compliant event examples](https://help.aliyun.com/document_detail/309463.html).
 * ### Limits
 * You can create a maximum of 5 delivery channels.
 * ### Usage notes
 * This topic provides an example of how to create a delivery channel. In this example, the channel type is `OSS` and the destination ARN is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The response shows that a delivery channel with the ID `cdc-8e45ff4e06a3a8****` is created.
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
 * @summary Creates a delivery channel to deliver resource data to Simple Log Service (SLS), Object Storage Service (OSS), or Simple Message Queue (formerly MNS).
 *
 * @description ### Background information
 * - Deliver to Simple Log Service (SLS)
 *   When you deliver resource configuration histories, non-compliant events, and scheduled snapshots to a Logstore in SLS, you must first create a project and a Logstore. This lets you query and analyze logs. For examples of the content of the JSON files, see [Resource configuration history examples](https://help.aliyun.com/document_detail/308347.html), [Non-compliant event examples](https://help.aliyun.com/document_detail/307122.html), and [Scheduled resource snapshot examples](https://help.aliyun.com/document_detail/611894.html).
 * - Deliver to Object Storage Service (OSS)
 *   When you deliver scheduled resource snapshots or configuration histories to a specified location in OSS, you must first create a bucket. This lets you view or download the JSON files. For examples of the content of the JSON files, see [Scheduled resource snapshot examples](https://help.aliyun.com/document_detail/305669.html) and [Resource configuration history examples](https://help.aliyun.com/document_detail/189738.html).
 * - Deliver to Simple Message Queue (formerly MNS)
 *   When you deliver resource configuration histories and non-compliant events to a specified topic in MNS, you must first create a topic. This lets you set the push method and content for the topic. For examples of the content of the JSON files, see [Resource configuration history examples](https://help.aliyun.com/document_detail/309462.html) and [Non-compliant event examples](https://help.aliyun.com/document_detail/309463.html).
 * ### Limits
 * You can create a maximum of 5 delivery channels.
 * ### Usage notes
 * This topic provides an example of how to create a delivery channel. In this example, the channel type is `OSS` and the destination ARN is `acs:oss:cn-shanghai:100931896542****:new-bucket`. The response shows that a delivery channel with the ID `cdc-8e45ff4e06a3a8****` is created.
 *
 * @param request CreateConfigDeliveryChannelRequest
 * @return CreateConfigDeliveryChannelResponse
 */
CreateConfigDeliveryChannelResponse Client::createConfigDeliveryChannel(const CreateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a rule from a template or a custom rule using Function Compute to check resource compliance. After you create a rule, Cloud Config runs an initial evaluation and then automatically triggers subsequent evaluations based on the rule\\"s trigger. You can also run evaluations manually.
 *
 * @description ### Limits
 * You can create up to 200 rules per account.
 * ### Background information
 * You can create rules in Cloud Config in two ways:
 * - Create rules from templates
 *   Rule templates are predefined rule functions provided by Cloud Config in Function Compute. You can use rule templates to quickly create rules. For more information, see [Definition and working principles of rules](https://help.aliyun.com/document_detail/128273.html).
 * - Create custom rules using Function Compute
 *   Custom rules use Function Compute functions to host your rule code. If Cloud Config\\"s predefined rule templates do not meet your compliance requirements, you can write your own function code to check compliance in complex scenarios. For more information, see [Definition and working principles of custom rules](https://help.aliyun.com/document_detail/127405.html).
 * ### Usage notes
 * This topic demonstrates how to create a rule from the \\`required-tags\\` template. The response confirms that the rule was created successfully. Its ID is `cr-5772ba41209e007b****`.
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

  if (!!request.hasConditions()) {
    body["Conditions"] = request.getConditions();
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
 * @summary Creates a rule from a template or a custom rule using Function Compute to check resource compliance. After you create a rule, Cloud Config runs an initial evaluation and then automatically triggers subsequent evaluations based on the rule\\"s trigger. You can also run evaluations manually.
 *
 * @description ### Limits
 * You can create up to 200 rules per account.
 * ### Background information
 * You can create rules in Cloud Config in two ways:
 * - Create rules from templates
 *   Rule templates are predefined rule functions provided by Cloud Config in Function Compute. You can use rule templates to quickly create rules. For more information, see [Definition and working principles of rules](https://help.aliyun.com/document_detail/128273.html).
 * - Create custom rules using Function Compute
 *   Custom rules use Function Compute functions to host your rule code. If Cloud Config\\"s predefined rule templates do not meet your compliance requirements, you can write your own function code to check compliance in complex scenarios. For more information, see [Definition and working principles of custom rules](https://help.aliyun.com/document_detail/127405.html).
 * ### Usage notes
 * This topic demonstrates how to create a rule from the \\`required-tags\\` template. The response confirms that the rule was created successfully. Its ID is `cr-5772ba41209e007b****`.
 *
 * @param request CreateConfigRuleRequest
 * @return CreateConfigRuleResponse
 */
CreateConfigRuleResponse Client::createConfigRule(const CreateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a remediation for an existing rule.
 *
 * @description ### Background information
 * - Template-based remediation: Uses public templates from Operation Orchestration Service (OOS) to remediate non-compliant resources.
 *   Each rule supports only one remediation. This remediation type is available only for rules created from specific templates.
 * - Custom remediation: Uses custom code in Function Compute (FC) to remediate non-compliant resources.
 *   Each rule supports only one remediation. This remediation type is available for rules created from templates and custom rules.
 * ### Usage notes
 * In this example, a remediation is created for the rule `cr-8a973ac2e2be00a2****`. The sample response shows that the remediation is created and has the ID `crr-909ba2d4716700eb****`.
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
 * @summary Creates a remediation for an existing rule.
 *
 * @description ### Background information
 * - Template-based remediation: Uses public templates from Operation Orchestration Service (OOS) to remediate non-compliant resources.
 *   Each rule supports only one remediation. This remediation type is available only for rules created from specific templates.
 * - Custom remediation: Uses custom code in Function Compute (FC) to remediate non-compliant resources.
 *   Each rule supports only one remediation. This remediation type is available for rules created from templates and custom rules.
 * ### Usage notes
 * In this example, a remediation is created for the rule `cr-8a973ac2e2be00a2****`. The sample response shows that the remediation is created and has the ID `crr-909ba2d4716700eb****`.
 *
 * @param request CreateRemediationRequest
 * @return CreateRemediationResponse
 */
CreateRemediationResponse Client::createRemediation(const CreateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRemediationWithOptions(request, runtime);
}

/**
 * @summary Create a compliance report template for the current UID.
 *
 * @param tmpReq CreateReportTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReportTemplateResponse
 */
CreateReportTemplateResponse Client::createReportTemplateWithOptions(const CreateReportTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateReportTemplateShrinkRequest request = CreateReportTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReportScope()) {
    request.setReportScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReportScope(), "ReportScope", "json"));
  }

  json body = {};
  if (!!request.hasReportFileFormats()) {
    body["ReportFileFormats"] = request.getReportFileFormats();
  }

  if (!!request.hasReportGranularity()) {
    body["ReportGranularity"] = request.getReportGranularity();
  }

  if (!!request.hasReportLanguage()) {
    body["ReportLanguage"] = request.getReportLanguage();
  }

  if (!!request.hasReportScopeShrink()) {
    body["ReportScope"] = request.getReportScopeShrink();
  }

  if (!!request.hasReportTemplateDescription()) {
    body["ReportTemplateDescription"] = request.getReportTemplateDescription();
  }

  if (!!request.hasReportTemplateName()) {
    body["ReportTemplateName"] = request.getReportTemplateName();
  }

  if (!!request.hasSubscriptionFrequency()) {
    body["SubscriptionFrequency"] = request.getSubscriptionFrequency();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateReportTemplate"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReportTemplateResponse>();
}

/**
 * @summary Create a compliance report template for the current UID.
 *
 * @param request CreateReportTemplateRequest
 * @return CreateReportTemplateResponse
 */
CreateReportTemplateResponse Client::createReportTemplate(const CreateReportTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReportTemplateWithOptions(request, runtime);
}

/**
 * @summary 停用账号组规则
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
 * @summary 停用账号组规则
 *
 * @param request DeactiveAggregateConfigRulesRequest
 * @return DeactiveAggregateConfigRulesResponse
 */
DeactiveAggregateConfigRulesResponse Client::deactiveAggregateConfigRules(const DeactiveAggregateConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactiveAggregateConfigRulesWithOptions(request, runtime);
}

/**
 * @summary 停用指定规则
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
 * @summary 停用指定规则
 *
 * @param request DeactiveConfigRulesRequest
 * @return DeactiveConfigRulesResponse
 */
DeactiveConfigRulesResponse Client::deactiveConfigRules(const DeactiveConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactiveConfigRulesWithOptions(request, runtime);
}

/**
 * @summary 删除指定账号组内的合规包。删除合规包后，该合规包的检查结果和检查报告也自动被删除
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
 * @summary 删除指定账号组内的合规包。删除合规包后，该合规包的检查结果和检查报告也自动被删除
 *
 * @param request DeleteAggregateCompliancePacksRequest
 * @return DeleteAggregateCompliancePacksResponse
 */
DeleteAggregateCompliancePacksResponse Client::deleteAggregateCompliancePacks(const DeleteAggregateCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregateCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary 账号组删除投递渠道
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
 * @summary 账号组删除投递渠道
 *
 * @param request DeleteAggregateConfigDeliveryChannelRequest
 * @return DeleteAggregateConfigDeliveryChannelResponse
 */
DeleteAggregateConfigDeliveryChannelResponse Client::deleteAggregateConfigDeliveryChannel(const DeleteAggregateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary 删除指定账号组内的规则。删除规则后，其配置信息不再保留
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
 * @summary 删除指定账号组内的规则。删除规则后，其配置信息不再保留
 *
 * @param request DeleteAggregateConfigRulesRequest
 * @return DeleteAggregateConfigRulesResponse
 */
DeleteAggregateConfigRulesResponse Client::deleteAggregateConfigRules(const DeleteAggregateConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregateConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes the remediation settings for a rule in a specified account group.
 *
 * @description This topic provides an example of how to delete the remediation setting `crr-909ba2d4716700eb****` for a rule in the account group `ca-6b4a626622af0012****`. The response shows that the remediation setting is deleted.
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
 * @summary Deletes the remediation settings for a rule in a specified account group.
 *
 * @description This topic provides an example of how to delete the remediation setting `crr-909ba2d4716700eb****` for a rule in the account group `ca-6b4a626622af0012****`. The response shows that the remediation setting is deleted.
 *
 * @param request DeleteAggregateRemediationsRequest
 * @return DeleteAggregateRemediationsResponse
 */
DeleteAggregateRemediationsResponse Client::deleteAggregateRemediations(const DeleteAggregateRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregateRemediationsWithOptions(request, runtime);
}

/**
 * @summary 删除账号组
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
 * @summary 删除账号组
 *
 * @param request DeleteAggregatorsRequest
 * @return DeleteAggregatorsResponse
 */
DeleteAggregatorsResponse Client::deleteAggregators(const DeleteAggregatorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAggregatorsWithOptions(request, runtime);
}

/**
 * @summary 批量删除合规包
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
 * @summary 批量删除合规包
 *
 * @param request DeleteCompliancePacksRequest
 * @return DeleteCompliancePacksResponse
 */
DeleteCompliancePacksResponse Client::deleteCompliancePacks(const DeleteCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary 当前账号删除投递渠道
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
 * @summary 当前账号删除投递渠道
 *
 * @param request DeleteConfigDeliveryChannelRequest
 * @return DeleteConfigDeliveryChannelResponse
 */
DeleteConfigDeliveryChannelResponse Client::deleteConfigDeliveryChannel(const DeleteConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary 批量删除规则
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
 * @summary 批量删除规则
 *
 * @param request DeleteConfigRulesRequest
 * @return DeleteConfigRulesResponse
 */
DeleteConfigRulesResponse Client::deleteConfigRules(const DeleteConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes specified remediation settings.
 *
 * @description This topic provides an example of how to delete a remediation setting for a rule. In this example, the remediation setting with the ID `crr-909ba2d4716700eb****` is deleted. The response indicates that the operation is successful.
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
 * @summary Deletes specified remediation settings.
 *
 * @description This topic provides an example of how to delete a remediation setting for a rule. In this example, the remediation setting with the ID `crr-909ba2d4716700eb****` is deleted. The response indicates that the operation is successful.
 *
 * @param request DeleteRemediationsRequest
 * @return DeleteRemediationsResponse
 */
DeleteRemediationsResponse Client::deleteRemediations(const DeleteRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRemediationsWithOptions(request, runtime);
}

/**
 * @summary Deletes a compliance report template.
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
 * @summary Deletes a compliance report template.
 *
 * @param request DeleteReportTemplateRequest
 * @return DeleteReportTemplateResponse
 */
DeleteReportTemplateResponse Client::deleteReportTemplate(const DeleteReportTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteReportTemplateWithOptions(request, runtime);
}

/**
 * @summary This operation retrieves the details of multiple resources in a batch.
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
 * @summary This operation retrieves the details of multiple resources in a batch.
 *
 * @param request DescribeDiscoveredResourceBatchRequest
 * @return DescribeDiscoveredResourceBatchResponse
 */
DescribeDiscoveredResourceBatchResponse Client::describeDiscoveredResourceBatch(const DescribeDiscoveredResourceBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiscoveredResourceBatchWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization status of an integrated cloud service.
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
 * @summary Queries the authorization status of an integrated cloud service.
 *
 * @param request DescribeIntegratedServiceStatusRequest
 * @return DescribeIntegratedServiceStatusResponse
 */
DescribeIntegratedServiceStatusResponse Client::describeIntegratedServiceStatus(const DescribeIntegratedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntegratedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary 获取修正详情
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
 * @summary 获取修正详情
 *
 * @param request DescribeRemediationRequest
 * @return DescribeRemediationResponse
 */
DescribeRemediationResponse Client::describeRemediation(const DescribeRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRemediationWithOptions(request, runtime);
}

/**
 * @summary 将指定账号组规则从指定账号组合规包中移出
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
 * @summary 将指定账号组规则从指定账号组合规包中移出
 *
 * @param request DetachAggregateConfigRuleToCompliancePackRequest
 * @return DetachAggregateConfigRuleToCompliancePackResponse
 */
DetachAggregateConfigRuleToCompliancePackResponse Client::detachAggregateConfigRuleToCompliancePack(const DetachAggregateConfigRuleToCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachAggregateConfigRuleToCompliancePackWithOptions(request, runtime);
}

/**
 * @summary This operation detaches one or more rules from a compliance package.
 *
 * @description ### Prerequisites
 * Make sure that the destination compliance package contains rules.
 * ### Usage notes
 * This topic provides an example of detaching the rule `cr-6cc4626622af00e7****` from the compliance package `cp-5bb1626622af00bd****`.
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
 * @summary This operation detaches one or more rules from a compliance package.
 *
 * @description ### Prerequisites
 * Make sure that the destination compliance package contains rules.
 * ### Usage notes
 * This topic provides an example of detaching the rule `cr-6cc4626622af00e7****` from the compliance package `cp-5bb1626622af00bd****`.
 *
 * @param request DetachConfigRuleToCompliancePackRequest
 * @return DetachConfigRuleToCompliancePackResponse
 */
DetachConfigRuleToCompliancePackResponse Client::detachConfigRuleToCompliancePack(const DetachConfigRuleToCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachConfigRuleToCompliancePackWithOptions(request, runtime);
}

/**
 * @summary This API performs a dry run on rules for proactive compliance pre-checks.
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
 * @summary This API performs a dry run on rules for proactive compliance pre-checks.
 *
 * @param request DryRunConfigRuleRequest
 * @return DryRunConfigRuleResponse
 */
DryRunConfigRuleResponse Client::dryRunConfigRule(const DryRunConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dryRunConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Executes evaluation rules to perform compliance pre-checks on resources.
 *
 * @description For more information about the concepts, operating principles, and integration process of evaluation rules, see [Definition and operating principles of evaluation rules](https://help.aliyun.com/document_detail/470802.html).
 * After you create an evaluation rule, a managed rule with the same settings is created. This managed rule can continuously check the compliance of resources after they are created.
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
 * @summary Executes evaluation rules to perform compliance pre-checks on resources.
 *
 * @description For more information about the concepts, operating principles, and integration process of evaluation rules, see [Definition and operating principles of evaluation rules](https://help.aliyun.com/document_detail/470802.html).
 * After you create an evaluation rule, a managed rule with the same settings is created. This managed rule can continuously check the compliance of resources after they are created.
 *
 * @param request EvaluatePreConfigRulesRequest
 * @return EvaluatePreConfigRulesResponse
 */
EvaluatePreConfigRulesResponse Client::evaluatePreConfigRules(const EvaluatePreConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return evaluatePreConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Generates an assessment report for a specified compliance package in a specified account group.
 *
 * @description > This operation only generates the latest assessment report. You need to call the GetAggregateCompliancePackReport operation to download the assessment report. For more information, see [GetAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262699.html).
 * This topic provides an example that shows how to generate an assessment report for the compliance package `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****`.
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
 * @summary Generates an assessment report for a specified compliance package in a specified account group.
 *
 * @description > This operation only generates the latest assessment report. You need to call the GetAggregateCompliancePackReport operation to download the assessment report. For more information, see [GetAggregateCompliancePackReport](https://help.aliyun.com/document_detail/262699.html).
 * This topic provides an example that shows how to generate an assessment report for the compliance package `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****`.
 *
 * @param request GenerateAggregateCompliancePackReportRequest
 * @return GenerateAggregateCompliancePackReportResponse
 */
GenerateAggregateCompliancePackReportResponse Client::generateAggregateCompliancePackReport(const GenerateAggregateCompliancePackReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAggregateCompliancePackReportWithOptions(request, runtime);
}

/**
 * @summary 生成指定账号组的合规报告
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
 * @summary 生成指定账号组的合规报告
 *
 * @param request GenerateAggregateConfigRulesReportRequest
 * @return GenerateAggregateConfigRulesReportResponse
 */
GenerateAggregateConfigRulesReportResponse Client::generateAggregateConfigRulesReport(const GenerateAggregateConfigRulesReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAggregateConfigRulesReportWithOptions(request, runtime);
}

/**
 * @summary 账号组资源清单生成
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
 * @summary 账号组资源清单生成
 *
 * @param request GenerateAggregateResourceInventoryRequest
 * @return GenerateAggregateResourceInventoryResponse
 */
GenerateAggregateResourceInventoryResponse Client::generateAggregateResourceInventory(const GenerateAggregateResourceInventoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAggregateResourceInventoryWithOptions(request, runtime);
}

/**
 * @summary 生成合规包的合规包报告
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
 * @summary 生成合规包的合规包报告
 *
 * @param request GenerateCompliancePackReportRequest
 * @return GenerateCompliancePackReportResponse
 */
GenerateCompliancePackReportResponse Client::generateCompliancePackReport(const GenerateCompliancePackReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateCompliancePackReportWithOptions(request, runtime);
}

/**
 * @summary 生成规则的合规评估报告
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
 * @summary 生成规则的合规评估报告
 *
 * @param request GenerateConfigRulesReportRequest
 * @return GenerateConfigRulesReportResponse
 */
GenerateConfigRulesReportResponse Client::generateConfigRulesReport(const GenerateConfigRulesReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateConfigRulesReportWithOptions(request, runtime);
}

/**
 * @summary Generate a report ID from a report template.
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
 * @summary Generate a report ID from a report template.
 *
 * @param request GenerateReportFromTemplateRequest
 * @return GenerateReportFromTemplateResponse
 */
GenerateReportFromTemplateResponse Client::generateReportFromTemplate(const GenerateReportFromTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateReportFromTemplateWithOptions(request, runtime);
}

/**
 * @summary Generates a downloadable inventory of global resources.
 *
 * @description This topic provides an example of how to generate a downloadable inventory of global resources for the current account.
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
 * @summary Generates a downloadable inventory of global resources.
 *
 * @description This topic provides an example of how to generate a downloadable inventory of global resources for the current account.
 *
 * @param request GenerateResourceInventoryRequest
 * @return GenerateResourceInventoryResponse
 */
GenerateResourceInventoryResponse Client::generateResourceInventory(const GenerateResourceInventoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateResourceInventoryWithOptions(request, runtime);
}

/**
 * @summary 高级搜索 获取搜索结果下载文件地址
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
 * @summary 高级搜索 获取搜索结果下载文件地址
 *
 * @return GetAdvancedSearchFileResponse
 */
GetAdvancedSearchFileResponse Client::getAdvancedSearchFile() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdvancedSearchFileWithOptions(runtime);
}

/**
 * @summary 查询指定账号组内指定合规包中成员账号的合规结果
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
 * @summary 查询指定账号组内指定合规包中成员账号的合规结果
 *
 * @param request GetAggregateAccountComplianceByPackRequest
 * @return GetAggregateAccountComplianceByPackResponse
 */
GetAggregateAccountComplianceByPackResponse Client::getAggregateAccountComplianceByPack(const GetAggregateAccountComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateAccountComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary 高级搜获取搜索结果下载文件地址
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
 * @summary 高级搜获取搜索结果下载文件地址
 *
 * @param request GetAggregateAdvancedSearchFileRequest
 * @return GetAggregateAdvancedSearchFileResponse
 */
GetAggregateAdvancedSearchFileResponse Client::getAggregateAdvancedSearchFile(const GetAggregateAdvancedSearchFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateAdvancedSearchFileWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a compliance pack in a specified account group.
 *
 * @description This topic provides an example of how to retrieve the details of the compliance pack `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****`.
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
 * @summary Queries the details of a compliance pack in a specified account group.
 *
 * @description This topic provides an example of how to retrieve the details of the compliance pack `cp-fdc8626622af00f9****` in the account group `ca-f632626622af0079****`.
 *
 * @param request GetAggregateCompliancePackRequest
 * @return GetAggregateCompliancePackResponse
 */
GetAggregateCompliancePackResponse Client::getAggregateCompliancePack(const GetAggregateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateCompliancePackWithOptions(request, runtime);
}

/**
 * @summary 获取指定账号组内指定合规包的评估报告
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
 * @summary 获取指定账号组内指定合规包的评估报告
 *
 * @param request GetAggregateCompliancePackReportRequest
 * @return GetAggregateCompliancePackReportResponse
 */
GetAggregateCompliancePackReportResponse Client::getAggregateCompliancePackReport(const GetAggregateCompliancePackReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateCompliancePackReportWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance summary for a specified account group.
 *
 * @description This topic provides an example of how to query the compliance summary by resource and by rule for the account group ca-a91d626622af0035\\*\\*\\*\\*.
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
 * @summary Queries the compliance summary for a specified account group.
 *
 * @description This topic provides an example of how to query the compliance summary by resource and by rule for the account group ca-a91d626622af0035\\*\\*\\*\\*.
 *
 * @param request GetAggregateComplianceSummaryRequest
 * @return GetAggregateComplianceSummaryResponse
 */
GetAggregateComplianceSummaryResponse Client::getAggregateComplianceSummary(const GetAggregateComplianceSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateComplianceSummaryWithOptions(request, runtime);
}

/**
 * @summary 账号组查询单个投递渠道
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
 * @summary 账号组查询单个投递渠道
 *
 * @param request GetAggregateConfigDeliveryChannelRequest
 * @return GetAggregateConfigDeliveryChannelResponse
 */
GetAggregateConfigDeliveryChannelResponse Client::getAggregateConfigDeliveryChannel(const GetAggregateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific rule in a specified account group.
 *
 * @description This topic provides an example of how to query the details of the rule `cr-7f7d626622af0041****` in the account group `ca-7f00626622af0041****`.
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
 * @summary Queries the details of a specific rule in a specified account group.
 *
 * @description This topic provides an example of how to query the details of the rule `cr-7f7d626622af0041****` in the account group `ca-7f00626622af0041****`.
 *
 * @param request GetAggregateConfigRuleRequest
 * @return GetAggregateConfigRuleResponse
 */
GetAggregateConfigRuleResponse Client::getAggregateConfigRule(const GetAggregateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance results of rules in a specified compliance pack within a specified account group.
 *
 * @description This topic provides an example of how to query the compliance results of rules in the compliance pack `cp-541e626622af0087****` for the account group `ca-04b3fd170e340007****`. The response returns a total of `1` rule and `0` non-compliant rules.
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
 * @summary Queries the compliance results of rules in a specified compliance pack within a specified account group.
 *
 * @description This topic provides an example of how to query the compliance results of rules in the compliance pack `cp-541e626622af0087****` for the account group `ca-04b3fd170e340007****`. The response returns a total of `1` rule and `0` non-compliant rules.
 *
 * @param request GetAggregateConfigRuleComplianceByPackRequest
 * @return GetAggregateConfigRuleComplianceByPackResponse
 */
GetAggregateConfigRuleComplianceByPackResponse Client::getAggregateConfigRuleComplianceByPack(const GetAggregateConfigRuleComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigRuleComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary 查询指定风险等级的账号组规则合规统计
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
 * @summary 查询指定风险等级的账号组规则合规统计
 *
 * @param request GetAggregateConfigRuleSummaryByRiskLevelRequest
 * @return GetAggregateConfigRuleSummaryByRiskLevelResponse
 */
GetAggregateConfigRuleSummaryByRiskLevelResponse Client::getAggregateConfigRuleSummaryByRiskLevel(const GetAggregateConfigRuleSummaryByRiskLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateConfigRuleSummaryByRiskLevelWithOptions(request, runtime);
}

/**
 * @summary 下载Excel格式的规则合规评估报告到本地，便于您云下分配任务并跟进不合规资源配置的修改
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
 * @summary 下载Excel格式的规则合规评估报告到本地，便于您云下分配任务并跟进不合规资源配置的修改
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
 * @description This topic provides an example on how to query the details of an ECS instance `i-bp12g4xbl4i0brkn****` in the Hangzhou region within the account group `ca-5885626622af0008****`.
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
 * @description This topic provides an example on how to query the details of an ECS instance `i-bp12g4xbl4i0brkn****` in the Hangzhou region within the account group `ca-5885626622af0008****`.
 *
 * @param request GetAggregateDiscoveredResourceRequest
 * @return GetAggregateDiscoveredResourceResponse
 */
GetAggregateDiscoveredResourceResponse Client::getAggregateDiscoveredResource(const GetAggregateDiscoveredResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateDiscoveredResourceWithOptions(request, runtime);
}

/**
 * @summary 查询多账号规则合规情况
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
 * @summary 查询多账号规则合规情况
 *
 * @param request GetAggregateResourceComplianceByConfigRuleRequest
 * @return GetAggregateResourceComplianceByConfigRuleResponse
 */
GetAggregateResourceComplianceByConfigRuleResponse Client::getAggregateResourceComplianceByConfigRule(const GetAggregateResourceComplianceByConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceByConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance statistics for resources in a specified compliance package within a specified account group.
 *
 * @description This topic provides an example of how to query the compliance results for resources in the compliance package `cp-fdc8626622af00f9****` within the account group `ca-f632626622af0079****`. The response shows that of a total of `10` resources, `7` are non-compliant.
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
 * @summary Queries the compliance statistics for resources in a specified compliance package within a specified account group.
 *
 * @description This topic provides an example of how to query the compliance results for resources in the compliance package `cp-fdc8626622af00f9****` within the account group `ca-f632626622af0079****`. The response shows that of a total of `10` resources, `7` are non-compliant.
 *
 * @param request GetAggregateResourceComplianceByPackRequest
 * @return GetAggregateResourceComplianceByPackResponse
 */
GetAggregateResourceComplianceByPackResponse Client::getAggregateResourceComplianceByPack(const GetAggregateResourceComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary 查询指定账号组内规则对资源的评估结果，评估结果按资源所属地域进行分组展示
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
 * @summary 查询指定账号组内规则对资源的评估结果，评估结果按资源所属地域进行分组展示
 *
 * @param request GetAggregateResourceComplianceGroupByRegionRequest
 * @return GetAggregateResourceComplianceGroupByRegionResponse
 */
GetAggregateResourceComplianceGroupByRegionResponse Client::getAggregateResourceComplianceGroupByRegion(const GetAggregateResourceComplianceGroupByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceGroupByRegionWithOptions(request, runtime);
}

/**
 * @summary 查询指定账号组内规则对资源的评估结果，评估结果按资源类型进行分组展示
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
 * @summary 查询指定账号组内规则对资源的评估结果，评估结果按资源类型进行分组展示
 *
 * @param request GetAggregateResourceComplianceGroupByResourceTypeRequest
 * @return GetAggregateResourceComplianceGroupByResourceTypeResponse
 */
GetAggregateResourceComplianceGroupByResourceTypeResponse Client::getAggregateResourceComplianceGroupByResourceType(const GetAggregateResourceComplianceGroupByResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceGroupByResourceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance timeline of a specific resource in an account group. A compliance timeline is a set of compliance evaluation records for a resource. Each record includes the time and content of an evaluation.
 *
 * @description In Cloud Config, each resource has its own compliance timeline, which is composed of compliance evaluation records. A record is generated each time a rule is triggered to evaluate the resource. Rules can be triggered by configuration changes, periodic executions, or manual executions.
 * This topic provides an example of how to query the compliance timeline for the resource `new-bucket` (an OSS bucket). The resource is in the `cn-hangzhou` region and belongs to the member account `100931896542****` within the account group `ca-5885626622af0008****`. The response shows that the resource\\"s compliance timeline includes records with the timestamps `1625200295276` (UTC+8: 2021-07-02 12:31:35) and `1625200228510` (UTC+8: 2021-07-02 12:30:28).
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
 * @summary Queries the compliance timeline of a specific resource in an account group. A compliance timeline is a set of compliance evaluation records for a resource. Each record includes the time and content of an evaluation.
 *
 * @description In Cloud Config, each resource has its own compliance timeline, which is composed of compliance evaluation records. A record is generated each time a rule is triggered to evaluate the resource. Rules can be triggered by configuration changes, periodic executions, or manual executions.
 * This topic provides an example of how to query the compliance timeline for the resource `new-bucket` (an OSS bucket). The resource is in the `cn-hangzhou` region and belongs to the member account `100931896542****` within the account group `ca-5885626622af0008****`. The response shows that the resource\\"s compliance timeline includes records with the timestamps `1625200295276` (UTC+8: 2021-07-02 12:31:35) and `1625200228510` (UTC+8: 2021-07-02 12:30:28).
 *
 * @param request GetAggregateResourceComplianceTimelineRequest
 * @return GetAggregateResourceComplianceTimelineResponse
 */
GetAggregateResourceComplianceTimelineResponse Client::getAggregateResourceComplianceTimeline(const GetAggregateResourceComplianceTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceComplianceTimelineWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration history of a specific resource in a specified account group. After you enable Cloud Config, the service records all configuration and relationship changes for your resources and organizes them into a configuration history. This history is saved for 10 years by default.
 *
 * @description Cloud Config provides a configuration history for each resource within the monitoring scope:
 * - For resources that already exist when you enable Cloud Config, the configuration history begins when the service is enabled.
 * - For resources that are created after you enable Cloud Config, the configuration history begins when the resources are created. Cloud Config records resource configuration changes every 10 minutes. When the configuration of a resource changes, a node appears in the configuration history. This node contains the resource configuration details, change details, and the related management event.
 * This topic provides an example of how to query the configuration history of an OSS bucket named `new-bucket`. The bucket is in the `cn-hangzhou` region, belongs to the member account `100931896542****`, and is part of the account group `ca-5885626622af0008****`. The returned result indicates that a configuration change for the resource was recorded at the UNIX timestamp `1624961112000` (UTC+8: 2021-06-29 18:05:12).
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
 * @summary Queries the configuration history of a specific resource in a specified account group. After you enable Cloud Config, the service records all configuration and relationship changes for your resources and organizes them into a configuration history. This history is saved for 10 years by default.
 *
 * @description Cloud Config provides a configuration history for each resource within the monitoring scope:
 * - For resources that already exist when you enable Cloud Config, the configuration history begins when the service is enabled.
 * - For resources that are created after you enable Cloud Config, the configuration history begins when the resources are created. Cloud Config records resource configuration changes every 10 minutes. When the configuration of a resource changes, a node appears in the configuration history. This node contains the resource configuration details, change details, and the related management event.
 * This topic provides an example of how to query the configuration history of an OSS bucket named `new-bucket`. The bucket is in the `cn-hangzhou` region, belongs to the member account `100931896542****`, and is part of the account group `ca-5885626622af0008****`. The returned result indicates that a configuration change for the resource was recorded at the UNIX timestamp `1624961112000` (UTC+8: 2021-06-29 18:05:12).
 *
 * @param request GetAggregateResourceConfigurationTimelineRequest
 * @return GetAggregateResourceConfigurationTimelineResponse
 */
GetAggregateResourceConfigurationTimelineResponse Client::getAggregateResourceConfigurationTimeline(const GetAggregateResourceConfigurationTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceConfigurationTimelineWithOptions(request, runtime);
}

/**
 * @summary 从地域维度查询指定账号组内资源的统计结果
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
 * @summary 从地域维度查询指定账号组内资源的统计结果
 *
 * @param request GetAggregateResourceCountsGroupByRegionRequest
 * @return GetAggregateResourceCountsGroupByRegionResponse
 */
GetAggregateResourceCountsGroupByRegionResponse Client::getAggregateResourceCountsGroupByRegion(const GetAggregateResourceCountsGroupByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceCountsGroupByRegionWithOptions(request, runtime);
}

/**
 * @summary 从资源类型维度查询指定账号组内资源的统计结果
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
 * @summary 从资源类型维度查询指定账号组内资源的统计结果
 *
 * @param request GetAggregateResourceCountsGroupByResourceTypeRequest
 * @return GetAggregateResourceCountsGroupByResourceTypeResponse
 */
GetAggregateResourceCountsGroupByResourceTypeResponse Client::getAggregateResourceCountsGroupByResourceType(const GetAggregateResourceCountsGroupByResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceCountsGroupByResourceTypeWithOptions(request, runtime);
}

/**
 * @summary 查询账号组内全局资源下载清单信息。
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
 * @summary 查询账号组内全局资源下载清单信息。
 *
 * @param request GetAggregateResourceInventoryRequest
 * @return GetAggregateResourceInventoryResponse
 */
GetAggregateResourceInventoryResponse Client::getAggregateResourceInventory(const GetAggregateResourceInventoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregateResourceInventoryWithOptions(request, runtime);
}

/**
 * @summary Queries the name, creation time, members, and type of an account group.
 *
 * @description This topic provides an example of how to query the details of the account group `ca-88ea626622af0055****`. The response shows that the account group name is `Test_Group`, the description is `Test Group`, the type is `CUSTOM` (custom account group), and the status is `1` (created).
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
 * @summary Queries the name, creation time, members, and type of an account group.
 *
 * @description This topic provides an example of how to query the details of the account group `ca-88ea626622af0055****`. The response shows that the account group name is `Test_Group`, the description is `Test Group`, the type is `CUSTOM` (custom account group), and the status is `1` (created).
 *
 * @param request GetAggregatorRequest
 * @return GetAggregatorResponse
 */
GetAggregatorResponse Client::getAggregator(const GetAggregatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAggregatorWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific compliance package.
 *
 * @description This topic provides an example of how to query the details of the compliance package `cp-fdc8626622af00f9****`. The response indicates that the compliance package is named `MLPS 2.0 Level 3 Pre-check Compliance Package`, its status is `ACTIVE`, and the risk level of its rules is `1` (high risk).
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
 * @summary Queries the details of a specific compliance package.
 *
 * @description This topic provides an example of how to query the details of the compliance package `cp-fdc8626622af00f9****`. The response indicates that the compliance package is named `MLPS 2.0 Level 3 Pre-check Compliance Package`, its status is `ACTIVE`, and the risk level of its rules is `1` (high risk).
 *
 * @param request GetCompliancePackRequest
 * @return GetCompliancePackResponse
 */
GetCompliancePackResponse Client::getCompliancePack(const GetCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCompliancePackWithOptions(request, runtime);
}

/**
 * @summary 获取合规包的评估报告
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
 * @summary 获取合规包的评估报告
 *
 * @param request GetCompliancePackReportRequest
 * @return GetCompliancePackReportResponse
 */
GetCompliancePackReportResponse Client::getCompliancePackReport(const GetCompliancePackReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCompliancePackReportWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance summary for the current account.
 *
 * @description This topic provides an example of how to query the compliance summary by resource and rule for an account group.
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
 * @summary Queries the compliance summary for the current account.
 *
 * @description This topic provides an example of how to query the compliance summary by resource and rule for an account group.
 *
 * @return GetComplianceSummaryResponse
 */
GetComplianceSummaryResponse Client::getComplianceSummary() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComplianceSummaryWithOptions(runtime);
}

/**
 * @summary Queries the details of a specified delivery channel.
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
 * @summary Queries the details of a specified delivery channel.
 *
 * @param request GetConfigDeliveryChannelRequest
 * @return GetConfigDeliveryChannelResponse
 */
GetConfigDeliveryChannelResponse Client::getConfigDeliveryChannel(const GetConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified rule.
 *
 * @description This topic provides an example of how to query the details of the rule `cr-7f7d626622af0041****`.
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
 * @summary Queries the details of a specified rule.
 *
 * @description This topic provides an example of how to query the details of the rule `cr-7f7d626622af0041****`.
 *
 * @param request GetConfigRuleRequest
 * @return GetConfigRuleResponse
 */
GetConfigRuleResponse Client::getConfigRule(const GetConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance statistics for rules in a specified compliance package.
 *
 * @description This example shows how to query the compliance results for rules in the compliance package `cp-541e626622af0087****`. The response shows that the total number of rules is 1 and the number of non-compliant rules is 0.
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
 * @summary Queries the compliance statistics for rules in a specified compliance package.
 *
 * @description This example shows how to query the compliance results for rules in the compliance package `cp-541e626622af0087****`. The response shows that the total number of rules is 1 and the number of non-compliant rules is 0.
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
 * @summary 下载Excel格式的规则合规评估报告到本地，便于您云下分配任务并跟进不合规资源配置的修改
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
 * @summary 下载Excel格式的规则合规评估报告到本地，便于您云下分配任务并跟进不合规资源配置的修改
 *
 * @param request GetConfigRulesReportRequest
 * @return GetConfigRulesReportResponse
 */
GetConfigRulesReportResponse Client::getConfigRulesReport(const GetConfigRulesReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConfigRulesReportWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Cloud Config service and the resource monitoring scope for the current account.
 *
 * @description This topic provides an example of how to query the status of the Cloud Config service and the resource monitoring scope for the current account.
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
 * @summary Queries the status of the Cloud Config service and the resource monitoring scope for the current account.
 *
 * @description This topic provides an example of how to query the status of the Cloud Config service and the resource monitoring scope for the current account.
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
 * @description This topic provides an example of how to query the details of the ECS instance `i-bp12g4xbl4i0brkn****` in the China (Hangzhou) region.
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
 * @description This topic provides an example of how to query the details of the ECS instance `i-bp12g4xbl4i0brkn****` in the China (Hangzhou) region.
 *
 * @param request GetDiscoveredResourceRequest
 * @return GetDiscoveredResourceResponse
 */
GetDiscoveredResourceResponse Client::getDiscoveredResource(const GetDiscoveredResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDiscoveredResourceWithOptions(request, runtime);
}

/**
 * @summary 从地域维度查询资源的统计结果
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
 * @summary 从地域维度查询资源的统计结果
 *
 * @param request GetDiscoveredResourceCountsGroupByRegionRequest
 * @return GetDiscoveredResourceCountsGroupByRegionResponse
 */
GetDiscoveredResourceCountsGroupByRegionResponse Client::getDiscoveredResourceCountsGroupByRegion(const GetDiscoveredResourceCountsGroupByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDiscoveredResourceCountsGroupByRegionWithOptions(request, runtime);
}

/**
 * @summary 从资源类型维度查询资源的统计结果
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
 * @summary 从资源类型维度查询资源的统计结果
 *
 * @param request GetDiscoveredResourceCountsGroupByResourceTypeRequest
 * @return GetDiscoveredResourceCountsGroupByResourceTypeResponse
 */
GetDiscoveredResourceCountsGroupByResourceTypeResponse Client::getDiscoveredResourceCountsGroupByResourceType(const GetDiscoveredResourceCountsGroupByResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDiscoveredResourceCountsGroupByResourceTypeWithOptions(request, runtime);
}

/**
 * @summary 查询用户集成云产品的授权状态
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
 * @summary 查询用户集成云产品的授权状态
 *
 * @param request GetIntegratedServiceStatusRequest
 * @return GetIntegratedServiceStatusResponse
 */
GetIntegratedServiceStatusResponse Client::getIntegratedServiceStatus(const GetIntegratedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntegratedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified rule template.
 *
 * @description This topic provides an example of how to query the details of the rule template `cdn-domain-https-enabled`.
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
 * @summary Queries the details of a specified rule template.
 *
 * @description This topic provides an example of how to query the details of the rule template `cdn-domain-https-enabled`.
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
 * @description This topic describes how to query the details of the `ACS-ALB-BulkyEnableDeletionProtection` automatic remediation template.
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
 * @description This topic describes how to query the details of the `ACS-ALB-BulkyEnableDeletionProtection` automatic remediation template.
 *
 * @param request GetRemediationTemplateRequest
 * @return GetRemediationTemplateResponse
 */
GetRemediationTemplateResponse Client::getRemediationTemplate(const GetRemediationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRemediationTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves a report generated from a report template.
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
 * @summary Retrieves a report generated from a report template.
 *
 * @param request GetReportFromTemplateRequest
 * @return GetReportFromTemplateResponse
 */
GetReportFromTemplateResponse Client::getReportFromTemplate(const GetReportFromTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getReportFromTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieve details of a compliance report template.
 *
 * @param request GetReportTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReportTemplateResponse
 */
GetReportTemplateResponse Client::getReportTemplateWithOptions(const GetReportTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportTemplateId()) {
    query["ReportTemplateId"] = request.getReportTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReportTemplate"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReportTemplateResponse>();
}

/**
 * @summary Retrieve details of a compliance report template.
 *
 * @param request GetReportTemplateRequest
 * @return GetReportTemplateResponse
 */
GetReportTemplateResponse Client::getReportTemplate(const GetReportTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getReportTemplateWithOptions(request, runtime);
}

/**
 * @summary 从规则的合规评估结果维度查询合规概要
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
 * @summary 从规则的合规评估结果维度查询合规概要
 *
 * @param request GetResourceComplianceByConfigRuleRequest
 * @return GetResourceComplianceByConfigRuleResponse
 */
GetResourceComplianceByConfigRuleResponse Client::getResourceComplianceByConfigRule(const GetResourceComplianceByConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceByConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance results for resources in a compliance package.
 *
 * @description This topic provides an example of how to query the compliance results for resources in the compliance package `cp-541e626622af0087****`. The response shows that 7 of the 10 resources are non-compliant.
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
 * @summary Queries the compliance results for resources in a compliance package.
 *
 * @description This topic provides an example of how to query the compliance results for resources in the compliance package `cp-541e626622af0087****`. The response shows that 7 of the 10 resources are non-compliant.
 *
 * @param request GetResourceComplianceByPackRequest
 * @return GetResourceComplianceByPackResponse
 */
GetResourceComplianceByPackResponse Client::getResourceComplianceByPack(const GetResourceComplianceByPackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceByPackWithOptions(request, runtime);
}

/**
 * @summary 查询合规情况按照地域分组统计
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
 * @summary 查询合规情况按照地域分组统计
 *
 * @param request GetResourceComplianceGroupByRegionRequest
 * @return GetResourceComplianceGroupByRegionResponse
 */
GetResourceComplianceGroupByRegionResponse Client::getResourceComplianceGroupByRegion(const GetResourceComplianceGroupByRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceGroupByRegionWithOptions(request, runtime);
}

/**
 * @summary 查询规则对资源的评估结果，评估结果按资源类型进行分组展示
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
 * @summary 查询规则对资源的评估结果，评估结果按资源类型进行分组展示
 *
 * @param request GetResourceComplianceGroupByResourceTypeRequest
 * @return GetResourceComplianceGroupByResourceTypeResponse
 */
GetResourceComplianceGroupByResourceTypeResponse Client::getResourceComplianceGroupByResourceType(const GetResourceComplianceGroupByResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceGroupByResourceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation history of a specified resource. The history is a set of compliance evaluation records that contain the timestamp and details of each evaluation.
 *
 * @description In Cloud Config, each resource has its own compliance evaluation history. A compliance evaluation record is generated when a rule is triggered to evaluate a resource. The collection of these records forms the compliance evaluation history of the resource. Rules can be triggered by configuration changes, periodic execution, or manual execution.
 * This topic provides an example of how to query the compliance evaluation history of the resource `new-bucket`, which is an Object Storage Service (OSS) bucket in the `cn-hangzhou` region. The returned result shows that the compliance evaluation history of the resource includes records with the timestamps `1625200295276` (UTC+8: 2021-07-02 12:31:35) and `1625200228510` (UTC+8: 2021-07-02 12:30:28).
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
 * @summary Queries the compliance evaluation history of a specified resource. The history is a set of compliance evaluation records that contain the timestamp and details of each evaluation.
 *
 * @description In Cloud Config, each resource has its own compliance evaluation history. A compliance evaluation record is generated when a rule is triggered to evaluate a resource. The collection of these records forms the compliance evaluation history of the resource. Rules can be triggered by configuration changes, periodic execution, or manual execution.
 * This topic provides an example of how to query the compliance evaluation history of the resource `new-bucket`, which is an Object Storage Service (OSS) bucket in the `cn-hangzhou` region. The returned result shows that the compliance evaluation history of the resource includes records with the timestamps `1625200295276` (UTC+8: 2021-07-02 12:31:35) and `1625200228510` (UTC+8: 2021-07-02 12:30:28).
 *
 * @param request GetResourceComplianceTimelineRequest
 * @return GetResourceComplianceTimelineResponse
 */
GetResourceComplianceTimelineResponse Client::getResourceComplianceTimeline(const GetResourceComplianceTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceComplianceTimelineWithOptions(request, runtime);
}

/**
 * @summary This operation obtains configuration samples for a specified resource type.
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
 * @summary This operation obtains configuration samples for a specified resource type.
 *
 * @param request GetResourceConfigurationSampleRequest
 * @return GetResourceConfigurationSampleResponse
 */
GetResourceConfigurationSampleResponse Client::getResourceConfigurationSample(const GetResourceConfigurationSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceConfigurationSampleWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration history of a specified resource. Cloud Config records every configuration and relationship change for a resource in a configuration history. Recording starts after you enable the Cloud Config service. By default, the history is retained for 10 years.
 *
 * @description Cloud Config provides a configuration history for each resource that it monitors. The details are as follows:
 * - For existing resources, the configuration history starts when you enable the Cloud Config service.
 * - For new resources created after you enable the service, the configuration history starts when the resource is created. Cloud Config records configuration changes every 10 minutes. When a configuration changes, a new node appears in the history. This node contains the resource configuration details, change details, and the associated management event.
 * This topic provides an example of how to query the configuration history for a resource named `new-bucket`. The resource is a bucket in the `cn-hangzhou` region. The response shows that the creation time of the resource is `1624961112000` (18:05:12 on June 29, 2021, UTC+8).
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
 * @summary Queries the configuration history of a specified resource. Cloud Config records every configuration and relationship change for a resource in a configuration history. Recording starts after you enable the Cloud Config service. By default, the history is retained for 10 years.
 *
 * @description Cloud Config provides a configuration history for each resource that it monitors. The details are as follows:
 * - For existing resources, the configuration history starts when you enable the Cloud Config service.
 * - For new resources created after you enable the service, the configuration history starts when the resource is created. Cloud Config records configuration changes every 10 minutes. When a configuration changes, a new node appears in the history. This node contains the resource configuration details, change details, and the associated management event.
 * This topic provides an example of how to query the configuration history for a resource named `new-bucket`. The resource is a bucket in the `cn-hangzhou` region. The response shows that the creation time of the resource is `1624961112000` (18:05:12 on June 29, 2021, UTC+8).
 *
 * @param request GetResourceConfigurationTimelineRequest
 * @return GetResourceConfigurationTimelineResponse
 */
GetResourceConfigurationTimelineResponse Client::getResourceConfigurationTimeline(const GetResourceConfigurationTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceConfigurationTimelineWithOptions(request, runtime);
}

/**
 * @summary Queries information about the most recently generated global resource inventory for the current account.
 *
 * @description ### Prerequisites
 * You can call the [GenerateResourceInventory](https://help.aliyun.com/document_detail/2398354.html) operation to generate a global resource inventory. You can then call this operation to obtain the URL of the global resource inventory.
 * ### Usage notes
 * This topic provides an example of how to query the most recently generated global resource inventory for the current account.
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
 * @summary Queries information about the most recently generated global resource inventory for the current account.
 *
 * @description ### Prerequisites
 * You can call the [GenerateResourceInventory](https://help.aliyun.com/document_detail/2398354.html) operation to generate a global resource inventory. You can then call this operation to obtain the URL of the global resource inventory.
 * ### Usage notes
 * This topic provides an example of how to query the most recently generated global resource inventory for the current account.
 *
 * @return GetResourceInventoryResponse
 */
GetResourceInventoryResponse Client::getResourceInventory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceInventoryWithOptions(runtime);
}

/**
 * @summary This operation retrieves the property descriptions for a specified resource type.
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
 * @summary This operation retrieves the property descriptions for a specified resource type.
 *
 * @param request GetResourceTypePropertiesRequest
 * @return GetResourceTypePropertiesResponse
 */
GetResourceTypePropertiesResponse Client::getResourceTypeProperties(const GetResourceTypePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceTypePropertiesWithOptions(request, runtime);
}

/**
 * @summary Queries the supported resource relations for a specified resource type.
 *
 * @description This topic provides an example of how to query the resource relations supported by the ACS::ECS::Instance resource type.
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
 * @summary Queries the supported resource relations for a specified resource type.
 *
 * @description This topic provides an example of how to query the resource relations supported by the ACS::ECS::Instance resource type.
 *
 * @param request GetSupportedResourceRelationConfigRequest
 * @return GetSupportedResourceRelationConfigResponse
 */
GetSupportedResourceRelationConfigResponse Client::getSupportedResourceRelationConfig(const GetSupportedResourceRelationConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupportedResourceRelationConfigWithOptions(request, runtime);
}

/**
 * @summary 忽略评估结果增加截止时间
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
 * @summary 忽略评估结果增加截止时间
 *
 * @param request IgnoreAggregateEvaluationResultsRequest
 * @return IgnoreAggregateEvaluationResultsResponse
 */
IgnoreAggregateEvaluationResultsResponse Client::ignoreAggregateEvaluationResults(const IgnoreAggregateEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ignoreAggregateEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Ignores the evaluation results of a rule for specific resources. You can also set a time period to ignore the rule. When the ignore period expires, the system automatically resumes displaying the evaluation results of the rule for the resources.
 *
 * @description After a non-compliant resource is ignored, the rule still evaluates the resource. The evaluation result is Ignored.
 * This topic provides an example of how to ignore the evaluation results of the rule `cr-7e72626622af0051****` for a specified non-compliant resource in the Alibaba Cloud account `100931896542****`. The region ID of the resource is `cn-beijing`, the resource type is `ACS::SLB::LoadBalancer`, and the resource ID is `lb-hp3a3b4ztyfm2plgm****`.
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
 * @summary Ignores the evaluation results of a rule for specific resources. You can also set a time period to ignore the rule. When the ignore period expires, the system automatically resumes displaying the evaluation results of the rule for the resources.
 *
 * @description After a non-compliant resource is ignored, the rule still evaluates the resource. The evaluation result is Ignored.
 * This topic provides an example of how to ignore the evaluation results of the rule `cr-7e72626622af0051****` for a specified non-compliant resource in the Alibaba Cloud account `100931896542****`. The region ID of the resource is `cn-beijing`, the resource type is `ACS::SLB::LoadBalancer`, and the resource ID is `lb-hp3a3b4ztyfm2plgm****`.
 *
 * @param request IgnoreEvaluationResultsRequest
 * @return IgnoreEvaluationResultsResponse
 */
IgnoreEvaluationResultsResponse Client::ignoreEvaluationResults(const IgnoreEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ignoreEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance packs in a specified account group.
 *
 * @description This topic provides an example of how to query the compliance packs in the account group `ca-f632626622af0079****`. The response shows that the account group contains the compliance pack `cp-fdc8626622af00f9****`.
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
 * @summary Queries the compliance packs in a specified account group.
 *
 * @description This topic provides an example of how to query the compliance packs in the account group `ca-f632626622af0079****`. The response shows that the account group contains the compliance pack `cp-fdc8626622af00f9****`.
 *
 * @param request ListAggregateCompliancePacksRequest
 * @return ListAggregateCompliancePacksResponse
 */
ListAggregateCompliancePacksResponse Client::listAggregateCompliancePacks(const ListAggregateCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary 账号组查询投递渠道列表
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
 * @summary 账号组查询投递渠道列表
 *
 * @param request ListAggregateConfigDeliveryChannelsRequest
 * @return ListAggregateConfigDeliveryChannelsResponse
 */
ListAggregateConfigDeliveryChannelsResponse Client::listAggregateConfigDeliveryChannels(const ListAggregateConfigDeliveryChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateConfigDeliveryChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries the evaluation results of a rule for resources in a specified account group.
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
 * @summary Queries the evaluation results of a rule for resources in a specified account group.
 *
 * @param request ListAggregateConfigRuleEvaluationResultsRequest
 * @return ListAggregateConfigRuleEvaluationResultsResponse
 */
ListAggregateConfigRuleEvaluationResultsResponse Client::listAggregateConfigRuleEvaluationResults(const ListAggregateConfigRuleEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateConfigRuleEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary 透出用户账号组维度的评估结果统计
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
 * @summary 透出用户账号组维度的评估结果统计
 *
 * @param request ListAggregateConfigRuleEvaluationStatisticsRequest
 * @return ListAggregateConfigRuleEvaluationStatisticsResponse
 */
ListAggregateConfigRuleEvaluationStatisticsResponse Client::listAggregateConfigRuleEvaluationStatistics(const ListAggregateConfigRuleEvaluationStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateConfigRuleEvaluationStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the rules in a specified account group.
 *
 * @description This topic provides an example of how to query the rules in the account group `ca-f632626622af0079****`. The response shows that the account group contains one rule. This rule evaluates two resources, and the compliance result is `COMPLIANT`.
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
 * @summary Queries the rules in a specified account group.
 *
 * @description This topic provides an example of how to query the rules in the account group `ca-f632626622af0079****`. The response shows that the account group contains one rule. This rule evaluates two resources, and the compliance result is `COMPLIANT`.
 *
 * @param request ListAggregateConfigRulesRequest
 * @return ListAggregateConfigRulesResponse
 */
ListAggregateConfigRulesResponse Client::listAggregateConfigRules(const ListAggregateConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the resources in a specified account group.
 *
 * @description ### Limits
 * The resource checklist displays only some of your resources because Cloud Config supports only specific Alibaba Cloud services and resource types. For more information about the supported services and resource types, see [Supported resource types and resource relationships](https://help.aliyun.com/document_detail/127411.html).
 * ### Usage notes
 * This topic provides an example of how to query the resources of a member with the ID `100931896542****` in the account group `ca-c560626622af0005****`. The response indicates that there are eight resources in total.
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
 * @summary Queries the resources in a specified account group.
 *
 * @description ### Limits
 * The resource checklist displays only some of your resources because Cloud Config supports only specific Alibaba Cloud services and resource types. For more information about the supported services and resource types, see [Supported resource types and resource relationships](https://help.aliyun.com/document_detail/127411.html).
 * ### Usage notes
 * This topic provides an example of how to query the resources of a member with the ID `100931896542****` in the account group `ca-c560626622af0005****`. The response indicates that there are eight resources in total.
 *
 * @param request ListAggregateDiscoveredResourcesRequest
 * @return ListAggregateDiscoveredResourcesResponse
 */
ListAggregateDiscoveredResourcesResponse Client::listAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateDiscoveredResourcesWithOptions(request, runtime);
}

/**
 * @summary This operation retrieves the list of recommended managed rules for an account group.
 *
 * @description For more information about the concepts, working principles, and integration process of dry run rules, see [Definition and working principles of dry run rules](https://help.aliyun.com/document_detail/470802.html).
 * Dry run rules and rule templates are based on the same underlying rule definitions. After you create a resource, a dry run rule continuously checks the resource for compliance.
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
 * @summary This operation retrieves the list of recommended managed rules for an account group.
 *
 * @description For more information about the concepts, working principles, and integration process of dry run rules, see [Definition and working principles of dry run rules](https://help.aliyun.com/document_detail/470802.html).
 * Dry run rules and rule templates are based on the same underlying rule definitions. After you create a resource, a dry run rule continuously checks the resource for compliance.
 *
 * @param request ListAggregateRecommendManagedRulesRequest
 * @return ListAggregateRecommendManagedRulesResponse
 */
ListAggregateRecommendManagedRulesResponse Client::listAggregateRecommendManagedRules(const ListAggregateRecommendManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateRecommendManagedRulesWithOptions(request, runtime);
}

/**
 * @summary 账号组规则修正执行历史
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
 * @summary 账号组规则修正执行历史
 *
 * @param request ListAggregateRemediationExecutionsRequest
 * @return ListAggregateRemediationExecutionsResponse
 */
ListAggregateRemediationExecutionsResponse Client::listAggregateRemediationExecutions(const ListAggregateRemediationExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateRemediationExecutionsWithOptions(request, runtime);
}

/**
 * @summary Queries the remediations in a specified account group.
 *
 * @description This topic provides an example of how to query the remediation settings for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`.
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
 * @summary Queries the remediations in a specified account group.
 *
 * @description This topic provides an example of how to query the remediation settings for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`.
 *
 * @param request ListAggregateRemediationsRequest
 * @return ListAggregateRemediationsResponse
 */
ListAggregateRemediationsResponse Client::listAggregateRemediations(const ListAggregateRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateRemediationsWithOptions(request, runtime);
}

/**
 * @summary Queries the rule evaluation results for resources in a specified account group.
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
 * @summary Queries the rule evaluation results for resources in a specified account group.
 *
 * @param request ListAggregateResourceEvaluationResultsRequest
 * @return ListAggregateResourceEvaluationResultsResponse
 */
ListAggregateResourceEvaluationResultsResponse Client::listAggregateResourceEvaluationResults(const ListAggregateResourceEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateResourceEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary 获取资源关系列表
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
 * @summary 获取资源关系列表
 *
 * @param request ListAggregateResourceRelationsRequest
 * @return ListAggregateResourceRelationsResponse
 */
ListAggregateResourceRelationsResponse Client::listAggregateResourceRelations(const ListAggregateResourceRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateResourceRelationsWithOptions(request, runtime);
}

/**
 * @summary You can use SQL Select statements to search for resources in a specific account group based on fields in the resource properties.
 *
 * @description When you write an SQL `Select` statement, you can retrieve the search fields and their types from the property file of the target resource type. For more information about resource property files, see [alibabacloud-config-resource-schema](https://github.com/aliyun/alibabacloud-config-resource-schema).
 * > - The resource property files contain all resource types that are supported by Cloud Config. These files are named after their corresponding resource types. For example, the property file for the `ACS::ECS::Instance` resource type is `ACS_ECS_Instance.properties.json`. The path to the property files is `config/properties/resource-types`.
 * >
 * > - For more information about SQL search examples and limits, see [SQL search examples](https://help.aliyun.com/document_detail/398718.html) and [Limits of SQL search](https://help.aliyun.com/document_detail/398750.html).
 * This topic provides an example of an advanced search query. The query finds all resources in the account group `ca-4b05626622af000c****` that have a tag key of `business` and a tag value of `online`.
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
 * @summary You can use SQL Select statements to search for resources in a specific account group based on fields in the resource properties.
 *
 * @description When you write an SQL `Select` statement, you can retrieve the search fields and their types from the property file of the target resource type. For more information about resource property files, see [alibabacloud-config-resource-schema](https://github.com/aliyun/alibabacloud-config-resource-schema).
 * > - The resource property files contain all resource types that are supported by Cloud Config. These files are named after their corresponding resource types. For example, the property file for the `ACS::ECS::Instance` resource type is `ACS_ECS_Instance.properties.json`. The path to the property files is `config/properties/resource-types`.
 * >
 * > - For more information about SQL search examples and limits, see [SQL search examples](https://help.aliyun.com/document_detail/398718.html) and [Limits of SQL search](https://help.aliyun.com/document_detail/398750.html).
 * This topic provides an example of an advanced search query. The query finds all resources in the account group `ca-4b05626622af000c****` that have a tag key of `business` and a tag value of `online`.
 *
 * @param request ListAggregateResourcesByAdvancedSearchRequest
 * @return ListAggregateResourcesByAdvancedSearchResponse
 */
ListAggregateResourcesByAdvancedSearchResponse Client::listAggregateResourcesByAdvancedSearch(const ListAggregateResourcesByAdvancedSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregateResourcesByAdvancedSearchWithOptions(request, runtime);
}

/**
 * @summary 获取账号组列表
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
 * @summary 获取账号组列表
 *
 * @param request ListAggregatorsRequest
 * @return ListAggregatorsResponse
 */
ListAggregatorsResponse Client::listAggregators(const ListAggregatorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAggregatorsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of all compliance pack templates provided by CloudConfig.
 *
 * @description A compliance pack template is a collection of rules customized by CloudConfig for compliance scenarios.
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
 * @summary Queries the details of all compliance pack templates provided by CloudConfig.
 *
 * @description A compliance pack template is a collection of rules customized by CloudConfig for compliance scenarios.
 *
 * @param request ListCompliancePackTemplatesRequest
 * @return ListCompliancePackTemplatesResponse
 */
ListCompliancePackTemplatesResponse Client::listCompliancePackTemplates(const ListCompliancePackTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCompliancePackTemplatesWithOptions(request, runtime);
}

/**
 * @summary Lists the compliance packs for the current account.
 *
 * @description This topic provides an example of how to list compliance packs. The response returns one compliance pack record: `cp-fdc8626622af00f9****`.
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
 * @summary Lists the compliance packs for the current account.
 *
 * @description This topic provides an example of how to list compliance packs. The response returns one compliance pack record: `cp-fdc8626622af00f9****`.
 *
 * @param request ListCompliancePacksRequest
 * @return ListCompliancePacksResponse
 */
ListCompliancePacksResponse Client::listCompliancePacks(const ListCompliancePacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCompliancePacksWithOptions(request, runtime);
}

/**
 * @summary Returns a list of delivery channels.
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
 * @summary Returns a list of delivery channels.
 *
 * @param request ListConfigDeliveryChannelsRequest
 * @return ListConfigDeliveryChannelsResponse
 */
ListConfigDeliveryChannelsResponse Client::listConfigDeliveryChannels(const ListConfigDeliveryChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigDeliveryChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries the compliance evaluation results of a rule.
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
 * @summary Queries the compliance evaluation results of a rule.
 *
 * @param request ListConfigRuleEvaluationResultsRequest
 * @return ListConfigRuleEvaluationResultsResponse
 */
ListConfigRuleEvaluationResultsResponse Client::listConfigRuleEvaluationResults(const ListConfigRuleEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRuleEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary 透出用户维度的历史评估结果统计
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
 * @summary 透出用户维度的历史评估结果统计
 *
 * @return ListConfigRuleEvaluationStatisticsResponse
 */
ListConfigRuleEvaluationStatisticsResponse Client::listConfigRuleEvaluationStatistics() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRuleEvaluationStatisticsWithOptions(runtime);
}

/**
 * @summary Lists the operators available for Cloud Config rules.
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
 * @summary Lists the operators available for Cloud Config rules.
 *
 * @return ListConfigRuleOperatorsResponse
 */
ListConfigRuleOperatorsResponse Client::listConfigRuleOperators() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRuleOperatorsWithOptions(runtime);
}

/**
 * @summary Queries a list of rules.
 *
 * @description This topic provides an example of how to query the list of rules for the current account. The sample response indicates that the rule list contains one rule, three resources are evaluated, and the compliance result is COMPLIANT.
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
 * @summary Queries a list of rules.
 *
 * @description This topic provides an example of how to query the list of rules for the current account. The sample response indicates that the rule list contains one rule, three resources are evaluated, and the compliance result is COMPLIANT.
 *
 * @param request ListConfigRulesRequest
 * @return ListConfigRulesResponse
 */
ListConfigRulesResponse Client::listConfigRules(const ListConfigRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of resources that are aggregated across regions in the current Alibaba Cloud account.
 *
 * @description ### Limits
 * Cloud Config supports only specific Alibaba Cloud services and resource types. The returned resource list includes only these supported resources. For more information about supported services and resource types, see [Supported resource types and resource relationships](https://help.aliyun.com/document_detail/127411.html).
 * ### Usage notes
 * This topic provides an example of how to query the resources in your account. The sample response shows that eight resources are returned.
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
 * @summary Queries a list of resources that are aggregated across regions in the current Alibaba Cloud account.
 *
 * @description ### Limits
 * Cloud Config supports only specific Alibaba Cloud services and resource types. The returned resource list includes only these supported resources. For more information about supported services and resource types, see [Supported resource types and resource relationships](https://help.aliyun.com/document_detail/127411.html).
 * ### Usage notes
 * This topic provides an example of how to query the resources in your account. The sample response shows that eight resources are returned.
 *
 * @param request ListDiscoveredResourcesRequest
 * @return ListDiscoveredResourcesResponse
 */
ListDiscoveredResourcesResponse Client::listDiscoveredResources(const ListDiscoveredResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDiscoveredResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the services integrated with CloudConfig and their statuses.
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
 * @summary Queries the services integrated with CloudConfig and their statuses.
 *
 * @return ListIntegratedServiceResponse
 */
ListIntegratedServiceResponse Client::listIntegratedService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntegratedServiceWithOptions(runtime);
}

/**
 * @summary Queries the rule templates that are supported by Cloud Config.
 *
 * @description ### Background information
 * For more information about rule definitions, working principles, and templates, see [Definition and working principles of rules](https://help.aliyun.com/document_detail/128273.html).
 * ### Usage notes
 * This topic provides an example of how to query all rule templates that contain the keyword `CDN`. The sample response shows that a total of 21 rule templates are returned.
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
 * @summary Queries the rule templates that are supported by Cloud Config.
 *
 * @description ### Background information
 * For more information about rule definitions, working principles, and templates, see [Definition and working principles of rules](https://help.aliyun.com/document_detail/128273.html).
 * ### Usage notes
 * This topic provides an example of how to query all rule templates that contain the keyword `CDN`. The sample response shows that a total of 21 rule templates are returned.
 *
 * @param request ListManagedRulesRequest
 * @return ListManagedRulesResponse
 */
ListManagedRulesResponse Client::listManagedRules(const ListManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listManagedRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the proactive rules supported by Cloud Config.
 *
 * @description For more information about the concepts, working principles, and integration procedure of proactive rules, see [Definitions and working principles of proactive rules](https://help.aliyun.com/document_detail/470802.html).
 * Proactive rules and rule templates originate from the same source rules. After you create resources, proactive rules continuously check your resources for compliance.
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
 * @summary Queries the proactive rules supported by Cloud Config.
 *
 * @description For more information about the concepts, working principles, and integration procedure of proactive rules, see [Definitions and working principles of proactive rules](https://help.aliyun.com/document_detail/470802.html).
 * Proactive rules and rule templates originate from the same source rules. After you create resources, proactive rules continuously check your resources for compliance.
 *
 * @param request ListPreManagedRulesRequest
 * @return ListPreManagedRulesResponse
 */
ListPreManagedRulesResponse Client::listPreManagedRules(const ListPreManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPreManagedRulesWithOptions(request, runtime);
}

/**
 * @summary This operation obtains a list of recommended managed rules.
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
 * @summary This operation obtains a list of recommended managed rules.
 *
 * @param request ListRecommendManagedRulesRequest
 * @return ListRecommendManagedRulesResponse
 */
ListRecommendManagedRulesResponse Client::listRecommendManagedRules(const ListRecommendManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecommendManagedRulesWithOptions(request, runtime);
}

/**
 * @summary 修正执行历史
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
 * @summary 修正执行历史
 *
 * @param request ListRemediationExecutionsRequest
 * @return ListRemediationExecutionsResponse
 */
ListRemediationExecutionsResponse Client::listRemediationExecutions(const ListRemediationExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRemediationExecutionsWithOptions(request, runtime);
}

/**
 * @summary 修正模版列表
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
 * @summary 修正模版列表
 *
 * @param request ListRemediationTemplatesRequest
 * @return ListRemediationTemplatesResponse
 */
ListRemediationTemplatesResponse Client::listRemediationTemplates(const ListRemediationTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRemediationTemplatesWithOptions(request, runtime);
}

/**
 * @summary 查询规则的修正
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
 * @summary 查询规则的修正
 *
 * @param request ListRemediationsRequest
 * @return ListRemediationsResponse
 */
ListRemediationsResponse Client::listRemediations(const ListRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRemediationsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of compliance report templates in batches.
 *
 * @param request ListReportTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReportTemplatesResponse
 */
ListReportTemplatesResponse Client::listReportTemplatesWithOptions(const ListReportTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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
    {"action" , "ListReportTemplates"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReportTemplatesResponse>();
}

/**
 * @summary Queries the details of compliance report templates in batches.
 *
 * @param request ListReportTemplatesRequest
 * @return ListReportTemplatesResponse
 */
ListReportTemplatesResponse Client::listReportTemplates(const ListReportTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listReportTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the evaluation results for a resource based on a rule.
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
 * @summary Queries the evaluation results for a resource based on a rule.
 *
 * @param request ListResourceEvaluationResultsRequest
 * @return ListResourceEvaluationResultsResponse
 */
ListResourceEvaluationResultsResponse Client::listResourceEvaluationResults(const ListResourceEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary 获取资源关系列表
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
 * @summary 获取资源关系列表
 *
 * @param request ListResourceRelationsRequest
 * @return ListResourceRelationsResponse
 */
ListResourceRelationsResponse Client::listResourceRelations(const ListResourceRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceRelationsWithOptions(request, runtime);
}

/**
 * @summary 资源列表高级搜索接口
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
 * @summary 资源列表高级搜索接口
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
 * @summary Queries the tags attached to resources in Cloud Config.
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
 * @summary Queries the tags attached to resources in Cloud Config.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 自定义规则评估结果回调
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
 * @summary 自定义规则评估结果回调
 *
 * @param request PutEvaluationsRequest
 * @return PutEvaluationsResponse
 */
PutEvaluationsResponse Client::putEvaluations(const PutEvaluationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEvaluationsWithOptions(request, runtime);
}

/**
 * @summary 取消评估结果的忽略状态
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
 * @summary 取消评估结果的忽略状态
 *
 * @param request RevertAggregateEvaluationResultsRequest
 * @return RevertAggregateEvaluationResultsResponse
 */
RevertAggregateEvaluationResultsResponse Client::revertAggregateEvaluationResults(const RevertAggregateEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revertAggregateEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary 恢复已忽略的某条规则对某些资源的评估结果后，继续显示该规则对资源的评估结果
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
 * @summary 恢复已忽略的某条规则对某些资源的评估结果后，继续显示该规则对资源的评估结果
 *
 * @param request RevertEvaluationResultsRequest
 * @return RevertEvaluationResultsResponse
 */
RevertEvaluationResultsResponse Client::revertEvaluationResults(const RevertEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revertEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary 重新审计指定账号组内的某条规则或某个合规包中的所有规则
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
 * @summary 重新审计指定账号组内的某条规则或某个合规包中的所有规则
 *
 * @param request StartAggregateConfigRuleEvaluationRequest
 * @return StartAggregateConfigRuleEvaluationResponse
 */
StartAggregateConfigRuleEvaluationResponse Client::startAggregateConfigRuleEvaluation(const StartAggregateConfigRuleEvaluationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAggregateConfigRuleEvaluationWithOptions(request, runtime);
}

/**
 * @summary Manually run remediation for a specified account group rule.
 *
 * @description This topic describes how to manually run remediation once for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`. The response indicates that remediation completed successfully.
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Manually run remediation for a specified account group rule.
 *
 * @description This topic describes how to manually run remediation once for the rule `cr-6b7c626622af00b4****` in the account group `ca-6b4a626622af0012****`. The response indicates that remediation completed successfully.
 *
 * @param request StartAggregateRemediationRequest
 * @return StartAggregateRemediationResponse
 */
StartAggregateRemediationResponse Client::startAggregateRemediation(const StartAggregateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAggregateRemediationWithOptions(request, runtime);
}

/**
 * @summary Re-evaluates a specific rule or all rules in a compliance package.
 *
 * @description This topic provides an example of how to re-evaluate the rule cr-9920626622af0035\\*\\*\\*\\*.
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
 * @summary Re-evaluates a specific rule or all rules in a compliance package.
 *
 * @description This topic provides an example of how to re-evaluate the rule cr-9920626622af0035\\*\\*\\*\\*.
 *
 * @param request StartConfigRuleEvaluationRequest
 * @return StartConfigRuleEvaluationResponse
 */
StartConfigRuleEvaluationResponse Client::startConfigRuleEvaluation(const StartConfigRuleEvaluationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startConfigRuleEvaluationWithOptions(request, runtime);
}

/**
 * @summary Starts a re-evaluation of a single resource.
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
 * @summary Starts a re-evaluation of a single resource.
 *
 * @param request StartConfigRuleEvaluationByResourceRequest
 * @return StartConfigRuleEvaluationByResourceResponse
 */
StartConfigRuleEvaluationByResourceResponse Client::startConfigRuleEvaluationByResource(const StartConfigRuleEvaluationByResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startConfigRuleEvaluationByResourceWithOptions(request, runtime);
}

/**
 * @summary 启用配置审计服务
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
 * @summary 启用配置审计服务
 *
 * @return StartConfigurationRecorderResponse
 */
StartConfigurationRecorderResponse Client::startConfigurationRecorder() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startConfigurationRecorderWithOptions(runtime);
}

/**
 * @summary Manually execute the specified rule remediation.
 *
 * @description This topic provides an example of a manual remediation for rule `cr-8a973ac2e2be00a2****`. The returned result indicates a successful manual remediation.
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

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Manually execute the specified rule remediation.
 *
 * @description This topic provides an example of a manual remediation for rule `cr-8a973ac2e2be00a2****`. The returned result indicates a successful manual remediation.
 *
 * @param request StartRemediationRequest
 * @return StartRemediationResponse
 */
StartRemediationResponse Client::startRemediation(const StartRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRemediationWithOptions(request, runtime);
}

/**
 * @summary 停用配置审计服务
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
 * @summary 停用配置审计服务
 *
 * @return StopConfigurationRecorderResponse
 */
StopConfigurationRecorderResponse Client::stopConfigurationRecorder() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopConfigurationRecorderWithOptions(runtime);
}

/**
 * @summary Attaches tags to CloudConfig rules, account groups, and compliance packages.
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
 * @summary Attaches tags to CloudConfig rules, account groups, and compliance packages.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Sends a real-time test notification.
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
 * @summary Sends a real-time test notification.
 *
 * @param request TriggerReportSendRequest
 * @return TriggerReportSendResponse
 */
TriggerReportSendResponse Client::triggerReportSend(const TriggerReportSendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerReportSendWithOptions(request, runtime);
}

/**
 * @summary Detaches tags from resources in Cloud Config.
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
 * @summary Detaches tags from resources in Cloud Config.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a compliance pack in a specified account group.
 *
 * @description This topic provides an example of how to change the value of a parameter for the `eip-bandwidth-limit` rule template to `20` in the `cp-fdc8626622af00f9****` compliance pack that belongs to the `ca-f632626622af0079****` account group.
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
 * @summary Updates a compliance pack in a specified account group.
 *
 * @description This topic provides an example of how to change the value of a parameter for the `eip-bandwidth-limit` rule template to `20` in the `cp-fdc8626622af00f9****` compliance pack that belongs to the `ca-f632626622af0079****` account group.
 *
 * @param request UpdateAggregateCompliancePackRequest
 * @return UpdateAggregateCompliancePackResponse
 */
UpdateAggregateCompliancePackResponse Client::updateAggregateCompliancePack(const UpdateAggregateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregateCompliancePackWithOptions(request, runtime);
}

/**
 * @summary 账号组修改投递渠道
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
 * @summary 账号组修改投递渠道
 *
 * @param request UpdateAggregateConfigDeliveryChannelRequest
 * @return UpdateAggregateConfigDeliveryChannelResponse
 */
UpdateAggregateConfigDeliveryChannelResponse Client::updateAggregateConfigDeliveryChannel(const UpdateAggregateConfigDeliveryChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregateConfigDeliveryChannelWithOptions(request, runtime);
}

/**
 * @summary Modifies the description, input parameters, and risk level of a rule in a specified account group.
 *
 * @description This topic provides an example of how to change the risk level of the rule `cr-4e3d626622af0080****` in the account group `ca-a4e5626622af0079****` to `3` (low risk).
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

  if (!!request.hasConditions()) {
    body["Conditions"] = request.getConditions();
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
 * @summary Modifies the description, input parameters, and risk level of a rule in a specified account group.
 *
 * @description This topic provides an example of how to change the risk level of the rule `cr-4e3d626622af0080****` in the account group `ca-a4e5626622af0079****` to `3` (low risk).
 *
 * @param request UpdateAggregateConfigRuleRequest
 * @return UpdateAggregateConfigRuleResponse
 */
UpdateAggregateConfigRuleResponse Client::updateAggregateConfigRule(const UpdateAggregateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregateConfigRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a specified rule remediation.
 *
 * @description This topic provides an example of how to change the execution mode of the remediation `crr-909ba2d4716700eb****` to `AUTO_EXECUTION` (automatic execution) for a rule in the account group `ca-6b4a626622af0012****`.
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
 * @summary Updates a specified rule remediation.
 *
 * @description This topic provides an example of how to change the execution mode of the remediation `crr-909ba2d4716700eb****` to `AUTO_EXECUTION` (automatic execution) for a rule in the account group `ca-6b4a626622af0012****`.
 *
 * @param request UpdateAggregateRemediationRequest
 * @return UpdateAggregateRemediationResponse
 */
UpdateAggregateRemediationResponse Client::updateAggregateRemediation(const UpdateAggregateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregateRemediationWithOptions(request, runtime);
}

/**
 * @summary The management account or a delegated administrator account of a resource directory can modify the name and description of an account group, and add or remove members.
 *
 * @description This topic provides an example of how to add a member to the account group `ca-dacf86d8314e00eb****`. The member has an ID of `173808452267****`, a name of `Tony`, and an account type of `ResourceDirectory`.
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
 * @summary The management account or a delegated administrator account of a resource directory can modify the name and description of an account group, and add or remove members.
 *
 * @description This topic provides an example of how to add a member to the account group `ca-dacf86d8314e00eb****`. The member has an ID of `173808452267****`, a name of `Tony`, and an account type of `ResourceDirectory`.
 *
 * @param request UpdateAggregatorRequest
 * @return UpdateAggregatorResponse
 */
UpdateAggregatorResponse Client::updateAggregator(const UpdateAggregatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAggregatorWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a specified compliance pack in the current account.
 *
 * @description This topic provides an example of how to change the parameter value for the `eip-bandwidth-limit` rule to `20` in the compliance pack `cp-a8a8626622af0082****`.
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
 * @summary Updates the configuration of a specified compliance pack in the current account.
 *
 * @description This topic provides an example of how to change the parameter value for the `eip-bandwidth-limit` rule to `20` in the compliance pack `cp-a8a8626622af0082****`.
 *
 * @param request UpdateCompliancePackRequest
 * @return UpdateCompliancePackResponse
 */
UpdateCompliancePackResponse Client::updateCompliancePack(const UpdateCompliancePackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCompliancePackWithOptions(request, runtime);
}

/**
 * @summary This operation modifies a delivery channel for the current account.
 *
 * @description This topic provides an example of how to change the status of the delivery channel `cdc-8e45ff4e06a3a8****` to `0` (disabled). After you disable the delivery channel, Cloud Config retains the most recent delivery configuration and stops delivering resource data.
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
 * @summary This operation modifies a delivery channel for the current account.
 *
 * @description This topic provides an example of how to change the status of the delivery channel `cdc-8e45ff4e06a3a8****` to `0` (disabled). After you disable the delivery channel, Cloud Config retains the most recent delivery configuration and stops delivering resource data.
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
 * @description This topic shows how to change the risk level of rule `cr-a260626622af0005****` to `3`, which indicates low risk.
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

  if (!!request.hasConditions()) {
    body["Conditions"] = request.getConditions();
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
 * @description This topic shows how to change the risk level of rule `cr-a260626622af0005****` to `3`, which indicates low risk.
 *
 * @param request UpdateConfigRuleRequest
 * @return UpdateConfigRuleResponse
 */
UpdateConfigRuleResponse Client::updateConfigRule(const UpdateConfigRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConfigRuleWithOptions(request, runtime);
}

/**
 * @summary 修改配置审计监控资源范围
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
 * @summary 修改配置审计监控资源范围
 *
 * @param request UpdateConfigurationRecorderRequest
 * @return UpdateConfigurationRecorderResponse
 */
UpdateConfigurationRecorderResponse Client::updateConfigurationRecorder(const UpdateConfigurationRecorderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConfigurationRecorderWithOptions(request, runtime);
}

/**
 * @summary 修改云产品集成用户状态
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
 * @summary 修改云产品集成用户状态
 *
 * @param request UpdateIntegratedServiceStatusRequest
 * @return UpdateIntegratedServiceStatusResponse
 */
UpdateIntegratedServiceStatusResponse Client::updateIntegratedServiceStatus(const UpdateIntegratedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIntegratedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the specified remediation setting.
 *
 * @description This topic provides an example of how to change the execution mode for the remediation setting `crr-909ba2d4716700eb****` to `AUTO_EXECUTION` (automatic execution).
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
 * @summary Updates the specified remediation setting.
 *
 * @description This topic provides an example of how to change the execution mode for the remediation setting `crr-909ba2d4716700eb****` to `AUTO_EXECUTION` (automatic execution).
 *
 * @param request UpdateRemediationRequest
 * @return UpdateRemediationResponse
 */
UpdateRemediationResponse Client::updateRemediation(const UpdateRemediationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRemediationWithOptions(request, runtime);
}

/**
 * @summary Updates a compliance report template.
 *
 * @param tmpReq UpdateReportTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateReportTemplateResponse
 */
UpdateReportTemplateResponse Client::updateReportTemplateWithOptions(const UpdateReportTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateReportTemplateShrinkRequest request = UpdateReportTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReportScope()) {
    request.setReportScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReportScope(), "ReportScope", "json"));
  }

  json body = {};
  if (!!request.hasReportFileFormats()) {
    body["ReportFileFormats"] = request.getReportFileFormats();
  }

  if (!!request.hasReportGranularity()) {
    body["ReportGranularity"] = request.getReportGranularity();
  }

  if (!!request.hasReportLanguage()) {
    body["ReportLanguage"] = request.getReportLanguage();
  }

  if (!!request.hasReportScopeShrink()) {
    body["ReportScope"] = request.getReportScopeShrink();
  }

  if (!!request.hasReportTemplateDescription()) {
    body["ReportTemplateDescription"] = request.getReportTemplateDescription();
  }

  if (!!request.hasReportTemplateId()) {
    body["ReportTemplateId"] = request.getReportTemplateId();
  }

  if (!!request.hasReportTemplateName()) {
    body["ReportTemplateName"] = request.getReportTemplateName();
  }

  if (!!request.hasSubscriptionFrequency()) {
    body["SubscriptionFrequency"] = request.getSubscriptionFrequency();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateReportTemplate"},
    {"version" , "2020-09-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateReportTemplateResponse>();
}

/**
 * @summary Updates a compliance report template.
 *
 * @param request UpdateReportTemplateRequest
 * @return UpdateReportTemplateResponse
 */
UpdateReportTemplateResponse Client::updateReportTemplate(const UpdateReportTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateReportTemplateWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Config20200907