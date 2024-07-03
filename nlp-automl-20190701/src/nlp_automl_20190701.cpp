// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/nlp_automl_20190701.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Nlp-automl20190701;

Alibabacloud_Nlp-automl20190701::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("nlp-automl"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Nlp-automl20190701::Client::getEndpoint(shared_ptr<string> productId,
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

AddMTInterveneWordResponse Alibabacloud_Nlp-automl20190701::Client::addMTInterveneWordWithOptions(shared_ptr<AddMTInterveneWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->packageId)) {
    query->insert(pair<string, string>("PackageId", *request->packageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    query->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetText)) {
    query->insert(pair<string, string>("TargetText", *request->targetText));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMTInterveneWord"))},
    {"version", boost::any(string("2019-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMTInterveneWordResponse(callApi(params, req, runtime));
}

AddMTInterveneWordResponse Alibabacloud_Nlp-automl20190701::Client::addMTInterveneWord(shared_ptr<AddMTInterveneWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMTInterveneWordWithOptions(request, runtime);
}

GetPredictDocResponse Alibabacloud_Nlp-automl20190701::Client::getPredictDocWithOptions(shared_ptr<GetPredictDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->docId)) {
    query->insert(pair<string, long>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPredictDoc"))},
    {"version", boost::any(string("2019-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPredictDocResponse(callApi(params, req, runtime));
}

GetPredictDocResponse Alibabacloud_Nlp-automl20190701::Client::getPredictDoc(shared_ptr<GetPredictDocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPredictDocWithOptions(request, runtime);
}

PredictMTModelByDocResponse Alibabacloud_Nlp-automl20190701::Client::predictMTModelByDocWithOptions(shared_ptr<PredictMTModelByDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    query->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    query->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needXLIFF)) {
    query->insert(pair<string, bool>("NeedXLIFF", *request->needXLIFF));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileContent)) {
    body->insert(pair<string, string>("FileContent", *request->fileContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PredictMTModelByDoc"))},
    {"version", boost::any(string("2019-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PredictMTModelByDocResponse(callApi(params, req, runtime));
}

PredictMTModelByDocResponse Alibabacloud_Nlp-automl20190701::Client::predictMTModelByDoc(shared_ptr<PredictMTModelByDocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return predictMTModelByDocWithOptions(request, runtime);
}

