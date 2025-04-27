// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eds_user_20210308.hpp>
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

using namespace Alibabacloud_Eds-user20210308;

Alibabacloud_Eds-user20210308::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eds-user"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eds-user20210308::Client::getEndpoint(shared_ptr<string> productId,
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

BatchSetDesktopManagerResponse Alibabacloud_Eds-user20210308::Client::batchSetDesktopManagerWithOptions(shared_ptr<BatchSetDesktopManagerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isDesktopManager)) {
    body->insert(pair<string, string>("IsDesktopManager", *request->isDesktopManager));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->users)) {
    body->insert(pair<string, vector<string>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetDesktopManager"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetDesktopManagerResponse(callApi(params, req, runtime));
}

BatchSetDesktopManagerResponse Alibabacloud_Eds-user20210308::Client::batchSetDesktopManager(shared_ptr<BatchSetDesktopManagerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetDesktopManagerWithOptions(request, runtime);
}

ChangeUserPasswordResponse Alibabacloud_Eds-user20210308::Client::changeUserPasswordWithOptions(shared_ptr<ChangeUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    body->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newPassword)) {
    body->insert(pair<string, string>("NewPassword", *request->newPassword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeUserPassword"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeUserPasswordResponse(callApi(params, req, runtime));
}

ChangeUserPasswordResponse Alibabacloud_Eds-user20210308::Client::changeUserPassword(shared_ptr<ChangeUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeUserPasswordWithOptions(request, runtime);
}

CheckUsedPropertyResponse Alibabacloud_Eds-user20210308::Client::checkUsedPropertyWithOptions(shared_ptr<CheckUsedPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyId)) {
    query->insert(pair<string, long>("PropertyId", *request->propertyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckUsedProperty"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckUsedPropertyResponse(callApi(params, req, runtime));
}

CheckUsedPropertyResponse Alibabacloud_Eds-user20210308::Client::checkUsedProperty(shared_ptr<CheckUsedPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUsedPropertyWithOptions(request, runtime);
}

CheckUsedPropertyValueResponse Alibabacloud_Eds-user20210308::Client::checkUsedPropertyValueWithOptions(shared_ptr<CheckUsedPropertyValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyId)) {
    query->insert(pair<string, long>("PropertyId", *request->propertyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyValueId)) {
    query->insert(pair<string, long>("PropertyValueId", *request->propertyValueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckUsedPropertyValue"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckUsedPropertyValueResponse(callApi(params, req, runtime));
}

CheckUsedPropertyValueResponse Alibabacloud_Eds-user20210308::Client::checkUsedPropertyValue(shared_ptr<CheckUsedPropertyValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUsedPropertyValueWithOptions(request, runtime);
}

CreateOrgResponse Alibabacloud_Eds-user20210308::Client::createOrgWithOptions(shared_ptr<CreateOrgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    query->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentOrgId)) {
    query->insert(pair<string, string>("ParentOrgId", *request->parentOrgId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrg"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrgResponse(callApi(params, req, runtime));
}

CreateOrgResponse Alibabacloud_Eds-user20210308::Client::createOrg(shared_ptr<CreateOrgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrgWithOptions(request, runtime);
}

CreatePropertyResponse Alibabacloud_Eds-user20210308::Client::createPropertyWithOptions(shared_ptr<CreatePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyKey)) {
    body->insert(pair<string, string>("PropertyKey", *request->propertyKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->propertyValues)) {
    body->insert(pair<string, vector<string>>("PropertyValues", *request->propertyValues));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProperty"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePropertyResponse(callApi(params, req, runtime));
}

CreatePropertyResponse Alibabacloud_Eds-user20210308::Client::createProperty(shared_ptr<CreatePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPropertyWithOptions(request, runtime);
}

CreateResourceGroupResponse Alibabacloud_Eds-user20210308::Client::createResourceGroupWithOptions(shared_ptr<CreateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->isResourceGroupWithOfficeSite)) {
    query->insert(pair<string, long>("IsResourceGroupWithOfficeSite", *request->isResourceGroupWithOfficeSite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    query->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceGroup"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceGroupResponse(callApi(params, req, runtime));
}

CreateResourceGroupResponse Alibabacloud_Eds-user20210308::Client::createResourceGroup(shared_ptr<CreateResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceGroupWithOptions(request, runtime);
}

CreateUsersResponse Alibabacloud_Eds-user20210308::Client::createUsersWithOptions(shared_ptr<CreateUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoLockTime)) {
    query->insert(pair<string, string>("AutoLockTime", *request->autoLockTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isLocalAdmin)) {
    query->insert(pair<string, bool>("IsLocalAdmin", *request->isLocalAdmin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passwordExpireDays)) {
    query->insert(pair<string, string>("PasswordExpireDays", *request->passwordExpireDays));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateUsersRequestUsers>>(request->users)) {
    body->insert(pair<string, vector<CreateUsersRequestUsers>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUsers"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUsersResponse(callApi(params, req, runtime));
}

CreateUsersResponse Alibabacloud_Eds-user20210308::Client::createUsers(shared_ptr<CreateUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUsersWithOptions(request, runtime);
}

DeleteResourceGroupResponse Alibabacloud_Eds-user20210308::Client::deleteResourceGroupWithOptions(shared_ptr<DeleteResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceGroupIds)) {
    query->insert(pair<string, vector<string>>("ResourceGroupIds", *request->resourceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceGroup"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceGroupResponse(callApi(params, req, runtime));
}

DeleteResourceGroupResponse Alibabacloud_Eds-user20210308::Client::deleteResourceGroup(shared_ptr<DeleteResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteResourceGroupWithOptions(request, runtime);
}

DeleteUserPropertyValueResponse Alibabacloud_Eds-user20210308::Client::deleteUserPropertyValueWithOptions(shared_ptr<DeleteUserPropertyValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyId)) {
    body->insert(pair<string, long>("PropertyId", *request->propertyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyValueId)) {
    body->insert(pair<string, long>("PropertyValueId", *request->propertyValueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserPropertyValue"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserPropertyValueResponse(callApi(params, req, runtime));
}

DeleteUserPropertyValueResponse Alibabacloud_Eds-user20210308::Client::deleteUserPropertyValue(shared_ptr<DeleteUserPropertyValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserPropertyValueWithOptions(request, runtime);
}

DescribeMfaDevicesResponse Alibabacloud_Eds-user20210308::Client::describeMfaDevicesWithOptions(shared_ptr<DescribeMfaDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adDomain)) {
    query->insert(pair<string, string>("AdDomain", *request->adDomain));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserIds)) {
    query->insert(pair<string, vector<string>>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serialNumbers)) {
    query->insert(pair<string, vector<string>>("SerialNumbers", *request->serialNumbers));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMfaDevices"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMfaDevicesResponse(callApi(params, req, runtime));
}

DescribeMfaDevicesResponse Alibabacloud_Eds-user20210308::Client::describeMfaDevices(shared_ptr<DescribeMfaDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMfaDevicesWithOptions(request, runtime);
}

DescribeOrgByLayerResponse Alibabacloud_Eds-user20210308::Client::describeOrgByLayerWithOptions(shared_ptr<DescribeOrgByLayerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentOrgId)) {
    body->insert(pair<string, string>("ParentOrgId", *request->parentOrgId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOrgByLayer"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrgByLayerResponse(callApi(params, req, runtime));
}

DescribeOrgByLayerResponse Alibabacloud_Eds-user20210308::Client::describeOrgByLayer(shared_ptr<DescribeOrgByLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrgByLayerWithOptions(request, runtime);
}

DescribeOrgsResponse Alibabacloud_Eds-user20210308::Client::describeOrgsWithOptions(shared_ptr<DescribeOrgsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    query->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentOrgId)) {
    query->insert(pair<string, string>("ParentOrgId", *request->parentOrgId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOrgs"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrgsResponse(callApi(params, req, runtime));
}

DescribeOrgsResponse Alibabacloud_Eds-user20210308::Client::describeOrgs(shared_ptr<DescribeOrgsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrgsWithOptions(request, runtime);
}

DescribeResourceGroupsResponse Alibabacloud_Eds-user20210308::Client::describeResourceGroupsWithOptions(shared_ptr<DescribeResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->needContainResourceGroupWithOfficeSite)) {
    query->insert(pair<string, long>("NeedContainResourceGroupWithOfficeSite", *request->needContainResourceGroupWithOfficeSite));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    query->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceGroupIds)) {
    query->insert(pair<string, vector<string>>("ResourceGroupIds", *request->resourceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("ResourceGroupName", *request->resourceGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceGroups"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceGroupsResponse(callApi(params, req, runtime));
}

DescribeResourceGroupsResponse Alibabacloud_Eds-user20210308::Client::describeResourceGroups(shared_ptr<DescribeResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceGroupsWithOptions(request, runtime);
}

DescribeUsersResponse Alibabacloud_Eds-user20210308::Client::describeUsersWithOptions(shared_ptr<DescribeUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeUsersShrinkRequest> request = make_shared<DescribeUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->filterWithAssignedResource)) {
    request->filterWithAssignedResourceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterWithAssignedResource, make_shared<string>("FilterWithAssignedResource"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, bool>>(tmpReq->filterWithAssignedResources)) {
    request->filterWithAssignedResourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterWithAssignedResources, make_shared<string>("FilterWithAssignedResources"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->showExtras)) {
    request->showExtrasShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->showExtras, make_shared<string>("ShowExtras"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterWithAssignedResourceShrink)) {
    query->insert(pair<string, string>("FilterWithAssignedResource", *request->filterWithAssignedResourceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endUserIds)) {
    body->insert(pair<string, vector<string>>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->excludeEndUserIds)) {
    body->insert(pair<string, vector<string>>("ExcludeEndUserIds", *request->excludeEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterWithAssignedResourcesShrink)) {
    body->insert(pair<string, string>("FilterWithAssignedResources", *request->filterWithAssignedResourcesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isQueryAllSubOrgs)) {
    body->insert(pair<string, bool>("IsQueryAllSubOrgs", *request->isQueryAllSubOrgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showExtrasShrink)) {
    body->insert(pair<string, string>("ShowExtras", *request->showExtrasShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->solutionId)) {
    body->insert(pair<string, string>("SolutionId", *request->solutionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsers"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsersResponse(callApi(params, req, runtime));
}

DescribeUsersResponse Alibabacloud_Eds-user20210308::Client::describeUsers(shared_ptr<DescribeUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsersWithOptions(request, runtime);
}

FilterUsersResponse Alibabacloud_Eds-user20210308::Client::filterUsersWithOptions(shared_ptr<FilterUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FilterUsersShrinkRequest> request = make_shared<FilterUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FilterUsersRequestOrderParam>(tmpReq->orderParam)) {
    request->orderParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderParam, make_shared<string>("OrderParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->excludeEndUserIds)) {
    query->insert(pair<string, vector<string>>("ExcludeEndUserIds", *request->excludeEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeDesktopCount)) {
    query->insert(pair<string, bool>("IncludeDesktopCount", *request->includeDesktopCount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeDesktopGroupCount)) {
    query->insert(pair<string, bool>("IncludeDesktopGroupCount", *request->includeDesktopGroupCount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeOrgInfo)) {
    query->insert(pair<string, bool>("IncludeOrgInfo", *request->includeOrgInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeSupportIdps)) {
    query->insert(pair<string, bool>("IncludeSupportIdps", *request->includeSupportIdps));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isQueryAllSubOrgs)) {
    query->insert(pair<string, bool>("IsQueryAllSubOrgs", *request->isQueryAllSubOrgs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderParamShrink)) {
    query->insert(pair<string, string>("OrderParam", *request->orderParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    query->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerType)) {
    query->insert(pair<string, string>("OwnerType", *request->ownerType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FilterUsersShrinkRequestPropertyFilterParam>>(request->propertyFilterParam)) {
    query->insert(pair<string, vector<FilterUsersShrinkRequestPropertyFilterParam>>("PropertyFilterParam", *request->propertyFilterParam));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FilterUsersShrinkRequestPropertyKeyValueFilterParam>>(request->propertyKeyValueFilterParam)) {
    query->insert(pair<string, vector<FilterUsersShrinkRequestPropertyKeyValueFilterParam>>("PropertyKeyValueFilterParam", *request->propertyKeyValueFilterParam));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FilterUsers"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FilterUsersResponse(callApi(params, req, runtime));
}

FilterUsersResponse Alibabacloud_Eds-user20210308::Client::filterUsers(shared_ptr<FilterUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return filterUsersWithOptions(request, runtime);
}

GetManagerInfoByAuthCodeResponse Alibabacloud_Eds-user20210308::Client::getManagerInfoByAuthCodeWithOptions(shared_ptr<GetManagerInfoByAuthCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetManagerInfoByAuthCode"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetManagerInfoByAuthCodeResponse(callApi(params, req, runtime));
}

GetManagerInfoByAuthCodeResponse Alibabacloud_Eds-user20210308::Client::getManagerInfoByAuthCode(shared_ptr<GetManagerInfoByAuthCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getManagerInfoByAuthCodeWithOptions(request, runtime);
}

InitTenantAliasResponse Alibabacloud_Eds-user20210308::Client::initTenantAliasWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitTenantAlias"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitTenantAliasResponse(callApi(params, req, runtime));
}

InitTenantAliasResponse Alibabacloud_Eds-user20210308::Client::initTenantAlias() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initTenantAliasWithOptions(runtime);
}

ListPropertyResponse Alibabacloud_Eds-user20210308::Client::listPropertyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProperty"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPropertyResponse(callApi(params, req, runtime));
}

ListPropertyResponse Alibabacloud_Eds-user20210308::Client::listProperty() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPropertyWithOptions(runtime);
}

ListPropertyValueResponse Alibabacloud_Eds-user20210308::Client::listPropertyValueWithOptions(shared_ptr<ListPropertyValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyId)) {
    query->insert(pair<string, long>("PropertyId", *request->propertyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPropertyValue"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPropertyValueResponse(callApi(params, req, runtime));
}

ListPropertyValueResponse Alibabacloud_Eds-user20210308::Client::listPropertyValue(shared_ptr<ListPropertyValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPropertyValueWithOptions(request, runtime);
}

LockMfaDeviceResponse Alibabacloud_Eds-user20210308::Client::lockMfaDeviceWithOptions(shared_ptr<LockMfaDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adDomain)) {
    query->insert(pair<string, string>("AdDomain", *request->adDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockMfaDevice"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockMfaDeviceResponse(callApi(params, req, runtime));
}

LockMfaDeviceResponse Alibabacloud_Eds-user20210308::Client::lockMfaDevice(shared_ptr<LockMfaDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockMfaDeviceWithOptions(request, runtime);
}

LockUsersResponse Alibabacloud_Eds-user20210308::Client::lockUsersWithOptions(shared_ptr<LockUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->logoutSession)) {
    query->insert(pair<string, bool>("LogoutSession", *request->logoutSession));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->users)) {
    body->insert(pair<string, vector<string>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockUsers"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockUsersResponse(callApi(params, req, runtime));
}

LockUsersResponse Alibabacloud_Eds-user20210308::Client::lockUsers(shared_ptr<LockUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockUsersWithOptions(request, runtime);
}

ModifyOrgResponse Alibabacloud_Eds-user20210308::Client::modifyOrgWithOptions(shared_ptr<ModifyOrgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    query->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    query->insert(pair<string, string>("OrgName", *request->orgName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyOrg"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyOrgResponse(callApi(params, req, runtime));
}

ModifyOrgResponse Alibabacloud_Eds-user20210308::Client::modifyOrg(shared_ptr<ModifyOrgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOrgWithOptions(request, runtime);
}

ModifyUserResponse Alibabacloud_Eds-user20210308::Client::modifyUserWithOptions(shared_ptr<ModifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyUser"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyUserResponse(callApi(params, req, runtime));
}

ModifyUserResponse Alibabacloud_Eds-user20210308::Client::modifyUser(shared_ptr<ModifyUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserWithOptions(request, runtime);
}

MoveOrgResponse Alibabacloud_Eds-user20210308::Client::moveOrgWithOptions(shared_ptr<MoveOrgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newParentOrgId)) {
    body->insert(pair<string, string>("NewParentOrgId", *request->newParentOrgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveOrg"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveOrgResponse(callApi(params, req, runtime));
}

MoveOrgResponse Alibabacloud_Eds-user20210308::Client::moveOrg(shared_ptr<MoveOrgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveOrgWithOptions(request, runtime);
}

QuerySyncStatusByAliUidResponse Alibabacloud_Eds-user20210308::Client::querySyncStatusByAliUidWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySyncStatusByAliUid"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySyncStatusByAliUidResponse(callApi(params, req, runtime));
}

QuerySyncStatusByAliUidResponse Alibabacloud_Eds-user20210308::Client::querySyncStatusByAliUid() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySyncStatusByAliUidWithOptions(runtime);
}

RemoveMfaDeviceResponse Alibabacloud_Eds-user20210308::Client::removeMfaDeviceWithOptions(shared_ptr<RemoveMfaDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adDomain)) {
    query->insert(pair<string, string>("AdDomain", *request->adDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveMfaDevice"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveMfaDeviceResponse(callApi(params, req, runtime));
}

RemoveMfaDeviceResponse Alibabacloud_Eds-user20210308::Client::removeMfaDevice(shared_ptr<RemoveMfaDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeMfaDeviceWithOptions(request, runtime);
}

RemoveOrgResponse Alibabacloud_Eds-user20210308::Client::removeOrgWithOptions(shared_ptr<RemoveOrgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveOrg"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveOrgResponse(callApi(params, req, runtime));
}

RemoveOrgResponse Alibabacloud_Eds-user20210308::Client::removeOrg(shared_ptr<RemoveOrgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeOrgWithOptions(request, runtime);
}

RemovePropertyResponse Alibabacloud_Eds-user20210308::Client::removePropertyWithOptions(shared_ptr<RemovePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyId)) {
    body->insert(pair<string, long>("PropertyId", *request->propertyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveProperty"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemovePropertyResponse(callApi(params, req, runtime));
}

RemovePropertyResponse Alibabacloud_Eds-user20210308::Client::removeProperty(shared_ptr<RemovePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removePropertyWithOptions(request, runtime);
}

RemoveUsersResponse Alibabacloud_Eds-user20210308::Client::removeUsersWithOptions(shared_ptr<RemoveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->users)) {
    body->insert(pair<string, vector<string>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUsers"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveUsersResponse(callApi(params, req, runtime));
}

RemoveUsersResponse Alibabacloud_Eds-user20210308::Client::removeUsers(shared_ptr<RemoveUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUsersWithOptions(request, runtime);
}

ResetUserPasswordResponse Alibabacloud_Eds-user20210308::Client::resetUserPasswordWithOptions(shared_ptr<ResetUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->notifyType)) {
    body->insert(pair<string, long>("NotifyType", *request->notifyType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->users)) {
    body->insert(pair<string, vector<string>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetUserPassword"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetUserPasswordResponse(callApi(params, req, runtime));
}

ResetUserPasswordResponse Alibabacloud_Eds-user20210308::Client::resetUserPassword(shared_ptr<ResetUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetUserPasswordWithOptions(request, runtime);
}

SetUserPropertyValueResponse Alibabacloud_Eds-user20210308::Client::setUserPropertyValueWithOptions(shared_ptr<SetUserPropertyValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyId)) {
    body->insert(pair<string, long>("PropertyId", *request->propertyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyValueId)) {
    body->insert(pair<string, long>("PropertyValueId", *request->propertyValueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetUserPropertyValue"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetUserPropertyValueResponse(callApi(params, req, runtime));
}

SetUserPropertyValueResponse Alibabacloud_Eds-user20210308::Client::setUserPropertyValue(shared_ptr<SetUserPropertyValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setUserPropertyValueWithOptions(request, runtime);
}

SyncAllEduInfoResponse Alibabacloud_Eds-user20210308::Client::syncAllEduInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncAllEduInfo"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncAllEduInfoResponse(callApi(params, req, runtime));
}

SyncAllEduInfoResponse Alibabacloud_Eds-user20210308::Client::syncAllEduInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncAllEduInfoWithOptions(runtime);
}

UnlockMfaDeviceResponse Alibabacloud_Eds-user20210308::Client::unlockMfaDeviceWithOptions(shared_ptr<UnlockMfaDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adDomain)) {
    query->insert(pair<string, string>("AdDomain", *request->adDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnlockMfaDevice"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnlockMfaDeviceResponse(callApi(params, req, runtime));
}

UnlockMfaDeviceResponse Alibabacloud_Eds-user20210308::Client::unlockMfaDevice(shared_ptr<UnlockMfaDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockMfaDeviceWithOptions(request, runtime);
}

UnlockUsersResponse Alibabacloud_Eds-user20210308::Client::unlockUsersWithOptions(shared_ptr<UnlockUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoLockTime)) {
    query->insert(pair<string, string>("AutoLockTime", *request->autoLockTime));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->users)) {
    body->insert(pair<string, vector<string>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnlockUsers"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnlockUsersResponse(callApi(params, req, runtime));
}

UnlockUsersResponse Alibabacloud_Eds-user20210308::Client::unlockUsers(shared_ptr<UnlockUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockUsersWithOptions(request, runtime);
}

UpdatePropertyResponse Alibabacloud_Eds-user20210308::Client::updatePropertyWithOptions(shared_ptr<UpdatePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->propertyId)) {
    body->insert(pair<string, long>("PropertyId", *request->propertyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertyKey)) {
    body->insert(pair<string, string>("PropertyKey", *request->propertyKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdatePropertyRequestPropertyValues>>(request->propertyValues)) {
    body->insert(pair<string, vector<UpdatePropertyRequestPropertyValues>>("PropertyValues", *request->propertyValues));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProperty"))},
    {"version", boost::any(string("2021-03-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePropertyResponse(callApi(params, req, runtime));
}

UpdatePropertyResponse Alibabacloud_Eds-user20210308::Client::updateProperty(shared_ptr<UpdatePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePropertyWithOptions(request, runtime);
}

