// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/support_plan_20210706.hpp>
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

CloseTaskOrderResponse Alibabacloud_Support-plan20210706::Client::closeTaskOrderWithOptions(shared_ptr<CloseTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OrderId", *request->orderId));
  query->insert(pair<string, string>("UserName", *request->userName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseTaskOrder"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseTaskOrderResponse(callApi(params, req, runtime));
}

CloseTaskOrderResponse Alibabacloud_Support-plan20210706::Client::closeTaskOrder(shared_ptr<CloseTaskOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeTaskOrderWithOptions(request, runtime);
}

CreateTaskOrderResponse Alibabacloud_Support-plan20210706::Client::createTaskOrderWithOptions(shared_ptr<CreateTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CustomerRealName", *request->customerRealName));
  query->insert(pair<string, string>("CustomerUserId", *request->customerUserId));
  query->insert(pair<string, string>("ImportantDescription", *request->importantDescription));
  query->insert(pair<string, string>("IsImportant", *request->isImportant));
  query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  query->insert(pair<string, string>("ProductType", *request->productType));
  query->insert(pair<string, string>("ProductTypeName", *request->productTypeName));
  query->insert(pair<string, string>("TaskTitle", *request->taskTitle));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTaskOrder"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskOrderResponse(callApi(params, req, runtime));
}

CreateTaskOrderResponse Alibabacloud_Support-plan20210706::Client::createTaskOrder(shared_ptr<CreateTaskOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskOrderWithOptions(request, runtime);
}

CreateTaskOrderByEventReportResponse Alibabacloud_Support-plan20210706::Client::createTaskOrderByEventReportWithOptions(shared_ptr<CreateTaskOrderByEventReportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTaskOrderByEventReportShrinkRequest> request = make_shared<CreateTaskOrderByEventReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateTaskOrderByEventReportRequestEventBody>(tmpReq->eventBody)) {
    request->eventBodyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->eventBody->toMap()), make_shared<string>("EventBody"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTaskOrderByEventReportRequestExtinfo>>(tmpReq->extinfo)) {
    request->extinfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extinfo, make_shared<string>("Extinfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Business", *request->business));
  query->insert(pair<string, string>("CreateRealName", *request->createRealName));
  query->insert(pair<string, string>("CreateUserId", *request->createUserId));
  query->insert(pair<string, string>("EventBody", *request->eventBodyShrink));
  query->insert(pair<string, string>("Extinfo", *request->extinfoShrink));
  query->insert(pair<string, string>("ImportantDesc", *request->importantDesc));
  query->insert(pair<string, string>("JoinChildGroupUserIds", *request->joinChildGroupUserIds));
  query->insert(pair<string, string>("MonitorCongregation", *request->monitorCongregation));
  query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  query->insert(pair<string, string>("ProductType", *request->productType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTaskOrderByEventReport"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskOrderByEventReportResponse(callApi(params, req, runtime));
}

CreateTaskOrderByEventReportResponse Alibabacloud_Support-plan20210706::Client::createTaskOrderByEventReport(shared_ptr<CreateTaskOrderByEventReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskOrderByEventReportWithOptions(request, runtime);
}

DeleteEnterpriseDingtalkGroupCustomerMemberResponse Alibabacloud_Support-plan20210706::Client::deleteEnterpriseDingtalkGroupCustomerMemberWithOptions(shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest> request = make_shared<DeleteEnterpriseDingtalkGroupCustomerMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->mobiles)) {
    request->mobilesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->mobiles, make_shared<string>("Mobiles"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnterpriseDingtalkGroupCustomerMember"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnterpriseDingtalkGroupCustomerMemberResponse(callApi(params, req, runtime));
}

DeleteEnterpriseDingtalkGroupCustomerMemberResponse Alibabacloud_Support-plan20210706::Client::deleteEnterpriseDingtalkGroupCustomerMember(shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnterpriseDingtalkGroupCustomerMemberWithOptions(request, runtime);
}

GetEnterpriseDingtalkGroupResponse Alibabacloud_Support-plan20210706::Client::getEnterpriseDingtalkGroupWithOptions(shared_ptr<GetEnterpriseDingtalkGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseDingtalkGroup"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseDingtalkGroupResponse(callApi(params, req, runtime));
}

GetEnterpriseDingtalkGroupResponse Alibabacloud_Support-plan20210706::Client::getEnterpriseDingtalkGroup(shared_ptr<GetEnterpriseDingtalkGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseDingtalkGroupWithOptions(request, runtime);
}

GetEnterpriseDingtalkGroupCustomerMemberResponse Alibabacloud_Support-plan20210706::Client::getEnterpriseDingtalkGroupCustomerMemberWithOptions(shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseDingtalkGroupCustomerMember"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseDingtalkGroupCustomerMemberResponse(callApi(params, req, runtime));
}

GetEnterpriseDingtalkGroupCustomerMemberResponse Alibabacloud_Support-plan20210706::Client::getEnterpriseDingtalkGroupCustomerMember(shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseDingtalkGroupCustomerMemberWithOptions(request, runtime);
}

ListDdTaskOrderResponse Alibabacloud_Support-plan20210706::Client::listDdTaskOrderWithOptions(shared_ptr<ListDdTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  query->insert(pair<string, string>("CallerType", *request->callerType));
  query->insert(pair<string, long>("CallerUid", *request->callerUid));
  query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  query->insert(pair<string, string>("OrderId", *request->orderId));
  query->insert(pair<string, string>("RequestId", *request->requestId));
  query->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDdTaskOrder"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDdTaskOrderResponse(callApi(params, req, runtime));
}

ListDdTaskOrderResponse Alibabacloud_Support-plan20210706::Client::listDdTaskOrder(shared_ptr<ListDdTaskOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDdTaskOrderWithOptions(request, runtime);
}

ListEnterpriseDingtalkGroupCustomerMembersResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroupCustomerMembersWithOptions(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
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
  return ListEnterpriseDingtalkGroupCustomerMembersResponse(callApi(params, req, runtime));
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
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnterpriseDingtalkGroupsResponse(callApi(params, req, runtime));
}

ListEnterpriseDingtalkGroupsResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroups() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseDingtalkGroupsWithOptions(runtime);
}

ListProductByGroupResponse Alibabacloud_Support-plan20210706::Client::listProductByGroupWithOptions(shared_ptr<ListProductByGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductByGroup"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductByGroupResponse(callApi(params, req, runtime));
}

ListProductByGroupResponse Alibabacloud_Support-plan20210706::Client::listProductByGroup(shared_ptr<ListProductByGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductByGroupWithOptions(request, runtime);
}

QueryTaskInfoResponse Alibabacloud_Support-plan20210706::Client::queryTaskInfoWithOptions(shared_ptr<QueryTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OrderId", *request->orderId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTaskInfo"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTaskInfoResponse(callApi(params, req, runtime));
}

QueryTaskInfoResponse Alibabacloud_Support-plan20210706::Client::queryTaskInfo(shared_ptr<QueryTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskInfoWithOptions(request, runtime);
}

ReplyMessageApiResponse Alibabacloud_Support-plan20210706::Client::replyMessageApiWithOptions(shared_ptr<ReplyMessageApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MsgContent", *request->msgContent));
  query->insert(pair<string, string>("MsgType", *request->msgType));
  query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  query->insert(pair<string, string>("OrderId", *request->orderId));
  query->insert(pair<string, string>("UserId", *request->userId));
  query->insert(pair<string, string>("UserName", *request->userName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplyMessageApi"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplyMessageApiResponse(callApi(params, req, runtime));
}

ReplyMessageApiResponse Alibabacloud_Support-plan20210706::Client::replyMessageApi(shared_ptr<ReplyMessageApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replyMessageApiWithOptions(request, runtime);
}

RestOpenTaskOrderResponse Alibabacloud_Support-plan20210706::Client::restOpenTaskOrderWithOptions(shared_ptr<RestOpenTaskOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OpenGroupId", *request->openGroupId));
  query->insert(pair<string, string>("OrderId", *request->orderId));
  query->insert(pair<string, string>("ResetContent", *request->resetContent));
  query->insert(pair<string, string>("ResetType", *request->resetType));
  query->insert(pair<string, string>("UserName", *request->userName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestOpenTaskOrder"))},
    {"version", boost::any(string("2021-07-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestOpenTaskOrderResponse(callApi(params, req, runtime));
}

RestOpenTaskOrderResponse Alibabacloud_Support-plan20210706::Client::restOpenTaskOrder(shared_ptr<RestOpenTaskOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restOpenTaskOrderWithOptions(request, runtime);
}

