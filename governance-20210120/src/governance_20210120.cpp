// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/governance_20210120.hpp>
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

using namespace Alibabacloud_Governance20210120;

Alibabacloud_Governance20210120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("governance"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Governance20210120::Client::getEndpoint(shared_ptr<string> productId,
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

EnrollAccountResponse Alibabacloud_Governance20210120::Client::enrollAccountWithOptions(shared_ptr<EnrollAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNamePrefix)) {
    query->insert(pair<string, string>("AccountNamePrefix", *request->accountNamePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->accountUid)) {
    query->insert(pair<string, long>("AccountUid", *request->accountUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineId)) {
    query->insert(pair<string, string>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<EnrollAccountRequestBaselineItems>>(request->baselineItems)) {
    query->insert(pair<string, vector<EnrollAccountRequestBaselineItems>>("BaselineItems", *request->baselineItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payerAccountUid)) {
    query->insert(pair<string, long>("PayerAccountUid", *request->payerAccountUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resellAccountType)) {
    query->insert(pair<string, string>("ResellAccountType", *request->resellAccountType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnrollAccount"))},
    {"version", boost::any(string("2021-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnrollAccountResponse(callApi(params, req, runtime));
}

EnrollAccountResponse Alibabacloud_Governance20210120::Client::enrollAccount(shared_ptr<EnrollAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enrollAccountWithOptions(request, runtime);
}

GetAccountFactoryBaselineResponse Alibabacloud_Governance20210120::Client::getAccountFactoryBaselineWithOptions(shared_ptr<GetAccountFactoryBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineId)) {
    query->insert(pair<string, string>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountFactoryBaseline"))},
    {"version", boost::any(string("2021-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountFactoryBaselineResponse(callApi(params, req, runtime));
}

GetAccountFactoryBaselineResponse Alibabacloud_Governance20210120::Client::getAccountFactoryBaseline(shared_ptr<GetAccountFactoryBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountFactoryBaselineWithOptions(request, runtime);
}

GetEnrolledAccountResponse Alibabacloud_Governance20210120::Client::getEnrolledAccountWithOptions(shared_ptr<GetEnrolledAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accountUid)) {
    query->insert(pair<string, long>("AccountUid", *request->accountUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnrolledAccount"))},
    {"version", boost::any(string("2021-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnrolledAccountResponse(callApi(params, req, runtime));
}

GetEnrolledAccountResponse Alibabacloud_Governance20210120::Client::getEnrolledAccount(shared_ptr<GetEnrolledAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnrolledAccountWithOptions(request, runtime);
}

ListAccountFactoryBaselinesResponse Alibabacloud_Governance20210120::Client::listAccountFactoryBaselinesWithOptions(shared_ptr<ListAccountFactoryBaselinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccountFactoryBaselines"))},
    {"version", boost::any(string("2021-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAccountFactoryBaselinesResponse(callApi(params, req, runtime));
}

ListAccountFactoryBaselinesResponse Alibabacloud_Governance20210120::Client::listAccountFactoryBaselines(shared_ptr<ListAccountFactoryBaselinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccountFactoryBaselinesWithOptions(request, runtime);
}

ListEnrolledAccountsResponse Alibabacloud_Governance20210120::Client::listEnrolledAccountsWithOptions(shared_ptr<ListEnrolledAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnrolledAccounts"))},
    {"version", boost::any(string("2021-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnrolledAccountsResponse(callApi(params, req, runtime));
}

ListEnrolledAccountsResponse Alibabacloud_Governance20210120::Client::listEnrolledAccounts(shared_ptr<ListEnrolledAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnrolledAccountsWithOptions(request, runtime);
}

UpdateAccountFactoryBaselineResponse Alibabacloud_Governance20210120::Client::updateAccountFactoryBaselineWithOptions(shared_ptr<UpdateAccountFactoryBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineId)) {
    query->insert(pair<string, string>("BaselineId", *request->baselineId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAccountFactoryBaselineRequestBaselineItems>>(request->baselineItems)) {
    query->insert(pair<string, vector<UpdateAccountFactoryBaselineRequestBaselineItems>>("BaselineItems", *request->baselineItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baselineName)) {
    query->insert(pair<string, string>("BaselineName", *request->baselineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAccountFactoryBaseline"))},
    {"version", boost::any(string("2021-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAccountFactoryBaselineResponse(callApi(params, req, runtime));
}

UpdateAccountFactoryBaselineResponse Alibabacloud_Governance20210120::Client::updateAccountFactoryBaseline(shared_ptr<UpdateAccountFactoryBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAccountFactoryBaselineWithOptions(request, runtime);
}

