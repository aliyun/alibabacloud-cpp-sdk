// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/edu_interpreting_20240828.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_EduInterpreting20240828;

Alibabacloud_EduInterpreting20240828::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eduinterpreting"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EduInterpreting20240828::Client::getEndpoint(shared_ptr<string> productId,
                                                                 shared_ptr<string> regionId,
                                                                 shared_ptr<string> endpointRule,
                                                                 shared_ptr<string> network,
                                                                 shared_ptr<string> suffix,
                                                                 shared_ptr<map<string, string>> endpointMap,
                                                                 shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

RecognizeAudioResponse Alibabacloud_EduInterpreting20240828::Client::recognizeAudioWithOptions(shared_ptr<RecognizeAudioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCallBack)) {
    query->insert(pair<string, bool>("EnableCallBack", *request->enableCallBack));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFileUrl)) {
    body->insert(pair<string, string>("AudioFileUrl", *request->audioFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    body->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerBizId)) {
    body->insert(pair<string, string>("OuterBizId", *request->outerBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeAudio"))},
    {"version", boost::any(string("2024-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeAudioResponse(callApi(params, req, runtime));
}

RecognizeAudioResponse Alibabacloud_EduInterpreting20240828::Client::recognizeAudio(shared_ptr<RecognizeAudioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeAudioWithOptions(request, runtime);
}

SubmitEvaluationTaskResponse Alibabacloud_EduInterpreting20240828::Client::submitEvaluationTaskWithOptions(shared_ptr<SubmitEvaluationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioUrl)) {
    body->insert(pair<string, string>("AudioUrl", *request->audioUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    body->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialText)) {
    body->insert(pair<string, string>("MaterialText", *request->materialText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerBizId)) {
    body->insert(pair<string, string>("OuterBizId", *request->outerBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suggestedAnswer)) {
    body->insert(pair<string, string>("SuggestedAnswer", *request->suggestedAnswer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitEvaluationTask"))},
    {"version", boost::any(string("2024-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitEvaluationTaskResponse(callApi(params, req, runtime));
}

SubmitEvaluationTaskResponse Alibabacloud_EduInterpreting20240828::Client::submitEvaluationTask(shared_ptr<SubmitEvaluationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitEvaluationTaskWithOptions(request, runtime);
}

