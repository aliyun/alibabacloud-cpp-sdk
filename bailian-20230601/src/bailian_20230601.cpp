// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/bailian_20230601.hpp>
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

using namespace Alibabacloud_Bailian20230601;

Alibabacloud_Bailian20230601::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("bailian"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Bailian20230601::Client::getEndpoint(shared_ptr<string> productId,
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

AddEnterpriseTagResponse Alibabacloud_Bailian20230601::Client::addEnterpriseTagWithOptions(shared_ptr<AddEnterpriseTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEnterpriseTag"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEnterpriseTagResponse(callApi(params, req, runtime));
}

AddEnterpriseTagResponse Alibabacloud_Bailian20230601::Client::addEnterpriseTag(shared_ptr<AddEnterpriseTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEnterpriseTagWithOptions(request, runtime);
}

CancelFineTuneJobResponse Alibabacloud_Bailian20230601::Client::cancelFineTuneJobWithOptions(shared_ptr<CancelFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelFineTuneJob"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelFineTuneJobResponse(callApi(params, req, runtime));
}

CancelFineTuneJobResponse Alibabacloud_Bailian20230601::Client::cancelFineTuneJob(shared_ptr<CancelFineTuneJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelFineTuneJobWithOptions(request, runtime);
}

CreateFineTuneJobResponse Alibabacloud_Bailian20230601::Client::createFineTuneJobWithOptions(shared_ptr<CreateFineTuneJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateFineTuneJobShrinkRequest> request = make_shared<CreateFineTuneJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateFineTuneJobRequestHyperParameters>(tmpReq->hyperParameters)) {
    request->hyperParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hyperParameters, make_shared<string>("HyperParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->trainingFiles)) {
    request->trainingFilesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->trainingFiles, make_shared<string>("TrainingFiles"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->validationFiles)) {
    request->validationFilesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->validationFiles, make_shared<string>("ValidationFiles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseModel)) {
    body->insert(pair<string, string>("BaseModel", *request->baseModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hyperParametersShrink)) {
    body->insert(pair<string, string>("HyperParameters", *request->hyperParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    body->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainingFilesShrink)) {
    body->insert(pair<string, string>("TrainingFiles", *request->trainingFilesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainingType)) {
    body->insert(pair<string, string>("TrainingType", *request->trainingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validationFilesShrink)) {
    body->insert(pair<string, string>("ValidationFiles", *request->validationFilesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFineTuneJob"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFineTuneJobResponse(callApi(params, req, runtime));
}

CreateFineTuneJobResponse Alibabacloud_Bailian20230601::Client::createFineTuneJob(shared_ptr<CreateFineTuneJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFineTuneJobWithOptions(request, runtime);
}

CreateServiceResponse Alibabacloud_Bailian20230601::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceResponse(callApi(params, req, runtime));
}

CreateServiceResponse Alibabacloud_Bailian20230601::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceWithOptions(request, runtime);
}

CreateTextEmbeddingsResponse Alibabacloud_Bailian20230601::Client::createTextEmbeddingsWithOptions(shared_ptr<CreateTextEmbeddingsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTextEmbeddingsShrinkRequest> request = make_shared<CreateTextEmbeddingsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textType)) {
    query->insert(pair<string, string>("TextType", *request->textType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTextEmbeddings"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTextEmbeddingsResponse(callApi(params, req, runtime));
}

CreateTextEmbeddingsResponse Alibabacloud_Bailian20230601::Client::createTextEmbeddings(shared_ptr<CreateTextEmbeddingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTextEmbeddingsWithOptions(request, runtime);
}

CreateTokenResponse Alibabacloud_Bailian20230601::Client::createTokenWithOptions(shared_ptr<CreateTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateToken"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTokenResponse(callApi(params, req, runtime));
}

CreateTokenResponse Alibabacloud_Bailian20230601::Client::createToken(shared_ptr<CreateTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTokenWithOptions(request, runtime);
}

DelEnterpriseTagResponse Alibabacloud_Bailian20230601::Client::delEnterpriseTagWithOptions(shared_ptr<DelEnterpriseTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagId)) {
    query->insert(pair<string, long>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DelEnterpriseTag"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DelEnterpriseTagResponse(callApi(params, req, runtime));
}

DelEnterpriseTagResponse Alibabacloud_Bailian20230601::Client::delEnterpriseTag(shared_ptr<DelEnterpriseTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delEnterpriseTagWithOptions(request, runtime);
}

DeleteEnterpriseDataResponse Alibabacloud_Bailian20230601::Client::deleteEnterpriseDataWithOptions(shared_ptr<DeleteEnterpriseDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnterpriseData"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnterpriseDataResponse(callApi(params, req, runtime));
}

DeleteEnterpriseDataResponse Alibabacloud_Bailian20230601::Client::deleteEnterpriseData(shared_ptr<DeleteEnterpriseDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnterpriseDataWithOptions(request, runtime);
}

DeleteFineTuneJobResponse Alibabacloud_Bailian20230601::Client::deleteFineTuneJobWithOptions(shared_ptr<DeleteFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFineTuneJob"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFineTuneJobResponse(callApi(params, req, runtime));
}

DeleteFineTuneJobResponse Alibabacloud_Bailian20230601::Client::deleteFineTuneJob(shared_ptr<DeleteFineTuneJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFineTuneJobWithOptions(request, runtime);
}

DeleteServiceResponse Alibabacloud_Bailian20230601::Client::deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modelServiceId)) {
    body->insert(pair<string, string>("ModelServiceId", *request->modelServiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceResponse(callApi(params, req, runtime));
}

DeleteServiceResponse Alibabacloud_Bailian20230601::Client::deleteService(shared_ptr<DeleteServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceWithOptions(request, runtime);
}

DescribeFineTuneJobResponse Alibabacloud_Bailian20230601::Client::describeFineTuneJobWithOptions(shared_ptr<DescribeFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFineTuneJob"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFineTuneJobResponse(callApi(params, req, runtime));
}

DescribeFineTuneJobResponse Alibabacloud_Bailian20230601::Client::describeFineTuneJob(shared_ptr<DescribeFineTuneJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFineTuneJobWithOptions(request, runtime);
}

DescribeServiceResponse Alibabacloud_Bailian20230601::Client::describeServiceWithOptions(shared_ptr<DescribeServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modelServiceId)) {
    body->insert(pair<string, string>("ModelServiceId", *request->modelServiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeService"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceResponse(callApi(params, req, runtime));
}

DescribeServiceResponse Alibabacloud_Bailian20230601::Client::describeService(shared_ptr<DescribeServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceWithOptions(request, runtime);
}

GetEnterpriseDataByDataIdResponse Alibabacloud_Bailian20230601::Client::getEnterpriseDataByDataIdWithOptions(shared_ptr<GetEnterpriseDataByDataIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseDataByDataId"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseDataByDataIdResponse(callApi(params, req, runtime));
}

GetEnterpriseDataByDataIdResponse Alibabacloud_Bailian20230601::Client::getEnterpriseDataByDataId(shared_ptr<GetEnterpriseDataByDataIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseDataByDataIdWithOptions(request, runtime);
}

GetEnterpriseDataChunkResponse Alibabacloud_Bailian20230601::Client::getEnterpriseDataChunkWithOptions(shared_ptr<GetEnterpriseDataChunkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseDataChunk"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseDataChunkResponse(callApi(params, req, runtime));
}

GetEnterpriseDataChunkResponse Alibabacloud_Bailian20230601::Client::getEnterpriseDataChunk(shared_ptr<GetEnterpriseDataChunkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseDataChunkWithOptions(request, runtime);
}

GetEnterpriseDataPageImageResponse Alibabacloud_Bailian20230601::Client::getEnterpriseDataPageImageWithOptions(shared_ptr<GetEnterpriseDataPageImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseDataPageImage"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseDataPageImageResponse(callApi(params, req, runtime));
}

GetEnterpriseDataPageImageResponse Alibabacloud_Bailian20230601::Client::getEnterpriseDataPageImage(shared_ptr<GetEnterpriseDataPageImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseDataPageImageWithOptions(request, runtime);
}

GetEnterpriseDataParseResultResponse Alibabacloud_Bailian20230601::Client::getEnterpriseDataParseResultWithOptions(shared_ptr<GetEnterpriseDataParseResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseDataParseResult"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseDataParseResultResponse(callApi(params, req, runtime));
}

GetEnterpriseDataParseResultResponse Alibabacloud_Bailian20230601::Client::getEnterpriseDataParseResult(shared_ptr<GetEnterpriseDataParseResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseDataParseResultWithOptions(request, runtime);
}

GetFileStoreUploadPolicyResponse Alibabacloud_Bailian20230601::Client::getFileStoreUploadPolicyWithOptions(shared_ptr<GetFileStoreUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileStoreId)) {
    query->insert(pair<string, long>("FileStoreId", *request->fileStoreId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileStoreUploadPolicy"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileStoreUploadPolicyResponse(callApi(params, req, runtime));
}

GetFileStoreUploadPolicyResponse Alibabacloud_Bailian20230601::Client::getFileStoreUploadPolicy(shared_ptr<GetFileStoreUploadPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileStoreUploadPolicyWithOptions(request, runtime);
}

GetImportTaskResultResponse Alibabacloud_Bailian20230601::Client::getImportTaskResultWithOptions(shared_ptr<GetImportTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImportTaskResult"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImportTaskResultResponse(callApi(params, req, runtime));
}

GetImportTaskResultResponse Alibabacloud_Bailian20230601::Client::getImportTaskResult(shared_ptr<GetImportTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImportTaskResultWithOptions(request, runtime);
}

GetPromptResponse Alibabacloud_Bailian20230601::Client::getPromptWithOptions(shared_ptr<GetPromptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promptId)) {
    query->insert(pair<string, string>("PromptId", *request->promptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vars)) {
    query->insert(pair<string, string>("Vars", *request->vars));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrompt"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPromptResponse(callApi(params, req, runtime));
}

GetPromptResponse Alibabacloud_Bailian20230601::Client::getPrompt(shared_ptr<GetPromptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPromptWithOptions(request, runtime);
}

GetText2ImageJobResponse Alibabacloud_Bailian20230601::Client::getText2ImageJobWithOptions(shared_ptr<GetText2ImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetText2ImageJob"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetText2ImageJobResponse(callApi(params, req, runtime));
}

GetText2ImageJobResponse Alibabacloud_Bailian20230601::Client::getText2ImageJob(shared_ptr<GetText2ImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getText2ImageJobWithOptions(request, runtime);
}

ImportEnterpriseDocumentResponse Alibabacloud_Bailian20230601::Client::importEnterpriseDocumentWithOptions(shared_ptr<ImportEnterpriseDocumentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportEnterpriseDocumentShrinkRequest> request = make_shared<ImportEnterpriseDocumentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ImportEnterpriseDocumentRequestDocumentList>>(tmpReq->documentList)) {
    request->documentListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentList, make_shared<string>("DocumentList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataType)) {
    query->insert(pair<string, long>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentListShrink)) {
    query->insert(pair<string, string>("DocumentList", *request->documentListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storeId)) {
    query->insert(pair<string, long>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportEnterpriseDocument"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportEnterpriseDocumentResponse(callApi(params, req, runtime));
}

ImportEnterpriseDocumentResponse Alibabacloud_Bailian20230601::Client::importEnterpriseDocument(shared_ptr<ImportEnterpriseDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importEnterpriseDocumentWithOptions(request, runtime);
}

ImportUserDocumentResponse Alibabacloud_Bailian20230601::Client::importUserDocumentWithOptions(shared_ptr<ImportUserDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileStoreId)) {
    query->insert(pair<string, long>("FileStoreId", *request->fileStoreId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossPath)) {
    query->insert(pair<string, string>("OssPath", *request->ossPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storeId)) {
    query->insert(pair<string, long>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportUserDocument"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportUserDocumentResponse(callApi(params, req, runtime));
}

ImportUserDocumentResponse Alibabacloud_Bailian20230601::Client::importUserDocument(shared_ptr<ImportUserDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importUserDocumentWithOptions(request, runtime);
}

ListFineTuneJobsResponse Alibabacloud_Bailian20230601::Client::listFineTuneJobsWithOptions(shared_ptr<ListFineTuneJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFineTuneJobs"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFineTuneJobsResponse(callApi(params, req, runtime));
}

ListFineTuneJobsResponse Alibabacloud_Bailian20230601::Client::listFineTuneJobs(shared_ptr<ListFineTuneJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFineTuneJobsWithOptions(request, runtime);
}

ListServicesResponse Alibabacloud_Bailian20230601::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    body->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServices"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServicesResponse(callApi(params, req, runtime));
}

ListServicesResponse Alibabacloud_Bailian20230601::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServicesWithOptions(request, runtime);
}

QueryEnterpriseDataListResponse Alibabacloud_Bailian20230601::Client::queryEnterpriseDataListWithOptions(shared_ptr<QueryEnterpriseDataListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryEnterpriseDataListShrinkRequest> request = make_shared<QueryEnterpriseDataListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataName)) {
    query->insert(pair<string, string>("DataName", *request->dataName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeType)) {
    query->insert(pair<string, string>("StoreType", *request->storeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEnterpriseDataList"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEnterpriseDataListResponse(callApi(params, req, runtime));
}

QueryEnterpriseDataListResponse Alibabacloud_Bailian20230601::Client::queryEnterpriseDataList(shared_ptr<QueryEnterpriseDataListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEnterpriseDataListWithOptions(request, runtime);
}

QueryEnterpriseDataTagResponse Alibabacloud_Bailian20230601::Client::queryEnterpriseDataTagWithOptions(shared_ptr<QueryEnterpriseDataTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEnterpriseDataTag"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEnterpriseDataTagResponse(callApi(params, req, runtime));
}

QueryEnterpriseDataTagResponse Alibabacloud_Bailian20230601::Client::queryEnterpriseDataTag(shared_ptr<QueryEnterpriseDataTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEnterpriseDataTagWithOptions(request, runtime);
}

QueryEnterpriseTagListResponse Alibabacloud_Bailian20230601::Client::queryEnterpriseTagListWithOptions(shared_ptr<QueryEnterpriseTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEnterpriseTagList"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEnterpriseTagListResponse(callApi(params, req, runtime));
}

QueryEnterpriseTagListResponse Alibabacloud_Bailian20230601::Client::queryEnterpriseTagList(shared_ptr<QueryEnterpriseTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEnterpriseTagListWithOptions(request, runtime);
}

QueryUserDocumentResponse Alibabacloud_Bailian20230601::Client::queryUserDocumentWithOptions(shared_ptr<QueryUserDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserDocument"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserDocumentResponse(callApi(params, req, runtime));
}

QueryUserDocumentResponse Alibabacloud_Bailian20230601::Client::queryUserDocument(shared_ptr<QueryUserDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserDocumentWithOptions(request, runtime);
}

SearchEnterpriseDataResponse Alibabacloud_Bailian20230601::Client::searchEnterpriseDataWithOptions(shared_ptr<SearchEnterpriseDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchEnterpriseDataShrinkRequest> request = make_shared<SearchEnterpriseDataShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->dataIdList)) {
    request->dataIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dataIdList, make_shared<string>("DataIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->tagIdList)) {
    request->tagIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagIdList, make_shared<string>("TagIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataIdListShrink)) {
    query->insert(pair<string, string>("DataIdList", *request->dataIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRank)) {
    query->insert(pair<string, bool>("EnableRank", *request->enableRank));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storeId)) {
    query->insert(pair<string, long>("StoreId", *request->storeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIdListShrink)) {
    query->insert(pair<string, string>("TagIdList", *request->tagIdListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchEnterpriseData"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchEnterpriseDataResponse(callApi(params, req, runtime));
}

SearchEnterpriseDataResponse Alibabacloud_Bailian20230601::Client::searchEnterpriseData(shared_ptr<SearchEnterpriseDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEnterpriseDataWithOptions(request, runtime);
}

SubmitText2ImageJobResponse Alibabacloud_Bailian20230601::Client::submitText2ImageJobWithOptions(shared_ptr<SubmitText2ImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->n)) {
    query->insert(pair<string, long>("N", *request->n));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->negativePrompt)) {
    query->insert(pair<string, string>("NegativePrompt", *request->negativePrompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    query->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seed)) {
    query->insert(pair<string, long>("Seed", *request->seed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    query->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->style)) {
    query->insert(pair<string, string>("Style", *request->style));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitText2ImageJob"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitText2ImageJobResponse(callApi(params, req, runtime));
}

SubmitText2ImageJobResponse Alibabacloud_Bailian20230601::Client::submitText2ImageJob(shared_ptr<SubmitText2ImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitText2ImageJobWithOptions(request, runtime);
}

UpdateEnterpriseDataInfoResponse Alibabacloud_Bailian20230601::Client::updateEnterpriseDataInfoWithOptions(shared_ptr<UpdateEnterpriseDataInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataName)) {
    query->insert(pair<string, string>("DataName", *request->dataName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePreviewLink)) {
    query->insert(pair<string, string>("FilePreviewLink", *request->filePreviewLink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnterpriseDataInfo"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnterpriseDataInfoResponse(callApi(params, req, runtime));
}

UpdateEnterpriseDataInfoResponse Alibabacloud_Bailian20230601::Client::updateEnterpriseDataInfo(shared_ptr<UpdateEnterpriseDataInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnterpriseDataInfoWithOptions(request, runtime);
}

UpdateEnterpriseDataTagResponse Alibabacloud_Bailian20230601::Client::updateEnterpriseDataTagWithOptions(shared_ptr<UpdateEnterpriseDataTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEnterpriseDataTagShrinkRequest> request = make_shared<UpdateEnterpriseDataTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataId)) {
    query->insert(pair<string, string>("DataId", *request->dataId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnterpriseDataTag"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnterpriseDataTagResponse(callApi(params, req, runtime));
}

UpdateEnterpriseDataTagResponse Alibabacloud_Bailian20230601::Client::updateEnterpriseDataTag(shared_ptr<UpdateEnterpriseDataTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnterpriseDataTagWithOptions(request, runtime);
}

UpdateEnterpriseTagResponse Alibabacloud_Bailian20230601::Client::updateEnterpriseTagWithOptions(shared_ptr<UpdateEnterpriseTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagId)) {
    query->insert(pair<string, long>("TagId", *request->tagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnterpriseTag"))},
    {"version", boost::any(string("2023-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnterpriseTagResponse(callApi(params, req, runtime));
}

UpdateEnterpriseTagResponse Alibabacloud_Bailian20230601::Client::updateEnterpriseTag(shared_ptr<UpdateEnterpriseTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnterpriseTagWithOptions(request, runtime);
}

