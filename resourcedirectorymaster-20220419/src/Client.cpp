#include <darabonba/Core.hpp>
#include <alibabacloud/ResourceDirectoryMaster20220419.hpp>
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
using namespace AlibabaCloud::ResourceDirectoryMaster20220419::Models;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{

AlibabaCloud::ResourceDirectoryMaster20220419::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("resourcedirectorymaster", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Accepts an invitation.
 *
 * @description After an invited Alibaba Cloud account joins a resource directory, it becomes a member of the resource directory. By default, the name of the invited Alibaba Cloud account is used as the display name of the account in the resource directory.
 *
 * @param request AcceptHandshakeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptHandshakeResponse
 */
AcceptHandshakeResponse Client::acceptHandshakeWithOptions(const AcceptHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHandshakeId()) {
    query["HandshakeId"] = request.handshakeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptHandshake"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptHandshakeResponse>();
}

/**
 * @summary Accepts an invitation.
 *
 * @description After an invited Alibaba Cloud account joins a resource directory, it becomes a member of the resource directory. By default, the name of the invited Alibaba Cloud account is used as the display name of the account in the resource directory.
 *
 * @param request AcceptHandshakeRequest
 * @return AcceptHandshakeResponse
 */
AcceptHandshakeResponse Client::acceptHandshake(const AcceptHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptHandshakeWithOptions(request, runtime);
}

/**
 * @summary Adds a contact.
 *
 * @param request AddMessageContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMessageContactResponse
 */
AddMessageContactResponse Client::addMessageContactWithOptions(const AddMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmailAddress()) {
    query["EmailAddress"] = request.emailAddress();
  }

  if (!!request.hasMessageTypes()) {
    query["MessageTypes"] = request.messageTypes();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMessageContact"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMessageContactResponse>();
}

/**
 * @summary Adds a contact.
 *
 * @param request AddMessageContactRequest
 * @return AddMessageContactResponse
 */
AddMessageContactResponse Client::addMessageContact(const AddMessageContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMessageContactWithOptions(request, runtime);
}

/**
 * @summary Binds a contact to a resource directory, folder, or member.
 *
 * @param request AssociateMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateMembersResponse
 */
AssociateMembersResponse Client::associateMembersWithOptions(const AssociateMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasMembers()) {
    query["Members"] = request.members();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateMembers"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateMembersResponse>();
}

/**
 * @summary Binds a contact to a resource directory, folder, or member.
 *
 * @param request AssociateMembersRequest
 * @return AssociateMembersResponse
 */
AssociateMembersResponse Client::associateMembers(const AssociateMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateMembersWithOptions(request, runtime);
}

/**
 * @summary Attaches an access control policy.
 *
 * @description After you attach a custom access control policy, the operations performed on resources by using members are limited by the policy. Make sure that the attached policy meets your expectations. Otherwise, your business may be affected.
 * By default, the system access control policy FullAliyunAccess is attached to each folder and member.
 * The access control policy that is attached to a folder also applies to all its subfolders and all members in the subfolders.
 * A maximum of 10 access control policies can be attached to a folder or member.
 *
 * @param request AttachControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachControlPolicyResponse
 */
AttachControlPolicyResponse Client::attachControlPolicyWithOptions(const AttachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.targetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachControlPolicyResponse>();
}

/**
 * @summary Attaches an access control policy.
 *
 * @description After you attach a custom access control policy, the operations performed on resources by using members are limited by the policy. Make sure that the attached policy meets your expectations. Otherwise, your business may be affected.
 * By default, the system access control policy FullAliyunAccess is attached to each folder and member.
 * The access control policy that is attached to a folder also applies to all its subfolders and all members in the subfolders.
 * A maximum of 10 access control policies can be attached to a folder or member.
 *
 * @param request AttachControlPolicyRequest
 * @return AttachControlPolicyResponse
 */
AttachControlPolicyResponse Client::attachControlPolicy(const AttachControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Binds a mobile phone number to a member of the resource account type in a resource directory for security purposes.
 *
 * @description You can call this API operation only to bind a mobile phone number to a member of the resource account type. You cannot call this API operation to change the mobile phone number that is bound to a member of the resource account type.
 * To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
 *
 * @param request BindSecureMobilePhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindSecureMobilePhoneResponse
 */
BindSecureMobilePhoneResponse Client::bindSecureMobilePhoneWithOptions(const BindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasSecureMobilePhone()) {
    query["SecureMobilePhone"] = request.secureMobilePhone();
  }

  if (!!request.hasVerificationCode()) {
    query["VerificationCode"] = request.verificationCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindSecureMobilePhone"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindSecureMobilePhoneResponse>();
}

/**
 * @summary Binds a mobile phone number to a member of the resource account type in a resource directory for security purposes.
 *
 * @description You can call this API operation only to bind a mobile phone number to a member of the resource account type. You cannot call this API operation to change the mobile phone number that is bound to a member of the resource account type.
 * To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
 *
 * @param request BindSecureMobilePhoneRequest
 * @return BindSecureMobilePhoneResponse
 */
BindSecureMobilePhoneResponse Client::bindSecureMobilePhone(const BindSecureMobilePhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindSecureMobilePhoneWithOptions(request, runtime);
}

/**
 * @summary Cancels the email address change of a member.
 *
 * @param request CancelChangeAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelChangeAccountEmailResponse
 */
CancelChangeAccountEmailResponse Client::cancelChangeAccountEmailWithOptions(const CancelChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelChangeAccountEmail"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelChangeAccountEmailResponse>();
}

/**
 * @summary Cancels the email address change of a member.
 *
 * @param request CancelChangeAccountEmailRequest
 * @return CancelChangeAccountEmailResponse
 */
CancelChangeAccountEmailResponse Client::cancelChangeAccountEmail(const CancelChangeAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelChangeAccountEmailWithOptions(request, runtime);
}

/**
 * @summary Cancels an invitation.
 *
 * @param request CancelHandshakeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelHandshakeResponse
 */
CancelHandshakeResponse Client::cancelHandshakeWithOptions(const CancelHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHandshakeId()) {
    query["HandshakeId"] = request.handshakeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelHandshake"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelHandshakeResponse>();
}

/**
 * @summary Cancels an invitation.
 *
 * @param request CancelHandshakeRequest
 * @return CancelHandshakeResponse
 */
CancelHandshakeResponse Client::cancelHandshake(const CancelHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelHandshakeWithOptions(request, runtime);
}

/**
 * @summary Cancels the update of the mobile phone number or email address of a contact.
 *
 * @param request CancelMessageContactUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelMessageContactUpdateResponse
 */
CancelMessageContactUpdateResponse Client::cancelMessageContactUpdateWithOptions(const CancelMessageContactUpdateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasEmailAddress()) {
    query["EmailAddress"] = request.emailAddress();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelMessageContactUpdate"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelMessageContactUpdateResponse>();
}

/**
 * @summary Cancels the update of the mobile phone number or email address of a contact.
 *
 * @param request CancelMessageContactUpdateRequest
 * @return CancelMessageContactUpdateResponse
 */
CancelMessageContactUpdateResponse Client::cancelMessageContactUpdate(const CancelMessageContactUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelMessageContactUpdateWithOptions(request, runtime);
}

/**
 * @summary Changes the email address that is bound to a member.
 *
 * @param request ChangeAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeAccountEmailResponse
 */
ChangeAccountEmailResponse Client::changeAccountEmailWithOptions(const ChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeAccountEmail"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeAccountEmailResponse>();
}

/**
 * @summary Changes the email address that is bound to a member.
 *
 * @param request ChangeAccountEmailRequest
 * @return ChangeAccountEmailResponse
 */
ChangeAccountEmailResponse Client::changeAccountEmail(const ChangeAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeAccountEmailWithOptions(request, runtime);
}

/**
 * @summary Performs a member deletion check.
 *
 * @description Before you delete a member, you must call this API operation to check whether the member can be deleted.
 *
 * @param request CheckAccountDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccountDeleteResponse
 */
CheckAccountDeleteResponse Client::checkAccountDeleteWithOptions(const CheckAccountDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAccountDelete"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAccountDeleteResponse>();
}

/**
 * @summary Performs a member deletion check.
 *
 * @description Before you delete a member, you must call this API operation to check whether the member can be deleted.
 *
 * @param request CheckAccountDeleteRequest
 * @return CheckAccountDeleteResponse
 */
CheckAccountDeleteResponse Client::checkAccountDelete(const CheckAccountDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountDeleteWithOptions(request, runtime);
}

/**
 * @summary Creates a custom access control policy.
 *
 * @param request CreateControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateControlPolicyResponse
 */
CreateControlPolicyResponse Client::createControlPolicyWithOptions(const CreateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEffectScope()) {
    query["EffectScope"] = request.effectScope();
  }

  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.policyDocument();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateControlPolicyResponse>();
}

/**
 * @summary Creates a custom access control policy.
 *
 * @param request CreateControlPolicyRequest
 * @return CreateControlPolicyResponse
 */
CreateControlPolicyResponse Client::createControlPolicy(const CreateControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a folder.
 *
 * @description A maximum of five levels of folders can be created under the Root folder.
 *
 * @param request CreateFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolderWithOptions(const CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderName()) {
    query["FolderName"] = request.folderName();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.parentFolderId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFolder"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFolderResponse>();
}

/**
 * @summary Creates a folder.
 *
 * @description A maximum of five levels of folders can be created under the Root folder.
 *
 * @param request CreateFolderRequest
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolder(const CreateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFolderWithOptions(request, runtime);
}

/**
 * @summary Creates a member of the resource account type.
 *
 * @description A member serves as a container for resources and is also an organizational unit in a resource directory. A member indicates a project or application. The resources of different members are isolated.
 * This topic provides an example on how to call the API operation to create a member in the `fd-r23M55****` folder. The display name of the member is `Dev`, and the prefix for the Alibaba Cloud account name of the member is `alice`.
 *
 * @param request CreateResourceAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceAccountResponse
 */
CreateResourceAccountResponse Client::createResourceAccountWithOptions(const CreateResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountNamePrefix()) {
    query["AccountNamePrefix"] = request.accountNamePrefix();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.parentFolderId();
  }

  if (!!request.hasPayerAccountId()) {
    query["PayerAccountId"] = request.payerAccountId();
  }

  if (!!request.hasResellAccountType()) {
    query["ResellAccountType"] = request.resellAccountType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateResourceAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceAccountResponse>();
}

/**
 * @summary Creates a member of the resource account type.
 *
 * @description A member serves as a container for resources and is also an organizational unit in a resource directory. A member indicates a project or application. The resources of different members are isolated.
 * This topic provides an example on how to call the API operation to create a member in the `fd-r23M55****` folder. The display name of the member is `Dev`, and the prefix for the Alibaba Cloud account name of the member is `alice`.
 *
 * @param request CreateResourceAccountRequest
 * @return CreateResourceAccountResponse
 */
CreateResourceAccountResponse Client::createResourceAccount(const CreateResourceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceAccountWithOptions(request, runtime);
}

/**
 * @summary Rejects an invitation.
 *
 * @param request DeclineHandshakeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeclineHandshakeResponse
 */
DeclineHandshakeResponse Client::declineHandshakeWithOptions(const DeclineHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHandshakeId()) {
    query["HandshakeId"] = request.handshakeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeclineHandshake"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeclineHandshakeResponse>();
}

/**
 * @summary Rejects an invitation.
 *
 * @param request DeclineHandshakeRequest
 * @return DeclineHandshakeResponse
 */
DeclineHandshakeResponse Client::declineHandshake(const DeclineHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return declineHandshakeWithOptions(request, runtime);
}

/**
 * @summary Deletes a member of the resource account type.
 *
 * @description Before you delete a member, we recommend that you call the [CheckAccountDelete](~~CheckAccountDelete~~) and [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operations to check whether the member meets deletion requirements. You can call the DeleteAccount operation to delete only members that meet the deletion requirements.
 * After you submit a deletion request for a member, you can call the [GetAccountDeletionStatus](~~GetAccountDeletionStatus~~) operation to query the deletion status of the member. After a member is deleted, the resources and data within the member are deleted, and you can no longer use the member to log on to the Alibaba Cloud Management Console. In addition, the member cannot be recovered. Proceed with caution. For more information about how to delete a member, see [Delete a member of the resource account type](https://help.aliyun.com/document_detail/446078.html).
 *
 * @param tmpReq DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAccountShrinkRequest request = DeleteAccountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAbandonableCheckId()) {
    request.setAbandonableCheckIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.abandonableCheckId(), "AbandonableCheckId", "json"));
  }

  json query = {};
  if (!!request.hasAbandonableCheckIdShrink()) {
    query["AbandonableCheckId"] = request.abandonableCheckIdShrink();
  }

  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccountResponse>();
}

/**
 * @summary Deletes a member of the resource account type.
 *
 * @description Before you delete a member, we recommend that you call the [CheckAccountDelete](~~CheckAccountDelete~~) and [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operations to check whether the member meets deletion requirements. You can call the DeleteAccount operation to delete only members that meet the deletion requirements.
 * After you submit a deletion request for a member, you can call the [GetAccountDeletionStatus](~~GetAccountDeletionStatus~~) operation to query the deletion status of the member. After a member is deleted, the resources and data within the member are deleted, and you can no longer use the member to log on to the Alibaba Cloud Management Console. In addition, the member cannot be recovered. Proceed with caution. For more information about how to delete a member, see [Delete a member of the resource account type](https://help.aliyun.com/document_detail/446078.html).
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom access control policy.
 *
 * @description If you want to delete a custom access control policy that is attached to folders or members, you must call the [DetachControlPolicy](~~DetachControlPolicy~~) operation to detach the policy before you delete it.
 *
 * @param request DeleteControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteControlPolicyResponse
 */
DeleteControlPolicyResponse Client::deleteControlPolicyWithOptions(const DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteControlPolicyResponse>();
}

/**
 * @summary Deletes a custom access control policy.
 *
 * @description If you want to delete a custom access control policy that is attached to folders or members, you must call the [DetachControlPolicy](~~DetachControlPolicy~~) operation to detach the policy before you delete it.
 *
 * @param request DeleteControlPolicyRequest
 * @return DeleteControlPolicyResponse
 */
DeleteControlPolicyResponse Client::deleteControlPolicy(const DeleteControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a folder.
 *
 * @description Before you delete a folder, you must make sure that the folder does not contain members or subfolders.
 *
 * @param request DeleteFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolderWithOptions(const DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["FolderId"] = request.folderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFolder"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFolderResponse>();
}

/**
 * @summary Deletes a folder.
 *
 * @description Before you delete a folder, you must make sure that the folder does not contain members or subfolders.
 *
 * @param request DeleteFolderRequest
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolder(const DeleteFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFolderWithOptions(request, runtime);
}

/**
 * @summary Deletes a contact.
 *
 * @param request DeleteMessageContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMessageContactResponse
 */
DeleteMessageContactResponse Client::deleteMessageContactWithOptions(const DeleteMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasRetainContactInMembers()) {
    query["RetainContactInMembers"] = request.retainContactInMembers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMessageContact"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMessageContactResponse>();
}

/**
 * @summary Deletes a contact.
 *
 * @param request DeleteMessageContactRequest
 * @return DeleteMessageContactResponse
 */
DeleteMessageContactResponse Client::deleteMessageContact(const DeleteMessageContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMessageContactWithOptions(request, runtime);
}

/**
 * @summary Removes a delegated administrator account for a trusted service.
 *
 * @description If the delegated administrator account that you want to remove has historical management tasks in the related trusted service, the trusted service may be affected after the delegated administrator account is removed. Therefore, proceed with caution.
 *
 * @param request DeregisterDelegatedAdministratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeregisterDelegatedAdministratorResponse
 */
DeregisterDelegatedAdministratorResponse Client::deregisterDelegatedAdministratorWithOptions(const DeregisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasServicePrincipal()) {
    query["ServicePrincipal"] = request.servicePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeregisterDelegatedAdministrator"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeregisterDelegatedAdministratorResponse>();
}

/**
 * @summary Removes a delegated administrator account for a trusted service.
 *
 * @description If the delegated administrator account that you want to remove has historical management tasks in the related trusted service, the trusted service may be affected after the delegated administrator account is removed. Therefore, proceed with caution.
 *
 * @param request DeregisterDelegatedAdministratorRequest
 * @return DeregisterDelegatedAdministratorResponse
 */
DeregisterDelegatedAdministratorResponse Client::deregisterDelegatedAdministrator(const DeregisterDelegatedAdministratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deregisterDelegatedAdministratorWithOptions(request, runtime);
}

/**
 * @summary Disables a resource directory. This operation cannot be undone. Therefore, proceed with caution.
 *
 * @description Before you disable a resource directory, you must make sure that the following requirements are met:
 * *   All members of the cloud account type in the resource directory are removed. You can call the [RemoveCloudAccount](~~RemoveCloudAccount~~) operation to remove a member of the cloud account type.
 * *   All folders except the Root folder are deleted from the resource directory. You can call the [DeleteFolder](~~DeleteFolder~~) operation to delete a folder.
 *
 * @param request DestroyResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DestroyResourceDirectoryResponse
 */
DestroyResourceDirectoryResponse Client::destroyResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DestroyResourceDirectory"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DestroyResourceDirectoryResponse>();
}

/**
 * @summary Disables a resource directory. This operation cannot be undone. Therefore, proceed with caution.
 *
 * @description Before you disable a resource directory, you must make sure that the following requirements are met:
 * *   All members of the cloud account type in the resource directory are removed. You can call the [RemoveCloudAccount](~~RemoveCloudAccount~~) operation to remove a member of the cloud account type.
 * *   All folders except the Root folder are deleted from the resource directory. You can call the [DeleteFolder](~~DeleteFolder~~) operation to delete a folder.
 *
 * @return DestroyResourceDirectoryResponse
 */
DestroyResourceDirectoryResponse Client::destroyResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return destroyResourceDirectoryWithOptions(runtime);
}

/**
 * @summary Detaches an access control policy.
 *
 * @description After you detach an access control policy, the operations performed on resources by using members are not limited by the policy. Make sure that the detached policy meets your expectations. Otherwise, your business may be affected.
 * Both the system and custom access control policies can be detached. If an object has only one access control policy attached, the policy cannot be detached.
 *
 * @param request DetachControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachControlPolicyResponse
 */
DetachControlPolicyResponse Client::detachControlPolicyWithOptions(const DetachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.targetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachControlPolicyResponse>();
}

/**
 * @summary Detaches an access control policy.
 *
 * @description After you detach an access control policy, the operations performed on resources by using members are not limited by the policy. Make sure that the detached policy meets your expectations. Otherwise, your business may be affected.
 * Both the system and custom access control policies can be detached. If an object has only one access control policy attached, the policy cannot be detached.
 *
 * @param request DetachControlPolicyRequest
 * @return DetachControlPolicyResponse
 */
DetachControlPolicyResponse Client::detachControlPolicy(const DetachControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Disables the Control Policy feature.
 *
 * @description After you disable the Control Policy feature, the system automatically detaches all access control policies that are attached to folders and members. The system does not delete these access control policies, but you cannot attach them to folders or members again.
 * > If you disable the Control Policy feature, the permissions of all folders and members in your resource directory are affected. Therefore, proceed with caution.
 *
 * @param request DisableControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableControlPolicyResponse
 */
DisableControlPolicyResponse Client::disableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisableControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableControlPolicyResponse>();
}

/**
 * @summary Disables the Control Policy feature.
 *
 * @description After you disable the Control Policy feature, the system automatically detaches all access control policies that are attached to folders and members. The system does not delete these access control policies, but you cannot attach them to folders or members again.
 * > If you disable the Control Policy feature, the permissions of all folders and members in your resource directory are affected. Therefore, proceed with caution.
 *
 * @return DisableControlPolicyResponse
 */
DisableControlPolicyResponse Client::disableControlPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableControlPolicyWithOptions(runtime);
}

/**
 * @summary Unbinds a contact from a resource directory, folder, or member.
 *
 * @param request DisassociateMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateMembersResponse
 */
DisassociateMembersResponse Client::disassociateMembersWithOptions(const DisassociateMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasMembers()) {
    query["Members"] = request.members();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateMembers"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateMembersResponse>();
}

/**
 * @summary Unbinds a contact from a resource directory, folder, or member.
 *
 * @param request DisassociateMembersRequest
 * @return DisassociateMembersResponse
 */
DisassociateMembersResponse Client::disassociateMembers(const DisassociateMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateMembersWithOptions(request, runtime);
}

/**
 * @summary Enables the Control Policy feature.
 *
 * @description The Control Policy feature provided by the Resource Directory service allows you to manage the permission boundaries of the folders or members in your resource directory in a centralized manner. This feature is implemented based on the resource directory. You can use this feature to develop common or dedicated rules for access control. The Control Policy feature does not grant permissions but only defines permission boundaries. A member in a resource directory can be used to access resources only after it is granted the required permissions by using the Resource Access Management (RAM) service. For more information, see [Overview of the Control Policy feature](https://help.aliyun.com/document_detail/178671.html).
 *
 * @param request EnableControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableControlPolicyResponse
 */
EnableControlPolicyResponse Client::enableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableControlPolicyResponse>();
}

/**
 * @summary Enables the Control Policy feature.
 *
 * @description The Control Policy feature provided by the Resource Directory service allows you to manage the permission boundaries of the folders or members in your resource directory in a centralized manner. This feature is implemented based on the resource directory. You can use this feature to develop common or dedicated rules for access control. The Control Policy feature does not grant permissions but only defines permission boundaries. A member in a resource directory can be used to access resources only after it is granted the required permissions by using the Resource Access Management (RAM) service. For more information, see [Overview of the Control Policy feature](https://help.aliyun.com/document_detail/178671.html).
 *
 * @return EnableControlPolicyResponse
 */
EnableControlPolicyResponse Client::enableControlPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableControlPolicyWithOptions(runtime);
}

/**
 * @summary Enables a resource directory.
 *
 * @description You can use the current account or a newly created account to enable a resource directory. For more information, see [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
 *
 * @param request EnableResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableResourceDirectoryResponse
 */
EnableResourceDirectoryResponse Client::enableResourceDirectoryWithOptions(const EnableResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEnableMode()) {
    query["EnableMode"] = request.enableMode();
  }

  if (!!request.hasMAName()) {
    query["MAName"] = request.MAName();
  }

  if (!!request.hasMASecureMobilePhone()) {
    query["MASecureMobilePhone"] = request.MASecureMobilePhone();
  }

  if (!!request.hasVerificationCode()) {
    query["VerificationCode"] = request.verificationCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableResourceDirectory"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableResourceDirectoryResponse>();
}

/**
 * @summary Enables a resource directory.
 *
 * @description You can use the current account or a newly created account to enable a resource directory. For more information, see [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
 *
 * @param request EnableResourceDirectoryRequest
 * @return EnableResourceDirectoryResponse
 */
EnableResourceDirectoryResponse Client::enableResourceDirectory(const EnableResourceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableResourceDirectoryWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a member.
 *
 * @param request GetAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountResponse
 */
GetAccountResponse Client::getAccountWithOptions(const GetAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.includeTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountResponse>();
}

/**
 * @summary Queries the information of a member.
 *
 * @param request GetAccountRequest
 * @return GetAccountResponse
 */
GetAccountResponse Client::getAccount(const GetAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the result of a member deletion check.
 *
 * @description After you call the [CheckAccountDelete](~~CheckAccountDelete~~) operation to perform a member deletion check, you can call the [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operation to query the check result. If the check result shows that the member meets deletion requirements, you can delete the member. Otherwise, you need to first modify the items that do not meet requirements.
 *
 * @param request GetAccountDeletionCheckResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountDeletionCheckResultResponse
 */
GetAccountDeletionCheckResultResponse Client::getAccountDeletionCheckResultWithOptions(const GetAccountDeletionCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountDeletionCheckResult"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountDeletionCheckResultResponse>();
}

/**
 * @summary Queries the result of a member deletion check.
 *
 * @description After you call the [CheckAccountDelete](~~CheckAccountDelete~~) operation to perform a member deletion check, you can call the [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operation to query the check result. If the check result shows that the member meets deletion requirements, you can delete the member. Otherwise, you need to first modify the items that do not meet requirements.
 *
 * @param request GetAccountDeletionCheckResultRequest
 * @return GetAccountDeletionCheckResultResponse
 */
GetAccountDeletionCheckResultResponse Client::getAccountDeletionCheckResult(const GetAccountDeletionCheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountDeletionCheckResultWithOptions(request, runtime);
}

/**
 * @summary Queries the deletion status of a member.
 *
 * @param request GetAccountDeletionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountDeletionStatusResponse
 */
GetAccountDeletionStatusResponse Client::getAccountDeletionStatusWithOptions(const GetAccountDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountDeletionStatus"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountDeletionStatusResponse>();
}

/**
 * @summary Queries the deletion status of a member.
 *
 * @param request GetAccountDeletionStatusRequest
 * @return GetAccountDeletionStatusResponse
 */
GetAccountDeletionStatusResponse Client::getAccountDeletionStatus(const GetAccountDeletionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountDeletionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an access control policy.
 *
 * @param request GetControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetControlPolicyResponse
 */
GetControlPolicyResponse Client::getControlPolicyWithOptions(const GetControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetControlPolicyResponse>();
}

/**
 * @summary Queries the details of an access control policy.
 *
 * @param request GetControlPolicyRequest
 * @return GetControlPolicyResponse
 */
GetControlPolicyResponse Client::getControlPolicy(const GetControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Control Policy feature.
 *
 * @param request GetControlPolicyEnablementStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetControlPolicyEnablementStatusResponse
 */
GetControlPolicyEnablementStatusResponse Client::getControlPolicyEnablementStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetControlPolicyEnablementStatus"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetControlPolicyEnablementStatusResponse>();
}

/**
 * @summary Queries the status of the Control Policy feature.
 *
 * @return GetControlPolicyEnablementStatusResponse
 */
GetControlPolicyEnablementStatusResponse Client::getControlPolicyEnablementStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getControlPolicyEnablementStatusWithOptions(runtime);
}

/**
 * @summary Queries the information about a folder.
 *
 * @param request GetFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFolderResponse
 */
GetFolderResponse Client::getFolderWithOptions(const GetFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["FolderId"] = request.folderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFolder"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFolderResponse>();
}

/**
 * @summary Queries the information about a folder.
 *
 * @param request GetFolderRequest
 * @return GetFolderResponse
 */
GetFolderResponse Client::getFolder(const GetFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFolderWithOptions(request, runtime);
}

/**
 * @summary Queries the information of an invitation.
 *
 * @param request GetHandshakeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHandshakeResponse
 */
GetHandshakeResponse Client::getHandshakeWithOptions(const GetHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHandshakeId()) {
    query["HandshakeId"] = request.handshakeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHandshake"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHandshakeResponse>();
}

/**
 * @summary Queries the information of an invitation.
 *
 * @param request GetHandshakeRequest
 * @return GetHandshakeResponse
 */
GetHandshakeResponse Client::getHandshake(const GetHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHandshakeWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a contact.
 *
 * @param request GetMessageContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessageContactResponse
 */
GetMessageContactResponse Client::getMessageContactWithOptions(const GetMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMessageContact"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMessageContactResponse>();
}

/**
 * @summary Queries the information about a contact.
 *
 * @param request GetMessageContactRequest
 * @return GetMessageContactResponse
 */
GetMessageContactResponse Client::getMessageContact(const GetMessageContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMessageContactWithOptions(request, runtime);
}

/**
 * @summary Queries the deletion status of a contact.
 *
 * @param request GetMessageContactDeletionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessageContactDeletionStatusResponse
 */
GetMessageContactDeletionStatusResponse Client::getMessageContactDeletionStatusWithOptions(const GetMessageContactDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMessageContactDeletionStatus"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMessageContactDeletionStatusResponse>();
}

/**
 * @summary Queries the deletion status of a contact.
 *
 * @param request GetMessageContactDeletionStatusRequest
 * @return GetMessageContactDeletionStatusResponse
 */
GetMessageContactDeletionStatusResponse Client::getMessageContactDeletionStatus(const GetMessageContactDeletionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMessageContactDeletionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a billing account.
 *
 * @param request GetPayerForAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPayerForAccountResponse
 */
GetPayerForAccountResponse Client::getPayerForAccountWithOptions(const GetPayerForAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPayerForAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPayerForAccountResponse>();
}

/**
 * @summary Queries the information of a billing account.
 *
 * @param request GetPayerForAccountRequest
 * @return GetPayerForAccountResponse
 */
GetPayerForAccountResponse Client::getPayerForAccount(const GetPayerForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPayerForAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a resource directory. If you use a management account to call this API operation, the system returns the information of the resource directory that is enabled by using the management account. If you use a member to call this operation, the system returns the information of
 *
 * @param request GetResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceDirectoryResponse
 */
GetResourceDirectoryResponse Client::getResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetResourceDirectory"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceDirectoryResponse>();
}

/**
 * @summary Queries the information of a resource directory. If you use a management account to call this API operation, the system returns the information of the resource directory that is enabled by using the management account. If you use a member to call this operation, the system returns the information of
 *
 * @return GetResourceDirectoryResponse
 */
GetResourceDirectoryResponse Client::getResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceDirectoryWithOptions(runtime);
}

/**
 * @summary Invites an account to join a resource directory.
 *
 * @param request InviteAccountToResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InviteAccountToResourceDirectoryResponse
 */
InviteAccountToResourceDirectoryResponse Client::inviteAccountToResourceDirectoryWithOptions(const InviteAccountToResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.parentFolderId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTargetEntity()) {
    query["TargetEntity"] = request.targetEntity();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InviteAccountToResourceDirectory"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InviteAccountToResourceDirectoryResponse>();
}

/**
 * @summary Invites an account to join a resource directory.
 *
 * @param request InviteAccountToResourceDirectoryRequest
 * @return InviteAccountToResourceDirectoryResponse
 */
InviteAccountToResourceDirectoryResponse Client::inviteAccountToResourceDirectory(const InviteAccountToResourceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inviteAccountToResourceDirectoryWithOptions(request, runtime);
}

/**
 * @summary Queries a list of members in a resource directory.
 *
 * @description You can use only the management account of a resource directory or a delegated administrator account of a trusted service to call this operation.
 *
 * @param request ListAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountsResponse
 */
ListAccountsResponse Client::listAccountsWithOptions(const ListAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.includeTags();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.queryKeyword();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccounts"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccountsResponse>();
}

/**
 * @summary Queries a list of members in a resource directory.
 *
 * @description You can use only the management account of a resource directory or a delegated administrator account of a trusted service to call this operation.
 *
 * @param request ListAccountsRequest
 * @return ListAccountsResponse
 */
ListAccountsResponse Client::listAccounts(const ListAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the information of members in a folder.
 *
 * @param request ListAccountsForParentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountsForParentResponse
 */
ListAccountsForParentResponse Client::listAccountsForParentWithOptions(const ListAccountsForParentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.includeTags();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.parentFolderId();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.queryKeyword();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccountsForParent"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccountsForParentResponse>();
}

/**
 * @summary Queries the information of members in a folder.
 *
 * @param request ListAccountsForParentRequest
 * @return ListAccountsForParentResponse
 */
ListAccountsForParentResponse Client::listAccountsForParent(const ListAccountsForParentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountsForParentWithOptions(request, runtime);
}

/**
 * @summary Queries the information of all the parent folders of a specified folder.
 *
 * @param request ListAncestorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAncestorsResponse
 */
ListAncestorsResponse Client::listAncestorsWithOptions(const ListAncestorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildId()) {
    query["ChildId"] = request.childId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAncestors"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAncestorsResponse>();
}

/**
 * @summary Queries the information of all the parent folders of a specified folder.
 *
 * @param request ListAncestorsRequest
 * @return ListAncestorsResponse
 */
ListAncestorsResponse Client::listAncestors(const ListAncestorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAncestorsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of members who have the permission to query member information in a resource directory.
 *
 * @description The permission to query member information refers to the permission to call the [GetAccount](~~GetAccount~~) API operation.
 *
 * @param request ListAuthorizedAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedAccountsResponse
 */
ListAuthorizedAccountsResponse Client::listAuthorizedAccountsWithOptions(const ListAuthorizedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthorizedAccounts"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedAccountsResponse>();
}

/**
 * @summary Queries a list of members who have the permission to query member information in a resource directory.
 *
 * @description The permission to query member information refers to the permission to call the [GetAccount](~~GetAccount~~) API operation.
 *
 * @param request ListAuthorizedAccountsRequest
 * @return ListAuthorizedAccountsResponse
 */
ListAuthorizedAccountsResponse Client::listAuthorizedAccounts(const ListAuthorizedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of folders that have permissions to query subfolder information in a resource directory.
 *
 * @description The permissions to query subfolder information refer to the permissions to call the [ListAccountsForParent](~~ListAccountsForParent~~) and [ListFoldersForParent](~~ListFoldersForParent~~) API operations.
 *
 * @param request ListAuthorizedFoldersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedFoldersResponse
 */
ListAuthorizedFoldersResponse Client::listAuthorizedFoldersWithOptions(const ListAuthorizedFoldersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthorizedFolders"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedFoldersResponse>();
}

/**
 * @summary Queries a list of folders that have permissions to query subfolder information in a resource directory.
 *
 * @description The permissions to query subfolder information refer to the permissions to call the [ListAccountsForParent](~~ListAccountsForParent~~) and [ListFoldersForParent](~~ListFoldersForParent~~) API operations.
 *
 * @param request ListAuthorizedFoldersRequest
 * @return ListAuthorizedFoldersResponse
 */
ListAuthorizedFoldersResponse Client::listAuthorizedFolders(const ListAuthorizedFoldersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedFoldersWithOptions(request, runtime);
}

/**
 * @summary Queries access control policies.
 *
 * @param request ListControlPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListControlPoliciesResponse
 */
ListControlPoliciesResponse Client::listControlPoliciesWithOptions(const ListControlPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListControlPolicies"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListControlPoliciesResponse>();
}

/**
 * @summary Queries access control policies.
 *
 * @param request ListControlPoliciesRequest
 * @return ListControlPoliciesResponse
 */
ListControlPoliciesResponse Client::listControlPolicies(const ListControlPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listControlPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the access control policies that are attached to a folder or member.
 *
 * @param request ListControlPolicyAttachmentsForTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListControlPolicyAttachmentsForTargetResponse
 */
ListControlPolicyAttachmentsForTargetResponse Client::listControlPolicyAttachmentsForTargetWithOptions(const ListControlPolicyAttachmentsForTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.targetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListControlPolicyAttachmentsForTarget"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListControlPolicyAttachmentsForTargetResponse>();
}

/**
 * @summary Queries the access control policies that are attached to a folder or member.
 *
 * @param request ListControlPolicyAttachmentsForTargetRequest
 * @return ListControlPolicyAttachmentsForTargetResponse
 */
ListControlPolicyAttachmentsForTargetResponse Client::listControlPolicyAttachmentsForTarget(const ListControlPolicyAttachmentsForTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listControlPolicyAttachmentsForTargetWithOptions(request, runtime);
}

/**
 * @summary Queries delegated administrator accounts.
 *
 * @param request ListDelegatedAdministratorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDelegatedAdministratorsResponse
 */
ListDelegatedAdministratorsResponse Client::listDelegatedAdministratorsWithOptions(const ListDelegatedAdministratorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasServicePrincipal()) {
    query["ServicePrincipal"] = request.servicePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDelegatedAdministrators"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDelegatedAdministratorsResponse>();
}

/**
 * @summary Queries delegated administrator accounts.
 *
 * @param request ListDelegatedAdministratorsRequest
 * @return ListDelegatedAdministratorsResponse
 */
ListDelegatedAdministratorsResponse Client::listDelegatedAdministrators(const ListDelegatedAdministratorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDelegatedAdministratorsWithOptions(request, runtime);
}

/**
 * @summary Queries the trusted services for which a member is specified as a delegated administrator account.
 *
 * @param request ListDelegatedServicesForAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDelegatedServicesForAccountResponse
 */
ListDelegatedServicesForAccountResponse Client::listDelegatedServicesForAccountWithOptions(const ListDelegatedServicesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDelegatedServicesForAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDelegatedServicesForAccountResponse>();
}

/**
 * @summary Queries the trusted services for which a member is specified as a delegated administrator account.
 *
 * @param request ListDelegatedServicesForAccountRequest
 * @return ListDelegatedServicesForAccountResponse
 */
ListDelegatedServicesForAccountResponse Client::listDelegatedServicesForAccount(const ListDelegatedServicesForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDelegatedServicesForAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the information of all subfolders of a folder.
 *
 * @description You can call this API operation to view the information of only the first-level subfolders of a folder.
 *
 * @param request ListFoldersForParentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFoldersForParentResponse
 */
ListFoldersForParentResponse Client::listFoldersForParentWithOptions(const ListFoldersForParentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.parentFolderId();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.queryKeyword();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFoldersForParent"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFoldersForParentResponse>();
}

/**
 * @summary Queries the information of all subfolders of a folder.
 *
 * @description You can call this API operation to view the information of only the first-level subfolders of a folder.
 *
 * @param request ListFoldersForParentRequest
 * @return ListFoldersForParentResponse
 */
ListFoldersForParentResponse Client::listFoldersForParent(const ListFoldersForParentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFoldersForParentWithOptions(request, runtime);
}

/**
 * @summary Queries the invitations that are associated with an account.
 *
 * @param request ListHandshakesForAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHandshakesForAccountResponse
 */
ListHandshakesForAccountResponse Client::listHandshakesForAccountWithOptions(const ListHandshakesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHandshakesForAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHandshakesForAccountResponse>();
}

/**
 * @summary Queries the invitations that are associated with an account.
 *
 * @param request ListHandshakesForAccountRequest
 * @return ListHandshakesForAccountResponse
 */
ListHandshakesForAccountResponse Client::listHandshakesForAccount(const ListHandshakesForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHandshakesForAccountWithOptions(request, runtime);
}

/**
 * @summary Queries invitations in a resource directory.
 *
 * @param request ListHandshakesForResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHandshakesForResourceDirectoryResponse
 */
ListHandshakesForResourceDirectoryResponse Client::listHandshakesForResourceDirectoryWithOptions(const ListHandshakesForResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHandshakesForResourceDirectory"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHandshakesForResourceDirectoryResponse>();
}

/**
 * @summary Queries invitations in a resource directory.
 *
 * @param request ListHandshakesForResourceDirectoryRequest
 * @return ListHandshakesForResourceDirectoryResponse
 */
ListHandshakesForResourceDirectoryResponse Client::listHandshakesForResourceDirectory(const ListHandshakesForResourceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHandshakesForResourceDirectoryWithOptions(request, runtime);
}

/**
 * @summary Queries the mobile phone number or email address to be verified for a contact.
 *
 * @param request ListMessageContactVerificationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMessageContactVerificationsResponse
 */
ListMessageContactVerificationsResponse Client::listMessageContactVerificationsWithOptions(const ListMessageContactVerificationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMessageContactVerifications"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMessageContactVerificationsResponse>();
}

/**
 * @summary Queries the mobile phone number or email address to be verified for a contact.
 *
 * @param request ListMessageContactVerificationsRequest
 * @return ListMessageContactVerificationsResponse
 */
ListMessageContactVerificationsResponse Client::listMessageContactVerifications(const ListMessageContactVerificationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMessageContactVerificationsWithOptions(request, runtime);
}

/**
 * @summary Queries contacts.
 *
 * @param request ListMessageContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMessageContactsResponse
 */
ListMessageContactsResponse Client::listMessageContactsWithOptions(const ListMessageContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasMember()) {
    query["Member"] = request.member();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMessageContacts"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMessageContactsResponse>();
}

/**
 * @summary Queries contacts.
 *
 * @param request ListMessageContactsRequest
 * @return ListMessageContactsResponse
 */
ListMessageContactsResponse Client::listMessageContacts(const ListMessageContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMessageContactsWithOptions(request, runtime);
}

/**
 * @summary Queries tag keys.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyFilter()) {
    query["KeyFilter"] = request.keyFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2022-04-19"},
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
 * @summary Queries tag keys.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to the members in a resource directory.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2022-04-19"},
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
 * @summary Queries the tags that are added to the members in a resource directory.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values of a tag key.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  if (!!request.hasValueFilter()) {
    query["ValueFilter"] = request.valueFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagValuesResponse>();
}

/**
 * @summary Queries the tag values of a tag key.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Queries the objects to which an access control policy is attached.
 *
 * @param request ListTargetAttachmentsForControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTargetAttachmentsForControlPolicyResponse
 */
ListTargetAttachmentsForControlPolicyResponse Client::listTargetAttachmentsForControlPolicyWithOptions(const ListTargetAttachmentsForControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTargetAttachmentsForControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTargetAttachmentsForControlPolicyResponse>();
}

/**
 * @summary Queries the objects to which an access control policy is attached.
 *
 * @param request ListTargetAttachmentsForControlPolicyRequest
 * @return ListTargetAttachmentsForControlPolicyResponse
 */
ListTargetAttachmentsForControlPolicyResponse Client::listTargetAttachmentsForControlPolicy(const ListTargetAttachmentsForControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTargetAttachmentsForControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the trusted services that are enabled within a management account or delegated administrator account.
 *
 * @description Only a management account or delegated administrator account can be used to call this operation.
 *
 * @param request ListTrustedServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrustedServiceStatusResponse
 */
ListTrustedServiceStatusResponse Client::listTrustedServiceStatusWithOptions(const ListTrustedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminAccountId()) {
    query["AdminAccountId"] = request.adminAccountId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrustedServiceStatus"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrustedServiceStatusResponse>();
}

/**
 * @summary Queries the trusted services that are enabled within a management account or delegated administrator account.
 *
 * @description Only a management account or delegated administrator account can be used to call this operation.
 *
 * @param request ListTrustedServiceStatusRequest
 * @return ListTrustedServiceStatusResponse
 */
ListTrustedServiceStatusResponse Client::listTrustedServiceStatus(const ListTrustedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTrustedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Moves a member from a folder to another.
 *
 * @param request MoveAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveAccountResponse
 */
MoveAccountResponse Client::moveAccountWithOptions(const MoveAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasDestinationFolderId()) {
    query["DestinationFolderId"] = request.destinationFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveAccountResponse>();
}

/**
 * @summary Moves a member from a folder to another.
 *
 * @param request MoveAccountRequest
 * @return MoveAccountResponse
 */
MoveAccountResponse Client::moveAccount(const MoveAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveAccountWithOptions(request, runtime);
}

/**
 * @summary Checks whether a management account or member can be used as a main financial account.
 *
 * @param request PrecheckForConsolidatedBillingAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrecheckForConsolidatedBillingAccountResponse
 */
PrecheckForConsolidatedBillingAccountResponse Client::precheckForConsolidatedBillingAccountWithOptions(const PrecheckForConsolidatedBillingAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingAccountId()) {
    query["BillingAccountId"] = request.billingAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PrecheckForConsolidatedBillingAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrecheckForConsolidatedBillingAccountResponse>();
}

/**
 * @summary Checks whether a management account or member can be used as a main financial account.
 *
 * @param request PrecheckForConsolidatedBillingAccountRequest
 * @return PrecheckForConsolidatedBillingAccountResponse
 */
PrecheckForConsolidatedBillingAccountResponse Client::precheckForConsolidatedBillingAccount(const PrecheckForConsolidatedBillingAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return precheckForConsolidatedBillingAccountWithOptions(request, runtime);
}

/**
 * @summary Specifies a member in a resource directory as a delegated administrator account of a trusted service.
 *
 * @description The delegated administrator account can be used to access the information of the resource directory and view the structure and members of the resource directory. The delegated administrator account can also be used to perform service-related management operations in the trusted service on behalf of the management account of the resource directory. When you call this operation, you must take note of the following limits:
 * *   Only some trusted services support delegated administrator accounts. For more information, see [Supported trusted services](https://help.aliyun.com/document_detail/208133.html).
 * *   Only the management account of a resource directory or an authorized RAM user or RAM role of the management account can be used to call this operation.
 * *   The number of delegated administrator accounts that are allowed for a trusted service is defined by the trusted service.
 *
 * @param request RegisterDelegatedAdministratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterDelegatedAdministratorResponse
 */
RegisterDelegatedAdministratorResponse Client::registerDelegatedAdministratorWithOptions(const RegisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasServicePrincipal()) {
    query["ServicePrincipal"] = request.servicePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterDelegatedAdministrator"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterDelegatedAdministratorResponse>();
}

/**
 * @summary Specifies a member in a resource directory as a delegated administrator account of a trusted service.
 *
 * @description The delegated administrator account can be used to access the information of the resource directory and view the structure and members of the resource directory. The delegated administrator account can also be used to perform service-related management operations in the trusted service on behalf of the management account of the resource directory. When you call this operation, you must take note of the following limits:
 * *   Only some trusted services support delegated administrator accounts. For more information, see [Supported trusted services](https://help.aliyun.com/document_detail/208133.html).
 * *   Only the management account of a resource directory or an authorized RAM user or RAM role of the management account can be used to call this operation.
 * *   The number of delegated administrator accounts that are allowed for a trusted service is defined by the trusted service.
 *
 * @param request RegisterDelegatedAdministratorRequest
 * @return RegisterDelegatedAdministratorResponse
 */
RegisterDelegatedAdministratorResponse Client::registerDelegatedAdministrator(const RegisterDelegatedAdministratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDelegatedAdministratorWithOptions(request, runtime);
}

/**
 * @summary Removes a member of the cloud account type.
 *
 * @param request RemoveCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveCloudAccountResponse
 */
RemoveCloudAccountResponse Client::removeCloudAccountWithOptions(const RemoveCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveCloudAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveCloudAccountResponse>();
}

/**
 * @summary Removes a member of the cloud account type.
 *
 * @param request RemoveCloudAccountRequest
 * @return RemoveCloudAccountResponse
 */
RemoveCloudAccountResponse Client::removeCloudAccount(const RemoveCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Resends a verification email for the email address change of a member.
 *
 * @param request RetryChangeAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryChangeAccountEmailResponse
 */
RetryChangeAccountEmailResponse Client::retryChangeAccountEmailWithOptions(const RetryChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryChangeAccountEmail"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryChangeAccountEmailResponse>();
}

/**
 * @summary Resends a verification email for the email address change of a member.
 *
 * @param request RetryChangeAccountEmailRequest
 * @return RetryChangeAccountEmailResponse
 */
RetryChangeAccountEmailResponse Client::retryChangeAccountEmail(const RetryChangeAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryChangeAccountEmailWithOptions(request, runtime);
}

/**
 * @summary Sends verification information to the email address of a contact.
 *
 * @param request SendEmailVerificationForMessageContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendEmailVerificationForMessageContactResponse
 */
SendEmailVerificationForMessageContactResponse Client::sendEmailVerificationForMessageContactWithOptions(const SendEmailVerificationForMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasEmailAddress()) {
    query["EmailAddress"] = request.emailAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendEmailVerificationForMessageContact"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendEmailVerificationForMessageContactResponse>();
}

/**
 * @summary Sends verification information to the email address of a contact.
 *
 * @param request SendEmailVerificationForMessageContactRequest
 * @return SendEmailVerificationForMessageContactResponse
 */
SendEmailVerificationForMessageContactResponse Client::sendEmailVerificationForMessageContact(const SendEmailVerificationForMessageContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendEmailVerificationForMessageContactWithOptions(request, runtime);
}

/**
 * @summary Sends verification information to the mobile phone number of a contact.
 *
 * @param request SendPhoneVerificationForMessageContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendPhoneVerificationForMessageContactResponse
 */
SendPhoneVerificationForMessageContactResponse Client::sendPhoneVerificationForMessageContactWithOptions(const SendPhoneVerificationForMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendPhoneVerificationForMessageContact"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendPhoneVerificationForMessageContactResponse>();
}

/**
 * @summary Sends verification information to the mobile phone number of a contact.
 *
 * @param request SendPhoneVerificationForMessageContactRequest
 * @return SendPhoneVerificationForMessageContactResponse
 */
SendPhoneVerificationForMessageContactResponse Client::sendPhoneVerificationForMessageContact(const SendPhoneVerificationForMessageContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendPhoneVerificationForMessageContactWithOptions(request, runtime);
}

/**
 * @summary Sends a verification code to the mobile phone number that you want to bind to a member of the resource account type in a resource directory for security purposes.
 *
 * @description To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
 *
 * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendVerificationCodeForBindSecureMobilePhoneResponse
 */
SendVerificationCodeForBindSecureMobilePhoneResponse Client::sendVerificationCodeForBindSecureMobilePhoneWithOptions(const SendVerificationCodeForBindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasSecureMobilePhone()) {
    query["SecureMobilePhone"] = request.secureMobilePhone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendVerificationCodeForBindSecureMobilePhone"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendVerificationCodeForBindSecureMobilePhoneResponse>();
}

/**
 * @summary Sends a verification code to the mobile phone number that you want to bind to a member of the resource account type in a resource directory for security purposes.
 *
 * @description To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
 *
 * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
 * @return SendVerificationCodeForBindSecureMobilePhoneResponse
 */
SendVerificationCodeForBindSecureMobilePhoneResponse Client::sendVerificationCodeForBindSecureMobilePhone(const SendVerificationCodeForBindSecureMobilePhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendVerificationCodeForBindSecureMobilePhoneWithOptions(request, runtime);
}

/**
 * @summary Sends a verification code to the mobile phone number bound to a newly created account when you use the account to enable a resource directory.
 *
 * @description Each Alibaba Cloud account can be used to send a maximum of 100 verification codes per day.
 *
 * @param request SendVerificationCodeForEnableRDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendVerificationCodeForEnableRDResponse
 */
SendVerificationCodeForEnableRDResponse Client::sendVerificationCodeForEnableRDWithOptions(const SendVerificationCodeForEnableRDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecureMobilePhone()) {
    query["SecureMobilePhone"] = request.secureMobilePhone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendVerificationCodeForEnableRD"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendVerificationCodeForEnableRDResponse>();
}

/**
 * @summary Sends a verification code to the mobile phone number bound to a newly created account when you use the account to enable a resource directory.
 *
 * @description Each Alibaba Cloud account can be used to send a maximum of 100 verification codes per day.
 *
 * @param request SendVerificationCodeForEnableRDRequest
 * @return SendVerificationCodeForEnableRDResponse
 */
SendVerificationCodeForEnableRDResponse Client::sendVerificationCodeForEnableRD(const SendVerificationCodeForEnableRDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendVerificationCodeForEnableRDWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the member deletion feature.
 *
 * @description Members of the resource account type can be deleted only after the member deletion feature is enabled.
 *
 * @param request SetMemberDeletionPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetMemberDeletionPermissionResponse
 */
SetMemberDeletionPermissionResponse Client::setMemberDeletionPermissionWithOptions(const SetMemberDeletionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetMemberDeletionPermission"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetMemberDeletionPermissionResponse>();
}

/**
 * @summary Enables or disables the member deletion feature.
 *
 * @description Members of the resource account type can be deleted only after the member deletion feature is enabled.
 *
 * @param request SetMemberDeletionPermissionRequest
 * @return SetMemberDeletionPermissionResponse
 */
SetMemberDeletionPermissionResponse Client::setMemberDeletionPermission(const SetMemberDeletionPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setMemberDeletionPermissionWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the Member Display Name Synchronization feature.
 *
 * @param request SetMemberDisplayNameSyncStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetMemberDisplayNameSyncStatusResponse
 */
SetMemberDisplayNameSyncStatusResponse Client::setMemberDisplayNameSyncStatusWithOptions(const SetMemberDisplayNameSyncStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetMemberDisplayNameSyncStatus"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetMemberDisplayNameSyncStatusResponse>();
}

/**
 * @summary Enables or disables the Member Display Name Synchronization feature.
 *
 * @param request SetMemberDisplayNameSyncStatusRequest
 * @return SetMemberDisplayNameSyncStatusResponse
 */
SetMemberDisplayNameSyncStatusResponse Client::setMemberDisplayNameSyncStatus(const SetMemberDisplayNameSyncStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setMemberDisplayNameSyncStatusWithOptions(request, runtime);
}

/**
 * @summary Adds tags to the members in a resource directory.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2022-04-19"},
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
 * @summary Adds tags to the members in a resource directory.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from the members in a resource directory.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2022-04-19"},
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
 * @summary Removes tags from the members in a resource directory.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the display name of a member, or switches the type of a member.
 *
 * @description *   To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this operation.
 * *   Before you switch the type of a member from resource account to cloud account, make sure that specific conditions are met. For more information about the conditions, see [Switch a resource account to a cloud account](https://help.aliyun.com/document_detail/111233.html).
 * *   Before you switch the type of a member from cloud account to resource account, make sure that specific conditions are met. For more information about the conditions, see [Switch a cloud account to a resource account](https://help.aliyun.com/document_detail/209980.html).
 *
 * @param request UpdateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccountResponse
 */
UpdateAccountResponse Client::updateAccountWithOptions(const UpdateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasNewAccountType()) {
    query["NewAccountType"] = request.newAccountType();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.newDisplayName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccountResponse>();
}

/**
 * @summary Changes the display name of a member, or switches the type of a member.
 *
 * @description *   To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this operation.
 * *   Before you switch the type of a member from resource account to cloud account, make sure that specific conditions are met. For more information about the conditions, see [Switch a resource account to a cloud account](https://help.aliyun.com/document_detail/111233.html).
 * *   Before you switch the type of a member from cloud account to resource account, make sure that specific conditions are met. For more information about the conditions, see [Switch a cloud account to a resource account](https://help.aliyun.com/document_detail/209980.html).
 *
 * @param request UpdateAccountRequest
 * @return UpdateAccountResponse
 */
UpdateAccountResponse Client::updateAccount(const UpdateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccountWithOptions(request, runtime);
}

/**
 * @summary Updates a custom access control policy.
 *
 * @param request UpdateControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateControlPolicyResponse
 */
UpdateControlPolicyResponse Client::updateControlPolicyWithOptions(const UpdateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.newDescription();
  }

  if (!!request.hasNewPolicyDocument()) {
    query["NewPolicyDocument"] = request.newPolicyDocument();
  }

  if (!!request.hasNewPolicyName()) {
    query["NewPolicyName"] = request.newPolicyName();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateControlPolicy"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateControlPolicyResponse>();
}

/**
 * @summary Updates a custom access control policy.
 *
 * @param request UpdateControlPolicyRequest
 * @return UpdateControlPolicyResponse
 */
UpdateControlPolicyResponse Client::updateControlPolicy(const UpdateControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Changes the name of a folder.
 *
 * @param request UpdateFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolderWithOptions(const UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["FolderId"] = request.folderId();
  }

  if (!!request.hasNewFolderName()) {
    query["NewFolderName"] = request.newFolderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFolder"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFolderResponse>();
}

/**
 * @summary Changes the name of a folder.
 *
 * @param request UpdateFolderRequest
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolder(const UpdateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFolderWithOptions(request, runtime);
}

/**
 * @summary Updates a contact.
 *
 * @param request UpdateMessageContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMessageContactResponse
 */
UpdateMessageContactResponse Client::updateMessageContactWithOptions(const UpdateMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasEmailAddress()) {
    query["EmailAddress"] = request.emailAddress();
  }

  if (!!request.hasMessageTypes()) {
    query["MessageTypes"] = request.messageTypes();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMessageContact"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMessageContactResponse>();
}

/**
 * @summary Updates a contact.
 *
 * @param request UpdateMessageContactRequest
 * @return UpdateMessageContactResponse
 */
UpdateMessageContactResponse Client::updateMessageContact(const UpdateMessageContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMessageContactWithOptions(request, runtime);
}

/**
 * @summary Updates the billing account of a member.
 *
 * @param request UpdatePayerForAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePayerForAccountResponse
 */
UpdatePayerForAccountResponse Client::updatePayerForAccountWithOptions(const UpdatePayerForAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasPayerAccountId()) {
    query["PayerAccountId"] = request.payerAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePayerForAccount"},
    {"version" , "2022-04-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePayerForAccountResponse>();
}

/**
 * @summary Updates the billing account of a member.
 *
 * @param request UpdatePayerForAccountRequest
 * @return UpdatePayerForAccountResponse
 */
UpdatePayerForAccountResponse Client::updatePayerForAccount(const UpdatePayerForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePayerForAccountWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419