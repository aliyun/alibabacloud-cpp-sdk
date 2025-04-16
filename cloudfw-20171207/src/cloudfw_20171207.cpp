// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloudfw_20171207.hpp>
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

using namespace Alibabacloud_Cloudfw20171207;

Alibabacloud_Cloudfw20171207::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-southeast-1", "cloudfw.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou", "cloudfw.cn-hangzhou.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudfw"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cloudfw20171207::Client::getEndpoint(shared_ptr<string> productId,
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

AddAddressBookResponse Alibabacloud_Cloudfw20171207::Client::addAddressBookWithOptions(shared_ptr<AddAddressBookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressList)) {
    query->insert(pair<string, string>("AddressList", *request->addressList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoAddTagEcs)) {
    query->insert(pair<string, string>("AutoAddTagEcs", *request->autoAddTagEcs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddAddressBookRequestTagList>>(request->tagList)) {
    query->insert(pair<string, vector<AddAddressBookRequestTagList>>("TagList", *request->tagList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagRelation)) {
    query->insert(pair<string, string>("TagRelation", *request->tagRelation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAddressBook"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAddressBookResponse(callApi(params, req, runtime));
}

AddAddressBookResponse Alibabacloud_Cloudfw20171207::Client::addAddressBook(shared_ptr<AddAddressBookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAddressBookWithOptions(request, runtime);
}

AddControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::addControlPolicyWithOptions(shared_ptr<AddControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationName)) {
    query->insert(pair<string, string>("ApplicationName", *request->applicationName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationNameList)) {
    query->insert(pair<string, vector<string>>("ApplicationNameList", *request->applicationNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPort)) {
    query->insert(pair<string, string>("DestPort", *request->destPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortGroup)) {
    query->insert(pair<string, string>("DestPortGroup", *request->destPortGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortType)) {
    query->insert(pair<string, string>("DestPortType", *request->destPortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainResolveType)) {
    query->insert(pair<string, string>("DomainResolveType", *request->domainResolveType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newOrder)) {
    query->insert(pair<string, string>("NewOrder", *request->newOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->repeatDays)) {
    query->insert(pair<string, vector<long>>("RepeatDays", *request->repeatDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatEndTime)) {
    query->insert(pair<string, string>("RepeatEndTime", *request->repeatEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatStartTime)) {
    query->insert(pair<string, string>("RepeatStartTime", *request->repeatStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddControlPolicyResponse(callApi(params, req, runtime));
}

AddControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::addControlPolicy(shared_ptr<AddControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addControlPolicyWithOptions(request, runtime);
}

AddInstanceMembersResponse Alibabacloud_Cloudfw20171207::Client::addInstanceMembersWithOptions(shared_ptr<AddInstanceMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AddInstanceMembersRequestMembers>>(request->members)) {
    query->insert(pair<string, vector<AddInstanceMembersRequestMembers>>("Members", *request->members));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddInstanceMembers"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddInstanceMembersResponse(callApi(params, req, runtime));
}

AddInstanceMembersResponse Alibabacloud_Cloudfw20171207::Client::addInstanceMembers(shared_ptr<AddInstanceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addInstanceMembersWithOptions(request, runtime);
}

BatchCopyVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::batchCopyVpcFirewallControlPolicyWithOptions(shared_ptr<BatchCopyVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceVpcFirewallId)) {
    query->insert(pair<string, string>("SourceVpcFirewallId", *request->sourceVpcFirewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetVpcFirewallId)) {
    query->insert(pair<string, string>("TargetVpcFirewallId", *request->targetVpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCopyVpcFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchCopyVpcFirewallControlPolicyResponse(callApi(params, req, runtime));
}

BatchCopyVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::batchCopyVpcFirewallControlPolicy(shared_ptr<BatchCopyVpcFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCopyVpcFirewallControlPolicyWithOptions(request, runtime);
}

BatchDeleteVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::batchDeleteVpcFirewallControlPolicyWithOptions(shared_ptr<BatchDeleteVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aclUuidList)) {
    query->insert(pair<string, vector<string>>("AclUuidList", *request->aclUuidList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteVpcFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteVpcFirewallControlPolicyResponse(callApi(params, req, runtime));
}

BatchDeleteVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::batchDeleteVpcFirewallControlPolicy(shared_ptr<BatchDeleteVpcFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteVpcFirewallControlPolicyWithOptions(request, runtime);
}

CreateDownloadTaskResponse Alibabacloud_Cloudfw20171207::Client::createDownloadTaskWithOptions(shared_ptr<CreateDownloadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskData)) {
    query->insert(pair<string, string>("TaskData", *request->taskData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    query->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDownloadTask"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDownloadTaskResponse(callApi(params, req, runtime));
}

CreateDownloadTaskResponse Alibabacloud_Cloudfw20171207::Client::createDownloadTask(shared_ptr<CreateDownloadTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDownloadTaskWithOptions(request, runtime);
}

CreateNatFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::createNatFirewallControlPolicyWithOptions(shared_ptr<CreateNatFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationNameList)) {
    query->insert(pair<string, vector<string>>("ApplicationNameList", *request->applicationNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPort)) {
    query->insert(pair<string, string>("DestPort", *request->destPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortGroup)) {
    query->insert(pair<string, string>("DestPortGroup", *request->destPortGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortType)) {
    query->insert(pair<string, string>("DestPortType", *request->destPortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainResolveType)) {
    query->insert(pair<string, long>("DomainResolveType", *request->domainResolveType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newOrder)) {
    query->insert(pair<string, string>("NewOrder", *request->newOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->repeatDays)) {
    query->insert(pair<string, vector<long>>("RepeatDays", *request->repeatDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatEndTime)) {
    query->insert(pair<string, string>("RepeatEndTime", *request->repeatEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatStartTime)) {
    query->insert(pair<string, string>("RepeatStartTime", *request->repeatStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNatFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNatFirewallControlPolicyResponse(callApi(params, req, runtime));
}

CreateNatFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::createNatFirewallControlPolicy(shared_ptr<CreateNatFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNatFirewallControlPolicyWithOptions(request, runtime);
}

CreateSecurityProxyResponse Alibabacloud_Cloudfw20171207::Client::createSecurityProxyWithOptions(shared_ptr<CreateSecurityProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSwitch)) {
    query->insert(pair<string, string>("FirewallSwitch", *request->firewallSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSecurityProxyRequestNatRouteEntryList>>(request->natRouteEntryList)) {
    query->insert(pair<string, vector<CreateSecurityProxyRequestNatRouteEntryList>>("NatRouteEntryList", *request->natRouteEntryList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyName)) {
    query->insert(pair<string, string>("ProxyName", *request->proxyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strictMode)) {
    query->insert(pair<string, long>("StrictMode", *request->strictMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vswitchAuto)) {
    query->insert(pair<string, string>("VswitchAuto", *request->vswitchAuto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vswitchCidr)) {
    query->insert(pair<string, string>("VswitchCidr", *request->vswitchCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vswitchId)) {
    query->insert(pair<string, string>("VswitchId", *request->vswitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecurityProxy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSecurityProxyResponse(callApi(params, req, runtime));
}

CreateSecurityProxyResponse Alibabacloud_Cloudfw20171207::Client::createSecurityProxy(shared_ptr<CreateSecurityProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSecurityProxyWithOptions(request, runtime);
}

CreateSlsLogDispatchResponse Alibabacloud_Cloudfw20171207::Client::createSlsLogDispatchWithOptions(shared_ptr<CreateSlsLogDispatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->slsRegionId)) {
    body->insert(pair<string, string>("SlsRegionId", *request->slsRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    body->insert(pair<string, long>("Ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSlsLogDispatch"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSlsLogDispatchResponse(callApi(params, req, runtime));
}

CreateSlsLogDispatchResponse Alibabacloud_Cloudfw20171207::Client::createSlsLogDispatch(shared_ptr<CreateSlsLogDispatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSlsLogDispatchWithOptions(request, runtime);
}

CreateTrFirewallV2Response Alibabacloud_Cloudfw20171207::Client::createTrFirewallV2WithOptions(shared_ptr<CreateTrFirewallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallDescription)) {
    query->insert(pair<string, string>("FirewallDescription", *request->firewallDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallName)) {
    query->insert(pair<string, string>("FirewallName", *request->firewallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSubnetCidr)) {
    query->insert(pair<string, string>("FirewallSubnetCidr", *request->firewallSubnetCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallVpcCidr)) {
    query->insert(pair<string, string>("FirewallVpcCidr", *request->firewallVpcCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallVpcId)) {
    query->insert(pair<string, string>("FirewallVpcId", *request->firewallVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallVswitchId)) {
    query->insert(pair<string, string>("FirewallVswitchId", *request->firewallVswitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeMode)) {
    query->insert(pair<string, string>("RouteMode", *request->routeMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trAttachmentMasterCidr)) {
    query->insert(pair<string, string>("TrAttachmentMasterCidr", *request->trAttachmentMasterCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trAttachmentMasterZone)) {
    query->insert(pair<string, string>("TrAttachmentMasterZone", *request->trAttachmentMasterZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trAttachmentSlaveCidr)) {
    query->insert(pair<string, string>("TrAttachmentSlaveCidr", *request->trAttachmentSlaveCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trAttachmentSlaveZone)) {
    query->insert(pair<string, string>("TrAttachmentSlaveZone", *request->trAttachmentSlaveZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transitRouterId)) {
    query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrFirewallV2"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrFirewallV2Response(callApi(params, req, runtime));
}

CreateTrFirewallV2Response Alibabacloud_Cloudfw20171207::Client::createTrFirewallV2(shared_ptr<CreateTrFirewallV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrFirewallV2WithOptions(request, runtime);
}

CreateTrFirewallV2RoutePolicyResponse Alibabacloud_Cloudfw20171207::Client::createTrFirewallV2RoutePolicyWithOptions(shared_ptr<CreateTrFirewallV2RoutePolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTrFirewallV2RoutePolicyShrinkRequest> request = make_shared<CreateTrFirewallV2RoutePolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateTrFirewallV2RoutePolicyRequestDestCandidateList>>(tmpReq->destCandidateList)) {
    request->destCandidateListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destCandidateList, make_shared<string>("DestCandidateList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTrFirewallV2RoutePolicyRequestSrcCandidateList>>(tmpReq->srcCandidateList)) {
    request->srcCandidateListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->srcCandidateList, make_shared<string>("SrcCandidateList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destCandidateListShrink)) {
    query->insert(pair<string, string>("DestCandidateList", *request->destCandidateListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyDescription)) {
    query->insert(pair<string, string>("PolicyDescription", *request->policyDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    query->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcCandidateListShrink)) {
    query->insert(pair<string, string>("SrcCandidateList", *request->srcCandidateListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrFirewallV2RoutePolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrFirewallV2RoutePolicyResponse(callApi(params, req, runtime));
}

CreateTrFirewallV2RoutePolicyResponse Alibabacloud_Cloudfw20171207::Client::createTrFirewallV2RoutePolicy(shared_ptr<CreateTrFirewallV2RoutePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrFirewallV2RoutePolicyWithOptions(request, runtime);
}

CreateVpcFirewallCenConfigureResponse Alibabacloud_Cloudfw20171207::Client::createVpcFirewallCenConfigureWithOptions(shared_ptr<CreateVpcFirewallCenConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSwitch)) {
    query->insert(pair<string, string>("FirewallSwitch", *request->firewallSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallVSwitchCidrBlock)) {
    query->insert(pair<string, string>("FirewallVSwitchCidrBlock", *request->firewallVSwitchCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallVpcCidrBlock)) {
    query->insert(pair<string, string>("FirewallVpcCidrBlock", *request->firewallVpcCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallVpcStandbyZoneId)) {
    query->insert(pair<string, string>("FirewallVpcStandbyZoneId", *request->firewallVpcStandbyZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallVpcZoneId)) {
    query->insert(pair<string, string>("FirewallVpcZoneId", *request->firewallVpcZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInstanceId)) {
    query->insert(pair<string, string>("NetworkInstanceId", *request->networkInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallName)) {
    query->insert(pair<string, string>("VpcFirewallName", *request->vpcFirewallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcRegion)) {
    query->insert(pair<string, string>("VpcRegion", *request->vpcRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpcFirewallCenConfigure"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVpcFirewallCenConfigureResponse(callApi(params, req, runtime));
}

CreateVpcFirewallCenConfigureResponse Alibabacloud_Cloudfw20171207::Client::createVpcFirewallCenConfigure(shared_ptr<CreateVpcFirewallCenConfigureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVpcFirewallCenConfigureWithOptions(request, runtime);
}

CreateVpcFirewallConfigureResponse Alibabacloud_Cloudfw20171207::Client::createVpcFirewallConfigureWithOptions(shared_ptr<CreateVpcFirewallConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSwitch)) {
    query->insert(pair<string, string>("FirewallSwitch", *request->firewallSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVpcCidrTableList)) {
    query->insert(pair<string, string>("LocalVpcCidrTableList", *request->localVpcCidrTableList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVpcId)) {
    query->insert(pair<string, string>("LocalVpcId", *request->localVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVpcRegion)) {
    query->insert(pair<string, string>("LocalVpcRegion", *request->localVpcRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->peerVpcCidrTableList)) {
    query->insert(pair<string, string>("PeerVpcCidrTableList", *request->peerVpcCidrTableList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->peerVpcId)) {
    query->insert(pair<string, string>("PeerVpcId", *request->peerVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->peerVpcRegion)) {
    query->insert(pair<string, string>("PeerVpcRegion", *request->peerVpcRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallName)) {
    query->insert(pair<string, string>("VpcFirewallName", *request->vpcFirewallName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpcFirewallConfigure"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVpcFirewallConfigureResponse(callApi(params, req, runtime));
}

CreateVpcFirewallConfigureResponse Alibabacloud_Cloudfw20171207::Client::createVpcFirewallConfigure(shared_ptr<CreateVpcFirewallConfigureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVpcFirewallConfigureWithOptions(request, runtime);
}

CreateVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::createVpcFirewallControlPolicyWithOptions(shared_ptr<CreateVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationName)) {
    query->insert(pair<string, string>("ApplicationName", *request->applicationName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationNameList)) {
    query->insert(pair<string, vector<string>>("ApplicationNameList", *request->applicationNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPort)) {
    query->insert(pair<string, string>("DestPort", *request->destPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortGroup)) {
    query->insert(pair<string, string>("DestPortGroup", *request->destPortGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortType)) {
    query->insert(pair<string, string>("DestPortType", *request->destPortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainResolveType)) {
    query->insert(pair<string, string>("DomainResolveType", *request->domainResolveType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newOrder)) {
    query->insert(pair<string, string>("NewOrder", *request->newOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->repeatDays)) {
    query->insert(pair<string, vector<long>>("RepeatDays", *request->repeatDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatEndTime)) {
    query->insert(pair<string, string>("RepeatEndTime", *request->repeatEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatStartTime)) {
    query->insert(pair<string, string>("RepeatStartTime", *request->repeatStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpcFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVpcFirewallControlPolicyResponse(callApi(params, req, runtime));
}

CreateVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::createVpcFirewallControlPolicy(shared_ptr<CreateVpcFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVpcFirewallControlPolicyWithOptions(request, runtime);
}

DeleteAddressBookResponse Alibabacloud_Cloudfw20171207::Client::deleteAddressBookWithOptions(shared_ptr<DeleteAddressBookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupUuid)) {
    query->insert(pair<string, string>("GroupUuid", *request->groupUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAddressBook"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAddressBookResponse(callApi(params, req, runtime));
}

DeleteAddressBookResponse Alibabacloud_Cloudfw20171207::Client::deleteAddressBook(shared_ptr<DeleteAddressBookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAddressBookWithOptions(request, runtime);
}

DeleteControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::deleteControlPolicyWithOptions(shared_ptr<DeleteControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteControlPolicyResponse(callApi(params, req, runtime));
}

DeleteControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::deleteControlPolicy(shared_ptr<DeleteControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteControlPolicyWithOptions(request, runtime);
}

DeleteControlPolicyTemplateResponse Alibabacloud_Cloudfw20171207::Client::deleteControlPolicyTemplateWithOptions(shared_ptr<DeleteControlPolicyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteControlPolicyTemplate"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteControlPolicyTemplateResponse(callApi(params, req, runtime));
}

DeleteControlPolicyTemplateResponse Alibabacloud_Cloudfw20171207::Client::deleteControlPolicyTemplate(shared_ptr<DeleteControlPolicyTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteControlPolicyTemplateWithOptions(request, runtime);
}

DeleteDownloadTaskResponse Alibabacloud_Cloudfw20171207::Client::deleteDownloadTaskWithOptions(shared_ptr<DeleteDownloadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDownloadTask"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDownloadTaskResponse(callApi(params, req, runtime));
}

DeleteDownloadTaskResponse Alibabacloud_Cloudfw20171207::Client::deleteDownloadTask(shared_ptr<DeleteDownloadTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDownloadTaskWithOptions(request, runtime);
}

DeleteFirewallV2RoutePoliciesResponse Alibabacloud_Cloudfw20171207::Client::deleteFirewallV2RoutePoliciesWithOptions(shared_ptr<DeleteFirewallV2RoutePoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trFirewallRoutePolicyId)) {
    query->insert(pair<string, string>("TrFirewallRoutePolicyId", *request->trFirewallRoutePolicyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFirewallV2RoutePolicies"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFirewallV2RoutePoliciesResponse(callApi(params, req, runtime));
}

DeleteFirewallV2RoutePoliciesResponse Alibabacloud_Cloudfw20171207::Client::deleteFirewallV2RoutePolicies(shared_ptr<DeleteFirewallV2RoutePoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFirewallV2RoutePoliciesWithOptions(request, runtime);
}

DeleteInstanceMembersResponse Alibabacloud_Cloudfw20171207::Client::deleteInstanceMembersWithOptions(shared_ptr<DeleteInstanceMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->memberUids)) {
    query->insert(pair<string, vector<long>>("MemberUids", *request->memberUids));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstanceMembers"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceMembersResponse(callApi(params, req, runtime));
}

DeleteInstanceMembersResponse Alibabacloud_Cloudfw20171207::Client::deleteInstanceMembers(shared_ptr<DeleteInstanceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceMembersWithOptions(request, runtime);
}

DeleteNatFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::deleteNatFirewallControlPolicyWithOptions(shared_ptr<DeleteNatFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNatFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNatFirewallControlPolicyResponse(callApi(params, req, runtime));
}

DeleteNatFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::deleteNatFirewallControlPolicy(shared_ptr<DeleteNatFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNatFirewallControlPolicyWithOptions(request, runtime);
}

DeleteNatFirewallControlPolicyBatchResponse Alibabacloud_Cloudfw20171207::Client::deleteNatFirewallControlPolicyBatchWithOptions(shared_ptr<DeleteNatFirewallControlPolicyBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->aclUuidList)) {
    query->insert(pair<string, vector<string>>("AclUuidList", *request->aclUuidList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNatFirewallControlPolicyBatch"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNatFirewallControlPolicyBatchResponse(callApi(params, req, runtime));
}

DeleteNatFirewallControlPolicyBatchResponse Alibabacloud_Cloudfw20171207::Client::deleteNatFirewallControlPolicyBatch(shared_ptr<DeleteNatFirewallControlPolicyBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNatFirewallControlPolicyBatchWithOptions(request, runtime);
}

DeleteSecurityProxyResponse Alibabacloud_Cloudfw20171207::Client::deleteSecurityProxyWithOptions(shared_ptr<DeleteSecurityProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyId)) {
    query->insert(pair<string, string>("ProxyId", *request->proxyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecurityProxy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSecurityProxyResponse(callApi(params, req, runtime));
}

DeleteSecurityProxyResponse Alibabacloud_Cloudfw20171207::Client::deleteSecurityProxy(shared_ptr<DeleteSecurityProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecurityProxyWithOptions(request, runtime);
}

DeleteTrFirewallV2Response Alibabacloud_Cloudfw20171207::Client::deleteTrFirewallV2WithOptions(shared_ptr<DeleteTrFirewallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrFirewallV2"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrFirewallV2Response(callApi(params, req, runtime));
}

DeleteTrFirewallV2Response Alibabacloud_Cloudfw20171207::Client::deleteTrFirewallV2(shared_ptr<DeleteTrFirewallV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrFirewallV2WithOptions(request, runtime);
}

DeleteVpcFirewallCenConfigureResponse Alibabacloud_Cloudfw20171207::Client::deleteVpcFirewallCenConfigureWithOptions(shared_ptr<DeleteVpcFirewallCenConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vpcFirewallIdList)) {
    query->insert(pair<string, vector<string>>("VpcFirewallIdList", *request->vpcFirewallIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpcFirewallCenConfigure"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVpcFirewallCenConfigureResponse(callApi(params, req, runtime));
}

DeleteVpcFirewallCenConfigureResponse Alibabacloud_Cloudfw20171207::Client::deleteVpcFirewallCenConfigure(shared_ptr<DeleteVpcFirewallCenConfigureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVpcFirewallCenConfigureWithOptions(request, runtime);
}

DeleteVpcFirewallConfigureResponse Alibabacloud_Cloudfw20171207::Client::deleteVpcFirewallConfigureWithOptions(shared_ptr<DeleteVpcFirewallConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vpcFirewallIdList)) {
    query->insert(pair<string, vector<string>>("VpcFirewallIdList", *request->vpcFirewallIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpcFirewallConfigure"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVpcFirewallConfigureResponse(callApi(params, req, runtime));
}

DeleteVpcFirewallConfigureResponse Alibabacloud_Cloudfw20171207::Client::deleteVpcFirewallConfigure(shared_ptr<DeleteVpcFirewallConfigureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVpcFirewallConfigureWithOptions(request, runtime);
}

DeleteVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::deleteVpcFirewallControlPolicyWithOptions(shared_ptr<DeleteVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpcFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVpcFirewallControlPolicyResponse(callApi(params, req, runtime));
}

DeleteVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::deleteVpcFirewallControlPolicy(shared_ptr<DeleteVpcFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVpcFirewallControlPolicyWithOptions(request, runtime);
}

DescribeACLProtectTrendResponse Alibabacloud_Cloudfw20171207::Client::describeACLProtectTrendWithOptions(shared_ptr<DescribeACLProtectTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeACLProtectTrend"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeACLProtectTrendResponse(callApi(params, req, runtime));
}

DescribeACLProtectTrendResponse Alibabacloud_Cloudfw20171207::Client::describeACLProtectTrend(shared_ptr<DescribeACLProtectTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeACLProtectTrendWithOptions(request, runtime);
}

DescribeAddressBookResponse Alibabacloud_Cloudfw20171207::Client::describeAddressBookWithOptions(shared_ptr<DescribeAddressBookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containPort)) {
    query->insert(pair<string, string>("ContainPort", *request->containPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAddressBook"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAddressBookResponse(callApi(params, req, runtime));
}

DescribeAddressBookResponse Alibabacloud_Cloudfw20171207::Client::describeAddressBook(shared_ptr<DescribeAddressBookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAddressBookWithOptions(request, runtime);
}

DescribeAssetListResponse Alibabacloud_Cloudfw20171207::Client::describeAssetListWithOptions(shared_ptr<DescribeAssetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memberUid)) {
    query->insert(pair<string, long>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceTag)) {
    query->insert(pair<string, string>("NewResourceTag", *request->newResourceTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outStatistic)) {
    query->insert(pair<string, string>("OutStatistic", *request->outStatistic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchItem)) {
    query->insert(pair<string, string>("SearchItem", *request->searchItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sensitiveStatus)) {
    query->insert(pair<string, string>("SensitiveStatus", *request->sensitiveStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sgStatus)) {
    query->insert(pair<string, string>("SgStatus", *request->sgStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAssetList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAssetListResponse(callApi(params, req, runtime));
}

DescribeAssetListResponse Alibabacloud_Cloudfw20171207::Client::describeAssetList(shared_ptr<DescribeAssetListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssetListWithOptions(request, runtime);
}

DescribeAssetRiskListResponse Alibabacloud_Cloudfw20171207::Client::describeAssetRiskListWithOptions(shared_ptr<DescribeAssetRiskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ipAddrList)) {
    query->insert(pair<string, vector<string>>("IpAddrList", *request->ipAddrList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipVersion)) {
    query->insert(pair<string, long>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAssetRiskList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAssetRiskListResponse(callApi(params, req, runtime));
}

DescribeAssetRiskListResponse Alibabacloud_Cloudfw20171207::Client::describeAssetRiskList(shared_ptr<DescribeAssetRiskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssetRiskListWithOptions(request, runtime);
}

DescribeAssetStatisticResponse Alibabacloud_Cloudfw20171207::Client::describeAssetStatisticWithOptions(shared_ptr<DescribeAssetStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAssetStatistic"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAssetStatisticResponse(callApi(params, req, runtime));
}

DescribeAssetStatisticResponse Alibabacloud_Cloudfw20171207::Client::describeAssetStatistic(shared_ptr<DescribeAssetStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAssetStatisticWithOptions(request, runtime);
}

DescribeCfwRiskLevelSummaryResponse Alibabacloud_Cloudfw20171207::Client::describeCfwRiskLevelSummaryWithOptions(shared_ptr<DescribeCfwRiskLevelSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCfwRiskLevelSummary"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCfwRiskLevelSummaryResponse(callApi(params, req, runtime));
}

DescribeCfwRiskLevelSummaryResponse Alibabacloud_Cloudfw20171207::Client::describeCfwRiskLevelSummary(shared_ptr<DescribeCfwRiskLevelSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCfwRiskLevelSummaryWithOptions(request, runtime);
}

DescribeControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::describeControlPolicyWithOptions(shared_ptr<DescribeControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeControlPolicyResponse(callApi(params, req, runtime));
}

DescribeControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::describeControlPolicy(shared_ptr<DescribeControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeControlPolicyWithOptions(request, runtime);
}

DescribeDefaultIPSConfigResponse Alibabacloud_Cloudfw20171207::Client::describeDefaultIPSConfigWithOptions(shared_ptr<DescribeDefaultIPSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDefaultIPSConfig"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDefaultIPSConfigResponse(callApi(params, req, runtime));
}

DescribeDefaultIPSConfigResponse Alibabacloud_Cloudfw20171207::Client::describeDefaultIPSConfig(shared_ptr<DescribeDefaultIPSConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDefaultIPSConfigWithOptions(request, runtime);
}

DescribeDomainResolveResponse Alibabacloud_Cloudfw20171207::Client::describeDomainResolveWithOptions(shared_ptr<DescribeDomainResolveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainResolve"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainResolveResponse(callApi(params, req, runtime));
}

DescribeDomainResolveResponse Alibabacloud_Cloudfw20171207::Client::describeDomainResolve(shared_ptr<DescribeDomainResolveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainResolveWithOptions(request, runtime);
}

DescribeDownloadTaskResponse Alibabacloud_Cloudfw20171207::Client::describeDownloadTaskWithOptions(shared_ptr<DescribeDownloadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadTask"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadTaskResponse(callApi(params, req, runtime));
}

DescribeDownloadTaskResponse Alibabacloud_Cloudfw20171207::Client::describeDownloadTask(shared_ptr<DescribeDownloadTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadTaskWithOptions(request, runtime);
}

DescribeDownloadTaskTypeResponse Alibabacloud_Cloudfw20171207::Client::describeDownloadTaskTypeWithOptions(shared_ptr<DescribeDownloadTaskTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadTaskType"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadTaskTypeResponse(callApi(params, req, runtime));
}

DescribeDownloadTaskTypeResponse Alibabacloud_Cloudfw20171207::Client::describeDownloadTaskType(shared_ptr<DescribeDownloadTaskTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadTaskTypeWithOptions(request, runtime);
}

DescribeInstanceMembersResponse Alibabacloud_Cloudfw20171207::Client::describeInstanceMembersWithOptions(shared_ptr<DescribeInstanceMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberDesc)) {
    query->insert(pair<string, string>("MemberDesc", *request->memberDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberDisplayName)) {
    query->insert(pair<string, string>("MemberDisplayName", *request->memberDisplayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceMembers"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceMembersResponse(callApi(params, req, runtime));
}

DescribeInstanceMembersResponse Alibabacloud_Cloudfw20171207::Client::describeInstanceMembers(shared_ptr<DescribeInstanceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceMembersWithOptions(request, runtime);
}

DescribeInstanceRiskLevelsResponse Alibabacloud_Cloudfw20171207::Client::describeInstanceRiskLevelsWithOptions(shared_ptr<DescribeInstanceRiskLevelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeInstanceRiskLevelsRequestInstances>>(request->instances)) {
    query->insert(pair<string, vector<DescribeInstanceRiskLevelsRequestInstances>>("Instances", *request->instances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceRiskLevels"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceRiskLevelsResponse(callApi(params, req, runtime));
}

DescribeInstanceRiskLevelsResponse Alibabacloud_Cloudfw20171207::Client::describeInstanceRiskLevels(shared_ptr<DescribeInstanceRiskLevelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceRiskLevelsWithOptions(request, runtime);
}

DescribeInternetOpenIpResponse Alibabacloud_Cloudfw20171207::Client::describeInternetOpenIpWithOptions(shared_ptr<DescribeInternetOpenIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetsInstanceId)) {
    query->insert(pair<string, string>("AssetsInstanceId", *request->assetsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assetsInstanceName)) {
    query->insert(pair<string, string>("AssetsInstanceName", *request->assetsInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assetsType)) {
    query->insert(pair<string, string>("AssetsType", *request->assetsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    query->insert(pair<string, string>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicIp)) {
    query->insert(pair<string, string>("PublicIp", *request->publicIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskLevel)) {
    query->insert(pair<string, string>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInternetOpenIp"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInternetOpenIpResponse(callApi(params, req, runtime));
}

DescribeInternetOpenIpResponse Alibabacloud_Cloudfw20171207::Client::describeInternetOpenIp(shared_ptr<DescribeInternetOpenIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInternetOpenIpWithOptions(request, runtime);
}

DescribeInternetTrafficTrendResponse Alibabacloud_Cloudfw20171207::Client::describeInternetTrafficTrendWithOptions(shared_ptr<DescribeInternetTrafficTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCode)) {
    query->insert(pair<string, string>("SourceCode", *request->sourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcPrivateIP)) {
    query->insert(pair<string, string>("SrcPrivateIP", *request->srcPrivateIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcPublicIP)) {
    query->insert(pair<string, string>("SrcPublicIP", *request->srcPublicIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficType)) {
    query->insert(pair<string, string>("TrafficType", *request->trafficType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInternetTrafficTrend"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInternetTrafficTrendResponse(callApi(params, req, runtime));
}

DescribeInternetTrafficTrendResponse Alibabacloud_Cloudfw20171207::Client::describeInternetTrafficTrend(shared_ptr<DescribeInternetTrafficTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInternetTrafficTrendWithOptions(request, runtime);
}

DescribeInvadeEventListResponse Alibabacloud_Cloudfw20171207::Client::describeInvadeEventListWithOptions(shared_ptr<DescribeInvadeEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetsIP)) {
    query->insert(pair<string, string>("AssetsIP", *request->assetsIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assetsInstanceId)) {
    query->insert(pair<string, string>("AssetsInstanceId", *request->assetsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assetsInstanceName)) {
    query->insert(pair<string, string>("AssetsInstanceName", *request->assetsInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventKey)) {
    query->insert(pair<string, string>("EventKey", *request->eventKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("EventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventUuid)) {
    query->insert(pair<string, string>("EventUuid", *request->eventUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isIgnore)) {
    query->insert(pair<string, string>("IsIgnore", *request->isIgnore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memberUid)) {
    query->insert(pair<string, long>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->processStatusList)) {
    query->insert(pair<string, vector<long>>("ProcessStatusList", *request->processStatusList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->riskLevel)) {
    query->insert(pair<string, vector<long>>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInvadeEventList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInvadeEventListResponse(callApi(params, req, runtime));
}

DescribeInvadeEventListResponse Alibabacloud_Cloudfw20171207::Client::describeInvadeEventList(shared_ptr<DescribeInvadeEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvadeEventListWithOptions(request, runtime);
}

DescribeNatAclPageStatusResponse Alibabacloud_Cloudfw20171207::Client::describeNatAclPageStatusWithOptions(shared_ptr<DescribeNatAclPageStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNatAclPageStatus"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNatAclPageStatusResponse(callApi(params, req, runtime));
}

DescribeNatAclPageStatusResponse Alibabacloud_Cloudfw20171207::Client::describeNatAclPageStatus(shared_ptr<DescribeNatAclPageStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNatAclPageStatusWithOptions(request, runtime);
}

DescribeNatFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::describeNatFirewallControlPolicyWithOptions(shared_ptr<DescribeNatFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNatFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNatFirewallControlPolicyResponse(callApi(params, req, runtime));
}

DescribeNatFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::describeNatFirewallControlPolicy(shared_ptr<DescribeNatFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNatFirewallControlPolicyWithOptions(request, runtime);
}

DescribeNatFirewallListResponse Alibabacloud_Cloudfw20171207::Client::describeNatFirewallListWithOptions(shared_ptr<DescribeNatFirewallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memberUid)) {
    query->insert(pair<string, long>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyId)) {
    query->insert(pair<string, string>("ProxyId", *request->proxyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyName)) {
    query->insert(pair<string, string>("ProxyName", *request->proxyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNatFirewallList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNatFirewallListResponse(callApi(params, req, runtime));
}

DescribeNatFirewallListResponse Alibabacloud_Cloudfw20171207::Client::describeNatFirewallList(shared_ptr<DescribeNatFirewallListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNatFirewallListWithOptions(request, runtime);
}

DescribeNatFirewallPolicyPriorUsedResponse Alibabacloud_Cloudfw20171207::Client::describeNatFirewallPolicyPriorUsedWithOptions(shared_ptr<DescribeNatFirewallPolicyPriorUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNatFirewallPolicyPriorUsed"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNatFirewallPolicyPriorUsedResponse(callApi(params, req, runtime));
}

DescribeNatFirewallPolicyPriorUsedResponse Alibabacloud_Cloudfw20171207::Client::describeNatFirewallPolicyPriorUsed(shared_ptr<DescribeNatFirewallPolicyPriorUsedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNatFirewallPolicyPriorUsedWithOptions(request, runtime);
}

DescribeOutgoingDestinationIPResponse Alibabacloud_Cloudfw20171207::Client::describeOutgoingDestinationIPWithOptions(shared_ptr<DescribeOutgoingDestinationIPRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationName)) {
    query->insert(pair<string, string>("ApplicationName", *request->applicationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    query->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstIP)) {
    query->insert(pair<string, string>("DstIP", *request->dstIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    query->insert(pair<string, string>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIP)) {
    query->insert(pair<string, string>("PrivateIP", *request->privateIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicIP)) {
    query->insert(pair<string, string>("PublicIP", *request->publicIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIdNew)) {
    query->insert(pair<string, string>("TagIdNew", *request->tagIdNew));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOutgoingDestinationIP"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOutgoingDestinationIPResponse(callApi(params, req, runtime));
}

DescribeOutgoingDestinationIPResponse Alibabacloud_Cloudfw20171207::Client::describeOutgoingDestinationIP(shared_ptr<DescribeOutgoingDestinationIPRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOutgoingDestinationIPWithOptions(request, runtime);
}

DescribeOutgoingDomainResponse Alibabacloud_Cloudfw20171207::Client::describeOutgoingDomainWithOptions(shared_ptr<DescribeOutgoingDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    query->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicIP)) {
    query->insert(pair<string, string>("PublicIP", *request->publicIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagIdNew)) {
    query->insert(pair<string, string>("TagIdNew", *request->tagIdNew));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOutgoingDomain"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOutgoingDomainResponse(callApi(params, req, runtime));
}

DescribeOutgoingDomainResponse Alibabacloud_Cloudfw20171207::Client::describeOutgoingDomain(shared_ptr<DescribeOutgoingDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOutgoingDomainWithOptions(request, runtime);
}

DescribePolicyAdvancedConfigResponse Alibabacloud_Cloudfw20171207::Client::describePolicyAdvancedConfigWithOptions(shared_ptr<DescribePolicyAdvancedConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyAdvancedConfig"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyAdvancedConfigResponse(callApi(params, req, runtime));
}

DescribePolicyAdvancedConfigResponse Alibabacloud_Cloudfw20171207::Client::describePolicyAdvancedConfig(shared_ptr<DescribePolicyAdvancedConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyAdvancedConfigWithOptions(request, runtime);
}

DescribePolicyPriorUsedResponse Alibabacloud_Cloudfw20171207::Client::describePolicyPriorUsedWithOptions(shared_ptr<DescribePolicyPriorUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePolicyPriorUsed"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePolicyPriorUsedResponse(callApi(params, req, runtime));
}

DescribePolicyPriorUsedResponse Alibabacloud_Cloudfw20171207::Client::describePolicyPriorUsed(shared_ptr<DescribePolicyPriorUsedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyPriorUsedWithOptions(request, runtime);
}

DescribePostpayTrafficDetailResponse Alibabacloud_Cloudfw20171207::Client::describePostpayTrafficDetailWithOptions(shared_ptr<DescribePostpayTrafficDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchItem)) {
    query->insert(pair<string, string>("SearchItem", *request->searchItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficType)) {
    query->insert(pair<string, string>("TrafficType", *request->trafficType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePostpayTrafficDetail"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePostpayTrafficDetailResponse(callApi(params, req, runtime));
}

DescribePostpayTrafficDetailResponse Alibabacloud_Cloudfw20171207::Client::describePostpayTrafficDetail(shared_ptr<DescribePostpayTrafficDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePostpayTrafficDetailWithOptions(request, runtime);
}

DescribePostpayTrafficTotalResponse Alibabacloud_Cloudfw20171207::Client::describePostpayTrafficTotalWithOptions(shared_ptr<DescribePostpayTrafficTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePostpayTrafficTotal"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePostpayTrafficTotalResponse(callApi(params, req, runtime));
}

DescribePostpayTrafficTotalResponse Alibabacloud_Cloudfw20171207::Client::describePostpayTrafficTotal(shared_ptr<DescribePostpayTrafficTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePostpayTrafficTotalWithOptions(request, runtime);
}

DescribePrefixListsResponse Alibabacloud_Cloudfw20171207::Client::describePrefixListsWithOptions(shared_ptr<DescribePrefixListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePrefixLists"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePrefixListsResponse(callApi(params, req, runtime));
}

DescribePrefixListsResponse Alibabacloud_Cloudfw20171207::Client::describePrefixLists(shared_ptr<DescribePrefixListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePrefixListsWithOptions(request, runtime);
}

DescribeRiskEventGroupResponse Alibabacloud_Cloudfw20171207::Client::describeRiskEventGroupWithOptions(shared_ptr<DescribeRiskEventGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->attackApp)) {
    query->insert(pair<string, vector<string>>("AttackApp", *request->attackApp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attackType)) {
    query->insert(pair<string, string>("AttackType", *request->attackType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buyVersion)) {
    query->insert(pair<string, long>("BuyVersion", *request->buyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    query->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstIP)) {
    query->insert(pair<string, string>("DstIP", *request->dstIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstNetworkInstanceId)) {
    query->insert(pair<string, string>("DstNetworkInstanceId", *request->dstNetworkInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("EventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallType)) {
    query->insert(pair<string, string>("FirewallType", *request->firewallType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isOnlyPrivateAssoc)) {
    query->insert(pair<string, string>("IsOnlyPrivateAssoc", *request->isOnlyPrivateAssoc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noLocation)) {
    query->insert(pair<string, string>("NoLocation", *request->noLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleResult)) {
    query->insert(pair<string, string>("RuleResult", *request->ruleResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleSource)) {
    query->insert(pair<string, string>("RuleSource", *request->ruleSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcIP)) {
    query->insert(pair<string, string>("SrcIP", *request->srcIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcNetworkInstanceId)) {
    query->insert(pair<string, string>("SrcNetworkInstanceId", *request->srcNetworkInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vulLevel)) {
    query->insert(pair<string, string>("VulLevel", *request->vulLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskEventGroup"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskEventGroupResponse(callApi(params, req, runtime));
}

DescribeRiskEventGroupResponse Alibabacloud_Cloudfw20171207::Client::describeRiskEventGroup(shared_ptr<DescribeRiskEventGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskEventGroupWithOptions(request, runtime);
}

DescribeRiskEventPayloadResponse Alibabacloud_Cloudfw20171207::Client::describeRiskEventPayloadWithOptions(shared_ptr<DescribeRiskEventPayloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dstIP)) {
    query->insert(pair<string, string>("DstIP", *request->dstIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstVpcId)) {
    query->insert(pair<string, string>("DstVpcId", *request->dstVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallType)) {
    query->insert(pair<string, string>("FirewallType", *request->firewallType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicIP)) {
    query->insert(pair<string, string>("PublicIP", *request->publicIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcIP)) {
    query->insert(pair<string, string>("SrcIP", *request->srcIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcVpcId)) {
    query->insert(pair<string, string>("SrcVpcId", *request->srcVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->UUID)) {
    query->insert(pair<string, string>("UUID", *request->UUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskEventPayload"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskEventPayloadResponse(callApi(params, req, runtime));
}

DescribeRiskEventPayloadResponse Alibabacloud_Cloudfw20171207::Client::describeRiskEventPayload(shared_ptr<DescribeRiskEventPayloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskEventPayloadWithOptions(request, runtime);
}

DescribeSignatureLibVersionResponse Alibabacloud_Cloudfw20171207::Client::describeSignatureLibVersionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSignatureLibVersion"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSignatureLibVersionResponse(callApi(params, req, runtime));
}

DescribeSignatureLibVersionResponse Alibabacloud_Cloudfw20171207::Client::describeSignatureLibVersion() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSignatureLibVersionWithOptions(runtime);
}

DescribeTrFirewallPolicyBackUpAssociationListResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallPolicyBackUpAssociationListWithOptions(shared_ptr<DescribeTrFirewallPolicyBackUpAssociationListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest> request = make_shared<DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DescribeTrFirewallPolicyBackUpAssociationListRequestCandidateList>>(tmpReq->candidateList)) {
    request->candidateListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->candidateList, make_shared<string>("CandidateList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->candidateListShrink)) {
    query->insert(pair<string, string>("CandidateList", *request->candidateListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trFirewallRoutePolicyId)) {
    query->insert(pair<string, string>("TrFirewallRoutePolicyId", *request->trFirewallRoutePolicyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrFirewallPolicyBackUpAssociationList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrFirewallPolicyBackUpAssociationListResponse(callApi(params, req, runtime));
}

DescribeTrFirewallPolicyBackUpAssociationListResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallPolicyBackUpAssociationList(shared_ptr<DescribeTrFirewallPolicyBackUpAssociationListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrFirewallPolicyBackUpAssociationListWithOptions(request, runtime);
}

DescribeTrFirewallV2RoutePolicyListResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallV2RoutePolicyListWithOptions(shared_ptr<DescribeTrFirewallV2RoutePolicyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrFirewallV2RoutePolicyList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrFirewallV2RoutePolicyListResponse(callApi(params, req, runtime));
}

DescribeTrFirewallV2RoutePolicyListResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallV2RoutePolicyList(shared_ptr<DescribeTrFirewallV2RoutePolicyListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrFirewallV2RoutePolicyListWithOptions(request, runtime);
}

DescribeTrFirewallsV2DetailResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallsV2DetailWithOptions(shared_ptr<DescribeTrFirewallsV2DetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrFirewallsV2Detail"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrFirewallsV2DetailResponse(callApi(params, req, runtime));
}

DescribeTrFirewallsV2DetailResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallsV2Detail(shared_ptr<DescribeTrFirewallsV2DetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrFirewallsV2DetailWithOptions(request, runtime);
}

DescribeTrFirewallsV2ListResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallsV2ListWithOptions(shared_ptr<DescribeTrFirewallsV2ListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallName)) {
    query->insert(pair<string, string>("FirewallName", *request->firewallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSwitchStatus)) {
    query->insert(pair<string, string>("FirewallSwitchStatus", *request->firewallSwitchStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeMode)) {
    query->insert(pair<string, string>("RouteMode", *request->routeMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transitRouterId)) {
    query->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrFirewallsV2List"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrFirewallsV2ListResponse(callApi(params, req, runtime));
}

DescribeTrFirewallsV2ListResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallsV2List(shared_ptr<DescribeTrFirewallsV2ListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrFirewallsV2ListWithOptions(request, runtime);
}

DescribeTrFirewallsV2RouteListResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallsV2RouteListWithOptions(shared_ptr<DescribeTrFirewallsV2RouteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trFirewallRoutePolicyId)) {
    query->insert(pair<string, string>("TrFirewallRoutePolicyId", *request->trFirewallRoutePolicyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrFirewallsV2RouteList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrFirewallsV2RouteListResponse(callApi(params, req, runtime));
}

DescribeTrFirewallsV2RouteListResponse Alibabacloud_Cloudfw20171207::Client::describeTrFirewallsV2RouteList(shared_ptr<DescribeTrFirewallsV2RouteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrFirewallsV2RouteListWithOptions(request, runtime);
}

DescribeUserAssetIPTrafficInfoResponse Alibabacloud_Cloudfw20171207::Client::describeUserAssetIPTrafficInfoWithOptions(shared_ptr<DescribeUserAssetIPTrafficInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserAssetIPTrafficInfo"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserAssetIPTrafficInfoResponse(callApi(params, req, runtime));
}

DescribeUserAssetIPTrafficInfoResponse Alibabacloud_Cloudfw20171207::Client::describeUserAssetIPTrafficInfo(shared_ptr<DescribeUserAssetIPTrafficInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserAssetIPTrafficInfoWithOptions(request, runtime);
}

DescribeUserBuyVersionResponse Alibabacloud_Cloudfw20171207::Client::describeUserBuyVersionWithOptions(shared_ptr<DescribeUserBuyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserBuyVersion"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserBuyVersionResponse(callApi(params, req, runtime));
}

DescribeUserBuyVersionResponse Alibabacloud_Cloudfw20171207::Client::describeUserBuyVersion(shared_ptr<DescribeUserBuyVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserBuyVersionWithOptions(request, runtime);
}

DescribeUserIPSWhitelistResponse Alibabacloud_Cloudfw20171207::Client::describeUserIPSWhitelistWithOptions(shared_ptr<DescribeUserIPSWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserIPSWhitelist"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserIPSWhitelistResponse(callApi(params, req, runtime));
}

DescribeUserIPSWhitelistResponse Alibabacloud_Cloudfw20171207::Client::describeUserIPSWhitelist(shared_ptr<DescribeUserIPSWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserIPSWhitelistWithOptions(request, runtime);
}

DescribeVpcFirewallAclGroupListResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallAclGroupListWithOptions(shared_ptr<DescribeVpcFirewallAclGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallConfigureStatus)) {
    query->insert(pair<string, string>("FirewallConfigureStatus", *request->firewallConfigureStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallAclGroupList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallAclGroupListResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallAclGroupListResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallAclGroupList(shared_ptr<DescribeVpcFirewallAclGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallAclGroupListWithOptions(request, runtime);
}

DescribeVpcFirewallCenDetailResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallCenDetailWithOptions(shared_ptr<DescribeVpcFirewallCenDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInstanceId)) {
    query->insert(pair<string, string>("NetworkInstanceId", *request->networkInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallCenDetail"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallCenDetailResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallCenDetailResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallCenDetail(shared_ptr<DescribeVpcFirewallCenDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallCenDetailWithOptions(request, runtime);
}

DescribeVpcFirewallCenListResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallCenListWithOptions(shared_ptr<DescribeVpcFirewallCenListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSwitchStatus)) {
    query->insert(pair<string, string>("FirewallSwitchStatus", *request->firewallSwitchStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkInstanceId)) {
    query->insert(pair<string, string>("NetworkInstanceId", *request->networkInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeMode)) {
    query->insert(pair<string, string>("RouteMode", *request->routeMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transitRouterType)) {
    query->insert(pair<string, string>("TransitRouterType", *request->transitRouterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallName)) {
    query->insert(pair<string, string>("VpcFirewallName", *request->vpcFirewallName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallCenList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallCenListResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallCenListResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallCenList(shared_ptr<DescribeVpcFirewallCenListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallCenListWithOptions(request, runtime);
}

DescribeVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallControlPolicyWithOptions(shared_ptr<DescribeVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallControlPolicyResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallControlPolicy(shared_ptr<DescribeVpcFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallControlPolicyWithOptions(request, runtime);
}

DescribeVpcFirewallDefaultIPSConfigResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallDefaultIPSConfigWithOptions(shared_ptr<DescribeVpcFirewallDefaultIPSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallDefaultIPSConfig"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallDefaultIPSConfigResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallDefaultIPSConfigResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallDefaultIPSConfig(shared_ptr<DescribeVpcFirewallDefaultIPSConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallDefaultIPSConfigWithOptions(request, runtime);
}

DescribeVpcFirewallDetailResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallDetailWithOptions(shared_ptr<DescribeVpcFirewallDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVpcId)) {
    query->insert(pair<string, string>("LocalVpcId", *request->localVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->peerVpcId)) {
    query->insert(pair<string, string>("PeerVpcId", *request->peerVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallDetail"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallDetailResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallDetailResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallDetail(shared_ptr<DescribeVpcFirewallDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallDetailWithOptions(request, runtime);
}

DescribeVpcFirewallIPSWhitelistResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallIPSWhitelistWithOptions(shared_ptr<DescribeVpcFirewallIPSWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memberUid)) {
    query->insert(pair<string, long>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallIPSWhitelist"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallIPSWhitelistResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallIPSWhitelistResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallIPSWhitelist(shared_ptr<DescribeVpcFirewallIPSWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallIPSWhitelistWithOptions(request, runtime);
}

DescribeVpcFirewallListResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallListWithOptions(shared_ptr<DescribeVpcFirewallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectSubType)) {
    query->insert(pair<string, string>("ConnectSubType", *request->connectSubType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSwitchStatus)) {
    query->insert(pair<string, string>("FirewallSwitchStatus", *request->firewallSwitchStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->peerUid)) {
    query->insert(pair<string, string>("PeerUid", *request->peerUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallName)) {
    query->insert(pair<string, string>("VpcFirewallName", *request->vpcFirewallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallListResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallListResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallList(shared_ptr<DescribeVpcFirewallListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallListWithOptions(request, runtime);
}

DescribeVpcFirewallPolicyPriorUsedResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallPolicyPriorUsedWithOptions(shared_ptr<DescribeVpcFirewallPolicyPriorUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcFirewallPolicyPriorUsed"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcFirewallPolicyPriorUsedResponse(callApi(params, req, runtime));
}

DescribeVpcFirewallPolicyPriorUsedResponse Alibabacloud_Cloudfw20171207::Client::describeVpcFirewallPolicyPriorUsed(shared_ptr<DescribeVpcFirewallPolicyPriorUsedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcFirewallPolicyPriorUsedWithOptions(request, runtime);
}

DescribeVpcListLiteResponse Alibabacloud_Cloudfw20171207::Client::describeVpcListLiteWithOptions(shared_ptr<DescribeVpcListLiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcName)) {
    query->insert(pair<string, string>("VpcName", *request->vpcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcListLite"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcListLiteResponse(callApi(params, req, runtime));
}

DescribeVpcListLiteResponse Alibabacloud_Cloudfw20171207::Client::describeVpcListLite(shared_ptr<DescribeVpcListLiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcListLiteWithOptions(request, runtime);
}

DescribeVpcZoneResponse Alibabacloud_Cloudfw20171207::Client::describeVpcZoneWithOptions(shared_ptr<DescribeVpcZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNo)) {
    query->insert(pair<string, string>("RegionNo", *request->regionNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcZone"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcZoneResponse(callApi(params, req, runtime));
}

DescribeVpcZoneResponse Alibabacloud_Cloudfw20171207::Client::describeVpcZone(shared_ptr<DescribeVpcZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcZoneWithOptions(request, runtime);
}

DescribeVulnerabilityProtectedListResponse Alibabacloud_Cloudfw20171207::Client::describeVulnerabilityProtectedListWithOptions(shared_ptr<DescribeVulnerabilityProtectedListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attackType)) {
    query->insert(pair<string, string>("AttackType", *request->attackType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buyVersion)) {
    query->insert(pair<string, long>("BuyVersion", *request->buyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortKey)) {
    query->insert(pair<string, string>("SortKey", *request->sortKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vulnCveName)) {
    query->insert(pair<string, string>("VulnCveName", *request->vulnCveName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vulnLevel)) {
    query->insert(pair<string, string>("VulnLevel", *request->vulnLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vulnResource)) {
    query->insert(pair<string, string>("VulnResource", *request->vulnResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vulnStatus)) {
    query->insert(pair<string, string>("VulnStatus", *request->vulnStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vulnType)) {
    query->insert(pair<string, string>("VulnType", *request->vulnType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVulnerabilityProtectedList"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVulnerabilityProtectedListResponse(callApi(params, req, runtime));
}

DescribeVulnerabilityProtectedListResponse Alibabacloud_Cloudfw20171207::Client::describeVulnerabilityProtectedList(shared_ptr<DescribeVulnerabilityProtectedListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVulnerabilityProtectedListWithOptions(request, runtime);
}

ModifyAddressBookResponse Alibabacloud_Cloudfw20171207::Client::modifyAddressBookWithOptions(shared_ptr<ModifyAddressBookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressList)) {
    query->insert(pair<string, string>("AddressList", *request->addressList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoAddTagEcs)) {
    query->insert(pair<string, string>("AutoAddTagEcs", *request->autoAddTagEcs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupUuid)) {
    query->insert(pair<string, string>("GroupUuid", *request->groupUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    query->insert(pair<string, string>("ModifyMode", *request->modifyMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyAddressBookRequestTagList>>(request->tagList)) {
    query->insert(pair<string, vector<ModifyAddressBookRequestTagList>>("TagList", *request->tagList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagRelation)) {
    query->insert(pair<string, string>("TagRelation", *request->tagRelation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAddressBook"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAddressBookResponse(callApi(params, req, runtime));
}

ModifyAddressBookResponse Alibabacloud_Cloudfw20171207::Client::modifyAddressBook(shared_ptr<ModifyAddressBookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAddressBookWithOptions(request, runtime);
}

ModifyControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::modifyControlPolicyWithOptions(shared_ptr<ModifyControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationName)) {
    query->insert(pair<string, string>("ApplicationName", *request->applicationName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationNameList)) {
    query->insert(pair<string, vector<string>>("ApplicationNameList", *request->applicationNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPort)) {
    query->insert(pair<string, string>("DestPort", *request->destPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortGroup)) {
    query->insert(pair<string, string>("DestPortGroup", *request->destPortGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortType)) {
    query->insert(pair<string, string>("DestPortType", *request->destPortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainResolveType)) {
    query->insert(pair<string, string>("DomainResolveType", *request->domainResolveType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->repeatDays)) {
    query->insert(pair<string, vector<long>>("RepeatDays", *request->repeatDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatEndTime)) {
    query->insert(pair<string, string>("RepeatEndTime", *request->repeatEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatStartTime)) {
    query->insert(pair<string, string>("RepeatStartTime", *request->repeatStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyControlPolicyResponse(callApi(params, req, runtime));
}

ModifyControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::modifyControlPolicy(shared_ptr<ModifyControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyControlPolicyWithOptions(request, runtime);
}

ModifyControlPolicyPositionResponse Alibabacloud_Cloudfw20171207::Client::modifyControlPolicyPositionWithOptions(shared_ptr<ModifyControlPolicyPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newOrder)) {
    query->insert(pair<string, string>("NewOrder", *request->newOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldOrder)) {
    query->insert(pair<string, string>("OldOrder", *request->oldOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyControlPolicyPosition"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyControlPolicyPositionResponse(callApi(params, req, runtime));
}

ModifyControlPolicyPositionResponse Alibabacloud_Cloudfw20171207::Client::modifyControlPolicyPosition(shared_ptr<ModifyControlPolicyPositionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyControlPolicyPositionWithOptions(request, runtime);
}

ModifyDefaultIPSConfigResponse Alibabacloud_Cloudfw20171207::Client::modifyDefaultIPSConfigWithOptions(shared_ptr<ModifyDefaultIPSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->basicRules)) {
    query->insert(pair<string, long>("BasicRules", *request->basicRules));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ctiRules)) {
    query->insert(pair<string, long>("CtiRules", *request->ctiRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSdl)) {
    query->insert(pair<string, long>("MaxSdl", *request->maxSdl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->patchRules)) {
    query->insert(pair<string, long>("PatchRules", *request->patchRules));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleClass)) {
    query->insert(pair<string, long>("RuleClass", *request->ruleClass));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->runMode)) {
    query->insert(pair<string, long>("RunMode", *request->runMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefaultIPSConfig"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDefaultIPSConfigResponse(callApi(params, req, runtime));
}

ModifyDefaultIPSConfigResponse Alibabacloud_Cloudfw20171207::Client::modifyDefaultIPSConfig(shared_ptr<ModifyDefaultIPSConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefaultIPSConfigWithOptions(request, runtime);
}

ModifyFirewallV2RoutePolicySwitchResponse Alibabacloud_Cloudfw20171207::Client::modifyFirewallV2RoutePolicySwitchWithOptions(shared_ptr<ModifyFirewallV2RoutePolicySwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shouldRecover)) {
    query->insert(pair<string, string>("ShouldRecover", *request->shouldRecover));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trFirewallRoutePolicyId)) {
    query->insert(pair<string, string>("TrFirewallRoutePolicyId", *request->trFirewallRoutePolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trFirewallRoutePolicySwitchStatus)) {
    query->insert(pair<string, string>("TrFirewallRoutePolicySwitchStatus", *request->trFirewallRoutePolicySwitchStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFirewallV2RoutePolicySwitch"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFirewallV2RoutePolicySwitchResponse(callApi(params, req, runtime));
}

ModifyFirewallV2RoutePolicySwitchResponse Alibabacloud_Cloudfw20171207::Client::modifyFirewallV2RoutePolicySwitch(shared_ptr<ModifyFirewallV2RoutePolicySwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFirewallV2RoutePolicySwitchWithOptions(request, runtime);
}

ModifyInstanceMemberAttributesResponse Alibabacloud_Cloudfw20171207::Client::modifyInstanceMemberAttributesWithOptions(shared_ptr<ModifyInstanceMemberAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyInstanceMemberAttributesRequestMembers>>(request->members)) {
    query->insert(pair<string, vector<ModifyInstanceMemberAttributesRequestMembers>>("Members", *request->members));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceMemberAttributes"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceMemberAttributesResponse(callApi(params, req, runtime));
}

ModifyInstanceMemberAttributesResponse Alibabacloud_Cloudfw20171207::Client::modifyInstanceMemberAttributes(shared_ptr<ModifyInstanceMemberAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceMemberAttributesWithOptions(request, runtime);
}

ModifyNatFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::modifyNatFirewallControlPolicyWithOptions(shared_ptr<ModifyNatFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationNameList)) {
    query->insert(pair<string, vector<string>>("ApplicationNameList", *request->applicationNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPort)) {
    query->insert(pair<string, string>("DestPort", *request->destPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortGroup)) {
    query->insert(pair<string, string>("DestPortGroup", *request->destPortGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortType)) {
    query->insert(pair<string, string>("DestPortType", *request->destPortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainResolveType)) {
    query->insert(pair<string, string>("DomainResolveType", *request->domainResolveType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->repeatDays)) {
    query->insert(pair<string, vector<long>>("RepeatDays", *request->repeatDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatEndTime)) {
    query->insert(pair<string, string>("RepeatEndTime", *request->repeatEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatStartTime)) {
    query->insert(pair<string, string>("RepeatStartTime", *request->repeatStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNatFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNatFirewallControlPolicyResponse(callApi(params, req, runtime));
}

ModifyNatFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::modifyNatFirewallControlPolicy(shared_ptr<ModifyNatFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNatFirewallControlPolicyWithOptions(request, runtime);
}

ModifyNatFirewallControlPolicyPositionResponse Alibabacloud_Cloudfw20171207::Client::modifyNatFirewallControlPolicyPositionWithOptions(shared_ptr<ModifyNatFirewallControlPolicyPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newOrder)) {
    query->insert(pair<string, long>("NewOrder", *request->newOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNatFirewallControlPolicyPosition"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNatFirewallControlPolicyPositionResponse(callApi(params, req, runtime));
}

ModifyNatFirewallControlPolicyPositionResponse Alibabacloud_Cloudfw20171207::Client::modifyNatFirewallControlPolicyPosition(shared_ptr<ModifyNatFirewallControlPolicyPositionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNatFirewallControlPolicyPositionWithOptions(request, runtime);
}

ModifyObjectGroupOperationResponse Alibabacloud_Cloudfw20171207::Client::modifyObjectGroupOperationWithOptions(shared_ptr<ModifyObjectGroupOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->objectList)) {
    query->insert(pair<string, vector<string>>("ObjectList", *request->objectList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectOperation)) {
    query->insert(pair<string, string>("ObjectOperation", *request->objectOperation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyObjectGroupOperation"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyObjectGroupOperationResponse(callApi(params, req, runtime));
}

ModifyObjectGroupOperationResponse Alibabacloud_Cloudfw20171207::Client::modifyObjectGroupOperation(shared_ptr<ModifyObjectGroupOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyObjectGroupOperationWithOptions(request, runtime);
}

ModifyPolicyAdvancedConfigResponse Alibabacloud_Cloudfw20171207::Client::modifyPolicyAdvancedConfigWithOptions(shared_ptr<ModifyPolicyAdvancedConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->eips)) {
    query->insert(pair<string, vector<string>>("Eips", *request->eips));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetSwitch)) {
    query->insert(pair<string, string>("InternetSwitch", *request->internetSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPolicyAdvancedConfig"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPolicyAdvancedConfigResponse(callApi(params, req, runtime));
}

ModifyPolicyAdvancedConfigResponse Alibabacloud_Cloudfw20171207::Client::modifyPolicyAdvancedConfig(shared_ptr<ModifyPolicyAdvancedConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolicyAdvancedConfigWithOptions(request, runtime);
}

ModifyTrFirewallV2ConfigurationResponse Alibabacloud_Cloudfw20171207::Client::modifyTrFirewallV2ConfigurationWithOptions(shared_ptr<ModifyTrFirewallV2ConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallName)) {
    query->insert(pair<string, string>("FirewallName", *request->firewallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTrFirewallV2Configuration"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTrFirewallV2ConfigurationResponse(callApi(params, req, runtime));
}

ModifyTrFirewallV2ConfigurationResponse Alibabacloud_Cloudfw20171207::Client::modifyTrFirewallV2Configuration(shared_ptr<ModifyTrFirewallV2ConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTrFirewallV2ConfigurationWithOptions(request, runtime);
}

ModifyTrFirewallV2RoutePolicyScopeResponse Alibabacloud_Cloudfw20171207::Client::modifyTrFirewallV2RoutePolicyScopeWithOptions(shared_ptr<ModifyTrFirewallV2RoutePolicyScopeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyTrFirewallV2RoutePolicyScopeShrinkRequest> request = make_shared<ModifyTrFirewallV2RoutePolicyScopeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ModifyTrFirewallV2RoutePolicyScopeRequestDestCandidateList>>(tmpReq->destCandidateList)) {
    request->destCandidateListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destCandidateList, make_shared<string>("DestCandidateList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyTrFirewallV2RoutePolicyScopeRequestSrcCandidateList>>(tmpReq->srcCandidateList)) {
    request->srcCandidateListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->srcCandidateList, make_shared<string>("SrcCandidateList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destCandidateListShrink)) {
    query->insert(pair<string, string>("DestCandidateList", *request->destCandidateListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallId)) {
    query->insert(pair<string, string>("FirewallId", *request->firewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shouldRecover)) {
    query->insert(pair<string, string>("ShouldRecover", *request->shouldRecover));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcCandidateListShrink)) {
    query->insert(pair<string, string>("SrcCandidateList", *request->srcCandidateListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trFirewallRoutePolicyId)) {
    query->insert(pair<string, string>("TrFirewallRoutePolicyId", *request->trFirewallRoutePolicyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTrFirewallV2RoutePolicyScope"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTrFirewallV2RoutePolicyScopeResponse(callApi(params, req, runtime));
}

ModifyTrFirewallV2RoutePolicyScopeResponse Alibabacloud_Cloudfw20171207::Client::modifyTrFirewallV2RoutePolicyScope(shared_ptr<ModifyTrFirewallV2RoutePolicyScopeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTrFirewallV2RoutePolicyScopeWithOptions(request, runtime);
}

ModifyUserIPSWhitelistResponse Alibabacloud_Cloudfw20171207::Client::modifyUserIPSWhitelistWithOptions(shared_ptr<ModifyUserIPSWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->direction)) {
    query->insert(pair<string, long>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listType)) {
    query->insert(pair<string, long>("ListType", *request->listType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listValue)) {
    query->insert(pair<string, string>("ListValue", *request->listValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->whiteType)) {
    query->insert(pair<string, long>("WhiteType", *request->whiteType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyUserIPSWhitelist"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyUserIPSWhitelistResponse(callApi(params, req, runtime));
}

ModifyUserIPSWhitelistResponse Alibabacloud_Cloudfw20171207::Client::modifyUserIPSWhitelist(shared_ptr<ModifyUserIPSWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserIPSWhitelistWithOptions(request, runtime);
}

ModifyVpcFirewallCenConfigureResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallCenConfigureWithOptions(shared_ptr<ModifyVpcFirewallCenConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallName)) {
    query->insert(pair<string, string>("VpcFirewallName", *request->vpcFirewallName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVpcFirewallCenConfigure"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVpcFirewallCenConfigureResponse(callApi(params, req, runtime));
}

ModifyVpcFirewallCenConfigureResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallCenConfigure(shared_ptr<ModifyVpcFirewallCenConfigureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcFirewallCenConfigureWithOptions(request, runtime);
}

ModifyVpcFirewallCenSwitchStatusResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallCenSwitchStatusWithOptions(shared_ptr<ModifyVpcFirewallCenSwitchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSwitch)) {
    query->insert(pair<string, string>("FirewallSwitch", *request->firewallSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVpcFirewallCenSwitchStatus"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVpcFirewallCenSwitchStatusResponse(callApi(params, req, runtime));
}

ModifyVpcFirewallCenSwitchStatusResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallCenSwitchStatus(shared_ptr<ModifyVpcFirewallCenSwitchStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcFirewallCenSwitchStatusWithOptions(request, runtime);
}

ModifyVpcFirewallConfigureResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallConfigureWithOptions(shared_ptr<ModifyVpcFirewallConfigureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localVpcCidrTableList)) {
    query->insert(pair<string, string>("LocalVpcCidrTableList", *request->localVpcCidrTableList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->peerVpcCidrTableList)) {
    query->insert(pair<string, string>("PeerVpcCidrTableList", *request->peerVpcCidrTableList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallName)) {
    query->insert(pair<string, string>("VpcFirewallName", *request->vpcFirewallName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVpcFirewallConfigure"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVpcFirewallConfigureResponse(callApi(params, req, runtime));
}

ModifyVpcFirewallConfigureResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallConfigure(shared_ptr<ModifyVpcFirewallConfigureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcFirewallConfigureWithOptions(request, runtime);
}

ModifyVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallControlPolicyWithOptions(shared_ptr<ModifyVpcFirewallControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclAction)) {
    query->insert(pair<string, string>("AclAction", *request->aclAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationName)) {
    query->insert(pair<string, string>("ApplicationName", *request->applicationName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->applicationNameList)) {
    query->insert(pair<string, vector<string>>("ApplicationNameList", *request->applicationNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPort)) {
    query->insert(pair<string, string>("DestPort", *request->destPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortGroup)) {
    query->insert(pair<string, string>("DestPortGroup", *request->destPortGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPortType)) {
    query->insert(pair<string, string>("DestPortType", *request->destPortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destination)) {
    query->insert(pair<string, string>("Destination", *request->destination));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationType)) {
    query->insert(pair<string, string>("DestinationType", *request->destinationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainResolveType)) {
    query->insert(pair<string, string>("DomainResolveType", *request->domainResolveType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proto)) {
    query->insert(pair<string, string>("Proto", *request->proto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->repeatDays)) {
    query->insert(pair<string, vector<long>>("RepeatDays", *request->repeatDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatEndTime)) {
    query->insert(pair<string, string>("RepeatEndTime", *request->repeatEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatStartTime)) {
    query->insert(pair<string, string>("RepeatStartTime", *request->repeatStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatType)) {
    query->insert(pair<string, string>("RepeatType", *request->repeatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVpcFirewallControlPolicy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVpcFirewallControlPolicyResponse(callApi(params, req, runtime));
}

ModifyVpcFirewallControlPolicyResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallControlPolicy(shared_ptr<ModifyVpcFirewallControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcFirewallControlPolicyWithOptions(request, runtime);
}

ModifyVpcFirewallControlPolicyPositionResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallControlPolicyPositionWithOptions(shared_ptr<ModifyVpcFirewallControlPolicyPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newOrder)) {
    query->insert(pair<string, string>("NewOrder", *request->newOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldOrder)) {
    query->insert(pair<string, string>("OldOrder", *request->oldOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVpcFirewallControlPolicyPosition"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVpcFirewallControlPolicyPositionResponse(callApi(params, req, runtime));
}

ModifyVpcFirewallControlPolicyPositionResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallControlPolicyPosition(shared_ptr<ModifyVpcFirewallControlPolicyPositionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcFirewallControlPolicyPositionWithOptions(request, runtime);
}

ModifyVpcFirewallDefaultIPSConfigResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallDefaultIPSConfigWithOptions(shared_ptr<ModifyVpcFirewallDefaultIPSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->basicRules)) {
    query->insert(pair<string, string>("BasicRules", *request->basicRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableAllPatch)) {
    query->insert(pair<string, string>("EnableAllPatch", *request->enableAllPatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleClass)) {
    query->insert(pair<string, string>("RuleClass", *request->ruleClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runMode)) {
    query->insert(pair<string, string>("RunMode", *request->runMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVpcFirewallDefaultIPSConfig"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVpcFirewallDefaultIPSConfigResponse(callApi(params, req, runtime));
}

ModifyVpcFirewallDefaultIPSConfigResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallDefaultIPSConfig(shared_ptr<ModifyVpcFirewallDefaultIPSConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcFirewallDefaultIPSConfigWithOptions(request, runtime);
}

ModifyVpcFirewallIPSWhitelistResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallIPSWhitelistWithOptions(shared_ptr<ModifyVpcFirewallIPSWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listType)) {
    query->insert(pair<string, long>("ListType", *request->listType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listValue)) {
    query->insert(pair<string, string>("ListValue", *request->listValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memberUid)) {
    query->insert(pair<string, long>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->whiteType)) {
    query->insert(pair<string, long>("WhiteType", *request->whiteType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVpcFirewallIPSWhitelist"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVpcFirewallIPSWhitelistResponse(callApi(params, req, runtime));
}

ModifyVpcFirewallIPSWhitelistResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallIPSWhitelist(shared_ptr<ModifyVpcFirewallIPSWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcFirewallIPSWhitelistWithOptions(request, runtime);
}

ModifyVpcFirewallSwitchStatusResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallSwitchStatusWithOptions(shared_ptr<ModifyVpcFirewallSwitchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firewallSwitch)) {
    query->insert(pair<string, string>("FirewallSwitch", *request->firewallSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcFirewallId)) {
    query->insert(pair<string, string>("VpcFirewallId", *request->vpcFirewallId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVpcFirewallSwitchStatus"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVpcFirewallSwitchStatusResponse(callApi(params, req, runtime));
}

ModifyVpcFirewallSwitchStatusResponse Alibabacloud_Cloudfw20171207::Client::modifyVpcFirewallSwitchStatus(shared_ptr<ModifyVpcFirewallSwitchStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVpcFirewallSwitchStatusWithOptions(request, runtime);
}

PutDisableAllFwSwitchResponse Alibabacloud_Cloudfw20171207::Client::putDisableAllFwSwitchWithOptions(shared_ptr<PutDisableAllFwSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutDisableAllFwSwitch"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutDisableAllFwSwitchResponse(callApi(params, req, runtime));
}

PutDisableAllFwSwitchResponse Alibabacloud_Cloudfw20171207::Client::putDisableAllFwSwitch(shared_ptr<PutDisableAllFwSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putDisableAllFwSwitchWithOptions(request, runtime);
}

PutDisableFwSwitchResponse Alibabacloud_Cloudfw20171207::Client::putDisableFwSwitchWithOptions(shared_ptr<PutDisableFwSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ipaddrList)) {
    query->insert(pair<string, vector<string>>("IpaddrList", *request->ipaddrList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->regionList)) {
    query->insert(pair<string, vector<string>>("RegionList", *request->regionList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceTypeList)) {
    query->insert(pair<string, vector<string>>("ResourceTypeList", *request->resourceTypeList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutDisableFwSwitch"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutDisableFwSwitchResponse(callApi(params, req, runtime));
}

PutDisableFwSwitchResponse Alibabacloud_Cloudfw20171207::Client::putDisableFwSwitch(shared_ptr<PutDisableFwSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putDisableFwSwitchWithOptions(request, runtime);
}

PutEnableAllFwSwitchResponse Alibabacloud_Cloudfw20171207::Client::putEnableAllFwSwitchWithOptions(shared_ptr<PutEnableAllFwSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutEnableAllFwSwitch"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutEnableAllFwSwitchResponse(callApi(params, req, runtime));
}

PutEnableAllFwSwitchResponse Alibabacloud_Cloudfw20171207::Client::putEnableAllFwSwitch(shared_ptr<PutEnableAllFwSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putEnableAllFwSwitchWithOptions(request, runtime);
}

PutEnableFwSwitchResponse Alibabacloud_Cloudfw20171207::Client::putEnableFwSwitchWithOptions(shared_ptr<PutEnableFwSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ipaddrList)) {
    query->insert(pair<string, vector<string>>("IpaddrList", *request->ipaddrList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->regionList)) {
    query->insert(pair<string, vector<string>>("RegionList", *request->regionList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceTypeList)) {
    query->insert(pair<string, vector<string>>("ResourceTypeList", *request->resourceTypeList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutEnableFwSwitch"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutEnableFwSwitchResponse(callApi(params, req, runtime));
}

PutEnableFwSwitchResponse Alibabacloud_Cloudfw20171207::Client::putEnableFwSwitch(shared_ptr<PutEnableFwSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putEnableFwSwitchWithOptions(request, runtime);
}

ReleasePostInstanceResponse Alibabacloud_Cloudfw20171207::Client::releasePostInstanceWithOptions(shared_ptr<ReleasePostInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleasePostInstance"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleasePostInstanceResponse(callApi(params, req, runtime));
}

ReleasePostInstanceResponse Alibabacloud_Cloudfw20171207::Client::releasePostInstance(shared_ptr<ReleasePostInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releasePostInstanceWithOptions(request, runtime);
}

ResetNatFirewallRuleHitCountResponse Alibabacloud_Cloudfw20171207::Client::resetNatFirewallRuleHitCountWithOptions(shared_ptr<ResetNatFirewallRuleHitCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetNatFirewallRuleHitCount"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetNatFirewallRuleHitCountResponse(callApi(params, req, runtime));
}

ResetNatFirewallRuleHitCountResponse Alibabacloud_Cloudfw20171207::Client::resetNatFirewallRuleHitCount(shared_ptr<ResetNatFirewallRuleHitCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetNatFirewallRuleHitCountWithOptions(request, runtime);
}

ResetVpcFirewallRuleHitCountResponse Alibabacloud_Cloudfw20171207::Client::resetVpcFirewallRuleHitCountWithOptions(shared_ptr<ResetVpcFirewallRuleHitCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclUuid)) {
    query->insert(pair<string, string>("AclUuid", *request->aclUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetVpcFirewallRuleHitCount"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetVpcFirewallRuleHitCountResponse(callApi(params, req, runtime));
}

ResetVpcFirewallRuleHitCountResponse Alibabacloud_Cloudfw20171207::Client::resetVpcFirewallRuleHitCount(shared_ptr<ResetVpcFirewallRuleHitCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetVpcFirewallRuleHitCountWithOptions(request, runtime);
}

SwitchSecurityProxyResponse Alibabacloud_Cloudfw20171207::Client::switchSecurityProxyWithOptions(shared_ptr<SwitchSecurityProxyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyId)) {
    query->insert(pair<string, string>("ProxyId", *request->proxyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switch_)) {
    query->insert(pair<string, string>("Switch_", *request->switch_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchSecurityProxy"))},
    {"version", boost::any(string("2017-12-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchSecurityProxyResponse(callApi(params, req, runtime));
}

SwitchSecurityProxyResponse Alibabacloud_Cloudfw20171207::Client::switchSecurityProxy(shared_ptr<SwitchSecurityProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchSecurityProxyWithOptions(request, runtime);
}

