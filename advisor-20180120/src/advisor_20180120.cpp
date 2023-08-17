// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/advisor_20180120.hpp>
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

using namespace Alibabacloud_Advisor20180120;

Alibabacloud_Advisor20180120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("advisor"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Advisor20180120::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeAdvicesResponse Alibabacloud_Advisor20180120::Client::describeAdvicesWithOptions(shared_ptr<DescribeAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->adviceId)) {
    query->insert(pair<string, long>("AdviceId", *request->adviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientUid)) {
    query->insert(pair<string, long>("ClientUid", *request->clientUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->excludeAdviceId)) {
    query->insert(pair<string, long>("ExcludeAdviceId", *request->excludeAdviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterType)) {
    query->insert(pair<string, string>("FilterType", *request->filterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterValue)) {
    query->insert(pair<string, string>("FilterValue", *request->filterValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdvicesResponse(callApi(params, req, runtime));
}

DescribeAdvicesResponse Alibabacloud_Advisor20180120::Client::describeAdvices(shared_ptr<DescribeAdvicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvicesWithOptions(request, runtime);
}

DescribeAdvicesPageResponse Alibabacloud_Advisor20180120::Client::describeAdvicesPageWithOptions(shared_ptr<DescribeAdvicesPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->adviceId)) {
    query->insert(pair<string, long>("AdviceId", *request->adviceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->associateUid)) {
    query->insert(pair<string, long>("AssociateUid", *request->associateUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeAdviceId)) {
    query->insert(pair<string, string>("ExcludeAdviceId", *request->excludeAdviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvicesPage"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdvicesPageResponse(callApi(params, req, runtime));
}

DescribeAdvicesPageResponse Alibabacloud_Advisor20180120::Client::describeAdvicesPage(shared_ptr<DescribeAdvicesPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvicesPageWithOptions(request, runtime);
}

DescribeAdvisorChecksResponse Alibabacloud_Advisor20180120::Client::describeAdvisorChecksWithOptions(shared_ptr<DescribeAdvisorChecksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvisorChecks"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdvisorChecksResponse(callApi(params, req, runtime));
}

DescribeAdvisorChecksResponse Alibabacloud_Advisor20180120::Client::describeAdvisorChecks(shared_ptr<DescribeAdvisorChecksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvisorChecksWithOptions(request, runtime);
}

GetHistoryAdvicesResponse Alibabacloud_Advisor20180120::Client::getHistoryAdvicesWithOptions(shared_ptr<GetHistoryAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->associateUid)) {
    query->insert(pair<string, long>("AssociateUid", *request->associateUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientUid)) {
    query->insert(pair<string, long>("ClientUid", *request->clientUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterType)) {
    query->insert(pair<string, string>("FilterType", *request->filterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterValue)) {
    query->insert(pair<string, string>("FilterValue", *request->filterValue));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isExpired)) {
    query->insert(pair<string, bool>("IsExpired", *request->isExpired));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHistoryAdvices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHistoryAdvicesResponse(callApi(params, req, runtime));
}

GetHistoryAdvicesResponse Alibabacloud_Advisor20180120::Client::getHistoryAdvices(shared_ptr<GetHistoryAdvicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHistoryAdvicesWithOptions(request, runtime);
}

RefreshAdvisorCheckResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorCheckWithOptions(shared_ptr<RefreshAdvisorCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshAdvisorCheck"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshAdvisorCheckResponse(callApi(params, req, runtime));
}

RefreshAdvisorCheckResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorCheck(shared_ptr<RefreshAdvisorCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshAdvisorCheckWithOptions(request, runtime);
}

RefreshAdvisorResourceResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorResourceWithOptions(shared_ptr<RefreshAdvisorResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshAdvisorResource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshAdvisorResourceResponse(callApi(params, req, runtime));
}

RefreshAdvisorResourceResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorResource(shared_ptr<RefreshAdvisorResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshAdvisorResourceWithOptions(request, runtime);
}

