// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/support_plan_20210706.hpp>
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

using namespace Alibabacloud_Support-plan20210706;

Alibabacloud_Support-plan20210706::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("support-plan"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Support-plan20210706::Client::getEndpoint(shared_ptr<string> productId,
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

AddEnterpriseGroupMemberToTaskGroupResponse Alibabacloud_Support-plan20210706::Client::addEnterpriseGroupMemberToTaskGroupWithOptions(shared_ptr<AddEnterpriseGroupMemberToTaskGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskOrderId)) {
    query->insert(pair<string, string>("TaskOrderId", *request->taskOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEnterpriseGroupMemberToTaskGroup"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddEnterpriseGroupMemberToTaskGroupResponse(callApi(params, req, runtime));
  }
  else {
    return AddEnterpriseGroupMemberToTaskGroupResponse(execute(params, req, runtime));
  }
}

AddEnterpriseGroupMemberToTaskGroupResponse Alibabacloud_Support-plan20210706::Client::addEnterpriseGroupMemberToTaskGroup(shared_ptr<AddEnterpriseGroupMemberToTaskGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEnterpriseGroupMemberToTaskGroupWithOptions(request, runtime);
}

CreateTaskOrderResponse Alibabacloud_Support-plan20210706::Client::createTaskOrderWithOptions(shared_ptr<CreateTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createUserId)) {
    query->insert(pair<string, string>("CreateUserId", *request->createUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isUrgent)) {
    query->insert(pair<string, bool>("IsUrgent", *request->isUrgent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->openGroupId)) {
    query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->overview)) {
    query->insert(pair<string, string>("Overview", *request->overview));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urgentDescription)) {
    query->insert(pair<string, string>("UrgentDescription", *request->urgentDescription));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTaskOrder"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateTaskOrderResponse(callApi(params, req, runtime));
  }
  else {
    return CreateTaskOrderResponse(execute(params, req, runtime));
  }
}

CreateTaskOrderResponse Alibabacloud_Support-plan20210706::Client::createTaskOrder(shared_ptr<CreateTaskOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskOrderWithOptions(request, runtime);
}

ListDdTaskOrderResponse Alibabacloud_Support-plan20210706::Client::listDdTaskOrderWithOptions(shared_ptr<ListDdTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createRealName)) {
    query->insert(pair<string, string>("CreateRealName", *request->createRealName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isUrgent)) {
    query->insert(pair<string, bool>("IsUrgent", *request->isUrgent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->openGroupId)) {
    query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    query->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDdTaskOrder"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDdTaskOrderResponse(callApi(params, req, runtime));
  }
  else {
    return ListDdTaskOrderResponse(execute(params, req, runtime));
  }
}

ListDdTaskOrderResponse Alibabacloud_Support-plan20210706::Client::listDdTaskOrder(shared_ptr<ListDdTaskOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDdTaskOrderWithOptions(request, runtime);
}

ListEnterpriseDingtalkGroupCustomerMembersResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroupCustomerMembersWithOptions(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openGroupId)) {
    query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnterpriseDingtalkGroupCustomerMembers"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEnterpriseDingtalkGroupCustomerMembersResponse(callApi(params, req, runtime));
  }
  else {
    return ListEnterpriseDingtalkGroupCustomerMembersResponse(execute(params, req, runtime));
  }
}

ListEnterpriseDingtalkGroupCustomerMembersResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroupCustomerMembers(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseDingtalkGroupCustomerMembersWithOptions(request, runtime);
}

ListEnterpriseDingtalkGroupsResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroupsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnterpriseDingtalkGroups"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEnterpriseDingtalkGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEnterpriseDingtalkGroupsResponse(execute(params, req, runtime));
  }
}

ListEnterpriseDingtalkGroupsResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroups() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseDingtalkGroupsWithOptions(runtime);
}

ListProductByGroupResponse Alibabacloud_Support-plan20210706::Client::listProductByGroupWithOptions(shared_ptr<ListProductByGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openGroupId)) {
    query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductByGroup"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProductByGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ListProductByGroupResponse(execute(params, req, runtime));
  }
}

ListProductByGroupResponse Alibabacloud_Support-plan20210706::Client::listProductByGroup(shared_ptr<ListProductByGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductByGroupWithOptions(request, runtime);
}

