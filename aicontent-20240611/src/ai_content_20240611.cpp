// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ai_content_20240611.hpp>
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

using namespace Alibabacloud_AiContent20240611;

Alibabacloud_AiContent20240611::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aicontent"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AiContent20240611::Client::getEndpoint(shared_ptr<string> productId,
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

AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse Alibabacloud_AiContent20240611::Client::aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AliyunConsoleOpenApiQueryAliyunConsoleServcieList"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunconsole/queryAliyunConsoleServcieList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse(callApi(params, req, runtime));
}

AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse Alibabacloud_AiContent20240611::Client::aliyunConsoleOpenApiQueryAliyunConsoleServcieList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(headers, runtime);
}

AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse Alibabacloud_AiContent20240611::Client::aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AliyunConsoleOpenApiQueryAliyunConsoleServiceList"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunconsole/queryAliyunConsoleServiceList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse(callApi(params, req, runtime));
}

AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse Alibabacloud_AiContent20240611::Client::aliyunConsoleOpenApiQueryAliyunConsoleServiceList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(headers, runtime);
}

PersonalizedTextToImageAddInferenceJobResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageAddInferenceJobWithOptions(shared_ptr<PersonalizedTextToImageAddInferenceJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->imageNumber)) {
    body->insert(pair<string, long>("imageNumber", *request->imageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageUrl)) {
    body->insert(pair<string, vector<string>>("imageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seed)) {
    body->insert(pair<string, long>("seed", *request->seed));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->strength)) {
    body->insert(pair<string, double>("strength", *request->strength));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trainSteps)) {
    body->insert(pair<string, long>("trainSteps", *request->trainSteps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PersonalizedTextToImageAddInferenceJob"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/addPreModelInferenceJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PersonalizedTextToImageAddInferenceJobResponse(callApi(params, req, runtime));
}

PersonalizedTextToImageAddInferenceJobResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageAddInferenceJob(shared_ptr<PersonalizedTextToImageAddInferenceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedTextToImageAddInferenceJobWithOptions(request, headers, runtime);
}

PersonalizedTextToImageQueryImageAssetResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageQueryImageAssetWithOptions(shared_ptr<PersonalizedTextToImageQueryImageAssetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeFormat)) {
    query->insert(pair<string, string>("encodeFormat", *request->encodeFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("imageId", *request->imageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PersonalizedTextToImageQueryImageAsset"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryImageAssetFromImageId"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("any"))}
  }));
  return PersonalizedTextToImageQueryImageAssetResponse(callApi(params, req, runtime));
}

PersonalizedTextToImageQueryImageAssetResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageQueryImageAsset(shared_ptr<PersonalizedTextToImageQueryImageAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedTextToImageQueryImageAssetWithOptions(request, headers, runtime);
}

PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inferenceJobId)) {
    query->insert(pair<string, string>("inferenceJobId", *request->inferenceJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PersonalizedTextToImageQueryPreModelInferenceJobInfo"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryPreModelInferenceJobInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse(callApi(params, req, runtime));
}

PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageQueryPreModelInferenceJobInfo(shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(request, headers, runtime);
}

Personalizedtxt2imgAddInferenceJobResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgAddInferenceJobWithOptions(shared_ptr<Personalizedtxt2imgAddInferenceJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->imageNumber)) {
    body->insert(pair<string, long>("imageNumber", *request->imageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seed)) {
    body->insert(pair<string, long>("seed", *request->seed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgAddInferenceJob"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/addInferenceJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgAddInferenceJobResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgAddInferenceJobResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgAddInferenceJob(shared_ptr<Personalizedtxt2imgAddInferenceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgAddInferenceJobWithOptions(request, headers, runtime);
}

Personalizedtxt2imgAddModelTrainJobResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgAddModelTrainJobWithOptions(shared_ptr<Personalizedtxt2imgAddModelTrainJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageUrl)) {
    body->insert(pair<string, vector<string>>("imageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    body->insert(pair<string, string>("objectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trainSteps)) {
    body->insert(pair<string, long>("trainSteps", *request->trainSteps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgAddModelTrainJob"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/addModelTrainJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgAddModelTrainJobResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgAddModelTrainJobResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgAddModelTrainJob(shared_ptr<Personalizedtxt2imgAddModelTrainJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgAddModelTrainJobWithOptions(request, headers, runtime);
}

Personalizedtxt2imgQueryImageAssetResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryImageAssetWithOptions(shared_ptr<Personalizedtxt2imgQueryImageAssetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeFormat)) {
    query->insert(pair<string, string>("encodeFormat", *request->encodeFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("imageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promptId)) {
    query->insert(pair<string, string>("promptId", *request->promptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgQueryImageAsset"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryImageAsset"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("any"))}
  }));
  return Personalizedtxt2imgQueryImageAssetResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgQueryImageAssetResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryImageAsset(shared_ptr<Personalizedtxt2imgQueryImageAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgQueryImageAssetWithOptions(request, headers, runtime);
}

Personalizedtxt2imgQueryInferenceJobInfoResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryInferenceJobInfoWithOptions(shared_ptr<Personalizedtxt2imgQueryInferenceJobInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inferenceJobId)) {
    query->insert(pair<string, string>("inferenceJobId", *request->inferenceJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgQueryInferenceJobInfo"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryInferenceJobInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgQueryInferenceJobInfoResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgQueryInferenceJobInfoResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryInferenceJobInfo(shared_ptr<Personalizedtxt2imgQueryInferenceJobInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgQueryInferenceJobInfoWithOptions(request, headers, runtime);
}

Personalizedtxt2imgQueryModelTrainJobListResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryModelTrainJobListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgQueryModelTrainJobList"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryModelTrainJobList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgQueryModelTrainJobListResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgQueryModelTrainJobListResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryModelTrainJobList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgQueryModelTrainJobListWithOptions(headers, runtime);
}

Personalizedtxt2imgQueryModelTrainStatusResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryModelTrainStatusWithOptions(shared_ptr<Personalizedtxt2imgQueryModelTrainStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("modelId", *request->modelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgQueryModelTrainStatus"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryModelTrainStatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgQueryModelTrainStatusResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgQueryModelTrainStatusResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryModelTrainStatus(shared_ptr<Personalizedtxt2imgQueryModelTrainStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgQueryModelTrainStatusWithOptions(request, headers, runtime);
}

