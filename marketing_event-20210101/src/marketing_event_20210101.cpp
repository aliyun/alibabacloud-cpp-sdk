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

