#include <darabonba/Core.hpp>
#include <alibabacloud/Cams20200606.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Cams20200606::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Cams20200606
{

AlibabaCloud::Cams20200606::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-southeast-1" , "cams.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cams", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 申请：变更目的地/恢复/暂停
 *
 * @param tmpReq AddAddressRecoverSuspendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAddressRecoverSuspendResponse
 */
AddAddressRecoverSuspendResponse Client::addAddressRecoverSuspendWithOptions(const AddAddressRecoverSuspendRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddAddressRecoverSuspendShrinkRequest request = AddAddressRecoverSuspendShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuditRecord()) {
    request.setAuditRecordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuditRecord(), "AuditRecord", "json"));
  }

  json query = {};
  if (!!request.hasAuditRecordShrink()) {
    query["AuditRecord"] = request.getAuditRecordShrink();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRequestType()) {
    query["RequestType"] = request.getRequestType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAddressRecoverSuspend"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAddressRecoverSuspendResponse>();
}

/**
 * @summary 申请：变更目的地/恢复/暂停
 *
 * @param request AddAddressRecoverSuspendRequest
 * @return AddAddressRecoverSuspendResponse
 */
AddAddressRecoverSuspendResponse Client::addAddressRecoverSuspend(const AddAddressRecoverSuspendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAddressRecoverSuspendWithOptions(request, runtime);
}

/**
 * @summary Signs up for a Viber account.
 *
 * @param tmpReq AddAuditViberOpenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAuditViberOpenResponse
 */
AddAuditViberOpenResponse Client::addAuditViberOpenWithOptions(const AddAuditViberOpenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddAuditViberOpenShrinkRequest request = AddAuditViberOpenShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuditRecord()) {
    request.setAuditRecordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuditRecord(), "AuditRecord", "json"));
  }

  json query = {};
  if (!!request.hasAuditRecordShrink()) {
    query["AuditRecord"] = request.getAuditRecordShrink();
  }

  if (!!request.hasAuditResult()) {
    query["AuditResult"] = request.getAuditResult();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAuditViberOpen"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAuditViberOpenResponse>();
}

/**
 * @summary Signs up for a Viber account.
 *
 * @param request AddAuditViberOpenRequest
 * @return AddAuditViberOpenResponse
 */
AddAuditViberOpenResponse Client::addAuditViberOpen(const AddAuditViberOpenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAuditViberOpenWithOptions(request, runtime);
}

/**
 * @summary Creates an IM group.
 *
 * @description >Notice: 
 * Creating IM groups via the API is a feature in closed beta testing by Meta. Please contact your account manager to be added to the allowlist.
 * - You can only create an IM group by calling this API.
 * - After creating an IM group, you can call the [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) API to generate an invite link.
 * - For the WhatsApp channel type, an IM group is limited to eight members.
 *
 * @param request AddChatGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddChatGroupResponse
 */
AddChatGroupResponse Client::addChatGroupWithOptions(const AddChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupLink()) {
    query["GroupLink"] = request.getGroupLink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubject()) {
    query["Subject"] = request.getSubject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddChatGroup"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddChatGroupResponse>();
}

/**
 * @summary Creates an IM group.
 *
 * @description >Notice: 
 * Creating IM groups via the API is a feature in closed beta testing by Meta. Please contact your account manager to be added to the allowlist.
 * - You can only create an IM group by calling this API.
 * - After creating an IM group, you can call the [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) API to generate an invite link.
 * - For the WhatsApp channel type, an IM group is limited to eight members.
 *
 * @param request AddChatGroupRequest
 * @return AddChatGroupResponse
 */
AddChatGroupResponse Client::addChatGroup(const AddChatGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addChatGroupWithOptions(request, runtime);
}

/**
 * @summary Adds an invite link for an Instant Messaging (IM) group.
 *
 * @description >Notice: 
 * The API for adding invite links to IM groups is in beta testing on Meta. Contact your account manager to add your account to the allowlist.
 * - Before you call this operation, make sure that an IM group has been created.
 * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation to create one.
 * - After you add an invite link by calling this operation, you can use the link to invite members to the group.
 * - Currently, members can join an IM group only using an invite link.
 * - A WhatsApp group can have a maximum of 8 members.
 *
 * @param request AddChatGroupInviteLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddChatGroupInviteLinkResponse
 */
AddChatGroupInviteLinkResponse Client::addChatGroupInviteLinkWithOptions(const AddChatGroupInviteLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddChatGroupInviteLink"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddChatGroupInviteLinkResponse>();
}

/**
 * @summary Adds an invite link for an Instant Messaging (IM) group.
 *
 * @description >Notice: 
 * The API for adding invite links to IM groups is in beta testing on Meta. Contact your account manager to add your account to the allowlist.
 * - Before you call this operation, make sure that an IM group has been created.
 * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation to create one.
 * - After you add an invite link by calling this operation, you can use the link to invite members to the group.
 * - Currently, members can join an IM group only using an invite link.
 * - A WhatsApp group can have a maximum of 8 members.
 *
 * @param request AddChatGroupInviteLinkRequest
 * @return AddChatGroupInviteLinkResponse
 */
AddChatGroupInviteLinkResponse Client::addChatGroupInviteLink(const AddChatGroupInviteLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addChatGroupInviteLinkWithOptions(request, runtime);
}

/**
 * @summary Adds a phone number to a WhatsApp Business Account (WABA).
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request AddChatappPhoneNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddChatappPhoneNumberResponse
 */
AddChatappPhoneNumberResponse Client::addChatappPhoneNumberWithOptions(const AddChatappPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCc()) {
    query["Cc"] = request.getCc();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPreValidateId()) {
    query["PreValidateId"] = request.getPreValidateId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVerifiedName()) {
    query["VerifiedName"] = request.getVerifiedName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddChatappPhoneNumber"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddChatappPhoneNumberResponse>();
}

/**
 * @summary Adds a phone number to a WhatsApp Business Account (WABA).
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request AddChatappPhoneNumberRequest
 * @return AddChatappPhoneNumberResponse
 */
AddChatappPhoneNumberResponse Client::addChatappPhoneNumber(const AddChatappPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addChatappPhoneNumberWithOptions(request, runtime);
}

/**
 * @summary 编辑联系人-新增联系人
 *
 * @param tmpReq AddContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddContactsResponse
 */
AddContactsResponse Client::addContactsWithOptions(const AddContactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddContactsShrinkRequest request = AddContactsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasContactDetails()) {
    query["ContactDetails"] = request.getContactDetails();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasGroups()) {
    query["Groups"] = request.getGroups();
  }

  if (!!request.hasNeedUpdate()) {
    query["NeedUpdate"] = request.getNeedUpdate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddContacts"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddContactsResponse>();
}

/**
 * @summary 编辑联系人-新增联系人
 *
 * @param request AddContactsRequest
 * @return AddContactsResponse
 */
AddContactsResponse Client::addContacts(const AddContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addContactsWithOptions(request, runtime);
}

/**
 * @summary Adds users to a custom audience.
 *
 * @description After users are submitted to a custom audience, Meta matches them. If fewer than 100 users are matched, Meta discards the data. This prevents phone numbers from being linked directly to user tokens. Each API call supports up to 10,000 user records.
 *
 * @param tmpReq AddCustomAudienceUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomAudienceUserResponse
 */
AddCustomAudienceUserResponse Client::addCustomAudienceUserWithOptions(const AddCustomAudienceUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddCustomAudienceUserShrinkRequest request = AddCustomAudienceUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUsers()) {
    request.setUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUsers(), "Users", "json"));
  }

  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasBatchLastFlag()) {
    query["BatchLastFlag"] = request.getBatchLastFlag();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustomAudienceId()) {
    query["CustomAudienceId"] = request.getCustomAudienceId();
  }

  if (!!request.hasEstimatedNumTotal()) {
    query["EstimatedNumTotal"] = request.getEstimatedNumTotal();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUsersShrink()) {
    query["Users"] = request.getUsersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCustomAudienceUser"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomAudienceUserResponse>();
}

/**
 * @summary Adds users to a custom audience.
 *
 * @description After users are submitted to a custom audience, Meta matches them. If fewer than 100 users are matched, Meta discards the data. This prevents phone numbers from being linked directly to user tokens. Each API call supports up to 10,000 user records.
 *
 * @param request AddCustomAudienceUserRequest
 * @return AddCustomAudienceUserResponse
 */
AddCustomAudienceUserResponse Client::addCustomAudienceUser(const AddCustomAudienceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomAudienceUserWithOptions(request, runtime);
}

/**
 * @summary 添加群组
 *
 * @param tmpReq AddGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGroupResponse
 */
AddGroupResponse Client::addGroupWithOptions(const AddGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddGroupShrinkRequest request = AddGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasContactDetails()) {
    query["ContactDetails"] = request.getContactDetails();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGroup"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGroupResponse>();
}

/**
 * @summary 添加群组
 *
 * @param request AddGroupRequest
 * @return AddGroupResponse
 */
AddGroupResponse Client::addGroup(const AddGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGroupWithOptions(request, runtime);
}

/**
 * @summary 新增营销活动
 *
 * @param tmpReq AddMarketingFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMarketingFlowResponse
 */
AddMarketingFlowResponse Client::addMarketingFlowWithOptions(const AddMarketingFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddMarketingFlowShrinkRequest request = AddMarketingFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json query = {};
  if (!!request.hasActivityDesc()) {
    query["ActivityDesc"] = request.getActivityDesc();
  }

  if (!!request.hasActivityName()) {
    query["ActivityName"] = request.getActivityName();
  }

  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasExecutionType()) {
    query["ExecutionType"] = request.getExecutionType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParamFlag()) {
    query["ParamFlag"] = request.getParamFlag();
  }

  if (!!request.hasParamsShrink()) {
    query["Params"] = request.getParamsShrink();
  }

  if (!!request.hasRelatedFlowCode()) {
    query["RelatedFlowCode"] = request.getRelatedFlowCode();
  }

  if (!!request.hasRelatedFlowName()) {
    query["RelatedFlowName"] = request.getRelatedFlowName();
  }

  if (!!request.hasRelatedGroupId()) {
    query["RelatedGroupId"] = request.getRelatedGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMarketingFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMarketingFlowResponse>();
}

/**
 * @summary 新增营销活动
 *
 * @param request AddMarketingFlowRequest
 * @return AddMarketingFlowResponse
 */
AddMarketingFlowResponse Client::addMarketingFlow(const AddMarketingFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMarketingFlowWithOptions(request, runtime);
}

/**
 * @summary 绑定DM账号
 *
 * @param tmpReq BindDmAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindDmAccountResponse
 */
BindDmAccountResponse Client::bindDmAccountWithOptions(const BindDmAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BindDmAccountShrinkRequest request = BindDmAccountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtendAttr()) {
    request.setExtendAttrShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtendAttr(), "ExtendAttr", "json"));
  }

  json query = {};
  if (!!request.hasAccountCode()) {
    query["AccountCode"] = request.getAccountCode();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasExtendAttrShrink()) {
    query["ExtendAttr"] = request.getExtendAttrShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindDmAccount"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindDmAccountResponse>();
}

/**
 * @summary 绑定DM账号
 *
 * @param request BindDmAccountRequest
 * @return BindDmAccountResponse
 */
BindDmAccountResponse Client::bindDmAccount(const BindDmAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindDmAccountWithOptions(request, runtime);
}

/**
 * @summary 绑定ins的page
 *
 * @param request BindInstagramPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindInstagramPageResponse
 */
BindInstagramPageResponse Client::bindInstagramPageWithOptions(const BindInstagramPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindInstagramPage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindInstagramPageResponse>();
}

/**
 * @summary 绑定ins的page
 *
 * @param request BindInstagramPageRequest
 * @return BindInstagramPageResponse
 */
BindInstagramPageResponse Client::bindInstagramPage(const BindInstagramPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindInstagramPageWithOptions(request, runtime);
}

/**
 * @summary 绑定选择的pageId
 *
 * @param request BindMessengerPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindMessengerPageResponse
 */
BindMessengerPageResponse Client::bindMessengerPageWithOptions(const BindMessengerPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindMessengerPage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindMessengerPageResponse>();
}

/**
 * @summary 绑定选择的pageId
 *
 * @param request BindMessengerPageRequest
 * @return BindMessengerPageResponse
 */
BindMessengerPageResponse Client::bindMessengerPage(const BindMessengerPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindMessengerPageWithOptions(request, runtime);
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "ChangeResourceGroup"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary 资源转组
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Binds a WhatsApp Business Account (WABA).
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ChatappBindWabaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatappBindWabaResponse
 */
ChatappBindWabaResponse Client::chatappBindWabaWithOptions(const ChatappBindWabaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWabaId()) {
    query["WabaId"] = request.getWabaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatappBindWaba"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatappBindWabaResponse>();
}

/**
 * @summary Binds a WhatsApp Business Account (WABA).
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ChatappBindWabaRequest
 * @return ChatappBindWabaResponse
 */
ChatappBindWabaResponse Client::chatappBindWaba(const ChatappBindWabaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatappBindWabaWithOptions(request, runtime);
}

/**
 * @summary Registers a phone number for migration.
 *
 * @description The space ID of the RAM user within the independent software vendor (ISV) account.
 *
 * @param request ChatappMigrationRegisterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatappMigrationRegisterResponse
 */
ChatappMigrationRegisterResponse Client::chatappMigrationRegisterWithOptions(const ChatappMigrationRegisterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatappMigrationRegister"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatappMigrationRegisterResponse>();
}

/**
 * @summary Registers a phone number for migration.
 *
 * @description The space ID of the RAM user within the independent software vendor (ISV) account.
 *
 * @param request ChatappMigrationRegisterRequest
 * @return ChatappMigrationRegisterResponse
 */
ChatappMigrationRegisterResponse Client::chatappMigrationRegister(const ChatappMigrationRegisterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatappMigrationRegisterWithOptions(request, runtime);
}

/**
 * @summary Verifies a phone number for migration.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ChatappMigrationVerifiedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatappMigrationVerifiedResponse
 */
ChatappMigrationVerifiedResponse Client::chatappMigrationVerifiedWithOptions(const ChatappMigrationVerifiedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVerifyCode()) {
    query["VerifyCode"] = request.getVerifyCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatappMigrationVerified"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatappMigrationVerifiedResponse>();
}

/**
 * @summary Verifies a phone number for migration.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ChatappMigrationVerifiedRequest
 * @return ChatappMigrationVerifiedResponse
 */
ChatappMigrationVerifiedResponse Client::chatappMigrationVerified(const ChatappMigrationVerifiedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatappMigrationVerifiedWithOptions(request, runtime);
}

/**
 * @summary Deregisters a phone number from a WhatsApp Business Account (WABA).
 *
 * @description This API is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. Call this API at a reasonable rate.
 *
 * @param request ChatappPhoneNumberDeregisterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatappPhoneNumberDeregisterResponse
 */
ChatappPhoneNumberDeregisterResponse Client::chatappPhoneNumberDeregisterWithOptions(const ChatappPhoneNumberDeregisterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatappPhoneNumberDeregister"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatappPhoneNumberDeregisterResponse>();
}

/**
 * @summary Deregisters a phone number from a WhatsApp Business Account (WABA).
 *
 * @description This API is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. Call this API at a reasonable rate.
 *
 * @param request ChatappPhoneNumberDeregisterRequest
 * @return ChatappPhoneNumberDeregisterResponse
 */
ChatappPhoneNumberDeregisterResponse Client::chatappPhoneNumberDeregister(const ChatappPhoneNumberDeregisterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatappPhoneNumberDeregisterWithOptions(request, runtime);
}

/**
 * @summary Registers a phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ChatappPhoneNumberRegisterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatappPhoneNumberRegisterResponse
 */
ChatappPhoneNumberRegisterResponse Client::chatappPhoneNumberRegisterWithOptions(const ChatappPhoneNumberRegisterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatappPhoneNumberRegister"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatappPhoneNumberRegisterResponse>();
}

/**
 * @summary Registers a phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ChatappPhoneNumberRegisterRequest
 * @return ChatappPhoneNumberRegisterResponse
 */
ChatappPhoneNumberRegisterResponse Client::chatappPhoneNumberRegister(const ChatappPhoneNumberRegisterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatappPhoneNumberRegisterWithOptions(request, runtime);
}

/**
 * @summary Synchronizes phone numbers.
 *
 * @description This operation allows a maximum of 10 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request ChatappSyncPhoneNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatappSyncPhoneNumberResponse
 */
ChatappSyncPhoneNumberResponse Client::chatappSyncPhoneNumberWithOptions(const ChatappSyncPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatappSyncPhoneNumber"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatappSyncPhoneNumberResponse>();
}

/**
 * @summary Synchronizes phone numbers.
 *
 * @description This operation allows a maximum of 10 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request ChatappSyncPhoneNumberRequest
 * @return ChatappSyncPhoneNumberResponse
 */
ChatappSyncPhoneNumberResponse Client::chatappSyncPhoneNumber(const ChatappSyncPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatappSyncPhoneNumberWithOptions(request, runtime);
}

/**
 * @summary Associates a phone number with a WhatsApp Business account (WABA).
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request ChatappVerifyAndRegisterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatappVerifyAndRegisterResponse
 */
ChatappVerifyAndRegisterResponse Client::chatappVerifyAndRegisterWithOptions(const ChatappVerifyAndRegisterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVerifyCode()) {
    query["VerifyCode"] = request.getVerifyCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatappVerifyAndRegister"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatappVerifyAndRegisterResponse>();
}

/**
 * @summary Associates a phone number with a WhatsApp Business account (WABA).
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request ChatappVerifyAndRegisterRequest
 * @return ChatappVerifyAndRegisterResponse
 */
ChatappVerifyAndRegisterResponse Client::chatappVerifyAndRegister(const ChatappVerifyAndRegisterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatappVerifyAndRegisterWithOptions(request, runtime);
}

/**
 * @summary Validates direct message content for WhatsApp.
 *
 * @param tmpReq CheckDirectSendMessageSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDirectSendMessageSampleResponse
 */
CheckDirectSendMessageSampleResponse Client::checkDirectSendMessageSampleWithOptions(const CheckDirectSendMessageSampleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckDirectSendMessageSampleShrinkRequest request = CheckDirectSendMessageSampleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInteractive()) {
    request.setInteractiveShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInteractive(), "Interactive", "json"));
  }

  if (!!tmpReq.hasText()) {
    request.setTextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getText(), "Text", "json"));
  }

  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasInteractiveShrink()) {
    query["Interactive"] = request.getInteractiveShrink();
  }

  if (!!request.hasTextShrink()) {
    query["Text"] = request.getTextShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDirectSendMessageSample"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDirectSendMessageSampleResponse>();
}

/**
 * @summary Validates direct message content for WhatsApp.
 *
 * @param request CheckDirectSendMessageSampleRequest
 * @return CheckDirectSendMessageSampleResponse
 */
CheckDirectSendMessageSampleResponse Client::checkDirectSendMessageSample(const CheckDirectSendMessageSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDirectSendMessageSampleWithOptions(request, runtime);
}

/**
 * @summary 复制模板
 *
 * @param request CopyTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyTemplateResponse
 */
CopyTemplateResponse Client::copyTemplateWithOptions(const CopyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSceneTemplateCode()) {
    query["SceneTemplateCode"] = request.getSceneTemplateCode();
  }

  if (!!request.hasSceneTemplateName()) {
    query["SceneTemplateName"] = request.getSceneTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyTemplateResponse>();
}

/**
 * @summary 复制模板
 *
 * @param request CopyTemplateRequest
 * @return CopyTemplateResponse
 */
CopyTemplateResponse Client::copyTemplate(const CopyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyTemplateWithOptions(request, runtime);
}

/**
 * @summary 创建Chatflow
 *
 * @param tmpReq CreateChatFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatFlowResponse
 */
CreateChatFlowResponse Client::createChatFlowWithOptions(const CreateChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateChatFlowShrinkRequest request = CreateChatFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowTriggerType()) {
    query["FlowTriggerType"] = request.getFlowTriggerType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChatFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatFlowResponse>();
}

/**
 * @summary 创建Chatflow
 *
 * @param request CreateChatFlowRequest
 * @return CreateChatFlowResponse
 */
CreateChatFlowResponse Client::createChatFlow(const CreateChatFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChatFlowWithOptions(request, runtime);
}

/**
 * @summary 导入并创建flow
 *
 * @param tmpReq CreateChatFlowByImportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatFlowByImportResponse
 */
CreateChatFlowByImportResponse Client::createChatFlowByImportWithOptions(const CreateChatFlowByImportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateChatFlowByImportShrinkRequest request = CreateChatFlowByImportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowViewModel()) {
    query["FlowViewModel"] = request.getFlowViewModel();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChatFlowByImport"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatFlowByImportResponse>();
}

/**
 * @summary 导入并创建flow
 *
 * @param request CreateChatFlowByImportRequest
 * @return CreateChatFlowByImportResponse
 */
CreateChatFlowByImportResponse Client::createChatFlowByImport(const CreateChatFlowByImportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChatFlowByImportWithOptions(request, runtime);
}

/**
 * @summary 创建chatFlow日志设置
 *
 * @param request CreateChatFlowLogSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatFlowLogSettingResponse
 */
CreateChatFlowLogSettingResponse Client::createChatFlowLogSettingWithOptions(const CreateChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChatFlowLogSetting"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatFlowLogSettingResponse>();
}

/**
 * @summary 创建chatFlow日志设置
 *
 * @param request CreateChatFlowLogSettingRequest
 * @return CreateChatFlowLogSettingResponse
 */
CreateChatFlowLogSettingResponse Client::createChatFlowLogSetting(const CreateChatFlowLogSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChatFlowLogSettingWithOptions(request, runtime);
}

/**
 * @summary Initiates the migration of a phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request CreateChatappMigrationInitiateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatappMigrationInitiateResponse
 */
CreateChatappMigrationInitiateResponse Client::createChatappMigrationInitiateWithOptions(const CreateChatappMigrationInitiateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountryCode()) {
    query["CountryCode"] = request.getCountryCode();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasMobileNumber()) {
    query["MobileNumber"] = request.getMobileNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChatappMigrationInitiate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatappMigrationInitiateResponse>();
}

/**
 * @summary Initiates the migration of a phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request CreateChatappMigrationInitiateRequest
 * @return CreateChatappMigrationInitiateResponse
 */
CreateChatappMigrationInitiateResponse Client::createChatappMigrationInitiate(const CreateChatappMigrationInitiateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChatappMigrationInitiateWithOptions(request, runtime);
}

/**
 * @summary Creates a message template. After a template is approved, you can use it to send messages.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for this API operation is 50 for a single user. If you exceed the limit, API calls are rate-limited, which may affect your business. We recommend that you call this operation at a reasonable frequency.
 * ### Status change
 * You can monitor template status and quality changes using Message Service (MNS) or HTTP. For more information, see [Message receipts](https://help.aliyun.com/document_detail/421545.html).
 *
 * @param tmpReq CreateChatappTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatappTemplateResponse
 */
CreateChatappTemplateResponse Client::createChatappTemplateWithOptions(const CreateChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateChatappTemplateShrinkRequest request = CreateChatappTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComponents()) {
    request.setComponentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComponents(), "Components", "json"));
  }

  if (!!tmpReq.hasExample()) {
    request.setExampleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExample(), "Example", "json"));
  }

  json body = {};
  if (!!request.hasAllowCategoryChange()) {
    body["AllowCategoryChange"] = request.getAllowCategoryChange();
  }

  if (!!request.hasCategory()) {
    body["Category"] = request.getCategory();
  }

  if (!!request.hasCategoryChangePaused()) {
    body["CategoryChangePaused"] = request.getCategoryChangePaused();
  }

  if (!!request.hasComponentsShrink()) {
    body["Components"] = request.getComponentsShrink();
  }

  if (!!request.hasCustSpaceId()) {
    body["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustWabaId()) {
    body["CustWabaId"] = request.getCustWabaId();
  }

  if (!!request.hasExampleShrink()) {
    body["Example"] = request.getExampleShrink();
  }

  if (!!request.hasIsvCode()) {
    body["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.getLanguage();
  }

  if (!!request.hasMessageSendTtlSeconds()) {
    body["MessageSendTtlSeconds"] = request.getMessageSendTtlSeconds();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateChatappTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatappTemplateResponse>();
}

/**
 * @summary Creates a message template. After a template is approved, you can use it to send messages.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for this API operation is 50 for a single user. If you exceed the limit, API calls are rate-limited, which may affect your business. We recommend that you call this operation at a reasonable frequency.
 * ### Status change
 * You can monitor template status and quality changes using Message Service (MNS) or HTTP. For more information, see [Message receipts](https://help.aliyun.com/document_detail/421545.html).
 *
 * @param request CreateChatappTemplateRequest
 * @return CreateChatappTemplateResponse
 */
CreateChatappTemplateResponse Client::createChatappTemplate(const CreateChatappTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChatappTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a custom audience.
 *
 * @param request CreateCustomAudienceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomAudienceResponse
 */
CreateCustomAudienceResponse Client::createCustomAudienceWithOptions(const CreateCustomAudienceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUploadType()) {
    query["UploadType"] = request.getUploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomAudience"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomAudienceResponse>();
}

/**
 * @summary Creates a custom audience.
 *
 * @param request CreateCustomAudienceRequest
 * @return CreateCustomAudienceResponse
 */
CreateCustomAudienceResponse Client::createCustomAudience(const CreateCustomAudienceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomAudienceWithOptions(request, runtime);
}

/**
 * @summary Creates a flow.
 *
 * @description The queries per second (QPS) limit for this operation is 5 for each user. API calls that exceed this limit are throttled. Because throttling may affect your business, we recommend that you call this operation at a reasonable rate.
 *
 * @param tmpReq CreateFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowResponse
 */
CreateFlowResponse Client::createFlowWithOptions(const CreateFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFlowShrinkRequest request = CreateFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategories()) {
    request.setCategoriesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategories(), "Categories", "json"));
  }

  json query = {};
  if (!!request.hasCategoriesShrink()) {
    query["Categories"] = request.getCategoriesShrink();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasEndpointUri()) {
    query["EndpointUri"] = request.getEndpointUri();
  }

  if (!!request.hasFlowName()) {
    query["FlowName"] = request.getFlowName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowResponse>();
}

/**
 * @summary Creates a flow.
 *
 * @description The queries per second (QPS) limit for this operation is 5 for each user. API calls that exceed this limit are throttled. Because throttling may affect your business, we recommend that you call this operation at a reasonable rate.
 *
 * @param request CreateFlowRequest
 * @return CreateFlowResponse
 */
CreateFlowResponse Client::createFlow(const CreateFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowWithOptions(request, runtime);
}

/**
 * @summary CreateFlowVersion
 *
 * @param tmpReq CreateFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowVersionResponse
 */
CreateFlowVersionResponse Client::createFlowVersionWithOptions(const CreateFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFlowVersionShrinkRequest request = CreateFlowVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersionCopyFrom()) {
    query["FlowVersionCopyFrom"] = request.getFlowVersionCopyFrom();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFlowVersion"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowVersionResponse>();
}

/**
 * @summary CreateFlowVersion
 *
 * @param request CreateFlowVersionRequest
 * @return CreateFlowVersionResponse
 */
CreateFlowVersionResponse Client::createFlowVersion(const CreateFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowVersionWithOptions(request, runtime);
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasContactMail()) {
    query["ContactMail"] = request.getContactMail();
  }

  if (!!request.hasCountryId()) {
    query["CountryId"] = request.getCountryId();
  }

  if (!!request.hasFacebookBmId()) {
    query["FacebookBmId"] = request.getFacebookBmId();
  }

  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIsConfirmAudit()) {
    query["IsConfirmAudit"] = request.getIsConfirmAudit();
  }

  if (!!request.hasIsvTerms()) {
    query["IsvTerms"] = request.getIsvTerms();
  }

  if (!!request.hasOfficeAddress()) {
    query["OfficeAddress"] = request.getOfficeAddress();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an instance.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a budget.
 *
 * @param request CreateMessageCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMessageCampaignResponse
 */
CreateMessageCampaignResponse Client::createMessageCampaignWithOptions(const CreateMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasBudget()) {
    query["Budget"] = request.getBudget();
  }

  if (!!request.hasBudgetType()) {
    query["BudgetType"] = request.getBudgetType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMessageCampaign"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMessageCampaignResponse>();
}

/**
 * @summary Creates a budget.
 *
 * @param request CreateMessageCampaignRequest
 * @return CreateMessageCampaignResponse
 */
CreateMessageCampaignResponse Client::createMessageCampaign(const CreateMessageCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMessageCampaignWithOptions(request, runtime);
}

/**
 * @summary 嵌入式授权messenger
 *
 * @param tmpReq CreateMessengerPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMessengerPageResponse
 */
CreateMessengerPageResponse Client::createMessengerPageWithOptions(const CreateMessengerPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMessengerPageShrinkRequest request = CreateMessengerPageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdAccountIds()) {
    request.setAdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdAccountIds(), "AdAccountIds", "json"));
  }

  json query = {};
  if (!!request.hasAdAccountIdsShrink()) {
    query["AdAccountIds"] = request.getAdAccountIdsShrink();
  }

  if (!!request.hasAuthenticationCode()) {
    query["AuthenticationCode"] = request.getAuthenticationCode();
  }

  if (!!request.hasBusinessId()) {
    query["BusinessId"] = request.getBusinessId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMessengerPage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMessengerPageResponse>();
}

/**
 * @summary 嵌入式授权messenger
 *
 * @param request CreateMessengerPageRequest
 * @return CreateMessengerPageResponse
 */
CreateMessengerPageResponse Client::createMessengerPage(const CreateMessengerPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMessengerPageWithOptions(request, runtime);
}

/**
 * @summary Creates a message QR code.
 *
 * @description - After a QR code is created, users can scan it with WhatsApp to start a chat with your business number.
 * - Before calling this API, make sure you have a WhatsApp channel.
 * - If you do not have a WhatsApp channel, create one on the
 *   <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[Channel Management](https://chatapp.console.alibabacloud.com/CustomerList) page.
 * #### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request CreatePhoneMessageQrdlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePhoneMessageQrdlResponse
 */
CreatePhoneMessageQrdlResponse Client::createPhoneMessageQrdlWithOptions(const CreatePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasGenerateQrImage()) {
    query["GenerateQrImage"] = request.getGenerateQrImage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPrefilledMessage()) {
    query["PrefilledMessage"] = request.getPrefilledMessage();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePhoneMessageQrdl"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePhoneMessageQrdlResponse>();
}

/**
 * @summary Creates a message QR code.
 *
 * @description - After a QR code is created, users can scan it with WhatsApp to start a chat with your business number.
 * - Before calling this API, make sure you have a WhatsApp channel.
 * - If you do not have a WhatsApp channel, create one on the
 *   <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[Channel Management](https://chatapp.console.alibabacloud.com/CustomerList) page.
 * #### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request CreatePhoneMessageQrdlRequest
 * @return CreatePhoneMessageQrdlResponse
 */
CreatePhoneMessageQrdlResponse Client::createPhoneMessageQrdl(const CreatePhoneMessageQrdlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPhoneMessageQrdlWithOptions(request, runtime);
}

/**
 * @summary 根据嵌入式code获取pageId入库
 *
 * @param tmpReq CreateWhatsappConversionApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWhatsappConversionApiResponse
 */
CreateWhatsappConversionApiResponse Client::createWhatsappConversionApiWithOptions(const CreateWhatsappConversionApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWhatsappConversionApiShrinkRequest request = CreateWhatsappConversionApiShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "Permissions", "json"));
  }

  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPermissionsShrink()) {
    query["Permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWhatsappConversionApi"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWhatsappConversionApiResponse>();
}

/**
 * @summary 根据嵌入式code获取pageId入库
 *
 * @param request CreateWhatsappConversionApiRequest
 * @return CreateWhatsappConversionApiResponse
 */
CreateWhatsappConversionApiResponse Client::createWhatsappConversionApi(const CreateWhatsappConversionApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWhatsappConversionApiWithOptions(request, runtime);
}

/**
 * @summary 删除流程
 *
 * @param tmpReq DeleteChatFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChatFlowResponse
 */
DeleteChatFlowResponse Client::deleteChatFlowWithOptions(const DeleteChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteChatFlowShrinkRequest request = DeleteChatFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChatFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChatFlowResponse>();
}

/**
 * @summary 删除流程
 *
 * @param request DeleteChatFlowRequest
 * @return DeleteChatFlowResponse
 */
DeleteChatFlowResponse Client::deleteChatFlow(const DeleteChatFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChatFlowWithOptions(request, runtime);
}

/**
 * @summary Deletes an Instant Messaging (IM) group.
 *
 * @description >Notice: 
 * This API is in beta testing for Meta. Contact your account manager to be added to the allowlist before using this endpoint.
 * - Before you call this API, ensure that you have created an IM group.
 * - If you have not created one, create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation.
 * - After an IM group is deleted, it cannot be recovered. Proceed with caution.
 *
 * @param request DeleteChatGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChatGroupResponse
 */
DeleteChatGroupResponse Client::deleteChatGroupWithOptions(const DeleteChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChatGroup"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChatGroupResponse>();
}

/**
 * @summary Deletes an Instant Messaging (IM) group.
 *
 * @description >Notice: 
 * This API is in beta testing for Meta. Contact your account manager to be added to the allowlist before using this endpoint.
 * - Before you call this API, ensure that you have created an IM group.
 * - If you have not created one, create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation.
 * - After an IM group is deleted, it cannot be recovered. Proceed with caution.
 *
 * @param request DeleteChatGroupRequest
 * @return DeleteChatGroupResponse
 */
DeleteChatGroupResponse Client::deleteChatGroup(const DeleteChatGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChatGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an IM group invitation link.
 *
 * @description >Notice: 
 * Deleting an IM group invitation link via the API is a feature in beta testing for Meta. To use this feature, contact your account manager to be added to the allowlist.
 * - Before calling this operation, ensure an invitation link has been added to your IM group.
 * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations to create one and add an invitation link.
 * - After deleting the invitation link, you can no longer invite members to the IM group. Proceed with caution.
 *
 * @param request DeleteChatGroupInviteLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChatGroupInviteLinkResponse
 */
DeleteChatGroupInviteLinkResponse Client::deleteChatGroupInviteLinkWithOptions(const DeleteChatGroupInviteLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChatGroupInviteLink"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChatGroupInviteLinkResponse>();
}

/**
 * @summary Deletes an IM group invitation link.
 *
 * @description >Notice: 
 * Deleting an IM group invitation link via the API is a feature in beta testing for Meta. To use this feature, contact your account manager to be added to the allowlist.
 * - Before calling this operation, ensure an invitation link has been added to your IM group.
 * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations to create one and add an invitation link.
 * - After deleting the invitation link, you can no longer invite members to the IM group. Proceed with caution.
 *
 * @param request DeleteChatGroupInviteLinkRequest
 * @return DeleteChatGroupInviteLinkResponse
 */
DeleteChatGroupInviteLinkResponse Client::deleteChatGroupInviteLink(const DeleteChatGroupInviteLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChatGroupInviteLinkWithOptions(request, runtime);
}

/**
 * @summary Removes members from an IM group.
 *
 * @description >Notice: 
 * This operation is a beta feature from Meta. Contact your account manager to add your account to the allowlist before use.
 * - This operation requires an existing IM group that members have joined via an invitation link.
 * - To create an IM group and add an invitation link, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations.
 * - Removed members no longer receive messages from the group. Use this operation with caution.
 *
 * @param tmpReq DeleteChatGroupParticipantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChatGroupParticipantsResponse
 */
DeleteChatGroupParticipantsResponse Client::deleteChatGroupParticipantsWithOptions(const DeleteChatGroupParticipantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteChatGroupParticipantsShrinkRequest request = DeleteChatGroupParticipantsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasList()) {
    request.setListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getList(), "List", "json"));
  }

  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasListShrink()) {
    query["List"] = request.getListShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChatGroupParticipants"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChatGroupParticipantsResponse>();
}

/**
 * @summary Removes members from an IM group.
 *
 * @description >Notice: 
 * This operation is a beta feature from Meta. Contact your account manager to add your account to the allowlist before use.
 * - This operation requires an existing IM group that members have joined via an invitation link.
 * - To create an IM group and add an invitation link, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations.
 * - Removed members no longer receive messages from the group. Use this operation with caution.
 *
 * @param request DeleteChatGroupParticipantsRequest
 * @return DeleteChatGroupParticipantsResponse
 */
DeleteChatGroupParticipantsResponse Client::deleteChatGroupParticipants(const DeleteChatGroupParticipantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChatGroupParticipantsWithOptions(request, runtime);
}

/**
 * @summary Deletes a message template.
 *
 * @description ### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request DeleteChatappTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChatappTemplateResponse
 */
DeleteChatappTemplateResponse Client::deleteChatappTemplateWithOptions(const DeleteChatappTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustWabaId()) {
    query["CustWabaId"] = request.getCustWabaId();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChatappTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChatappTemplateResponse>();
}

/**
 * @summary Deletes a message template.
 *
 * @description ### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request DeleteChatappTemplateRequest
 * @return DeleteChatappTemplateResponse
 */
DeleteChatappTemplateResponse Client::deleteChatappTemplate(const DeleteChatappTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChatappTemplateWithOptions(request, runtime);
}

/**
 * @summary 编辑联系人-删除联系人
 *
 * @param tmpReq DeleteContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactsResponse
 */
DeleteContactsResponse Client::deleteContactsWithOptions(const DeleteContactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteContactsShrinkRequest request = DeleteContactsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasContactDetails()) {
    query["ContactDetails"] = request.getContactDetails();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContacts"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactsResponse>();
}

/**
 * @summary 编辑联系人-删除联系人
 *
 * @param request DeleteContactsRequest
 * @return DeleteContactsResponse
 */
DeleteContactsResponse Client::deleteContacts(const DeleteContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactsWithOptions(request, runtime);
}

/**
 * @summary 删除联系人(选择后删除)
 *
 * @param request DeleteContactsByIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactsByIdsResponse
 */
DeleteContactsByIdsResponse Client::deleteContactsByIdsWithOptions(const DeleteContactsByIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContacts()) {
    query["Contacts"] = request.getContacts();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContactsByIds"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactsByIdsResponse>();
}

/**
 * @summary 删除联系人(选择后删除)
 *
 * @param request DeleteContactsByIdsRequest
 * @return DeleteContactsByIdsResponse
 */
DeleteContactsByIdsResponse Client::deleteContactsByIds(const DeleteContactsByIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactsByIdsWithOptions(request, runtime);
}

/**
 * @summary Deletes a WhatsApp flow. Only flows in the draft state can be deleted.
 *
 * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request DeleteFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowResponse
 */
DeleteFlowResponse Client::deleteFlowWithOptions(const DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowResponse>();
}

/**
 * @summary Deletes a WhatsApp flow. Only flows in the draft state can be deleted.
 *
 * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request DeleteFlowRequest
 * @return DeleteFlowResponse
 */
DeleteFlowResponse Client::deleteFlow(const DeleteFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowWithOptions(request, runtime);
}

/**
 * @summary 删除流程版本
 *
 * @param tmpReq DeleteFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowVersionResponse
 */
DeleteFlowVersionResponse Client::deleteFlowVersionWithOptions(const DeleteFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteFlowVersionShrinkRequest request = DeleteFlowVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlowVersion"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowVersionResponse>();
}

/**
 * @summary 删除流程版本
 *
 * @param request DeleteFlowVersionRequest
 * @return DeleteFlowVersionResponse
 */
DeleteFlowVersionResponse Client::deleteFlowVersion(const DeleteFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowVersionWithOptions(request, runtime);
}

/**
 * @summary 删除群组
 *
 * @param request DeleteGroupByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupByIdResponse
 */
DeleteGroupByIdResponse Client::deleteGroupByIdWithOptions(const DeleteGroupByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroupById"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGroupByIdResponse>();
}

/**
 * @summary 删除群组
 *
 * @param request DeleteGroupByIdRequest
 * @return DeleteGroupByIdResponse
 */
DeleteGroupByIdResponse Client::deleteGroupById(const DeleteGroupByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupByIdWithOptions(request, runtime);
}

/**
 * @summary 删除ins的page
 *
 * @param request DeleteInstagramPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstagramPageResponse
 */
DeleteInstagramPageResponse Client::deleteInstagramPageWithOptions(const DeleteInstagramPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstagramPage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstagramPageResponse>();
}

/**
 * @summary 删除ins的page
 *
 * @param request DeleteInstagramPageRequest
 * @return DeleteInstagramPageResponse
 */
DeleteInstagramPageResponse Client::deleteInstagramPage(const DeleteInstagramPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstagramPageWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified instance.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes the specified instance.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除营销活动
 *
 * @param request DeleteMarketingFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMarketingFlowResponse
 */
DeleteMarketingFlowResponse Client::deleteMarketingFlowWithOptions(const DeleteMarketingFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityCode()) {
    query["ActivityCode"] = request.getActivityCode();
  }

  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.getActivityId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMarketingFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMarketingFlowResponse>();
}

/**
 * @summary 删除营销活动
 *
 * @param request DeleteMarketingFlowRequest
 * @return DeleteMarketingFlowResponse
 */
DeleteMarketingFlowResponse Client::deleteMarketingFlow(const DeleteMarketingFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMarketingFlowWithOptions(request, runtime);
}

/**
 * @summary Deletes the budget for a marketing campaign.
 *
 * @param request DeleteMessageCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMessageCampaignResponse
 */
DeleteMessageCampaignResponse Client::deleteMessageCampaignWithOptions(const DeleteMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMessageCampaign"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMessageCampaignResponse>();
}

/**
 * @summary Deletes the budget for a marketing campaign.
 *
 * @param request DeleteMessageCampaignRequest
 * @return DeleteMessageCampaignResponse
 */
DeleteMessageCampaignResponse Client::deleteMessageCampaign(const DeleteMessageCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMessageCampaignWithOptions(request, runtime);
}

/**
 * @summary 删除messenger的page
 *
 * @param request DeleteMessengerPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMessengerPageResponse
 */
DeleteMessengerPageResponse Client::deleteMessengerPageWithOptions(const DeleteMessengerPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMessengerPage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMessengerPageResponse>();
}

/**
 * @summary 删除messenger的page
 *
 * @param request DeleteMessengerPageRequest
 * @return DeleteMessengerPageResponse
 */
DeleteMessengerPageResponse Client::deleteMessengerPage(const DeleteMessengerPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMessengerPageWithOptions(request, runtime);
}

/**
 * @summary Deletes a message QR code.
 *
 * @description - After a message QR code is deleted, users can no longer scan the QR code to start a chat with your business number. Proceed with caution.
 * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) API to create one.
 * #### QPS limits
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request DeletePhoneMessageQrdlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePhoneMessageQrdlResponse
 */
DeletePhoneMessageQrdlResponse Client::deletePhoneMessageQrdlWithOptions(const DeletePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasQrdlCode()) {
    query["QrdlCode"] = request.getQrdlCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePhoneMessageQrdl"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePhoneMessageQrdlResponse>();
}

/**
 * @summary Deletes a message QR code.
 *
 * @description - After a message QR code is deleted, users can no longer scan the QR code to start a chat with your business number. Proceed with caution.
 * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) API to create one.
 * #### QPS limits
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request DeletePhoneMessageQrdlRequest
 * @return DeletePhoneMessageQrdlResponse
 */
DeletePhoneMessageQrdlResponse Client::deletePhoneMessageQrdl(const DeletePhoneMessageQrdlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePhoneMessageQrdlWithOptions(request, runtime);
}

/**
 * @summary Deprecates a WhatsApp flow.
 *
 * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request DeprecateFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeprecateFlowResponse
 */
DeprecateFlowResponse Client::deprecateFlowWithOptions(const DeprecateFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeprecateFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeprecateFlowResponse>();
}

/**
 * @summary Deprecates a WhatsApp flow.
 *
 * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request DeprecateFlowRequest
 * @return DeprecateFlowResponse
 */
DeprecateFlowResponse Client::deprecateFlow(const DeprecateFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deprecateFlowWithOptions(request, runtime);
}

/**
 * @summary Enables statistics for WhatsApp metrics.
 *
 * @description - Before retrieving metrics for messages sent through WhatsApp channels or for Marketing templates, call this operation to enable statistics for WhatsApp Return on Investment (ROI) metrics.
 * - After you enable statistics for WhatsApp ROI metrics, it takes at least one day for data to become available. Metrics for messages sent and for Marketing templates used before you enabled this feature are not collected.
 * - After you enable it, you can call the [GetChatappPhoneNumberMetric](https://help.aliyun.com/document_detail/2557788.html) operation to query metrics for messages sent from a phone number, or the [GetChatappTemplateMetric](https://help.aliyun.com/document_detail/2557790.html) operation to query metrics for Marketing templates.
 * ### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request EnableWhatsappROIMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableWhatsappROIMetricResponse
 */
EnableWhatsappROIMetricResponse Client::enableWhatsappROIMetricWithOptions(const EnableWhatsappROIMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableWhatsappROIMetric"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableWhatsappROIMetricResponse>();
}

/**
 * @summary Enables statistics for WhatsApp metrics.
 *
 * @description - Before retrieving metrics for messages sent through WhatsApp channels or for Marketing templates, call this operation to enable statistics for WhatsApp Return on Investment (ROI) metrics.
 * - After you enable statistics for WhatsApp ROI metrics, it takes at least one day for data to become available. Metrics for messages sent and for Marketing templates used before you enabled this feature are not collected.
 * - After you enable it, you can call the [GetChatappPhoneNumberMetric](https://help.aliyun.com/document_detail/2557788.html) operation to query metrics for messages sent from a phone number, or the [GetChatappTemplateMetric](https://help.aliyun.com/document_detail/2557790.html) operation to query metrics for Marketing templates.
 * ### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request EnableWhatsappROIMetricRequest
 * @return EnableWhatsappROIMetricResponse
 */
EnableWhatsappROIMetricResponse Client::enableWhatsappROIMetric(const EnableWhatsappROIMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableWhatsappROIMetricWithOptions(request, runtime);
}

/**
 * @summary flow绑定号码
 *
 * @param tmpReq FlowBindPhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlowBindPhoneResponse
 */
FlowBindPhoneResponse Client::flowBindPhoneWithOptions(const FlowBindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlowBindPhoneShrinkRequest request = FlowBindPhoneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhoneNumbers()) {
    request.setPhoneNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhoneNumbers(), "PhoneNumbers", "json"));
  }

  json query = {};
  if (!!request.hasChannelCode()) {
    query["ChannelCode"] = request.getChannelCode();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumbersShrink()) {
    query["PhoneNumbers"] = request.getPhoneNumbersShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWabaId()) {
    query["WabaId"] = request.getWabaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlowBindPhone"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlowBindPhoneResponse>();
}

/**
 * @summary flow绑定号码
 *
 * @param request FlowBindPhoneRequest
 * @return FlowBindPhoneResponse
 */
FlowBindPhoneResponse Client::flowBindPhone(const FlowBindPhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return flowBindPhoneWithOptions(request, runtime);
}

/**
 * @summary flow重绑定手机号
 *
 * @param tmpReq FlowRebindPhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlowRebindPhoneResponse
 */
FlowRebindPhoneResponse Client::flowRebindPhoneWithOptions(const FlowRebindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlowRebindPhoneShrinkRequest request = FlowRebindPhoneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhoneNumbers()) {
    request.setPhoneNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhoneNumbers(), "PhoneNumbers", "json"));
  }

  json query = {};
  if (!!request.hasChannelCode()) {
    query["ChannelCode"] = request.getChannelCode();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumbersShrink()) {
    query["PhoneNumbers"] = request.getPhoneNumbersShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWabaId()) {
    query["WabaId"] = request.getWabaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlowRebindPhone"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlowRebindPhoneResponse>();
}

/**
 * @summary flow重绑定手机号
 *
 * @param request FlowRebindPhoneRequest
 * @return FlowRebindPhoneResponse
 */
FlowRebindPhoneResponse Client::flowRebindPhone(const FlowRebindPhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return flowRebindPhoneWithOptions(request, runtime);
}

/**
 * @summary flow解绑手机号
 *
 * @param tmpReq FlowUnbindPhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlowUnbindPhoneResponse
 */
FlowUnbindPhoneResponse Client::flowUnbindPhoneWithOptions(const FlowUnbindPhoneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlowUnbindPhoneShrinkRequest request = FlowUnbindPhoneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhoneNumbers()) {
    request.setPhoneNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhoneNumbers(), "PhoneNumbers", "json"));
  }

  json query = {};
  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumbersShrink()) {
    query["PhoneNumbers"] = request.getPhoneNumbersShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlowUnbindPhone"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlowUnbindPhoneResponse>();
}

/**
 * @summary flow解绑手机号
 *
 * @param request FlowUnbindPhoneRequest
 * @return FlowUnbindPhoneResponse
 */
FlowUnbindPhoneResponse Client::flowUnbindPhone(const FlowUnbindPhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return flowUnbindPhoneWithOptions(request, runtime);
}

/**
 * @summary 获取临时的URL
 *
 * @param request GeneratePresignedUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GeneratePresignedUrlResponse
 */
GeneratePresignedUrlResponse Client::generatePresignedUrlWithOptions(const GeneratePresignedUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GeneratePresignedUrl"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GeneratePresignedUrlResponse>();
}

/**
 * @summary 获取临时的URL
 *
 * @param request GeneratePresignedUrlRequest
 * @return GeneratePresignedUrlResponse
 */
GeneratePresignedUrlResponse Client::generatePresignedUrl(const GeneratePresignedUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generatePresignedUrlWithOptions(request, runtime);
}

/**
 * @summary 通过类型查询出个人待审核的单子
 *
 * @param request GetAuditRequestByTypeUnAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuditRequestByTypeUnAuditResponse
 */
GetAuditRequestByTypeUnAuditResponse Client::getAuditRequestByTypeUnAuditWithOptions(const GetAuditRequestByTypeUnAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRequestType()) {
    query["RequestType"] = request.getRequestType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuditRequestByTypeUnAudit"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuditRequestByTypeUnAuditResponse>();
}

/**
 * @summary 通过类型查询出个人待审核的单子
 *
 * @param request GetAuditRequestByTypeUnAuditRequest
 * @return GetAuditRequestByTypeUnAuditResponse
 */
GetAuditRequestByTypeUnAuditResponse Client::getAuditRequestByTypeUnAudit(const GetAuditRequestByTypeUnAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditRequestByTypeUnAuditWithOptions(request, runtime);
}

/**
 * @summary Retrieves auto-generated templates.
 *
 * @param request GetAutoGeneratedTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoGeneratedTemplateResponse
 */
GetAutoGeneratedTemplateResponse Client::getAutoGeneratedTemplateWithOptions(const GetAutoGeneratedTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoGeneratedTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoGeneratedTemplateResponse>();
}

/**
 * @summary Retrieves auto-generated templates.
 *
 * @param request GetAutoGeneratedTemplateRequest
 * @return GetAutoGeneratedTemplateResponse
 */
GetAutoGeneratedTemplateResponse Client::getAutoGeneratedTemplate(const GetAutoGeneratedTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoGeneratedTemplateWithOptions(request, runtime);
}

/**
 * @summary 获取ChatFlow运行数据
 *
 * @param tmpReq GetChatFlowMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatFlowMetricResponse
 */
GetChatFlowMetricResponse Client::getChatFlowMetricWithOptions(const GetChatFlowMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetChatFlowMetricShrinkRequest request = GetChatFlowMetricShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  if (!!tmpReq.hasMetricParam()) {
    request.setMetricParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetricParam(), "MetricParam", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.getFrom();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasMetricParamShrink()) {
    query["MetricParam"] = request.getMetricParamShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTo()) {
    query["To"] = request.getTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatFlowMetric"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatFlowMetricResponse>();
}

/**
 * @summary 获取ChatFlow运行数据
 *
 * @param request GetChatFlowMetricRequest
 * @return GetChatFlowMetricResponse
 */
GetChatFlowMetricResponse Client::getChatFlowMetric(const GetChatFlowMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatFlowMetricWithOptions(request, runtime);
}

/**
 * @summary 查询chatFlow模板
 *
 * @param request GetChatFlowTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatFlowTemplateResponse
 */
GetChatFlowTemplateResponse Client::getChatFlowTemplateWithOptions(const GetChatFlowTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatFlowTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatFlowTemplateResponse>();
}

/**
 * @summary 查询chatFlow模板
 *
 * @param request GetChatFlowTemplateRequest
 * @return GetChatFlowTemplateResponse
 */
GetChatFlowTemplateResponse Client::getChatFlowTemplate(const GetChatFlowTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatFlowTemplateWithOptions(request, runtime);
}

/**
 * @summary 查询ChatApp开通状态
 *
 * @param request GetChatappOpenStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatappOpenStatusResponse
 */
GetChatappOpenStatusResponse Client::getChatappOpenStatusWithOptions(const GetChatappOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatappOpenStatus"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatappOpenStatusResponse>();
}

/**
 * @summary 查询ChatApp开通状态
 *
 * @param request GetChatappOpenStatusRequest
 * @return GetChatappOpenStatusResponse
 */
GetChatappOpenStatusResponse Client::getChatappOpenStatus(const GetChatappOpenStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatappOpenStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the message sending metrics for a phone number in a WhatsApp channel.
 *
 * @description - You can call this operation to query message sending metrics. Alternatively, you can query the metrics in the ChatApp console by choosing <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Daily Statistics Reports for Customers**.
 * - Before you call this operation, call the [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) operation to enable return on investment (ROI) metric collection for WhatsApp. Statistics are available at least one day after you enable this feature. Message sending metrics generated before you enable the feature are not collected.
 * - After you enable ROI metric collection for WhatsApp, make sure that messages are successfully sent from your channel. To send messages, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page, select a WhatsApp channel, and choose **Message Sending**. You can also call [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html).
 * ### QPS limit
 * This operation allows a maximum of 50 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetChatappPhoneNumberMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatappPhoneNumberMetricResponse
 */
GetChatappPhoneNumberMetricResponse Client::getChatappPhoneNumberMetricWithOptions(const GetChatappPhoneNumberMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatappPhoneNumberMetric"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatappPhoneNumberMetricResponse>();
}

/**
 * @summary Queries the message sending metrics for a phone number in a WhatsApp channel.
 *
 * @description - You can call this operation to query message sending metrics. Alternatively, you can query the metrics in the ChatApp console by choosing <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Daily Statistics Reports for Customers**.
 * - Before you call this operation, call the [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) operation to enable return on investment (ROI) metric collection for WhatsApp. Statistics are available at least one day after you enable this feature. Message sending metrics generated before you enable the feature are not collected.
 * - After you enable ROI metric collection for WhatsApp, make sure that messages are successfully sent from your channel. To send messages, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page, select a WhatsApp channel, and choose **Message Sending**. You can also call [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html).
 * ### QPS limit
 * This operation allows a maximum of 50 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetChatappPhoneNumberMetricRequest
 * @return GetChatappPhoneNumberMetricResponse
 */
GetChatappPhoneNumberMetricResponse Client::getChatappPhoneNumberMetric(const GetChatappPhoneNumberMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatappPhoneNumberMetricWithOptions(request, runtime);
}

/**
 * @summary 获取Chatapp号码其它控制
 *
 * @param request GetChatappPhoneNumberSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatappPhoneNumberSettingResponse
 */
GetChatappPhoneNumberSettingResponse Client::getChatappPhoneNumberSettingWithOptions(const GetChatappPhoneNumberSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatappPhoneNumberSetting"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatappPhoneNumberSettingResponse>();
}

/**
 * @summary 获取Chatapp号码其它控制
 *
 * @param request GetChatappPhoneNumberSettingRequest
 * @return GetChatappPhoneNumberSettingResponse
 */
GetChatappPhoneNumberSettingResponse Client::getChatappPhoneNumberSetting(const GetChatappPhoneNumberSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatappPhoneNumberSettingWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a message template.
 *
 * @description ### QPS limit
 * This operation allows a maximum of 5 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetChatappTemplateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatappTemplateDetailResponse
 */
GetChatappTemplateDetailResponse Client::getChatappTemplateDetailWithOptions(const GetChatappTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustWabaId()) {
    query["CustWabaId"] = request.getCustWabaId();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatappTemplateDetail"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatappTemplateDetailResponse>();
}

/**
 * @summary Queries the details of a message template.
 *
 * @description ### QPS limit
 * This operation allows a maximum of 5 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetChatappTemplateDetailRequest
 * @return GetChatappTemplateDetailResponse
 */
GetChatappTemplateDetailResponse Client::getChatappTemplateDetail(const GetChatappTemplateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatappTemplateDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the metrics for a marketing template.
 *
 * @description - This API queries metrics only for marketing templates of WhatsApp channels.
 * - Before you call this operation, call [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) to enable metric statistics for WhatsApp Return on Investment (ROI). It takes at least one day for the data to become available after you enable this feature. Metrics are not collected for marketing templates that were used before this feature was enabled.
 * - After you enable metric statistics for WhatsApp ROI, ensure that messages have been sent using the marketing templates of your channels. To send messages, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page, select a WhatsApp channel, and choose **Message Sending**. You can also call [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html).
 * ### QPS limits
 * This API is limited to 50 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetChatappTemplateMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatappTemplateMetricResponse
 */
GetChatappTemplateMetricResponse Client::getChatappTemplateMetricWithOptions(const GetChatappTemplateMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatappTemplateMetric"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatappTemplateMetricResponse>();
}

/**
 * @summary Queries the metrics for a marketing template.
 *
 * @description - This API queries metrics only for marketing templates of WhatsApp channels.
 * - Before you call this operation, call [EnableWhatsAppROIMetric](https://help.aliyun.com/document_detail/2557789.html) to enable metric statistics for WhatsApp Return on Investment (ROI). It takes at least one day for the data to become available after you enable this feature. Metrics are not collected for marketing templates that were used before this feature was enabled.
 * - After you enable metric statistics for WhatsApp ROI, ensure that messages have been sent using the marketing templates of your channels. To send messages, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) page, select a WhatsApp channel, and choose **Message Sending**. You can also call [SendChatappMessage](https://help.aliyun.com/document_detail/432208.html) or [SendChatappMassMessage](https://help.aliyun.com/document_detail/447926.html).
 * ### QPS limits
 * This API is limited to 50 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetChatappTemplateMetricRequest
 * @return GetChatappTemplateMetricResponse
 */
GetChatappTemplateMetricResponse Client::getChatappTemplateMetric(const GetChatappTemplateMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatappTemplateMetricWithOptions(request, runtime);
}

/**
 * @summary Obtains the authentication information that is used to upload a file.
 *
 * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetChatappUploadAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatappUploadAuthorizationResponse
 */
GetChatappUploadAuthorizationResponse Client::getChatappUploadAuthorizationWithOptions(const GetChatappUploadAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatappUploadAuthorization"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatappUploadAuthorizationResponse>();
}

/**
 * @summary Obtains the authentication information that is used to upload a file.
 *
 * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetChatappUploadAuthorizationRequest
 * @return GetChatappUploadAuthorizationResponse
 */
GetChatappUploadAuthorizationResponse Client::getChatappUploadAuthorization(const GetChatappUploadAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatappUploadAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Requests a verification code to be sent to the specified phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetChatappVerifyCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatappVerifyCodeResponse
 */
GetChatappVerifyCodeResponse Client::getChatappVerifyCodeWithOptions(const GetChatappVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.getLocale();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.getMethod();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatappVerifyCode"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatappVerifyCodeResponse>();
}

/**
 * @summary Requests a verification code to be sent to the specified phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetChatappVerifyCodeRequest
 * @return GetChatappVerifyCodeResponse
 */
GetChatappVerifyCodeResponse Client::getChatappVerifyCode(const GetChatappVerifyCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatappVerifyCodeWithOptions(request, runtime);
}

/**
 * @summary Queries the business settings of a phone number.
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetCommerceSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCommerceSettingResponse
 */
GetCommerceSettingResponse Client::getCommerceSettingWithOptions(const GetCommerceSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCommerceSetting"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCommerceSettingResponse>();
}

/**
 * @summary Queries the business settings of a phone number.
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetCommerceSettingRequest
 * @return GetCommerceSettingResponse
 */
GetCommerceSettingResponse Client::getCommerceSetting(const GetCommerceSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCommerceSettingWithOptions(request, runtime);
}

/**
 * @summary Queries the conversational automation settings for a phone number.
 *
 * @description ### [](#qps-)QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
 *
 * @param request GetConversationalAutomationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConversationalAutomationResponse
 */
GetConversationalAutomationResponse Client::getConversationalAutomationWithOptions(const GetConversationalAutomationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConversationalAutomation"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConversationalAutomationResponse>();
}

/**
 * @summary Queries the conversational automation settings for a phone number.
 *
 * @description ### [](#qps-)QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
 *
 * @param request GetConversationalAutomationRequest
 * @return GetConversationalAutomationResponse
 */
GetConversationalAutomationResponse Client::getConversationalAutomation(const GetConversationalAutomationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConversationalAutomationWithOptions(request, runtime);
}

/**
 * @summary 查询客户来源站点
 *
 * @param request GetCustomerSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerSiteResponse
 */
GetCustomerSiteResponse Client::getCustomerSiteWithOptions(const GetCustomerSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomerSite"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerSiteResponse>();
}

/**
 * @summary 查询客户来源站点
 *
 * @param request GetCustomerSiteRequest
 * @return GetCustomerSiteResponse
 */
GetCustomerSiteResponse Client::getCustomerSite(const GetCustomerSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerSiteWithOptions(request, runtime);
}

/**
 * @summary 下载excel数据
 *
 * @param tmpReq GetDownloadExcelListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDownloadExcelListResponse
 */
GetDownloadExcelListResponse Client::getDownloadExcelListWithOptions(const GetDownloadExcelListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDownloadExcelListShrinkRequest request = GetDownloadExcelListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  if (!!tmpReq.hasCountryNames()) {
    request.setCountryNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCountryNames(), "CountryNames", "json"));
  }

  if (!!tmpReq.hasGroupIds()) {
    request.setGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupIds(), "GroupIds", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasCondition()) {
    query["Condition"] = request.getCondition();
  }

  if (!!request.hasCountryNamesShrink()) {
    query["CountryNames"] = request.getCountryNamesShrink();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupIdsShrink()) {
    query["GroupIds"] = request.getGroupIdsShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDownloadExcelList"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDownloadExcelListResponse>();
}

/**
 * @summary 下载excel数据
 *
 * @param request GetDownloadExcelListRequest
 * @return GetDownloadExcelListResponse
 */
GetDownloadExcelListResponse Client::getDownloadExcelList(const GetDownloadExcelListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDownloadExcelListWithOptions(request, runtime);
}

/**
 * @summary 获取ins的page列表
 *
 * @param request GetFbInstagramPagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFbInstagramPagesResponse
 */
GetFbInstagramPagesResponse Client::getFbInstagramPagesWithOptions(const GetFbInstagramPagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.getAccessToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFbInstagramPages"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFbInstagramPagesResponse>();
}

/**
 * @summary 获取ins的page列表
 *
 * @param request GetFbInstagramPagesRequest
 * @return GetFbInstagramPagesResponse
 */
GetFbInstagramPagesResponse Client::getFbInstagramPages(const GetFbInstagramPagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFbInstagramPagesWithOptions(request, runtime);
}

/**
 * @summary 获取facebook的pageId列表
 *
 * @param request GetFbMessengerPagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFbMessengerPagesResponse
 */
GetFbMessengerPagesResponse Client::getFbMessengerPagesWithOptions(const GetFbMessengerPagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.getAccessToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFbMessengerPages"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFbMessengerPagesResponse>();
}

/**
 * @summary 获取facebook的pageId列表
 *
 * @param request GetFbMessengerPagesRequest
 * @return GetFbMessengerPagesResponse
 */
GetFbMessengerPagesResponse Client::getFbMessengerPages(const GetFbMessengerPagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFbMessengerPagesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a WhatsApp flow, including its status, name, categories, and preview URL.
 *
 * @description - Before calling this operation, make sure that you have created a WhatsApp flow.
 * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
 * #### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request GetFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowResponse
 */
GetFlowResponse Client::getFlowWithOptions(const GetFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowResponse>();
}

/**
 * @summary Queries the details of a WhatsApp flow, including its status, name, categories, and preview URL.
 *
 * @description - Before calling this operation, make sure that you have created a WhatsApp flow.
 * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
 * #### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request GetFlowRequest
 * @return GetFlowResponse
 */
GetFlowResponse Client::getFlow(const GetFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the JSON content of a WhatsApp flow.
 *
 * @description - Before calling this operation, make sure that you have created a WhatsApp flow.
 * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
 * #### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request GetFlowJSONAssestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowJSONAssestResponse
 */
GetFlowJSONAssestResponse Client::getFlowJSONAssestWithOptions(const GetFlowJSONAssestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlowJSONAssest"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowJSONAssestResponse>();
}

/**
 * @summary Queries the JSON content of a WhatsApp flow.
 *
 * @description - Before calling this operation, make sure that you have created a WhatsApp flow.
 * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
 * #### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request GetFlowJSONAssestRequest
 * @return GetFlowJSONAssestResponse
 */
GetFlowJSONAssestResponse Client::getFlowJSONAssest(const GetFlowJSONAssestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFlowJSONAssestWithOptions(request, runtime);
}

/**
 * @summary Generates a temporary preview URL for a WhatsApp flow.
 *
 * @description - After you create a WhatsApp flow, call this operation to generate a temporary preview URL for the flow.
 * - Before you call this operation, make sure that you have created a WhatsApp flow.
 * - If you do not have a WhatsApp flow, you can call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
 * #### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request GetFlowPreviewUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowPreviewUrlResponse
 */
GetFlowPreviewUrlResponse Client::getFlowPreviewUrlWithOptions(const GetFlowPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlowPreviewUrl"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowPreviewUrlResponse>();
}

/**
 * @summary Generates a temporary preview URL for a WhatsApp flow.
 *
 * @description - After you create a WhatsApp flow, call this operation to generate a temporary preview URL for the flow.
 * - Before you call this operation, make sure that you have created a WhatsApp flow.
 * - If you do not have a WhatsApp flow, you can call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) API to create one.
 * #### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request GetFlowPreviewUrlRequest
 * @return GetFlowPreviewUrlResponse
 */
GetFlowPreviewUrlResponse Client::getFlowPreviewUrl(const GetFlowPreviewUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFlowPreviewUrlWithOptions(request, runtime);
}

/**
 * @summary 查询群组是否重名
 *
 * @param tmpReq GetGroupExistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupExistResponse
 */
GetGroupExistResponse Client::getGroupExistWithOptions(const GetGroupExistRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetGroupExistShrinkRequest request = GetGroupExistShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroupExist"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupExistResponse>();
}

/**
 * @summary 查询群组是否重名
 *
 * @param request GetGroupExistRequest
 * @return GetGroupExistResponse
 */
GetGroupExistResponse Client::getGroupExist(const GetGroupExistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupExistWithOptions(request, runtime);
}

/**
 * @summary Retrieves campaign metrics.
 *
 * @param request GetMessageCampaignInsightsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessageCampaignInsightsResponse
 */
GetMessageCampaignInsightsResponse Client::getMessageCampaignInsightsWithOptions(const GetMessageCampaignInsightsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMessageCampaignInsights"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMessageCampaignInsightsResponse>();
}

/**
 * @summary Retrieves campaign metrics.
 *
 * @param request GetMessageCampaignInsightsRequest
 * @return GetMessageCampaignInsightsResponse
 */
GetMessageCampaignInsightsResponse Client::getMessageCampaignInsights(const GetMessageCampaignInsightsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMessageCampaignInsightsWithOptions(request, runtime);
}

/**
 * @summary Gets the verification code for phone number migration.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetMigrationVerifyCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMigrationVerifyCodeResponse
 */
GetMigrationVerifyCodeResponse Client::getMigrationVerifyCodeWithOptions(const GetMigrationVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.getLocale();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.getMethod();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMigrationVerifyCode"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMigrationVerifyCodeResponse>();
}

/**
 * @summary Gets the verification code for phone number migration.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetMigrationVerifyCodeRequest
 * @return GetMigrationVerifyCodeResponse
 */
GetMigrationVerifyCodeResponse Client::getMigrationVerifyCode(const GetMigrationVerifyCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMigrationVerifyCodeWithOptions(request, runtime);
}

/**
 * @summary Gets permissions using the code obtained from the embeded signup flow.
 *
 * @description This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param tmpReq GetPermissionByCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPermissionByCodeResponse
 */
GetPermissionByCodeResponse Client::getPermissionByCodeWithOptions(const GetPermissionByCodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetPermissionByCodeShrinkRequest request = GetPermissionByCodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPermissions(), "Permissions", "json"));
  }

  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPermissionsShrink()) {
    query["Permissions"] = request.getPermissionsShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPermissionByCode"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPermissionByCodeResponse>();
}

/**
 * @summary Gets permissions using the code obtained from the embeded signup flow.
 *
 * @description This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetPermissionByCodeRequest
 * @return GetPermissionByCodeResponse
 */
GetPermissionByCodeResponse Client::getPermissionByCode(const GetPermissionByCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPermissionByCodeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the public key for a phone number.
 *
 * @description - Before calling this API, make sure that you have added a verified phone number to your WhatsApp Business Account (WABA).
 * - If no phone number is added to your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to get a verification code to register and verify the phone number.
 * #### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetPhoneEncryptionPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhoneEncryptionPublicKeyResponse
 */
GetPhoneEncryptionPublicKeyResponse Client::getPhoneEncryptionPublicKeyWithOptions(const GetPhoneEncryptionPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhoneEncryptionPublicKey"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhoneEncryptionPublicKeyResponse>();
}

/**
 * @summary Retrieves the public key for a phone number.
 *
 * @description - Before calling this API, make sure that you have added a verified phone number to your WhatsApp Business Account (WABA).
 * - If no phone number is added to your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to get a verification code to register and verify the phone number.
 * #### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetPhoneEncryptionPublicKeyRequest
 * @return GetPhoneEncryptionPublicKeyResponse
 */
GetPhoneEncryptionPublicKeyResponse Client::getPhoneEncryptionPublicKey(const GetPhoneEncryptionPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhoneEncryptionPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the verification status of a phone number.
 *
 * @description - You can call this operation to retrieve the verification status of a phone number. You can also view the status on the <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **WABA Management** > **Phone Number Management** page.
 * - Before calling this operation, add a phone number to your WhatsApp Business Account (WABA) and submit it for verification.
 * - If you have not added a phone number to your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to obtain a verification code and register the number.
 * This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetPhoneNumberVerificationStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhoneNumberVerificationStatusResponse
 */
GetPhoneNumberVerificationStatusResponse Client::getPhoneNumberVerificationStatusWithOptions(const GetPhoneNumberVerificationStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhoneNumberVerificationStatus"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhoneNumberVerificationStatusResponse>();
}

/**
 * @summary Retrieves the verification status of a phone number.
 *
 * @description - You can call this operation to retrieve the verification status of a phone number. You can also view the status on the <props="china">[Channel Management](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **WABA Management** > **Phone Number Management** page.
 * - Before calling this operation, add a phone number to your WhatsApp Business Account (WABA) and submit it for verification.
 * - If you have not added a phone number to your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to obtain a verification code and register the number.
 * This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetPhoneNumberVerificationStatusRequest
 * @return GetPhoneNumberVerificationStatusResponse
 */
GetPhoneNumberVerificationStatusResponse Client::getPhoneNumberVerificationStatus(const GetPhoneNumberVerificationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhoneNumberVerificationStatusWithOptions(request, runtime);
}

/**
 * @summary 下载保证函模板的地址
 *
 * @param request GetPledgeTemplateAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPledgeTemplateAddressResponse
 */
GetPledgeTemplateAddressResponse Client::getPledgeTemplateAddressWithOptions(const GetPledgeTemplateAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasIndustryType()) {
    query["IndustryType"] = request.getIndustryType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPledgeTemplateAddress"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPledgeTemplateAddressResponse>();
}

/**
 * @summary 下载保证函模板的地址
 *
 * @param request GetPledgeTemplateAddressRequest
 * @return GetPledgeTemplateAddressResponse
 */
GetPledgeTemplateAddressResponse Client::getPledgeTemplateAddress(const GetPledgeTemplateAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPledgeTemplateAddressWithOptions(request, runtime);
}

/**
 * @summary Gets the ID for a pre-validated phone number. Use this ID to select the number in the Embedded Signup flow without obtaining a new verification code.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetPreValidatePhoneIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPreValidatePhoneIdResponse
 */
GetPreValidatePhoneIdResponse Client::getPreValidatePhoneIdWithOptions(const GetPreValidatePhoneIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPhoneNumber()) {
    body["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasVerifyCode()) {
    body["VerifyCode"] = request.getVerifyCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPreValidatePhoneId"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPreValidatePhoneIdResponse>();
}

/**
 * @summary Gets the ID for a pre-validated phone number. Use this ID to select the number in the Embedded Signup flow without obtaining a new verification code.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request GetPreValidatePhoneIdRequest
 * @return GetPreValidatePhoneIdResponse
 */
GetPreValidatePhoneIdResponse Client::getPreValidatePhoneId(const GetPreValidatePhoneIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPreValidatePhoneIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves the application by its requestNo.
 *
 * @param request GetViberByRequestNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetViberByRequestNoResponse
 */
GetViberByRequestNoResponse Client::getViberByRequestNoWithOptions(const GetViberByRequestNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRequestNo()) {
    query["RequestNo"] = request.getRequestNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetViberByRequestNo"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetViberByRequestNoResponse>();
}

/**
 * @summary Retrieves the application by its requestNo.
 *
 * @param request GetViberByRequestNoRequest
 * @return GetViberByRequestNoResponse
 */
GetViberByRequestNoResponse Client::getViberByRequestNo(const GetViberByRequestNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getViberByRequestNoWithOptions(request, runtime);
}

/**
 * @summary 可以申请暂停的次数
 *
 * @param request GetViberPauseTimesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetViberPauseTimesResponse
 */
GetViberPauseTimesResponse Client::getViberPauseTimesWithOptions(const GetViberPauseTimesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetViberPauseTimes"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetViberPauseTimesResponse>();
}

/**
 * @summary 可以申请暂停的次数
 *
 * @param request GetViberPauseTimesRequest
 * @return GetViberPauseTimesResponse
 */
GetViberPauseTimesResponse Client::getViberPauseTimes(const GetViberPauseTimesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getViberPauseTimesWithOptions(request, runtime);
}

/**
 * @summary Queries the product catalogs that are associated with a WhatsApp Business account (WABA).
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetWhatsappConnectionCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWhatsappConnectionCatalogResponse
 */
GetWhatsappConnectionCatalogResponse Client::getWhatsappConnectionCatalogWithOptions(const GetWhatsappConnectionCatalogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWabaId()) {
    query["WabaId"] = request.getWabaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWhatsappConnectionCatalog"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWhatsappConnectionCatalogResponse>();
}

/**
 * @summary Queries the product catalogs that are associated with a WhatsApp Business account (WABA).
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request GetWhatsappConnectionCatalogRequest
 * @return GetWhatsappConnectionCatalogResponse
 */
GetWhatsappConnectionCatalogResponse Client::getWhatsappConnectionCatalog(const GetWhatsappConnectionCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWhatsappConnectionCatalogWithOptions(request, runtime);
}

/**
 * @summary 获取嵌入式授权page
 *
 * @param request GetWhatsappConversionApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWhatsappConversionApiResponse
 */
GetWhatsappConversionApiResponse Client::getWhatsappConversionApiWithOptions(const GetWhatsappConversionApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWhatsappConversionApi"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWhatsappConversionApiResponse>();
}

/**
 * @summary 获取嵌入式授权page
 *
 * @param request GetWhatsappConversionApiRequest
 * @return GetWhatsappConversionApiResponse
 */
GetWhatsappConversionApiResponse Client::getWhatsappConversionApi(const GetWhatsappConversionApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWhatsappConversionApiWithOptions(request, runtime);
}

/**
 * @summary Queries the messaging health status of different types of nodes.
 *
 * @description ### [](#qps-)QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
 *
 * @param request GetWhatsappHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWhatsappHealthStatusResponse
 */
GetWhatsappHealthStatusResponse Client::getWhatsappHealthStatusWithOptions(const GetWhatsappHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasNodeType()) {
    query["NodeType"] = request.getNodeType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasWabaId()) {
    query["WabaId"] = request.getWabaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWhatsappHealthStatus"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWhatsappHealthStatusResponse>();
}

/**
 * @summary Queries the messaging health status of different types of nodes.
 *
 * @description ### [](#qps-)QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
 *
 * @param request GetWhatsappHealthStatusRequest
 * @return GetWhatsappHealthStatusResponse
 */
GetWhatsappHealthStatusResponse Client::getWhatsappHealthStatus(const GetWhatsappHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWhatsappHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Gets the App ID for an Independent Software Vendor (ISV).
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request IsvGetAppIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IsvGetAppIdResponse
 */
IsvGetAppIdResponse Client::isvGetAppIdWithOptions(const IsvGetAppIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIntlVersion()) {
    query["IntlVersion"] = request.getIntlVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPermissions()) {
    query["Permissions"] = request.getPermissions();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IsvGetAppId"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IsvGetAppIdResponse>();
}

/**
 * @summary Gets the App ID for an Independent Software Vendor (ISV).
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request IsvGetAppIdRequest
 * @return IsvGetAppIdResponse
 */
IsvGetAppIdResponse Client::isvGetAppId(const IsvGetAppIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return isvGetAppIdWithOptions(request, runtime);
}

/**
 * @summary 查询群组列表
 *
 * @param tmpReq ListAllGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllGroupsResponse
 */
ListAllGroupsResponse Client::listAllGroupsWithOptions(const ListAllGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAllGroupsShrinkRequest request = ListAllGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllGroups"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllGroupsResponse>();
}

/**
 * @summary 查询群组列表
 *
 * @param request ListAllGroupsRequest
 * @return ListAllGroupsResponse
 */
ListAllGroupsResponse Client::listAllGroups(const ListAllGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询绑定的dm账号
 *
 * @param request ListBindDmAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindDmAccountResponse
 */
ListBindDmAccountResponse Client::listBindDmAccountWithOptions(const ListBindDmAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBindDmAccount"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBindDmAccountResponse>();
}

/**
 * @summary 查询绑定的dm账号
 *
 * @param request ListBindDmAccountRequest
 * @return ListBindDmAccountResponse
 */
ListBindDmAccountResponse Client::listBindDmAccount(const ListBindDmAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBindDmAccountWithOptions(request, runtime);
}

/**
 * @summary 根据flowCode查询已绑定列表
 *
 * @param request ListBindingRelationsForFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindingRelationsForFlowVersionResponse
 */
ListBindingRelationsForFlowVersionResponse Client::listBindingRelationsForFlowVersionWithOptions(const ListBindingRelationsForFlowVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBindingRelationsForFlowVersion"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBindingRelationsForFlowVersionResponse>();
}

/**
 * @summary 根据flowCode查询已绑定列表
 *
 * @param request ListBindingRelationsForFlowVersionRequest
 * @return ListBindingRelationsForFlowVersionResponse
 */
ListBindingRelationsForFlowVersionResponse Client::listBindingRelationsForFlowVersion(const ListBindingRelationsForFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBindingRelationsForFlowVersionWithOptions(request, runtime);
}

/**
 * @summary 列举流程
 *
 * @param tmpReq ListChatFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatFlowResponse
 */
ListChatFlowResponse Client::listChatFlowWithOptions(const ListChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListChatFlowShrinkRequest request = ListChatFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowTriggerType()) {
    query["FlowTriggerType"] = request.getFlowTriggerType();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasReturnWithOnlineVersion()) {
    query["ReturnWithOnlineVersion"] = request.getReturnWithOnlineVersion();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatFlowResponse>();
}

/**
 * @summary 列举流程
 *
 * @param request ListChatFlowRequest
 * @return ListChatFlowResponse
 */
ListChatFlowResponse Client::listChatFlow(const ListChatFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatFlowWithOptions(request, runtime);
}

/**
 * @summary chatFlow模板列表
 *
 * @param request ListChatFlowTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatFlowTemplateResponse
 */
ListChatFlowTemplateResponse Client::listChatFlowTemplateWithOptions(const ListChatFlowTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTriggerType()) {
    query["TriggerType"] = request.getTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatFlowTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatFlowTemplateResponse>();
}

/**
 * @summary chatFlow模板列表
 *
 * @param request ListChatFlowTemplateRequest
 * @return ListChatFlowTemplateResponse
 */
ListChatFlowTemplateResponse Client::listChatFlowTemplate(const ListChatFlowTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatFlowTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of IM groups.
 *
 * @description >Notice: 
 * Retrieving the IM group list via the API is a beta feature. Contact your account manager to be added to the allowlist.
 * - You must have an IM group before you call this operation.
 * - If you do not have an IM group, you can only create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) API.
 * - The optional parameters for this operation filter the IM group list. If you do not specify any filters, the operation returns the complete IM group list.
 *
 * @param tmpReq ListChatGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatGroupResponse
 */
ListChatGroupResponse Client::listChatGroupWithOptions(const ListChatGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListChatGroupShrinkRequest request = ListChatGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasGroupLink()) {
    query["GroupLink"] = request.getGroupLink();
  }

  if (!!request.hasGroupStatus()) {
    query["GroupStatus"] = request.getGroupStatus();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubject()) {
    query["Subject"] = request.getSubject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatGroup"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatGroupResponse>();
}

/**
 * @summary Retrieves a list of IM groups.
 *
 * @description >Notice: 
 * Retrieving the IM group list via the API is a beta feature. Contact your account manager to be added to the allowlist.
 * - You must have an IM group before you call this operation.
 * - If you do not have an IM group, you can only create one by calling the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) API.
 * - The optional parameters for this operation filter the IM group list. If you do not specify any filters, the operation returns the complete IM group list.
 *
 * @param request ListChatGroupRequest
 * @return ListChatGroupResponse
 */
ListChatGroupResponse Client::listChatGroup(const ListChatGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatGroupWithOptions(request, runtime);
}

/**
 * @summary Lists the members of an IM group.
 *
 * @description >Notice: 
 * This operation is an internal preview feature. Contact your account manager to request access.
 * - Before calling this operation, ensure you have created an IM group with an invitation link, and that members have joined by using that link.
 * - To create an IM group and add an invitation link, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations.
 *
 * @param tmpReq ListChatGroupParticipantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatGroupParticipantsResponse
 */
ListChatGroupParticipantsResponse Client::listChatGroupParticipantsWithOptions(const ListChatGroupParticipantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListChatGroupParticipantsShrinkRequest request = ListChatGroupParticipantsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatGroupParticipants"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatGroupParticipantsResponse>();
}

/**
 * @summary Lists the members of an IM group.
 *
 * @description >Notice: 
 * This operation is an internal preview feature. Contact your account manager to request access.
 * - Before calling this operation, ensure you have created an IM group with an invitation link, and that members have joined by using that link.
 * - To create an IM group and add an invitation link, call the [AddChatGroup](https://help.aliyun.com/document_detail/2998429.html) and [AddChatGroupInviteLink](https://help.aliyun.com/document_detail/3019211.html) operations.
 *
 * @param request ListChatGroupParticipantsRequest
 * @return ListChatGroupParticipantsResponse
 */
ListChatGroupParticipantsResponse Client::listChatGroupParticipants(const ListChatGroupParticipantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatGroupParticipantsWithOptions(request, runtime);
}

/**
 * @summary 查询消息列表
 *
 * @param tmpReq ListChatappMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatappMessageResponse
 */
ListChatappMessageResponse Client::listChatappMessageWithOptions(const ListChatappMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListChatappMessageShrinkRequest request = ListChatappMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasClientAcceptStatus()) {
    query["ClientAcceptStatus"] = request.getClientAcceptStatus();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEndTimeStr()) {
    query["EndTimeStr"] = request.getEndTimeStr();
  }

  if (!!request.hasEventAction()) {
    query["EventAction"] = request.getEventAction();
  }

  if (!!request.hasGroupMessageId()) {
    query["GroupMessageId"] = request.getGroupMessageId();
  }

  if (!!request.hasMessageStatus()) {
    query["MessageStatus"] = request.getMessageStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStartTimeStr()) {
    query["StartTimeStr"] = request.getStartTimeStr();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasUserNumber()) {
    query["UserNumber"] = request.getUserNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatappMessage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatappMessageResponse>();
}

/**
 * @summary 查询消息列表
 *
 * @param request ListChatappMessageRequest
 * @return ListChatappMessageResponse
 */
ListChatappMessageResponse Client::listChatappMessage(const ListChatappMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatappMessageWithOptions(request, runtime);
}

/**
 * @summary Queries message templates.
 *
 * @description ### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param tmpReq ListChatappTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatappTemplateResponse
 */
ListChatappTemplateResponse Client::listChatappTemplateWithOptions(const ListChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListChatappTemplateShrinkRequest request = ListChatappTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustWabaId()) {
    query["CustWabaId"] = request.getCustWabaId();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatappTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatappTemplateResponse>();
}

/**
 * @summary Queries message templates.
 *
 * @description ### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request ListChatappTemplateRequest
 * @return ListChatappTemplateResponse
 */
ListChatappTemplateResponse Client::listChatappTemplate(const ListChatappTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatappTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries a list of custom audiences.
 *
 * @param tmpReq ListCustomAudienceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomAudienceResponse
 */
ListCustomAudienceResponse Client::listCustomAudienceWithOptions(const ListCustomAudienceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCustomAudienceShrinkRequest request = ListCustomAudienceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustomAudienceId()) {
    query["CustomAudienceId"] = request.getCustomAudienceId();
  }

  if (!!request.hasCustomAudienceName()) {
    query["CustomAudienceName"] = request.getCustomAudienceName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTokenType()) {
    query["TokenType"] = request.getTokenType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomAudience"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomAudienceResponse>();
}

/**
 * @summary Queries a list of custom audiences.
 *
 * @param request ListCustomAudienceRequest
 * @return ListCustomAudienceResponse
 */
ListCustomAudienceResponse Client::listCustomAudience(const ListCustomAudienceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAudienceWithOptions(request, runtime);
}

/**
 * @summary 查询账号下的Dm账号
 *
 * @param request ListDmAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDmAccountResponse
 */
ListDmAccountResponse Client::listDmAccountWithOptions(const ListDmAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSendType()) {
    query["SendType"] = request.getSendType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDmAccount"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDmAccountResponse>();
}

/**
 * @summary 查询账号下的Dm账号
 *
 * @param request ListDmAccountRequest
 * @return ListDmAccountResponse
 */
ListDmAccountResponse Client::listDmAccount(const ListDmAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDmAccountWithOptions(request, runtime);
}

/**
 * @summary 查询DM的tag
 *
 * @param request ListDmTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDmTagResponse
 */
ListDmTagResponse Client::listDmTagWithOptions(const ListDmTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDmTag"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDmTagResponse>();
}

/**
 * @summary 查询DM的tag
 *
 * @param request ListDmTagRequest
 * @return ListDmTagResponse
 */
ListDmTagResponse Client::listDmTag(const ListDmTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDmTagWithOptions(request, runtime);
}

/**
 * @summary 查询facebook帖子列表
 *
 * @param request ListFacebookPostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFacebookPostsResponse
 */
ListFacebookPostsResponse Client::listFacebookPostsWithOptions(const ListFacebookPostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFacebookPosts"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFacebookPostsResponse>();
}

/**
 * @summary 查询facebook帖子列表
 *
 * @param request ListFacebookPostsRequest
 * @return ListFacebookPostsResponse
 */
ListFacebookPostsResponse Client::listFacebookPosts(const ListFacebookPostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFacebookPostsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of WhatsApp flows.
 *
 * @description This operation allows a maximum of 5 requests per second (RPS) per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param tmpReq ListFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowResponse
 */
ListFlowResponse Client::listFlowWithOptions(const ListFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFlowShrinkRequest request = ListFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFlowName()) {
    query["FlowName"] = request.getFlowName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowResponse>();
}

/**
 * @summary Retrieves a list of WhatsApp flows.
 *
 * @description This operation allows a maximum of 5 requests per second (RPS) per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request ListFlowRequest
 * @return ListFlowResponse
 */
ListFlowResponse Client::listFlow(const ListFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlowWithOptions(request, runtime);
}

/**
 * @summary ListFlowNodeGroup
 *
 * @param request ListFlowNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowNodeGroupResponse
 */
ListFlowNodeGroupResponse Client::listFlowNodeGroupWithOptions(const ListFlowNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlowNodeGroup"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowNodeGroupResponse>();
}

/**
 * @summary ListFlowNodeGroup
 *
 * @param request ListFlowNodeGroupRequest
 * @return ListFlowNodeGroupResponse
 */
ListFlowNodeGroupResponse Client::listFlowNodeGroup(const ListFlowNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlowNodeGroupWithOptions(request, runtime);
}

/**
 * @summary ListFlowNodePrototypeV2
 *
 * @param request ListFlowNodePrototypeV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowNodePrototypeV2Response
 */
ListFlowNodePrototypeV2Response Client::listFlowNodePrototypeV2WithOptions(const ListFlowNodePrototypeV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasGroupCode()) {
    query["GroupCode"] = request.getGroupCode();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlowNodePrototypeV2"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowNodePrototypeV2Response>();
}

/**
 * @summary ListFlowNodePrototypeV2
 *
 * @param request ListFlowNodePrototypeV2Request
 * @return ListFlowNodePrototypeV2Response
 */
ListFlowNodePrototypeV2Response Client::listFlowNodePrototypeV2(const ListFlowNodePrototypeV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlowNodePrototypeV2WithOptions(request, runtime);
}

/**
 * @summary 列举流程版本
 *
 * @param tmpReq ListFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowVersionResponse
 */
ListFlowVersionResponse Client::listFlowVersionWithOptions(const ListFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFlowVersionShrinkRequest request = ListFlowVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlowVersion"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowVersionResponse>();
}

/**
 * @summary 列举流程版本
 *
 * @param request ListFlowVersionRequest
 * @return ListFlowVersionResponse
 */
ListFlowVersionResponse Client::listFlowVersion(const ListFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlowVersionWithOptions(request, runtime);
}

/**
 * @summary 获取ins的page
 *
 * @param request ListInstagramPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstagramPageResponse
 */
ListInstagramPageResponse Client::listInstagramPageWithOptions(const ListInstagramPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstagramPage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstagramPageResponse>();
}

/**
 * @summary 获取ins的page
 *
 * @param request ListInstagramPageRequest
 * @return ListInstagramPageResponse
 */
ListInstagramPageResponse Client::listInstagramPage(const ListInstagramPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstagramPageWithOptions(request, runtime);
}

/**
 * @summary 查询instagram帖子列表
 *
 * @param request ListInstagramPostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstagramPostsResponse
 */
ListInstagramPostsResponse Client::listInstagramPostsWithOptions(const ListInstagramPostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstagramPosts"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstagramPostsResponse>();
}

/**
 * @summary 查询instagram帖子列表
 *
 * @param request ListInstagramPostsRequest
 * @return ListInstagramPostsResponse
 */
ListInstagramPostsResponse Client::listInstagramPosts(const ListInstagramPostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstagramPostsWithOptions(request, runtime);
}

/**
 * @summary Lists instances.
 *
 * @param request ListInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstanceWithOptions(const ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasFilterStr()) {
    query["FilterStr"] = request.getFilterStr();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSubmitTime()) {
    query["SubmitTime"] = request.getSubmitTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstance"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResponse>();
}

/**
 * @summary Lists instances.
 *
 * @param request ListInstanceRequest
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstance(const ListInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询活动列表
 *
 * @param tmpReq ListMarketingFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMarketingFlowResponse
 */
ListMarketingFlowResponse Client::listMarketingFlowWithOptions(const ListMarketingFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMarketingFlowShrinkRequest request = ListMarketingFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasActivityCode()) {
    query["ActivityCode"] = request.getActivityCode();
  }

  if (!!request.hasActivityName()) {
    query["ActivityName"] = request.getActivityName();
  }

  if (!!request.hasActivityStatus()) {
    query["ActivityStatus"] = request.getActivityStatus();
  }

  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRelatedFlowCode()) {
    query["RelatedFlowCode"] = request.getRelatedFlowCode();
  }

  if (!!request.hasRelatedGroupId()) {
    query["RelatedGroupId"] = request.getRelatedGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMarketingFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMarketingFlowResponse>();
}

/**
 * @summary 查询活动列表
 *
 * @param request ListMarketingFlowRequest
 * @return ListMarketingFlowResponse
 */
ListMarketingFlowResponse Client::listMarketingFlow(const ListMarketingFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMarketingFlowWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of budgets.
 *
 * @param tmpReq ListMessageCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMessageCampaignResponse
 */
ListMessageCampaignResponse Client::listMessageCampaignWithOptions(const ListMessageCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMessageCampaignShrinkRequest request = ListMessageCampaignShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasCampaignName()) {
    query["CampaignName"] = request.getCampaignName();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMessageCampaign"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMessageCampaignResponse>();
}

/**
 * @summary Retrieves a list of budgets.
 *
 * @param request ListMessageCampaignRequest
 * @return ListMessageCampaignResponse
 */
ListMessageCampaignResponse Client::listMessageCampaign(const ListMessageCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMessageCampaignWithOptions(request, runtime);
}

/**
 * @summary Queries custom audiences and subscription tokens.
 *
 * @param request ListMessengerSubscriptionTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMessengerSubscriptionTokenResponse
 */
ListMessengerSubscriptionTokenResponse Client::listMessengerSubscriptionTokenWithOptions(const ListMessengerSubscriptionTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustomAudienceId()) {
    query["CustomAudienceId"] = request.getCustomAudienceId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasPageKey()) {
    query["PageKey"] = request.getPageKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTokenType()) {
    query["TokenType"] = request.getTokenType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMessengerSubscriptionToken"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMessengerSubscriptionTokenResponse>();
}

/**
 * @summary Queries custom audiences and subscription tokens.
 *
 * @param request ListMessengerSubscriptionTokenRequest
 * @return ListMessengerSubscriptionTokenResponse
 */
ListMessengerSubscriptionTokenResponse Client::listMessengerSubscriptionToken(const ListMessengerSubscriptionTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMessengerSubscriptionTokenWithOptions(request, runtime);
}

/**
 * @summary 查询Page绑定的广告账户列表
 *
 * @param request ListPageAdAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPageAdAccountResponse
 */
ListPageAdAccountResponse Client::listPageAdAccountWithOptions(const ListPageAdAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPageAdAccount"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPageAdAccountResponse>();
}

/**
 * @summary 查询Page绑定的广告账户列表
 *
 * @param request ListPageAdAccountRequest
 * @return ListPageAdAccountResponse
 */
ListPageAdAccountResponse Client::listPageAdAccount(const ListPageAdAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPageAdAccountWithOptions(request, runtime);
}

/**
 * @summary Queries message QR codes.
 *
 * @description This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ListPhoneMessageQrdlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPhoneMessageQrdlResponse
 */
ListPhoneMessageQrdlResponse Client::listPhoneMessageQrdlWithOptions(const ListPhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPhoneMessageQrdl"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPhoneMessageQrdlResponse>();
}

/**
 * @summary Queries message QR codes.
 *
 * @description This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ListPhoneMessageQrdlRequest
 * @return ListPhoneMessageQrdlResponse
 */
ListPhoneMessageQrdlResponse Client::listPhoneMessageQrdl(const ListPhoneMessageQrdlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPhoneMessageQrdlWithOptions(request, runtime);
}

/**
 * @summary Retrieves products in a catalog.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ListProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductResponse
 */
ListProductResponse Client::listProductWithOptions(const ListProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfter()) {
    query["After"] = request.getAfter();
  }

  if (!!request.hasBefore()) {
    query["Before"] = request.getBefore();
  }

  if (!!request.hasCatalogId()) {
    query["CatalogId"] = request.getCatalogId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFields()) {
    query["Fields"] = request.getFields();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWabaId()) {
    query["WabaId"] = request.getWabaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProduct"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductResponse>();
}

/**
 * @summary Retrieves products in a catalog.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request ListProductRequest
 * @return ListProductResponse
 */
ListProductResponse Client::listProduct(const ListProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductWithOptions(request, runtime);
}

/**
 * @summary Queries the product catalogs on the Business Manager platform of Meta.
 *
 * @description This operation allows a maximum of 10 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request ListProductCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductCatalogResponse
 */
ListProductCatalogResponse Client::listProductCatalogWithOptions(const ListProductCatalogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfter()) {
    query["After"] = request.getAfter();
  }

  if (!!request.hasBefore()) {
    query["Before"] = request.getBefore();
  }

  if (!!request.hasBusinessId()) {
    query["BusinessId"] = request.getBusinessId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFields()) {
    query["Fields"] = request.getFields();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProductCatalog"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductCatalogResponse>();
}

/**
 * @summary Queries the product catalogs on the Business Manager platform of Meta.
 *
 * @description This operation allows a maximum of 10 requests per second (RPS) per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request ListProductCatalogRequest
 * @return ListProductCatalogResponse
 */
ListProductCatalogResponse Client::listProductCatalog(const ListProductCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductCatalogWithOptions(request, runtime);
}

/**
 * @summary 展示viber申请单服务号卡片
 *
 * @param request ListViberServiceMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListViberServiceMessageResponse
 */
ListViberServiceMessageResponse Client::listViberServiceMessageWithOptions(const ListViberServiceMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListViberServiceMessage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListViberServiceMessageResponse>();
}

/**
 * @summary 展示viber申请单服务号卡片
 *
 * @param request ListViberServiceMessageRequest
 * @return ListViberServiceMessageResponse
 */
ListViberServiceMessageResponse Client::listViberServiceMessage(const ListViberServiceMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listViberServiceMessageWithOptions(request, runtime);
}

/**
 * @summary Lists message templates.
 *
 * @param request ListWhatAppTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWhatAppTemplateResponse
 */
ListWhatAppTemplateResponse Client::listWhatAppTemplateWithOptions(const ListWhatAppTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasHetuParams()) {
    query["HetuParams"] = request.getHetuParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWhatAppTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWhatAppTemplateResponse>();
}

/**
 * @summary Lists message templates.
 *
 * @param request ListWhatAppTemplateRequest
 * @return ListWhatAppTemplateResponse
 */
ListWhatAppTemplateResponse Client::listWhatAppTemplate(const ListWhatAppTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWhatAppTemplateWithOptions(request, runtime);
}

/**
 * @summary Modifies a message template. You can modify only templates that are unreviewed or have been rejected.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for this API is 50 calls per second for each user. If you exceed this limit, your API calls are subject to rate limiting. This may affect your business. Make sure that you call this API within the specified limit.
 * ### Status changes
 * You can monitor changes in template status and quality through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
 *
 * @param tmpReq ModifyChatappTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyChatappTemplateResponse
 */
ModifyChatappTemplateResponse Client::modifyChatappTemplateWithOptions(const ModifyChatappTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyChatappTemplateShrinkRequest request = ModifyChatappTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComponents()) {
    request.setComponentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComponents(), "Components", "json"));
  }

  if (!!tmpReq.hasExample()) {
    request.setExampleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExample(), "Example", "json"));
  }

  json body = {};
  if (!!request.hasCategory()) {
    body["Category"] = request.getCategory();
  }

  if (!!request.hasCategoryChangePaused()) {
    body["CategoryChangePaused"] = request.getCategoryChangePaused();
  }

  if (!!request.hasComponentsShrink()) {
    body["Components"] = request.getComponentsShrink();
  }

  if (!!request.hasCustSpaceId()) {
    body["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustWabaId()) {
    body["CustWabaId"] = request.getCustWabaId();
  }

  if (!!request.hasExampleShrink()) {
    body["Example"] = request.getExampleShrink();
  }

  if (!!request.hasIsvCode()) {
    body["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.getLanguage();
  }

  if (!!request.hasMessageSendTtlSeconds()) {
    body["MessageSendTtlSeconds"] = request.getMessageSendTtlSeconds();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyChatappTemplate"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyChatappTemplateResponse>();
}

/**
 * @summary Modifies a message template. You can modify only templates that are unreviewed or have been rejected.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for this API is 50 calls per second for each user. If you exceed this limit, your API calls are subject to rate limiting. This may affect your business. Make sure that you call this API within the specified limit.
 * ### Status changes
 * You can monitor changes in template status and quality through MNS or HTTP. For more information, see [Receipt messages](https://help.aliyun.com/document_detail/421545.html).
 *
 * @param request ModifyChatappTemplateRequest
 * @return ModifyChatappTemplateResponse
 */
ModifyChatappTemplateResponse Client::modifyChatappTemplate(const ModifyChatappTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyChatappTemplateWithOptions(request, runtime);
}

/**
 * @summary 修改模板上的一些属性
 *
 * @param request ModifyChatappTemplatePropertiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyChatappTemplatePropertiesResponse
 */
ModifyChatappTemplatePropertiesResponse Client::modifyChatappTemplatePropertiesWithOptions(const ModifyChatappTemplatePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowSend()) {
    query["AllowSend"] = request.getAllowSend();
  }

  if (!!request.hasCategoryChangePaused()) {
    query["CategoryChangePaused"] = request.getCategoryChangePaused();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyChatappTemplateProperties"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyChatappTemplatePropertiesResponse>();
}

/**
 * @summary 修改模板上的一些属性
 *
 * @param request ModifyChatappTemplatePropertiesRequest
 * @return ModifyChatappTemplatePropertiesResponse
 */
ModifyChatappTemplatePropertiesResponse Client::modifyChatappTemplateProperties(const ModifyChatappTemplatePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyChatappTemplatePropertiesWithOptions(request, runtime);
}

/**
 * @summary Modifies a flow.
 *
 * @description This API is limited to 5 queries per second (QPS) per account. Calls that exceed this limit trigger flow control, which can affect your business. Plan your API calls accordingly.
 *
 * @param tmpReq ModifyFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFlowResponse
 */
ModifyFlowResponse Client::modifyFlowWithOptions(const ModifyFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyFlowShrinkRequest request = ModifyFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategories()) {
    request.setCategoriesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategories(), "Categories", "json"));
  }

  json query = {};
  if (!!request.hasCategoriesShrink()) {
    query["Categories"] = request.getCategoriesShrink();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasEndpointUri()) {
    query["EndpointUri"] = request.getEndpointUri();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowName()) {
    query["FlowName"] = request.getFlowName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFlowResponse>();
}

/**
 * @summary Modifies a flow.
 *
 * @description This API is limited to 5 queries per second (QPS) per account. Calls that exceed this limit trigger flow control, which can affect your business. Plan your API calls accordingly.
 *
 * @param request ModifyFlowRequest
 * @return ModifyFlowResponse
 */
ModifyFlowResponse Client::modifyFlow(const ModifyFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFlowWithOptions(request, runtime);
}

/**
 * @summary The ID of the request.
 *
 * @description ModifyPhoneBusinessProfile
 *
 * @param tmpReq ModifyPhoneBusinessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPhoneBusinessProfileResponse
 */
ModifyPhoneBusinessProfileResponse Client::modifyPhoneBusinessProfileWithOptions(const ModifyPhoneBusinessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyPhoneBusinessProfileShrinkRequest request = ModifyPhoneBusinessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWebsites()) {
    request.setWebsitesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWebsites(), "Websites", "json"));
  }

  json query = {};
  if (!!request.hasAbout()) {
    query["About"] = request.getAbout();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasProfilePictureUrl()) {
    query["ProfilePictureUrl"] = request.getProfilePictureUrl();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVertical()) {
    query["Vertical"] = request.getVertical();
  }

  if (!!request.hasWebsitesShrink()) {
    query["Websites"] = request.getWebsitesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPhoneBusinessProfile"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPhoneBusinessProfileResponse>();
}

/**
 * @summary The ID of the request.
 *
 * @description ModifyPhoneBusinessProfile
 *
 * @param request ModifyPhoneBusinessProfileRequest
 * @return ModifyPhoneBusinessProfileResponse
 */
ModifyPhoneBusinessProfileResponse Client::modifyPhoneBusinessProfile(const ModifyPhoneBusinessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPhoneBusinessProfileWithOptions(request, runtime);
}

/**
 * @summary 联系人变更群组
 *
 * @param tmpReq MoveContactToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveContactToGroupResponse
 */
MoveContactToGroupResponse Client::moveContactToGroupWithOptions(const MoveContactToGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MoveContactToGroupShrinkRequest request = MoveContactToGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasContacts()) {
    query["Contacts"] = request.getContacts();
  }

  if (!!request.hasLinkExistGroups()) {
    query["LinkExistGroups"] = request.getLinkExistGroups();
  }

  if (!!request.hasLinkNewGroups()) {
    query["LinkNewGroups"] = request.getLinkNewGroups();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveContactToGroup"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveContactToGroupResponse>();
}

/**
 * @summary 联系人变更群组
 *
 * @param request MoveContactToGroupRequest
 * @return MoveContactToGroupResponse
 */
MoveContactToGroupResponse Client::moveContactToGroup(const MoveContactToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveContactToGroupWithOptions(request, runtime);
}

/**
 * @summary 下线流程版本
 *
 * @param tmpReq OfflineFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineFlowVersionResponse
 */
OfflineFlowVersionResponse Client::offlineFlowVersionWithOptions(const OfflineFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OfflineFlowVersionShrinkRequest request = OfflineFlowVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OfflineFlowVersion"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineFlowVersionResponse>();
}

/**
 * @summary 下线流程版本
 *
 * @param request OfflineFlowVersionRequest
 * @return OfflineFlowVersionResponse
 */
OfflineFlowVersionResponse Client::offlineFlowVersion(const OfflineFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineFlowVersionWithOptions(request, runtime);
}

/**
 * @summary 上线流程版本
 *
 * @param tmpReq OnlineFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineFlowVersionResponse
 */
OnlineFlowVersionResponse Client::onlineFlowVersionWithOptions(const OnlineFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OnlineFlowVersionShrinkRequest request = OnlineFlowVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnlineFlowVersion"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineFlowVersionResponse>();
}

/**
 * @summary 上线流程版本
 *
 * @param request OnlineFlowVersionRequest
 * @return OnlineFlowVersionResponse
 */
OnlineFlowVersionResponse Client::onlineFlowVersion(const OnlineFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onlineFlowVersionWithOptions(request, runtime);
}

/**
 * @summary 开通Chatapp服务
 *
 * @param request OpenChatappServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenChatappServiceResponse
 */
OpenChatappServiceResponse Client::openChatappServiceWithOptions(const OpenChatappServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenChatappService"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenChatappServiceResponse>();
}

/**
 * @summary 开通Chatapp服务
 *
 * @param request OpenChatappServiceRequest
 * @return OpenChatappServiceResponse
 */
OpenChatappServiceResponse Client::openChatappService(const OpenChatappServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openChatappServiceWithOptions(request, runtime);
}

/**
 * @summary 暂停服务
 *
 * @param request PauseMarketingFLowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseMarketingFLowResponse
 */
PauseMarketingFLowResponse Client::pauseMarketingFLowWithOptions(const PauseMarketingFLowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityCode()) {
    query["ActivityCode"] = request.getActivityCode();
  }

  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.getActivityId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseMarketingFLow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseMarketingFLowResponse>();
}

/**
 * @summary 暂停服务
 *
 * @param request PauseMarketingFLowRequest
 * @return PauseMarketingFLowResponse
 */
PauseMarketingFLowResponse Client::pauseMarketingFLow(const PauseMarketingFLowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseMarketingFLowWithOptions(request, runtime);
}

/**
 * @summary Publishes a WhatsApp flow.
 *
 * @description - Before you call this operation, ensure that you have created a WhatsApp flow.
 * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) operation to create one.
 * #### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request PublishFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishFlowResponse
 */
PublishFlowResponse Client::publishFlowWithOptions(const PublishFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishFlowResponse>();
}

/**
 * @summary Publishes a WhatsApp flow.
 *
 * @description - Before you call this operation, ensure that you have created a WhatsApp flow.
 * - If you have not created a WhatsApp flow, call the [CreateFlow](https://help.aliyun.com/document_detail/2638742.html) operation to create one.
 * #### QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request PublishFlowRequest
 * @return PublishFlowResponse
 */
PublishFlowResponse Client::publishFlow(const PublishFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the WhatsApp Business Account (WABA) that is bound to a customer account.
 *
 * @description This API has a per-user QPS limit of 10. Calls that exceed this limit are subject to flow control, which may impact your business. Make API calls at a reasonable rate.
 *
 * @param request QueryChatappBindWabaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryChatappBindWabaResponse
 */
QueryChatappBindWabaResponse Client::queryChatappBindWabaWithOptions(const QueryChatappBindWabaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryChatappBindWaba"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryChatappBindWabaResponse>();
}

/**
 * @summary Queries the WhatsApp Business Account (WABA) that is bound to a customer account.
 *
 * @description This API has a per-user QPS limit of 10. Calls that exceed this limit are subject to flow control, which may impact your business. Make API calls at a reasonable rate.
 *
 * @param request QueryChatappBindWabaRequest
 * @return QueryChatappBindWabaResponse
 */
QueryChatappBindWabaResponse Client::queryChatappBindWaba(const QueryChatappBindWabaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryChatappBindWabaWithOptions(request, runtime);
}

/**
 * @summary Queries all phone numbers used for sending messages and their statuses for a customer.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request QueryChatappPhoneNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryChatappPhoneNumbersResponse
 */
QueryChatappPhoneNumbersResponse Client::queryChatappPhoneNumbersWithOptions(const QueryChatappPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryChatappPhoneNumbers"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryChatappPhoneNumbersResponse>();
}

/**
 * @summary Queries all phone numbers used for sending messages and their statuses for a customer.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request QueryChatappPhoneNumbersRequest
 * @return QueryChatappPhoneNumbersResponse
 */
QueryChatappPhoneNumbersResponse Client::queryChatappPhoneNumbers(const QueryChatappPhoneNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryChatappPhoneNumbersWithOptions(request, runtime);
}

/**
 * @summary Gets the details of a specified instance.
 *
 * @param request QueryInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceResponse
 */
QueryInstanceResponse Client::queryInstanceWithOptions(const QueryInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInstance"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstanceResponse>();
}

/**
 * @summary Gets the details of a specified instance.
 *
 * @param request QueryInstanceRequest
 * @return QueryInstanceResponse
 */
QueryInstanceResponse Client::queryInstance(const QueryInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询营销消息是否生效
 *
 * @param request QueryMMLActiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMMLActiveResponse
 */
QueryMMLActiveResponse Client::queryMMLActiveWithOptions(const QueryMMLActiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMMLActive"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMMLActiveResponse>();
}

/**
 * @summary 查询营销消息是否生效
 *
 * @param request QueryMMLActiveRequest
 * @return QueryMMLActiveResponse
 */
QueryMMLActiveResponse Client::queryMMLActive(const QueryMMLActiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMMLActiveWithOptions(request, runtime);
}

/**
 * @summary Queries the business information of a phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request QueryPhoneBusinessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPhoneBusinessProfileResponse
 */
QueryPhoneBusinessProfileResponse Client::queryPhoneBusinessProfileWithOptions(const QueryPhoneBusinessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPhoneBusinessProfile"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPhoneBusinessProfileResponse>();
}

/**
 * @summary Queries the business information of a phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request QueryPhoneBusinessProfileRequest
 * @return QueryPhoneBusinessProfileResponse
 */
QueryPhoneBusinessProfileResponse Client::queryPhoneBusinessProfile(const QueryPhoneBusinessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPhoneBusinessProfileWithOptions(request, runtime);
}

/**
 * @summary Queries the business information about the WhatsApp Business account (WABA).
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request QueryWabaBusinessInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWabaBusinessInfoResponse
 */
QueryWabaBusinessInfoResponse Client::queryWabaBusinessInfoWithOptions(const QueryWabaBusinessInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWabaId()) {
    query["WabaId"] = request.getWabaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWabaBusinessInfo"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWabaBusinessInfoResponse>();
}

/**
 * @summary Queries the business information about the WhatsApp Business account (WABA).
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request QueryWabaBusinessInfoRequest
 * @return QueryWabaBusinessInfoResponse
 */
QueryWabaBusinessInfoResponse Client::queryWabaBusinessInfo(const QueryWabaBusinessInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWabaBusinessInfoWithOptions(request, runtime);
}

/**
 * @summary 获取流程
 *
 * @param tmpReq ReadChatFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadChatFlowResponse
 */
ReadChatFlowResponse Client::readChatFlowWithOptions(const ReadChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReadChatFlowShrinkRequest request = ReadChatFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadChatFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadChatFlowResponse>();
}

/**
 * @summary 获取流程
 *
 * @param request ReadChatFlowRequest
 * @return ReadChatFlowResponse
 */
ReadChatFlowResponse Client::readChatFlow(const ReadChatFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readChatFlowWithOptions(request, runtime);
}

/**
 * @summary 查看chatFlow日志设置
 *
 * @param request ReadChatFlowLogSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadChatFlowLogSettingResponse
 */
ReadChatFlowLogSettingResponse Client::readChatFlowLogSettingWithOptions(const ReadChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadChatFlowLogSetting"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadChatFlowLogSettingResponse>();
}

/**
 * @summary 查看chatFlow日志设置
 *
 * @param request ReadChatFlowLogSettingRequest
 * @return ReadChatFlowLogSettingResponse
 */
ReadChatFlowLogSettingResponse Client::readChatFlowLogSetting(const ReadChatFlowLogSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readChatFlowLogSettingWithOptions(request, runtime);
}

/**
 * @summary 获取流程版本
 *
 * @param tmpReq ReadFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadFlowVersionResponse
 */
ReadFlowVersionResponse Client::readFlowVersionWithOptions(const ReadFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReadFlowVersionShrinkRequest request = ReadFlowVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadFlowVersion"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadFlowVersionResponse>();
}

/**
 * @summary 获取流程版本
 *
 * @param request ReadFlowVersionRequest
 * @return ReadFlowVersionResponse
 */
ReadFlowVersionResponse Client::readFlowVersion(const ReadFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readFlowVersionWithOptions(request, runtime);
}

/**
 * @summary 当前群组移除单个联系人
 *
 * @param request RemoveContactByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveContactByIdResponse
 */
RemoveContactByIdResponse Client::removeContactByIdWithOptions(const RemoveContactByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveContactById"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveContactByIdResponse>();
}

/**
 * @summary 当前群组移除单个联系人
 *
 * @param request RemoveContactByIdRequest
 * @return RemoveContactByIdResponse
 */
RemoveContactByIdResponse Client::removeContactById(const RemoveContactByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeContactByIdWithOptions(request, runtime);
}

/**
 * @summary Sends a request to the WhatsApp Conversions API.
 *
 * @description The China-specific QPS limit for a single user of this API operation is 100 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
 *
 * @param tmpReq RequestWhatsappConversionApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RequestWhatsappConversionApiResponse
 */
RequestWhatsappConversionApiResponse Client::requestWhatsappConversionApiWithOptions(const RequestWhatsappConversionApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RequestWhatsappConversionApiShrinkRequest request = RequestWhatsappConversionApiShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRequestData()) {
    request.setRequestDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequestData(), "RequestData", "json"));
  }

  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasRequestDataShrink()) {
    query["RequestData"] = request.getRequestDataShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RequestWhatsappConversionApi"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RequestWhatsappConversionApiResponse>();
}

/**
 * @summary Sends a request to the WhatsApp Conversions API.
 *
 * @description The China-specific QPS limit for a single user of this API operation is 100 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
 *
 * @param request RequestWhatsappConversionApiRequest
 * @return RequestWhatsappConversionApiResponse
 */
RequestWhatsappConversionApiResponse Client::requestWhatsappConversionApi(const RequestWhatsappConversionApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return requestWhatsappConversionApiWithOptions(request, runtime);
}

/**
 * @summary Sends bulk messages to multiple recipients.
 *
 * @description - You can call this operation to send messages in bulk. You can also send messages in the console. To do so, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList), click a channel, and then choose **Message Sending**.
 * - Before you call this operation, make sure that you have created a channel and have an approved template.
 * - For a WhatsApp channel, you must [register and bind a WABA](t2012827.xdita#) and [add a phone number](t2012827.xdita#).
 * - For a Messenger channel, you must [connect to a Facebook Page](t2746072.xdita#).
 * - For an Instagram channel, you must [connect to an Instagram professional account](t2746079.xdita#).
 * <props="intl">
 * - For a Viber channel, you must [connect to an Instagram professional account](t2746079.xdita#).
 * ### QPS limits
 * - This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 * - A single request supports a maximum of 1,000 numbers.
 * ### Status changes
 * Message sending status can be monitored via Simple Message Service or HTTP callback. For details, see [Message receipts](https://help.aliyun.com/document_detail/421545.html).
 *
 * @param tmpReq SendChatappMassMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendChatappMassMessageResponse
 */
SendChatappMassMessageResponse Client::sendChatappMassMessageWithOptions(const SendChatappMassMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendChatappMassMessageShrinkRequest request = SendChatappMassMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSenderList()) {
    request.setSenderListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSenderList(), "SenderList", "json"));
  }

  json query = {};
  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustWabaId()) {
    query["CustWabaId"] = request.getCustWabaId();
  }

  if (!!request.hasFallBackContent()) {
    query["FallBackContent"] = request.getFallBackContent();
  }

  if (!!request.hasFallBackDuration()) {
    query["FallBackDuration"] = request.getFallBackDuration();
  }

  if (!!request.hasFallBackId()) {
    query["FallBackId"] = request.getFallBackId();
  }

  if (!!request.hasFallBackRule()) {
    query["FallBackRule"] = request.getFallBackRule();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.getFrom();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasLabel()) {
    query["Label"] = request.getLabel();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSenderListShrink()) {
    query["SenderList"] = request.getSenderListShrink();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendChatappMassMessage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendChatappMassMessageResponse>();
}

/**
 * @summary Sends bulk messages to multiple recipients.
 *
 * @description - You can call this operation to send messages in bulk. You can also send messages in the console. To do so, go to the <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList), click a channel, and then choose **Message Sending**.
 * - Before you call this operation, make sure that you have created a channel and have an approved template.
 * - For a WhatsApp channel, you must [register and bind a WABA](t2012827.xdita#) and [add a phone number](t2012827.xdita#).
 * - For a Messenger channel, you must [connect to a Facebook Page](t2746072.xdita#).
 * - For an Instagram channel, you must [connect to an Instagram professional account](t2746079.xdita#).
 * <props="intl">
 * - For a Viber channel, you must [connect to an Instagram professional account](t2746079.xdita#).
 * ### QPS limits
 * - This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 * - A single request supports a maximum of 1,000 numbers.
 * ### Status changes
 * Message sending status can be monitored via Simple Message Service or HTTP callback. For details, see [Message receipts](https://help.aliyun.com/document_detail/421545.html).
 *
 * @param request SendChatappMassMessageRequest
 * @return SendChatappMassMessageResponse
 */
SendChatappMassMessageResponse Client::sendChatappMassMessage(const SendChatappMassMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendChatappMassMessageWithOptions(request, runtime);
}

/**
 * @summary Sends a ChatApp message.
 *
 * @description - Call this operation to send messages. You can also send messages manually in the console at <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Message Sending**.
 * - Before calling this operation, you must create a channel and have an approved template.
 * - For a WhatsApp channel, you must [register and bind a WABA](https://help.aliyun.com/document_detail/172335.html) and [add a phone number](https://help.aliyun.com/document_detail/2656131.html).
 * - For a Messenger channel, you must [connect to a Facebook Page](https://help.aliyun.com/document_detail/2837713.html).
 * - For an Instagram channel, you must [connect to an Instagram professional account](https://help.aliyun.com/document_detail/2837720.html).
 * <props="intl">
 * - For a Viber channel, you must [apply for a service ID](https://help.aliyun.com/document_detail/2807995.html).
 * ### QPS limit
 * The QPS limit for this operation is 250 per user. API calls that exceed this limit are throttled. To prevent service disruptions, ensure your calls stay within this limit.
 * ### Status changes
 * You can receive notifications about message status changes by using MNS or HTTP callbacks. For more information, see [message receipts](https://help.aliyun.com/document_detail/421545.html).
 *
 * @param tmpReq SendChatappMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendChatappMessageResponse
 */
SendChatappMessageResponse Client::sendChatappMessageWithOptions(const SendChatappMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendChatappMessageShrinkRequest request = SendChatappMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFlowAction()) {
    request.setFlowActionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFlowAction(), "FlowAction", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasProductAction()) {
    request.setProductActionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProductAction(), "ProductAction", "json"));
  }

  if (!!tmpReq.hasTemplateParams()) {
    request.setTemplateParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateParams(), "TemplateParams", "json"));
  }

  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasContextMessageId()) {
    query["ContextMessageId"] = request.getContextMessageId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustWabaId()) {
    query["CustWabaId"] = request.getCustWabaId();
  }

  if (!!request.hasFallBackContent()) {
    query["FallBackContent"] = request.getFallBackContent();
  }

  if (!!request.hasFallBackDuration()) {
    query["FallBackDuration"] = request.getFallBackDuration();
  }

  if (!!request.hasFallBackId()) {
    query["FallBackId"] = request.getFallBackId();
  }

  if (!!request.hasFallBackRule()) {
    query["FallBackRule"] = request.getFallBackRule();
  }

  if (!!request.hasFlowActionShrink()) {
    query["FlowAction"] = request.getFlowActionShrink();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.getFrom();
  }

  if (!!request.hasIsvCode()) {
    query["IsvCode"] = request.getIsvCode();
  }

  if (!!request.hasLabel()) {
    query["Label"] = request.getLabel();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMessageCampaignId()) {
    query["MessageCampaignId"] = request.getMessageCampaignId();
  }

  if (!!request.hasMessageType()) {
    query["MessageType"] = request.getMessageType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasProductActionShrink()) {
    query["ProductAction"] = request.getProductActionShrink();
  }

  if (!!request.hasRecipientType()) {
    query["RecipientType"] = request.getRecipientType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateParamsShrink()) {
    query["TemplateParams"] = request.getTemplateParamsShrink();
  }

  if (!!request.hasTo()) {
    query["To"] = request.getTo();
  }

  if (!!request.hasTokenType()) {
    query["TokenType"] = request.getTokenType();
  }

  if (!!request.hasTrackingData()) {
    query["TrackingData"] = request.getTrackingData();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendChatappMessage"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendChatappMessageResponse>();
}

/**
 * @summary Sends a ChatApp message.
 *
 * @description - Call this operation to send messages. You can also send messages manually in the console at <props="china">[**Channel Management**](https://chatapp.console.aliyun.com/ChannelsManagement)<props="intl">[**Channel Management**](https://chatapp.console.alibabacloud.com/CustomerList) > **Manage** > **Message Sending**.
 * - Before calling this operation, you must create a channel and have an approved template.
 * - For a WhatsApp channel, you must [register and bind a WABA](https://help.aliyun.com/document_detail/172335.html) and [add a phone number](https://help.aliyun.com/document_detail/2656131.html).
 * - For a Messenger channel, you must [connect to a Facebook Page](https://help.aliyun.com/document_detail/2837713.html).
 * - For an Instagram channel, you must [connect to an Instagram professional account](https://help.aliyun.com/document_detail/2837720.html).
 * <props="intl">
 * - For a Viber channel, you must [apply for a service ID](https://help.aliyun.com/document_detail/2807995.html).
 * ### QPS limit
 * The QPS limit for this operation is 250 per user. API calls that exceed this limit are throttled. To prevent service disruptions, ensure your calls stay within this limit.
 * ### Status changes
 * You can receive notifications about message status changes by using MNS or HTTP callbacks. For more information, see [message receipts](https://help.aliyun.com/document_detail/421545.html).
 *
 * @param request SendChatappMessageRequest
 * @return SendChatappMessageResponse
 */
SendChatappMessageResponse Client::sendChatappMessage(const SendChatappMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendChatappMessageWithOptions(request, runtime);
}

/**
 * @summary Submits the result of a verification code check.
 *
 * @param request SubmitVerifyCodeResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVerifyCodeResultResponse
 */
SubmitVerifyCodeResultResponse Client::submitVerifyCodeResultWithOptions(const SubmitVerifyCodeResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  if (!!request.hasResult()) {
    query["Result"] = request.getResult();
  }

  if (!!request.hasTo()) {
    query["To"] = request.getTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitVerifyCodeResult"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVerifyCodeResultResponse>();
}

/**
 * @summary Submits the result of a verification code check.
 *
 * @param request SubmitVerifyCodeResultRequest
 * @return SubmitVerifyCodeResultResponse
 */
SubmitVerifyCodeResultResponse Client::submitVerifyCodeResult(const SubmitVerifyCodeResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVerifyCodeResultWithOptions(request, runtime);
}

/**
 * @summary Synchronizes the business app history.
 *
 * @description - Before you call this operation, you must configure a webhook for messages and receipts by calling [UpdatePhoneWebhook](https://help.aliyun.com/document_detail/600763.html) and [UpdateAccountWebhook](https://help.aliyun.com/document_detail/600765.html). Otherwise, history synchronization will fail because the system cannot find the configured webhook URL.
 * - This is a one-time operation. Subsequent calls have no effect.
 *
 * @param request SyncBusinessAppHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncBusinessAppHistoryResponse
 */
SyncBusinessAppHistoryResponse Client::syncBusinessAppHistoryWithOptions(const SyncBusinessAppHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncBusinessAppHistory"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncBusinessAppHistoryResponse>();
}

/**
 * @summary Synchronizes the business app history.
 *
 * @description - Before you call this operation, you must configure a webhook for messages and receipts by calling [UpdatePhoneWebhook](https://help.aliyun.com/document_detail/600763.html) and [UpdateAccountWebhook](https://help.aliyun.com/document_detail/600765.html). Otherwise, history synchronization will fail because the system cannot find the configured webhook URL.
 * - This is a one-time operation. Subsequent calls have no effect.
 *
 * @param request SyncBusinessAppHistoryRequest
 * @return SyncBusinessAppHistoryResponse
 */
SyncBusinessAppHistoryResponse Client::syncBusinessAppHistory(const SyncBusinessAppHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncBusinessAppHistoryWithOptions(request, runtime);
}

/**
 * @summary 同步flow
 *
 * @param request SyncFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncFlowResponse
 */
SyncFlowResponse Client::syncFlowWithOptions(const SyncFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncFlowResponse>();
}

/**
 * @summary 同步flow
 *
 * @param request SyncFlowRequest
 * @return SyncFlowResponse
 */
SyncFlowResponse Client::syncFlow(const SyncFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncFlowWithOptions(request, runtime);
}

/**
 * @summary Synchronously queries the budget.
 *
 * @param request SyncMessageCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncMessageCampaignResponse
 */
SyncMessageCampaignResponse Client::syncMessageCampaignWithOptions(const SyncMessageCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdAccountId()) {
    query["AdAccountId"] = request.getAdAccountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncMessageCampaign"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncMessageCampaignResponse>();
}

/**
 * @summary Synchronously queries the budget.
 *
 * @param request SyncMessageCampaignRequest
 * @return SyncMessageCampaignResponse
 */
SyncMessageCampaignResponse Client::syncMessageCampaign(const SyncMessageCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncMessageCampaignWithOptions(request, runtime);
}

/**
 * @summary Retrieves the Messenger subscription token.
 *
 * @param request SyncMessengerSubscriptionTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncMessengerSubscriptionTokenResponse
 */
SyncMessengerSubscriptionTokenResponse Client::syncMessengerSubscriptionTokenWithOptions(const SyncMessengerSubscriptionTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasCustomAudienceId()) {
    query["CustomAudienceId"] = request.getCustomAudienceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTokenType()) {
    query["TokenType"] = request.getTokenType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncMessengerSubscriptionToken"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncMessengerSubscriptionTokenResponse>();
}

/**
 * @summary Retrieves the Messenger subscription token.
 *
 * @param request SyncMessengerSubscriptionTokenRequest
 * @return SyncMessengerSubscriptionTokenResponse
 */
SyncMessengerSubscriptionTokenResponse Client::syncMessengerSubscriptionToken(const SyncMessengerSubscriptionTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncMessengerSubscriptionTokenWithOptions(request, runtime);
}

/**
 * @summary Triggers an online chat flow that has a manual trigger.
 *
 * @description - You can call this operation to trigger a published version of a flow that has a manual trigger. You can also trigger the flow from the [Marketing Campaign Management](https://chatapp.console.aliyun.com/MarketingActivityManagement) page if the flow is associated with a marketing campaign.
 * - Before you call this operation, make sure that the flow has a manual trigger and is published.
 * - If a flow with a manual trigger does not have a published version, you must publish it. In [Chat Flow](https://chatapp.console.aliyun.com/ChatFlowBuilder), you can click the flow name to open the canvas and publish the version. Alternatively, you can call the [OnlineFlowVersion](https://help.aliyun.com/document_detail/2937203.html) API to publish the version.
 * - If your flow contains components that incur costs, such as message sending or function invocations, make sure that you understand the billing methods and pricing for these products before you trigger the flow.
 *
 * @param tmpReq TriggerChatFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerChatFlowResponse
 */
TriggerChatFlowResponse Client::triggerChatFlowWithOptions(const TriggerChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TriggerChatFlowShrinkRequest request = TriggerChatFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasData()) {
    request.setDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getData(), "Data", "json"));
  }

  json query = {};
  if (!!request.hasClaimTimeMillis()) {
    query["ClaimTimeMillis"] = request.getClaimTimeMillis();
  }

  if (!!request.hasDataShrink()) {
    query["Data"] = request.getDataShrink();
  }

  if (!!request.hasDiscardTimeMillis()) {
    query["DiscardTimeMillis"] = request.getDiscardTimeMillis();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TriggerChatFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerChatFlowResponse>();
}

/**
 * @summary Triggers an online chat flow that has a manual trigger.
 *
 * @description - You can call this operation to trigger a published version of a flow that has a manual trigger. You can also trigger the flow from the [Marketing Campaign Management](https://chatapp.console.aliyun.com/MarketingActivityManagement) page if the flow is associated with a marketing campaign.
 * - Before you call this operation, make sure that the flow has a manual trigger and is published.
 * - If a flow with a manual trigger does not have a published version, you must publish it. In [Chat Flow](https://chatapp.console.aliyun.com/ChatFlowBuilder), you can click the flow name to open the canvas and publish the version. Alternatively, you can call the [OnlineFlowVersion](https://help.aliyun.com/document_detail/2937203.html) API to publish the version.
 * - If your flow contains components that incur costs, such as message sending or function invocations, make sure that you understand the billing methods and pricing for these products before you trigger the flow.
 *
 * @param request TriggerChatFlowRequest
 * @return TriggerChatFlowResponse
 */
TriggerChatFlowResponse Client::triggerChatFlow(const TriggerChatFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerChatFlowWithOptions(request, runtime);
}

/**
 * @summary 解绑邮件账号
 *
 * @param request UnbindDmAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDmAccountResponse
 */
UnbindDmAccountResponse Client::unbindDmAccountWithOptions(const UnbindDmAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindDmAccount"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindDmAccountResponse>();
}

/**
 * @summary 解绑邮件账号
 *
 * @param request UnbindDmAccountRequest
 * @return UnbindDmAccountResponse
 */
UnbindDmAccountResponse Client::unbindDmAccount(const UnbindDmAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindDmAccountWithOptions(request, runtime);
}

/**
 * @summary Modifies the callback URL of an account.
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request UpdateAccountWebhookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccountWebhookResponse
 */
UpdateAccountWebhookResponse Client::updateAccountWebhookWithOptions(const UpdateAccountWebhookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasHttpFlag()) {
    query["HttpFlag"] = request.getHttpFlag();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQueueFlag()) {
    query["QueueFlag"] = request.getQueueFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatusCallbackUrl()) {
    query["StatusCallbackUrl"] = request.getStatusCallbackUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccountWebhook"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccountWebhookResponse>();
}

/**
 * @summary Modifies the callback URL of an account.
 *
 * @description This operation allows a maximum of 10 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 *
 * @param request UpdateAccountWebhookRequest
 * @return UpdateAccountWebhookResponse
 */
UpdateAccountWebhookResponse Client::updateAccountWebhook(const UpdateAccountWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccountWebhookWithOptions(request, runtime);
}

/**
 * @summary Modifies a Viber application.
 *
 * @param tmpReq UpdateAuditRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuditRequestResponse
 */
UpdateAuditRequestResponse Client::updateAuditRequestWithOptions(const UpdateAuditRequestRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAuditRequestShrinkRequest request = UpdateAuditRequestShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuditRecord()) {
    request.setAuditRecordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuditRecord(), "AuditRecord", "json"));
  }

  json query = {};
  if (!!request.hasAuditRecordShrink()) {
    query["AuditRecord"] = request.getAuditRecordShrink();
  }

  if (!!request.hasAuditResult()) {
    query["AuditResult"] = request.getAuditResult();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRequestNo()) {
    query["RequestNo"] = request.getRequestNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAuditRequest"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuditRequestResponse>();
}

/**
 * @summary Modifies a Viber application.
 *
 * @param request UpdateAuditRequestRequest
 * @return UpdateAuditRequestResponse
 */
UpdateAuditRequestResponse Client::updateAuditRequest(const UpdateAuditRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuditRequestWithOptions(request, runtime);
}

/**
 * @summary 获取流程
 *
 * @param tmpReq UpdateChatFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChatFlowResponse
 */
UpdateChatFlowResponse Client::updateChatFlowWithOptions(const UpdateChatFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateChatFlowShrinkRequest request = UpdateChatFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChatFlow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChatFlowResponse>();
}

/**
 * @summary 获取流程
 *
 * @param request UpdateChatFlowRequest
 * @return UpdateChatFlowResponse
 */
UpdateChatFlowResponse Client::updateChatFlow(const UpdateChatFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChatFlowWithOptions(request, runtime);
}

/**
 * @summary 修改chatFlow日志设置
 *
 * @param request UpdateChatFlowLogSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChatFlowLogSettingResponse
 */
UpdateChatFlowLogSettingResponse Client::updateChatFlowLogSettingWithOptions(const UpdateChatFlowLogSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChatFlowLogSetting"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChatFlowLogSettingResponse>();
}

/**
 * @summary 修改chatFlow日志设置
 *
 * @param request UpdateChatFlowLogSettingRequest
 * @return UpdateChatFlowLogSettingResponse
 */
UpdateChatFlowLogSettingResponse Client::updateChatFlowLogSetting(const UpdateChatFlowLogSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChatFlowLogSettingWithOptions(request, runtime);
}

/**
 * @summary Updates the information for an Instant Messaging (IM) group.
 *
 * @description >Notice: 
 * This operation is in beta testing for Meta. Contact your account manager to be added to the allowlist before using this endpoint.
 * - Before you call this operation, ensure that you have created an IM group.
 * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation to create one.
 *
 * @param request UpdateChatGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChatGroupResponse
 */
UpdateChatGroupResponse Client::updateChatGroupWithOptions(const UpdateChatGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProfilePictureFile()) {
    query["ProfilePictureFile"] = request.getProfilePictureFile();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubject()) {
    query["Subject"] = request.getSubject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChatGroup"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChatGroupResponse>();
}

/**
 * @summary Updates the information for an Instant Messaging (IM) group.
 *
 * @description >Notice: 
 * This operation is in beta testing for Meta. Contact your account manager to be added to the allowlist before using this endpoint.
 * - Before you call this operation, ensure that you have created an IM group.
 * - If you do not have an IM group, call the [AddChatGroup](https://help.aliyun.com/document_detail/2932518.html) operation to create one.
 *
 * @param request UpdateChatGroupRequest
 * @return UpdateChatGroupResponse
 */
UpdateChatGroupResponse Client::updateChatGroup(const UpdateChatGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChatGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the commerce settings for a phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request UpdateCommerceSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCommerceSettingResponse
 */
UpdateCommerceSettingResponse Client::updateCommerceSettingWithOptions(const UpdateCommerceSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCartEnable()) {
    query["CartEnable"] = request.getCartEnable();
  }

  if (!!request.hasCatalogVisible()) {
    query["CatalogVisible"] = request.getCatalogVisible();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCommerceSetting"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCommerceSettingResponse>();
}

/**
 * @summary Updates the commerce settings for a phone number.
 *
 * @description This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request UpdateCommerceSettingRequest
 * @return UpdateCommerceSettingResponse
 */
UpdateCommerceSettingResponse Client::updateCommerceSetting(const UpdateCommerceSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCommerceSettingWithOptions(request, runtime);
}

/**
 * @summary 修改联系人
 *
 * @param tmpReq UpdateContactByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContactByIdResponse
 */
UpdateContactByIdResponse Client::updateContactByIdWithOptions(const UpdateContactByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateContactByIdShrinkRequest request = UpdateContactByIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasContactDetails()) {
    query["ContactDetails"] = request.getContactDetails();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContactById"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContactByIdResponse>();
}

/**
 * @summary 修改联系人
 *
 * @param request UpdateContactByIdRequest
 * @return UpdateContactByIdResponse
 */
UpdateContactByIdResponse Client::updateContactById(const UpdateContactByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContactByIdWithOptions(request, runtime);
}

/**
 * @summary Modifies welcoming messages, opening remarks, and commands for a phone number.
 *
 * @description ### [](#qps-)QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
 *
 * @param tmpReq UpdateConversationalAutomationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConversationalAutomationResponse
 */
UpdateConversationalAutomationResponse Client::updateConversationalAutomationWithOptions(const UpdateConversationalAutomationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateConversationalAutomationShrinkRequest request = UpdateConversationalAutomationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommands()) {
    request.setCommandsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommands(), "Commands", "json"));
  }

  if (!!tmpReq.hasPrompts()) {
    request.setPromptsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPrompts(), "Prompts", "json"));
  }

  json query = {};
  if (!!request.hasCommandsShrink()) {
    query["Commands"] = request.getCommandsShrink();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasEnableWelcomeMessage()) {
    query["EnableWelcomeMessage"] = request.getEnableWelcomeMessage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPromptsShrink()) {
    query["Prompts"] = request.getPromptsShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConversationalAutomation"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConversationalAutomationResponse>();
}

/**
 * @summary Modifies welcoming messages, opening remarks, and commands for a phone number.
 *
 * @description ### [](#qps-)QPS limit
 * This operation allows a maximum of 5 requests per second per account. Excess requests are throttled, which may affect your business. Stay within the specified limit.
 * This operation retrieves data directly from Meta. Meta imposes its own rate limits on the total number of calls. Stay within the specified limit.
 *
 * @param request UpdateConversationalAutomationRequest
 * @return UpdateConversationalAutomationResponse
 */
UpdateConversationalAutomationResponse Client::updateConversationalAutomation(const UpdateConversationalAutomationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConversationalAutomationWithOptions(request, runtime);
}

/**
 * @summary Updates the content of a WhatsApp flow by using a JSON definition.
 *
 * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request UpdateFlowJSONAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowJSONAssetResponse
 */
UpdateFlowJSONAssetResponse Client::updateFlowJSONAssetWithOptions(const UpdateFlowJSONAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFlowJSONAsset"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowJSONAssetResponse>();
}

/**
 * @summary Updates the content of a WhatsApp flow by using a JSON definition.
 *
 * @description This operation allows a maximum of 5 requests per second per account. Excess requests are throttled and may result in service interruptions.
 *
 * @param request UpdateFlowJSONAssetRequest
 * @return UpdateFlowJSONAssetResponse
 */
UpdateFlowJSONAssetResponse Client::updateFlowJSONAsset(const UpdateFlowJSONAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFlowJSONAssetWithOptions(request, runtime);
}

/**
 * @summary 更新流程版本，用于画布更新流程dsl
 *
 * @param tmpReq UpdateFlowVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowVersionResponse
 */
UpdateFlowVersionResponse Client::updateFlowVersionWithOptions(const UpdateFlowVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateFlowVersionShrinkRequest request = UpdateFlowVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizExtend()) {
    request.setBizExtendShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizExtend(), "BizExtend", "json"));
  }

  json query = {};
  if (!!request.hasBizCode()) {
    query["BizCode"] = request.getBizCode();
  }

  if (!!request.hasBizExtendShrink()) {
    query["BizExtend"] = request.getBizExtendShrink();
  }

  if (!!request.hasFlowCode()) {
    query["FlowCode"] = request.getFlowCode();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  if (!!request.hasFlowViewModel()) {
    query["FlowViewModel"] = request.getFlowViewModel();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFlowVersion"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowVersionResponse>();
}

/**
 * @summary 更新流程版本，用于画布更新流程dsl
 *
 * @param request UpdateFlowVersionRequest
 * @return UpdateFlowVersionResponse
 */
UpdateFlowVersionResponse Client::updateFlowVersion(const UpdateFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFlowVersionWithOptions(request, runtime);
}

/**
 * @summary 群组改名
 *
 * @param request UpdateGroupNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupNameResponse
 */
UpdateGroupNameResponse Client::updateGroupNameWithOptions(const UpdateGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGroupName"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupNameResponse>();
}

/**
 * @summary 群组改名
 *
 * @param request UpdateGroupNameRequest
 * @return UpdateGroupNameResponse
 */
UpdateGroupNameResponse Client::updateGroupName(const UpdateGroupNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGroupNameWithOptions(request, runtime);
}

/**
 * @summary Updates the specified instance.
 *
 * @param request UpdateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactMail()) {
    query["ContactMail"] = request.getContactMail();
  }

  if (!!request.hasCountryId()) {
    query["CountryId"] = request.getCountryId();
  }

  if (!!request.hasFacebookBmId()) {
    query["FacebookBmId"] = request.getFacebookBmId();
  }

  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIsConfirmAudit()) {
    query["IsConfirmAudit"] = request.getIsConfirmAudit();
  }

  if (!!request.hasIsvTerms()) {
    query["IsvTerms"] = request.getIsvTerms();
  }

  if (!!request.hasOfficeAddress()) {
    query["OfficeAddress"] = request.getOfficeAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Updates the specified instance.
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary 修改营销活动
 *
 * @param tmpReq UpdateMarketingFLowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMarketingFLowResponse
 */
UpdateMarketingFLowResponse Client::updateMarketingFLowWithOptions(const UpdateMarketingFLowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMarketingFLowShrinkRequest request = UpdateMarketingFLowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json query = {};
  if (!!request.hasActivityCode()) {
    query["ActivityCode"] = request.getActivityCode();
  }

  if (!!request.hasActivityDesc()) {
    query["ActivityDesc"] = request.getActivityDesc();
  }

  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.getActivityId();
  }

  if (!!request.hasActivityName()) {
    query["ActivityName"] = request.getActivityName();
  }

  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.getCronExpression();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasExecutionType()) {
    query["ExecutionType"] = request.getExecutionType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParamFlag()) {
    query["ParamFlag"] = request.getParamFlag();
  }

  if (!!request.hasParamsShrink()) {
    query["Params"] = request.getParamsShrink();
  }

  if (!!request.hasRelatedFlowCode()) {
    query["RelatedFlowCode"] = request.getRelatedFlowCode();
  }

  if (!!request.hasRelatedFlowName()) {
    query["RelatedFlowName"] = request.getRelatedFlowName();
  }

  if (!!request.hasRelatedGroupId()) {
    query["RelatedGroupId"] = request.getRelatedGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMarketingFLow"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMarketingFLowResponse>();
}

/**
 * @summary 修改营销活动
 *
 * @param request UpdateMarketingFLowRequest
 * @return UpdateMarketingFLowResponse
 */
UpdateMarketingFLowResponse Client::updateMarketingFLow(const UpdateMarketingFLowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMarketingFLowWithOptions(request, runtime);
}

/**
 * @summary Updates the encryption key for a phone number.
 *
 * @description - Before you call this API, you must add and verify a phone number for your WhatsApp Business Account (WABA).
 * - If you do not have a phone number for your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to obtain a verification code and verifythe phone number.
 * #### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request UpdatePhoneEncryptionPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePhoneEncryptionPublicKeyResponse
 */
UpdatePhoneEncryptionPublicKeyResponse Client::updatePhoneEncryptionPublicKeyWithOptions(const UpdatePhoneEncryptionPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasEncryptionPublicKey()) {
    query["EncryptionPublicKey"] = request.getEncryptionPublicKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePhoneEncryptionPublicKey"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePhoneEncryptionPublicKeyResponse>();
}

/**
 * @summary Updates the encryption key for a phone number.
 *
 * @description - Before you call this API, you must add and verify a phone number for your WhatsApp Business Account (WABA).
 * - If you do not have a phone number for your WABA, call the [GetChatappVerifyCode](https://help.aliyun.com/document_detail/600746.html) and [ChatappVerifyAndRegister](https://help.aliyun.com/document_detail/600770.html) APIs to obtain a verification code and verifythe phone number.
 * #### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request UpdatePhoneEncryptionPublicKeyRequest
 * @return UpdatePhoneEncryptionPublicKeyResponse
 */
UpdatePhoneEncryptionPublicKeyResponse Client::updatePhoneEncryptionPublicKey(const UpdatePhoneEncryptionPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePhoneEncryptionPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Updates a message QR code.
 *
 * @description - After you update a message QR code, users can no longer scan the original QR code to start a chat with the associated business phone number. Use this operation with caution.
 * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) API to create one.
 * #### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request UpdatePhoneMessageQrdlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePhoneMessageQrdlResponse
 */
UpdatePhoneMessageQrdlResponse Client::updatePhoneMessageQrdlWithOptions(const UpdatePhoneMessageQrdlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasGenerateQrImage()) {
    query["GenerateQrImage"] = request.getGenerateQrImage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasPrefilledMessage()) {
    query["PrefilledMessage"] = request.getPrefilledMessage();
  }

  if (!!request.hasQrdlCode()) {
    query["QrdlCode"] = request.getQrdlCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePhoneMessageQrdl"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePhoneMessageQrdlResponse>();
}

/**
 * @summary Updates a message QR code.
 *
 * @description - After you update a message QR code, users can no longer scan the original QR code to start a chat with the associated business phone number. Use this operation with caution.
 * - If you have not created a message QR code, call the [CreatePhoneMessageQrdl](https://help.aliyun.com/document_detail/2638749.html) API to create one.
 * #### QPS limit
 * This API is limited to 5 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this API within the specified limit.
 *
 * @param request UpdatePhoneMessageQrdlRequest
 * @return UpdatePhoneMessageQrdlResponse
 */
UpdatePhoneMessageQrdlResponse Client::updatePhoneMessageQrdl(const UpdatePhoneMessageQrdlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePhoneMessageQrdlWithOptions(request, runtime);
}

/**
 * @summary The HTTP status code returned.
 * \\\\* A value of OK indicates that the call is successful.
 * \\\\* Other values indicate that the call fails. For more information, see \\[Error codes]\\\\(~~196974~~).
 *
 * @description The error message returned.
 *
 * @param request UpdatePhoneWebhookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePhoneWebhookResponse
 */
UpdatePhoneWebhookResponse Client::updatePhoneWebhookWithOptions(const UpdatePhoneWebhookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasHttpFlag()) {
    query["HttpFlag"] = request.getHttpFlag();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasQueueFlag()) {
    query["QueueFlag"] = request.getQueueFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatusCallbackUrl()) {
    query["StatusCallbackUrl"] = request.getStatusCallbackUrl();
  }

  if (!!request.hasUpCallbackUrl()) {
    query["UpCallbackUrl"] = request.getUpCallbackUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePhoneWebhook"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePhoneWebhookResponse>();
}

/**
 * @summary The HTTP status code returned.
 * \\\\* A value of OK indicates that the call is successful.
 * \\\\* Other values indicate that the call fails. For more information, see \\[Error codes]\\\\(~~196974~~).
 *
 * @description The error message returned.
 *
 * @param request UpdatePhoneWebhookRequest
 * @return UpdatePhoneWebhookResponse
 */
UpdatePhoneWebhookResponse Client::updatePhoneWebhook(const UpdatePhoneWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePhoneWebhookWithOptions(request, runtime);
}

/**
 * @summary 更新waba的mml状态
 *
 * @param request UpdateWabaMmlStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWabaMmlStatusResponse
 */
UpdateWabaMmlStatusResponse Client::updateWabaMmlStatusWithOptions(const UpdateWabaMmlStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWabaId()) {
    query["WabaId"] = request.getWabaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWabaMmlStatus"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWabaMmlStatusResponse>();
}

/**
 * @summary 更新waba的mml状态
 *
 * @param request UpdateWabaMmlStatusRequest
 * @return UpdateWabaMmlStatusResponse
 */
UpdateWabaMmlStatusResponse Client::updateWabaMmlStatus(const UpdateWabaMmlStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWabaMmlStatusWithOptions(request, runtime);
}

/**
 * @summary Places, answers, or ends WhatsApp voice calls.
 *
 * @param tmpReq WhatsappCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WhatsappCallResponse
 */
WhatsappCallResponse Client::whatsappCallWithOptions(const WhatsappCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  WhatsappCallShrinkRequest request = WhatsappCallShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSession()) {
    request.setSessionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSession(), "Session", "json"));
  }

  json query = {};
  if (!!request.hasBusinessNumber()) {
    query["BusinessNumber"] = request.getBusinessNumber();
  }

  if (!!request.hasCallAction()) {
    query["CallAction"] = request.getCallAction();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCustSpaceId()) {
    query["CustSpaceId"] = request.getCustSpaceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSessionShrink()) {
    query["Session"] = request.getSessionShrink();
  }

  if (!!request.hasUserNumber()) {
    query["UserNumber"] = request.getUserNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WhatsappCall"},
    {"version" , "2020-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WhatsappCallResponse>();
}

/**
 * @summary Places, answers, or ends WhatsApp voice calls.
 *
 * @param request WhatsappCallRequest
 * @return WhatsappCallResponse
 */
WhatsappCallResponse Client::whatsappCall(const WhatsappCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return whatsappCallWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cams20200606