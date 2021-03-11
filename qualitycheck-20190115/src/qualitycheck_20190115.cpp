// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/qualitycheck_20190115.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
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
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddBusinessCategoryResponse Alibabacloud_Qualitycheck20190115::Client::addBusinessCategoryWithOptions(shared_ptr<AddBusinessCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddBusinessCategoryResponse(doRPCRequest(make_shared<string>("AddBusinessCategory"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddBusinessCategoryResponse Alibabacloud_Qualitycheck20190115::Client::addBusinessCategory(shared_ptr<AddBusinessCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBusinessCategoryWithOptions(request, runtime);
}

AddRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::addRuleCategoryWithOptions(shared_ptr<AddRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddRuleCategoryResponse(doRPCRequest(make_shared<string>("AddRuleCategory"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::addRuleCategory(shared_ptr<AddRuleCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRuleCategoryWithOptions(request, runtime);
}

AddThesaurusForApiResponse Alibabacloud_Qualitycheck20190115::Client::addThesaurusForApiWithOptions(shared_ptr<AddThesaurusForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddThesaurusForApiResponse(doRPCRequest(make_shared<string>("AddThesaurusForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddThesaurusForApiResponse Alibabacloud_Qualitycheck20190115::Client::addThesaurusForApi(shared_ptr<AddThesaurusForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addThesaurusForApiWithOptions(request, runtime);
}

AddUploadDataSetResponse Alibabacloud_Qualitycheck20190115::Client::addUploadDataSetWithOptions(shared_ptr<AddUploadDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddUploadDataSetResponse(doRPCRequest(make_shared<string>("AddUploadDataSet"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddUploadDataSetResponse Alibabacloud_Qualitycheck20190115::Client::addUploadDataSet(shared_ptr<AddUploadDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUploadDataSetWithOptions(request, runtime);
}

AssignReviewerResponse Alibabacloud_Qualitycheck20190115::Client::assignReviewerWithOptions(shared_ptr<AssignReviewerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssignReviewerResponse(doRPCRequest(make_shared<string>("AssignReviewer"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssignReviewerResponse Alibabacloud_Qualitycheck20190115::Client::assignReviewer(shared_ptr<AssignReviewerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignReviewerWithOptions(request, runtime);
}

ConfigDataSetResponse Alibabacloud_Qualitycheck20190115::Client::configDataSetWithOptions(shared_ptr<ConfigDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConfigDataSetResponse(doRPCRequest(make_shared<string>("ConfigDataSet"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConfigDataSetResponse Alibabacloud_Qualitycheck20190115::Client::configDataSet(shared_ptr<ConfigDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configDataSetWithOptions(request, runtime);
}

CreateAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::createAsrVocabWithOptions(shared_ptr<CreateAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAsrVocabResponse(doRPCRequest(make_shared<string>("CreateAsrVocab"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::createAsrVocab(shared_ptr<CreateAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAsrVocabWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Qualitycheck20190115::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRuleResponse(doRPCRequest(make_shared<string>("CreateRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRuleResponse Alibabacloud_Qualitycheck20190115::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::createSkillGroupConfigWithOptions(shared_ptr<CreateSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSkillGroupConfigResponse(doRPCRequest(make_shared<string>("CreateSkillGroupConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::createSkillGroupConfig(shared_ptr<CreateSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSkillGroupConfigWithOptions(request, runtime);
}

CreateTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::createTaskAssignRuleWithOptions(shared_ptr<CreateTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTaskAssignRuleResponse(doRPCRequest(make_shared<string>("CreateTaskAssignRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::createTaskAssignRule(shared_ptr<CreateTaskAssignRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskAssignRuleWithOptions(request, runtime);
}

CreateUserResponse Alibabacloud_Qualitycheck20190115::Client::createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUserResponse(doRPCRequest(make_shared<string>("CreateUser"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUserResponse Alibabacloud_Qualitycheck20190115::Client::createUser(shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserWithOptions(request, runtime);
}

CreateWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::createWarningConfigWithOptions(shared_ptr<CreateWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateWarningConfigResponse(doRPCRequest(make_shared<string>("CreateWarningConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::createWarningConfig(shared_ptr<CreateWarningConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWarningConfigWithOptions(request, runtime);
}

DeleteAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::deleteAsrVocabWithOptions(shared_ptr<DeleteAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAsrVocabResponse(doRPCRequest(make_shared<string>("DeleteAsrVocab"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::deleteAsrVocab(shared_ptr<DeleteAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAsrVocabWithOptions(request, runtime);
}

DeleteBusinessCategoryResponse Alibabacloud_Qualitycheck20190115::Client::deleteBusinessCategoryWithOptions(shared_ptr<DeleteBusinessCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBusinessCategoryResponse(doRPCRequest(make_shared<string>("DeleteBusinessCategory"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBusinessCategoryResponse Alibabacloud_Qualitycheck20190115::Client::deleteBusinessCategory(shared_ptr<DeleteBusinessCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBusinessCategoryWithOptions(request, runtime);
}

DeleteCustomizationConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteCustomizationConfigWithOptions(shared_ptr<DeleteCustomizationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCustomizationConfigResponse(doRPCRequest(make_shared<string>("DeleteCustomizationConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCustomizationConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteCustomizationConfig(shared_ptr<DeleteCustomizationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomizationConfigWithOptions(request, runtime);
}

DeleteDataSetResponse Alibabacloud_Qualitycheck20190115::Client::deleteDataSetWithOptions(shared_ptr<DeleteDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDataSetResponse(doRPCRequest(make_shared<string>("DeleteDataSet"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDataSetResponse Alibabacloud_Qualitycheck20190115::Client::deleteDataSet(shared_ptr<DeleteDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSetWithOptions(request, runtime);
}

DeletePrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::deletePrecisionTaskWithOptions(shared_ptr<DeletePrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePrecisionTaskResponse(doRPCRequest(make_shared<string>("DeletePrecisionTask"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::deletePrecisionTask(shared_ptr<DeletePrecisionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrecisionTaskWithOptions(request, runtime);
}

DeleteScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::deleteScoreForApiWithOptions(shared_ptr<DeleteScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteScoreForApiResponse(doRPCRequest(make_shared<string>("DeleteScoreForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::deleteScoreForApi(shared_ptr<DeleteScoreForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScoreForApiWithOptions(request, runtime);
}

DeleteSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteSkillGroupConfigWithOptions(shared_ptr<DeleteSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSkillGroupConfigResponse(doRPCRequest(make_shared<string>("DeleteSkillGroupConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteSkillGroupConfig(shared_ptr<DeleteSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSkillGroupConfigWithOptions(request, runtime);
}

DeleteSubScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::deleteSubScoreForApiWithOptions(shared_ptr<DeleteSubScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSubScoreForApiResponse(doRPCRequest(make_shared<string>("DeleteSubScoreForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSubScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::deleteSubScoreForApi(shared_ptr<DeleteSubScoreForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubScoreForApiWithOptions(request, runtime);
}

DeleteTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::deleteTaskAssignRuleWithOptions(shared_ptr<DeleteTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTaskAssignRuleResponse(doRPCRequest(make_shared<string>("DeleteTaskAssignRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::deleteTaskAssignRule(shared_ptr<DeleteTaskAssignRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTaskAssignRuleWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Qualitycheck20190115::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUserResponse(doRPCRequest(make_shared<string>("DeleteUser"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUserResponse Alibabacloud_Qualitycheck20190115::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DeleteWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteWarningConfigWithOptions(shared_ptr<DeleteWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteWarningConfigResponse(doRPCRequest(make_shared<string>("DeleteWarningConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::deleteWarningConfig(shared_ptr<DeleteWarningConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWarningConfigWithOptions(request, runtime);
}

DelRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::delRuleCategoryWithOptions(shared_ptr<DelRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DelRuleCategoryResponse(doRPCRequest(make_shared<string>("DelRuleCategory"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DelRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::delRuleCategory(shared_ptr<DelRuleCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delRuleCategoryWithOptions(request, runtime);
}

DelThesaurusForApiResponse Alibabacloud_Qualitycheck20190115::Client::delThesaurusForApiWithOptions(shared_ptr<DelThesaurusForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DelThesaurusForApiResponse(doRPCRequest(make_shared<string>("DelThesaurusForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DelThesaurusForApiResponse Alibabacloud_Qualitycheck20190115::Client::delThesaurusForApi(shared_ptr<DelThesaurusForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delThesaurusForApiWithOptions(request, runtime);
}

EditThesaurusForApiResponse Alibabacloud_Qualitycheck20190115::Client::editThesaurusForApiWithOptions(shared_ptr<EditThesaurusForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EditThesaurusForApiResponse(doRPCRequest(make_shared<string>("EditThesaurusForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EditThesaurusForApiResponse Alibabacloud_Qualitycheck20190115::Client::editThesaurusForApi(shared_ptr<EditThesaurusForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editThesaurusForApiWithOptions(request, runtime);
}

GetAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::getAsrVocabWithOptions(shared_ptr<GetAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAsrVocabResponse(doRPCRequest(make_shared<string>("GetAsrVocab"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::getAsrVocab(shared_ptr<GetAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsrVocabWithOptions(request, runtime);
}

GetBusinessCategoryListResponse Alibabacloud_Qualitycheck20190115::Client::getBusinessCategoryListWithOptions(shared_ptr<GetBusinessCategoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetBusinessCategoryListResponse(doRPCRequest(make_shared<string>("GetBusinessCategoryList"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetBusinessCategoryListResponse Alibabacloud_Qualitycheck20190115::Client::getBusinessCategoryList(shared_ptr<GetBusinessCategoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessCategoryListWithOptions(request, runtime);
}

GetCustomizationConfigListResponse Alibabacloud_Qualitycheck20190115::Client::getCustomizationConfigListWithOptions(shared_ptr<GetCustomizationConfigListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCustomizationConfigListResponse(doRPCRequest(make_shared<string>("GetCustomizationConfigList"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCustomizationConfigListResponse Alibabacloud_Qualitycheck20190115::Client::getCustomizationConfigList(shared_ptr<GetCustomizationConfigListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomizationConfigListWithOptions(request, runtime);
}

GetHitResultResponse Alibabacloud_Qualitycheck20190115::Client::getHitResultWithOptions(shared_ptr<GetHitResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHitResultResponse(doRPCRequest(make_shared<string>("GetHitResult"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHitResultResponse Alibabacloud_Qualitycheck20190115::Client::getHitResult(shared_ptr<GetHitResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHitResultWithOptions(request, runtime);
}

GetNextResultToVerifyResponse Alibabacloud_Qualitycheck20190115::Client::getNextResultToVerifyWithOptions(shared_ptr<GetNextResultToVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNextResultToVerifyResponse(doRPCRequest(make_shared<string>("GetNextResultToVerify"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNextResultToVerifyResponse Alibabacloud_Qualitycheck20190115::Client::getNextResultToVerify(shared_ptr<GetNextResultToVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNextResultToVerifyWithOptions(request, runtime);
}

GetPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::getPrecisionTaskWithOptions(shared_ptr<GetPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPrecisionTaskResponse(doRPCRequest(make_shared<string>("GetPrecisionTask"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::getPrecisionTask(shared_ptr<GetPrecisionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrecisionTaskWithOptions(request, runtime);
}

GetResultResponse Alibabacloud_Qualitycheck20190115::Client::getResultWithOptions(shared_ptr<GetResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetResultResponse(doRPCRequest(make_shared<string>("GetResult"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResultResponse Alibabacloud_Qualitycheck20190115::Client::getResult(shared_ptr<GetResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResultWithOptions(request, runtime);
}

GetResultCallbackResponse Alibabacloud_Qualitycheck20190115::Client::getResultCallbackWithOptions(shared_ptr<GetResultCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetResultCallbackResponse(doRPCRequest(make_shared<string>("GetResultCallback"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResultCallbackResponse Alibabacloud_Qualitycheck20190115::Client::getResultCallback(shared_ptr<GetResultCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResultCallbackWithOptions(request, runtime);
}

GetResultToReviewResponse Alibabacloud_Qualitycheck20190115::Client::getResultToReviewWithOptions(shared_ptr<GetResultToReviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetResultToReviewResponse(doRPCRequest(make_shared<string>("GetResultToReview"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResultToReviewResponse Alibabacloud_Qualitycheck20190115::Client::getResultToReview(shared_ptr<GetResultToReviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResultToReviewWithOptions(request, runtime);
}

GetReviewInfoResponse Alibabacloud_Qualitycheck20190115::Client::getReviewInfoWithOptions(shared_ptr<GetReviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetReviewInfoResponse(doRPCRequest(make_shared<string>("GetReviewInfo"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetReviewInfoResponse Alibabacloud_Qualitycheck20190115::Client::getReviewInfo(shared_ptr<GetReviewInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getReviewInfoWithOptions(request, runtime);
}

GetRuleResponse Alibabacloud_Qualitycheck20190115::Client::getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRuleResponse(doRPCRequest(make_shared<string>("GetRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRuleResponse Alibabacloud_Qualitycheck20190115::Client::getRule(shared_ptr<GetRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleWithOptions(request, runtime);
}

GetRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::getRuleCategoryWithOptions(shared_ptr<GetRuleCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRuleCategoryResponse(doRPCRequest(make_shared<string>("GetRuleCategory"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRuleCategoryResponse Alibabacloud_Qualitycheck20190115::Client::getRuleCategory(shared_ptr<GetRuleCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleCategoryWithOptions(request, runtime);
}

GetRuleDetailResponse Alibabacloud_Qualitycheck20190115::Client::getRuleDetailWithOptions(shared_ptr<GetRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRuleDetailResponse(doRPCRequest(make_shared<string>("GetRuleDetail"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRuleDetailResponse Alibabacloud_Qualitycheck20190115::Client::getRuleDetail(shared_ptr<GetRuleDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleDetailWithOptions(request, runtime);
}

GetRuleDimensionResponse Alibabacloud_Qualitycheck20190115::Client::getRuleDimensionWithOptions(shared_ptr<GetRuleDimensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRuleDimensionResponse(doRPCRequest(make_shared<string>("GetRuleDimension"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRuleDimensionResponse Alibabacloud_Qualitycheck20190115::Client::getRuleDimension(shared_ptr<GetRuleDimensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleDimensionWithOptions(request, runtime);
}

GetScoreInfoResponse Alibabacloud_Qualitycheck20190115::Client::getScoreInfoWithOptions(shared_ptr<GetScoreInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetScoreInfoResponse(doRPCRequest(make_shared<string>("GetScoreInfo"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetScoreInfoResponse Alibabacloud_Qualitycheck20190115::Client::getScoreInfo(shared_ptr<GetScoreInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScoreInfoWithOptions(request, runtime);
}

GetSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::getSkillGroupConfigWithOptions(shared_ptr<GetSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSkillGroupConfigResponse(doRPCRequest(make_shared<string>("GetSkillGroupConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::getSkillGroupConfig(shared_ptr<GetSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupConfigWithOptions(request, runtime);
}

GetSyncResultResponse Alibabacloud_Qualitycheck20190115::Client::getSyncResultWithOptions(shared_ptr<GetSyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSyncResultResponse(doRPCRequest(make_shared<string>("GetSyncResult"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSyncResultResponse Alibabacloud_Qualitycheck20190115::Client::getSyncResult(shared_ptr<GetSyncResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSyncResultWithOptions(request, runtime);
}

GetTaskFileResultListResponse Alibabacloud_Qualitycheck20190115::Client::getTaskFileResultListWithOptions(shared_ptr<GetTaskFileResultListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTaskFileResultListResponse(doRPCRequest(make_shared<string>("GetTaskFileResultList"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTaskFileResultListResponse Alibabacloud_Qualitycheck20190115::Client::getTaskFileResultList(shared_ptr<GetTaskFileResultListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskFileResultListWithOptions(request, runtime);
}

GetTaskRuleListResponse Alibabacloud_Qualitycheck20190115::Client::getTaskRuleListWithOptions(shared_ptr<GetTaskRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTaskRuleListResponse(doRPCRequest(make_shared<string>("GetTaskRuleList"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTaskRuleListResponse Alibabacloud_Qualitycheck20190115::Client::getTaskRuleList(shared_ptr<GetTaskRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskRuleListWithOptions(request, runtime);
}

GetThesaurusBySynonymForApiResponse Alibabacloud_Qualitycheck20190115::Client::getThesaurusBySynonymForApiWithOptions(shared_ptr<GetThesaurusBySynonymForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetThesaurusBySynonymForApiResponse(doRPCRequest(make_shared<string>("GetThesaurusBySynonymForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetThesaurusBySynonymForApiResponse Alibabacloud_Qualitycheck20190115::Client::getThesaurusBySynonymForApi(shared_ptr<GetThesaurusBySynonymForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThesaurusBySynonymForApiWithOptions(request, runtime);
}

HandleComplaintResponse Alibabacloud_Qualitycheck20190115::Client::handleComplaintWithOptions(shared_ptr<HandleComplaintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HandleComplaintResponse(doRPCRequest(make_shared<string>("HandleComplaint"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HandleComplaintResponse Alibabacloud_Qualitycheck20190115::Client::handleComplaint(shared_ptr<HandleComplaintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return handleComplaintWithOptions(request, runtime);
}

InsertScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::insertScoreForApiWithOptions(shared_ptr<InsertScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InsertScoreForApiResponse(doRPCRequest(make_shared<string>("InsertScoreForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InsertScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::insertScoreForApi(shared_ptr<InsertScoreForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertScoreForApiWithOptions(request, runtime);
}

InsertSubScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::insertSubScoreForApiWithOptions(shared_ptr<InsertSubScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InsertSubScoreForApiResponse(doRPCRequest(make_shared<string>("InsertSubScoreForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InsertSubScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::insertSubScoreForApi(shared_ptr<InsertSubScoreForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertSubScoreForApiWithOptions(request, runtime);
}

InvalidRuleResponse Alibabacloud_Qualitycheck20190115::Client::invalidRuleWithOptions(shared_ptr<InvalidRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InvalidRuleResponse(doRPCRequest(make_shared<string>("InvalidRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InvalidRuleResponse Alibabacloud_Qualitycheck20190115::Client::invalidRule(shared_ptr<InvalidRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invalidRuleWithOptions(request, runtime);
}

ListAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::listAsrVocabWithOptions(shared_ptr<ListAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAsrVocabResponse(doRPCRequest(make_shared<string>("ListAsrVocab"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::listAsrVocab(shared_ptr<ListAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAsrVocabWithOptions(request, runtime);
}

ListDataSetTaskResponse Alibabacloud_Qualitycheck20190115::Client::listDataSetTaskWithOptions(shared_ptr<ListDataSetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDataSetTaskResponse(doRPCRequest(make_shared<string>("ListDataSetTask"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDataSetTaskResponse Alibabacloud_Qualitycheck20190115::Client::listDataSetTask(shared_ptr<ListDataSetTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSetTaskWithOptions(request, runtime);
}

ListHotWordsTasksResponse Alibabacloud_Qualitycheck20190115::Client::listHotWordsTasksWithOptions(shared_ptr<ListHotWordsTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHotWordsTasksResponse(doRPCRequest(make_shared<string>("ListHotWordsTasks"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHotWordsTasksResponse Alibabacloud_Qualitycheck20190115::Client::listHotWordsTasks(shared_ptr<ListHotWordsTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotWordsTasksWithOptions(request, runtime);
}

ListPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::listPrecisionTaskWithOptions(shared_ptr<ListPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPrecisionTaskResponse(doRPCRequest(make_shared<string>("ListPrecisionTask"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::listPrecisionTask(shared_ptr<ListPrecisionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrecisionTaskWithOptions(request, runtime);
}

ListRolesResponse Alibabacloud_Qualitycheck20190115::Client::listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRolesResponse(doRPCRequest(make_shared<string>("ListRoles"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRolesResponse Alibabacloud_Qualitycheck20190115::Client::listRoles(shared_ptr<ListRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRolesWithOptions(request, runtime);
}

ListRulesResponse Alibabacloud_Qualitycheck20190115::Client::listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRulesResponse(doRPCRequest(make_shared<string>("ListRules"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRulesResponse Alibabacloud_Qualitycheck20190115::Client::listRules(shared_ptr<ListRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRulesWithOptions(request, runtime);
}

ListSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::listSkillGroupConfigWithOptions(shared_ptr<ListSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillGroupConfigResponse(doRPCRequest(make_shared<string>("ListSkillGroupConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::listSkillGroupConfig(shared_ptr<ListSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupConfigWithOptions(request, runtime);
}

ListTaskAssignRulesResponse Alibabacloud_Qualitycheck20190115::Client::listTaskAssignRulesWithOptions(shared_ptr<ListTaskAssignRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTaskAssignRulesResponse(doRPCRequest(make_shared<string>("ListTaskAssignRules"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTaskAssignRulesResponse Alibabacloud_Qualitycheck20190115::Client::listTaskAssignRules(shared_ptr<ListTaskAssignRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskAssignRulesWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Qualitycheck20190115::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_Qualitycheck20190115::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

ListWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::listWarningConfigWithOptions(shared_ptr<ListWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListWarningConfigResponse(doRPCRequest(make_shared<string>("ListWarningConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::listWarningConfig(shared_ptr<ListWarningConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWarningConfigWithOptions(request, runtime);
}

RemoveAndGetTaskRulesResponse Alibabacloud_Qualitycheck20190115::Client::removeAndGetTaskRulesWithOptions(shared_ptr<RemoveAndGetTaskRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveAndGetTaskRulesResponse(doRPCRequest(make_shared<string>("RemoveAndGetTaskRules"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveAndGetTaskRulesResponse Alibabacloud_Qualitycheck20190115::Client::removeAndGetTaskRules(shared_ptr<RemoveAndGetTaskRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAndGetTaskRulesWithOptions(request, runtime);
}

RestartAsrTaskResponse Alibabacloud_Qualitycheck20190115::Client::restartAsrTaskWithOptions(shared_ptr<RestartAsrTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartAsrTaskResponse(doRPCRequest(make_shared<string>("RestartAsrTask"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartAsrTaskResponse Alibabacloud_Qualitycheck20190115::Client::restartAsrTask(shared_ptr<RestartAsrTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartAsrTaskWithOptions(request, runtime);
}

ReviewSingleResultByIdResponse Alibabacloud_Qualitycheck20190115::Client::reviewSingleResultByIdWithOptions(shared_ptr<ReviewSingleResultByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReviewSingleResultByIdResponse(doRPCRequest(make_shared<string>("ReviewSingleResultById"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReviewSingleResultByIdResponse Alibabacloud_Qualitycheck20190115::Client::reviewSingleResultById(shared_ptr<ReviewSingleResultByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reviewSingleResultByIdWithOptions(request, runtime);
}

SaveConfigDataSetResponse Alibabacloud_Qualitycheck20190115::Client::saveConfigDataSetWithOptions(shared_ptr<SaveConfigDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveConfigDataSetResponse(doRPCRequest(make_shared<string>("SaveConfigDataSet"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveConfigDataSetResponse Alibabacloud_Qualitycheck20190115::Client::saveConfigDataSet(shared_ptr<SaveConfigDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveConfigDataSetWithOptions(request, runtime);
}

SubmitComplaintResponse Alibabacloud_Qualitycheck20190115::Client::submitComplaintWithOptions(shared_ptr<SubmitComplaintRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitComplaintResponse(doRPCRequest(make_shared<string>("SubmitComplaint"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitComplaintResponse Alibabacloud_Qualitycheck20190115::Client::submitComplaint(shared_ptr<SubmitComplaintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitComplaintWithOptions(request, runtime);
}

SubmitCustomizationConfigResponse Alibabacloud_Qualitycheck20190115::Client::submitCustomizationConfigWithOptions(shared_ptr<SubmitCustomizationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitCustomizationConfigResponse(doRPCRequest(make_shared<string>("SubmitCustomizationConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitCustomizationConfigResponse Alibabacloud_Qualitycheck20190115::Client::submitCustomizationConfig(shared_ptr<SubmitCustomizationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCustomizationConfigWithOptions(request, runtime);
}

SubmitPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::submitPrecisionTaskWithOptions(shared_ptr<SubmitPrecisionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitPrecisionTaskResponse(doRPCRequest(make_shared<string>("SubmitPrecisionTask"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitPrecisionTaskResponse Alibabacloud_Qualitycheck20190115::Client::submitPrecisionTask(shared_ptr<SubmitPrecisionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPrecisionTaskWithOptions(request, runtime);
}

SubmitQualityCheckTaskResponse Alibabacloud_Qualitycheck20190115::Client::submitQualityCheckTaskWithOptions(shared_ptr<SubmitQualityCheckTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitQualityCheckTaskResponse(doRPCRequest(make_shared<string>("SubmitQualityCheckTask"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitQualityCheckTaskResponse Alibabacloud_Qualitycheck20190115::Client::submitQualityCheckTask(shared_ptr<SubmitQualityCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitQualityCheckTaskWithOptions(request, runtime);
}

SubmitReviewInfoResponse Alibabacloud_Qualitycheck20190115::Client::submitReviewInfoWithOptions(shared_ptr<SubmitReviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitReviewInfoResponse(doRPCRequest(make_shared<string>("SubmitReviewInfo"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitReviewInfoResponse Alibabacloud_Qualitycheck20190115::Client::submitReviewInfo(shared_ptr<SubmitReviewInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitReviewInfoWithOptions(request, runtime);
}

SyncQualityCheckResponse Alibabacloud_Qualitycheck20190115::Client::syncQualityCheckWithOptions(shared_ptr<SyncQualityCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SyncQualityCheckResponse(doRPCRequest(make_shared<string>("SyncQualityCheck"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SyncQualityCheckResponse Alibabacloud_Qualitycheck20190115::Client::syncQualityCheck(shared_ptr<SyncQualityCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncQualityCheckWithOptions(request, runtime);
}

TestRuleResponse Alibabacloud_Qualitycheck20190115::Client::testRuleWithOptions(shared_ptr<TestRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TestRuleResponse(doRPCRequest(make_shared<string>("TestRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TestRuleResponse Alibabacloud_Qualitycheck20190115::Client::testRule(shared_ptr<TestRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testRuleWithOptions(request, runtime);
}

UpdateAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::updateAsrVocabWithOptions(shared_ptr<UpdateAsrVocabRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAsrVocabResponse(doRPCRequest(make_shared<string>("UpdateAsrVocab"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAsrVocabResponse Alibabacloud_Qualitycheck20190115::Client::updateAsrVocab(shared_ptr<UpdateAsrVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAsrVocabWithOptions(request, runtime);
}

UpdateOnPurchaseSuccessResponse Alibabacloud_Qualitycheck20190115::Client::updateOnPurchaseSuccessWithOptions(shared_ptr<UpdateOnPurchaseSuccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateOnPurchaseSuccessResponse(doRPCRequest(make_shared<string>("UpdateOnPurchaseSuccess"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateOnPurchaseSuccessResponse Alibabacloud_Qualitycheck20190115::Client::updateOnPurchaseSuccess(shared_ptr<UpdateOnPurchaseSuccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOnPurchaseSuccessWithOptions(request, runtime);
}

UpdateRuleResponse Alibabacloud_Qualitycheck20190115::Client::updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRuleResponse(doRPCRequest(make_shared<string>("UpdateRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRuleResponse Alibabacloud_Qualitycheck20190115::Client::updateRule(shared_ptr<UpdateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleWithOptions(request, runtime);
}

UpdateScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::updateScoreForApiWithOptions(shared_ptr<UpdateScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateScoreForApiResponse(doRPCRequest(make_shared<string>("UpdateScoreForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::updateScoreForApi(shared_ptr<UpdateScoreForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateScoreForApiWithOptions(request, runtime);
}

UpdateSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateSkillGroupConfigWithOptions(shared_ptr<UpdateSkillGroupConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSkillGroupConfigResponse(doRPCRequest(make_shared<string>("UpdateSkillGroupConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSkillGroupConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateSkillGroupConfig(shared_ptr<UpdateSkillGroupConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSkillGroupConfigWithOptions(request, runtime);
}

UpdateSubScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::updateSubScoreForApiWithOptions(shared_ptr<UpdateSubScoreForApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSubScoreForApiResponse(doRPCRequest(make_shared<string>("UpdateSubScoreForApi"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSubScoreForApiResponse Alibabacloud_Qualitycheck20190115::Client::updateSubScoreForApi(shared_ptr<UpdateSubScoreForApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubScoreForApiWithOptions(request, runtime);
}

UpdateSyncQualityCheckDataResponse Alibabacloud_Qualitycheck20190115::Client::updateSyncQualityCheckDataWithOptions(shared_ptr<UpdateSyncQualityCheckDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSyncQualityCheckDataResponse(doRPCRequest(make_shared<string>("UpdateSyncQualityCheckData"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSyncQualityCheckDataResponse Alibabacloud_Qualitycheck20190115::Client::updateSyncQualityCheckData(shared_ptr<UpdateSyncQualityCheckDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSyncQualityCheckDataWithOptions(request, runtime);
}

UpdateTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::updateTaskAssignRuleWithOptions(shared_ptr<UpdateTaskAssignRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTaskAssignRuleResponse(doRPCRequest(make_shared<string>("UpdateTaskAssignRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTaskAssignRuleResponse Alibabacloud_Qualitycheck20190115::Client::updateTaskAssignRule(shared_ptr<UpdateTaskAssignRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTaskAssignRuleWithOptions(request, runtime);
}

UpdateUserResponse Alibabacloud_Qualitycheck20190115::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateUserResponse(doRPCRequest(make_shared<string>("UpdateUser"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateUserResponse Alibabacloud_Qualitycheck20190115::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserWithOptions(request, runtime);
}

UpdateUserConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateUserConfigWithOptions(shared_ptr<UpdateUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateUserConfigResponse(doRPCRequest(make_shared<string>("UpdateUserConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateUserConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateUserConfig(shared_ptr<UpdateUserConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserConfigWithOptions(request, runtime);
}

UpdateWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateWarningConfigWithOptions(shared_ptr<UpdateWarningConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateWarningConfigResponse(doRPCRequest(make_shared<string>("UpdateWarningConfig"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateWarningConfigResponse Alibabacloud_Qualitycheck20190115::Client::updateWarningConfig(shared_ptr<UpdateWarningConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWarningConfigWithOptions(request, runtime);
}

UploadAudioDataResponse Alibabacloud_Qualitycheck20190115::Client::uploadAudioDataWithOptions(shared_ptr<UploadAudioDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadAudioDataResponse(doRPCRequest(make_shared<string>("UploadAudioData"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadAudioDataResponse Alibabacloud_Qualitycheck20190115::Client::uploadAudioData(shared_ptr<UploadAudioDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadAudioDataWithOptions(request, runtime);
}

UploadDataResponse Alibabacloud_Qualitycheck20190115::Client::uploadDataWithOptions(shared_ptr<UploadDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadDataResponse(doRPCRequest(make_shared<string>("UploadData"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadDataResponse Alibabacloud_Qualitycheck20190115::Client::uploadData(shared_ptr<UploadDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadDataWithOptions(request, runtime);
}

UploadDataSyncResponse Alibabacloud_Qualitycheck20190115::Client::uploadDataSyncWithOptions(shared_ptr<UploadDataSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadDataSyncResponse(doRPCRequest(make_shared<string>("UploadDataSync"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadDataSyncResponse Alibabacloud_Qualitycheck20190115::Client::uploadDataSync(shared_ptr<UploadDataSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadDataSyncWithOptions(request, runtime);
}

UploadRuleResponse Alibabacloud_Qualitycheck20190115::Client::uploadRuleWithOptions(shared_ptr<UploadRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadRuleResponse(doRPCRequest(make_shared<string>("UploadRule"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadRuleResponse Alibabacloud_Qualitycheck20190115::Client::uploadRule(shared_ptr<UploadRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadRuleWithOptions(request, runtime);
}

VerifyFileResponse Alibabacloud_Qualitycheck20190115::Client::verifyFileWithOptions(shared_ptr<VerifyFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyFileResponse(doRPCRequest(make_shared<string>("VerifyFile"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyFileResponse Alibabacloud_Qualitycheck20190115::Client::verifyFile(shared_ptr<VerifyFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyFileWithOptions(request, runtime);
}

VerifySentenceResponse Alibabacloud_Qualitycheck20190115::Client::verifySentenceWithOptions(shared_ptr<VerifySentenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifySentenceResponse(doRPCRequest(make_shared<string>("VerifySentence"), make_shared<string>("2019-01-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifySentenceResponse Alibabacloud_Qualitycheck20190115::Client::verifySentence(shared_ptr<VerifySentenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifySentenceWithOptions(request, runtime);
}

