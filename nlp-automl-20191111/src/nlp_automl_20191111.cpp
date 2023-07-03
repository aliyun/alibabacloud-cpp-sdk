// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/nlp_automl_20191111.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Nlp-automl20191111;

Alibabacloud_Nlp-automl20191111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("nlp-automl"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Nlp-automl20191111::Client::getEndpoint(shared_ptr<string> productId,
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

CreateAsyncPredictResponse Alibabacloud_Nlp-automl20191111::Client::createAsyncPredictWithOptions(shared_ptr<CreateAsyncPredictRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailTag)) {
    body->insert(pair<string, string>("DetailTag", *request->detailTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fetchContent)) {
    body->insert(pair<string, string>("FetchContent", *request->fetchContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileContent)) {
    body->insert(pair<string, string>("FileContent", *request->fileContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    body->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    body->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topK)) {
    body->insert(pair<string, long>("TopK", *request->topK));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAsyncPredict"))},
    {"version", boost::any(string("2019-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAsyncPredictResponse(callApi(params, req, runtime));
}

CreateAsyncPredictResponse Alibabacloud_Nlp-automl20191111::Client::createAsyncPredict(shared_ptr<CreateAsyncPredictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAsyncPredictWithOptions(request, runtime);
}

FindUserReport4AlinlpResponse Alibabacloud_Nlp-automl20191111::Client::findUserReport4AlinlpWithOptions(shared_ptr<FindUserReport4AlinlpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTime)) {
    body->insert(pair<string, string>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->customerUserParentId)) {
    body->insert(pair<string, long>("CustomerUserParentId", *request->customerUserParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelType)) {
    body->insert(pair<string, string>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FindUserReport4Alinlp"))},
    {"version", boost::any(string("2019-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FindUserReport4AlinlpResponse(callApi(params, req, runtime));
}

FindUserReport4AlinlpResponse Alibabacloud_Nlp-automl20191111::Client::findUserReport4Alinlp(shared_ptr<FindUserReport4AlinlpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findUserReport4AlinlpWithOptions(request, runtime);
}

GetAsyncPredictResponse Alibabacloud_Nlp-automl20191111::Client::getAsyncPredictWithOptions(shared_ptr<GetAsyncPredictRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncPredict"))},
    {"version", boost::any(string("2019-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncPredictResponse(callApi(params, req, runtime));
}

GetAsyncPredictResponse Alibabacloud_Nlp-automl20191111::Client::getAsyncPredict(shared_ptr<GetAsyncPredictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncPredictWithOptions(request, runtime);
}

GetPredictResultResponse Alibabacloud_Nlp-automl20191111::Client::getPredictResultWithOptions(shared_ptr<GetPredictResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailTag)) {
    body->insert(pair<string, string>("DetailTag", *request->detailTag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    body->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topK)) {
    body->insert(pair<string, long>("TopK", *request->topK));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPredictResult"))},
    {"version", boost::any(string("2019-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPredictResultResponse(callApi(params, req, runtime));
}

GetPredictResultResponse Alibabacloud_Nlp-automl20191111::Client::getPredictResult(shared_ptr<GetPredictResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPredictResultWithOptions(request, runtime);
}

RunPreTrainServiceResponse Alibabacloud_Nlp-automl20191111::Client::runPreTrainServiceWithOptions(shared_ptr<RunPreTrainServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->predictContent)) {
    body->insert(pair<string, string>("PredictContent", *request->predictContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    body->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunPreTrainService"))},
    {"version", boost::any(string("2019-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunPreTrainServiceResponse(callApi(params, req, runtime));
}

RunPreTrainServiceResponse Alibabacloud_Nlp-automl20191111::Client::runPreTrainService(shared_ptr<RunPreTrainServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runPreTrainServiceWithOptions(request, runtime);
}

RunPreTrainServiceNewResponse Alibabacloud_Nlp-automl20191111::Client::runPreTrainServiceNewWithOptions(shared_ptr<RunPreTrainServiceNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->predictContent)) {
    body->insert(pair<string, string>("PredictContent", *request->predictContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    body->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunPreTrainServiceNew"))},
    {"version", boost::any(string("2019-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunPreTrainServiceNewResponse(callApi(params, req, runtime));
}

RunPreTrainServiceNewResponse Alibabacloud_Nlp-automl20191111::Client::runPreTrainServiceNew(shared_ptr<RunPreTrainServiceNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runPreTrainServiceNewWithOptions(request, runtime);
}

