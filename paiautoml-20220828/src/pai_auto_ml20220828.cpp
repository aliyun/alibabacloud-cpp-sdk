// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_auto_ml20220828.hpp>
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

using namespace Alibabacloud_PaiAutoML20220828;

Alibabacloud_PaiAutoML20220828::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("paiautoml"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PaiAutoML20220828::Client::getEndpoint(shared_ptr<string> productId,
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

CreateHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::createHpoExperimentWithOptions(shared_ptr<CreateHpoExperimentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<HpoExperimentConfig>(request->hpoExperimentConfiguration)) {
    body->insert(pair<string, HpoExperimentConfig>("HpoExperimentConfiguration", *request->hpoExperimentConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHpoExperiment"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateHpoExperimentResponse(callApi(params, req, runtime));
}

CreateHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::createHpoExperiment(shared_ptr<CreateHpoExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createHpoExperimentWithOptions(request, headers, runtime);
}

DeleteHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::deleteHpoExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHpoExperiment"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/delete"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHpoExperimentResponse(callApi(params, req, runtime));
}

DeleteHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::deleteHpoExperiment(shared_ptr<string> ExperimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHpoExperimentWithOptions(ExperimentId, headers, runtime);
}

GetHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::getHpoExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHpoExperiment"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHpoExperimentResponse(callApi(params, req, runtime));
}

GetHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::getHpoExperiment(shared_ptr<string> ExperimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHpoExperimentWithOptions(ExperimentId, headers, runtime);
}

GetHpoTrialResponse Alibabacloud_PaiAutoML20220828::Client::getHpoTrialWithOptions(shared_ptr<string> ExperimentId,
                                                                                   shared_ptr<string> TrialId,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHpoTrial"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/trial/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrialId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHpoTrialResponse(callApi(params, req, runtime));
}

GetHpoTrialResponse Alibabacloud_PaiAutoML20220828::Client::getHpoTrial(shared_ptr<string> ExperimentId, shared_ptr<string> TrialId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHpoTrialWithOptions(ExperimentId, TrialId, headers, runtime);
}

ListHpoExperimentLogsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoExperimentLogsWithOptions(shared_ptr<string> ExperimentId,
                                                                                                       shared_ptr<ListHpoExperimentLogsRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logName)) {
    query->insert(pair<string, string>("LogName", *request->logName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHpoExperimentLogs"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHpoExperimentLogsResponse(callApi(params, req, runtime));
}

ListHpoExperimentLogsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoExperimentLogs(shared_ptr<string> ExperimentId, shared_ptr<ListHpoExperimentLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHpoExperimentLogsWithOptions(ExperimentId, request, headers, runtime);
}

ListHpoExperimentsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoExperimentsWithOptions(shared_ptr<ListHpoExperimentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    query->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeConfigData)) {
    query->insert(pair<string, string>("IncludeConfigData", *request->includeConfigData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxCreateTime)) {
    query->insert(pair<string, string>("MaxCreateTime", *request->maxCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minCreateTime)) {
    query->insert(pair<string, string>("MinCreateTime", *request->minCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHpoExperiments"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHpoExperimentsResponse(callApi(params, req, runtime));
}

ListHpoExperimentsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoExperiments(shared_ptr<ListHpoExperimentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHpoExperimentsWithOptions(request, headers, runtime);
}

ListHpoTrialCommandsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoTrialCommandsWithOptions(shared_ptr<string> ExperimentId,
                                                                                                     shared_ptr<string> TrialId,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHpoTrialCommands"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/trial/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrialId)) + string("/commands"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHpoTrialCommandsResponse(callApi(params, req, runtime));
}

ListHpoTrialCommandsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoTrialCommands(shared_ptr<string> ExperimentId, shared_ptr<string> TrialId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHpoTrialCommandsWithOptions(ExperimentId, TrialId, headers, runtime);
}

ListHpoTrialLogNamesResponse Alibabacloud_PaiAutoML20220828::Client::listHpoTrialLogNamesWithOptions(shared_ptr<string> ExperimentId,
                                                                                                     shared_ptr<string> TrialId,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHpoTrialLogNames"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/trial/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrialId)) + string("/lognames"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHpoTrialLogNamesResponse(callApi(params, req, runtime));
}

ListHpoTrialLogNamesResponse Alibabacloud_PaiAutoML20220828::Client::listHpoTrialLogNames(shared_ptr<string> ExperimentId, shared_ptr<string> TrialId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHpoTrialLogNamesWithOptions(ExperimentId, TrialId, headers, runtime);
}

ListHpoTrialLogsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoTrialLogsWithOptions(shared_ptr<string> ExperimentId,
                                                                                             shared_ptr<string> TrialId,
                                                                                             shared_ptr<ListHpoTrialLogsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logName)) {
    query->insert(pair<string, string>("LogName", *request->logName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHpoTrialLogs"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/trial/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrialId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHpoTrialLogsResponse(callApi(params, req, runtime));
}

ListHpoTrialLogsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoTrialLogs(shared_ptr<string> ExperimentId, shared_ptr<string> TrialId, shared_ptr<ListHpoTrialLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHpoTrialLogsWithOptions(ExperimentId, TrialId, request, headers, runtime);
}

ListHpoTrialsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoTrialsWithOptions(shared_ptr<string> ExperimentId,
                                                                                       shared_ptr<ListHpoTrialsRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHpoTrials"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/trials"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHpoTrialsResponse(callApi(params, req, runtime));
}

ListHpoTrialsResponse Alibabacloud_PaiAutoML20220828::Client::listHpoTrials(shared_ptr<string> ExperimentId, shared_ptr<ListHpoTrialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHpoTrialsWithOptions(ExperimentId, request, headers, runtime);
}

RestartHpoTrialsResponse Alibabacloud_PaiAutoML20220828::Client::restartHpoTrialsWithOptions(shared_ptr<string> ExperimentId,
                                                                                             shared_ptr<RestartHpoTrialsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->trialHyperParameters)) {
    body->insert(pair<string, string>("TrialHyperParameters", *request->trialHyperParameters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->trialIds)) {
    body->insert(pair<string, vector<string>>("TrialIds", *request->trialIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartHpoTrials"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/restart_trials"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartHpoTrialsResponse(callApi(params, req, runtime));
}

RestartHpoTrialsResponse Alibabacloud_PaiAutoML20220828::Client::restartHpoTrials(shared_ptr<string> ExperimentId, shared_ptr<RestartHpoTrialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartHpoTrialsWithOptions(ExperimentId, request, headers, runtime);
}

StopHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::stopHpoExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopHpoExperiment"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopHpoExperimentResponse(callApi(params, req, runtime));
}

StopHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::stopHpoExperiment(shared_ptr<string> ExperimentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopHpoExperimentWithOptions(ExperimentId, headers, runtime);
}

StopHpoTrialsResponse Alibabacloud_PaiAutoML20220828::Client::stopHpoTrialsWithOptions(shared_ptr<string> ExperimentId,
                                                                                       shared_ptr<StopHpoTrialsRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->trialIds)) {
    body->insert(pair<string, vector<string>>("TrialIds", *request->trialIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopHpoTrials"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/stop_trials"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopHpoTrialsResponse(callApi(params, req, runtime));
}

StopHpoTrialsResponse Alibabacloud_PaiAutoML20220828::Client::stopHpoTrials(shared_ptr<string> ExperimentId, shared_ptr<StopHpoTrialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopHpoTrialsWithOptions(ExperimentId, request, headers, runtime);
}

UpdateHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::updateHpoExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                                                                   shared_ptr<UpdateHpoExperimentRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<HpoExperimentConfig>(request->hpoExperimentConfiguration)) {
    body->insert(pair<string, HpoExperimentConfig>("HpoExperimentConfiguration", *request->hpoExperimentConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHpoExperiment"))},
    {"version", boost::any(string("2022-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/automl/v1/hpo/experiment/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/update"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHpoExperimentResponse(callApi(params, req, runtime));
}

UpdateHpoExperimentResponse Alibabacloud_PaiAutoML20220828::Client::updateHpoExperiment(shared_ptr<string> ExperimentId, shared_ptr<UpdateHpoExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHpoExperimentWithOptions(ExperimentId, request, headers, runtime);
}

