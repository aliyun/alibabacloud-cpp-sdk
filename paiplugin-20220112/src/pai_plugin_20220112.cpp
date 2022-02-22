// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_plugin_20220112.hpp>
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

using namespace Alibabacloud_PaiPlugin20220112;

Alibabacloud_PaiPlugin20220112::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("paiplugin"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PaiPlugin20220112::Client::getEndpoint(shared_ptr<string> productId,
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

CreateGroupResponse Alibabacloud_PaiPlugin20220112::Client::createGroup(shared_ptr<CreateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGroupWithOptions(request, headers, runtime);
}

CreateGroupResponse Alibabacloud_PaiPlugin20220112::Client::createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    body->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->column)) {
    body->insert(pair<string, string>("Column", *request->column));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    body->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inferenceJob)) {
    body->insert(pair<string, string>("InferenceJob", *request->inferenceJob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    body->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->source)) {
    body->insert(pair<string, long>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("Table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/groups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupResponse(callApi(params, req, runtime));
}

CreateInferenceJobResponse Alibabacloud_PaiPlugin20220112::Client::createInferenceJob(shared_ptr<CreateInferenceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInferenceJobWithOptions(request, headers, runtime);
}

CreateInferenceJobResponse Alibabacloud_PaiPlugin20220112::Client::createInferenceJobWithOptions(shared_ptr<CreateInferenceJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    body->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainingJobId)) {
    body->insert(pair<string, string>("TrainingJobId", *request->trainingJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConfig)) {
    body->insert(pair<string, string>("UserConfig", *request->userConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInferenceJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/inference/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInferenceJobResponse(callApi(params, req, runtime));
}

CreateScheduleResponse Alibabacloud_PaiPlugin20220112::Client::createSchedule(shared_ptr<CreateScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createScheduleWithOptions(request, headers, runtime);
}

CreateScheduleResponse Alibabacloud_PaiPlugin20220112::Client::createScheduleWithOptions(shared_ptr<CreateScheduleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeTime)) {
    body->insert(pair<string, string>("ExecuteTime", *request->executeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatCycle)) {
    body->insert(pair<string, long>("RepeatCycle", *request->repeatCycle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatCycleUnit)) {
    body->insert(pair<string, long>("RepeatCycleUnit", *request->repeatCycleUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatTimes)) {
    body->insert(pair<string, long>("RepeatTimes", *request->repeatTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureId)) {
    body->insert(pair<string, string>("SignatureId", *request->signatureId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSchedule"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/schedules"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScheduleResponse(callApi(params, req, runtime));
}

CreateSignatureResponse Alibabacloud_PaiPlugin20220112::Client::createSignature(shared_ptr<CreateSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSignatureWithOptions(request, headers, runtime);
}

CreateSignatureResponse Alibabacloud_PaiPlugin20220112::Client::createSignatureWithOptions(shared_ptr<CreateSignatureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSignature"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/signatures"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSignatureResponse(callApi(params, req, runtime));
}

CreateTemplateResponse Alibabacloud_PaiPlugin20220112::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTemplateWithOptions(request, headers, runtime);
}

CreateTemplateResponse Alibabacloud_PaiPlugin20220112::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureId)) {
    body->insert(pair<string, string>("SignatureId", *request->signatureId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplate"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/templates"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateResponse(callApi(params, req, runtime));
}

CreateTrainingJobResponse Alibabacloud_PaiPlugin20220112::Client::createTrainingJob(shared_ptr<CreateTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTrainingJobWithOptions(request, headers, runtime);
}

CreateTrainingJobResponse Alibabacloud_PaiPlugin20220112::Client::createTrainingJobWithOptions(shared_ptr<CreateTrainingJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    body->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConfig)) {
    body->insert(pair<string, string>("UserConfig", *request->userConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrainingJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/training/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrainingJobResponse(callApi(params, req, runtime));
}

DeleteGroupResponse Alibabacloud_PaiPlugin20220112::Client::deleteGroup(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGroupWithOptions(Id, headers, runtime);
}

DeleteGroupResponse Alibabacloud_PaiPlugin20220112::Client::deleteGroupWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/groups/") + string(*Id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupResponse(callApi(params, req, runtime));
}

DeleteInferenceJobResponse Alibabacloud_PaiPlugin20220112::Client::deleteInferenceJob(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInferenceJobWithOptions(Id, headers, runtime);
}

DeleteInferenceJobResponse Alibabacloud_PaiPlugin20220112::Client::deleteInferenceJobWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInferenceJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/inference/jobs/") + string(*Id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInferenceJobResponse(callApi(params, req, runtime));
}

DeleteScheduleResponse Alibabacloud_PaiPlugin20220112::Client::deleteSchedule(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteScheduleWithOptions(Id, headers, runtime);
}

DeleteScheduleResponse Alibabacloud_PaiPlugin20220112::Client::deleteScheduleWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSchedule"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/schedules/") + string(*Id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScheduleResponse(callApi(params, req, runtime));
}

DeleteSignatureResponse Alibabacloud_PaiPlugin20220112::Client::deleteSignature(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSignatureWithOptions(Id, headers, runtime);
}

DeleteSignatureResponse Alibabacloud_PaiPlugin20220112::Client::deleteSignatureWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSignature"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/signatures/") + string(*Id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSignatureResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_PaiPlugin20220112::Client::deleteTemplate(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTemplateWithOptions(Id, headers, runtime);
}

DeleteTemplateResponse Alibabacloud_PaiPlugin20220112::Client::deleteTemplateWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/templates/") + string(*Id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTrainingJobResponse Alibabacloud_PaiPlugin20220112::Client::deleteTrainingJob(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTrainingJobWithOptions(Id, headers, runtime);
}

DeleteTrainingJobResponse Alibabacloud_PaiPlugin20220112::Client::deleteTrainingJobWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrainingJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/training/jobs/") + string(*Id))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrainingJobResponse(callApi(params, req, runtime));
}

GetGroupResponse Alibabacloud_PaiPlugin20220112::Client::getGroup(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGroupWithOptions(Id, headers, runtime);
}

GetGroupResponse Alibabacloud_PaiPlugin20220112::Client::getGroupWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/groups/") + string(*Id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGroupResponse(callApi(params, req, runtime));
}

GetInferenceJobResponse Alibabacloud_PaiPlugin20220112::Client::getInferenceJob(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInferenceJobWithOptions(Id, headers, runtime);
}

GetInferenceJobResponse Alibabacloud_PaiPlugin20220112::Client::getInferenceJobWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInferenceJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/inference/jobs/") + string(*Id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInferenceJobResponse(callApi(params, req, runtime));
}

GetScheduleResponse Alibabacloud_PaiPlugin20220112::Client::getSchedule(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getScheduleWithOptions(Id, headers, runtime);
}

GetScheduleResponse Alibabacloud_PaiPlugin20220112::Client::getScheduleWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSchedule"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/schedules/") + string(*Id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScheduleResponse(callApi(params, req, runtime));
}

GetSignatureResponse Alibabacloud_PaiPlugin20220112::Client::getSignature(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSignatureWithOptions(Id, headers, runtime);
}

GetSignatureResponse Alibabacloud_PaiPlugin20220112::Client::getSignatureWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSignature"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/signatures/") + string(*Id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSignatureResponse(callApi(params, req, runtime));
}

GetTemplateResponse Alibabacloud_PaiPlugin20220112::Client::getTemplate(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTemplateWithOptions(Id, headers, runtime);
}

GetTemplateResponse Alibabacloud_PaiPlugin20220112::Client::getTemplateWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/templates/") + string(*Id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateResponse(callApi(params, req, runtime));
}

GetTrainingJobResponse Alibabacloud_PaiPlugin20220112::Client::getTrainingJob(shared_ptr<string> Id) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTrainingJobWithOptions(Id, headers, runtime);
}

GetTrainingJobResponse Alibabacloud_PaiPlugin20220112::Client::getTrainingJobWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Id = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Id));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrainingJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/training/jobs/") + string(*Id))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTrainingJobResponse(callApi(params, req, runtime));
}

ListGroupsResponse Alibabacloud_PaiPlugin20220112::Client::listGroups(shared_ptr<ListGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGroupsWithOptions(request, headers, runtime);
}

ListGroupsResponse Alibabacloud_PaiPlugin20220112::Client::listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->source)) {
    query->insert(pair<string, long>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroups"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/groups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupsResponse(callApi(params, req, runtime));
}

ListInferenceJobsResponse Alibabacloud_PaiPlugin20220112::Client::listInferenceJobs(shared_ptr<ListInferenceJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInferenceJobsWithOptions(request, headers, runtime);
}

ListInferenceJobsResponse Alibabacloud_PaiPlugin20220112::Client::listInferenceJobsWithOptions(shared_ptr<ListInferenceJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInferenceJobs"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/inference/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInferenceJobsResponse(callApi(params, req, runtime));
}

ListMessageMetricsResponse Alibabacloud_PaiPlugin20220112::Client::listMessageMetrics(shared_ptr<ListMessageMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMessageMetricsWithOptions(request, headers, runtime);
}

ListMessageMetricsResponse Alibabacloud_PaiPlugin20220112::Client::listMessageMetricsWithOptions(shared_ptr<ListMessageMetricsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMessageMetrics"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/messages/metrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMessageMetricsResponse(callApi(params, req, runtime));
}

ListMessagesResponse Alibabacloud_PaiPlugin20220112::Client::listMessages(shared_ptr<ListMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMessagesWithOptions(request, headers, runtime);
}

ListMessagesResponse Alibabacloud_PaiPlugin20220112::Client::listMessagesWithOptions(shared_ptr<ListMessagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datetime)) {
    body->insert(pair<string, string>("Datetime", *request->datetime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageId)) {
    body->insert(pair<string, string>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleId)) {
    body->insert(pair<string, string>("ScheduleId", *request->scheduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    body->insert(pair<string, string>("Signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMessages"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/messages"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMessagesResponse(callApi(params, req, runtime));
}

ListSchedulesResponse Alibabacloud_PaiPlugin20220112::Client::listSchedules(shared_ptr<ListSchedulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSchedulesWithOptions(request, headers, runtime);
}

ListSchedulesResponse Alibabacloud_PaiPlugin20220112::Client::listSchedulesWithOptions(shared_ptr<ListSchedulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSchedules"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/schedules"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSchedulesResponse(callApi(params, req, runtime));
}

ListSignaturesResponse Alibabacloud_PaiPlugin20220112::Client::listSignatures(shared_ptr<ListSignaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSignaturesWithOptions(request, headers, runtime);
}

ListSignaturesResponse Alibabacloud_PaiPlugin20220112::Client::listSignaturesWithOptions(shared_ptr<ListSignaturesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSignatures"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/signatures"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSignaturesResponse(callApi(params, req, runtime));
}

ListTemplatesResponse Alibabacloud_PaiPlugin20220112::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTemplatesWithOptions(request, headers, runtime);
}

ListTemplatesResponse Alibabacloud_PaiPlugin20220112::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplates"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/templates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplatesResponse(callApi(params, req, runtime));
}

ListTrainingJobsResponse Alibabacloud_PaiPlugin20220112::Client::listTrainingJobs(shared_ptr<ListTrainingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrainingJobsWithOptions(request, headers, runtime);
}

ListTrainingJobsResponse Alibabacloud_PaiPlugin20220112::Client::listTrainingJobsWithOptions(shared_ptr<ListTrainingJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrainingJobs"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/training/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrainingJobsResponse(callApi(params, req, runtime));
}

SendMessageResponse Alibabacloud_PaiPlugin20220112::Client::sendMessage(shared_ptr<SendMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendMessageWithOptions(request, headers, runtime);
}

SendMessageResponse Alibabacloud_PaiPlugin20220112::Client::sendMessageWithOptions(shared_ptr<SendMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->outIds)) {
    body->insert(pair<string, vector<string>>("OutIds", *request->outIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->phoneNumbers)) {
    body->insert(pair<string, vector<string>>("PhoneNumbers", *request->phoneNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleId)) {
    body->insert(pair<string, string>("ScheduleId", *request->scheduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    body->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureId)) {
    body->insert(pair<string, string>("SignatureId", *request->signatureId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->smsUpExtendCodes)) {
    body->insert(pair<string, vector<string>>("SmsUpExtendCodes", *request->smsUpExtendCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->templateParams)) {
    body->insert(pair<string, vector<string>>("TemplateParams", *request->templateParams));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessage"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/messages"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendMessageResponse(callApi(params, req, runtime));
}

