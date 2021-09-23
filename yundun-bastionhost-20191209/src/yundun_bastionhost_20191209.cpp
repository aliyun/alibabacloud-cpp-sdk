// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/yundun_bastionhost_20191209.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Yundun-bastionhost20191209;

Alibabacloud_Yundun-bastionhost20191209::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("yundun-bastionhost"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Yundun-bastionhost20191209::Client::getEndpoint(shared_ptr<string> productId,
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

AddHostsToGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::addHostsToGroupWithOptions(shared_ptr<AddHostsToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddHostsToGroupResponse(doRPCRequest(make_shared<string>("AddHostsToGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddHostsToGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::addHostsToGroup(shared_ptr<AddHostsToGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addHostsToGroupWithOptions(request, runtime);
}

AddUsersToGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::addUsersToGroupWithOptions(shared_ptr<AddUsersToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddUsersToGroupResponse(doRPCRequest(make_shared<string>("AddUsersToGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddUsersToGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::addUsersToGroup(shared_ptr<AddUsersToGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUsersToGroupWithOptions(request, runtime);
}

AttachHostAccountsToUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::attachHostAccountsToUserWithOptions(shared_ptr<AttachHostAccountsToUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachHostAccountsToUserResponse(doRPCRequest(make_shared<string>("AttachHostAccountsToUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachHostAccountsToUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::attachHostAccountsToUser(shared_ptr<AttachHostAccountsToUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachHostAccountsToUserWithOptions(request, runtime);
}

AttachHostAccountsToUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::attachHostAccountsToUserGroupWithOptions(shared_ptr<AttachHostAccountsToUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachHostAccountsToUserGroupResponse(doRPCRequest(make_shared<string>("AttachHostAccountsToUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachHostAccountsToUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::attachHostAccountsToUserGroup(shared_ptr<AttachHostAccountsToUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachHostAccountsToUserGroupWithOptions(request, runtime);
}

AttachHostGroupAccountsToUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::attachHostGroupAccountsToUserWithOptions(shared_ptr<AttachHostGroupAccountsToUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachHostGroupAccountsToUserResponse(doRPCRequest(make_shared<string>("AttachHostGroupAccountsToUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachHostGroupAccountsToUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::attachHostGroupAccountsToUser(shared_ptr<AttachHostGroupAccountsToUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachHostGroupAccountsToUserWithOptions(request, runtime);
}

AttachHostGroupAccountsToUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::attachHostGroupAccountsToUserGroupWithOptions(shared_ptr<AttachHostGroupAccountsToUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachHostGroupAccountsToUserGroupResponse(doRPCRequest(make_shared<string>("AttachHostGroupAccountsToUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachHostGroupAccountsToUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::attachHostGroupAccountsToUserGroup(shared_ptr<AttachHostGroupAccountsToUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachHostGroupAccountsToUserGroupWithOptions(request, runtime);
}

ConfigInstanceSecurityGroupsResponse Alibabacloud_Yundun-bastionhost20191209::Client::configInstanceSecurityGroupsWithOptions(shared_ptr<ConfigInstanceSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConfigInstanceSecurityGroupsResponse(doRPCRequest(make_shared<string>("ConfigInstanceSecurityGroups"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConfigInstanceSecurityGroupsResponse Alibabacloud_Yundun-bastionhost20191209::Client::configInstanceSecurityGroups(shared_ptr<ConfigInstanceSecurityGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configInstanceSecurityGroupsWithOptions(request, runtime);
}

ConfigInstanceWhiteListResponse Alibabacloud_Yundun-bastionhost20191209::Client::configInstanceWhiteListWithOptions(shared_ptr<ConfigInstanceWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConfigInstanceWhiteListResponse(doRPCRequest(make_shared<string>("ConfigInstanceWhiteList"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConfigInstanceWhiteListResponse Alibabacloud_Yundun-bastionhost20191209::Client::configInstanceWhiteList(shared_ptr<ConfigInstanceWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configInstanceWhiteListWithOptions(request, runtime);
}

CreateHostResponse Alibabacloud_Yundun-bastionhost20191209::Client::createHostWithOptions(shared_ptr<CreateHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateHostResponse(doRPCRequest(make_shared<string>("CreateHost"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHostResponse Alibabacloud_Yundun-bastionhost20191209::Client::createHost(shared_ptr<CreateHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHostWithOptions(request, runtime);
}

CreateHostAccountResponse Alibabacloud_Yundun-bastionhost20191209::Client::createHostAccountWithOptions(shared_ptr<CreateHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateHostAccountResponse(doRPCRequest(make_shared<string>("CreateHostAccount"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHostAccountResponse Alibabacloud_Yundun-bastionhost20191209::Client::createHostAccount(shared_ptr<CreateHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHostAccountWithOptions(request, runtime);
}

CreateHostGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::createHostGroupWithOptions(shared_ptr<CreateHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateHostGroupResponse(doRPCRequest(make_shared<string>("CreateHostGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateHostGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::createHostGroup(shared_ptr<CreateHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHostGroupWithOptions(request, runtime);
}

CreateUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUserResponse(doRPCRequest(make_shared<string>("CreateUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::createUser(shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserWithOptions(request, runtime);
}

CreateUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUserGroupResponse(doRPCRequest(make_shared<string>("CreateUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::createUserGroup(shared_ptr<CreateUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserGroupWithOptions(request, runtime);
}

DeleteHostResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteHostWithOptions(shared_ptr<DeleteHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteHostResponse(doRPCRequest(make_shared<string>("DeleteHost"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteHostResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteHost(shared_ptr<DeleteHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHostWithOptions(request, runtime);
}

DeleteHostAccountResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteHostAccountWithOptions(shared_ptr<DeleteHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteHostAccountResponse(doRPCRequest(make_shared<string>("DeleteHostAccount"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteHostAccountResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteHostAccount(shared_ptr<DeleteHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHostAccountWithOptions(request, runtime);
}

DeleteHostGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteHostGroupWithOptions(shared_ptr<DeleteHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteHostGroupResponse(doRPCRequest(make_shared<string>("DeleteHostGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteHostGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteHostGroup(shared_ptr<DeleteHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHostGroupWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUserResponse(doRPCRequest(make_shared<string>("DeleteUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DeleteUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteUserGroupResponse(doRPCRequest(make_shared<string>("DeleteUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserGroupWithOptions(request, runtime);
}

DescribeInstanceAttributeResponse Alibabacloud_Yundun-bastionhost20191209::Client::describeInstanceAttributeWithOptions(shared_ptr<DescribeInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceAttributeResponse(doRPCRequest(make_shared<string>("DescribeInstanceAttribute"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceAttributeResponse Alibabacloud_Yundun-bastionhost20191209::Client::describeInstanceAttribute(shared_ptr<DescribeInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceAttributeWithOptions(request, runtime);
}

DescribeInstancesResponse Alibabacloud_Yundun-bastionhost20191209::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstancesResponse(doRPCRequest(make_shared<string>("DescribeInstances"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstancesResponse Alibabacloud_Yundun-bastionhost20191209::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstancesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Yundun-bastionhost20191209::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Yundun-bastionhost20191209::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DetachHostAccountsFromUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::detachHostAccountsFromUserWithOptions(shared_ptr<DetachHostAccountsFromUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachHostAccountsFromUserResponse(doRPCRequest(make_shared<string>("DetachHostAccountsFromUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachHostAccountsFromUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::detachHostAccountsFromUser(shared_ptr<DetachHostAccountsFromUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachHostAccountsFromUserWithOptions(request, runtime);
}

DetachHostAccountsFromUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::detachHostAccountsFromUserGroupWithOptions(shared_ptr<DetachHostAccountsFromUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachHostAccountsFromUserGroupResponse(doRPCRequest(make_shared<string>("DetachHostAccountsFromUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachHostAccountsFromUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::detachHostAccountsFromUserGroup(shared_ptr<DetachHostAccountsFromUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachHostAccountsFromUserGroupWithOptions(request, runtime);
}

DetachHostGroupAccountsFromUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::detachHostGroupAccountsFromUserWithOptions(shared_ptr<DetachHostGroupAccountsFromUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachHostGroupAccountsFromUserResponse(doRPCRequest(make_shared<string>("DetachHostGroupAccountsFromUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachHostGroupAccountsFromUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::detachHostGroupAccountsFromUser(shared_ptr<DetachHostGroupAccountsFromUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachHostGroupAccountsFromUserWithOptions(request, runtime);
}

DetachHostGroupAccountsFromUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::detachHostGroupAccountsFromUserGroupWithOptions(shared_ptr<DetachHostGroupAccountsFromUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetachHostGroupAccountsFromUserGroupResponse(doRPCRequest(make_shared<string>("DetachHostGroupAccountsFromUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetachHostGroupAccountsFromUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::detachHostGroupAccountsFromUserGroup(shared_ptr<DetachHostGroupAccountsFromUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachHostGroupAccountsFromUserGroupWithOptions(request, runtime);
}

DisableInstancePublicAccessResponse Alibabacloud_Yundun-bastionhost20191209::Client::disableInstancePublicAccessWithOptions(shared_ptr<DisableInstancePublicAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableInstancePublicAccessResponse(doRPCRequest(make_shared<string>("DisableInstancePublicAccess"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableInstancePublicAccessResponse Alibabacloud_Yundun-bastionhost20191209::Client::disableInstancePublicAccess(shared_ptr<DisableInstancePublicAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableInstancePublicAccessWithOptions(request, runtime);
}

EnableInstancePublicAccessResponse Alibabacloud_Yundun-bastionhost20191209::Client::enableInstancePublicAccessWithOptions(shared_ptr<EnableInstancePublicAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableInstancePublicAccessResponse(doRPCRequest(make_shared<string>("EnableInstancePublicAccess"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableInstancePublicAccessResponse Alibabacloud_Yundun-bastionhost20191209::Client::enableInstancePublicAccess(shared_ptr<EnableInstancePublicAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableInstancePublicAccessWithOptions(request, runtime);
}

GetHostResponse Alibabacloud_Yundun-bastionhost20191209::Client::getHostWithOptions(shared_ptr<GetHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHostResponse(doRPCRequest(make_shared<string>("GetHost"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHostResponse Alibabacloud_Yundun-bastionhost20191209::Client::getHost(shared_ptr<GetHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHostWithOptions(request, runtime);
}

GetHostAccountResponse Alibabacloud_Yundun-bastionhost20191209::Client::getHostAccountWithOptions(shared_ptr<GetHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHostAccountResponse(doRPCRequest(make_shared<string>("GetHostAccount"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHostAccountResponse Alibabacloud_Yundun-bastionhost20191209::Client::getHostAccount(shared_ptr<GetHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHostAccountWithOptions(request, runtime);
}

GetHostGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::getHostGroupWithOptions(shared_ptr<GetHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHostGroupResponse(doRPCRequest(make_shared<string>("GetHostGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHostGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::getHostGroup(shared_ptr<GetHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHostGroupWithOptions(request, runtime);
}

GetInstanceUpgradeInfoResponse Alibabacloud_Yundun-bastionhost20191209::Client::getInstanceUpgradeInfoWithOptions(shared_ptr<GetInstanceUpgradeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceUpgradeInfoResponse(doRPCRequest(make_shared<string>("GetInstanceUpgradeInfo"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceUpgradeInfoResponse Alibabacloud_Yundun-bastionhost20191209::Client::getInstanceUpgradeInfo(shared_ptr<GetInstanceUpgradeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceUpgradeInfoWithOptions(request, runtime);
}

GetUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserResponse(doRPCRequest(make_shared<string>("GetUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

GetUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::getUserGroupWithOptions(shared_ptr<GetUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserGroupResponse(doRPCRequest(make_shared<string>("GetUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::getUserGroup(shared_ptr<GetUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserGroupWithOptions(request, runtime);
}

ListHostAccountsResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostAccountsWithOptions(shared_ptr<ListHostAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostAccountsResponse(doRPCRequest(make_shared<string>("ListHostAccounts"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostAccountsResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostAccounts(shared_ptr<ListHostAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostAccountsWithOptions(request, runtime);
}

ListHostAccountsForUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostAccountsForUserWithOptions(shared_ptr<ListHostAccountsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostAccountsForUserResponse(doRPCRequest(make_shared<string>("ListHostAccountsForUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostAccountsForUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostAccountsForUser(shared_ptr<ListHostAccountsForUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostAccountsForUserWithOptions(request, runtime);
}

ListHostAccountsForUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostAccountsForUserGroupWithOptions(shared_ptr<ListHostAccountsForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostAccountsForUserGroupResponse(doRPCRequest(make_shared<string>("ListHostAccountsForUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostAccountsForUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostAccountsForUserGroup(shared_ptr<ListHostAccountsForUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostAccountsForUserGroupWithOptions(request, runtime);
}

ListHostGroupAccountNamesForUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupAccountNamesForUserWithOptions(shared_ptr<ListHostGroupAccountNamesForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostGroupAccountNamesForUserResponse(doRPCRequest(make_shared<string>("ListHostGroupAccountNamesForUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostGroupAccountNamesForUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupAccountNamesForUser(shared_ptr<ListHostGroupAccountNamesForUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostGroupAccountNamesForUserWithOptions(request, runtime);
}

ListHostGroupAccountNamesForUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupAccountNamesForUserGroupWithOptions(shared_ptr<ListHostGroupAccountNamesForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostGroupAccountNamesForUserGroupResponse(doRPCRequest(make_shared<string>("ListHostGroupAccountNamesForUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostGroupAccountNamesForUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupAccountNamesForUserGroup(shared_ptr<ListHostGroupAccountNamesForUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostGroupAccountNamesForUserGroupWithOptions(request, runtime);
}

ListHostGroupsResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupsWithOptions(shared_ptr<ListHostGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostGroupsResponse(doRPCRequest(make_shared<string>("ListHostGroups"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostGroupsResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroups(shared_ptr<ListHostGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostGroupsWithOptions(request, runtime);
}

ListHostGroupsForUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupsForUserWithOptions(shared_ptr<ListHostGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostGroupsForUserResponse(doRPCRequest(make_shared<string>("ListHostGroupsForUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostGroupsForUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupsForUser(shared_ptr<ListHostGroupsForUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostGroupsForUserWithOptions(request, runtime);
}

ListHostGroupsForUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupsForUserGroupWithOptions(shared_ptr<ListHostGroupsForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostGroupsForUserGroupResponse(doRPCRequest(make_shared<string>("ListHostGroupsForUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostGroupsForUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostGroupsForUserGroup(shared_ptr<ListHostGroupsForUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostGroupsForUserGroupWithOptions(request, runtime);
}

ListHostsResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostsWithOptions(shared_ptr<ListHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostsResponse(doRPCRequest(make_shared<string>("ListHosts"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostsResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHosts(shared_ptr<ListHostsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostsWithOptions(request, runtime);
}

ListHostsForUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostsForUserWithOptions(shared_ptr<ListHostsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostsForUserResponse(doRPCRequest(make_shared<string>("ListHostsForUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostsForUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostsForUser(shared_ptr<ListHostsForUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostsForUserWithOptions(request, runtime);
}

ListHostsForUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostsForUserGroupWithOptions(shared_ptr<ListHostsForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHostsForUserGroupResponse(doRPCRequest(make_shared<string>("ListHostsForUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHostsForUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::listHostsForUserGroup(shared_ptr<ListHostsForUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHostsForUserGroupWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_Yundun-bastionhost20191209::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagKeysResponse(doRPCRequest(make_shared<string>("ListTagKeys"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagKeysResponse Alibabacloud_Yundun-bastionhost20191209::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Yundun-bastionhost20191209::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Yundun-bastionhost20191209::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListUserGroupsResponse Alibabacloud_Yundun-bastionhost20191209::Client::listUserGroupsWithOptions(shared_ptr<ListUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUserGroupsResponse(doRPCRequest(make_shared<string>("ListUserGroups"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUserGroupsResponse Alibabacloud_Yundun-bastionhost20191209::Client::listUserGroups(shared_ptr<ListUserGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGroupsWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Yundun-bastionhost20191209::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_Yundun-bastionhost20191209::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

LockUsersResponse Alibabacloud_Yundun-bastionhost20191209::Client::lockUsersWithOptions(shared_ptr<LockUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LockUsersResponse(doRPCRequest(make_shared<string>("LockUsers"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LockUsersResponse Alibabacloud_Yundun-bastionhost20191209::Client::lockUsers(shared_ptr<LockUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockUsersWithOptions(request, runtime);
}

ModifyHostResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostWithOptions(shared_ptr<ModifyHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHostResponse(doRPCRequest(make_shared<string>("ModifyHost"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHostResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHost(shared_ptr<ModifyHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHostWithOptions(request, runtime);
}

ModifyHostAccountResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostAccountWithOptions(shared_ptr<ModifyHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHostAccountResponse(doRPCRequest(make_shared<string>("ModifyHostAccount"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHostAccountResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostAccount(shared_ptr<ModifyHostAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHostAccountWithOptions(request, runtime);
}

ModifyHostGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostGroupWithOptions(shared_ptr<ModifyHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHostGroupResponse(doRPCRequest(make_shared<string>("ModifyHostGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHostGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostGroup(shared_ptr<ModifyHostGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHostGroupWithOptions(request, runtime);
}

ModifyHostsActiveAddressTypeResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostsActiveAddressTypeWithOptions(shared_ptr<ModifyHostsActiveAddressTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHostsActiveAddressTypeResponse(doRPCRequest(make_shared<string>("ModifyHostsActiveAddressType"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHostsActiveAddressTypeResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostsActiveAddressType(shared_ptr<ModifyHostsActiveAddressTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHostsActiveAddressTypeWithOptions(request, runtime);
}

ModifyHostsPortResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostsPortWithOptions(shared_ptr<ModifyHostsPortRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyHostsPortResponse(doRPCRequest(make_shared<string>("ModifyHostsPort"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyHostsPortResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyHostsPort(shared_ptr<ModifyHostsPortRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyHostsPortWithOptions(request, runtime);
}

ModifyInstanceAttributeResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyInstanceAttributeWithOptions(shared_ptr<ModifyInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceAttributeResponse(doRPCRequest(make_shared<string>("ModifyInstanceAttribute"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceAttributeResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyInstanceAttribute(shared_ptr<ModifyInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

ModifyInstanceUpgradePeriodResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyInstanceUpgradePeriodWithOptions(shared_ptr<ModifyInstanceUpgradePeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceUpgradePeriodResponse(doRPCRequest(make_shared<string>("ModifyInstanceUpgradePeriod"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceUpgradePeriodResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyInstanceUpgradePeriod(shared_ptr<ModifyInstanceUpgradePeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceUpgradePeriodWithOptions(request, runtime);
}

ModifyUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyUserWithOptions(shared_ptr<ModifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUserResponse(doRPCRequest(make_shared<string>("ModifyUser"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyUser(shared_ptr<ModifyUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserWithOptions(request, runtime);
}

ModifyUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyUserGroupWithOptions(shared_ptr<ModifyUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUserGroupResponse(doRPCRequest(make_shared<string>("ModifyUserGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::modifyUserGroup(shared_ptr<ModifyUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserGroupWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveResourceGroupResponse(doRPCRequest(make_shared<string>("MoveResourceGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

RemoveHostsFromGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::removeHostsFromGroupWithOptions(shared_ptr<RemoveHostsFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveHostsFromGroupResponse(doRPCRequest(make_shared<string>("RemoveHostsFromGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveHostsFromGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::removeHostsFromGroup(shared_ptr<RemoveHostsFromGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeHostsFromGroupWithOptions(request, runtime);
}

RemoveUsersFromGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::removeUsersFromGroupWithOptions(shared_ptr<RemoveUsersFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveUsersFromGroupResponse(doRPCRequest(make_shared<string>("RemoveUsersFromGroup"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveUsersFromGroupResponse Alibabacloud_Yundun-bastionhost20191209::Client::removeUsersFromGroup(shared_ptr<RemoveUsersFromGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUsersFromGroupWithOptions(request, runtime);
}

ResetHostAccountCredentialResponse Alibabacloud_Yundun-bastionhost20191209::Client::resetHostAccountCredentialWithOptions(shared_ptr<ResetHostAccountCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetHostAccountCredentialResponse(doRPCRequest(make_shared<string>("ResetHostAccountCredential"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetHostAccountCredentialResponse Alibabacloud_Yundun-bastionhost20191209::Client::resetHostAccountCredential(shared_ptr<ResetHostAccountCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetHostAccountCredentialWithOptions(request, runtime);
}

StartInstanceResponse Alibabacloud_Yundun-bastionhost20191209::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartInstanceResponse(doRPCRequest(make_shared<string>("StartInstance"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartInstanceResponse Alibabacloud_Yundun-bastionhost20191209::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Yundun-bastionhost20191209::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Yundun-bastionhost20191209::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnlockUsersResponse Alibabacloud_Yundun-bastionhost20191209::Client::unlockUsersWithOptions(shared_ptr<UnlockUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnlockUsersResponse(doRPCRequest(make_shared<string>("UnlockUsers"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnlockUsersResponse Alibabacloud_Yundun-bastionhost20191209::Client::unlockUsers(shared_ptr<UnlockUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockUsersWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Yundun-bastionhost20191209::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Yundun-bastionhost20191209::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpgradeInstanceImageVersionResponse Alibabacloud_Yundun-bastionhost20191209::Client::upgradeInstanceImageVersionWithOptions(shared_ptr<UpgradeInstanceImageVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeInstanceImageVersionResponse(doRPCRequest(make_shared<string>("UpgradeInstanceImageVersion"), make_shared<string>("2019-12-09"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeInstanceImageVersionResponse Alibabacloud_Yundun-bastionhost20191209::Client::upgradeInstanceImageVersion(shared_ptr<UpgradeInstanceImageVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeInstanceImageVersionWithOptions(request, runtime);
}

