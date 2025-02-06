// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/qualitycheck_20190115.hpp>
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

using namespace Alibabacloud_Qualitycheck20190115;

Alibabacloud_Qualitycheck20190115::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("qualitycheck"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Qualitycheck20190115::Client::getEndpoint(shared_ptr<string> productId,
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

AddBusinessCategoryResponse Alibabacloud_Qualitycheck20190115::Client::addBusinessCategoryWithOptions(shared_ptr<AddBusinessCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddBusinessCategory"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddBusinessCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return AddBusinessCategoryResponse(execute(params, req, runtime));
  }
}

AddBusinessCategoryResponse Alibabacloud_Qualitycheck20190115::Client::addBusinessCategory(shared_ptr<AddBusinessCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBusinessCategoryWithOptions(request, runtime);
}

AddRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::addRuleCategoryWithOptions(shared_ptr<AddRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRuleCategory"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddRuleCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return AddRuleCategoryResponse(execute(params, req, runtime));
  }
}

AddRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::addRuleCategory(shared_ptr<AddRuleCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRuleCategoryWithOptions(request, runtime);
}

AddRuleV4Response Alibabacloud_Qualitycheck20190115::Client::addRuleV4WithOptions(shared_ptr<AddRuleV4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isCopy)) {
    body->insert(pair<string, bool>("IsCopy", *request->isCopy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStrForRule)) {
    body->insert(pair<string, string>("JsonStrForRule", *request->jsonStrForRule));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRuleV4"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddRuleV4Response(callApi(params, req, runtime));
  }
  else {
    return AddRuleV4Response(execute(params, req, runtime));
  }
}

AddRuleV4Response Alibabacloud_Qualitycheck20190115::Client::addRuleV4(shared_ptr<AddRuleV4Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRuleV4WithOptions(request, runtime);
}

ApplyWsTokenResponse Alibabacloud_Qualitycheck20190115::Client::applyWsTokenWithOptions(shared_ptr<ApplyWsTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyWsToken"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ApplyWsTokenResponse(callApi(params, req, runtime));
  }
  else {
    return ApplyWsTokenResponse(execute(params, req, runtime));
  }
}

ApplyWsTokenResponse Alibabacloud_Qualitycheck20190115::Client::applyWsToken(shared_ptr<ApplyWsTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyWsTokenWithOptions(request, runtime);
}

AssignReviewerResponse Alibabacloud_Qualitycheck20190115::Client::assignReviewerWithOptions(shared_ptr<AssignReviewerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignReviewer"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssignReviewerResponse(callApi(params, req, runtime));
  }
  else {
    return AssignReviewerResponse(execute(params, req, runtime));
  }
}

AssignReviewerResponse Alibabacloud_Qualitycheck20190115::Client::assignReviewer(shared_ptr<AssignReviewerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignReviewerWithOptions(request, runtime);
}

AssignReviewerBySessionGroupResponse Alibabacloud_Qualitycheck20190115::Client::assignReviewerBySessionGroupWithOptions(shared_ptr<AssignReviewerBySessionGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignReviewerBySessionGroup"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssignReviewerBySessionGroupResponse(callApi(params, req, runtime));
  }
  else {
    return AssignReviewerBySessionGroupResponse(execute(params, req, runtime));
  }
}

AssignReviewerBySessionGroupResponse Alibabacloud_Qualitycheck20190115::Client::assignReviewerBySessionGroup(shared_ptr<AssignReviewerBySessionGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignReviewerBySessionGroupWithOptions(request, runtime);
}

BatchSubmitReviewInfoResponse Alibabacloud_Qualitycheck20190115::Client::batchSubmitReviewInfoWithOptions(shared_ptr<BatchSubmitReviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSubmitReviewInfo"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchSubmitReviewInfoResponse(callApi(params, req, runtime));
  }
  else {
    return BatchSubmitReviewInfoResponse(execute(params, req, runtime));
  }
}

BatchSubmitReviewInfoResponse Alibabacloud_Qualitycheck20190115::Client::batchSubmitReviewInfo(shared_ptr<BatchSubmitReviewInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSubmitReviewInfoWithOptions(request, runtime);
}

CreateAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::createAsrVocabWithOptions(shared_ptr<CreateAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAsrVocab"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAsrVocabResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAsrVocabResponse(execute(params, req, runtime));
  }
}

CreateAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::createAsrVocab(shared_ptr<CreateAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAsrVocabWithOptions(request, runtime);
}

CreateCheckTypeToSchemeResponse Alibabacloud_Qualitycheck20190115::Client::createCheckTypeToSchemeWithOptions(shared_ptr<CreateCheckTypeToSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCheckTypeToScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCheckTypeToSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCheckTypeToSchemeResponse(execute(params, req, runtime));
  }
}

CreateCheckTypeToSchemeResponse Alibabacloud_Qualitycheck20190115::Client::createCheckTypeToScheme(shared_ptr<CreateCheckTypeToSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCheckTypeToSchemeWithOptions(request, runtime);
}

CreateQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::createQualityCheckSchemeWithOptions(shared_ptr<CreateQualityCheckSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQualityCheckScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateQualityCheckSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return CreateQualityCheckSchemeResponse(execute(params, req, runtime));
  }
}

CreateQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::createQualityCheckScheme(shared_ptr<CreateQualityCheckSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityCheckSchemeWithOptions(request, runtime);
}

CreateSchemeTaskConfigResponse Alibabacloud_Qualitycheck20190115::Client::createSchemeTaskConfigWithOptions(shared_ptr<CreateSchemeTaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSchemeTaskConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSchemeTaskConfigResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSchemeTaskConfigResponse(execute(params, req, runtime));
  }
}

CreateSchemeTaskConfigResponse Alibabacloud_Qualitycheck20190115::Client::createSchemeTaskConfig(shared_ptr<CreateSchemeTaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSchemeTaskConfigWithOptions(request, runtime);
}

CreateSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::createSkillGroupConfigWithOptions(shared_ptr<CreateSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSkillGroupConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSkillGroupConfigResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSkillGroupConfigResponse(execute(params, req, runtime));
  }
}

CreateSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::createSkillGroupConfig(shared_ptr<CreateSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSkillGroupConfigWithOptions(request, runtime);
}

CreateTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::createTaskAssignRuleWithOptions(shared_ptr<CreateTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTaskAssignRule"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateTaskAssignRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateTaskAssignRuleResponse(execute(params, req, runtime));
  }
}

CreateTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::createTaskAssignRule(shared_ptr<CreateTaskAssignRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskAssignRuleWithOptions(request, runtime);
}

CreateWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::createWarningConfigWithOptions(shared_ptr<CreateWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWarningConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWarningConfigResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWarningConfigResponse(execute(params, req, runtime));
  }
}

CreateWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::createWarningConfig(shared_ptr<CreateWarningConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWarningConfigWithOptions(request, runtime);
}

CreateWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::createWarningStrategyConfigWithOptions(shared_ptr<CreateWarningStrategyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWarningStrategyConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWarningStrategyConfigResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWarningStrategyConfigResponse(execute(params, req, runtime));
  }
}

CreateWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::createWarningStrategyConfig(shared_ptr<CreateWarningStrategyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWarningStrategyConfigWithOptions(request, runtime);
}

DelRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::delRuleCategoryWithOptions(shared_ptr<DelRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DelRuleCategory"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DelRuleCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return DelRuleCategoryResponse(execute(params, req, runtime));
  }
}

DelRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::delRuleCategory(shared_ptr<DelRuleCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delRuleCategoryWithOptions(request, runtime);
}

DeleteAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::deleteAsrVocabWithOptions(shared_ptr<DeleteAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAsrVocab"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAsrVocabResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAsrVocabResponse(execute(params, req, runtime));
  }
}

DeleteAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::deleteAsrVocab(shared_ptr<DeleteAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAsrVocabWithOptions(request, runtime);
}

DeleteBusinessCategoryResponse Alibabacloud_Qualitycheck20190115::Client::deleteBusinessCategoryWithOptions(shared_ptr<DeleteBusinessCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBusinessCategory"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteBusinessCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteBusinessCategoryResponse(execute(params, req, runtime));
  }
}

DeleteBusinessCategoryResponse Alibabacloud_Qualitycheck20190115::Client::deleteBusinessCategory(shared_ptr<DeleteBusinessCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBusinessCategoryWithOptions(request, runtime);
}

DeleteCheckTypeToSchemeResponse Alibabacloud_Qualitycheck20190115::Client::deleteCheckTypeToSchemeWithOptions(shared_ptr<DeleteCheckTypeToSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCheckTypeToScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCheckTypeToSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCheckTypeToSchemeResponse(execute(params, req, runtime));
  }
}

DeleteCheckTypeToSchemeResponse Alibabacloud_Qualitycheck20190115::Client::deleteCheckTypeToScheme(shared_ptr<DeleteCheckTypeToSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCheckTypeToSchemeWithOptions(request, runtime);
}

DeleteCustomizationConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteCustomizationConfigWithOptions(shared_ptr<DeleteCustomizationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomizationConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCustomizationConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCustomizationConfigResponse(execute(params, req, runtime));
  }
}

DeleteCustomizationConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteCustomizationConfig(shared_ptr<DeleteCustomizationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomizationConfigWithOptions(request, runtime);
}

DeleteDataSetResponse Alibabacloud_Qualitycheck20190115::Client::deleteDataSetWithOptions(shared_ptr<DeleteDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSet"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteDataSetResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteDataSetResponse(execute(params, req, runtime));
  }
}

DeleteDataSetResponse Alibabacloud_Qualitycheck20190115::Client::deleteDataSet(shared_ptr<DeleteDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSetWithOptions(request, runtime);
}

DeletePrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::deletePrecisionTaskWithOptions(shared_ptr<DeletePrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePrecisionTask"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePrecisionTaskResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePrecisionTaskResponse(execute(params, req, runtime));
  }
}

DeletePrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::deletePrecisionTask(shared_ptr<DeletePrecisionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrecisionTaskWithOptions(request, runtime);
}

DeleteQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::deleteQualityCheckSchemeWithOptions(shared_ptr<DeleteQualityCheckSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQualityCheckScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteQualityCheckSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteQualityCheckSchemeResponse(execute(params, req, runtime));
  }
}

DeleteQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::deleteQualityCheckScheme(shared_ptr<DeleteQualityCheckSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityCheckSchemeWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Qualitycheck20190115::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDelete)) {
    body->insert(pair<string, bool>("ForceDelete", *request->forceDelete));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isSchemeData)) {
    body->insert(pair<string, long>("IsSchemeData", *request->isSchemeData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRule"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRuleResponse(execute(params, req, runtime));
  }
}

DeleteRuleResponse Alibabacloud_Qualitycheck20190115::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DeleteRuleV4Response Alibabacloud_Qualitycheck20190115::Client::deleteRuleV4WithOptions(shared_ptr<DeleteRuleV4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceDelete)) {
    body->insert(pair<string, bool>("ForceDelete", *request->forceDelete));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRuleV4"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRuleV4Response(callApi(params, req, runtime));
  }
  else {
    return DeleteRuleV4Response(execute(params, req, runtime));
  }
}

DeleteRuleV4Response Alibabacloud_Qualitycheck20190115::Client::deleteRuleV4(shared_ptr<DeleteRuleV4Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleV4WithOptions(request, runtime);
}

DeleteSchemeTaskConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteSchemeTaskConfigWithOptions(shared_ptr<DeleteSchemeTaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSchemeTaskConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSchemeTaskConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSchemeTaskConfigResponse(execute(params, req, runtime));
  }
}

DeleteSchemeTaskConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteSchemeTaskConfig(shared_ptr<DeleteSchemeTaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSchemeTaskConfigWithOptions(request, runtime);
}

DeleteSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteSkillGroupConfigWithOptions(shared_ptr<DeleteSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSkillGroupConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSkillGroupConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSkillGroupConfigResponse(execute(params, req, runtime));
  }
}

DeleteSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteSkillGroupConfig(shared_ptr<DeleteSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSkillGroupConfigWithOptions(request, runtime);
}

DeleteTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::deleteTaskAssignRuleWithOptions(shared_ptr<DeleteTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTaskAssignRule"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteTaskAssignRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteTaskAssignRuleResponse(execute(params, req, runtime));
  }
}

DeleteTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::deleteTaskAssignRule(shared_ptr<DeleteTaskAssignRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTaskAssignRuleWithOptions(request, runtime);
}

DeleteWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteWarningConfigWithOptions(shared_ptr<DeleteWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWarningConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteWarningConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteWarningConfigResponse(execute(params, req, runtime));
  }
}

DeleteWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteWarningConfig(shared_ptr<DeleteWarningConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWarningConfigWithOptions(request, runtime);
}

DeleteWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteWarningStrategyConfigWithOptions(shared_ptr<DeleteWarningStrategyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWarningStrategyConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteWarningStrategyConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteWarningStrategyConfigResponse(execute(params, req, runtime));
  }
}

DeleteWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteWarningStrategyConfig(shared_ptr<DeleteWarningStrategyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWarningStrategyConfigWithOptions(request, runtime);
}

GetAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::getAsrVocabWithOptions(shared_ptr<GetAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsrVocab"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAsrVocabResponse(callApi(params, req, runtime));
  }
  else {
    return GetAsrVocabResponse(execute(params, req, runtime));
  }
}

GetAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::getAsrVocab(shared_ptr<GetAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsrVocabWithOptions(request, runtime);
}

GetBusinessCategoryListResponse Alibabacloud_Qualitycheck20190115::Client::getBusinessCategoryListWithOptions(shared_ptr<GetBusinessCategoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessCategoryList"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetBusinessCategoryListResponse(callApi(params, req, runtime));
  }
  else {
    return GetBusinessCategoryListResponse(execute(params, req, runtime));
  }
}

GetBusinessCategoryListResponse Alibabacloud_Qualitycheck20190115::Client::getBusinessCategoryList(shared_ptr<GetBusinessCategoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessCategoryListWithOptions(request, runtime);
}

GetCustomizationConfigListResponse Alibabacloud_Qualitycheck20190115::Client::getCustomizationConfigListWithOptions(shared_ptr<GetCustomizationConfigListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomizationConfigList"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCustomizationConfigListResponse(callApi(params, req, runtime));
  }
  else {
    return GetCustomizationConfigListResponse(execute(params, req, runtime));
  }
}

GetCustomizationConfigListResponse Alibabacloud_Qualitycheck20190115::Client::getCustomizationConfigList(shared_ptr<GetCustomizationConfigListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomizationConfigListWithOptions(request, runtime);
}

GetNextResultToVerifyResponse Alibabacloud_Qualitycheck20190115::Client::getNextResultToVerifyWithOptions(shared_ptr<GetNextResultToVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNextResultToVerify"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetNextResultToVerifyResponse(callApi(params, req, runtime));
  }
  else {
    return GetNextResultToVerifyResponse(execute(params, req, runtime));
  }
}

GetNextResultToVerifyResponse Alibabacloud_Qualitycheck20190115::Client::getNextResultToVerify(shared_ptr<GetNextResultToVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNextResultToVerifyWithOptions(request, runtime);
}

GetPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::getPrecisionTaskWithOptions(shared_ptr<GetPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrecisionTask"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPrecisionTaskResponse(callApi(params, req, runtime));
  }
  else {
    return GetPrecisionTaskResponse(execute(params, req, runtime));
  }
}

GetPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::getPrecisionTask(shared_ptr<GetPrecisionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrecisionTaskWithOptions(request, runtime);
}

GetQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::getQualityCheckSchemeWithOptions(shared_ptr<GetQualityCheckSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualityCheckScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetQualityCheckSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return GetQualityCheckSchemeResponse(execute(params, req, runtime));
  }
}

GetQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::getQualityCheckScheme(shared_ptr<GetQualityCheckSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityCheckSchemeWithOptions(request, runtime);
}

GetResultResponse Alibabacloud_Qualitycheck20190115::Client::getResultWithOptions(shared_ptr<GetResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResult"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResultResponse(callApi(params, req, runtime));
  }
  else {
    return GetResultResponse(execute(params, req, runtime));
  }
}

GetResultResponse Alibabacloud_Qualitycheck20190115::Client::getResult(shared_ptr<GetResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResultWithOptions(request, runtime);
}

GetResultToReviewResponse Alibabacloud_Qualitycheck20190115::Client::getResultToReviewWithOptions(shared_ptr<GetResultToReviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResultToReview"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResultToReviewResponse(callApi(params, req, runtime));
  }
  else {
    return GetResultToReviewResponse(execute(params, req, runtime));
  }
}

GetResultToReviewResponse Alibabacloud_Qualitycheck20190115::Client::getResultToReview(shared_ptr<GetResultToReviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResultToReviewWithOptions(request, runtime);
}

GetRuleResponse Alibabacloud_Qualitycheck20190115::Client::getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRule"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRuleResponse(callApi(params, req, runtime));
  }
  else {
    return GetRuleResponse(execute(params, req, runtime));
  }
}

GetRuleResponse Alibabacloud_Qualitycheck20190115::Client::getRule(shared_ptr<GetRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleWithOptions(request, runtime);
}

GetRuleByIdResponse Alibabacloud_Qualitycheck20190115::Client::getRuleByIdWithOptions(shared_ptr<GetRuleByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRuleById"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRuleByIdResponse(callApi(params, req, runtime));
  }
  else {
    return GetRuleByIdResponse(execute(params, req, runtime));
  }
}

GetRuleByIdResponse Alibabacloud_Qualitycheck20190115::Client::getRuleById(shared_ptr<GetRuleByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleByIdWithOptions(request, runtime);
}

GetRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::getRuleCategoryWithOptions(shared_ptr<GetRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRuleCategory"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRuleCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return GetRuleCategoryResponse(execute(params, req, runtime));
  }
}

GetRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::getRuleCategory(shared_ptr<GetRuleCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleCategoryWithOptions(request, runtime);
}

GetRuleDetailResponse Alibabacloud_Qualitycheck20190115::Client::getRuleDetailWithOptions(shared_ptr<GetRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRuleDetail"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRuleDetailResponse(callApi(params, req, runtime));
  }
  else {
    return GetRuleDetailResponse(execute(params, req, runtime));
  }
}

GetRuleDetailResponse Alibabacloud_Qualitycheck20190115::Client::getRuleDetail(shared_ptr<GetRuleDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleDetailWithOptions(request, runtime);
}

GetRuleV4Response Alibabacloud_Qualitycheck20190115::Client::getRuleV4WithOptions(shared_ptr<GetRuleV4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRuleV4"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRuleV4Response(callApi(params, req, runtime));
  }
  else {
    return GetRuleV4Response(execute(params, req, runtime));
  }
}

GetRuleV4Response Alibabacloud_Qualitycheck20190115::Client::getRuleV4(shared_ptr<GetRuleV4Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleV4WithOptions(request, runtime);
}

GetRulesCountListResponse Alibabacloud_Qualitycheck20190115::Client::getRulesCountListWithOptions(shared_ptr<GetRulesCountListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessName)) {
    body->insert(pair<string, string>("BusinessName", *request->businessName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->businessRange)) {
    body->insert(pair<string, long>("BusinessRange", *request->businessRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryName)) {
    body->insert(pair<string, string>("CategoryName", *request->categoryName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->countTotal)) {
    body->insert(pair<string, bool>("CountTotal", *request->countTotal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createEmpid)) {
    body->insert(pair<string, string>("CreateEmpid", *request->createEmpid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createUserId)) {
    body->insert(pair<string, long>("CreateUserId", *request->createUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastUpdateEmpid)) {
    body->insert(pair<string, string>("LastUpdateEmpid", *request->lastUpdateEmpid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->requireInfos)) {
    body->insert(pair<string, vector<string>>("RequireInfos", *request->requireInfos));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rid)) {
    body->insert(pair<string, long>("Rid", *request->rid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleIdOrRuleName)) {
    body->insert(pair<string, string>("RuleIdOrRuleName", *request->ruleIdOrRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleScoreSingleType)) {
    body->insert(pair<string, long>("RuleScoreSingleType", *request->ruleScoreSingleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    body->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schemeId)) {
    body->insert(pair<string, long>("SchemeId", *request->schemeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceType)) {
    body->insert(pair<string, long>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typeName_)) {
    body->insert(pair<string, string>("TypeName_", *request->typeName_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    body->insert(pair<string, string>("UpdateEndTime", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    body->insert(pair<string, string>("UpdateStartTime", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->updateUserId)) {
    body->insert(pair<string, long>("UpdateUserId", *request->updateUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRulesCountList"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRulesCountListResponse(callApi(params, req, runtime));
  }
  else {
    return GetRulesCountListResponse(execute(params, req, runtime));
  }
}

GetRulesCountListResponse Alibabacloud_Qualitycheck20190115::Client::getRulesCountList(shared_ptr<GetRulesCountListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRulesCountListWithOptions(request, runtime);
}

GetScoreInfoResponse Alibabacloud_Qualitycheck20190115::Client::getScoreInfoWithOptions(shared_ptr<GetScoreInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScoreInfo"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetScoreInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetScoreInfoResponse(execute(params, req, runtime));
  }
}

GetScoreInfoResponse Alibabacloud_Qualitycheck20190115::Client::getScoreInfo(shared_ptr<GetScoreInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScoreInfoWithOptions(request, runtime);
}

GetSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::getSkillGroupConfigWithOptions(shared_ptr<GetSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSkillGroupConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSkillGroupConfigResponse(callApi(params, req, runtime));
  }
  else {
    return GetSkillGroupConfigResponse(execute(params, req, runtime));
  }
}

GetSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::getSkillGroupConfig(shared_ptr<GetSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupConfigWithOptions(request, runtime);
}

GetSyncResultResponse Alibabacloud_Qualitycheck20190115::Client::getSyncResultWithOptions(shared_ptr<GetSyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSyncResult"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSyncResultResponse(callApi(params, req, runtime));
  }
  else {
    return GetSyncResultResponse(execute(params, req, runtime));
  }
}

GetSyncResultResponse Alibabacloud_Qualitycheck20190115::Client::getSyncResult(shared_ptr<GetSyncResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSyncResultWithOptions(request, runtime);
}

GetWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::getWarningStrategyConfigWithOptions(shared_ptr<GetWarningStrategyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWarningStrategyConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWarningStrategyConfigResponse(callApi(params, req, runtime));
  }
  else {
    return GetWarningStrategyConfigResponse(execute(params, req, runtime));
  }
}

GetWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::getWarningStrategyConfig(shared_ptr<GetWarningStrategyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWarningStrategyConfigWithOptions(request, runtime);
}

HandleComplaintResponse Alibabacloud_Qualitycheck20190115::Client::handleComplaintWithOptions(shared_ptr<HandleComplaintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HandleComplaint"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return HandleComplaintResponse(callApi(params, req, runtime));
  }
  else {
    return HandleComplaintResponse(execute(params, req, runtime));
  }
}

HandleComplaintResponse Alibabacloud_Qualitycheck20190115::Client::handleComplaint(shared_ptr<HandleComplaintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return handleComplaintWithOptions(request, runtime);
}

InvalidRuleResponse Alibabacloud_Qualitycheck20190115::Client::invalidRuleWithOptions(shared_ptr<InvalidRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvalidRule"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return InvalidRuleResponse(callApi(params, req, runtime));
  }
  else {
    return InvalidRuleResponse(execute(params, req, runtime));
  }
}

InvalidRuleResponse Alibabacloud_Qualitycheck20190115::Client::invalidRule(shared_ptr<InvalidRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invalidRuleWithOptions(request, runtime);
}

ListAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::listAsrVocabWithOptions(shared_ptr<ListAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAsrVocab"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAsrVocabResponse(callApi(params, req, runtime));
  }
  else {
    return ListAsrVocabResponse(execute(params, req, runtime));
  }
}

ListAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::listAsrVocab(shared_ptr<ListAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAsrVocabWithOptions(request, runtime);
}

ListDataSetResponse Alibabacloud_Qualitycheck20190115::Client::listDataSetWithOptions(shared_ptr<ListDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSet"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDataSetResponse(callApi(params, req, runtime));
  }
  else {
    return ListDataSetResponse(execute(params, req, runtime));
  }
}

ListDataSetResponse Alibabacloud_Qualitycheck20190115::Client::listDataSet(shared_ptr<ListDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSetWithOptions(request, runtime);
}

ListPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::listPrecisionTaskWithOptions(shared_ptr<ListPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrecisionTask"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPrecisionTaskResponse(callApi(params, req, runtime));
  }
  else {
    return ListPrecisionTaskResponse(execute(params, req, runtime));
  }
}

ListPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::listPrecisionTask(shared_ptr<ListPrecisionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrecisionTaskWithOptions(request, runtime);
}

ListQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::listQualityCheckSchemeWithOptions(shared_ptr<ListQualityCheckSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQualityCheckScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListQualityCheckSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return ListQualityCheckSchemeResponse(execute(params, req, runtime));
  }
}

ListQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::listQualityCheckScheme(shared_ptr<ListQualityCheckSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityCheckSchemeWithOptions(request, runtime);
}

ListRulesResponse Alibabacloud_Qualitycheck20190115::Client::listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRules"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListRulesResponse(execute(params, req, runtime));
  }
}

ListRulesResponse Alibabacloud_Qualitycheck20190115::Client::listRules(shared_ptr<ListRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRulesWithOptions(request, runtime);
}

ListRulesV4Response Alibabacloud_Qualitycheck20190115::Client::listRulesV4WithOptions(shared_ptr<ListRulesV4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessName)) {
    body->insert(pair<string, string>("BusinessName", *request->businessName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->businessRange)) {
    body->insert(pair<string, long>("BusinessRange", *request->businessRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryName)) {
    body->insert(pair<string, string>("CategoryName", *request->categoryName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->countTotal)) {
    body->insert(pair<string, bool>("CountTotal", *request->countTotal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createEmpid)) {
    body->insert(pair<string, string>("CreateEmpid", *request->createEmpid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createUserId)) {
    body->insert(pair<string, long>("CreateUserId", *request->createUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastUpdateEmpid)) {
    body->insert(pair<string, string>("LastUpdateEmpid", *request->lastUpdateEmpid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->requireInfos)) {
    body->insert(pair<string, vector<string>>("RequireInfos", *request->requireInfos));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rid)) {
    body->insert(pair<string, long>("Rid", *request->rid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleIdOrRuleName)) {
    body->insert(pair<string, string>("RuleIdOrRuleName", *request->ruleIdOrRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleScoreSingleType)) {
    body->insert(pair<string, long>("RuleScoreSingleType", *request->ruleScoreSingleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    body->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schemeId)) {
    body->insert(pair<string, long>("SchemeId", *request->schemeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourceType)) {
    body->insert(pair<string, long>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typeName_)) {
    body->insert(pair<string, string>("TypeName_", *request->typeName_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    body->insert(pair<string, string>("UpdateEndTime", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    body->insert(pair<string, string>("UpdateStartTime", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->updateUserId)) {
    body->insert(pair<string, long>("UpdateUserId", *request->updateUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRulesV4"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRulesV4Response(callApi(params, req, runtime));
  }
  else {
    return ListRulesV4Response(execute(params, req, runtime));
  }
}

ListRulesV4Response Alibabacloud_Qualitycheck20190115::Client::listRulesV4(shared_ptr<ListRulesV4Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRulesV4WithOptions(request, runtime);
}

ListSchemeTaskConfigResponse Alibabacloud_Qualitycheck20190115::Client::listSchemeTaskConfigWithOptions(shared_ptr<ListSchemeTaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSchemeTaskConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSchemeTaskConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ListSchemeTaskConfigResponse(execute(params, req, runtime));
  }
}

ListSchemeTaskConfigResponse Alibabacloud_Qualitycheck20190115::Client::listSchemeTaskConfig(shared_ptr<ListSchemeTaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSchemeTaskConfigWithOptions(request, runtime);
}

ListSessionGroupResponse Alibabacloud_Qualitycheck20190115::Client::listSessionGroupWithOptions(shared_ptr<ListSessionGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSessionGroup"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSessionGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ListSessionGroupResponse(execute(params, req, runtime));
  }
}

ListSessionGroupResponse Alibabacloud_Qualitycheck20190115::Client::listSessionGroup(shared_ptr<ListSessionGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSessionGroupWithOptions(request, runtime);
}

ListSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::listSkillGroupConfigWithOptions(shared_ptr<ListSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSkillGroupConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSkillGroupConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ListSkillGroupConfigResponse(execute(params, req, runtime));
  }
}

ListSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::listSkillGroupConfig(shared_ptr<ListSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupConfigWithOptions(request, runtime);
}

ListTaskAssignRulesResponse Alibabacloud_Qualitycheck20190115::Client::listTaskAssignRulesWithOptions(shared_ptr<ListTaskAssignRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskAssignRules"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTaskAssignRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTaskAssignRulesResponse(execute(params, req, runtime));
  }
}

ListTaskAssignRulesResponse Alibabacloud_Qualitycheck20190115::Client::listTaskAssignRules(shared_ptr<ListTaskAssignRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskAssignRulesWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Qualitycheck20190115::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListUsersResponse(callApi(params, req, runtime));
  }
  else {
    return ListUsersResponse(execute(params, req, runtime));
  }
}

ListUsersResponse Alibabacloud_Qualitycheck20190115::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

ListWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::listWarningConfigWithOptions(shared_ptr<ListWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWarningConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWarningConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ListWarningConfigResponse(execute(params, req, runtime));
  }
}

ListWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::listWarningConfig(shared_ptr<ListWarningConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWarningConfigWithOptions(request, runtime);
}

ListWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::listWarningStrategyConfigWithOptions(shared_ptr<ListWarningStrategyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWarningStrategyConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWarningStrategyConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ListWarningStrategyConfigResponse(execute(params, req, runtime));
  }
}

ListWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::listWarningStrategyConfig(shared_ptr<ListWarningStrategyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWarningStrategyConfigWithOptions(request, runtime);
}

RevertAssignedSessionResponse Alibabacloud_Qualitycheck20190115::Client::revertAssignedSessionWithOptions(shared_ptr<RevertAssignedSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevertAssignedSession"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RevertAssignedSessionResponse(callApi(params, req, runtime));
  }
  else {
    return RevertAssignedSessionResponse(execute(params, req, runtime));
  }
}

RevertAssignedSessionResponse Alibabacloud_Qualitycheck20190115::Client::revertAssignedSession(shared_ptr<RevertAssignedSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revertAssignedSessionWithOptions(request, runtime);
}

RevertAssignedSessionGroupResponse Alibabacloud_Qualitycheck20190115::Client::revertAssignedSessionGroupWithOptions(shared_ptr<RevertAssignedSessionGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevertAssignedSessionGroup"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RevertAssignedSessionGroupResponse(callApi(params, req, runtime));
  }
  else {
    return RevertAssignedSessionGroupResponse(execute(params, req, runtime));
  }
}

RevertAssignedSessionGroupResponse Alibabacloud_Qualitycheck20190115::Client::revertAssignedSessionGroup(shared_ptr<RevertAssignedSessionGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revertAssignedSessionGroupWithOptions(request, runtime);
}

SaveConfigDataSetResponse Alibabacloud_Qualitycheck20190115::Client::saveConfigDataSetWithOptions(shared_ptr<SaveConfigDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveConfigDataSet"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveConfigDataSetResponse(callApi(params, req, runtime));
  }
  else {
    return SaveConfigDataSetResponse(execute(params, req, runtime));
  }
}

SaveConfigDataSetResponse Alibabacloud_Qualitycheck20190115::Client::saveConfigDataSet(shared_ptr<SaveConfigDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveConfigDataSetWithOptions(request, runtime);
}

SubmitComplaintResponse Alibabacloud_Qualitycheck20190115::Client::submitComplaintWithOptions(shared_ptr<SubmitComplaintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitComplaint"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitComplaintResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitComplaintResponse(execute(params, req, runtime));
  }
}

SubmitComplaintResponse Alibabacloud_Qualitycheck20190115::Client::submitComplaint(shared_ptr<SubmitComplaintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitComplaintWithOptions(request, runtime);
}

SubmitPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::submitPrecisionTaskWithOptions(shared_ptr<SubmitPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitPrecisionTask"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitPrecisionTaskResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitPrecisionTaskResponse(execute(params, req, runtime));
  }
}

SubmitPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::submitPrecisionTask(shared_ptr<SubmitPrecisionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPrecisionTaskWithOptions(request, runtime);
}

SubmitQualityCheckTaskResponse Alibabacloud_Qualitycheck20190115::Client::submitQualityCheckTaskWithOptions(shared_ptr<SubmitQualityCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitQualityCheckTask"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitQualityCheckTaskResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitQualityCheckTaskResponse(execute(params, req, runtime));
  }
}

SubmitQualityCheckTaskResponse Alibabacloud_Qualitycheck20190115::Client::submitQualityCheckTask(shared_ptr<SubmitQualityCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitQualityCheckTaskWithOptions(request, runtime);
}

SubmitReviewInfoResponse Alibabacloud_Qualitycheck20190115::Client::submitReviewInfoWithOptions(shared_ptr<SubmitReviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitReviewInfo"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitReviewInfoResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitReviewInfoResponse(execute(params, req, runtime));
  }
}

SubmitReviewInfoResponse Alibabacloud_Qualitycheck20190115::Client::submitReviewInfo(shared_ptr<SubmitReviewInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitReviewInfoWithOptions(request, runtime);
}

SyncQualityCheckResponse Alibabacloud_Qualitycheck20190115::Client::syncQualityCheckWithOptions(shared_ptr<SyncQualityCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncQualityCheck"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SyncQualityCheckResponse(callApi(params, req, runtime));
  }
  else {
    return SyncQualityCheckResponse(execute(params, req, runtime));
  }
}

SyncQualityCheckResponse Alibabacloud_Qualitycheck20190115::Client::syncQualityCheck(shared_ptr<SyncQualityCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncQualityCheckWithOptions(request, runtime);
}

TestRuleV4Response Alibabacloud_Qualitycheck20190115::Client::testRuleV4WithOptions(shared_ptr<TestRuleV4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->isSchemeData)) {
    body->insert(pair<string, long>("IsSchemeData", *request->isSchemeData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->testJson)) {
    body->insert(pair<string, string>("TestJson", *request->testJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestRuleV4"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TestRuleV4Response(callApi(params, req, runtime));
  }
  else {
    return TestRuleV4Response(execute(params, req, runtime));
  }
}

TestRuleV4Response Alibabacloud_Qualitycheck20190115::Client::testRuleV4(shared_ptr<TestRuleV4Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testRuleV4WithOptions(request, runtime);
}

UpdateAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::updateAsrVocabWithOptions(shared_ptr<UpdateAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAsrVocab"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAsrVocabResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAsrVocabResponse(execute(params, req, runtime));
  }
}

UpdateAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::updateAsrVocab(shared_ptr<UpdateAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAsrVocabWithOptions(request, runtime);
}

UpdateCheckTypeToSchemeResponse Alibabacloud_Qualitycheck20190115::Client::updateCheckTypeToSchemeWithOptions(shared_ptr<UpdateCheckTypeToSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCheckTypeToScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCheckTypeToSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCheckTypeToSchemeResponse(execute(params, req, runtime));
  }
}

UpdateCheckTypeToSchemeResponse Alibabacloud_Qualitycheck20190115::Client::updateCheckTypeToScheme(shared_ptr<UpdateCheckTypeToSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCheckTypeToSchemeWithOptions(request, runtime);
}

UpdateQualityCheckDataResponse Alibabacloud_Qualitycheck20190115::Client::updateQualityCheckDataWithOptions(shared_ptr<UpdateQualityCheckDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQualityCheckData"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateQualityCheckDataResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateQualityCheckDataResponse(execute(params, req, runtime));
  }
}

UpdateQualityCheckDataResponse Alibabacloud_Qualitycheck20190115::Client::updateQualityCheckData(shared_ptr<UpdateQualityCheckDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQualityCheckDataWithOptions(request, runtime);
}

UpdateQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::updateQualityCheckSchemeWithOptions(shared_ptr<UpdateQualityCheckSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQualityCheckScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateQualityCheckSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateQualityCheckSchemeResponse(execute(params, req, runtime));
  }
}

UpdateQualityCheckSchemeResponse Alibabacloud_Qualitycheck20190115::Client::updateQualityCheckScheme(shared_ptr<UpdateQualityCheckSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQualityCheckSchemeWithOptions(request, runtime);
}

UpdateRuleResponse Alibabacloud_Qualitycheck20190115::Client::updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRule"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRuleResponse(execute(params, req, runtime));
  }
}

UpdateRuleResponse Alibabacloud_Qualitycheck20190115::Client::updateRule(shared_ptr<UpdateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleWithOptions(request, runtime);
}

UpdateRuleByIdResponse Alibabacloud_Qualitycheck20190115::Client::updateRuleByIdWithOptions(shared_ptr<UpdateRuleByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isCopy)) {
    body->insert(pair<string, bool>("IsCopy", *request->isCopy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStrForRule)) {
    body->insert(pair<string, string>("JsonStrForRule", *request->jsonStrForRule));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnRelatedSchemes)) {
    body->insert(pair<string, bool>("ReturnRelatedSchemes", *request->returnRelatedSchemes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRuleById"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRuleByIdResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRuleByIdResponse(execute(params, req, runtime));
  }
}

UpdateRuleByIdResponse Alibabacloud_Qualitycheck20190115::Client::updateRuleById(shared_ptr<UpdateRuleByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleByIdWithOptions(request, runtime);
}

UpdateRuleToSchemeResponse Alibabacloud_Qualitycheck20190115::Client::updateRuleToSchemeWithOptions(shared_ptr<UpdateRuleToSchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRuleToScheme"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRuleToSchemeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRuleToSchemeResponse(execute(params, req, runtime));
  }
}

UpdateRuleToSchemeResponse Alibabacloud_Qualitycheck20190115::Client::updateRuleToScheme(shared_ptr<UpdateRuleToSchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleToSchemeWithOptions(request, runtime);
}

UpdateRuleV4Response Alibabacloud_Qualitycheck20190115::Client::updateRuleV4WithOptions(shared_ptr<UpdateRuleV4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStrForRule)) {
    body->insert(pair<string, string>("JsonStrForRule", *request->jsonStrForRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRuleV4"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRuleV4Response(callApi(params, req, runtime));
  }
  else {
    return UpdateRuleV4Response(execute(params, req, runtime));
  }
}

UpdateRuleV4Response Alibabacloud_Qualitycheck20190115::Client::updateRuleV4(shared_ptr<UpdateRuleV4Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleV4WithOptions(request, runtime);
}

UpdateSchemeTaskConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateSchemeTaskConfigWithOptions(shared_ptr<UpdateSchemeTaskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("jsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSchemeTaskConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSchemeTaskConfigResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSchemeTaskConfigResponse(execute(params, req, runtime));
  }
}

UpdateSchemeTaskConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateSchemeTaskConfig(shared_ptr<UpdateSchemeTaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSchemeTaskConfigWithOptions(request, runtime);
}

UpdateSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateSkillGroupConfigWithOptions(shared_ptr<UpdateSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSkillGroupConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSkillGroupConfigResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSkillGroupConfigResponse(execute(params, req, runtime));
  }
}

UpdateSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateSkillGroupConfig(shared_ptr<UpdateSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSkillGroupConfigWithOptions(request, runtime);
}

UpdateSyncQualityCheckDataResponse Alibabacloud_Qualitycheck20190115::Client::updateSyncQualityCheckDataWithOptions(shared_ptr<UpdateSyncQualityCheckDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSyncQualityCheckData"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSyncQualityCheckDataResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSyncQualityCheckDataResponse(execute(params, req, runtime));
  }
}

UpdateSyncQualityCheckDataResponse Alibabacloud_Qualitycheck20190115::Client::updateSyncQualityCheckData(shared_ptr<UpdateSyncQualityCheckDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSyncQualityCheckDataWithOptions(request, runtime);
}

UpdateTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::updateTaskAssignRuleWithOptions(shared_ptr<UpdateTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTaskAssignRule"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateTaskAssignRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateTaskAssignRuleResponse(execute(params, req, runtime));
  }
}

UpdateTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::updateTaskAssignRule(shared_ptr<UpdateTaskAssignRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskAssignRuleWithOptions(request, runtime);
}

UpdateUserResponse Alibabacloud_Qualitycheck20190115::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUser"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateUserResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateUserResponse(execute(params, req, runtime));
  }
}

UpdateUserResponse Alibabacloud_Qualitycheck20190115::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserWithOptions(request, runtime);
}

UpdateWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateWarningConfigWithOptions(shared_ptr<UpdateWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWarningConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateWarningConfigResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateWarningConfigResponse(execute(params, req, runtime));
  }
}

UpdateWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateWarningConfig(shared_ptr<UpdateWarningConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWarningConfigWithOptions(request, runtime);
}

UpdateWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateWarningStrategyConfigWithOptions(shared_ptr<UpdateWarningStrategyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWarningStrategyConfig"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateWarningStrategyConfigResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateWarningStrategyConfigResponse(execute(params, req, runtime));
  }
}

UpdateWarningStrategyConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateWarningStrategyConfig(shared_ptr<UpdateWarningStrategyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWarningStrategyConfigWithOptions(request, runtime);
}

UploadAudioDataResponse Alibabacloud_Qualitycheck20190115::Client::uploadAudioDataWithOptions(shared_ptr<UploadAudioDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadAudioData"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadAudioDataResponse(callApi(params, req, runtime));
  }
  else {
    return UploadAudioDataResponse(execute(params, req, runtime));
  }
}

UploadAudioDataResponse Alibabacloud_Qualitycheck20190115::Client::uploadAudioData(shared_ptr<UploadAudioDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadAudioDataWithOptions(request, runtime);
}

UploadDataResponse Alibabacloud_Qualitycheck20190115::Client::uploadDataWithOptions(shared_ptr<UploadDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadData"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadDataResponse(callApi(params, req, runtime));
  }
  else {
    return UploadDataResponse(execute(params, req, runtime));
  }
}

UploadDataResponse Alibabacloud_Qualitycheck20190115::Client::uploadData(shared_ptr<UploadDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadDataWithOptions(request, runtime);
}

UploadDataSyncResponse Alibabacloud_Qualitycheck20190115::Client::uploadDataSyncWithOptions(shared_ptr<UploadDataSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadDataSync"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadDataSyncResponse(callApi(params, req, runtime));
  }
  else {
    return UploadDataSyncResponse(execute(params, req, runtime));
  }
}

UploadDataSyncResponse Alibabacloud_Qualitycheck20190115::Client::uploadDataSync(shared_ptr<UploadDataSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadDataSyncWithOptions(request, runtime);
}

UploadDataV4Response Alibabacloud_Qualitycheck20190115::Client::uploadDataV4WithOptions(shared_ptr<UploadDataV4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    body->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    body->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadDataV4"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadDataV4Response(callApi(params, req, runtime));
  }
  else {
    return UploadDataV4Response(execute(params, req, runtime));
  }
}

UploadDataV4Response Alibabacloud_Qualitycheck20190115::Client::uploadDataV4(shared_ptr<UploadDataV4Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadDataV4WithOptions(request, runtime);
}

UploadRuleResponse Alibabacloud_Qualitycheck20190115::Client::uploadRuleWithOptions(shared_ptr<UploadRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadRule"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UploadRuleResponse(execute(params, req, runtime));
  }
}

UploadRuleResponse Alibabacloud_Qualitycheck20190115::Client::uploadRule(shared_ptr<UploadRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadRuleWithOptions(request, runtime);
}

VerifyFileResponse Alibabacloud_Qualitycheck20190115::Client::verifyFileWithOptions(shared_ptr<VerifyFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyFile"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return VerifyFileResponse(callApi(params, req, runtime));
  }
  else {
    return VerifyFileResponse(execute(params, req, runtime));
  }
}

VerifyFileResponse Alibabacloud_Qualitycheck20190115::Client::verifyFile(shared_ptr<VerifyFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyFileWithOptions(request, runtime);
}

VerifySentenceResponse Alibabacloud_Qualitycheck20190115::Client::verifySentenceWithOptions(shared_ptr<VerifySentenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->baseMeAgentId)) {
    query->insert(pair<string, long>("BaseMeAgentId", *request->baseMeAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonStr)) {
    query->insert(pair<string, string>("JsonStr", *request->jsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifySentence"))},
    {"version", boost::any(string("2019-01-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return VerifySentenceResponse(callApi(params, req, runtime));
  }
  else {
    return VerifySentenceResponse(execute(params, req, runtime));
  }
}

VerifySentenceResponse Alibabacloud_Qualitycheck20190115::Client::verifySentence(shared_ptr<VerifySentenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifySentenceWithOptions(request, runtime);
}

