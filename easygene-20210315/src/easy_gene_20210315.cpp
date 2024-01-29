// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/easy_gene_20210315.hpp>
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

using namespace Alibabacloud_EasyGene20210315;

Alibabacloud_EasyGene20210315::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("easygene"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EasyGene20210315::Client::getEndpoint(shared_ptr<string> productId,
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

AbortRunResponse Alibabacloud_EasyGene20210315::Client::abortRunWithOptions(shared_ptr<AbortRunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->runId)) {
    query->insert(pair<string, string>("RunId", *request->runId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbortRun"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbortRunResponse(callApi(params, req, runtime));
}

AbortRunResponse Alibabacloud_EasyGene20210315::Client::abortRun(shared_ptr<AbortRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abortRunWithOptions(request, runtime);
}

AbortSubmissionResponse Alibabacloud_EasyGene20210315::Client::abortSubmissionWithOptions(shared_ptr<AbortSubmissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->submissionId)) {
    query->insert(pair<string, string>("SubmissionId", *request->submissionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbortSubmission"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbortSubmissionResponse(callApi(params, req, runtime));
}

AbortSubmissionResponse Alibabacloud_EasyGene20210315::Client::abortSubmission(shared_ptr<AbortSubmissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abortSubmissionWithOptions(request, runtime);
}

CopyPublicEntityResponse Alibabacloud_EasyGene20210315::Client::copyPublicEntityWithOptions(shared_ptr<CopyPublicEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataset)) {
    query->insert(pair<string, string>("Dataset", *request->dataset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyPublicEntity"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyPublicEntityResponse(callApi(params, req, runtime));
}

CopyPublicEntityResponse Alibabacloud_EasyGene20210315::Client::copyPublicEntity(shared_ptr<CopyPublicEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyPublicEntityWithOptions(request, runtime);
}

CreateAppResponse Alibabacloud_EasyGene20210315::Client::createAppWithOptions(shared_ptr<CreateAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppShrinkRequest> request = make_shared<CreateAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestConfigs>>(tmpReq->configs)) {
    request->configsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->configs, make_shared<string>("Configs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestDependencies>>(tmpReq->dependencies)) {
    request->dependenciesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dependencies, make_shared<string>("Dependencies"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageVersion)) {
    query->insert(pair<string, string>("LanguageVersion", *request->languageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revisionComment)) {
    query->insert(pair<string, string>("RevisionComment", *request->revisionComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revisionTag)) {
    query->insert(pair<string, string>("RevisionTag", *request->revisionTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configsShrink)) {
    body->insert(pair<string, string>("Configs", *request->configsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    body->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dependenciesShrink)) {
    body->insert(pair<string, string>("Dependencies", *request->dependenciesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentation)) {
    body->insert(pair<string, string>("Documentation", *request->documentation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApp"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppResponse(callApi(params, req, runtime));
}

CreateAppResponse Alibabacloud_EasyGene20210315::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppWithOptions(request, runtime);
}

CreateEntityResponse Alibabacloud_EasyGene20210315::Client::createEntityWithOptions(shared_ptr<CreateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEntityShrinkRequest> request = make_shared<CreateEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateEntityRequestEntityItems>>(tmpReq->entityItems)) {
    request->entityItemsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityItems, make_shared<string>("EntityItems"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityItemsShrink)) {
    body->insert(pair<string, string>("EntityItems", *request->entityItemsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEntity"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEntityResponse(callApi(params, req, runtime));
}

CreateEntityResponse Alibabacloud_EasyGene20210315::Client::createEntity(shared_ptr<CreateEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEntityWithOptions(request, runtime);
}

CreateRunResponse Alibabacloud_EasyGene20210315::Client::createRunWithOptions(shared_ptr<CreateRunRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRunShrinkRequest> request = make_shared<CreateRunShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateRunRequestExecuteOptions>(tmpReq->executeOptions)) {
    request->executeOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executeOptions, make_shared<string>("ExecuteOptions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appRevision)) {
    query->insert(pair<string, string>("AppRevision", *request->appRevision));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRuntime)) {
    query->insert(pair<string, string>("DefaultRuntime", *request->defaultRuntime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeDirectory)) {
    query->insert(pair<string, string>("ExecuteDirectory", *request->executeDirectory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeOptionsShrink)) {
    query->insert(pair<string, string>("ExecuteOptions", *request->executeOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputs)) {
    query->insert(pair<string, string>("Inputs", *request->inputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFolder)) {
    query->insert(pair<string, string>("OutputFolder", *request->outputFolder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revisionTag)) {
    query->insert(pair<string, string>("RevisionTag", *request->revisionTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runName)) {
    query->insert(pair<string, string>("RunName", *request->runName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRun"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRunResponse(callApi(params, req, runtime));
}

CreateRunResponse Alibabacloud_EasyGene20210315::Client::createRun(shared_ptr<CreateRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRunWithOptions(request, runtime);
}

CreateSubmissionResponse Alibabacloud_EasyGene20210315::Client::createSubmissionWithOptions(shared_ptr<CreateSubmissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSubmissionShrinkRequest> request = make_shared<CreateSubmissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->entityNames)) {
    request->entityNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityNames, make_shared<string>("EntityNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRuntime)) {
    query->insert(pair<string, string>("DefaultRuntime", *request->defaultRuntime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityNamesShrink)) {
    query->insert(pair<string, string>("EntityNames", *request->entityNamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeDirectory)) {
    query->insert(pair<string, string>("ExecuteDirectory", *request->executeDirectory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executeOptions)) {
    query->insert(pair<string, string>("ExecuteOptions", *request->executeOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputs)) {
    query->insert(pair<string, string>("Inputs", *request->inputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFolder)) {
    query->insert(pair<string, string>("OutputFolder", *request->outputFolder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    query->insert(pair<string, string>("Outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revision)) {
    query->insert(pair<string, string>("Revision", *request->revision));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revisionTag)) {
    query->insert(pair<string, string>("RevisionTag", *request->revisionTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubmission"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubmissionResponse(callApi(params, req, runtime));
}

CreateSubmissionResponse Alibabacloud_EasyGene20210315::Client::createSubmission(shared_ptr<CreateSubmissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubmissionWithOptions(request, runtime);
}

CreateTemplateResponse Alibabacloud_EasyGene20210315::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTemplateShrinkRequest> request = make_shared<CreateTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateTemplateRequestInputsExpression>>(tmpReq->inputsExpression)) {
    request->inputsExpressionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputsExpression, make_shared<string>("InputsExpression"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTemplateRequestOutputsExpression>>(tmpReq->outputsExpression)) {
    request->outputsExpressionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputsExpression, make_shared<string>("OutputsExpression"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appRevision)) {
    query->insert(pair<string, string>("AppRevision", *request->appRevision));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revisionTag)) {
    query->insert(pair<string, string>("RevisionTag", *request->revisionTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootEntity)) {
    query->insert(pair<string, string>("RootEntity", *request->rootEntity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputsExpressionShrink)) {
    body->insert(pair<string, string>("InputsExpression", *request->inputsExpressionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputsExpressionShrink)) {
    body->insert(pair<string, string>("OutputsExpression", *request->outputsExpressionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplate"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateResponse(callApi(params, req, runtime));
}

CreateTemplateResponse Alibabacloud_EasyGene20210315::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTemplateWithOptions(request, runtime);
}

CreateWorkspaceResponse Alibabacloud_EasyGene20210315::Client::createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobLifecycle)) {
    query->insert(pair<string, long>("JobLifecycle", *request->jobLifecycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storage)) {
    query->insert(pair<string, string>("Storage", *request->storage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspace"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceResponse(callApi(params, req, runtime));
}

CreateWorkspaceResponse Alibabacloud_EasyGene20210315::Client::createWorkspace(shared_ptr<CreateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWorkspaceWithOptions(request, runtime);
}

DeleteAppResponse Alibabacloud_EasyGene20210315::Client::deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revision)) {
    query->insert(pair<string, string>("Revision", *request->revision));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApp"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppResponse(callApi(params, req, runtime));
}

DeleteAppResponse Alibabacloud_EasyGene20210315::Client::deleteApp(shared_ptr<DeleteAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppWithOptions(request, runtime);
}

DeleteEntityItemsResponse Alibabacloud_EasyGene20210315::Client::deleteEntityItemsWithOptions(shared_ptr<DeleteEntityItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteEntityItemsShrinkRequest> request = make_shared<DeleteEntityItemsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->entityNames)) {
    request->entityNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityNames, make_shared<string>("EntityNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityNamesShrink)) {
    query->insert(pair<string, string>("EntityNames", *request->entityNamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEntityItems"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEntityItemsResponse(callApi(params, req, runtime));
}

DeleteEntityItemsResponse Alibabacloud_EasyGene20210315::Client::deleteEntityItems(shared_ptr<DeleteEntityItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEntityItemsWithOptions(request, runtime);
}

DeleteRunResponse Alibabacloud_EasyGene20210315::Client::deleteRunWithOptions(shared_ptr<DeleteRunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->runId)) {
    query->insert(pair<string, string>("RunId", *request->runId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRun"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRunResponse(callApi(params, req, runtime));
}

DeleteRunResponse Alibabacloud_EasyGene20210315::Client::deleteRun(shared_ptr<DeleteRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRunWithOptions(request, runtime);
}

DeleteSubmissionResponse Alibabacloud_EasyGene20210315::Client::deleteSubmissionWithOptions(shared_ptr<DeleteSubmissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->submissionId)) {
    query->insert(pair<string, string>("SubmissionId", *request->submissionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubmission"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubmissionResponse(callApi(params, req, runtime));
}

DeleteSubmissionResponse Alibabacloud_EasyGene20210315::Client::deleteSubmission(shared_ptr<DeleteSubmissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubmissionWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_EasyGene20210315::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_EasyGene20210315::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

DeleteWorkspaceResponse Alibabacloud_EasyGene20210315::Client::deleteWorkspaceWithOptions(shared_ptr<DeleteWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkspace"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkspaceResponse(callApi(params, req, runtime));
}

DeleteWorkspaceResponse Alibabacloud_EasyGene20210315::Client::deleteWorkspace(shared_ptr<DeleteWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWorkspaceWithOptions(request, runtime);
}

DownloadEntityResponse Alibabacloud_EasyGene20210315::Client::downloadEntityWithOptions(shared_ptr<DownloadEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DownloadEntityShrinkRequest> request = make_shared<DownloadEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->entityNames)) {
    request->entityNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityNames, make_shared<string>("EntityNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityNamesShrink)) {
    query->insert(pair<string, string>("EntityNames", *request->entityNamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadEntity"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadEntityResponse(callApi(params, req, runtime));
}

DownloadEntityResponse Alibabacloud_EasyGene20210315::Client::downloadEntity(shared_ptr<DownloadEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadEntityWithOptions(request, runtime);
}

GetAppResponse Alibabacloud_EasyGene20210315::Client::getAppWithOptions(shared_ptr<GetAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revision)) {
    query->insert(pair<string, string>("Revision", *request->revision));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revisionTag)) {
    query->insert(pair<string, string>("RevisionTag", *request->revisionTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApp"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppResponse(callApi(params, req, runtime));
}

GetAppResponse Alibabacloud_EasyGene20210315::Client::getApp(shared_ptr<GetAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppWithOptions(request, runtime);
}

GetEntityResponse Alibabacloud_EasyGene20210315::Client::getEntityWithOptions(shared_ptr<GetEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEntity"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEntityResponse(callApi(params, req, runtime));
}

GetEntityResponse Alibabacloud_EasyGene20210315::Client::getEntity(shared_ptr<GetEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEntityWithOptions(request, runtime);
}

GetGlobalAppResponse Alibabacloud_EasyGene20210315::Client::getGlobalAppWithOptions(shared_ptr<GetGlobalAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetGlobalAppShrinkRequest> request = make_shared<GetGlobalAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->attributes)) {
    request->attributesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attributes, make_shared<string>("Attributes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGlobalApp"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGlobalAppResponse(callApi(params, req, runtime));
}

GetGlobalAppResponse Alibabacloud_EasyGene20210315::Client::getGlobalApp(shared_ptr<GetGlobalAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGlobalAppWithOptions(request, runtime);
}

GetPublicDatasetResponse Alibabacloud_EasyGene20210315::Client::getPublicDatasetWithOptions(shared_ptr<GetPublicDatasetRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetPublicDatasetShrinkRequest> request = make_shared<GetPublicDatasetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->attributes)) {
    request->attributesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attributes, make_shared<string>("Attributes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPublicDataset"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPublicDatasetResponse(callApi(params, req, runtime));
}

GetPublicDatasetResponse Alibabacloud_EasyGene20210315::Client::getPublicDataset(shared_ptr<GetPublicDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPublicDatasetWithOptions(request, runtime);
}

GetPublicDatasetEntityResponse Alibabacloud_EasyGene20210315::Client::getPublicDatasetEntityWithOptions(shared_ptr<GetPublicDatasetEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPublicDatasetEntity"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPublicDatasetEntityResponse(callApi(params, req, runtime));
}

GetPublicDatasetEntityResponse Alibabacloud_EasyGene20210315::Client::getPublicDatasetEntity(shared_ptr<GetPublicDatasetEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPublicDatasetEntityWithOptions(request, runtime);
}

GetRunResponse Alibabacloud_EasyGene20210315::Client::getRunWithOptions(shared_ptr<GetRunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRun"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRunResponse(callApi(params, req, runtime));
}

GetRunResponse Alibabacloud_EasyGene20210315::Client::getRun(shared_ptr<GetRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRunWithOptions(request, runtime);
}

GetSubmissionResponse Alibabacloud_EasyGene20210315::Client::getSubmissionWithOptions(shared_ptr<GetSubmissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubmission"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubmissionResponse(callApi(params, req, runtime));
}

GetSubmissionResponse Alibabacloud_EasyGene20210315::Client::getSubmission(shared_ptr<GetSubmissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubmissionWithOptions(request, runtime);
}

GetTemplateResponse Alibabacloud_EasyGene20210315::Client::getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateResponse(callApi(params, req, runtime));
}

GetTemplateResponse Alibabacloud_EasyGene20210315::Client::getTemplate(shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateWithOptions(request, runtime);
}

GetWorkspaceResponse Alibabacloud_EasyGene20210315::Client::getWorkspaceWithOptions(shared_ptr<GetWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkspace"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkspaceResponse(callApi(params, req, runtime));
}

GetWorkspaceResponse Alibabacloud_EasyGene20210315::Client::getWorkspace(shared_ptr<GetWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkspaceWithOptions(request, runtime);
}

ImportAppResponse Alibabacloud_EasyGene20210315::Client::importAppWithOptions(shared_ptr<ImportAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportApp"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportAppResponse(callApi(params, req, runtime));
}

ImportAppResponse Alibabacloud_EasyGene20210315::Client::importApp(shared_ptr<ImportAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importAppWithOptions(request, runtime);
}

InstallGlobalAppResponse Alibabacloud_EasyGene20210315::Client::installGlobalAppWithOptions(shared_ptr<InstallGlobalAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->installedAppName)) {
    query->insert(pair<string, string>("InstalledAppName", *request->installedAppName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallGlobalApp"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallGlobalAppResponse(callApi(params, req, runtime));
}

InstallGlobalAppResponse Alibabacloud_EasyGene20210315::Client::installGlobalApp(shared_ptr<InstallGlobalAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installGlobalAppWithOptions(request, runtime);
}

ListAppsResponse Alibabacloud_EasyGene20210315::Client::listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isReversed)) {
    query->insert(pair<string, bool>("IsReversed", *request->isReversed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelSelector)) {
    query->insert(pair<string, string>("LabelSelector", *request->labelSelector));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApps"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppsResponse(callApi(params, req, runtime));
}

ListAppsResponse Alibabacloud_EasyGene20210315::Client::listApps(shared_ptr<ListAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppsWithOptions(request, runtime);
}

ListAuthorizedSoftwareResponse Alibabacloud_EasyGene20210315::Client::listAuthorizedSoftwareWithOptions(shared_ptr<ListAuthorizedSoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthorizedSoftware"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthorizedSoftwareResponse(callApi(params, req, runtime));
}

ListAuthorizedSoftwareResponse Alibabacloud_EasyGene20210315::Client::listAuthorizedSoftware(shared_ptr<ListAuthorizedSoftwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthorizedSoftwareWithOptions(request, runtime);
}

ListContainerImagesResponse Alibabacloud_EasyGene20210315::Client::listContainerImagesWithOptions(shared_ptr<ListContainerImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListContainerImages"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListContainerImagesResponse(callApi(params, req, runtime));
}

ListContainerImagesResponse Alibabacloud_EasyGene20210315::Client::listContainerImages(shared_ptr<ListContainerImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listContainerImagesWithOptions(request, runtime);
}

ListEntitiesResponse Alibabacloud_EasyGene20210315::Client::listEntitiesWithOptions(shared_ptr<ListEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEntities"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEntitiesResponse(callApi(params, req, runtime));
}

ListEntitiesResponse Alibabacloud_EasyGene20210315::Client::listEntities(shared_ptr<ListEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEntitiesWithOptions(request, runtime);
}

ListEntityItemsResponse Alibabacloud_EasyGene20210315::Client::listEntityItemsWithOptions(shared_ptr<ListEntityItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isReversed)) {
    query->insert(pair<string, bool>("IsReversed", *request->isReversed));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEntityItems"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEntityItemsResponse(callApi(params, req, runtime));
}

ListEntityItemsResponse Alibabacloud_EasyGene20210315::Client::listEntityItems(shared_ptr<ListEntityItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEntityItemsWithOptions(request, runtime);
}

ListGlobalAppsResponse Alibabacloud_EasyGene20210315::Client::listGlobalAppsWithOptions(shared_ptr<ListGlobalAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGlobalApps"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGlobalAppsResponse(callApi(params, req, runtime));
}

ListGlobalAppsResponse Alibabacloud_EasyGene20210315::Client::listGlobalApps(shared_ptr<ListGlobalAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGlobalAppsWithOptions(request, runtime);
}

ListPublicDatasetResponse Alibabacloud_EasyGene20210315::Client::listPublicDatasetWithOptions(shared_ptr<ListPublicDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublicDataset"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublicDatasetResponse(callApi(params, req, runtime));
}

ListPublicDatasetResponse Alibabacloud_EasyGene20210315::Client::listPublicDataset(shared_ptr<ListPublicDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublicDatasetWithOptions(request, runtime);
}

ListPublicDatasetEntitiesResponse Alibabacloud_EasyGene20210315::Client::listPublicDatasetEntitiesWithOptions(shared_ptr<ListPublicDatasetEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublicDatasetEntities"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublicDatasetEntitiesResponse(callApi(params, req, runtime));
}

ListPublicDatasetEntitiesResponse Alibabacloud_EasyGene20210315::Client::listPublicDatasetEntities(shared_ptr<ListPublicDatasetEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublicDatasetEntitiesWithOptions(request, runtime);
}

ListPublicDatasetEntityItemsResponse Alibabacloud_EasyGene20210315::Client::listPublicDatasetEntityItemsWithOptions(shared_ptr<ListPublicDatasetEntityItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublicDatasetEntityItems"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublicDatasetEntityItemsResponse(callApi(params, req, runtime));
}

ListPublicDatasetEntityItemsResponse Alibabacloud_EasyGene20210315::Client::listPublicDatasetEntityItems(shared_ptr<ListPublicDatasetEntityItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublicDatasetEntityItemsWithOptions(request, runtime);
}

ListPublicDatasetTagsResponse Alibabacloud_EasyGene20210315::Client::listPublicDatasetTagsWithOptions(shared_ptr<ListPublicDatasetTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublicDatasetTags"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublicDatasetTagsResponse(callApi(params, req, runtime));
}

ListPublicDatasetTagsResponse Alibabacloud_EasyGene20210315::Client::listPublicDatasetTags(shared_ptr<ListPublicDatasetTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublicDatasetTagsWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_EasyGene20210315::Client::listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegionsResponse(callApi(params, req, runtime));
}

ListRegionsResponse Alibabacloud_EasyGene20210315::Client::listRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(runtime);
}

ListRunsResponse Alibabacloud_EasyGene20210315::Client::listRunsWithOptions(shared_ptr<ListRunsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRuns"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRunsResponse(callApi(params, req, runtime));
}

ListRunsResponse Alibabacloud_EasyGene20210315::Client::listRuns(shared_ptr<ListRunsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRunsWithOptions(request, runtime);
}

ListSubmissionsResponse Alibabacloud_EasyGene20210315::Client::listSubmissionsWithOptions(shared_ptr<ListSubmissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubmissions"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubmissionsResponse(callApi(params, req, runtime));
}

ListSubmissionsResponse Alibabacloud_EasyGene20210315::Client::listSubmissions(shared_ptr<ListSubmissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSubmissionsWithOptions(request, runtime);
}

ListTemplatesResponse Alibabacloud_EasyGene20210315::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isReversed)) {
    query->insert(pair<string, bool>("IsReversed", *request->isReversed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelSelector)) {
    query->insert(pair<string, string>("LabelSelector", *request->labelSelector));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplates"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplatesResponse(callApi(params, req, runtime));
}

ListTemplatesResponse Alibabacloud_EasyGene20210315::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesWithOptions(request, runtime);
}

ListUserActiveRunsResponse Alibabacloud_EasyGene20210315::Client::listUserActiveRunsWithOptions(shared_ptr<ListUserActiveRunsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserActiveRuns"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserActiveRunsResponse(callApi(params, req, runtime));
}

ListUserActiveRunsResponse Alibabacloud_EasyGene20210315::Client::listUserActiveRuns(shared_ptr<ListUserActiveRunsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserActiveRunsWithOptions(request, runtime);
}

ListWorkspacesResponse Alibabacloud_EasyGene20210315::Client::listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaces"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspacesResponse(callApi(params, req, runtime));
}

ListWorkspacesResponse Alibabacloud_EasyGene20210315::Client::listWorkspaces(shared_ptr<ListWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkspacesWithOptions(request, runtime);
}

ResumeSubmissionResponse Alibabacloud_EasyGene20210315::Client::resumeSubmissionWithOptions(shared_ptr<ResumeSubmissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->submissionId)) {
    query->insert(pair<string, string>("SubmissionId", *request->submissionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeSubmission"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeSubmissionResponse(callApi(params, req, runtime));
}

ResumeSubmissionResponse Alibabacloud_EasyGene20210315::Client::resumeSubmission(shared_ptr<ResumeSubmissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeSubmissionWithOptions(request, runtime);
}

TagAppResponse Alibabacloud_EasyGene20210315::Client::tagAppWithOptions(shared_ptr<TagAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appRevision)) {
    query->insert(pair<string, string>("AppRevision", *request->appRevision));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->revisionTag)) {
    query->insert(pair<string, string>("RevisionTag", *request->revisionTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagApp"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagAppResponse(callApi(params, req, runtime));
}

TagAppResponse Alibabacloud_EasyGene20210315::Client::tagApp(shared_ptr<TagAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagAppWithOptions(request, runtime);
}

UpdateEntityResponse Alibabacloud_EasyGene20210315::Client::updateEntityWithOptions(shared_ptr<UpdateEntityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEntityShrinkRequest> request = make_shared<UpdateEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEntityRequestEntityItems>>(tmpReq->entityItems)) {
    request->entityItemsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityItems, make_shared<string>("EntityItems"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityItemsShrink)) {
    body->insert(pair<string, string>("EntityItems", *request->entityItemsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEntity"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEntityResponse(callApi(params, req, runtime));
}

UpdateEntityResponse Alibabacloud_EasyGene20210315::Client::updateEntity(shared_ptr<UpdateEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEntityWithOptions(request, runtime);
}

UpdateEntityItemsResponse Alibabacloud_EasyGene20210315::Client::updateEntityItemsWithOptions(shared_ptr<UpdateEntityItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEntityItemsShrinkRequest> request = make_shared<UpdateEntityItemsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEntityItemsRequestEntityItems>>(tmpReq->entityItems)) {
    request->entityItemsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityItems, make_shared<string>("EntityItems"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityItemsShrink)) {
    body->insert(pair<string, string>("EntityItems", *request->entityItemsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEntityItems"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEntityItemsResponse(callApi(params, req, runtime));
}

UpdateEntityItemsResponse Alibabacloud_EasyGene20210315::Client::updateEntityItems(shared_ptr<UpdateEntityItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEntityItemsWithOptions(request, runtime);
}

UpdateTemplateResponse Alibabacloud_EasyGene20210315::Client::updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTemplateShrinkRequest> request = make_shared<UpdateTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTemplateRequestInputsExpression>>(tmpReq->inputsExpression)) {
    request->inputsExpressionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputsExpression, make_shared<string>("InputsExpression"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTemplateRequestOutputsExpression>>(tmpReq->outputsExpression)) {
    request->outputsExpressionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputsExpression, make_shared<string>("OutputsExpression"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootEntity)) {
    query->insert(pair<string, string>("RootEntity", *request->rootEntity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputsExpressionShrink)) {
    body->insert(pair<string, string>("InputsExpression", *request->inputsExpressionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputsExpressionShrink)) {
    body->insert(pair<string, string>("OutputsExpression", *request->outputsExpressionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
}

UpdateTemplateResponse Alibabacloud_EasyGene20210315::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

UpdateWorkspaceResponse Alibabacloud_EasyGene20210315::Client::updateWorkspaceWithOptions(shared_ptr<UpdateWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobLifecycle)) {
    query->insert(pair<string, long>("JobLifecycle", *request->jobLifecycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspace"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceResponse(callApi(params, req, runtime));
}

UpdateWorkspaceResponse Alibabacloud_EasyGene20210315::Client::updateWorkspace(shared_ptr<UpdateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWorkspaceWithOptions(request, runtime);
}

UploadEntityResponse Alibabacloud_EasyGene20210315::Client::uploadEntityWithOptions(shared_ptr<UploadEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityCSVFile)) {
    query->insert(pair<string, string>("EntityCSVFile", *request->entityCSVFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    query->insert(pair<string, string>("Workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadEntity"))},
    {"version", boost::any(string("2021-03-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadEntityResponse(callApi(params, req, runtime));
}

UploadEntityResponse Alibabacloud_EasyGene20210315::Client::uploadEntity(shared_ptr<UploadEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadEntityWithOptions(request, runtime);
}

