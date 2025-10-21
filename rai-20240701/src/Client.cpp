#include <darabonba/Core.hpp>
#include <alibabacloud/RAI20240701.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::RAI20240701::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace RAI20240701
{

AlibabaCloud::RAI20240701::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("rai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary BatchContentAsyncDetect
 *
 * @param request BatchContentAsyncDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchContentAsyncDetectResponse
 */
BatchContentAsyncDetectResponse Client::batchContentAsyncDetectWithOptions(const BatchContentAsyncDetectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  json body = {};
  if (!!request.hasServiceParameterList()) {
    body["serviceParameterList"] = request.serviceParameterList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchContentAsyncDetect"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchContentAsyncDetectResponse>();
}

/**
 * @summary BatchContentAsyncDetect
 *
 * @param request BatchContentAsyncDetectRequest
 * @return BatchContentAsyncDetectResponse
 */
BatchContentAsyncDetectResponse Client::batchContentAsyncDetect(const BatchContentAsyncDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchContentAsyncDetectWithOptions(request, runtime);
}

/**
 * @summary BatchContentSyncDetect
 *
 * @param request BatchContentSyncDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchContentSyncDetectResponse
 */
BatchContentSyncDetectResponse Client::batchContentSyncDetectWithOptions(const BatchContentSyncDetectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  json body = {};
  if (!!request.hasServiceParameterList()) {
    body["serviceParameterList"] = request.serviceParameterList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchContentSyncDetect"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchContentSyncDetectResponse>();
}

/**
 * @summary BatchContentSyncDetect
 *
 * @param request BatchContentSyncDetectRequest
 * @return BatchContentSyncDetectResponse
 */
BatchContentSyncDetectResponse Client::batchContentSyncDetect(const BatchContentSyncDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchContentSyncDetectWithOptions(request, runtime);
}

/**
 * @summary 检查用户是否开通RAI服务
 *
 * @param request CheckAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccountResponse
 */
CheckAccountResponse Client::checkAccountWithOptions(const CheckAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAccount"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAccountResponse>();
}

/**
 * @summary 检查用户是否开通RAI服务
 *
 * @param request CheckAccountRequest
 * @return CheckAccountResponse
 */
CheckAccountResponse Client::checkAccount(const CheckAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountWithOptions(request, runtime);
}

/**
 * @summary ContentAsyncDetect
 *
 * @param request ContentAsyncDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContentAsyncDetectResponse
 */
ContentAsyncDetectResponse Client::contentAsyncDetectWithOptions(const ContentAsyncDetectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  json body = {};
  if (!!request.hasServiceParameter()) {
    body["serviceParameter"] = request.serviceParameter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ContentAsyncDetect"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContentAsyncDetectResponse>();
}

/**
 * @summary ContentAsyncDetect
 *
 * @param request ContentAsyncDetectRequest
 * @return ContentAsyncDetectResponse
 */
ContentAsyncDetectResponse Client::contentAsyncDetect(const ContentAsyncDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return contentAsyncDetectWithOptions(request, runtime);
}

/**
 * @summary ContentSyncDetect
 *
 * @param request ContentSyncDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContentSyncDetectResponse
 */
ContentSyncDetectResponse Client::contentSyncDetectWithOptions(const ContentSyncDetectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  json body = {};
  if (!!request.hasServiceParameter()) {
    body["serviceParameter"] = request.serviceParameter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ContentSyncDetect"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContentSyncDetectResponse>();
}

/**
 * @summary ContentSyncDetect
 *
 * @param request ContentSyncDetectRequest
 * @return ContentSyncDetectResponse
 */
ContentSyncDetectResponse Client::contentSyncDetect(const ContentSyncDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return contentSyncDetectWithOptions(request, runtime);
}

/**
 * @summary CreateModelInstance
 *
 * @param request CreateModelInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelInstanceResponse
 */
CreateModelInstanceResponse Client::createModelInstanceWithOptions(const CreateModelInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEasServiceId()) {
    query["EasServiceId"] = request.easServiceId();
  }

  if (!!request.hasEasServiceName()) {
    query["EasServiceName"] = request.easServiceName();
  }

  if (!!request.hasModelCallName()) {
    query["ModelCallName"] = request.modelCallName();
  }

  if (!!request.hasModelCategoryId()) {
    query["ModelCategoryId"] = request.modelCategoryId();
  }

  if (!!request.hasModelToken()) {
    query["ModelToken"] = request.modelToken();
  }

  if (!!request.hasModelUrl()) {
    query["ModelUrl"] = request.modelUrl();
  }

  if (!!request.hasModelVpcUrl()) {
    query["ModelVpcUrl"] = request.modelVpcUrl();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModelInstance"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelInstanceResponse>();
}

/**
 * @summary CreateModelInstance
 *
 * @param request CreateModelInstanceRequest
 * @return CreateModelInstanceResponse
 */
CreateModelInstanceResponse Client::createModelInstance(const CreateModelInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelInstanceWithOptions(request, runtime);
}

/**
 * @summary CreatePolicy
 *
 * @param tmpReq CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePolicyShrinkRequest request = CreatePolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHarmfulCategoryConfigInfoList()) {
    request.setHarmfulCategoryConfigInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.harmfulCategoryConfigInfoList(), "HarmfulCategoryConfigInfoList", "json"));
  }

  if (!!tmpReq.hasPromptAttackInfo()) {
    request.setPromptAttackInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.promptAttackInfo(), "PromptAttackInfo", "json"));
  }

  if (!!tmpReq.hasPromptAttackInfoList()) {
    request.setPromptAttackInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.promptAttackInfoList(), "PromptAttackInfoList", "json"));
  }

  if (!!tmpReq.hasRegularExpressList()) {
    request.setRegularExpressListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.regularExpressList(), "RegularExpressList", "json"));
  }

  if (!!tmpReq.hasSensitiveConfigList()) {
    request.setSensitiveConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sensitiveConfigList(), "SensitiveConfigList", "json"));
  }

  if (!!tmpReq.hasSensitiveTopicList()) {
    request.setSensitiveTopicListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sensitiveTopicList(), "SensitiveTopicList", "json"));
  }

  if (!!tmpReq.hasSensitiveWordList()) {
    request.setSensitiveWordListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sensitiveWordList(), "SensitiveWordList", "json"));
  }

  if (!!tmpReq.hasTopicConfigInfoList()) {
    request.setTopicConfigInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.topicConfigInfoList(), "TopicConfigInfoList", "json"));
  }

  if (!!tmpReq.hasWordGroupInfoList()) {
    request.setWordGroupInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.wordGroupInfoList(), "WordGroupInfoList", "json"));
  }

  json query = {};
  if (!!request.hasContentSafeModelInstanceId()) {
    query["ContentSafeModelInstanceId"] = request.contentSafeModelInstanceId();
  }

  if (!!request.hasEnableSensitiveInputCheck()) {
    query["EnableSensitiveInputCheck"] = request.enableSensitiveInputCheck();
  }

  if (!!request.hasEnableSensitiveOutputCheck()) {
    query["EnableSensitiveOutputCheck"] = request.enableSensitiveOutputCheck();
  }

  if (!!request.hasHarmfulCategoryConfigInfoListShrink()) {
    query["HarmfulCategoryConfigInfoList"] = request.harmfulCategoryConfigInfoListShrink();
  }

  if (!!request.hasInputSafeAnswer()) {
    query["InputSafeAnswer"] = request.inputSafeAnswer();
  }

  if (!!request.hasInputSafeAnswerSwitch()) {
    query["InputSafeAnswerSwitch"] = request.inputSafeAnswerSwitch();
  }

  if (!!request.hasIsSidecarPolicy()) {
    query["IsSidecarPolicy"] = request.isSidecarPolicy();
  }

  if (!!request.hasOutputSafeAnswer()) {
    query["OutputSafeAnswer"] = request.outputSafeAnswer();
  }

  if (!!request.hasOutputSafeAnswerSwitch()) {
    query["OutputSafeAnswerSwitch"] = request.outputSafeAnswerSwitch();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPromptAttackInfoShrink()) {
    query["PromptAttackInfo"] = request.promptAttackInfoShrink();
  }

  if (!!request.hasPromptAttackInfoListShrink()) {
    query["PromptAttackInfoList"] = request.promptAttackInfoListShrink();
  }

  if (!!request.hasPromptAttackModelInstanceId()) {
    query["PromptAttackModelInstanceId"] = request.promptAttackModelInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegularExpressListShrink()) {
    query["RegularExpressList"] = request.regularExpressListShrink();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.sceneType();
  }

  if (!!request.hasSensitiveConfigListShrink()) {
    query["SensitiveConfigList"] = request.sensitiveConfigListShrink();
  }

  if (!!request.hasSensitiveTopicListShrink()) {
    query["SensitiveTopicList"] = request.sensitiveTopicListShrink();
  }

  if (!!request.hasSensitiveTopicModelInstanceId()) {
    query["SensitiveTopicModelInstanceId"] = request.sensitiveTopicModelInstanceId();
  }

  if (!!request.hasSensitiveWordListShrink()) {
    query["SensitiveWordList"] = request.sensitiveWordListShrink();
  }

  if (!!request.hasTopicConfigInfoListShrink()) {
    query["TopicConfigInfoList"] = request.topicConfigInfoListShrink();
  }

  if (!!request.hasWordGroupInfoListShrink()) {
    query["WordGroupInfoList"] = request.wordGroupInfoListShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyResponse>();
}

/**
 * @summary CreatePolicy
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary CreateTopic
 *
 * @param tmpReq CreateTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopicWithOptions(const CreateTopicRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTopicShrinkRequest request = CreateTopicShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBodyData()) {
    request.setBodyDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bodyData(), "BodyData", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopicDefinition()) {
    query["TopicDefinition"] = request.topicDefinition();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasBodyDataShrink()) {
    body["BodyData"] = request.bodyDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTopic"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTopicResponse>();
}

/**
 * @summary CreateTopic
 *
 * @param request CreateTopicRequest
 * @return CreateTopicResponse
 */
CreateTopicResponse Client::createTopic(const CreateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTopicWithOptions(request, runtime);
}

/**
 * @summary CreateWordGroup
 *
 * @param tmpReq CreateWordGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWordGroupResponse
 */
CreateWordGroupResponse Client::createWordGroupWithOptions(const CreateWordGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWordGroupShrinkRequest request = CreateWordGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBodyData()) {
    request.setBodyDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bodyData(), "BodyData", "json"));
  }

  json query = {};
  if (!!request.hasCommit()) {
    query["Commit"] = request.commit();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasBodyDataShrink()) {
    body["BodyData"] = request.bodyDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWordGroup"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWordGroupResponse>();
}

/**
 * @summary CreateWordGroup
 *
 * @param request CreateWordGroupRequest
 * @return CreateWordGroupResponse
 */
CreateWordGroupResponse Client::createWordGroup(const CreateWordGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWordGroupWithOptions(request, runtime);
}

/**
 * @summary DeleteModelInstance
 *
 * @param tmpReq DeleteModelInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelInstanceResponse
 */
DeleteModelInstanceResponse Client::deleteModelInstanceWithOptions(const DeleteModelInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteModelInstanceShrinkRequest request = DeleteModelInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasModelInstanceIdList()) {
    request.setModelInstanceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modelInstanceIdList(), "ModelInstanceIdList", "json"));
  }

  json query = {};
  if (!!request.hasModelInstanceIdListShrink()) {
    query["ModelInstanceIdList"] = request.modelInstanceIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelInstance"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelInstanceResponse>();
}

/**
 * @summary DeleteModelInstance
 *
 * @param request DeleteModelInstanceRequest
 * @return DeleteModelInstanceResponse
 */
DeleteModelInstanceResponse Client::deleteModelInstance(const DeleteModelInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelInstanceWithOptions(request, runtime);
}

/**
 * @summary DeletePolicy
 *
 * @param tmpReq DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeletePolicyShrinkRequest request = DeletePolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPolicyIdList()) {
    request.setPolicyIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policyIdList(), "PolicyIdList", "json"));
  }

  json query = {};
  if (!!request.hasPolicyIdListShrink()) {
    query["PolicyIdList"] = request.policyIdListShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyResponse>();
}

/**
 * @summary DeletePolicy
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary DeleteTopic
 *
 * @param tmpReq DeleteTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopicWithOptions(const DeleteTopicRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteTopicShrinkRequest request = DeleteTopicShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTopicIdList()) {
    request.setTopicIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.topicIdList(), "TopicIdList", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopicIdListShrink()) {
    query["TopicIdList"] = request.topicIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTopic"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTopicResponse>();
}

/**
 * @summary DeleteTopic
 *
 * @param request DeleteTopicRequest
 * @return DeleteTopicResponse
 */
DeleteTopicResponse Client::deleteTopic(const DeleteTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTopicWithOptions(request, runtime);
}

/**
 * @summary DeleteWordGroup
 *
 * @param tmpReq DeleteWordGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWordGroupResponse
 */
DeleteWordGroupResponse Client::deleteWordGroupWithOptions(const DeleteWordGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteWordGroupShrinkRequest request = DeleteWordGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroupIdList()) {
    request.setGroupIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.groupIdList(), "GroupIdList", "json"));
  }

  json query = {};
  if (!!request.hasGroupIdListShrink()) {
    query["GroupIdList"] = request.groupIdListShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWordGroup"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWordGroupResponse>();
}

/**
 * @summary DeleteWordGroup
 *
 * @param request DeleteWordGroupRequest
 * @return DeleteWordGroupResponse
 */
DeleteWordGroupResponse Client::deleteWordGroup(const DeleteWordGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWordGroupWithOptions(request, runtime);
}

/**
 * @summary GetContentDetectResult
 *
 * @param request GetContentDetectResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContentDetectResultResponse
 */
GetContentDetectResultResponse Client::getContentDetectResultWithOptions(const GetContentDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContentDetectResult"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContentDetectResultResponse>();
}

/**
 * @summary GetContentDetectResult
 *
 * @param request GetContentDetectResultRequest
 * @return GetContentDetectResultResponse
 */
GetContentDetectResultResponse Client::getContentDetectResult(const GetContentDetectResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContentDetectResultWithOptions(request, runtime);
}

/**
 * @summary GetModelInputContentDetectResult
 *
 * @param request GetModelInputContentDetectResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelInputContentDetectResultResponse
 */
GetModelInputContentDetectResultResponse Client::getModelInputContentDetectResultWithOptions(const GetModelInputContentDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelInputContentDetectResult"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelInputContentDetectResultResponse>();
}

/**
 * @summary GetModelInputContentDetectResult
 *
 * @param request GetModelInputContentDetectResultRequest
 * @return GetModelInputContentDetectResultResponse
 */
GetModelInputContentDetectResultResponse Client::getModelInputContentDetectResult(const GetModelInputContentDetectResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelInputContentDetectResultWithOptions(request, runtime);
}

/**
 * @summary GetModelInstanceInfo
 *
 * @param request GetModelInstanceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelInstanceInfoResponse
 */
GetModelInstanceInfoResponse Client::getModelInstanceInfoWithOptions(const GetModelInstanceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelInstanceId()) {
    query["ModelInstanceId"] = request.modelInstanceId();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.sceneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelInstanceInfo"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelInstanceInfoResponse>();
}

/**
 * @summary GetModelInstanceInfo
 *
 * @param request GetModelInstanceInfoRequest
 * @return GetModelInstanceInfoResponse
 */
GetModelInstanceInfoResponse Client::getModelInstanceInfo(const GetModelInstanceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelInstanceInfoWithOptions(request, runtime);
}

/**
 * @summary GetModelOutputContentDetectResult
 *
 * @param request GetModelOutputContentDetectResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelOutputContentDetectResultResponse
 */
GetModelOutputContentDetectResultResponse Client::getModelOutputContentDetectResultWithOptions(const GetModelOutputContentDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelOutputContentDetectResult"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelOutputContentDetectResultResponse>();
}

/**
 * @summary GetModelOutputContentDetectResult
 *
 * @param request GetModelOutputContentDetectResultRequest
 * @return GetModelOutputContentDetectResultResponse
 */
GetModelOutputContentDetectResultResponse Client::getModelOutputContentDetectResult(const GetModelOutputContentDetectResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelOutputContentDetectResultWithOptions(request, runtime);
}

/**
 * @summary GetPolicyDefaultOptions
 *
 * @param request GetPolicyDefaultOptionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyDefaultOptionsResponse
 */
GetPolicyDefaultOptionsResponse Client::getPolicyDefaultOptionsWithOptions(const GetPolicyDefaultOptionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyDefaultOptions"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyDefaultOptionsResponse>();
}

/**
 * @summary GetPolicyDefaultOptions
 *
 * @param request GetPolicyDefaultOptionsRequest
 * @return GetPolicyDefaultOptionsResponse
 */
GetPolicyDefaultOptionsResponse Client::getPolicyDefaultOptions(const GetPolicyDefaultOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyDefaultOptionsWithOptions(request, runtime);
}

/**
 * @summary GetPolicyInfo
 *
 * @param request GetPolicyInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyInfoResponse
 */
GetPolicyInfoResponse Client::getPolicyInfoWithOptions(const GetPolicyInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyInfo"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyInfoResponse>();
}

/**
 * @summary GetPolicyInfo
 *
 * @param request GetPolicyInfoRequest
 * @return GetPolicyInfoResponse
 */
GetPolicyInfoResponse Client::getPolicyInfo(const GetPolicyInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyInfoWithOptions(request, runtime);
}

/**
 * @summary GetTopic
 *
 * @param request GetTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopicWithOptions(const GetTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopicId()) {
    query["TopicId"] = request.topicId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTopic"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicResponse>();
}

/**
 * @summary GetTopic
 *
 * @param request GetTopicRequest
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopic(const GetTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicWithOptions(request, runtime);
}

/**
 * @summary GetWordGroup
 *
 * @param request GetWordGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWordGroupResponse
 */
GetWordGroupResponse Client::getWordGroupWithOptions(const GetWordGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWordGroup"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWordGroupResponse>();
}

/**
 * @summary GetWordGroup
 *
 * @param request GetWordGroupRequest
 * @return GetWordGroupResponse
 */
GetWordGroupResponse Client::getWordGroup(const GetWordGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWordGroupWithOptions(request, runtime);
}

/**
 * @summary ListModelCategory
 *
 * @param request ListModelCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelCategoryResponse
 */
ListModelCategoryResponse Client::listModelCategoryWithOptions(const ListModelCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContentSafeImageSupported()) {
    query["ContentSafeImageSupported"] = request.contentSafeImageSupported();
  }

  if (!!request.hasContentSafeTextSupported()) {
    query["ContentSafeTextSupported"] = request.contentSafeTextSupported();
  }

  if (!!request.hasModelCategoryName()) {
    query["ModelCategoryName"] = request.modelCategoryName();
  }

  if (!!request.hasModelSource()) {
    query["ModelSource"] = request.modelSource();
  }

  if (!!request.hasPromptAttackTextSupported()) {
    query["PromptAttackTextSupported"] = request.promptAttackTextSupported();
  }

  if (!!request.hasSensitiveTopicTextSupported()) {
    query["SensitiveTopicTextSupported"] = request.sensitiveTopicTextSupported();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelCategory"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelCategoryResponse>();
}

/**
 * @summary ListModelCategory
 *
 * @param request ListModelCategoryRequest
 * @return ListModelCategoryResponse
 */
ListModelCategoryResponse Client::listModelCategory(const ListModelCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelCategoryWithOptions(request, runtime);
}

/**
 * @summary ListModelInstance
 *
 * @param request ListModelInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelInstanceResponse
 */
ListModelInstanceResponse Client::listModelInstanceWithOptions(const ListModelInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEasServiceName()) {
    query["EasServiceName"] = request.easServiceName();
  }

  if (!!request.hasIsSidecarPolicy()) {
    query["IsSidecarPolicy"] = request.isSidecarPolicy();
  }

  if (!!request.hasIsSupportContentSafe()) {
    query["IsSupportContentSafe"] = request.isSupportContentSafe();
  }

  if (!!request.hasIsSupportPromptAttack()) {
    query["IsSupportPromptAttack"] = request.isSupportPromptAttack();
  }

  if (!!request.hasIsSupportSensitiveTopic()) {
    query["IsSupportSensitiveTopic"] = request.isSupportSensitiveTopic();
  }

  if (!!request.hasModelSource()) {
    query["ModelSource"] = request.modelSource();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelInstance"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelInstanceResponse>();
}

/**
 * @summary ListModelInstance
 *
 * @param request ListModelInstanceRequest
 * @return ListModelInstanceResponse
 */
ListModelInstanceResponse Client::listModelInstance(const ListModelInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelInstanceWithOptions(request, runtime);
}

/**
 * @summary ListPolicy
 *
 * @param request ListPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyResponse
 */
ListPolicyResponse Client::listPolicyWithOptions(const ListPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsSidecarPolicy()) {
    query["IsSidecarPolicy"] = request.isSidecarPolicy();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPolicyIdentifier()) {
    query["PolicyIdentifier"] = request.policyIdentifier();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.sceneType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicy"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicyResponse>();
}

/**
 * @summary ListPolicy
 *
 * @param request ListPolicyRequest
 * @return ListPolicyResponse
 */
ListPolicyResponse Client::listPolicy(const ListPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyWithOptions(request, runtime);
}

/**
 * @summary ListTopic
 *
 * @param request ListTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicResponse
 */
ListTopicResponse Client::listTopicWithOptions(const ListTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTopic"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTopicResponse>();
}

/**
 * @summary ListTopic
 *
 * @param request ListTopicRequest
 * @return ListTopicResponse
 */
ListTopicResponse Client::listTopic(const ListTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicWithOptions(request, runtime);
}

/**
 * @summary ListWordGroup
 *
 * @param request ListWordGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWordGroupResponse
 */
ListWordGroupResponse Client::listWordGroupWithOptions(const ListWordGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWordGroup"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWordGroupResponse>();
}

/**
 * @summary ListWordGroup
 *
 * @param request ListWordGroupRequest
 * @return ListWordGroupResponse
 */
ListWordGroupResponse Client::listWordGroup(const ListWordGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWordGroupWithOptions(request, runtime);
}

/**
 * @summary ModelInputContentAsyncDetect
 *
 * @param tmpReq ModelInputContentAsyncDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelInputContentAsyncDetectResponse
 */
ModelInputContentAsyncDetectResponse Client::modelInputContentAsyncDetectWithOptions(const ModelInputContentAsyncDetectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModelInputContentAsyncDetectShrinkRequest request = ModelInputContentAsyncDetectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBodyData()) {
    request.setBodyDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bodyData(), "BodyData", "json"));
  }

  json query = {};
  if (!!request.hasPolicyIdentifier()) {
    query["PolicyIdentifier"] = request.policyIdentifier();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  json body = {};
  if (!!request.hasBodyDataShrink()) {
    body["BodyData"] = request.bodyDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelInputContentAsyncDetect"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelInputContentAsyncDetectResponse>();
}

/**
 * @summary ModelInputContentAsyncDetect
 *
 * @param request ModelInputContentAsyncDetectRequest
 * @return ModelInputContentAsyncDetectResponse
 */
ModelInputContentAsyncDetectResponse Client::modelInputContentAsyncDetect(const ModelInputContentAsyncDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelInputContentAsyncDetectWithOptions(request, runtime);
}

/**
 * @summary ModelInputContentSyncDetect
 *
 * @param tmpReq ModelInputContentSyncDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelInputContentSyncDetectResponse
 */
ModelInputContentSyncDetectResponse Client::modelInputContentSyncDetectWithOptions(const ModelInputContentSyncDetectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModelInputContentSyncDetectShrinkRequest request = ModelInputContentSyncDetectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBodyData()) {
    request.setBodyDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bodyData(), "BodyData", "json"));
  }

  json query = {};
  if (!!request.hasPolicyIdentifier()) {
    query["PolicyIdentifier"] = request.policyIdentifier();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  json body = {};
  if (!!request.hasBodyDataShrink()) {
    body["BodyData"] = request.bodyDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelInputContentSyncDetect"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelInputContentSyncDetectResponse>();
}

/**
 * @summary ModelInputContentSyncDetect
 *
 * @param request ModelInputContentSyncDetectRequest
 * @return ModelInputContentSyncDetectResponse
 */
ModelInputContentSyncDetectResponse Client::modelInputContentSyncDetect(const ModelInputContentSyncDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelInputContentSyncDetectWithOptions(request, runtime);
}

/**
 * @summary ModelOutputContentAsyncDetect
 *
 * @param tmpReq ModelOutputContentAsyncDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelOutputContentAsyncDetectResponse
 */
ModelOutputContentAsyncDetectResponse Client::modelOutputContentAsyncDetectWithOptions(const ModelOutputContentAsyncDetectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModelOutputContentAsyncDetectShrinkRequest request = ModelOutputContentAsyncDetectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBodyData()) {
    request.setBodyDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bodyData(), "BodyData", "json"));
  }

  json query = {};
  if (!!request.hasPolicyIdentifier()) {
    query["PolicyIdentifier"] = request.policyIdentifier();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  json body = {};
  if (!!request.hasBodyDataShrink()) {
    body["BodyData"] = request.bodyDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelOutputContentAsyncDetect"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelOutputContentAsyncDetectResponse>();
}

/**
 * @summary ModelOutputContentAsyncDetect
 *
 * @param request ModelOutputContentAsyncDetectRequest
 * @return ModelOutputContentAsyncDetectResponse
 */
ModelOutputContentAsyncDetectResponse Client::modelOutputContentAsyncDetect(const ModelOutputContentAsyncDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelOutputContentAsyncDetectWithOptions(request, runtime);
}

/**
 * @summary ModelOutputContentSyncDetect
 *
 * @param tmpReq ModelOutputContentSyncDetectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelOutputContentSyncDetectResponse
 */
ModelOutputContentSyncDetectResponse Client::modelOutputContentSyncDetectWithOptions(const ModelOutputContentSyncDetectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModelOutputContentSyncDetectShrinkRequest request = ModelOutputContentSyncDetectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBodyData()) {
    request.setBodyDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bodyData(), "BodyData", "json"));
  }

  json query = {};
  if (!!request.hasPolicyIdentifier()) {
    query["PolicyIdentifier"] = request.policyIdentifier();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  json body = {};
  if (!!request.hasBodyDataShrink()) {
    body["BodyData"] = request.bodyDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModelOutputContentSyncDetect"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelOutputContentSyncDetectResponse>();
}

/**
 * @summary ModelOutputContentSyncDetect
 *
 * @param request ModelOutputContentSyncDetectRequest
 * @return ModelOutputContentSyncDetectResponse
 */
ModelOutputContentSyncDetectResponse Client::modelOutputContentSyncDetect(const ModelOutputContentSyncDetectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelOutputContentSyncDetectWithOptions(request, runtime);
}

/**
 * @summary 注册RAI账号
 *
 * @param request RegisterAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterAccountResponse
 */
RegisterAccountResponse Client::registerAccountWithOptions(const RegisterAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemo()) {
    query["Memo"] = request.memo();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterAccount"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterAccountResponse>();
}

/**
 * @summary 注册RAI账号
 *
 * @param request RegisterAccountRequest
 * @return RegisterAccountResponse
 */
RegisterAccountResponse Client::registerAccount(const RegisterAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerAccountWithOptions(request, runtime);
}

/**
 * @summary UpdateModelInstance
 *
 * @param request UpdateModelInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelInstanceResponse
 */
UpdateModelInstanceResponse Client::updateModelInstanceWithOptions(const UpdateModelInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEasServiceId()) {
    query["EasServiceId"] = request.easServiceId();
  }

  if (!!request.hasEasServiceName()) {
    query["EasServiceName"] = request.easServiceName();
  }

  if (!!request.hasModelCallName()) {
    query["ModelCallName"] = request.modelCallName();
  }

  if (!!request.hasModelCategoryId()) {
    query["ModelCategoryId"] = request.modelCategoryId();
  }

  if (!!request.hasModelInstanceId()) {
    query["ModelInstanceId"] = request.modelInstanceId();
  }

  if (!!request.hasModelToken()) {
    query["ModelToken"] = request.modelToken();
  }

  if (!!request.hasModelUrl()) {
    query["ModelUrl"] = request.modelUrl();
  }

  if (!!request.hasModelVpcUrl()) {
    query["ModelVpcUrl"] = request.modelVpcUrl();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateModelInstance"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelInstanceResponse>();
}

/**
 * @summary UpdateModelInstance
 *
 * @param request UpdateModelInstanceRequest
 * @return UpdateModelInstanceResponse
 */
UpdateModelInstanceResponse Client::updateModelInstance(const UpdateModelInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModelInstanceWithOptions(request, runtime);
}

/**
 * @summary UpdatePolicy
 *
 * @param tmpReq UpdatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolicyResponse
 */
UpdatePolicyResponse Client::updatePolicyWithOptions(const UpdatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolicyShrinkRequest request = UpdatePolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHarmfulCategoryConfigInfoList()) {
    request.setHarmfulCategoryConfigInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.harmfulCategoryConfigInfoList(), "HarmfulCategoryConfigInfoList", "json"));
  }

  if (!!tmpReq.hasPromptAttackInfo()) {
    request.setPromptAttackInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.promptAttackInfo(), "PromptAttackInfo", "json"));
  }

  if (!!tmpReq.hasPromptAttackInfoList()) {
    request.setPromptAttackInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.promptAttackInfoList(), "PromptAttackInfoList", "json"));
  }

  if (!!tmpReq.hasRegularExpressList()) {
    request.setRegularExpressListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.regularExpressList(), "RegularExpressList", "json"));
  }

  if (!!tmpReq.hasSensitiveConfigList()) {
    request.setSensitiveConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sensitiveConfigList(), "SensitiveConfigList", "json"));
  }

  if (!!tmpReq.hasSensitiveTopicList()) {
    request.setSensitiveTopicListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sensitiveTopicList(), "SensitiveTopicList", "json"));
  }

  if (!!tmpReq.hasSensitiveWordList()) {
    request.setSensitiveWordListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sensitiveWordList(), "SensitiveWordList", "json"));
  }

  if (!!tmpReq.hasTopicConfigInfoList()) {
    request.setTopicConfigInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.topicConfigInfoList(), "TopicConfigInfoList", "json"));
  }

  if (!!tmpReq.hasWordGroupInfoList()) {
    request.setWordGroupInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.wordGroupInfoList(), "WordGroupInfoList", "json"));
  }

  json query = {};
  if (!!request.hasContentSafeModelInstanceId()) {
    query["ContentSafeModelInstanceId"] = request.contentSafeModelInstanceId();
  }

  if (!!request.hasEnableSensitiveInputCheck()) {
    query["EnableSensitiveInputCheck"] = request.enableSensitiveInputCheck();
  }

  if (!!request.hasEnableSensitiveOutputCheck()) {
    query["EnableSensitiveOutputCheck"] = request.enableSensitiveOutputCheck();
  }

  if (!!request.hasHarmfulCategoryConfigInfoListShrink()) {
    query["HarmfulCategoryConfigInfoList"] = request.harmfulCategoryConfigInfoListShrink();
  }

  if (!!request.hasInputSafeAnswer()) {
    query["InputSafeAnswer"] = request.inputSafeAnswer();
  }

  if (!!request.hasInputSafeAnswerSwitch()) {
    query["InputSafeAnswerSwitch"] = request.inputSafeAnswerSwitch();
  }

  if (!!request.hasIsSidecarPolicy()) {
    query["IsSidecarPolicy"] = request.isSidecarPolicy();
  }

  if (!!request.hasOutputSafeAnswer()) {
    query["OutputSafeAnswer"] = request.outputSafeAnswer();
  }

  if (!!request.hasOutputSafeAnswerSwitch()) {
    query["OutputSafeAnswerSwitch"] = request.outputSafeAnswerSwitch();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPromptAttackInfoShrink()) {
    query["PromptAttackInfo"] = request.promptAttackInfoShrink();
  }

  if (!!request.hasPromptAttackInfoListShrink()) {
    query["PromptAttackInfoList"] = request.promptAttackInfoListShrink();
  }

  if (!!request.hasPromptAttackModelInstanceId()) {
    query["PromptAttackModelInstanceId"] = request.promptAttackModelInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegularExpressListShrink()) {
    query["RegularExpressList"] = request.regularExpressListShrink();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.sceneType();
  }

  if (!!request.hasSensitiveConfigListShrink()) {
    query["SensitiveConfigList"] = request.sensitiveConfigListShrink();
  }

  if (!!request.hasSensitiveTopicListShrink()) {
    query["SensitiveTopicList"] = request.sensitiveTopicListShrink();
  }

  if (!!request.hasSensitiveTopicModelInstanceId()) {
    query["SensitiveTopicModelInstanceId"] = request.sensitiveTopicModelInstanceId();
  }

  if (!!request.hasSensitiveWordListShrink()) {
    query["SensitiveWordList"] = request.sensitiveWordListShrink();
  }

  if (!!request.hasTopicConfigInfoListShrink()) {
    query["TopicConfigInfoList"] = request.topicConfigInfoListShrink();
  }

  if (!!request.hasWordGroupInfoListShrink()) {
    query["WordGroupInfoList"] = request.wordGroupInfoListShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePolicy"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolicyResponse>();
}

/**
 * @summary UpdatePolicy
 *
 * @param request UpdatePolicyRequest
 * @return UpdatePolicyResponse
 */
UpdatePolicyResponse Client::updatePolicy(const UpdatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolicyWithOptions(request, runtime);
}

/**
 * @summary UpdateTopic
 *
 * @param tmpReq UpdateTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTopicResponse
 */
UpdateTopicResponse Client::updateTopicWithOptions(const UpdateTopicRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTopicShrinkRequest request = UpdateTopicShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBodyData()) {
    request.setBodyDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bodyData(), "BodyData", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopicDefinition()) {
    query["TopicDefinition"] = request.topicDefinition();
  }

  if (!!request.hasTopicId()) {
    query["TopicId"] = request.topicId();
  }

  if (!!request.hasTopicName()) {
    query["TopicName"] = request.topicName();
  }

  json body = {};
  if (!!request.hasBodyDataShrink()) {
    body["BodyData"] = request.bodyDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTopic"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTopicResponse>();
}

/**
 * @summary UpdateTopic
 *
 * @param request UpdateTopicRequest
 * @return UpdateTopicResponse
 */
UpdateTopicResponse Client::updateTopic(const UpdateTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTopicWithOptions(request, runtime);
}

/**
 * @summary UpdateWordGroup
 *
 * @param tmpReq UpdateWordGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWordGroupResponse
 */
UpdateWordGroupResponse Client::updateWordGroupWithOptions(const UpdateWordGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWordGroupShrinkRequest request = UpdateWordGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBodyData()) {
    request.setBodyDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bodyData(), "BodyData", "json"));
  }

  json query = {};
  if (!!request.hasCommit()) {
    query["Commit"] = request.commit();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWordInfoListModified()) {
    query["WordInfoListModified"] = request.wordInfoListModified();
  }

  json body = {};
  if (!!request.hasBodyDataShrink()) {
    body["BodyData"] = request.bodyDataShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWordGroup"},
    {"version" , "2024-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWordGroupResponse>();
}

/**
 * @summary UpdateWordGroup
 *
 * @param request UpdateWordGroupRequest
 * @return UpdateWordGroupResponse
 */
UpdateWordGroupResponse Client::updateWordGroup(const UpdateWordGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWordGroupWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace RAI20240701