// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_plugin_20210325.hpp>
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

using namespace Alibabacloud_PaiPlugin20210325;

Alibabacloud_PaiPlugin20210325::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("paiplugin"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PaiPlugin20210325::Client::getEndpoint(shared_ptr<string> productId,
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

CreateSignatureResponse Alibabacloud_PaiPlugin20210325::Client::createSignature(shared_ptr<CreateSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSignatureWithOptions(request, headers, runtime);
}

CreateSignatureResponse Alibabacloud_PaiPlugin20210325::Client::createSignatureWithOptions(shared_ptr<CreateSignatureRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificates)) {
    (*body)["Certificates"] = *request->certificates;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->powerOfAttorney)) {
    (*body)["PowerOfAttorney"] = *request->powerOfAttorney;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceID)) {
    (*body)["ProcessInstanceID"] = *request->processInstanceID;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateSignatureResponse(doROARequest(make_shared<string>("CreateSignature"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/signatures")), make_shared<string>("json"), req, runtime));
}

DeleteTemplateResponse Alibabacloud_PaiPlugin20210325::Client::deleteTemplate(shared_ptr<string> ID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTemplateWithOptions(ID, headers, runtime);
}

DeleteTemplateResponse Alibabacloud_PaiPlugin20210325::Client::deleteTemplateWithOptions(shared_ptr<string> ID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteTemplateResponse(doROARequest(make_shared<string>("DeleteTemplate"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/templates/") + string(*ID)), make_shared<string>("json"), req, runtime));
}

CreateTemplateResponse Alibabacloud_PaiPlugin20210325::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTemplateWithOptions(request, headers, runtime);
}

CreateTemplateResponse Alibabacloud_PaiPlugin20210325::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    (*body)["Content"] = *request->content;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceID)) {
    (*body)["ProcessInstanceID"] = *request->processInstanceID;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateTemplateResponse(doROARequest(make_shared<string>("CreateTemplate"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/templates")), make_shared<string>("json"), req, runtime));
}

ListTemplatesResponse Alibabacloud_PaiPlugin20210325::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTemplatesWithOptions(request, headers, runtime);
}

ListTemplatesResponse Alibabacloud_PaiPlugin20210325::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListTemplatesResponse(doROARequest(make_shared<string>("ListTemplates"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/templates")), make_shared<string>("json"), req, runtime));
}

DeleteScheduleResponse Alibabacloud_PaiPlugin20210325::Client::deleteSchedule(shared_ptr<string> ID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteScheduleWithOptions(ID, headers, runtime);
}

DeleteScheduleResponse Alibabacloud_PaiPlugin20210325::Client::deleteScheduleWithOptions(shared_ptr<string> ID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteScheduleResponse(doROARequest(make_shared<string>("DeleteSchedule"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/schedules/") + string(*ID)), make_shared<string>("json"), req, runtime));
}

GetTemplateResponse Alibabacloud_PaiPlugin20210325::Client::getTemplate(shared_ptr<string> ID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTemplateWithOptions(ID, headers, runtime);
}

GetTemplateResponse Alibabacloud_PaiPlugin20210325::Client::getTemplateWithOptions(shared_ptr<string> ID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetTemplateResponse(doROARequest(make_shared<string>("GetTemplate"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/templates/") + string(*ID)), make_shared<string>("json"), req, runtime));
}

ListSignaturesResponse Alibabacloud_PaiPlugin20210325::Client::listSignatures(shared_ptr<ListSignaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSignaturesWithOptions(request, headers, runtime);
}

ListSignaturesResponse Alibabacloud_PaiPlugin20210325::Client::listSignaturesWithOptions(shared_ptr<ListSignaturesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListSignaturesResponse(doROARequest(make_shared<string>("ListSignatures"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/signatures")), make_shared<string>("json"), req, runtime));
}

GetSignatureResponse Alibabacloud_PaiPlugin20210325::Client::getSignature(shared_ptr<string> ID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSignatureWithOptions(ID, headers, runtime);
}

GetSignatureResponse Alibabacloud_PaiPlugin20210325::Client::getSignatureWithOptions(shared_ptr<string> ID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetSignatureResponse(doROARequest(make_shared<string>("GetSignature"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/signatures/") + string(*ID)), make_shared<string>("json"), req, runtime));
}

CreateScheduleResponse Alibabacloud_PaiPlugin20210325::Client::createSchedule(shared_ptr<CreateScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createScheduleWithOptions(request, headers, runtime);
}

CreateScheduleResponse Alibabacloud_PaiPlugin20210325::Client::createScheduleWithOptions(shared_ptr<CreateScheduleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataAddress)) {
    (*body)["DataAddress"] = *request->dataAddress;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSource)) {
    (*body)["DataSource"] = *request->dataSource;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dingBotKeyword)) {
    (*body)["DingBotKeyword"] = *request->dingBotKeyword;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dingBotToken)) {
    (*body)["DingBotToken"] = *request->dingBotToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*body)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partition)) {
    (*body)["Partition"] = *request->partition;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumberColumn)) {
    (*body)["PhoneNumberColumn"] = *request->phoneNumberColumn;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendTime)) {
    (*body)["SendTime"] = *request->sendTime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureID)) {
    (*body)["SignatureID"] = *request->signatureID;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCodeColumn)) {
    (*body)["TemplateCodeColumn"] = *request->templateCodeColumn;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateID)) {
    (*body)["TemplateID"] = *request->templateID;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateScheduleResponse(doROARequest(make_shared<string>("CreateSchedule"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/schedules")), make_shared<string>("json"), req, runtime));
}

ListSchedulesResponse Alibabacloud_PaiPlugin20210325::Client::listSchedules(shared_ptr<ListSchedulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSchedulesWithOptions(request, headers, runtime);
}

ListSchedulesResponse Alibabacloud_PaiPlugin20210325::Client::listSchedulesWithOptions(shared_ptr<ListSchedulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["Name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListSchedulesResponse(doROARequest(make_shared<string>("ListSchedules"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/schedules")), make_shared<string>("json"), req, runtime));
}

DeleteSignatureResponse Alibabacloud_PaiPlugin20210325::Client::deleteSignature(shared_ptr<string> ID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSignatureWithOptions(ID, headers, runtime);
}

DeleteSignatureResponse Alibabacloud_PaiPlugin20210325::Client::deleteSignatureWithOptions(shared_ptr<string> ID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteSignatureResponse(doROARequest(make_shared<string>("DeleteSignature"), make_shared<string>("2021-03-25"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/api/v1/signatures/") + string(*ID)), make_shared<string>("json"), req, runtime));
}

