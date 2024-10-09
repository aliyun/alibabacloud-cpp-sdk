// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/marketing_event_20210101.hpp>
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

using namespace Alibabacloud_MarketingEvent20210101;

Alibabacloud_MarketingEvent20210101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("marketing_event"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_MarketingEvent20210101::Client::getEndpoint(shared_ptr<string> productId,
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

AddSumRecordFlowPopResponse Alibabacloud_MarketingEvent20210101::Client::addSumRecordFlowPopWithOptions(shared_ptr<AddSumRecordFlowPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activityId)) {
    query->insert(pair<string, string>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceName)) {
    query->insert(pair<string, string>("ConferenceName", *request->conferenceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryName)) {
    query->insert(pair<string, string>("EntryName", *request->entryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idcard)) {
    query->insert(pair<string, string>("Idcard", *request->idcard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signTime)) {
    query->insert(pair<string, string>("SignTime", *request->signTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSumRecordFlowPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSumRecordFlowPopResponse(callApi(params, req, runtime));
}

AddSumRecordFlowPopResponse Alibabacloud_MarketingEvent20210101::Client::addSumRecordFlowPop(shared_ptr<AddSumRecordFlowPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSumRecordFlowPopWithOptions(request, runtime);
}

BindExhibitorRfidPopResponse Alibabacloud_MarketingEvent20210101::Client::bindExhibitorRfidPopWithOptions(shared_ptr<BindExhibitorRfidPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    query->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtCreate)) {
    query->insert(pair<string, string>("GmtCreate", *request->gmtCreate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtModified)) {
    query->insert(pair<string, string>("GmtModified", *request->gmtModified));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->guestTicketRecordId)) {
    query->insert(pair<string, long>("GuestTicketRecordId", *request->guestTicketRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rfid)) {
    query->insert(pair<string, string>("Rfid", *request->rfid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ticketCode)) {
    query->insert(pair<string, string>("TicketCode", *request->ticketCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindExhibitorRfidPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindExhibitorRfidPopResponse(callApi(params, req, runtime));
}

BindExhibitorRfidPopResponse Alibabacloud_MarketingEvent20210101::Client::bindExhibitorRfidPop(shared_ptr<BindExhibitorRfidPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindExhibitorRfidPopWithOptions(request, runtime);
}

BindGuestRfidPopResponse Alibabacloud_MarketingEvent20210101::Client::bindGuestRfidPopWithOptions(shared_ptr<BindGuestRfidPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    query->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtCreate)) {
    query->insert(pair<string, string>("GmtCreate", *request->gmtCreate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtModified)) {
    query->insert(pair<string, string>("GmtModified", *request->gmtModified));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->guestTicketRecordId)) {
    query->insert(pair<string, long>("GuestTicketRecordId", *request->guestTicketRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rfid)) {
    query->insert(pair<string, string>("Rfid", *request->rfid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ticketCode)) {
    query->insert(pair<string, string>("TicketCode", *request->ticketCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindGuestRfidPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindGuestRfidPopResponse(callApi(params, req, runtime));
}

BindGuestRfidPopResponse Alibabacloud_MarketingEvent20210101::Client::bindGuestRfidPop(shared_ptr<BindGuestRfidPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindGuestRfidPopWithOptions(request, runtime);
}

CheckNFCBindPopResponse Alibabacloud_MarketingEvent20210101::Client::checkNFCBindPopWithOptions(shared_ptr<CheckNFCBindPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    query->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nfcId)) {
    query->insert(pair<string, string>("NfcId", *request->nfcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckNFCBindPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckNFCBindPopResponse(callApi(params, req, runtime));
}

CheckNFCBindPopResponse Alibabacloud_MarketingEvent20210101::Client::checkNFCBindPop(shared_ptr<CheckNFCBindPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkNFCBindPopWithOptions(request, runtime);
}

FindGuestCredentialsRecordResponse Alibabacloud_MarketingEvent20210101::Client::findGuestCredentialsRecordWithOptions(shared_ptr<FindGuestCredentialsRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activityId)) {
    query->insert(pair<string, string>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dateTimeString)) {
    query->insert(pair<string, string>("DateTimeString", *request->dateTimeString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDateTime)) {
    query->insert(pair<string, string>("EndDateTime", *request->endDateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDateTime)) {
    query->insert(pair<string, string>("StartDateTime", *request->startDateTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FindGuestCredentialsRecord"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FindGuestCredentialsRecordResponse(callApi(params, req, runtime));
}

FindGuestCredentialsRecordResponse Alibabacloud_MarketingEvent20210101::Client::findGuestCredentialsRecord(shared_ptr<FindGuestCredentialsRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findGuestCredentialsRecordWithOptions(request, runtime);
}

FindGuestTicketRecordResponse Alibabacloud_MarketingEvent20210101::Client::findGuestTicketRecordWithOptions(shared_ptr<FindGuestTicketRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activityId)) {
    query->insert(pair<string, string>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dateTimeString)) {
    query->insert(pair<string, string>("DateTimeString", *request->dateTimeString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDateTime)) {
    query->insert(pair<string, string>("EndDateTime", *request->endDateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDateTime)) {
    query->insert(pair<string, string>("StartDateTime", *request->startDateTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FindGuestTicketRecord"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FindGuestTicketRecordResponse(callApi(params, req, runtime));
}

FindGuestTicketRecordResponse Alibabacloud_MarketingEvent20210101::Client::findGuestTicketRecord(shared_ptr<FindGuestTicketRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findGuestTicketRecordWithOptions(request, runtime);
}

QueryAllActivityInfoResponse Alibabacloud_MarketingEvent20210101::Client::queryAllActivityInfoWithOptions(shared_ptr<QueryAllActivityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAllActivityInfo"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAllActivityInfoResponse(callApi(params, req, runtime));
}

QueryAllActivityInfoResponse Alibabacloud_MarketingEvent20210101::Client::queryAllActivityInfo(shared_ptr<QueryAllActivityInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllActivityInfoWithOptions(request, runtime);
}

QueryOrderSessionListPopResponse Alibabacloud_MarketingEvent20210101::Client::queryOrderSessionListPopWithOptions(shared_ptr<QueryOrderSessionListPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    query->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nfcId)) {
    query->insert(pair<string, string>("NfcId", *request->nfcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderSessionListPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderSessionListPopResponse(callApi(params, req, runtime));
}

QueryOrderSessionListPopResponse Alibabacloud_MarketingEvent20210101::Client::queryOrderSessionListPop(shared_ptr<QueryOrderSessionListPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderSessionListPopWithOptions(request, runtime);
}

QuerySessionByActivityIdPopResponse Alibabacloud_MarketingEvent20210101::Client::querySessionByActivityIdPopWithOptions(shared_ptr<QuerySessionByActivityIdPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    query->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySessionByActivityIdPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySessionByActivityIdPopResponse(callApi(params, req, runtime));
}

QuerySessionByActivityIdPopResponse Alibabacloud_MarketingEvent20210101::Client::querySessionByActivityIdPop(shared_ptr<QuerySessionByActivityIdPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySessionByActivityIdPopWithOptions(request, runtime);
}

QuerySessionListPopResponse Alibabacloud_MarketingEvent20210101::Client::querySessionListPopWithOptions(shared_ptr<QuerySessionListPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    query->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nfcId)) {
    query->insert(pair<string, string>("NfcId", *request->nfcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySessionListPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySessionListPopResponse(callApi(params, req, runtime));
}

QuerySessionListPopResponse Alibabacloud_MarketingEvent20210101::Client::querySessionListPop(shared_ptr<QuerySessionListPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySessionListPopWithOptions(request, runtime);
}

QuerySignInRecordPopResponse Alibabacloud_MarketingEvent20210101::Client::querySignInRecordPopWithOptions(shared_ptr<QuerySignInRecordPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    query->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySignInRecordPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySignInRecordPopResponse(callApi(params, req, runtime));
}

QuerySignInRecordPopResponse Alibabacloud_MarketingEvent20210101::Client::querySignInRecordPop(shared_ptr<QuerySignInRecordPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySignInRecordPopWithOptions(request, runtime);
}

QuerySingleActivityInfoResponse Alibabacloud_MarketingEvent20210101::Client::querySingleActivityInfoWithOptions(shared_ptr<QuerySingleActivityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySingleActivityInfo"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySingleActivityInfoResponse(callApi(params, req, runtime));
}

QuerySingleActivityInfoResponse Alibabacloud_MarketingEvent20210101::Client::querySingleActivityInfo(shared_ptr<QuerySingleActivityInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySingleActivityInfoWithOptions(request, runtime);
}

SyncSignInInfoResponse Alibabacloud_MarketingEvent20210101::Client::syncSignInInfoWithOptions(shared_ptr<SyncSignInInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncSignInInfo"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncSignInInfoResponse(callApi(params, req, runtime));
}

SyncSignInInfoResponse Alibabacloud_MarketingEvent20210101::Client::syncSignInInfo(shared_ptr<SyncSignInInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncSignInInfoWithOptions(request, runtime);
}

TicketOrCredentialsSignInPopResponse Alibabacloud_MarketingEvent20210101::Client::ticketOrCredentialsSignInPopWithOptions(shared_ptr<TicketOrCredentialsSignInPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activityId)) {
    query->insert(pair<string, string>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceName)) {
    query->insert(pair<string, string>("ConferenceName", *request->conferenceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryName)) {
    query->insert(pair<string, string>("EntryName", *request->entryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idcard)) {
    query->insert(pair<string, string>("Idcard", *request->idcard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signTime)) {
    query->insert(pair<string, string>("SignTime", *request->signTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketOrCredentialsSignInPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketOrCredentialsSignInPopResponse(callApi(params, req, runtime));
}

TicketOrCredentialsSignInPopResponse Alibabacloud_MarketingEvent20210101::Client::ticketOrCredentialsSignInPop(shared_ptr<TicketOrCredentialsSignInPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ticketOrCredentialsSignInPopWithOptions(request, runtime);
}

UpdateCredentialsStatusPopResponse Alibabacloud_MarketingEvent20210101::Client::updateCredentialsStatusPopWithOptions(shared_ptr<UpdateCredentialsStatusPopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyRecipientName)) {
    query->insert(pair<string, string>("ProxyRecipientName", *request->proxyRecipientName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyRecipientPhoneNumber)) {
    query->insert(pair<string, string>("ProxyRecipientPhoneNumber", *request->proxyRecipientPhoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptLocation)) {
    query->insert(pair<string, string>("ReceiptLocation", *request->receiptLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    query->insert(pair<string, string>("Time", *request->time));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCredentialsStatusPop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCredentialsStatusPopResponse(callApi(params, req, runtime));
}

UpdateCredentialsStatusPopResponse Alibabacloud_MarketingEvent20210101::Client::updateCredentialsStatusPop(shared_ptr<UpdateCredentialsStatusPopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCredentialsStatusPopWithOptions(request, runtime);
}

UpdateTicketRecordByticketCodePopResponse Alibabacloud_MarketingEvent20210101::Client::updateTicketRecordByticketCodePopWithOptions(shared_ptr<UpdateTicketRecordByticketCodePopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agendaId)) {
    query->insert(pair<string, string>("AgendaId", *request->agendaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->event)) {
    query->insert(pair<string, string>("Event", *request->event));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    query->insert(pair<string, string>("Time", *request->time));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTicketRecordByticketCodePop"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTicketRecordByticketCodePopResponse(callApi(params, req, runtime));
}

UpdateTicketRecordByticketCodePopResponse Alibabacloud_MarketingEvent20210101::Client::updateTicketRecordByticketCodePop(shared_ptr<UpdateTicketRecordByticketCodePopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTicketRecordByticketCodePopWithOptions(request, runtime);
}

