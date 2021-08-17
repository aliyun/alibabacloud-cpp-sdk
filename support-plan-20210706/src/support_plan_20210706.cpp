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

ListEnterpriseDingtalkGroupCustomerMembersResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroupCustomerMembersWithOptions(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListEnterpriseDingtalkGroupCustomerMembersResponse(doRPCRequest(make_shared<string>("ListEnterpriseDingtalkGroupCustomerMembers"), make_shared<string>("2021-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListEnterpriseDingtalkGroupCustomerMembersResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroupCustomerMembers(shared_ptr<ListEnterpriseDingtalkGroupCustomerMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseDingtalkGroupCustomerMembersWithOptions(request, runtime);
}

ListEnterpriseDingtalkGroupsResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroupsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListEnterpriseDingtalkGroupsResponse(doRPCRequest(make_shared<string>("ListEnterpriseDingtalkGroups"), make_shared<string>("2021-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListEnterpriseDingtalkGroupsResponse Alibabacloud_Support-plan20210706::Client::listEnterpriseDingtalkGroups() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnterpriseDingtalkGroupsWithOptions(runtime);
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
  return DeleteEnterpriseDingtalkGroupCustomerMemberResponse(doRPCRequest(make_shared<string>("DeleteEnterpriseDingtalkGroupCustomerMember"), make_shared<string>("2021-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEnterpriseDingtalkGroupCustomerMemberResponse Alibabacloud_Support-plan20210706::Client::deleteEnterpriseDingtalkGroupCustomerMember(shared_ptr<DeleteEnterpriseDingtalkGroupCustomerMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnterpriseDingtalkGroupCustomerMemberWithOptions(request, runtime);
}

GetEnterpriseDingtalkGroupCustomerMemberResponse Alibabacloud_Support-plan20210706::Client::getEnterpriseDingtalkGroupCustomerMemberWithOptions(shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEnterpriseDingtalkGroupCustomerMemberResponse(doRPCRequest(make_shared<string>("GetEnterpriseDingtalkGroupCustomerMember"), make_shared<string>("2021-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEnterpriseDingtalkGroupCustomerMemberResponse Alibabacloud_Support-plan20210706::Client::getEnterpriseDingtalkGroupCustomerMember(shared_ptr<GetEnterpriseDingtalkGroupCustomerMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseDingtalkGroupCustomerMemberWithOptions(request, runtime);
}

GetEnterpriseDingtalkGroupResponse Alibabacloud_Support-plan20210706::Client::getEnterpriseDingtalkGroupWithOptions(shared_ptr<GetEnterpriseDingtalkGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEnterpriseDingtalkGroupResponse(doRPCRequest(make_shared<string>("GetEnterpriseDingtalkGroup"), make_shared<string>("2021-07-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEnterpriseDingtalkGroupResponse Alibabacloud_Support-plan20210706::Client::getEnterpriseDingtalkGroup(shared_ptr<GetEnterpriseDingtalkGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseDingtalkGroupWithOptions(request, runtime);
}

