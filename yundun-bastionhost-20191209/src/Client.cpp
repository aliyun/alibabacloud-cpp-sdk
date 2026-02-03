#include <darabonba/Core.hpp>
#include <alibabacloud/YundunBastionhost20191209.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::YundunBastionhost20191209::Models;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{

AlibabaCloud::YundunBastionhost20191209::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhangjiakou" , "bastionhost.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote" , "bastionhost.cn-huhehaote.aliyuncs.com"},
    {"cn-wulanchabu" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-heyuan" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-guangzhou" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-chengdu" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hongkong" , "bastionhost.cn-hongkong.aliyuncs.com"},
    {"ap-northeast-1" , "bastionhost.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "bastionhost.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "bastionhost.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "bastionhost.ap-southeast-5.aliyuncs.com"},
    {"us-east-1" , "bastionhost.us-east-1.aliyuncs.com"},
    {"us-west-1" , "bastionhost.us-west-1.aliyuncs.com"},
    {"eu-west-1" , "bastionhost.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "bastionhost.eu-central-1.aliyuncs.com"},
    {"me-east-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-north-2-gov-1" , "yundun-bastionhost.aliyuncs.com"},
    {"ap-northeast-2-pop" , "yundun-bastionhost.aliyuncs.com"},
    {"ap-south-1" , "yundun-bastionhost.aliyuncs.com"},
    {"ap-southeast-2" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing-finance-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing-gov-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-edge-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-fujian" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-finance" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-qingdao-nebula" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-inner" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen-inner" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-wuhan" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-yushanfang" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhangbei" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "yundun-bastionhost.aliyuncs.com"},
    {"eu-west-1-oxs" , "yundun-bastionhost.aliyuncs.com"},
    {"rus-west-1-pop" , "yundun-bastionhost.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("yundun-bastionhost", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary If an O\\&M engineer attempts to run a command specified in the Command Approval field on the Create Control Policy page, the administrator is notified to review the command in the Bastionhost console. The command can be run only after it is approved by the administrator.
 *
 * @description You can call this operation as a Bastionhost administrator to approve the request to run a command of an O\\&M engineer.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AcceptApproveCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptApproveCommandResponse
 */
AcceptApproveCommandResponse Client::acceptApproveCommandWithOptions(const AcceptApproveCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptApproveCommand"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptApproveCommandResponse>();
}

/**
 * @summary If an O\\&M engineer attempts to run a command specified in the Command Approval field on the Create Control Policy page, the administrator is notified to review the command in the Bastionhost console. The command can be run only after it is approved by the administrator.
 *
 * @description You can call this operation as a Bastionhost administrator to approve the request to run a command of an O\\&M engineer.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AcceptApproveCommandRequest
 * @return AcceptApproveCommandResponse
 */
AcceptApproveCommandResponse Client::acceptApproveCommand(const AcceptApproveCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptApproveCommandWithOptions(request, runtime);
}

/**
 * @summary Approves an O\\\\\\\\\\\\&M application.
 *
 * @description You can call this operation as a Bastionhost administrator to approve an O\\&M application of an O\\&M engineer.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AcceptOperationTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptOperationTicketResponse
 */
AcceptOperationTicketResponse Client::acceptOperationTicketWithOptions(const AcceptOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEffectCount()) {
    query["EffectCount"] = request.getEffectCount();
  }

  if (!!request.hasEffectEndTime()) {
    query["EffectEndTime"] = request.getEffectEndTime();
  }

  if (!!request.hasEffectStartTime()) {
    query["EffectStartTime"] = request.getEffectStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperationTicketId()) {
    query["OperationTicketId"] = request.getOperationTicketId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptOperationTicket"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptOperationTicketResponse>();
}

/**
 * @summary Approves an O\\\\\\\\\\\\&M application.
 *
 * @description You can call this operation as a Bastionhost administrator to approve an O\\&M application of an O\\&M engineer.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AcceptOperationTicketRequest
 * @return AcceptOperationTicketResponse
 */
AcceptOperationTicketResponse Client::acceptOperationTicket(const AcceptOperationTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptOperationTicketWithOptions(request, runtime);
}

/**
 * @summary Adds multiple databases to a specified asset group.
 *
 * @param request AddDatabasesToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDatabasesToGroupResponse
 */
AddDatabasesToGroupResponse Client::addDatabasesToGroupWithOptions(const AddDatabasesToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseIds()) {
    query["DatabaseIds"] = request.getDatabaseIds();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDatabasesToGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDatabasesToGroupResponse>();
}

/**
 * @summary Adds multiple databases to a specified asset group.
 *
 * @param request AddDatabasesToGroupRequest
 * @return AddDatabasesToGroupResponse
 */
AddDatabasesToGroupResponse Client::addDatabasesToGroup(const AddDatabasesToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDatabasesToGroupWithOptions(request, runtime);
}

/**
 * @summary Adds one or more hosts to the specified host group.
 *
 * @description You can call this operation to add one or more hosts to a host group. You can add multiple hosts to a host group to manage and grant permissions on the hosts in a centralized manner.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
 *
 * @param request AddHostsToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddHostsToGroupResponse
 */
AddHostsToGroupResponse Client::addHostsToGroupWithOptions(const AddHostsToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddHostsToGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddHostsToGroupResponse>();
}

/**
 * @summary Adds one or more hosts to the specified host group.
 *
 * @description You can call this operation to add one or more hosts to a host group. You can add multiple hosts to a host group to manage and grant permissions on the hosts in a centralized manner.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
 *
 * @param request AddHostsToGroupRequest
 * @return AddHostsToGroupResponse
 */
AddHostsToGroupResponse Client::addHostsToGroup(const AddHostsToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addHostsToGroupWithOptions(request, runtime);
}

/**
 * @summary 添加RD成员账号
 *
 * @param request AddInstanceRdMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddInstanceRdMemberResponse
 */
AddInstanceRdMemberResponse Client::addInstanceRdMemberWithOptions(const AddInstanceRdMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddInstanceRdMember"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddInstanceRdMemberResponse>();
}

/**
 * @summary 添加RD成员账号
 *
 * @param request AddInstanceRdMemberRequest
 * @return AddInstanceRdMemberResponse
 */
AddInstanceRdMemberResponse Client::addInstanceRdMember(const AddInstanceRdMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addInstanceRdMemberWithOptions(request, runtime);
}

/**
 * @summary Add one or more users to a user group.
 *
 * @description #
 * You can call this operation to add one or more users to a user group. After you call the [CreateUserGroup](https://help.aliyun.com/document_detail/204596.html) operation to create a user group, you can call the AddUsersToGroup operation to add multiple users to the user group. Then, you can manage and grant permissions to the users at a time.
 * # Limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddUsersToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroupWithOptions(const AddUsersToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUsersToGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUsersToGroupResponse>();
}

/**
 * @summary Add one or more users to a user group.
 *
 * @description #
 * You can call this operation to add one or more users to a user group. After you call the [CreateUserGroup](https://help.aliyun.com/document_detail/204596.html) operation to create a user group, you can call the AddUsersToGroup operation to add multiple users to the user group. Then, you can manage and grant permissions to the users at a time.
 * # Limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddUsersToGroupRequest
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroup(const AddUsersToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUsersToGroupWithOptions(request, runtime);
}

/**
 * @summary Authorizes a user to manage databases and database accounts.
 *
 * @param request AttachDatabaseAccountsToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachDatabaseAccountsToUserResponse
 */
AttachDatabaseAccountsToUserResponse Client::attachDatabaseAccountsToUserWithOptions(const AttachDatabaseAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachDatabaseAccountsToUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachDatabaseAccountsToUserResponse>();
}

/**
 * @summary Authorizes a user to manage databases and database accounts.
 *
 * @param request AttachDatabaseAccountsToUserRequest
 * @return AttachDatabaseAccountsToUserResponse
 */
AttachDatabaseAccountsToUserResponse Client::attachDatabaseAccountsToUser(const AttachDatabaseAccountsToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDatabaseAccountsToUserWithOptions(request, runtime);
}

/**
 * @summary Authorizes a user group to manage databases and database accounts.
 *
 * @param request AttachDatabaseAccountsToUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachDatabaseAccountsToUserGroupResponse
 */
AttachDatabaseAccountsToUserGroupResponse Client::attachDatabaseAccountsToUserGroupWithOptions(const AttachDatabaseAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachDatabaseAccountsToUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachDatabaseAccountsToUserGroupResponse>();
}

/**
 * @summary Authorizes a user group to manage databases and database accounts.
 *
 * @param request AttachDatabaseAccountsToUserGroupRequest
 * @return AttachDatabaseAccountsToUserGroupResponse
 */
AttachDatabaseAccountsToUserGroupResponse Client::attachDatabaseAccountsToUserGroup(const AttachDatabaseAccountsToUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDatabaseAccountsToUserGroupWithOptions(request, runtime);
}

/**
 * @summary Associates host accounts with a shared key.
 *
 * @param request AttachHostAccountsToHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostAccountsToHostShareKeyResponse
 */
AttachHostAccountsToHostShareKeyResponse Client::attachHostAccountsToHostShareKeyWithOptions(const AttachHostAccountsToHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountIds()) {
    query["HostAccountIds"] = request.getHostAccountIds();
  }

  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostAccountsToHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostAccountsToHostShareKeyResponse>();
}

/**
 * @summary Associates host accounts with a shared key.
 *
 * @param request AttachHostAccountsToHostShareKeyRequest
 * @return AttachHostAccountsToHostShareKeyResponse
 */
AttachHostAccountsToHostShareKeyResponse Client::attachHostAccountsToHostShareKey(const AttachHostAccountsToHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostAccountsToHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Authorizes a user to manage the hosts and host accounts.
 *
 * @param request AttachHostAccountsToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostAccountsToUserResponse
 */
AttachHostAccountsToUserResponse Client::attachHostAccountsToUserWithOptions(const AttachHostAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostAccountsToUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostAccountsToUserResponse>();
}

/**
 * @summary Authorizes a user to manage the hosts and host accounts.
 *
 * @param request AttachHostAccountsToUserRequest
 * @return AttachHostAccountsToUserResponse
 */
AttachHostAccountsToUserResponse Client::attachHostAccountsToUser(const AttachHostAccountsToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostAccountsToUserWithOptions(request, runtime);
}

/**
 * @summary Authorizes a user group to manage one or more hosts and host accounts.
 *
 * @description After you authorize a user group to manage specific hosts and host accounts, all the users in the user group have access to the authorized hosts and host accounts.
 *
 * @param request AttachHostAccountsToUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostAccountsToUserGroupResponse
 */
AttachHostAccountsToUserGroupResponse Client::attachHostAccountsToUserGroupWithOptions(const AttachHostAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostAccountsToUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostAccountsToUserGroupResponse>();
}

/**
 * @summary Authorizes a user group to manage one or more hosts and host accounts.
 *
 * @description After you authorize a user group to manage specific hosts and host accounts, all the users in the user group have access to the authorized hosts and host accounts.
 *
 * @param request AttachHostAccountsToUserGroupRequest
 * @return AttachHostAccountsToUserGroupResponse
 */
AttachHostAccountsToUserGroupResponse Client::attachHostAccountsToUserGroup(const AttachHostAccountsToUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostAccountsToUserGroupWithOptions(request, runtime);
}

/**
 * @summary Authorizes a user to manage one or more host groups and host accounts.
 *
 * @param request AttachHostGroupAccountsToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostGroupAccountsToUserResponse
 */
AttachHostGroupAccountsToUserResponse Client::attachHostGroupAccountsToUserWithOptions(const AttachHostGroupAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostGroupAccountsToUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostGroupAccountsToUserResponse>();
}

/**
 * @summary Authorizes a user to manage one or more host groups and host accounts.
 *
 * @param request AttachHostGroupAccountsToUserRequest
 * @return AttachHostGroupAccountsToUserResponse
 */
AttachHostGroupAccountsToUserResponse Client::attachHostGroupAccountsToUser(const AttachHostGroupAccountsToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostGroupAccountsToUserWithOptions(request, runtime);
}

/**
 * @summary Authorizes a user to manage one or more host groups and host accounts.
 *
 * @param request AttachHostGroupAccountsToUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostGroupAccountsToUserGroupResponse
 */
AttachHostGroupAccountsToUserGroupResponse Client::attachHostGroupAccountsToUserGroupWithOptions(const AttachHostGroupAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostGroupAccountsToUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostGroupAccountsToUserGroupResponse>();
}

/**
 * @summary Authorizes a user to manage one or more host groups and host accounts.
 *
 * @param request AttachHostGroupAccountsToUserGroupRequest
 * @return AttachHostGroupAccountsToUserGroupResponse
 */
AttachHostGroupAccountsToUserGroupResponse Client::attachHostGroupAccountsToUserGroup(const AttachHostGroupAccountsToUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostGroupAccountsToUserGroupWithOptions(request, runtime);
}

/**
 * @summary Configures security groups for a bastion host.
 *
 * @param request ConfigInstanceSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigInstanceSecurityGroupsResponse
 */
ConfigInstanceSecurityGroupsResponse Client::configInstanceSecurityGroupsWithOptions(const ConfigInstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizedSecurityGroups()) {
    query["AuthorizedSecurityGroups"] = request.getAuthorizedSecurityGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigInstanceSecurityGroups"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigInstanceSecurityGroupsResponse>();
}

/**
 * @summary Configures security groups for a bastion host.
 *
 * @param request ConfigInstanceSecurityGroupsRequest
 * @return ConfigInstanceSecurityGroupsResponse
 */
ConfigInstanceSecurityGroupsResponse Client::configInstanceSecurityGroups(const ConfigInstanceSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configInstanceSecurityGroupsWithOptions(request, runtime);
}

/**
 * @summary Configures a whitelist of public IP addresses for a bastion host.
 *
 * @description ## Usage notes
 * You can call this operation to configure a whitelist of public IP addresses for a bastion host. By default, a bastion host is accessible from all public IP addresses. If you want to allow the requests from specific public IP addresses, you can call this operation to add trusted IP addresses to the whitelist of the bastion host.  
 * ## Limits
 * You can call this operation up to 30 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ConfigInstanceWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigInstanceWhiteListResponse
 */
ConfigInstanceWhiteListResponse Client::configInstanceWhiteListWithOptions(const ConfigInstanceWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasWhiteList()) {
    query["WhiteList"] = request.getWhiteList();
  }

  if (!!request.hasWhiteListPolicies()) {
    query["WhiteListPolicies"] = request.getWhiteListPolicies();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigInstanceWhiteList"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigInstanceWhiteListResponse>();
}

/**
 * @summary Configures a whitelist of public IP addresses for a bastion host.
 *
 * @description ## Usage notes
 * You can call this operation to configure a whitelist of public IP addresses for a bastion host. By default, a bastion host is accessible from all public IP addresses. If you want to allow the requests from specific public IP addresses, you can call this operation to add trusted IP addresses to the whitelist of the bastion host.  
 * ## Limits
 * You can call this operation up to 30 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ConfigInstanceWhiteListRequest
 * @return ConfigInstanceWhiteListResponse
 */
ConfigInstanceWhiteListResponse Client::configInstanceWhiteList(const ConfigInstanceWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configInstanceWhiteListWithOptions(request, runtime);
}

/**
 * @summary Imports an ApsaraDB RDS for MySQL instance, ApsaraDB RDS for SQL Server instance, ApsaraDB RDS for PostgreSQL instance, PolarDB for MySQL cluster, PolarDB for PostgreSQL cluster, PolarDB for PostgreSQL (Compatible with Oracle) cluster, self-managed MySQL database, self-managed SQL Server database, self-managed PostgreSQL database, or self-managed Oracle database to a bastion host.
 *
 * @param request CreateDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabaseWithOptions(const CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAddressType()) {
    query["ActiveAddressType"] = request.getActiveAddressType();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabasePort()) {
    query["DatabasePort"] = request.getDatabasePort();
  }

  if (!!request.hasDatabasePrivateAddress()) {
    query["DatabasePrivateAddress"] = request.getDatabasePrivateAddress();
  }

  if (!!request.hasDatabasePublicAddress()) {
    query["DatabasePublicAddress"] = request.getDatabasePublicAddress();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceMemberId()) {
    query["InstanceMemberId"] = request.getInstanceMemberId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasPolarDBEndpointType()) {
    query["PolarDBEndpointType"] = request.getPolarDBEndpointType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourceInstanceRegionId()) {
    query["SourceInstanceRegionId"] = request.getSourceInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabase"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseResponse>();
}

/**
 * @summary Imports an ApsaraDB RDS for MySQL instance, ApsaraDB RDS for SQL Server instance, ApsaraDB RDS for PostgreSQL instance, PolarDB for MySQL cluster, PolarDB for PostgreSQL cluster, PolarDB for PostgreSQL (Compatible with Oracle) cluster, self-managed MySQL database, self-managed SQL Server database, self-managed PostgreSQL database, or self-managed Oracle database to a bastion host.
 *
 * @param request CreateDatabaseRequest
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabase(const CreateDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseWithOptions(request, runtime);
}

/**
 * @summary After a database is created, you can create a database account for the database. After the account is created, O\\&M engineers can use the account to log on to and perform O\\&M operations on the database.
 *
 * @param request CreateDatabaseAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseAccountResponse
 */
CreateDatabaseAccountResponse Client::createDatabaseAccountWithOptions(const CreateDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasDatabaseSchema()) {
    query["DatabaseSchema"] = request.getDatabaseSchema();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoginAttribute()) {
    query["LoginAttribute"] = request.getLoginAttribute();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabaseAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseAccountResponse>();
}

/**
 * @summary After a database is created, you can create a database account for the database. After the account is created, O\\&M engineers can use the account to log on to and perform O\\&M operations on the database.
 *
 * @param request CreateDatabaseAccountRequest
 * @return CreateDatabaseAccountResponse
 */
CreateDatabaseAccountResponse Client::createDatabaseAccount(const CreateDatabaseAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseAccountWithOptions(request, runtime);
}

/**
 * @summary 创建导出配置的任务
 *
 * @param request CreateExportConfigJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExportConfigJobResponse
 */
CreateExportConfigJobResponse Client::createExportConfigJobWithOptions(const CreateExportConfigJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExportConfigJob"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExportConfigJobResponse>();
}

/**
 * @summary 创建导出配置的任务
 *
 * @param request CreateExportConfigJobRequest
 * @return CreateExportConfigJobResponse
 */
CreateExportConfigJobResponse Client::createExportConfigJob(const CreateExportConfigJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExportConfigJobWithOptions(request, runtime);
}

/**
 * @summary Bastionhost allows you to perform O\\&M operations on hosts from different sources, such as Alibaba Cloud Elastic Compute Service (ECS) instances, servers in on-premises data centers, and servers on other cloud platforms. Before you perform O\\&M operations on hosts by using a bastion host, you must import the hosts to the bastion host. You can call this operation to import a host to a bastion host.
 *
 * @param request CreateHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostResponse
 */
CreateHostResponse Client::createHostWithOptions(const CreateHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAddressType()) {
    query["ActiveAddressType"] = request.getActiveAddressType();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasHostPrivateAddress()) {
    query["HostPrivateAddress"] = request.getHostPrivateAddress();
  }

  if (!!request.hasHostPublicAddress()) {
    query["HostPublicAddress"] = request.getHostPublicAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceMemberId()) {
    query["InstanceMemberId"] = request.getInstanceMemberId();
  }

  if (!!request.hasInstanceRegionId()) {
    query["InstanceRegionId"] = request.getInstanceRegionId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostResponse>();
}

/**
 * @summary Bastionhost allows you to perform O\\&M operations on hosts from different sources, such as Alibaba Cloud Elastic Compute Service (ECS) instances, servers in on-premises data centers, and servers on other cloud platforms. Before you perform O\\&M operations on hosts by using a bastion host, you must import the hosts to the bastion host. You can call this operation to import a host to a bastion host.
 *
 * @param request CreateHostRequest
 * @return CreateHostResponse
 */
CreateHostResponse Client::createHost(const CreateHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostWithOptions(request, runtime);
}

/**
 * @summary After you import a host to a bastion host, you must add an account of the host to the bastion host. This way, O\\&M engineers can use the account to log on to and perform O\\&M operations on the host by using the bastion host.
 *
 * @param request CreateHostAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostAccountResponse
 */
CreateHostAccountResponse Client::createHostAccountWithOptions(const CreateHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassPhrase()) {
    query["PassPhrase"] = request.getPassPhrase();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasPrivilegeType()) {
    query["PrivilegeType"] = request.getPrivilegeType();
  }

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRotationMode()) {
    query["RotationMode"] = request.getRotationMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHostAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostAccountResponse>();
}

/**
 * @summary After you import a host to a bastion host, you must add an account of the host to the bastion host. This way, O\\&M engineers can use the account to log on to and perform O\\&M operations on the host by using the bastion host.
 *
 * @param request CreateHostAccountRequest
 * @return CreateHostAccountResponse
 */
CreateHostAccountResponse Client::createHostAccount(const CreateHostAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostAccountWithOptions(request, runtime);
}

/**
 * @summary You can create asset groups based on your business requirements and add assets of the same type to an asset group. This allows you to classify assets and manage multiple assets at a time.
 *
 * @param request CreateHostGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostGroupResponse
 */
CreateHostGroupResponse Client::createHostGroupWithOptions(const CreateHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHostGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostGroupResponse>();
}

/**
 * @summary You can create asset groups based on your business requirements and add assets of the same type to an asset group. This allows you to classify assets and manage multiple assets at a time.
 *
 * @param request CreateHostGroupRequest
 * @return CreateHostGroupResponse
 */
CreateHostGroupResponse Client::createHostGroup(const CreateHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostGroupWithOptions(request, runtime);
}

/**
 * @summary Bastionhost provides the shared key feature. This feature allows you to manage the private key that is used to log on to a host in a bastion host. This way, you can associate the private key with multiple accounts of the host to make host account management more efficient.
 *
 * @param request CreateHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostShareKeyResponse
 */
CreateHostShareKeyResponse Client::createHostShareKeyWithOptions(const CreateHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyName()) {
    query["HostShareKeyName"] = request.getHostShareKeyName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassPhrase()) {
    query["PassPhrase"] = request.getPassPhrase();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostShareKeyResponse>();
}

/**
 * @summary Bastionhost provides the shared key feature. This feature allows you to manage the private key that is used to log on to a host in a bastion host. This way, you can associate the private key with multiple accounts of the host to make host account management more efficient.
 *
 * @param request CreateHostShareKeyRequest
 * @return CreateHostShareKeyResponse
 */
CreateHostShareKeyResponse Client::createHostShareKey(const CreateHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Creates a network domain.
 *
 * @param request CreateNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkDomainResponse
 */
CreateNetworkDomainResponse Client::createNetworkDomainWithOptions(const CreateNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainName()) {
    query["NetworkDomainName"] = request.getNetworkDomainName();
  }

  if (!!request.hasNetworkDomainType()) {
    query["NetworkDomainType"] = request.getNetworkDomainType();
  }

  if (!!request.hasProxies()) {
    query["Proxies"] = request.getProxies();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkDomainResponse>();
}

/**
 * @summary Creates a network domain.
 *
 * @param request CreateNetworkDomainRequest
 * @return CreateNetworkDomainResponse
 */
CreateNetworkDomainResponse Client::createNetworkDomain(const CreateNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary 创建运维审批工单
 *
 * @param request CreateOperationTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOperationTicketResponse
 */
CreateOperationTicketResponse Client::createOperationTicketWithOptions(const CreateOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApproveComment()) {
    query["ApproveComment"] = request.getApproveComment();
  }

  if (!!request.hasAssetAccountName()) {
    query["AssetAccountName"] = request.getAssetAccountName();
  }

  if (!!request.hasAssetId()) {
    query["AssetId"] = request.getAssetId();
  }

  if (!!request.hasEffectEndTime()) {
    query["EffectEndTime"] = request.getEffectEndTime();
  }

  if (!!request.hasEffectStartTime()) {
    query["EffectStartTime"] = request.getEffectStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsOneTimeEffect()) {
    query["IsOneTimeEffect"] = request.getIsOneTimeEffect();
  }

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOperationTicket"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOperationTicketResponse>();
}

/**
 * @summary 创建运维审批工单
 *
 * @param request CreateOperationTicketRequest
 * @return CreateOperationTicketResponse
 */
CreateOperationTicketResponse Client::createOperationTicket(const CreateOperationTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOperationTicketWithOptions(request, runtime);
}

/**
 * @summary Configures a command control, command approval, protocol control, or access control policy to manage O\\&M operations. This effectively prevents users from performing high-risk operations or accidental operations to ensure O\\&M security.
 *
 * @param request CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyResponse>();
}

/**
 * @summary Configures a command control, command approval, protocol control, or access control policy to manage O\\&M operations. This effectively prevents users from performing high-risk operations or accidental operations to ensure O\\&M security.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary You can create authorization rules to authorize multiple users to manage assets. You can also specify a validity period for an authorization rule. This way, you can manage users and assets in a more efficient manner and limit the time periods during which users can access assets.
 *
 * @param request CreateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRuleWithOptions(const CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasEffectiveEndTime()) {
    query["EffectiveEndTime"] = request.getEffectiveEndTime();
  }

  if (!!request.hasEffectiveStartTime()) {
    query["EffectiveStartTime"] = request.getEffectiveStartTime();
  }

  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRuleResponse>();
}

/**
 * @summary You can create authorization rules to authorize multiple users to manage assets. You can also specify a validity period for an authorization rule. This way, you can manage users and assets in a more efficient manner and limit the time periods during which users can access assets.
 *
 * @param request CreateRuleRequest
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRule(const CreateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a user to a bastion host.
 *
 * @description You can call the CreateUser operation to add local users, Resource Access Management (RAM) users, Active Directory (AD)-authenticated users, or Lightweight Directory Access Protocol (LDAP)-authenticated users to a bastion host. After a Bastionhost administrator adds a user to a bastion host, O\\&M engineers can log on to the bastion host as the user to perform O\\&M operations on the hosts that the user is authorized to manage.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEffectiveEndTime()) {
    query["EffectiveEndTime"] = request.getEffectiveEndTime();
  }

  if (!!request.hasEffectiveStartTime()) {
    query["EffectiveStartTime"] = request.getEffectiveStartTime();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasLanguageStatus()) {
    query["LanguageStatus"] = request.getLanguageStatus();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasMobileCountryCode()) {
    query["MobileCountryCode"] = request.getMobileCountryCode();
  }

  if (!!request.hasNeedResetPassword()) {
    query["NeedResetPassword"] = request.getNeedResetPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceUserId()) {
    query["SourceUserId"] = request.getSourceUserId();
  }

  if (!!request.hasTwoFactorMethods()) {
    query["TwoFactorMethods"] = request.getTwoFactorMethods();
  }

  if (!!request.hasTwoFactorStatus()) {
    query["TwoFactorStatus"] = request.getTwoFactorStatus();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Adds a user to a bastion host.
 *
 * @description You can call the CreateUser operation to add local users, Resource Access Management (RAM) users, Active Directory (AD)-authenticated users, or Lightweight Directory Access Protocol (LDAP)-authenticated users to a bastion host. After a Bastionhost administrator adds a user to a bastion host, O\\&M engineers can log on to the bastion host as the user to perform O\\&M operations on the hosts that the user is authorized to manage.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Creates a user group for the specified bastion host.
 *
 * @description You can call this operation to create a user group for a bastion host as an administrator. Then, you can call the [AddUsersToGroup](https://help.aliyun.com/document_detail/204600.html) operation to add users to the user group at a time. After you add the users to the user group, you can authorize and manage the users in a centralized manner.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroupWithOptions(const CreateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserGroupResponse>();
}

/**
 * @summary Creates a user group for the specified bastion host.
 *
 * @description You can call this operation to create a user group for a bastion host as an administrator. Then, you can call the [AddUsersToGroup](https://help.aliyun.com/document_detail/204600.html) operation to add users to the user group at a time. After you add the users to the user group, you can authorize and manage the users in a centralized manner.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateUserGroupRequest
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroup(const CreateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a public key for a bastion host user and hosts the public key in the bastion host. This way, O\\&M engineers can use the private key that corresponds to the public key to log on to the bastion host from an O\\&M client.
 *
 * @description You can call the CreateUserPublicKey operation to create a public key for the specified user of a bastion host.
 *
 * @param request CreateUserPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserPublicKeyResponse
 */
CreateUserPublicKeyResponse Client::createUserPublicKeyWithOptions(const CreateUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPublicKey()) {
    query["PublicKey"] = request.getPublicKey();
  }

  if (!!request.hasPublicKeyName()) {
    query["PublicKeyName"] = request.getPublicKeyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserPublicKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserPublicKeyResponse>();
}

/**
 * @summary Creates a public key for a bastion host user and hosts the public key in the bastion host. This way, O\\&M engineers can use the private key that corresponds to the public key to log on to the bastion host from an O\\&M client.
 *
 * @description You can call the CreateUserPublicKey operation to create a public key for the specified user of a bastion host.
 *
 * @param request CreateUserPublicKeyRequest
 * @return CreateUserPublicKeyResponse
 */
CreateUserPublicKeyResponse Client::createUserPublicKey(const CreateUserPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes a database.
 *
 * @param request DeleteDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabaseWithOptions(const DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabase"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseResponse>();
}

/**
 * @summary Deletes a database.
 *
 * @param request DeleteDatabaseRequest
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabase(const DeleteDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseWithOptions(request, runtime);
}

/**
 * @summary Deletes a database account.
 *
 * @param request DeleteDatabaseAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseAccountResponse
 */
DeleteDatabaseAccountResponse Client::deleteDatabaseAccountWithOptions(const DeleteDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountId()) {
    query["DatabaseAccountId"] = request.getDatabaseAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabaseAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseAccountResponse>();
}

/**
 * @summary Deletes a database account.
 *
 * @param request DeleteDatabaseAccountRequest
 * @return DeleteDatabaseAccountResponse
 */
DeleteDatabaseAccountResponse Client::deleteDatabaseAccount(const DeleteDatabaseAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified host.
 *
 * @param request DeleteHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostResponse
 */
DeleteHostResponse Client::deleteHostWithOptions(const DeleteHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostResponse>();
}

/**
 * @summary Deletes the specified host.
 *
 * @param request DeleteHostRequest
 * @return DeleteHostResponse
 */
DeleteHostResponse Client::deleteHost(const DeleteHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostWithOptions(request, runtime);
}

/**
 * @summary Removes a host account.
 *
 * @description ## Usage notes
 * This interface is used to delete individual host accounts. If a host account is no longer in use, you can invoke this interface to delete the host account for that host that has been configured on the bastion.
 * >  After you remove the host account, you must enter the username and password of the host when you log on to the host in Bastionhost.  
 * ## QPS Limit
 * The single-user QPS limit of this interface is 10 times/second. If the limit is exceeded, the API call will be stream-limited, which may affect your business, please call reasonably.
 *
 * @param request DeleteHostAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostAccountResponse
 */
DeleteHostAccountResponse Client::deleteHostAccountWithOptions(const DeleteHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountId()) {
    query["HostAccountId"] = request.getHostAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHostAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostAccountResponse>();
}

/**
 * @summary Removes a host account.
 *
 * @description ## Usage notes
 * This interface is used to delete individual host accounts. If a host account is no longer in use, you can invoke this interface to delete the host account for that host that has been configured on the bastion.
 * >  After you remove the host account, you must enter the username and password of the host when you log on to the host in Bastionhost.  
 * ## QPS Limit
 * The single-user QPS limit of this interface is 10 times/second. If the limit is exceeded, the API call will be stream-limited, which may affect your business, please call reasonably.
 *
 * @param request DeleteHostAccountRequest
 * @return DeleteHostAccountResponse
 */
DeleteHostAccountResponse Client::deleteHostAccount(const DeleteHostAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a host group.
 *
 * @description You can call this operation to delete a single host group. If you no longer need to perform O\\&M operations on all hosts in a host group, you can call this operation to delete the host group.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteHostGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostGroupResponse
 */
DeleteHostGroupResponse Client::deleteHostGroupWithOptions(const DeleteHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHostGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostGroupResponse>();
}

/**
 * @summary Deletes a host group.
 *
 * @description You can call this operation to delete a single host group. If you no longer need to perform O\\&M operations on all hosts in a host group, you can call this operation to delete the host group.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteHostGroupRequest
 * @return DeleteHostGroupResponse
 */
DeleteHostGroupResponse Client::deleteHostGroup(const DeleteHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a shared key.
 *
 * @param request DeleteHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostShareKeyResponse
 */
DeleteHostShareKeyResponse Client::deleteHostShareKeyWithOptions(const DeleteHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostShareKeyResponse>();
}

/**
 * @summary Deletes a shared key.
 *
 * @param request DeleteHostShareKeyRequest
 * @return DeleteHostShareKeyResponse
 */
DeleteHostShareKeyResponse Client::deleteHostShareKey(const DeleteHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes a network domain.
 *
 * @param request DeleteNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkDomainResponse
 */
DeleteNetworkDomainResponse Client::deleteNetworkDomainWithOptions(const DeleteNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkDomainResponse>();
}

/**
 * @summary Deletes a network domain.
 *
 * @param request DeleteNetworkDomainRequest
 * @return DeleteNetworkDomainResponse
 */
DeleteNetworkDomainResponse Client::deleteNetworkDomain(const DeleteNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes a control policy.
 *
 * @param request DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyResponse>();
}

/**
 * @summary Deletes a control policy.
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes an authorization rule.
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuleResponse>();
}

/**
 * @summary Deletes an authorization rule.
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a bastion host user.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserResponse>();
}

/**
 * @summary Deletes a bastion host user.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified user group from a specified bastion host.
 *
 * @param request DeleteUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroupWithOptions(const DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserGroupResponse>();
}

/**
 * @summary Deletes a specified user group from a specified bastion host.
 *
 * @param request DeleteUserGroupRequest
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroup(const DeleteUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a public key from the specified user.
 *
 * @description You can call the DeleteUserPublicKey operation to delete a public key from the specified user of a bastion host.
 *
 * @param request DeleteUserPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserPublicKeyResponse
 */
DeleteUserPublicKeyResponse Client::deleteUserPublicKeyWithOptions(const DeleteUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPublicKeyId()) {
    query["PublicKeyId"] = request.getPublicKeyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserPublicKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserPublicKeyResponse>();
}

/**
 * @summary Deletes a public key from the specified user.
 *
 * @description You can call the DeleteUserPublicKey operation to delete a public key from the specified user of a bastion host.
 *
 * @param request DeleteUserPublicKeyRequest
 * @return DeleteUserPublicKeyResponse
 */
DeleteUserPublicKeyResponse Client::deleteUserPublicKey(const DeleteUserPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the attribute information about the specified bastion host. The information includes the ID and remarks of the bastion host.
 *
 * @description ****
 *
 * @param request DescribeInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAttributeResponse
 */
DescribeInstanceAttributeResponse Client::describeInstanceAttributeWithOptions(const DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAttribute"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAttributeResponse>();
}

/**
 * @summary Queries the attribute information about the specified bastion host. The information includes the ID and remarks of the bastion host.
 *
 * @description ****
 *
 * @param request DescribeInstanceAttributeRequest
 * @return DescribeInstanceAttributeResponse
 */
DescribeInstanceAttributeResponse Client::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 堡垒机实例列表
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.getInstanceStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary 堡垒机实例列表
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries available regions where you can create bastion hosts.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries available regions where you can create bastion hosts.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on databases and database accounts from a user.
 *
 * @param request DetachDatabaseAccountsFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachDatabaseAccountsFromUserResponse
 */
DetachDatabaseAccountsFromUserResponse Client::detachDatabaseAccountsFromUserWithOptions(const DetachDatabaseAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachDatabaseAccountsFromUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachDatabaseAccountsFromUserResponse>();
}

/**
 * @summary Revokes permissions on databases and database accounts from a user.
 *
 * @param request DetachDatabaseAccountsFromUserRequest
 * @return DetachDatabaseAccountsFromUserResponse
 */
DetachDatabaseAccountsFromUserResponse Client::detachDatabaseAccountsFromUser(const DetachDatabaseAccountsFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDatabaseAccountsFromUserWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on databases and database accounts from a user group.
 *
 * @param request DetachDatabaseAccountsFromUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachDatabaseAccountsFromUserGroupResponse
 */
DetachDatabaseAccountsFromUserGroupResponse Client::detachDatabaseAccountsFromUserGroupWithOptions(const DetachDatabaseAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachDatabaseAccountsFromUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachDatabaseAccountsFromUserGroupResponse>();
}

/**
 * @summary Revokes permissions on databases and database accounts from a user group.
 *
 * @param request DetachDatabaseAccountsFromUserGroupRequest
 * @return DetachDatabaseAccountsFromUserGroupResponse
 */
DetachDatabaseAccountsFromUserGroupResponse Client::detachDatabaseAccountsFromUserGroup(const DetachDatabaseAccountsFromUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDatabaseAccountsFromUserGroupWithOptions(request, runtime);
}

/**
 * @summary Disassociate host accounts from a shared key.
 *
 * @param request DetachHostAccountsFromHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostAccountsFromHostShareKeyResponse
 */
DetachHostAccountsFromHostShareKeyResponse Client::detachHostAccountsFromHostShareKeyWithOptions(const DetachHostAccountsFromHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountIds()) {
    query["HostAccountIds"] = request.getHostAccountIds();
  }

  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostAccountsFromHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostAccountsFromHostShareKeyResponse>();
}

/**
 * @summary Disassociate host accounts from a shared key.
 *
 * @param request DetachHostAccountsFromHostShareKeyRequest
 * @return DetachHostAccountsFromHostShareKeyResponse
 */
DetachHostAccountsFromHostShareKeyResponse Client::detachHostAccountsFromHostShareKey(const DetachHostAccountsFromHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostAccountsFromHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on hosts and host accounts from a user.
 *
 * @param request DetachHostAccountsFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostAccountsFromUserResponse
 */
DetachHostAccountsFromUserResponse Client::detachHostAccountsFromUserWithOptions(const DetachHostAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostAccountsFromUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostAccountsFromUserResponse>();
}

/**
 * @summary Revokes permissions on hosts and host accounts from a user.
 *
 * @param request DetachHostAccountsFromUserRequest
 * @return DetachHostAccountsFromUserResponse
 */
DetachHostAccountsFromUserResponse Client::detachHostAccountsFromUser(const DetachHostAccountsFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostAccountsFromUserWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions on one or more hosts and host accounts from a user group.
 *
 * @param request DetachHostAccountsFromUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostAccountsFromUserGroupResponse
 */
DetachHostAccountsFromUserGroupResponse Client::detachHostAccountsFromUserGroupWithOptions(const DetachHostAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostAccountsFromUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostAccountsFromUserGroupResponse>();
}

/**
 * @summary Revokes the permissions on one or more hosts and host accounts from a user group.
 *
 * @param request DetachHostAccountsFromUserGroupRequest
 * @return DetachHostAccountsFromUserGroupResponse
 */
DetachHostAccountsFromUserGroupResponse Client::detachHostAccountsFromUserGroup(const DetachHostAccountsFromUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostAccountsFromUserGroupWithOptions(request, runtime);
}

/**
 * @summary Removes host groups and host accounts from the list of host groups and host accounts that a user is authorized to manage.
 *
 * @param request DetachHostGroupAccountsFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostGroupAccountsFromUserResponse
 */
DetachHostGroupAccountsFromUserResponse Client::detachHostGroupAccountsFromUserWithOptions(const DetachHostGroupAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostGroupAccountsFromUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostGroupAccountsFromUserResponse>();
}

/**
 * @summary Removes host groups and host accounts from the list of host groups and host accounts that a user is authorized to manage.
 *
 * @param request DetachHostGroupAccountsFromUserRequest
 * @return DetachHostGroupAccountsFromUserResponse
 */
DetachHostGroupAccountsFromUserResponse Client::detachHostGroupAccountsFromUser(const DetachHostGroupAccountsFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostGroupAccountsFromUserWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on one or more host groups and host accounts from a user group.
 *
 * @description ****
 *
 * @param request DetachHostGroupAccountsFromUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostGroupAccountsFromUserGroupResponse
 */
DetachHostGroupAccountsFromUserGroupResponse Client::detachHostGroupAccountsFromUserGroupWithOptions(const DetachHostGroupAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostGroupAccountsFromUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostGroupAccountsFromUserGroupResponse>();
}

/**
 * @summary Revokes permissions on one or more host groups and host accounts from a user group.
 *
 * @description ****
 *
 * @param request DetachHostGroupAccountsFromUserGroupRequest
 * @return DetachHostGroupAccountsFromUserGroupResponse
 */
DetachHostGroupAccountsFromUserGroupResponse Client::detachHostGroupAccountsFromUserGroup(const DetachHostGroupAccountsFromUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostGroupAccountsFromUserGroupWithOptions(request, runtime);
}

/**
 * @summary Disables Internet access for a bastion host.
 *
 * @param request DisableInstancePublicAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInstancePublicAccessResponse
 */
DisableInstancePublicAccessResponse Client::disableInstancePublicAccessWithOptions(const DisableInstancePublicAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableInstancePublicAccess"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableInstancePublicAccessResponse>();
}

/**
 * @summary Disables Internet access for a bastion host.
 *
 * @param request DisableInstancePublicAccessRequest
 * @return DisableInstancePublicAccessResponse
 */
DisableInstancePublicAccessResponse Client::disableInstancePublicAccess(const DisableInstancePublicAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInstancePublicAccessWithOptions(request, runtime);
}

/**
 * @summary Disables an authorization rule.
 *
 * @param request DisableRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableRuleResponse
 */
DisableRuleResponse Client::disableRuleWithOptions(const DisableRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableRuleResponse>();
}

/**
 * @summary Disables an authorization rule.
 *
 * @param request DisableRuleRequest
 * @return DisableRuleResponse
 */
DisableRuleResponse Client::disableRule(const DisableRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableRuleWithOptions(request, runtime);
}

/**
 * @summary Enables Internet access for a bastion host.
 *
 * @param request EnableInstancePublicAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInstancePublicAccessResponse
 */
EnableInstancePublicAccessResponse Client::enableInstancePublicAccessWithOptions(const EnableInstancePublicAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableInstancePublicAccess"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInstancePublicAccessResponse>();
}

/**
 * @summary Enables Internet access for a bastion host.
 *
 * @param request EnableInstancePublicAccessRequest
 * @return EnableInstancePublicAccessResponse
 */
EnableInstancePublicAccessResponse Client::enableInstancePublicAccess(const EnableInstancePublicAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInstancePublicAccessWithOptions(request, runtime);
}

/**
 * @summary Enables an authorization rule.
 *
 * @param request EnableRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableRuleResponse
 */
EnableRuleResponse Client::enableRuleWithOptions(const EnableRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableRuleResponse>();
}

/**
 * @summary Enables an authorization rule.
 *
 * @param request EnableRuleRequest
 * @return EnableRuleResponse
 */
EnableRuleResponse Client::enableRule(const EnableRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableRuleWithOptions(request, runtime);
}

/**
 * @summary Applies for an O\\&M token.
 *
 * @param request GenerateAssetOperationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAssetOperationTokenResponse
 */
GenerateAssetOperationTokenResponse Client::generateAssetOperationTokenWithOptions(const GenerateAssetOperationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetAccountId()) {
    query["AssetAccountId"] = request.getAssetAccountId();
  }

  if (!!request.hasAssetAccountName()) {
    query["AssetAccountName"] = request.getAssetAccountName();
  }

  if (!!request.hasAssetAccountPassword()) {
    query["AssetAccountPassword"] = request.getAssetAccountPassword();
  }

  if (!!request.hasAssetAccountProtocolName()) {
    query["AssetAccountProtocolName"] = request.getAssetAccountProtocolName();
  }

  if (!!request.hasAssetId()) {
    query["AssetId"] = request.getAssetId();
  }

  if (!!request.hasAssetType()) {
    query["AssetType"] = request.getAssetType();
  }

  if (!!request.hasDatabaseSchema()) {
    query["DatabaseSchema"] = request.getDatabaseSchema();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoginAttribute()) {
    query["LoginAttribute"] = request.getLoginAttribute();
  }

  if (!!request.hasOperationMode()) {
    query["OperationMode"] = request.getOperationMode();
  }

  if (!!request.hasOperationNote()) {
    query["OperationNote"] = request.getOperationNote();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSsoClient()) {
    query["SsoClient"] = request.getSsoClient();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateAssetOperationToken"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAssetOperationTokenResponse>();
}

/**
 * @summary Applies for an O\\&M token.
 *
 * @param request GenerateAssetOperationTokenRequest
 * @return GenerateAssetOperationTokenResponse
 */
GenerateAssetOperationTokenResponse Client::generateAssetOperationToken(const GenerateAssetOperationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAssetOperationTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a database.
 *
 * @param request GetDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabaseWithOptions(const GetDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabase"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseResponse>();
}

/**
 * @summary Queries the detailed information about a database.
 *
 * @param request GetDatabaseRequest
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabase(const GetDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a database account.
 *
 * @param request GetDatabaseAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseAccountResponse
 */
GetDatabaseAccountResponse Client::getDatabaseAccountWithOptions(const GetDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountId()) {
    query["DatabaseAccountId"] = request.getDatabaseAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabaseAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseAccountResponse>();
}

/**
 * @summary Queries the detailed information about a database account.
 *
 * @param request GetDatabaseAccountRequest
 * @return GetDatabaseAccountResponse
 */
GetDatabaseAccountResponse Client::getDatabaseAccount(const GetDatabaseAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseAccountWithOptions(request, runtime);
}

/**
 * @summary 获取导出配置任务进度
 *
 * @param request GetExportConfigJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExportConfigJobResponse
 */
GetExportConfigJobResponse Client::getExportConfigJobWithOptions(const GetExportConfigJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExportConfigJob"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExportConfigJobResponse>();
}

/**
 * @summary 获取导出配置任务进度
 *
 * @param request GetExportConfigJobRequest
 * @return GetExportConfigJobResponse
 */
GetExportConfigJobResponse Client::getExportConfigJob(const GetExportConfigJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExportConfigJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a host, such as the name, source, address, protocol, and service port of the host.
 *
 * @param request GetHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostResponse
 */
GetHostResponse Client::getHostWithOptions(const GetHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostResponse>();
}

/**
 * @summary Queries the details of a host, such as the name, source, address, protocol, and service port of the host.
 *
 * @param request GetHostRequest
 * @return GetHostResponse
 */
GetHostResponse Client::getHost(const GetHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHostWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified host account.
 *
 * @param request GetHostAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostAccountResponse
 */
GetHostAccountResponse Client::getHostAccountWithOptions(const GetHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountId()) {
    query["HostAccountId"] = request.getHostAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHostAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostAccountResponse>();
}

/**
 * @summary Queries the details of a specified host account.
 *
 * @param request GetHostAccountRequest
 * @return GetHostAccountResponse
 */
GetHostAccountResponse Client::getHostAccount(const GetHostAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHostAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified host group.
 *
 * @param request GetHostGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostGroupResponse
 */
GetHostGroupResponse Client::getHostGroupWithOptions(const GetHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHostGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostGroupResponse>();
}

/**
 * @summary Queries the details of a specified host group.
 *
 * @param request GetHostGroupRequest
 * @return GetHostGroupResponse
 */
GetHostGroupResponse Client::getHostGroup(const GetHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHostGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a shared key.
 *
 * @param request GetHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostShareKeyResponse
 */
GetHostShareKeyResponse Client::getHostShareKeyWithOptions(const GetHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostShareKeyResponse>();
}

/**
 * @summary Queries the information about a shared key.
 *
 * @param request GetHostShareKeyRequest
 * @return GetHostShareKeyResponse
 */
GetHostShareKeyResponse Client::getHostShareKey(const GetHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of Active Directory (AD) authentication on a bastion host.
 *
 * @description ###
 * You can call this operation to query the settings of AD authentication on a bastion host. After you configure AD authentication on a bastion host, you can import AD-authenticated users into the bastion host. After the AD-authenticated users are imported into the bastion host, the AD-authenticated users can log on to the bastion host to perform O\\&M operations on servers.
 * ### Limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetInstanceADAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceADAuthServerResponse
 */
GetInstanceADAuthServerResponse Client::getInstanceADAuthServerWithOptions(const GetInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceADAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceADAuthServerResponse>();
}

/**
 * @summary Queries the settings of Active Directory (AD) authentication on a bastion host.
 *
 * @description ###
 * You can call this operation to query the settings of AD authentication on a bastion host. After you configure AD authentication on a bastion host, you can import AD-authenticated users into the bastion host. After the AD-authenticated users are imported into the bastion host, the AD-authenticated users can log on to the bastion host to perform O\\&M operations on servers.
 * ### Limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetInstanceADAuthServerRequest
 * @return GetInstanceADAuthServerResponse
 */
GetInstanceADAuthServerResponse Client::getInstanceADAuthServer(const GetInstanceADAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceADAuthServerWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of Lightweight Directory Access Protocol (LDAP) authentication on a bastion host.
 *
 * @param request GetInstanceLDAPAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceLDAPAuthServerResponse
 */
GetInstanceLDAPAuthServerResponse Client::getInstanceLDAPAuthServerWithOptions(const GetInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceLDAPAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceLDAPAuthServerResponse>();
}

/**
 * @summary Queries the settings of Lightweight Directory Access Protocol (LDAP) authentication on a bastion host.
 *
 * @param request GetInstanceLDAPAuthServerRequest
 * @return GetInstanceLDAPAuthServerResponse
 */
GetInstanceLDAPAuthServerResponse Client::getInstanceLDAPAuthServer(const GetInstanceLDAPAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceLDAPAuthServerWithOptions(request, runtime);
}

/**
 * @summary 获取堡垒机实例存储信息
 *
 * @param request GetInstanceStoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceStoreInfoResponse
 */
GetInstanceStoreInfoResponse Client::getInstanceStoreInfoWithOptions(const GetInstanceStoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceStoreInfo"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceStoreInfoResponse>();
}

/**
 * @summary 获取堡垒机实例存储信息
 *
 * @param request GetInstanceStoreInfoRequest
 * @return GetInstanceStoreInfoResponse
 */
GetInstanceStoreInfoResponse Client::getInstanceStoreInfo(const GetInstanceStoreInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceStoreInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of two-factor authentication on a bastion host.
 *
 * @description You can call this operation to query the settings of two-factor authentication on a bastion host. After you enable two-factor authentication, Bastionhost sends a verification code to a local user when the local user logs on to a bastion host. A local user can log on to the bastion host only when the local user enters the valid username and password and the verification code. This reduces the security risks caused by account information leaks.
 * ### Limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetInstanceTwoFactorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceTwoFactorResponse
 */
GetInstanceTwoFactorResponse Client::getInstanceTwoFactorWithOptions(const GetInstanceTwoFactorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceTwoFactor"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceTwoFactorResponse>();
}

/**
 * @summary Queries the settings of two-factor authentication on a bastion host.
 *
 * @description You can call this operation to query the settings of two-factor authentication on a bastion host. After you enable two-factor authentication, Bastionhost sends a verification code to a local user when the local user logs on to a bastion host. A local user can log on to the bastion host only when the local user enters the valid username and password and the verification code. This reduces the security risks caused by account information leaks.
 * ### Limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetInstanceTwoFactorRequest
 * @return GetInstanceTwoFactorResponse
 */
GetInstanceTwoFactorResponse Client::getInstanceTwoFactor(const GetInstanceTwoFactorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceTwoFactorWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a network domain.
 *
 * @param request GetNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkDomainResponse
 */
GetNetworkDomainResponse Client::getNetworkDomainWithOptions(const GetNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckProxyState()) {
    query["CheckProxyState"] = request.getCheckProxyState();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkDomainResponse>();
}

/**
 * @summary Queries the detailed information about a network domain.
 *
 * @param request GetNetworkDomainRequest
 * @return GetNetworkDomainResponse
 */
GetNetworkDomainResponse Client::getNetworkDomain(const GetNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a control policy.
 *
 * @param request GetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicyWithOptions(const GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicy"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyResponse>();
}

/**
 * @summary Queries the detailed information about a control policy.
 *
 * @param request GetPolicyRequest
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const GetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the assets to which a control policy applies.
 *
 * @param request GetPolicyAssetScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyAssetScopeResponse
 */
GetPolicyAssetScopeResponse Client::getPolicyAssetScopeWithOptions(const GetPolicyAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyAssetScope"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyAssetScopeResponse>();
}

/**
 * @summary Queries the assets to which a control policy applies.
 *
 * @param request GetPolicyAssetScopeRequest
 * @return GetPolicyAssetScopeResponse
 */
GetPolicyAssetScopeResponse Client::getPolicyAssetScope(const GetPolicyAssetScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyAssetScopeWithOptions(request, runtime);
}

/**
 * @summary Queries the scope of users to whom a control policy applies.
 *
 * @param request GetPolicyUserScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyUserScopeResponse
 */
GetPolicyUserScopeResponse Client::getPolicyUserScopeWithOptions(const GetPolicyUserScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyUserScope"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyUserScopeResponse>();
}

/**
 * @summary Queries the scope of users to whom a control policy applies.
 *
 * @param request GetPolicyUserScopeRequest
 * @return GetPolicyUserScopeResponse
 */
GetPolicyUserScopeResponse Client::getPolicyUserScope(const GetPolicyUserScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyUserScopeWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about an authorization rule.
 *
 * @param request GetRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRuleWithOptions(const GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuleResponse>();
}

/**
 * @summary Queries the detailed information about an authorization rule.
 *
 * @param request GetRuleRequest
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRule(const GetRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a user of the specified bastion host.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Queries the details of a user of the specified bastion host.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a user group in a bastion host.
 *
 * @param request GetUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroupWithOptions(const GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserGroupResponse>();
}

/**
 * @summary Queries the details of a user group in a bastion host.
 *
 * @param request GetUserGroupRequest
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroup(const GetUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries commands to be reviewed.
 *
 * @description You can call this operation to query commands to be reviewed by a Bastionhost administrator.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListApproveCommandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApproveCommandsResponse
 */
ListApproveCommandsResponse Client::listApproveCommandsWithOptions(const ListApproveCommandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApproveCommands"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApproveCommandsResponse>();
}

/**
 * @summary Queries commands to be reviewed.
 *
 * @description You can call this operation to query commands to be reviewed by a Bastionhost administrator.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListApproveCommandsRequest
 * @return ListApproveCommandsResponse
 */
ListApproveCommandsResponse Client::listApproveCommands(const ListApproveCommandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApproveCommandsWithOptions(request, runtime);
}

/**
 * @summary Queries the database accounts of a database.
 *
 * @param request ListDatabaseAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseAccountsResponse
 */
ListDatabaseAccountsResponse Client::listDatabaseAccountsWithOptions(const ListDatabaseAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseAccounts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseAccountsResponse>();
}

/**
 * @summary Queries the database accounts of a database.
 *
 * @param request ListDatabaseAccountsRequest
 * @return ListDatabaseAccountsResponse
 */
ListDatabaseAccountsResponse Client::listDatabaseAccounts(const ListDatabaseAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabaseAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the database accounts of a database and whether a user is authorized to manage each database account.
 *
 * @param request ListDatabaseAccountsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseAccountsForUserResponse
 */
ListDatabaseAccountsForUserResponse Client::listDatabaseAccountsForUserWithOptions(const ListDatabaseAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseAccountsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseAccountsForUserResponse>();
}

/**
 * @summary Queries the database accounts of a database and whether a user is authorized to manage each database account.
 *
 * @param request ListDatabaseAccountsForUserRequest
 * @return ListDatabaseAccountsForUserResponse
 */
ListDatabaseAccountsForUserResponse Client::listDatabaseAccountsForUser(const ListDatabaseAccountsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabaseAccountsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the database accounts of a database and whether a user group is authorized to manage each database account.
 *
 * @param request ListDatabaseAccountsForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseAccountsForUserGroupResponse
 */
ListDatabaseAccountsForUserGroupResponse Client::listDatabaseAccountsForUserGroupWithOptions(const ListDatabaseAccountsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseAccountsForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseAccountsForUserGroupResponse>();
}

/**
 * @summary Queries the database accounts of a database and whether a user group is authorized to manage each database account.
 *
 * @param request ListDatabaseAccountsForUserGroupRequest
 * @return ListDatabaseAccountsForUserGroupResponse
 */
ListDatabaseAccountsForUserGroupResponse Client::listDatabaseAccountsForUserGroup(const ListDatabaseAccountsForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabaseAccountsForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the databases that are managed by a bastion host.
 *
 * @param request ListDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabasesWithOptions(const ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabases"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesResponse>();
}

/**
 * @summary Queries the databases that are managed by a bastion host.
 *
 * @param request ListDatabasesRequest
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const ListDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries the databases that a user is authorized to manage.
 *
 * @param request ListDatabasesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesForUserResponse
 */
ListDatabasesForUserResponse Client::listDatabasesForUserWithOptions(const ListDatabasesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAddress()) {
    query["DatabaseAddress"] = request.getDatabaseAddress();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabasesForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesForUserResponse>();
}

/**
 * @summary Queries the databases that a user is authorized to manage.
 *
 * @param request ListDatabasesForUserRequest
 * @return ListDatabasesForUserResponse
 */
ListDatabasesForUserResponse Client::listDatabasesForUser(const ListDatabasesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the databases that a user group is authorized to manage.
 *
 * @param request ListDatabasesForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesForUserGroupResponse
 */
ListDatabasesForUserGroupResponse Client::listDatabasesForUserGroupWithOptions(const ListDatabasesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAddress()) {
    query["DatabaseAddress"] = request.getDatabaseAddress();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabasesForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesForUserGroupResponse>();
}

/**
 * @summary Queries the databases that a user group is authorized to manage.
 *
 * @param request ListDatabasesForUserGroupRequest
 * @return ListDatabasesForUserGroupResponse
 */
ListDatabasesForUserGroupResponse Client::listDatabasesForUserGroup(const ListDatabasesForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries accounts of a specified host.
 *
 * @param request ListHostAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostAccountsResponse
 */
ListHostAccountsResponse Client::listHostAccountsWithOptions(const ListHostAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostAccounts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostAccountsResponse>();
}

/**
 * @summary Queries accounts of a specified host.
 *
 * @param request ListHostAccountsRequest
 * @return ListHostAccountsResponse
 */
ListHostAccountsResponse Client::listHostAccounts(const ListHostAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the host accounts that are associated with a shared key.
 *
 * @param request ListHostAccountsForHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostAccountsForHostShareKeyResponse
 */
ListHostAccountsForHostShareKeyResponse Client::listHostAccountsForHostShareKeyWithOptions(const ListHostAccountsForHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostAccountsForHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostAccountsForHostShareKeyResponse>();
}

/**
 * @summary Queries the host accounts that are associated with a shared key.
 *
 * @param request ListHostAccountsForHostShareKeyRequest
 * @return ListHostAccountsForHostShareKeyResponse
 */
ListHostAccountsForHostShareKeyResponse Client::listHostAccountsForHostShareKey(const ListHostAccountsForHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostAccountsForHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the host accounts that the specified user is authorized to manage on the specified host.
 *
 * @param request ListHostAccountsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostAccountsForUserResponse
 */
ListHostAccountsForUserResponse Client::listHostAccountsForUserWithOptions(const ListHostAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostAccountsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostAccountsForUserResponse>();
}

/**
 * @summary Queries the host accounts that the specified user is authorized to manage on the specified host.
 *
 * @param request ListHostAccountsForUserRequest
 * @return ListHostAccountsForUserResponse
 */
ListHostAccountsForUserResponse Client::listHostAccountsForUser(const ListHostAccountsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostAccountsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the host accounts of the specified host that the specified user group is authorized to manage.
 *
 * @param request ListHostAccountsForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostAccountsForUserGroupResponse
 */
ListHostAccountsForUserGroupResponse Client::listHostAccountsForUserGroupWithOptions(const ListHostAccountsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostAccountsForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostAccountsForUserGroupResponse>();
}

/**
 * @summary Queries the host accounts of the specified host that the specified user group is authorized to manage.
 *
 * @param request ListHostAccountsForUserGroupRequest
 * @return ListHostAccountsForUserGroupResponse
 */
ListHostAccountsForUserGroupResponse Client::listHostAccountsForUserGroup(const ListHostAccountsForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostAccountsForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the names of the host accounts that a specified user is authorized to manage in a specified host group.
 *
 * @param request ListHostGroupAccountNamesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupAccountNamesForUserResponse
 */
ListHostGroupAccountNamesForUserResponse Client::listHostGroupAccountNamesForUserWithOptions(const ListHostGroupAccountNamesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroupAccountNamesForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupAccountNamesForUserResponse>();
}

/**
 * @summary Queries the names of the host accounts that a specified user is authorized to manage in a specified host group.
 *
 * @param request ListHostGroupAccountNamesForUserRequest
 * @return ListHostGroupAccountNamesForUserResponse
 */
ListHostGroupAccountNamesForUserResponse Client::listHostGroupAccountNamesForUser(const ListHostGroupAccountNamesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupAccountNamesForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the names of the host accounts that a user group is authorized to manage in a host group.
 *
 * @param request ListHostGroupAccountNamesForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupAccountNamesForUserGroupResponse
 */
ListHostGroupAccountNamesForUserGroupResponse Client::listHostGroupAccountNamesForUserGroupWithOptions(const ListHostGroupAccountNamesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroupAccountNamesForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupAccountNamesForUserGroupResponse>();
}

/**
 * @summary Queries the names of the host accounts that a user group is authorized to manage in a host group.
 *
 * @param request ListHostGroupAccountNamesForUserGroupRequest
 * @return ListHostGroupAccountNamesForUserGroupResponse
 */
ListHostGroupAccountNamesForUserGroupResponse Client::listHostGroupAccountNamesForUserGroup(const ListHostGroupAccountNamesForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupAccountNamesForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries a list of asset groups that are managed by a bastion host.
 *
 * @param request ListHostGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupsResponse
 */
ListHostGroupsResponse Client::listHostGroupsWithOptions(const ListHostGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroups"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupsResponse>();
}

/**
 * @summary Queries a list of asset groups that are managed by a bastion host.
 *
 * @param request ListHostGroupsRequest
 * @return ListHostGroupsResponse
 */
ListHostGroupsResponse Client::listHostGroups(const ListHostGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of host groups that a bastion host user is authorized or is not authorized to manage.
 *
 * @param request ListHostGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupsForUserResponse
 */
ListHostGroupsForUserResponse Client::listHostGroupsForUserWithOptions(const ListHostGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroupsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupsForUserResponse>();
}

/**
 * @summary Queries a list of host groups that a bastion host user is authorized or is not authorized to manage.
 *
 * @param request ListHostGroupsForUserRequest
 * @return ListHostGroupsForUserResponse
 */
ListHostGroupsForUserResponse Client::listHostGroupsForUser(const ListHostGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the hosts that a specified user group is authorized or not authorized to manage.
 *
 * @param request ListHostGroupsForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupsForUserGroupResponse
 */
ListHostGroupsForUserGroupResponse Client::listHostGroupsForUserGroupWithOptions(const ListHostGroupsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroupsForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupsForUserGroupResponse>();
}

/**
 * @summary Queries the hosts that a specified user group is authorized or not authorized to manage.
 *
 * @param request ListHostGroupsForUserGroupRequest
 * @return ListHostGroupsForUserGroupResponse
 */
ListHostGroupsForUserGroupResponse Client::listHostGroupsForUserGroup(const ListHostGroupsForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupsForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the shared keys that are associated with a host.
 *
 * @param request ListHostShareKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostShareKeysResponse
 */
ListHostShareKeysResponse Client::listHostShareKeysWithOptions(const ListHostShareKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostShareKeys"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostShareKeysResponse>();
}

/**
 * @summary Queries the shared keys that are associated with a host.
 *
 * @param request ListHostShareKeysRequest
 * @return ListHostShareKeysResponse
 */
ListHostShareKeysResponse Client::listHostShareKeys(const ListHostShareKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostShareKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the hosts in a bastion host.
 *
 * @param request ListHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostsResponse
 */
ListHostsResponse Client::listHostsWithOptions(const ListHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourceInstanceState()) {
    query["SourceInstanceState"] = request.getSourceInstanceState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHosts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostsResponse>();
}

/**
 * @summary Queries the hosts in a bastion host.
 *
 * @param request ListHostsRequest
 * @return ListHostsResponse
 */
ListHostsResponse Client::listHosts(const ListHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostsWithOptions(request, runtime);
}

/**
 * @summary Queries the hosts that a user group is authorized or not authorized to manage.
 *
 * @param request ListHostsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostsForUserResponse
 */
ListHostsForUserResponse Client::listHostsForUserWithOptions(const ListHostsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostsForUserResponse>();
}

/**
 * @summary Queries the hosts that a user group is authorized or not authorized to manage.
 *
 * @param request ListHostsForUserRequest
 * @return ListHostsForUserResponse
 */
ListHostsForUserResponse Client::listHostsForUser(const ListHostsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the hosts that a user group is authorized or not authorized to manage.
 *
 * @param request ListHostsForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostsForUserGroupResponse
 */
ListHostsForUserGroupResponse Client::listHostsForUserGroupWithOptions(const ListHostsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostsForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostsForUserGroupResponse>();
}

/**
 * @summary Queries the hosts that a user group is authorized or not authorized to manage.
 *
 * @param request ListHostsForUserGroupRequest
 * @return ListHostsForUserGroupResponse
 */
ListHostsForUserGroupResponse Client::listHostsForUserGroup(const ListHostsForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostsForUserGroupWithOptions(request, runtime);
}

/**
 * @summary 获取RD成员账号列表
 *
 * @param request ListInstanceRdMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceRdMembersResponse
 */
ListInstanceRdMembersResponse Client::listInstanceRdMembersWithOptions(const ListInstanceRdMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceRdMembers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceRdMembersResponse>();
}

/**
 * @summary 获取RD成员账号列表
 *
 * @param request ListInstanceRdMembersRequest
 * @return ListInstanceRdMembersResponse
 */
ListInstanceRdMembersResponse Client::listInstanceRdMembers(const ListInstanceRdMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceRdMembersWithOptions(request, runtime);
}

/**
 * @summary Queries the network domains created in a bastion host.
 *
 * @param request ListNetworkDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkDomainsResponse
 */
ListNetworkDomainsResponse Client::listNetworkDomainsWithOptions(const ListNetworkDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainName()) {
    query["NetworkDomainName"] = request.getNetworkDomainName();
  }

  if (!!request.hasNetworkDomainType()) {
    query["NetworkDomainType"] = request.getNetworkDomainType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNetworkDomains"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkDomainsResponse>();
}

/**
 * @summary Queries the network domains created in a bastion host.
 *
 * @param request ListNetworkDomainsRequest
 * @return ListNetworkDomainsResponse
 */
ListNetworkDomainsResponse Client::listNetworkDomains(const ListNetworkDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of database accounts that the current Resource Access Management (RAM) user is authorized to manage.
 *
 * @param request ListOperationDatabaseAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationDatabaseAccountsResponse
 */
ListOperationDatabaseAccountsResponse Client::listOperationDatabaseAccountsWithOptions(const ListOperationDatabaseAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationDatabaseAccounts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationDatabaseAccountsResponse>();
}

/**
 * @summary Queries a list of database accounts that the current Resource Access Management (RAM) user is authorized to manage.
 *
 * @param request ListOperationDatabaseAccountsRequest
 * @return ListOperationDatabaseAccountsResponse
 */
ListOperationDatabaseAccountsResponse Client::listOperationDatabaseAccounts(const ListOperationDatabaseAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationDatabaseAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases that the current Resource Access Management (RAM) user is authorized to manage.
 *
 * @param request ListOperationDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationDatabasesResponse
 */
ListOperationDatabasesResponse Client::listOperationDatabasesWithOptions(const ListOperationDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAddress()) {
    query["DatabaseAddress"] = request.getDatabaseAddress();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourceInstanceState()) {
    query["SourceInstanceState"] = request.getSourceInstanceState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationDatabases"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationDatabasesResponse>();
}

/**
 * @summary Queries a list of databases that the current Resource Access Management (RAM) user is authorized to manage.
 *
 * @param request ListOperationDatabasesRequest
 * @return ListOperationDatabasesResponse
 */
ListOperationDatabasesResponse Client::listOperationDatabases(const ListOperationDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of host accounts that the current Resource Access Management (RAM) user is authorized to manage.
 *
 * @param request ListOperationHostAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationHostAccountsResponse
 */
ListOperationHostAccountsResponse Client::listOperationHostAccountsWithOptions(const ListOperationHostAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationHostAccounts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationHostAccountsResponse>();
}

/**
 * @summary Queries a list of host accounts that the current Resource Access Management (RAM) user is authorized to manage.
 *
 * @param request ListOperationHostAccountsRequest
 * @return ListOperationHostAccountsResponse
 */
ListOperationHostAccountsResponse Client::listOperationHostAccounts(const ListOperationHostAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationHostAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of hosts that the current Resource Access Management (RAM) user is authorized to manage.
 *
 * @param request ListOperationHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationHostsResponse
 */
ListOperationHostsResponse Client::listOperationHostsWithOptions(const ListOperationHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourceInstanceState()) {
    query["SourceInstanceState"] = request.getSourceInstanceState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationHosts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationHostsResponse>();
}

/**
 * @summary Queries a list of hosts that the current Resource Access Management (RAM) user is authorized to manage.
 *
 * @param request ListOperationHostsRequest
 * @return ListOperationHostsResponse
 */
ListOperationHostsResponse Client::listOperationHosts(const ListOperationHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationHostsWithOptions(request, runtime);
}

/**
 * @summary Queries O\\\\\\\\\\\\&M applications to be reviewed.
 *
 * @description You can call this operation to query the O\\&M applications to be reviewed by a Bastionhost administrator.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListOperationTicketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationTicketsResponse
 */
ListOperationTicketsResponse Client::listOperationTicketsWithOptions(const ListOperationTicketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetAddress()) {
    query["AssetAddress"] = request.getAssetAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationTickets"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationTicketsResponse>();
}

/**
 * @summary Queries O\\\\\\\\\\\\&M applications to be reviewed.
 *
 * @description You can call this operation to query the O\\&M applications to be reviewed by a Bastionhost administrator.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListOperationTicketsRequest
 * @return ListOperationTicketsResponse
 */
ListOperationTicketsResponse Client::listOperationTickets(const ListOperationTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationTicketsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of control policies.
 *
 * @param request ListPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicies"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesResponse>();
}

/**
 * @summary Queries a list of control policies.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of authorization rules of a bastion host.
 *
 * @param request ListRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRulesWithOptions(const ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleState()) {
    query["RuleState"] = request.getRuleState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRules"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRulesResponse>();
}

/**
 * @summary Queries a list of authorization rules of a bastion host.
 *
 * @param request ListRulesRequest
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRules(const ListRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to a resource.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries the tags that are added to a resource.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags bound to one or more Bastionhost instances.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags bound to one or more Bastionhost instances.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of user groups on a bastion host.
 *
 * @param request ListUserGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroupsWithOptions(const ListUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroups"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsResponse>();
}

/**
 * @summary Queries a list of user groups on a bastion host.
 *
 * @param request ListUserGroupsRequest
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroups(const ListUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries all public keys of the specified user.
 *
 * @param request ListUserPublicKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserPublicKeysResponse
 */
ListUserPublicKeysResponse Client::listUserPublicKeysWithOptions(const ListUserPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserPublicKeys"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserPublicKeysResponse>();
}

/**
 * @summary Queries all public keys of the specified user.
 *
 * @param request ListUserPublicKeysRequest
 * @return ListUserPublicKeysResponse
 */
ListUserPublicKeysResponse Client::listUserPublicKeys(const ListUserPublicKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPublicKeysWithOptions(request, runtime);
}

/**
 * @summary Queries a list of users of a bastion host.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceUserId()) {
    query["SourceUserId"] = request.getSourceUserId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasUserState()) {
    query["UserState"] = request.getUserState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Queries a list of users of a bastion host.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Locks one or more users of a bastion host.
 *
 * @description # Description
 * You can call this operation to lock one or more users of a bastion host. If a user does not need to use a bastion host to perform O\\&M operations within a specific period of time, you can lock the user. The locked user can no longer log on to or perform O\\&M operations on the hosts on which the user is granted permissions. If you want to unlock the user later, you can call the [UnlockUsers](https://help.aliyun.com/document_detail/204590.html) operation.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request LockUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockUsersResponse
 */
LockUsersResponse Client::lockUsersWithOptions(const LockUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LockUsers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LockUsersResponse>();
}

/**
 * @summary Locks one or more users of a bastion host.
 *
 * @description # Description
 * You can call this operation to lock one or more users of a bastion host. If a user does not need to use a bastion host to perform O\\&M operations within a specific period of time, you can lock the user. The locked user can no longer log on to or perform O\\&M operations on the hosts on which the user is granted permissions. If you want to unlock the user later, you can call the [UnlockUsers](https://help.aliyun.com/document_detail/204590.html) operation.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request LockUsersRequest
 * @return LockUsersResponse
 */
LockUsersResponse Client::lockUsers(const LockUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockUsersWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information about a database.
 *
 * @param request ModifyDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseResponse
 */
ModifyDatabaseResponse Client::modifyDatabaseWithOptions(const ModifyDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAddressType()) {
    query["ActiveAddressType"] = request.getActiveAddressType();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabasePort()) {
    query["DatabasePort"] = request.getDatabasePort();
  }

  if (!!request.hasDatabasePrivateAddress()) {
    query["DatabasePrivateAddress"] = request.getDatabasePrivateAddress();
  }

  if (!!request.hasDatabasePublicAddress()) {
    query["DatabasePublicAddress"] = request.getDatabasePublicAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabase"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabaseResponse>();
}

/**
 * @summary Modifies the basic information about a database.
 *
 * @param request ModifyDatabaseRequest
 * @return ModifyDatabaseResponse
 */
ModifyDatabaseResponse Client::modifyDatabase(const ModifyDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information about a database account.
 *
 * @param request ModifyDatabaseAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseAccountResponse
 */
ModifyDatabaseAccountResponse Client::modifyDatabaseAccountWithOptions(const ModifyDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountId()) {
    query["DatabaseAccountId"] = request.getDatabaseAccountId();
  }

  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseSchema()) {
    query["DatabaseSchema"] = request.getDatabaseSchema();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabaseAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabaseAccountResponse>();
}

/**
 * @summary Modifies the basic information about a database account.
 *
 * @param request ModifyDatabaseAccountRequest
 * @return ModifyDatabaseAccountResponse
 */
ModifyDatabaseAccountResponse Client::modifyDatabaseAccount(const ModifyDatabaseAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseAccountWithOptions(request, runtime);
}

/**
 * @summary Modifies information about a host. The information includes the address, name, and description of the host and the operating system that the host runs.
 *
 * @description You can call the ModifyHost operation to modify the basic information about a host in a data center, an Elastic Compute Service (ECS) instance, or a host in an ApsaraDB MyBase dedicated cluster.
 * > The basic information about ECS instances and hosts in ApsaraDB MyBase dedicated clusters within your Alibaba Cloud account is synchronized to Bastionhost on a regular basis. After you modify the basic information about an ECS instance or a host in an ApsaraDB MyBase dedicated cluster, the modification result may be overwritten by the synchronized information.
 *
 * @param request ModifyHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostResponse
 */
ModifyHostResponse Client::modifyHostWithOptions(const ModifyHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasHostPrivateAddress()) {
    query["HostPrivateAddress"] = request.getHostPrivateAddress();
  }

  if (!!request.hasHostPublicAddress()) {
    query["HostPublicAddress"] = request.getHostPublicAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasPrefKex()) {
    query["PrefKex"] = request.getPrefKex();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostResponse>();
}

/**
 * @summary Modifies information about a host. The information includes the address, name, and description of the host and the operating system that the host runs.
 *
 * @description You can call the ModifyHost operation to modify the basic information about a host in a data center, an Elastic Compute Service (ECS) instance, or a host in an ApsaraDB MyBase dedicated cluster.
 * > The basic information about ECS instances and hosts in ApsaraDB MyBase dedicated clusters within your Alibaba Cloud account is synchronized to Bastionhost on a regular basis. After you modify the basic information about an ECS instance or a host in an ApsaraDB MyBase dedicated cluster, the modification result may be overwritten by the synchronized information.
 *
 * @param request ModifyHostRequest
 * @return ModifyHostResponse
 */
ModifyHostResponse Client::modifyHost(const ModifyHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a host account, such as the username, password, and private key of the host account.
 *
 * @param request ModifyHostAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostAccountResponse
 */
ModifyHostAccountResponse Client::modifyHostAccountWithOptions(const ModifyHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountId()) {
    query["HostAccountId"] = request.getHostAccountId();
  }

  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassPhrase()) {
    query["PassPhrase"] = request.getPassPhrase();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasPrivilegeType()) {
    query["PrivilegeType"] = request.getPrivilegeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRotationMode()) {
    query["RotationMode"] = request.getRotationMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostAccountResponse>();
}

/**
 * @summary Modifies the information about a host account, such as the username, password, and private key of the host account.
 *
 * @param request ModifyHostAccountRequest
 * @return ModifyHostAccountResponse
 */
ModifyHostAccountResponse Client::modifyHostAccount(const ModifyHostAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostAccountWithOptions(request, runtime);
}

/**
 * @summary Modifies the name or description of the specified host group.
 *
 * @param request ModifyHostGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostGroupResponse
 */
ModifyHostGroupResponse Client::modifyHostGroupWithOptions(const ModifyHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostGroupResponse>();
}

/**
 * @summary Modifies the name or description of the specified host group.
 *
 * @param request ModifyHostGroupRequest
 * @return ModifyHostGroupResponse
 */
ModifyHostGroupResponse Client::modifyHostGroup(const ModifyHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies a shared key.
 *
 * @param request ModifyHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostShareKeyResponse
 */
ModifyHostShareKeyResponse Client::modifyHostShareKeyWithOptions(const ModifyHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasHostShareKeyName()) {
    query["HostShareKeyName"] = request.getHostShareKeyName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassPhrase()) {
    query["PassPhrase"] = request.getPassPhrase();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostShareKeyResponse>();
}

/**
 * @summary Modifies a shared key.
 *
 * @param request ModifyHostShareKeyRequest
 * @return ModifyHostShareKeyResponse
 */
ModifyHostShareKeyResponse Client::modifyHostShareKey(const ModifyHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Changes the portal type of one or more hosts for O\\&M.
 *
 * @param request ModifyHostsActiveAddressTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostsActiveAddressTypeResponse
 */
ModifyHostsActiveAddressTypeResponse Client::modifyHostsActiveAddressTypeWithOptions(const ModifyHostsActiveAddressTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAddressType()) {
    query["ActiveAddressType"] = request.getActiveAddressType();
  }

  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostsActiveAddressType"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostsActiveAddressTypeResponse>();
}

/**
 * @summary Changes the portal type of one or more hosts for O\\&M.
 *
 * @param request ModifyHostsActiveAddressTypeRequest
 * @return ModifyHostsActiveAddressTypeResponse
 */
ModifyHostsActiveAddressTypeResponse Client::modifyHostsActiveAddressType(const ModifyHostsActiveAddressTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostsActiveAddressTypeWithOptions(request, runtime);
}

/**
 * @summary Changes the port for the O\\\\\\\\\\\\&M protocol on one or more hosts.
 *
 * @description ## Usage notes
 * You can call this operation to change the port for the O&M protocol on one or more hosts. If the standard port for the O&M protocol on your host is vulnerable to attacks, you can call this operation to specify a custom port. For example, the standard port for SSH is port 22.  
 * >  Ports 0 to 1024 are reserved for Bastionhost. Do not change the port for the O&M protocol to a reserved port.  
 * ## QPS limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyHostsPortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostsPortResponse
 */
ModifyHostsPortResponse Client::modifyHostsPortWithOptions(const ModifyHostsPortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostsPort"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostsPortResponse>();
}

/**
 * @summary Changes the port for the O\\\\\\\\\\\\&M protocol on one or more hosts.
 *
 * @description ## Usage notes
 * You can call this operation to change the port for the O&M protocol on one or more hosts. If the standard port for the O&M protocol on your host is vulnerable to attacks, you can call this operation to specify a custom port. For example, the standard port for SSH is port 22.  
 * >  Ports 0 to 1024 are reserved for Bastionhost. Do not change the port for the O&M protocol to a reserved port.  
 * ## QPS limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyHostsPortRequest
 * @return ModifyHostsPortResponse
 */
ModifyHostsPortResponse Client::modifyHostsPort(const ModifyHostsPortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostsPortWithOptions(request, runtime);
}

/**
 * @summary Modifies the settings of the Active Directory (AD) authentication server of a bastion host.
 *
 * @param request ModifyInstanceADAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceADAuthServerResponse
 */
ModifyInstanceADAuthServerResponse Client::modifyInstanceADAuthServerWithOptions(const ModifyInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasBaseDN()) {
    query["BaseDN"] = request.getBaseDN();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEmailMapping()) {
    query["EmailMapping"] = request.getEmailMapping();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSSL()) {
    query["IsSSL"] = request.getIsSSL();
  }

  if (!!request.hasMobileMapping()) {
    query["MobileMapping"] = request.getMobileMapping();
  }

  if (!!request.hasNameMapping()) {
    query["NameMapping"] = request.getNameMapping();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServer()) {
    query["Server"] = request.getServer();
  }

  if (!!request.hasStandbyServer()) {
    query["StandbyServer"] = request.getStandbyServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceADAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceADAuthServerResponse>();
}

/**
 * @summary Modifies the settings of the Active Directory (AD) authentication server of a bastion host.
 *
 * @param request ModifyInstanceADAuthServerRequest
 * @return ModifyInstanceADAuthServerResponse
 */
ModifyInstanceADAuthServerResponse Client::modifyInstanceADAuthServer(const ModifyInstanceADAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceADAuthServerWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a bastion host.
 *
 * @param request ModifyInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttributeWithOptions(const ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAttribute"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAttributeResponse>();
}

/**
 * @summary Modifies the information about a bastion host.
 *
 * @param request ModifyInstanceAttributeRequest
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the settings of the Lightweight Directory Access Protocol (LDAP) authentication server of a bastion host.
 *
 * @param request ModifyInstanceLDAPAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceLDAPAuthServerResponse
 */
ModifyInstanceLDAPAuthServerResponse Client::modifyInstanceLDAPAuthServerWithOptions(const ModifyInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasBaseDN()) {
    query["BaseDN"] = request.getBaseDN();
  }

  if (!!request.hasEmailMapping()) {
    query["EmailMapping"] = request.getEmailMapping();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSSL()) {
    query["IsSSL"] = request.getIsSSL();
  }

  if (!!request.hasLoginNameMapping()) {
    query["LoginNameMapping"] = request.getLoginNameMapping();
  }

  if (!!request.hasMobileMapping()) {
    query["MobileMapping"] = request.getMobileMapping();
  }

  if (!!request.hasNameMapping()) {
    query["NameMapping"] = request.getNameMapping();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServer()) {
    query["Server"] = request.getServer();
  }

  if (!!request.hasStandbyServer()) {
    query["StandbyServer"] = request.getStandbyServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceLDAPAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceLDAPAuthServerResponse>();
}

/**
 * @summary Modifies the settings of the Lightweight Directory Access Protocol (LDAP) authentication server of a bastion host.
 *
 * @param request ModifyInstanceLDAPAuthServerRequest
 * @return ModifyInstanceLDAPAuthServerResponse
 */
ModifyInstanceLDAPAuthServerResponse Client::modifyInstanceLDAPAuthServer(const ModifyInstanceLDAPAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceLDAPAuthServerWithOptions(request, runtime);
}

/**
 * @summary Modifies the two-factor authentication settings of a bastion host.
 *
 * @param request ModifyInstanceTwoFactorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceTwoFactorResponse
 */
ModifyInstanceTwoFactorResponse Client::modifyInstanceTwoFactorWithOptions(const ModifyInstanceTwoFactorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableTwoFactor()) {
    query["EnableTwoFactor"] = request.getEnableTwoFactor();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkipTwoFactorTime()) {
    query["SkipTwoFactorTime"] = request.getSkipTwoFactorTime();
  }

  if (!!request.hasTwoFactorMethods()) {
    query["TwoFactorMethods"] = request.getTwoFactorMethods();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceTwoFactor"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceTwoFactorResponse>();
}

/**
 * @summary Modifies the two-factor authentication settings of a bastion host.
 *
 * @param request ModifyInstanceTwoFactorRequest
 * @return ModifyInstanceTwoFactorResponse
 */
ModifyInstanceTwoFactorResponse Client::modifyInstanceTwoFactor(const ModifyInstanceTwoFactorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceTwoFactorWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information about a network domain.
 *
 * @param request ModifyNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNetworkDomainResponse
 */
ModifyNetworkDomainResponse Client::modifyNetworkDomainWithOptions(const ModifyNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasNetworkDomainName()) {
    query["NetworkDomainName"] = request.getNetworkDomainName();
  }

  if (!!request.hasNetworkDomainType()) {
    query["NetworkDomainType"] = request.getNetworkDomainType();
  }

  if (!!request.hasProxies()) {
    query["Proxies"] = request.getProxies();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNetworkDomainResponse>();
}

/**
 * @summary Modifies the basic information about a network domain.
 *
 * @param request ModifyNetworkDomainRequest
 * @return ModifyNetworkDomainResponse
 */
ModifyNetworkDomainResponse Client::modifyNetworkDomain(const ModifyNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information about a control policy.
 *
 * @param request ModifyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyResponse
 */
ModifyPolicyResponse Client::modifyPolicyWithOptions(const ModifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPolicy"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolicyResponse>();
}

/**
 * @summary Modifies the basic information about a control policy.
 *
 * @param request ModifyPolicyRequest
 * @return ModifyPolicyResponse
 */
ModifyPolicyResponse Client::modifyPolicy(const ModifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information of an authorization rule.
 *
 * @param request ModifyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRuleResponse
 */
ModifyRuleResponse Client::modifyRuleWithOptions(const ModifyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasEffectiveEndTime()) {
    query["EffectiveEndTime"] = request.getEffectiveEndTime();
  }

  if (!!request.hasEffectiveStartTime()) {
    query["EffectiveStartTime"] = request.getEffectiveStartTime();
  }

  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRuleResponse>();
}

/**
 * @summary Modifies the basic information of an authorization rule.
 *
 * @param request ModifyRuleRequest
 * @return ModifyRuleResponse
 */
ModifyRuleResponse Client::modifyRule(const ModifyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a user of a bastion host.
 *
 * @param request ModifyUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUserWithOptions(const ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEffectiveEndTime()) {
    query["EffectiveEndTime"] = request.getEffectiveEndTime();
  }

  if (!!request.hasEffectiveStartTime()) {
    query["EffectiveStartTime"] = request.getEffectiveStartTime();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasLanguageStatus()) {
    query["LanguageStatus"] = request.getLanguageStatus();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasMobileCountryCode()) {
    query["MobileCountryCode"] = request.getMobileCountryCode();
  }

  if (!!request.hasNeedResetPassword()) {
    query["NeedResetPassword"] = request.getNeedResetPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTwoFactorMethods()) {
    query["TwoFactorMethods"] = request.getTwoFactorMethods();
  }

  if (!!request.hasTwoFactorStatus()) {
    query["TwoFactorStatus"] = request.getTwoFactorStatus();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserResponse>();
}

/**
 * @summary Modifies the information about a user of a bastion host.
 *
 * @param request ModifyUserRequest
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUser(const ModifyUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about the specified user group.
 *
 * @param request ModifyUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserGroupResponse
 */
ModifyUserGroupResponse Client::modifyUserGroupWithOptions(const ModifyUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserGroupResponse>();
}

/**
 * @summary Modifies the information about the specified user group.
 *
 * @param request ModifyUserGroupRequest
 * @return ModifyUserGroupResponse
 */
ModifyUserGroupResponse Client::modifyUserGroup(const ModifyUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the public key of the user.
 *
 * @param request ModifyUserPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserPublicKeyResponse
 */
ModifyUserPublicKeyResponse Client::modifyUserPublicKeyWithOptions(const ModifyUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPublicKey()) {
    query["PublicKey"] = request.getPublicKey();
  }

  if (!!request.hasPublicKeyId()) {
    query["PublicKeyId"] = request.getPublicKeyId();
  }

  if (!!request.hasPublicKeyName()) {
    query["PublicKeyName"] = request.getPublicKeyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserPublicKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserPublicKeyResponse>();
}

/**
 * @summary Modifies the public key of the user.
 *
 * @param request ModifyUserPublicKeyRequest
 * @return ModifyUserPublicKeyResponse
 */
ModifyUserPublicKeyResponse Client::modifyUserPublicKey(const ModifyUserPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Adds multiple databases to a network domain at a time.
 *
 * @param request MoveDatabasesToNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveDatabasesToNetworkDomainResponse
 */
MoveDatabasesToNetworkDomainResponse Client::moveDatabasesToNetworkDomainWithOptions(const MoveDatabasesToNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseIds()) {
    query["DatabaseIds"] = request.getDatabaseIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveDatabasesToNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveDatabasesToNetworkDomainResponse>();
}

/**
 * @summary Adds multiple databases to a network domain at a time.
 *
 * @param request MoveDatabasesToNetworkDomainRequest
 * @return MoveDatabasesToNetworkDomainResponse
 */
MoveDatabasesToNetworkDomainResponse Client::moveDatabasesToNetworkDomain(const MoveDatabasesToNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveDatabasesToNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Adds multiple hosts to a network domain at a time.
 *
 * @param request MoveHostsToNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveHostsToNetworkDomainResponse
 */
MoveHostsToNetworkDomainResponse Client::moveHostsToNetworkDomainWithOptions(const MoveHostsToNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveHostsToNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveHostsToNetworkDomainResponse>();
}

/**
 * @summary Adds multiple hosts to a network domain at a time.
 *
 * @param request MoveHostsToNetworkDomainRequest
 * @return MoveHostsToNetworkDomainResponse
 */
MoveHostsToNetworkDomainResponse Client::moveHostsToNetworkDomain(const MoveHostsToNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveHostsToNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Moves a bastion host from one resource group to another resource group.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Moves a bastion host from one resource group to another resource group.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary If an O\\&M engineer attempts to run a command specified in the Command Approval section of the Create Control Policy page, the administrator is notified to review the command in the Bastionhost console. The command can be run only after it is approved by the administrator.
 *
 * @description You can call this operation as a Bastionhost administrator to reject the request to run a command of an O\\&M engineer.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request RejectApproveCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectApproveCommandResponse
 */
RejectApproveCommandResponse Client::rejectApproveCommandWithOptions(const RejectApproveCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectApproveCommand"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectApproveCommandResponse>();
}

/**
 * @summary If an O\\&M engineer attempts to run a command specified in the Command Approval section of the Create Control Policy page, the administrator is notified to review the command in the Bastionhost console. The command can be run only after it is approved by the administrator.
 *
 * @description You can call this operation as a Bastionhost administrator to reject the request to run a command of an O\\&M engineer.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request RejectApproveCommandRequest
 * @return RejectApproveCommandResponse
 */
RejectApproveCommandResponse Client::rejectApproveCommand(const RejectApproveCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectApproveCommandWithOptions(request, runtime);
}

/**
 * @summary If a Bastionhost administrator enables O\\\\\\&M Approval on the Create Control Policy page, O\\\\\\&M engineers can log on to assets to perform O\\\\\\&M operations only after the administrator approves their O\\\\\\&M applications.
 *
 * @description You can call this operation to reject an O\\&M application of an O\\&M engineer as a Bastionhost administrator.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request RejectOperationTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectOperationTicketResponse
 */
RejectOperationTicketResponse Client::rejectOperationTicketWithOptions(const RejectOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperationTicketId()) {
    query["OperationTicketId"] = request.getOperationTicketId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectOperationTicket"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectOperationTicketResponse>();
}

/**
 * @summary If a Bastionhost administrator enables O\\\\\\&M Approval on the Create Control Policy page, O\\\\\\&M engineers can log on to assets to perform O\\\\\\&M operations only after the administrator approves their O\\\\\\&M applications.
 *
 * @description You can call this operation to reject an O\\&M application of an O\\&M engineer as a Bastionhost administrator.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request RejectOperationTicketRequest
 * @return RejectOperationTicketResponse
 */
RejectOperationTicketResponse Client::rejectOperationTicket(const RejectOperationTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectOperationTicketWithOptions(request, runtime);
}

/**
 * @summary Removes multiple databases from an asset group at a time.
 *
 * @param request RemoveDatabasesFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDatabasesFromGroupResponse
 */
RemoveDatabasesFromGroupResponse Client::removeDatabasesFromGroupWithOptions(const RemoveDatabasesFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseIds()) {
    query["DatabaseIds"] = request.getDatabaseIds();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDatabasesFromGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDatabasesFromGroupResponse>();
}

/**
 * @summary Removes multiple databases from an asset group at a time.
 *
 * @param request RemoveDatabasesFromGroupRequest
 * @return RemoveDatabasesFromGroupResponse
 */
RemoveDatabasesFromGroupResponse Client::removeDatabasesFromGroup(const RemoveDatabasesFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDatabasesFromGroupWithOptions(request, runtime);
}

/**
 * @summary Removes multiple hosts from an asset group at a time.
 *
 * @description You can call the RemoveHostsFromGroup operation to remove multiple hosts from an asset group at a time. If you no longer need to manage some hosts in an asset group, you can call this operation to remove the hosts from the asset group.
 * # [](#qps-)QPS limit
 * You can call this API operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request RemoveHostsFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveHostsFromGroupResponse
 */
RemoveHostsFromGroupResponse Client::removeHostsFromGroupWithOptions(const RemoveHostsFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveHostsFromGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveHostsFromGroupResponse>();
}

/**
 * @summary Removes multiple hosts from an asset group at a time.
 *
 * @description You can call the RemoveHostsFromGroup operation to remove multiple hosts from an asset group at a time. If you no longer need to manage some hosts in an asset group, you can call this operation to remove the hosts from the asset group.
 * # [](#qps-)QPS limit
 * You can call this API operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request RemoveHostsFromGroupRequest
 * @return RemoveHostsFromGroupResponse
 */
RemoveHostsFromGroupResponse Client::removeHostsFromGroup(const RemoveHostsFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeHostsFromGroupWithOptions(request, runtime);
}

/**
 * @summary 移除RD成员账号
 *
 * @param request RemoveInstanceRdMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveInstanceRdMemberResponse
 */
RemoveInstanceRdMemberResponse Client::removeInstanceRdMemberWithOptions(const RemoveInstanceRdMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveInstanceRdMember"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveInstanceRdMemberResponse>();
}

/**
 * @summary 移除RD成员账号
 *
 * @param request RemoveInstanceRdMemberRequest
 * @return RemoveInstanceRdMemberResponse
 */
RemoveInstanceRdMemberResponse Client::removeInstanceRdMember(const RemoveInstanceRdMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeInstanceRdMemberWithOptions(request, runtime);
}

/**
 * @summary Removes one or more users from a user group.
 *
 * @description You can call this operation to remove one or more users from a user group. When users in a user group are transferred to a new position, resign, or are switched to another user group, you can call this operation to remove the users from the current user group at a time.  
 * ## QPS limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request RemoveUsersFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersFromGroupResponse
 */
RemoveUsersFromGroupResponse Client::removeUsersFromGroupWithOptions(const RemoveUsersFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUsersFromGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUsersFromGroupResponse>();
}

/**
 * @summary Removes one or more users from a user group.
 *
 * @description You can call this operation to remove one or more users from a user group. When users in a user group are transferred to a new position, resign, or are switched to another user group, you can call this operation to remove the users from the current user group at a time.  
 * ## QPS limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request RemoveUsersFromGroupRequest
 * @return RemoveUsersFromGroupResponse
 */
RemoveUsersFromGroupResponse Client::removeUsersFromGroup(const RemoveUsersFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersFromGroupWithOptions(request, runtime);
}

/**
 * @summary Renews an O\\&M token for one hour.
 *
 * @param request RenewAssetOperationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAssetOperationTokenResponse
 */
RenewAssetOperationTokenResponse Client::renewAssetOperationTokenWithOptions(const RenewAssetOperationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTokenId()) {
    query["TokenId"] = request.getTokenId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewAssetOperationToken"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAssetOperationTokenResponse>();
}

/**
 * @summary Renews an O\\&M token for one hour.
 *
 * @param request RenewAssetOperationTokenRequest
 * @return RenewAssetOperationTokenResponse
 */
RenewAssetOperationTokenResponse Client::renewAssetOperationToken(const RenewAssetOperationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAssetOperationTokenWithOptions(request, runtime);
}

/**
 * @summary Deletes the logon credential of a specified host account. The logon credential can be the password or Secure Shell (SSH) private key.
 *
 * @param request ResetHostAccountCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetHostAccountCredentialResponse
 */
ResetHostAccountCredentialResponse Client::resetHostAccountCredentialWithOptions(const ResetHostAccountCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialType()) {
    query["CredentialType"] = request.getCredentialType();
  }

  if (!!request.hasHostAccountId()) {
    query["HostAccountId"] = request.getHostAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetHostAccountCredential"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetHostAccountCredentialResponse>();
}

/**
 * @summary Deletes the logon credential of a specified host account. The logon credential can be the password or Secure Shell (SSH) private key.
 *
 * @param request ResetHostAccountCredentialRequest
 * @return ResetHostAccountCredentialResponse
 */
ResetHostAccountCredentialResponse Client::resetHostAccountCredential(const ResetHostAccountCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetHostAccountCredentialWithOptions(request, runtime);
}

/**
 * @summary Configures the logon period limits in a control policy.
 *
 * @param tmpReq SetPolicyAccessTimeRangeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyAccessTimeRangeConfigResponse
 */
SetPolicyAccessTimeRangeConfigResponse Client::setPolicyAccessTimeRangeConfigWithOptions(const SetPolicyAccessTimeRangeConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyAccessTimeRangeConfigShrinkRequest request = SetPolicyAccessTimeRangeConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccessTimeRangeConfig()) {
    request.setAccessTimeRangeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccessTimeRangeConfig(), "AccessTimeRangeConfig", "json"));
  }

  json query = {};
  if (!!request.hasAccessTimeRangeConfigShrink()) {
    query["AccessTimeRangeConfig"] = request.getAccessTimeRangeConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyAccessTimeRangeConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyAccessTimeRangeConfigResponse>();
}

/**
 * @summary Configures the logon period limits in a control policy.
 *
 * @param request SetPolicyAccessTimeRangeConfigRequest
 * @return SetPolicyAccessTimeRangeConfigResponse
 */
SetPolicyAccessTimeRangeConfigResponse Client::setPolicyAccessTimeRangeConfig(const SetPolicyAccessTimeRangeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyAccessTimeRangeConfigWithOptions(request, runtime);
}

/**
 * @summary Configures the O&M approval setting in a control policy.
 *
 * @param tmpReq SetPolicyApprovalConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyApprovalConfigResponse
 */
SetPolicyApprovalConfigResponse Client::setPolicyApprovalConfigWithOptions(const SetPolicyApprovalConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyApprovalConfigShrinkRequest request = SetPolicyApprovalConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApprovalConfig()) {
    request.setApprovalConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApprovalConfig(), "ApprovalConfig", "json"));
  }

  json query = {};
  if (!!request.hasApprovalConfigShrink()) {
    query["ApprovalConfig"] = request.getApprovalConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyApprovalConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyApprovalConfigResponse>();
}

/**
 * @summary Configures the O&M approval setting in a control policy.
 *
 * @param request SetPolicyApprovalConfigRequest
 * @return SetPolicyApprovalConfigResponse
 */
SetPolicyApprovalConfigResponse Client::setPolicyApprovalConfig(const SetPolicyApprovalConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyApprovalConfigWithOptions(request, runtime);
}

/**
 * @summary Specifies the assets to which a control policy applies.
 *
 * @param request SetPolicyAssetScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyAssetScopeResponse
 */
SetPolicyAssetScopeResponse Client::setPolicyAssetScopeWithOptions(const SetPolicyAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyAssetScope"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyAssetScopeResponse>();
}

/**
 * @summary Specifies the assets to which a control policy applies.
 *
 * @param request SetPolicyAssetScopeRequest
 * @return SetPolicyAssetScopeResponse
 */
SetPolicyAssetScopeResponse Client::setPolicyAssetScope(const SetPolicyAssetScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyAssetScopeWithOptions(request, runtime);
}

/**
 * @summary Specifies the commands that can or cannot be run by the users or on the assets associated with the policy and the commands that must be reviewed.
 *
 * @param tmpReq SetPolicyCommandConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyCommandConfigResponse
 */
SetPolicyCommandConfigResponse Client::setPolicyCommandConfigWithOptions(const SetPolicyCommandConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyCommandConfigShrinkRequest request = SetPolicyCommandConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommandConfig()) {
    request.setCommandConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommandConfig(), "CommandConfig", "json"));
  }

  json query = {};
  if (!!request.hasCommandConfigShrink()) {
    query["CommandConfig"] = request.getCommandConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyCommandConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyCommandConfigResponse>();
}

/**
 * @summary Specifies the commands that can or cannot be run by the users or on the assets associated with the policy and the commands that must be reviewed.
 *
 * @param request SetPolicyCommandConfigRequest
 * @return SetPolicyCommandConfigResponse
 */
SetPolicyCommandConfigResponse Client::setPolicyCommandConfig(const SetPolicyCommandConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyCommandConfigWithOptions(request, runtime);
}

/**
 * @summary Configures access control settings in a control policy.
 *
 * @param tmpReq SetPolicyIPAclConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyIPAclConfigResponse
 */
SetPolicyIPAclConfigResponse Client::setPolicyIPAclConfigWithOptions(const SetPolicyIPAclConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyIPAclConfigShrinkRequest request = SetPolicyIPAclConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIPAclConfig()) {
    request.setIPAclConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIPAclConfig(), "IPAclConfig", "json"));
  }

  json query = {};
  if (!!request.hasIPAclConfigShrink()) {
    query["IPAclConfig"] = request.getIPAclConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyIPAclConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyIPAclConfigResponse>();
}

/**
 * @summary Configures access control settings in a control policy.
 *
 * @param request SetPolicyIPAclConfigRequest
 * @return SetPolicyIPAclConfigResponse
 */
SetPolicyIPAclConfigResponse Client::setPolicyIPAclConfig(const SetPolicyIPAclConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyIPAclConfigWithOptions(request, runtime);
}

/**
 * @summary Modify the protocol control settings in a control policy.
 *
 * @param tmpReq SetPolicyProtocolConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyProtocolConfigResponse
 */
SetPolicyProtocolConfigResponse Client::setPolicyProtocolConfigWithOptions(const SetPolicyProtocolConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyProtocolConfigShrinkRequest request = SetPolicyProtocolConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProtocolConfig()) {
    request.setProtocolConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProtocolConfig(), "ProtocolConfig", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProtocolConfigShrink()) {
    query["ProtocolConfig"] = request.getProtocolConfigShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyProtocolConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyProtocolConfigResponse>();
}

/**
 * @summary Modify the protocol control settings in a control policy.
 *
 * @param request SetPolicyProtocolConfigRequest
 * @return SetPolicyProtocolConfigResponse
 */
SetPolicyProtocolConfigResponse Client::setPolicyProtocolConfig(const SetPolicyProtocolConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyProtocolConfigWithOptions(request, runtime);
}

/**
 * @summary Specifies the users to whom a control policy applies.
 *
 * @param request SetPolicyUserScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyUserScopeResponse
 */
SetPolicyUserScopeResponse Client::setPolicyUserScopeWithOptions(const SetPolicyUserScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyUserScope"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyUserScopeResponse>();
}

/**
 * @summary Specifies the users to whom a control policy applies.
 *
 * @param request SetPolicyUserScopeRequest
 * @return SetPolicyUserScopeResponse
 */
SetPolicyUserScopeResponse Client::setPolicyUserScope(const SetPolicyUserScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyUserScopeWithOptions(request, runtime);
}

/**
 * @summary Enables the specified bastion host.
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientSecurityGroupIds()) {
    query["ClientSecurityGroupIds"] = request.getClientSecurityGroupIds();
  }

  if (!!request.hasEnablePortalPrivateAccess()) {
    query["EnablePortalPrivateAccess"] = request.getEnablePortalPrivateAccess();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  if (!!request.hasSlaveVswitchId()) {
    query["SlaveVswitchId"] = request.getSlaveVswitchId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary Enables the specified bastion host.
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates and adds tags to specified bastion hosts.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Creates and adds tags to specified bastion hosts.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unlocks one or more users of a bastion host.
 *
 * @description After you call the [LockUsers](https://help.aliyun.com/document_detail/204591.html) operation to lock one or more users of a bastion host, you can call this operation to unlock the users. After the users are unlocked, the users can perform O\\&M operations by using the bastion host.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UnlockUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockUsersResponse
 */
UnlockUsersResponse Client::unlockUsersWithOptions(const UnlockUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockUsers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockUsersResponse>();
}

/**
 * @summary Unlocks one or more users of a bastion host.
 *
 * @description After you call the [LockUsers](https://help.aliyun.com/document_detail/204591.html) operation to lock one or more users of a bastion host, you can call this operation to unlock the users. After the users are unlocked, the users can perform O\\&M operations by using the bastion host.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UnlockUsersRequest
 * @return UnlockUsersResponse
 */
UnlockUsersResponse Client::unlockUsers(const UnlockUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockUsersWithOptions(request, runtime);
}

/**
 * @summary Removes tags from the specified bastion host and deletes the tags at a time.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from the specified bastion host and deletes the tags at a time.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary 验证实例AD服务配置
 *
 * @param request VerifyInstanceADAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyInstanceADAuthServerResponse
 */
VerifyInstanceADAuthServerResponse Client::verifyInstanceADAuthServerWithOptions(const VerifyInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasBaseDN()) {
    query["BaseDN"] = request.getBaseDN();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSSL()) {
    query["IsSSL"] = request.getIsSSL();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServer()) {
    query["Server"] = request.getServer();
  }

  if (!!request.hasStandbyServer()) {
    query["StandbyServer"] = request.getStandbyServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyInstanceADAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyInstanceADAuthServerResponse>();
}

/**
 * @summary 验证实例AD服务配置
 *
 * @param request VerifyInstanceADAuthServerRequest
 * @return VerifyInstanceADAuthServerResponse
 */
VerifyInstanceADAuthServerResponse Client::verifyInstanceADAuthServer(const VerifyInstanceADAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyInstanceADAuthServerWithOptions(request, runtime);
}

/**
 * @summary 验证实例LDAP服务配置
 *
 * @param request VerifyInstanceLDAPAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyInstanceLDAPAuthServerResponse
 */
VerifyInstanceLDAPAuthServerResponse Client::verifyInstanceLDAPAuthServerWithOptions(const VerifyInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasBaseDN()) {
    query["BaseDN"] = request.getBaseDN();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSSL()) {
    query["IsSSL"] = request.getIsSSL();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServer()) {
    query["Server"] = request.getServer();
  }

  if (!!request.hasStandbyServer()) {
    query["StandbyServer"] = request.getStandbyServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyInstanceLDAPAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyInstanceLDAPAuthServerResponse>();
}

/**
 * @summary 验证实例LDAP服务配置
 *
 * @param request VerifyInstanceLDAPAuthServerRequest
 * @return VerifyInstanceLDAPAuthServerResponse
 */
VerifyInstanceLDAPAuthServerResponse Client::verifyInstanceLDAPAuthServer(const VerifyInstanceLDAPAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyInstanceLDAPAuthServerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209