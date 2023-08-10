// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aliding_20230426.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Aliding20230426;

Alibabacloud_Aliding20230426::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aliding"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Aliding20230426::Client::getEndpoint(shared_ptr<string> productId,
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

CreateSheetResponse Alibabacloud_Aliding20230426::Client::createSheetWithOptions(shared_ptr<CreateSheetRequest> tmpReq, shared_ptr<CreateSheetHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSheetShrinkRequest> request = make_shared<CreateSheetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateSheetShrinkHeaders> headers = make_shared<CreateSheetShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateSheetHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSheetRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSheet"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/createSheet"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSheetResponse(callApi(params, req, runtime));
}

CreateSheetResponse Alibabacloud_Aliding20230426::Client::createSheet(shared_ptr<CreateSheetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSheetHeaders> headers = make_shared<CreateSheetHeaders>();
  return createSheetWithOptions(request, headers, runtime);
}

InsertRowsBeforeResponse Alibabacloud_Aliding20230426::Client::insertRowsBeforeWithOptions(shared_ptr<InsertRowsBeforeRequest> tmpReq, shared_ptr<InsertRowsBeforeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertRowsBeforeShrinkRequest> request = make_shared<InsertRowsBeforeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<InsertRowsBeforeShrinkHeaders> headers = make_shared<InsertRowsBeforeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<InsertRowsBeforeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<InsertRowsBeforeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->row)) {
    body->insert(pair<string, long>("Row", *request->row));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rowCount)) {
    body->insert(pair<string, long>("RowCount", *request->rowCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertRowsBefore"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/insertRowsBefore"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertRowsBeforeResponse(callApi(params, req, runtime));
}

InsertRowsBeforeResponse Alibabacloud_Aliding20230426::Client::insertRowsBefore(shared_ptr<InsertRowsBeforeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsertRowsBeforeHeaders> headers = make_shared<InsertRowsBeforeHeaders>();
  return insertRowsBeforeWithOptions(request, headers, runtime);
}

