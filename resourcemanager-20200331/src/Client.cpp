#include <darabonba/Core.hpp>
#include <alibabacloud/ResourceManager20200331.hpp>
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
using namespace AlibabaCloud::ResourceManager20200331::Models;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{

AlibabaCloud::ResourceManager20200331::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("resourcemanager", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Accepts an invitation by the invited Alibaba Cloud account by calling AcceptHandshake.
 *
 * @description After the invited Alibaba Cloud account successfully joins a resource directory, the account becomes a member of the resource directory. The resource directory uses the name of the invited Alibaba Cloud account as the display name and account name of the member by default.
 * This topic provides an example on how the invited Alibaba Cloud account `177242285274****` accepts an invitation from the resource directory `rd-3G****`. The handshake ID is `h-Ih8IuPfvV0t0****`.
 *
 * @param request AcceptHandshakeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptHandshakeResponse
 */
AcceptHandshakeResponse Client::acceptHandshakeWithOptions(const AcceptHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHandshakeId()) {
    query["HandshakeId"] = request.getHandshakeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptHandshake"},
    {"version" , "2020-03-31"},
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
 * @summary Accepts an invitation by the invited Alibaba Cloud account by calling AcceptHandshake.
 *
 * @description After the invited Alibaba Cloud account successfully joins a resource directory, the account becomes a member of the resource directory. The resource directory uses the name of the invited Alibaba Cloud account as the display name and account name of the member by default.
 * This topic provides an example on how the invited Alibaba Cloud account `177242285274****` accepts an invitation from the resource directory `rd-3G****`. The handshake ID is `h-Ih8IuPfvV0t0****`.
 *
 * @param request AcceptHandshakeRequest
 * @return AcceptHandshakeResponse
 */
AcceptHandshakeResponse Client::acceptHandshake(const AcceptHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptHandshakeWithOptions(request, runtime);
}

/**
 * @summary Attaches a control policy to a specified target.
 *
 * @description After the control policy is attached, the resource folder or member immediately becomes subject to the control policy. Make sure that the result of the attach operation is as expected to avoid affecting your business.
 * The system attaches the system policy FullAliyunAccess to resource folders and members by default.
 * A control policy takes effect on the entire node to which it is attached. A control policy attached to a parent resource folder also takes effect on its child resource folders and members.
 * Each node (resource folder or member) can have a maximum of 10 control policies attached.
 * This topic provides an example on how to attach the custom policy `cp-jExXAqIYkwHN****` to the resource folder `fd-ZDNPiT****`.
 *
 * @param request AttachControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachControlPolicyResponse
 */
AttachControlPolicyResponse Client::attachControlPolicyWithOptions(const AttachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Attaches a control policy to a specified target.
 *
 * @description After the control policy is attached, the resource folder or member immediately becomes subject to the control policy. Make sure that the result of the attach operation is as expected to avoid affecting your business.
 * The system attaches the system policy FullAliyunAccess to resource folders and members by default.
 * A control policy takes effect on the entire node to which it is attached. A control policy attached to a parent resource folder also takes effect on its child resource folders and members.
 * Each node (resource folder or member) can have a maximum of 10 control policies attached.
 * This topic provides an example on how to attach the custom policy `cp-jExXAqIYkwHN****` to the resource folder `fd-ZDNPiT****`.
 *
 * @param request AttachControlPolicyRequest
 * @return AttachControlPolicyResponse
 */
AttachControlPolicyResponse Client::attachControlPolicy(const AttachControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Invokes AttachPolicy to add an access policy to an authorization object (a Resource Access Management (RAM) user, RAM user group, or RAM role), which is authorization. After the authorization is complete, the authorized object obtains access permissions on resources within the specified resource group or Alibaba Cloud account.
 *
 * @param request AttachPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicyResponse
 */
AttachPolicyResponse Client::attachPolicyWithOptions(const AttachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasPrincipalName()) {
    query["PrincipalName"] = request.getPrincipalName();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachPolicy"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachPolicyResponse>();
}

/**
 * @summary Invokes AttachPolicy to add an access policy to an authorization object (a Resource Access Management (RAM) user, RAM user group, or RAM role), which is authorization. After the authorization is complete, the authorized object obtains access permissions on resources within the specified resource group or Alibaba Cloud account.
 *
 * @param request AttachPolicyRequest
 * @return AttachPolicyResponse
 */
AttachPolicyResponse Client::attachPolicy(const AttachPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicyWithOptions(request, runtime);
}

/**
 * @summary Sets a secure phone number for a member of the resource account type.
 *
 * @description This API operation is used only to set a secure phone number for a resource account for the first time. It cannot be used to modify an existing secure phone number.
 * To ensure that the system can record the specific author of management operations, use a Resource Access Management (RAM) user or RAM role under the management account that has the resource folder management permission (AliyunResourceDirectoryFullAccess) to invoke this API operation.
 * This topic provides an example of how to set a secure phone number for the member `138660628348****`.
 *
 * @param request BindSecureMobilePhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindSecureMobilePhoneResponse
 */
BindSecureMobilePhoneResponse Client::bindSecureMobilePhoneWithOptions(const BindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasSecureMobilePhone()) {
    query["SecureMobilePhone"] = request.getSecureMobilePhone();
  }

  if (!!request.hasVerificationCode()) {
    query["VerificationCode"] = request.getVerificationCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindSecureMobilePhone"},
    {"version" , "2020-03-31"},
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
 * @summary Sets a secure phone number for a member of the resource account type.
 *
 * @description This API operation is used only to set a secure phone number for a resource account for the first time. It cannot be used to modify an existing secure phone number.
 * To ensure that the system can record the specific author of management operations, use a Resource Access Management (RAM) user or RAM role under the management account that has the resource folder management permission (AliyunResourceDirectoryFullAccess) to invoke this API operation.
 * This topic provides an example of how to set a secure phone number for the member `138660628348****`.
 *
 * @param request BindSecureMobilePhoneRequest
 * @return BindSecureMobilePhoneResponse
 */
BindSecureMobilePhoneResponse Client::bindSecureMobilePhone(const BindSecureMobilePhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindSecureMobilePhoneWithOptions(request, runtime);
}

/**
 * @summary Cancels the modification of a member account email address.
 *
 * @param request CancelChangeAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelChangeAccountEmailResponse
 */
CancelChangeAccountEmailResponse Client::cancelChangeAccountEmailWithOptions(const CancelChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelChangeAccountEmail"},
    {"version" , "2020-03-31"},
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
 * @summary Cancels the modification of a member account email address.
 *
 * @param request CancelChangeAccountEmailRequest
 * @return CancelChangeAccountEmailResponse
 */
CancelChangeAccountEmailResponse Client::cancelChangeAccountEmail(const CancelChangeAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelChangeAccountEmailWithOptions(request, runtime);
}

/**
 * @summary Cancels the creation of a member of the cloud account type in a resource directory.
 *
 * @param request CancelCreateCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCreateCloudAccountResponse
 */
CancelCreateCloudAccountResponse Client::cancelCreateCloudAccountWithOptions(const CancelCreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCreateCloudAccount"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCreateCloudAccountResponse>();
}

/**
 * @summary Cancels the creation of a member of the cloud account type in a resource directory.
 *
 * @param request CancelCreateCloudAccountRequest
 * @return CancelCreateCloudAccountResponse
 */
CancelCreateCloudAccountResponse Client::cancelCreateCloudAccount(const CancelCreateCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCreateCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Cancels a handshake.
 *
 * @description This topic provides an example on how to cancel the handshake whose ID is `h-ycm4rp****`.
 *
 * @param request CancelHandshakeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelHandshakeResponse
 */
CancelHandshakeResponse Client::cancelHandshakeWithOptions(const CancelHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHandshakeId()) {
    query["HandshakeId"] = request.getHandshakeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelHandshake"},
    {"version" , "2020-03-31"},
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
 * @summary Cancels a handshake.
 *
 * @description This topic provides an example on how to cancel the handshake whose ID is `h-ycm4rp****`.
 *
 * @param request CancelHandshakeRequest
 * @return CancelHandshakeResponse
 */
CancelHandshakeResponse Client::cancelHandshake(const CancelHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelHandshakeWithOptions(request, runtime);
}

/**
 * @summary Cancels the upgrade of a resource directory resource account to an Alibaba Cloud account.
 *
 * @param request CancelPromoteResourceAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPromoteResourceAccountResponse
 */
CancelPromoteResourceAccountResponse Client::cancelPromoteResourceAccountWithOptions(const CancelPromoteResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelPromoteResourceAccount"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelPromoteResourceAccountResponse>();
}

/**
 * @summary Cancels the upgrade of a resource directory resource account to an Alibaba Cloud account.
 *
 * @param request CancelPromoteResourceAccountRequest
 * @return CancelPromoteResourceAccountResponse
 */
CancelPromoteResourceAccountResponse Client::cancelPromoteResourceAccount(const CancelPromoteResourceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPromoteResourceAccountWithOptions(request, runtime);
}

/**
 * @summary Modifies the email address of a member account by calling ChangeAccountEmail.
 *
 * @param request ChangeAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeAccountEmailResponse
 */
ChangeAccountEmailResponse Client::changeAccountEmailWithOptions(const ChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeAccountEmail"},
    {"version" , "2020-03-31"},
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
 * @summary Modifies the email address of a member account by calling ChangeAccountEmail.
 *
 * @param request ChangeAccountEmailRequest
 * @return ChangeAccountEmailResponse
 */
ChangeAccountEmailResponse Client::changeAccountEmail(const ChangeAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeAccountEmailWithOptions(request, runtime);
}

/**
 * @summary Calls CheckAccountDelete to perform a member account deletion check task.
 *
 * @description Before deleting a member account, call this API to perform a pre-deletion condition check on the target member account.
 *
 * @param request CheckAccountDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccountDeleteResponse
 */
CheckAccountDeleteResponse Client::checkAccountDeleteWithOptions(const CheckAccountDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAccountDelete"},
    {"version" , "2020-03-31"},
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
 * @summary Calls CheckAccountDelete to perform a member account deletion check task.
 *
 * @description Before deleting a member account, call this API to perform a pre-deletion condition check on the target member account.
 *
 * @param request CheckAccountDeleteRequest
 * @return CheckAccountDeleteResponse
 */
CheckAccountDeleteResponse Client::checkAccountDelete(const CheckAccountDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountDeleteWithOptions(request, runtime);
}

/**
 * @summary Creates an automatic allocation rule by calling CreateAutoGroupingRule. Two types are supported: custom allocation rules and attached-resource allocation rules.
 *
 * @description You can create up to 10 custom allocation rules, and each custom allocation rule supports up to 10 rule content entries.
 *
 * @param request CreateAutoGroupingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoGroupingRuleResponse
 */
CreateAutoGroupingRuleResponse Client::createAutoGroupingRuleWithOptions(const CreateAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExcludeRegionIdsScope()) {
    query["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    query["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    query["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  if (!!request.hasExcludeResourceTypesScope()) {
    query["ExcludeResourceTypesScope"] = request.getExcludeResourceTypesScope();
  }

  if (!!request.hasRegionIdsScope()) {
    query["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    query["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    query["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasResourceTypesScope()) {
    query["ResourceTypesScope"] = request.getResourceTypesScope();
  }

  if (!!request.hasRuleContents()) {
    query["RuleContents"] = request.getRuleContents();
  }

  if (!!request.hasRuleDesc()) {
    query["RuleDesc"] = request.getRuleDesc();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAutoGroupingRule"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoGroupingRuleResponse>();
}

/**
 * @summary Creates an automatic allocation rule by calling CreateAutoGroupingRule. Two types are supported: custom allocation rules and attached-resource allocation rules.
 *
 * @description You can create up to 10 custom allocation rules, and each custom allocation rule supports up to 10 rule content entries.
 *
 * @param request CreateAutoGroupingRuleRequest
 * @return CreateAutoGroupingRuleResponse
 */
CreateAutoGroupingRuleResponse Client::createAutoGroupingRule(const CreateAutoGroupingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoGroupingRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a member of the cloud account type in a resource directory.
 *
 * @description A resource directory contains two types of members: resource accounts and cloud accounts. 
 * - Resource account (recommended): A resource account serves only as a resource container and fully depends on the resource directory. It is a more secure account type that is easier to create. To create a resource account type member, see [CreateResourceAccount](https://help.aliyun.com/document_detail/159392.html). 
 * > A resource account can also be upgraded to a cloud account. For more information, see [PromoteResourceAccount](https://help.aliyun.com/document_detail/159395.html).
 * - Cloud account: A cloud account has all the features of an Alibaba Cloud account, including root logon access.
 *
 * @param request CreateCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudAccountResponse
 */
CreateCloudAccountResponse Client::createCloudAccountWithOptions(const CreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.getParentFolderId();
  }

  if (!!request.hasPayerAccountId()) {
    query["PayerAccountId"] = request.getPayerAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudAccount"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudAccountResponse>();
}

/**
 * @summary Creates a member of the cloud account type in a resource directory.
 *
 * @description A resource directory contains two types of members: resource accounts and cloud accounts. 
 * - Resource account (recommended): A resource account serves only as a resource container and fully depends on the resource directory. It is a more secure account type that is easier to create. To create a resource account type member, see [CreateResourceAccount](https://help.aliyun.com/document_detail/159392.html). 
 * > A resource account can also be upgraded to a cloud account. For more information, see [PromoteResourceAccount](https://help.aliyun.com/document_detail/159395.html).
 * - Cloud account: A cloud account has all the features of an Alibaba Cloud account, including root logon access.
 *
 * @param request CreateCloudAccountRequest
 * @return CreateCloudAccountResponse
 */
CreateCloudAccountResponse Client::createCloudAccount(const CreateCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Calls CreateControlPolicy to create a custom control policy.
 *
 * @description This topic provides an example on how to create a control policy named `ExampleControlPolicy` that prohibits modifications to the ResourceDirectoryAccountAccessRole role and its permissions.
 *
 * @param request CreateControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateControlPolicyResponse
 */
CreateControlPolicyResponse Client::createControlPolicyWithOptions(const CreateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEffectScope()) {
    query["EffectScope"] = request.getEffectScope();
  }

  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.getPolicyDocument();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Calls CreateControlPolicy to create a custom control policy.
 *
 * @description This topic provides an example on how to create a control policy named `ExampleControlPolicy` that prohibits modifications to the ResourceDirectoryAccountAccessRole role and its permissions.
 *
 * @param request CreateControlPolicyRequest
 * @return CreateControlPolicyResponse
 */
CreateControlPolicyResponse Client::createControlPolicy(const CreateControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a resource folder by calling CreateFolder.
 *
 * @description > You can create a maximum of five levels of resource folders.
 * This topic provides an example of how to create a resource folder named `rdFolder` under the Root folder.
 *
 * @param request CreateFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolderWithOptions(const CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderName()) {
    query["FolderName"] = request.getFolderName();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.getParentFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFolder"},
    {"version" , "2020-03-31"},
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
 * @summary Creates a resource folder by calling CreateFolder.
 *
 * @description > You can create a maximum of five levels of resource folders.
 * This topic provides an example of how to create a resource folder named `rdFolder` under the Root folder.
 *
 * @param request CreateFolderRequest
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolder(const CreateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFolderWithOptions(request, runtime);
}

/**
 * @summary Creates an access policy.
 *
 * @param request CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.getPolicyDocument();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Creates an access policy.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a version of an access policy by calling CreatePolicyVersion.
 *
 * @param request CreatePolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyVersionResponse
 */
CreatePolicyVersionResponse Client::createPolicyVersionWithOptions(const CreatePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.getPolicyDocument();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasSetAsDefault()) {
    query["SetAsDefault"] = request.getSetAsDefault();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicyVersion"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyVersionResponse>();
}

/**
 * @summary Creates a version of an access policy by calling CreatePolicyVersion.
 *
 * @param request CreatePolicyVersionRequest
 * @return CreatePolicyVersionResponse
 */
CreatePolicyVersionResponse Client::createPolicyVersion(const CreatePolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Creates a member of the resource account type by calling CreateResourceAccount.
 *
 * @description In a resource directory, a member serves as a resource container and is a resource grouping unit. A member typically represents a project or application. Resources in each member are physically isolated from resources in other members.
 *
 * @param request CreateResourceAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceAccountResponse
 */
CreateResourceAccountResponse Client::createResourceAccountWithOptions(const CreateResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountNamePrefix()) {
    query["AccountNamePrefix"] = request.getAccountNamePrefix();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.getParentFolderId();
  }

  if (!!request.hasPayerAccountId()) {
    query["PayerAccountId"] = request.getPayerAccountId();
  }

  if (!!request.hasResellAccountType()) {
    query["ResellAccountType"] = request.getResellAccountType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateResourceAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Creates a member of the resource account type by calling CreateResourceAccount.
 *
 * @description In a resource directory, a member serves as a resource container and is a resource grouping unit. A member typically represents a project or application. Resources in each member are physically isolated from resources in other members.
 *
 * @param request CreateResourceAccountRequest
 * @return CreateResourceAccountResponse
 */
CreateResourceAccountResponse Client::createResourceAccount(const CreateResourceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a resource group.
 *
 * @description > You can create a maximum of 30 resource groups within an Alibaba Cloud account.
 *
 * @param request CreateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroupWithOptions(const CreateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateResourceGroup"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceGroupResponse>();
}

/**
 * @summary Creates a resource group.
 *
 * @description > You can create a maximum of 30 resource groups within an Alibaba Cloud account.
 *
 * @param request CreateResourceGroupRequest
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroup(const CreateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a role by calling CreateRole.
 *
 * @param request CreateRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRoleWithOptions(const CreateRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssumeRolePolicyDocument()) {
    query["AssumeRolePolicyDocument"] = request.getAssumeRolePolicyDocument();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasMaxSessionDuration()) {
    query["MaxSessionDuration"] = request.getMaxSessionDuration();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRole"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoleResponse>();
}

/**
 * @summary Creates a role by calling CreateRole.
 *
 * @param request CreateRoleRequest
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRole(const CreateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRoleWithOptions(const CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomSuffix()) {
    query["CustomSuffix"] = request.getCustomSuffix();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleResponse>();
}

/**
 * @summary Creates a service-linked role.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Declines a handshake invitation by the invited Alibaba Cloud account.
 *
 * @param request DeclineHandshakeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeclineHandshakeResponse
 */
DeclineHandshakeResponse Client::declineHandshakeWithOptions(const DeclineHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHandshakeId()) {
    query["HandshakeId"] = request.getHandshakeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeclineHandshake"},
    {"version" , "2020-03-31"},
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
 * @summary Declines a handshake invitation by the invited Alibaba Cloud account.
 *
 * @param request DeclineHandshakeRequest
 * @return DeclineHandshakeResponse
 */
DeclineHandshakeResponse Client::declineHandshake(const DeclineHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return declineHandshakeWithOptions(request, runtime);
}

/**
 * @summary Deletes a member of the resource account type by calling DeleteAccount.
 *
 * @description Before deleting a member, call [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) and [GetAccountDeletionCheckResult](https://help.aliyun.com/document_detail/448775.html) to perform a pre-deletion check on the member. Only members that meet the deletion conditions can be successfully deleted by calling DeleteAccount.
 * After you successfully submit a member deletion request, you can call [GetAccountDeletionStatus](https://help.aliyun.com/document_detail/449001.html) to query the deletion status. Once a member is deleted, all resources and data in the member are deleted. You can no longer log on to or use the member, and the data cannot be recovered. Proceed with caution. For more information about member deletion, see [Delete a member of the resource account type](https://help.aliyun.com/document_detail/446078.html).
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
    request.setAbandonableCheckIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAbandonableCheckId(), "AbandonableCheckId", "json"));
  }

  json query = {};
  if (!!request.hasAbandonableCheckIdShrink()) {
    query["AbandonableCheckId"] = request.getAbandonableCheckIdShrink();
  }

  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Deletes a member of the resource account type by calling DeleteAccount.
 *
 * @description Before deleting a member, call [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) and [GetAccountDeletionCheckResult](https://help.aliyun.com/document_detail/448775.html) to perform a pre-deletion check on the member. Only members that meet the deletion conditions can be successfully deleted by calling DeleteAccount.
 * After you successfully submit a member deletion request, you can call [GetAccountDeletionStatus](https://help.aliyun.com/document_detail/449001.html) to query the deletion status. Once a member is deleted, all resources and data in the member are deleted. You can no longer log on to or use the member, and the data cannot be recovered. Proceed with caution. For more information about member deletion, see [Delete a member of the resource account type](https://help.aliyun.com/document_detail/446078.html).
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes an automatic group transfer rule.
 *
 * @param request DeleteAutoGroupingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoGroupingRuleResponse
 */
DeleteAutoGroupingRuleResponse Client::deleteAutoGroupingRuleWithOptions(const DeleteAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoGroupingRule"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoGroupingRuleResponse>();
}

/**
 * @summary Deletes an automatic group transfer rule.
 *
 * @param request DeleteAutoGroupingRuleRequest
 * @return DeleteAutoGroupingRuleResponse
 */
DeleteAutoGroupingRuleResponse Client::deleteAutoGroupingRule(const DeleteAutoGroupingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoGroupingRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom control policy.
 *
 * @description To delete a custom control policy that is attached to a resource folder or member accounts, invoke [DetachControlPolicy](https://help.aliyun.com/document_detail/208331.html) to detach the policy first.
 * This topic provides an example on how to delete the custom control policy cp-SImPt8GCEwiq****.
 *
 * @param request DeleteControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteControlPolicyResponse
 */
DeleteControlPolicyResponse Client::deleteControlPolicyWithOptions(const DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Deletes a custom control policy.
 *
 * @description To delete a custom control policy that is attached to a resource folder or member accounts, invoke [DetachControlPolicy](https://help.aliyun.com/document_detail/208331.html) to detach the policy first.
 * This topic provides an example on how to delete the custom control policy cp-SImPt8GCEwiq****.
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
 * @description > Before deleting a folder, make sure that the folder does not contain any member accounts or subfolders.
 *
 * @param request DeleteFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolderWithOptions(const DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["FolderId"] = request.getFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFolder"},
    {"version" , "2020-03-31"},
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
 * @description > Before deleting a folder, make sure that the folder does not contain any member accounts or subfolders.
 *
 * @param request DeleteFolderRequest
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolder(const DeleteFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFolderWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified access policy.
 *
 * @description > - Before deleting an access policy, delete all non-default versions of the policy. For information about how to delete a policy version, see [DeletePolicyVersion](https://help.aliyun.com/document_detail/159041.html).
 * > - Before deleting an access policy, make sure that the policy is not referenced, meaning it is not attached to any Resource Access Management (RAM) user, user group, or RAM role. For information about how to remove an authorization, see [DetachPolicy](https://help.aliyun.com/document_detail/159168.html).
 *
 * @param request DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Deletes a specified access policy.
 *
 * @description > - Before deleting an access policy, delete all non-default versions of the policy. For information about how to delete a policy version, see [DeletePolicyVersion](https://help.aliyun.com/document_detail/159041.html).
 * > - Before deleting an access policy, make sure that the policy is not referenced, meaning it is not attached to any Resource Access Management (RAM) user, user group, or RAM role. For information about how to remove an authorization, see [DetachPolicy](https://help.aliyun.com/document_detail/159168.html).
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a version of an access policy.
 *
 * @description > The default version of an access policy cannot be deleted.
 *
 * @param request DeletePolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyVersionResponse
 */
DeletePolicyVersionResponse Client::deletePolicyVersionWithOptions(const DeletePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicyVersion"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyVersionResponse>();
}

/**
 * @summary Deletes a version of an access policy.
 *
 * @description > The default version of an access policy cannot be deleted.
 *
 * @param request DeletePolicyVersionRequest
 * @return DeletePolicyVersionResponse
 */
DeletePolicyVersionResponse Client::deletePolicyVersion(const DeletePolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource group.
 *
 * @description > Before you delete a resource group, delete all resources in the resource group.
 *
 * @param request DeleteResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroupWithOptions(const DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceGroup"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceGroupResponse>();
}

/**
 * @summary Deletes a resource group.
 *
 * @description > Before you delete a resource group, delete all resources in the resource group.
 *
 * @param request DeleteResourceGroupRequest
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroup(const DeleteResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a role.
 *
 * @param request DeleteRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRoleWithOptions(const DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRole"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoleResponse>();
}

/**
 * @summary Deletes a role.
 *
 * @param request DeleteRoleRequest
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRole(const DeleteRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoleWithOptions(request, runtime);
}

/**
 * @summary Deletes a service-linked role.
 *
 * @param request DeleteServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceLinkedRoleResponse
 */
DeleteServiceLinkedRoleResponse Client::deleteServiceLinkedRoleWithOptions(const DeleteServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceLinkedRole"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceLinkedRoleResponse>();
}

/**
 * @summary Deletes a service-linked role.
 *
 * @param request DeleteServiceLinkedRoleRequest
 * @return DeleteServiceLinkedRoleResponse
 */
DeleteServiceLinkedRoleResponse Client::deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Calls the DeregisterDelegatedAdministrator operation to remove the delegated administrator account of a trusted service.
 *
 * @description > If the delegated administrator account being removed has historical management tasks in the trusted service, the removal may affect the normal use of the trusted service. Carefully consider the potential impact before performing the removal.
 *
 * @param request DeregisterDelegatedAdministratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeregisterDelegatedAdministratorResponse
 */
DeregisterDelegatedAdministratorResponse Client::deregisterDelegatedAdministratorWithOptions(const DeregisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasServicePrincipal()) {
    query["ServicePrincipal"] = request.getServicePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeregisterDelegatedAdministrator"},
    {"version" , "2020-03-31"},
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
 * @summary Calls the DeregisterDelegatedAdministrator operation to remove the delegated administrator account of a trusted service.
 *
 * @description > If the delegated administrator account being removed has historical management tasks in the trusted service, the removal may affect the normal use of the trusted service. Carefully consider the potential impact before performing the removal.
 *
 * @param request DeregisterDelegatedAdministratorRequest
 * @return DeregisterDelegatedAdministratorResponse
 */
DeregisterDelegatedAdministratorResponse Client::deregisterDelegatedAdministrator(const DeregisterDelegatedAdministratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deregisterDelegatedAdministratorWithOptions(request, runtime);
}

/**
 * @summary Closes a resource directory by calling DestroyResourceDirectory. This operation is irreversible. Proceed with caution.
 *
 * @description Before closing a resource directory, make sure that you have completed the following operations:
 * - All members in the resource directory have been removed. For information about how to remove a member, see [RemoveCloudAccount](https://help.aliyun.com/document_detail/159431.html).
 * - All folders except the Root folder in the resource directory have been deleted. For information about how to delete a folder, see [DeleteFolder](https://help.aliyun.com/document_detail/159432.html).
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DestroyResourceDirectoryResponse
 */
DestroyResourceDirectoryResponse Client::destroyResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DestroyResourceDirectory"},
    {"version" , "2020-03-31"},
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
 * @summary Closes a resource directory by calling DestroyResourceDirectory. This operation is irreversible. Proceed with caution.
 *
 * @description Before closing a resource directory, make sure that you have completed the following operations:
 * - All members in the resource directory have been removed. For information about how to remove a member, see [RemoveCloudAccount](https://help.aliyun.com/document_detail/159431.html).
 * - All folders except the Root folder in the resource directory have been deleted. For information about how to delete a folder, see [DeleteFolder](https://help.aliyun.com/document_detail/159432.html).
 *
 * @return DestroyResourceDirectoryResponse
 */
DestroyResourceDirectoryResponse Client::destroyResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return destroyResourceDirectoryWithOptions(runtime);
}

/**
 * @summary Detaches a control policy from a resource folder or member.
 *
 * @description After the control policy is detached, the resource folder or member that was previously associated with the policy immediately loses the governance enforced by the policy. Make sure that the result of the detach operation is as expected to avoid impact on your business.
 * Both system policies and custom control policies can be detached. However, the last control policy associated with a resource folder or member cannot be detached.
 * This topic provides an example on how to detach the custom policy `cp-jExXAqIYkwHN****` from the resource folder `fd-ZDNPiT****`.
 *
 * @param request DetachControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachControlPolicyResponse
 */
DetachControlPolicyResponse Client::detachControlPolicyWithOptions(const DetachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Detaches a control policy from a resource folder or member.
 *
 * @description After the control policy is detached, the resource folder or member that was previously associated with the policy immediately loses the governance enforced by the policy. Make sure that the result of the detach operation is as expected to avoid impact on your business.
 * Both system policies and custom control policies can be detached. However, the last control policy associated with a resource folder or member cannot be detached.
 * This topic provides an example on how to detach the custom policy `cp-jExXAqIYkwHN****` from the resource folder `fd-ZDNPiT****`.
 *
 * @param request DetachControlPolicyRequest
 * @return DetachControlPolicyResponse
 */
DetachControlPolicyResponse Client::detachControlPolicy(const DetachControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Detaches an access policy from a specified identity. After the policy is detached, the identity loses the permissions to manage resources in the specified resource group or Alibaba Cloud account.
 *
 * @param request DetachPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicyResponse
 */
DetachPolicyResponse Client::detachPolicyWithOptions(const DetachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasPrincipalName()) {
    query["PrincipalName"] = request.getPrincipalName();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachPolicy"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachPolicyResponse>();
}

/**
 * @summary Detaches an access policy from a specified identity. After the policy is detached, the identity loses the permissions to manage resources in the specified resource group or Alibaba Cloud account.
 *
 * @param request DetachPolicyRequest
 * @return DetachPolicyResponse
 */
DetachPolicyResponse Client::detachPolicy(const DetachPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicyWithOptions(request, runtime);
}

/**
 * @summary Disables the attached-resource allocation feature for associated resources.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAssociatedTransferResponse
 */
DisableAssociatedTransferResponse Client::disableAssociatedTransferWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisableAssociatedTransfer"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAssociatedTransferResponse>();
}

/**
 * @summary Disables the attached-resource allocation feature for associated resources.
 *
 * @return DisableAssociatedTransferResponse
 */
DisableAssociatedTransferResponse Client::disableAssociatedTransfer() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAssociatedTransferWithOptions(runtime);
}

/**
 * @summary Disables automatic resource group transfer. After this feature is disabled, the custom condition rules and attached-resource transfer rules that have been configured are deleted. The resource groups of existing resources are not affected. If needed, you can re-enable this feature 1 minute after disabling it.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAutoGroupingResponse
 */
DisableAutoGroupingResponse Client::disableAutoGroupingWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisableAutoGrouping"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAutoGroupingResponse>();
}

/**
 * @summary Disables automatic resource group transfer. After this feature is disabled, the custom condition rules and attached-resource transfer rules that have been configured are deleted. The resource groups of existing resources are not affected. If needed, you can re-enable this feature 1 minute after disabling it.
 *
 * @return DisableAutoGroupingResponse
 */
DisableAutoGroupingResponse Client::disableAutoGrouping() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAutoGroupingWithOptions(runtime);
}

/**
 * @summary Disables the control policy feature.
 *
 * @description After you disable the control policy feature, all control policies that are attached to resource folders and member accounts are automatically detached. However, the control policies are not deleted. They cannot be attached to any target nodes.
 * > Disabling the control policy feature affects the permissions of resource folders and member accounts in the entire resource directory. Proceed with caution.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableControlPolicyResponse
 */
DisableControlPolicyResponse Client::disableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisableControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Disables the control policy feature.
 *
 * @description After you disable the control policy feature, all control policies that are attached to resource folders and member accounts are automatically detached. However, the control policies are not deleted. They cannot be attached to any target nodes.
 * > Disabling the control policy feature affects the permissions of resource folders and member accounts in the entire resource directory. Proceed with caution.
 *
 * @return DisableControlPolicyResponse
 */
DisableControlPolicyResponse Client::disableControlPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableControlPolicyWithOptions(runtime);
}

/**
 * @summary Disables a resource group event notification that is currently enabled. If the notification is already disabled, the error code `UnsupportedOperation.RepeatDisableResourceGroupNotification` is returned. You can call `EnableResourceGroupNotification` to enable the notification first.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableResourceGroupNotificationResponse
 */
DisableResourceGroupNotificationResponse Client::disableResourceGroupNotificationWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DisableResourceGroupNotification"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableResourceGroupNotificationResponse>();
}

/**
 * @summary Disables a resource group event notification that is currently enabled. If the notification is already disabled, the error code `UnsupportedOperation.RepeatDisableResourceGroupNotification` is returned. You can call `EnableResourceGroupNotification` to enable the notification first.
 *
 * @return DisableResourceGroupNotificationResponse
 */
DisableResourceGroupNotificationResponse Client::disableResourceGroupNotification() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableResourceGroupNotificationWithOptions(runtime);
}

/**
 * @summary Enables the attached-resource allocation feature for resource group transfers.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAssociatedTransferResponse
 */
EnableAssociatedTransferResponse Client::enableAssociatedTransferWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableAssociatedTransfer"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAssociatedTransferResponse>();
}

/**
 * @summary Enables the attached-resource allocation feature for resource group transfers.
 *
 * @return EnableAssociatedTransferResponse
 */
EnableAssociatedTransferResponse Client::enableAssociatedTransfer() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAssociatedTransferWithOptions(runtime);
}

/**
 * @summary Enables automatic grouping. After automatic grouping is enabled, you can create, update, delete, and query automatic grouping rules.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAutoGroupingResponse
 */
EnableAutoGroupingResponse Client::enableAutoGroupingWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableAutoGrouping"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAutoGroupingResponse>();
}

/**
 * @summary Enables automatic grouping. After automatic grouping is enabled, you can create, update, delete, and query automatic grouping rules.
 *
 * @return EnableAutoGroupingResponse
 */
EnableAutoGroupingResponse Client::enableAutoGrouping() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAutoGroupingWithOptions(runtime);
}

/**
 * @summary Enables the control policy feature by calling EnableControlPolicy.
 *
 * @description A resource directory control policy is an access control policy based on the resource structure (resource folders or member accounts). It allows you to centrally manage the access permissions border for resource access at each level of the resource directory and establish overall or localized access control principles for your enterprise. Control policies define only the access permissions border and do not actually grant permissions. You must also set permissions by using Resource Access Management (RAM) in a member account before the corresponding identity can have access permissions to resources. For more information, see [Overview of control policies](https://help.aliyun.com/document_detail/178671.html).
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableControlPolicyResponse
 */
EnableControlPolicyResponse Client::enableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Enables the control policy feature by calling EnableControlPolicy.
 *
 * @description A resource directory control policy is an access control policy based on the resource structure (resource folders or member accounts). It allows you to centrally manage the access permissions border for resource access at each level of the resource directory and establish overall or localized access control principles for your enterprise. Control policies define only the access permissions border and do not actually grant permissions. You must also set permissions by using Resource Access Management (RAM) in a member account before the corresponding identity can have access permissions to resources. For more information, see [Overview of control policies](https://help.aliyun.com/document_detail/178671.html).
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
 * @description You can enable a resource directory by using the current logon account or by creating a new management account. For more information, refer to [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
 * This topic provides an example of how to enable a resource directory by using the current logon account.
 *
 * @param request EnableResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableResourceDirectoryResponse
 */
EnableResourceDirectoryResponse Client::enableResourceDirectoryWithOptions(const EnableResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableMode()) {
    query["EnableMode"] = request.getEnableMode();
  }

  if (!!request.hasMAName()) {
    query["MAName"] = request.getMAName();
  }

  if (!!request.hasMASecureMobilePhone()) {
    query["MASecureMobilePhone"] = request.getMASecureMobilePhone();
  }

  if (!!request.hasVerificationCode()) {
    query["VerificationCode"] = request.getVerificationCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableResourceDirectory"},
    {"version" , "2020-03-31"},
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
 * @description You can enable a resource directory by using the current logon account or by creating a new management account. For more information, refer to [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
 * This topic provides an example of how to enable a resource directory by using the current logon account.
 *
 * @param request EnableResourceDirectoryRequest
 * @return EnableResourceDirectoryResponse
 */
EnableResourceDirectoryResponse Client::enableResourceDirectory(const EnableResourceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableResourceDirectoryWithOptions(request, runtime);
}

/**
 * @summary Enables resource group event notifications by calling EnableResourceGroupNotification.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableResourceGroupNotificationResponse
 */
EnableResourceGroupNotificationResponse Client::enableResourceGroupNotificationWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "EnableResourceGroupNotification"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableResourceGroupNotificationResponse>();
}

/**
 * @summary Enables resource group event notifications by calling EnableResourceGroupNotification.
 *
 * @return EnableResourceGroupNotificationResponse
 */
EnableResourceGroupNotificationResponse Client::enableResourceGroupNotification() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableResourceGroupNotificationWithOptions(runtime);
}

/**
 * @summary Calls GetAccount to retrieve member account information.
 *
 * @param request GetAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountResponse
 */
GetAccountResponse Client::getAccountWithOptions(const GetAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.getIncludeTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Calls GetAccount to retrieve member account information.
 *
 * @param request GetAccountRequest
 * @return GetAccountResponse
 */
GetAccountResponse Client::getAccount(const GetAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the result of a member deletion check by calling GetAccountDeletionCheckResult.
 *
 * @description After you call [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) to perform a member deletion check task, you can call GetAccountDeletionCheckResult to query the result of the member deletion check. If the deletion check requirements are met, the member account can be deleted. Otherwise, manually handle the non-compliant items until all requirements are met.
 * This topic provides an example on how to query the deletion check result of the member account `179855839641****` that you want to delete. The response shows that the member account does not meet the deletion requirements.
 *
 * @param request GetAccountDeletionCheckResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountDeletionCheckResultResponse
 */
GetAccountDeletionCheckResultResponse Client::getAccountDeletionCheckResultWithOptions(const GetAccountDeletionCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountDeletionCheckResult"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the result of a member deletion check by calling GetAccountDeletionCheckResult.
 *
 * @description After you call [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) to perform a member deletion check task, you can call GetAccountDeletionCheckResult to query the result of the member deletion check. If the deletion check requirements are met, the member account can be deleted. Otherwise, manually handle the non-compliant items until all requirements are met.
 * This topic provides an example on how to query the deletion check result of the member account `179855839641****` that you want to delete. The response shows that the member account does not meet the deletion requirements.
 *
 * @param request GetAccountDeletionCheckResultRequest
 * @return GetAccountDeletionCheckResultResponse
 */
GetAccountDeletionCheckResultResponse Client::getAccountDeletionCheckResult(const GetAccountDeletionCheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountDeletionCheckResultWithOptions(request, runtime);
}

/**
 * @summary Queries the deletion status of a member account.
 *
 * @description This topic provides an example on how to query the deletion status of the member account `169946124551****`. The response shows that the member account has been successfully deleted.
 *
 * @param request GetAccountDeletionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountDeletionStatusResponse
 */
GetAccountDeletionStatusResponse Client::getAccountDeletionStatusWithOptions(const GetAccountDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountDeletionStatus"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the deletion status of a member account.
 *
 * @description This topic provides an example on how to query the deletion status of the member account `169946124551****`. The response shows that the member account has been successfully deleted.
 *
 * @param request GetAccountDeletionStatusRequest
 * @return GetAccountDeletionStatusResponse
 */
GetAccountDeletionStatusResponse Client::getAccountDeletionStatus(const GetAccountDeletionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountDeletionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an automatic resource group transfer rule.
 *
 * @param request GetAutoGroupingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoGroupingRuleResponse
 */
GetAutoGroupingRuleResponse Client::getAutoGroupingRuleWithOptions(const GetAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoGroupingRule"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoGroupingRuleResponse>();
}

/**
 * @summary Queries the information about an automatic resource group transfer rule.
 *
 * @param request GetAutoGroupingRuleRequest
 * @return GetAutoGroupingRuleResponse
 */
GetAutoGroupingRuleResponse Client::getAutoGroupingRule(const GetAutoGroupingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoGroupingRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the status of automatic resource group transfer settings by calling GetAutoGroupingStatus.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoGroupingStatusResponse
 */
GetAutoGroupingStatusResponse Client::getAutoGroupingStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAutoGroupingStatus"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoGroupingStatusResponse>();
}

/**
 * @summary Queries the status of automatic resource group transfer settings by calling GetAutoGroupingStatus.
 *
 * @return GetAutoGroupingStatusResponse
 */
GetAutoGroupingStatusResponse Client::getAutoGroupingStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoGroupingStatusWithOptions(runtime);
}

/**
 * @summary Queries the details of a control policy.
 *
 * @description This topic provides an example on how to query the details of the control policy whose ID is `cp-SImPt8GCEwiq****`.
 *
 * @param request GetControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetControlPolicyResponse
 */
GetControlPolicyResponse Client::getControlPolicyWithOptions(const GetControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the details of a control policy.
 *
 * @description This topic provides an example on how to query the details of the control policy whose ID is `cp-SImPt8GCEwiq****`.
 *
 * @param request GetControlPolicyRequest
 * @return GetControlPolicyResponse
 */
GetControlPolicyResponse Client::getControlPolicy(const GetControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the enabling status of the control policy feature.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetControlPolicyEnablementStatusResponse
 */
GetControlPolicyEnablementStatusResponse Client::getControlPolicyEnablementStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetControlPolicyEnablementStatus"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the enabling status of the control policy feature.
 *
 * @return GetControlPolicyEnablementStatusResponse
 */
GetControlPolicyEnablementStatusResponse Client::getControlPolicyEnablementStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getControlPolicyEnablementStatusWithOptions(runtime);
}

/**
 * @summary Calls GetFolder to retrieve the information about a folder.
 *
 * @param request GetFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFolderResponse
 */
GetFolderResponse Client::getFolderWithOptions(const GetFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["FolderId"] = request.getFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFolder"},
    {"version" , "2020-03-31"},
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
 * @summary Calls GetFolder to retrieve the information about a folder.
 *
 * @param request GetFolderRequest
 * @return GetFolderResponse
 */
GetFolderResponse Client::getFolder(const GetFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFolderWithOptions(request, runtime);
}

/**
 * @summary Retrieves handshake information by calling GetHandshake.
 *
 * @description This topic provides an example on how to retrieve the information about the handshake whose ID is `h-ycm4rp****`.
 *
 * @param request GetHandshakeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHandshakeResponse
 */
GetHandshakeResponse Client::getHandshakeWithOptions(const GetHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHandshakeId()) {
    query["HandshakeId"] = request.getHandshakeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHandshake"},
    {"version" , "2020-03-31"},
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
 * @summary Retrieves handshake information by calling GetHandshake.
 *
 * @description This topic provides an example on how to retrieve the information about the handshake whose ID is `h-ycm4rp****`.
 *
 * @param request GetHandshakeRequest
 * @return GetHandshakeResponse
 */
GetHandshakeResponse Client::getHandshake(const GetHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHandshakeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the billing account information of a member account by calling GetPayerForAccount.
 *
 * @param request GetPayerForAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPayerForAccountResponse
 */
GetPayerForAccountResponse Client::getPayerForAccountWithOptions(const GetPayerForAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPayerForAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Retrieves the billing account information of a member account by calling GetPayerForAccount.
 *
 * @param request GetPayerForAccountRequest
 * @return GetPayerForAccountResponse
 */
GetPayerForAccountResponse Client::getPayerForAccount(const GetPayerForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPayerForAccountWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a specified access policy.
 *
 * @param request GetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicyWithOptions(const GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Retrieves information about a specified access policy.
 *
 * @param request GetPolicyRequest
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const GetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyWithOptions(request, runtime);
}

/**
 * @summary Retrieves a version of an access policy.
 *
 * @param request GetPolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyVersionResponse
 */
GetPolicyVersionResponse Client::getPolicyVersionWithOptions(const GetPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyVersion"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyVersionResponse>();
}

/**
 * @summary Retrieves a version of an access policy.
 *
 * @param request GetPolicyVersionRequest
 * @return GetPolicyVersionResponse
 */
GetPolicyVersionResponse Client::getPolicyVersion(const GetPolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Queries resource directory information. When called by a management account, returns the details of the resource directory created by the management account. When called by a member, returns the details of the resource directory to which the member belongs.
 *
 * @description This topic provides an example of how to use a management account to query the details of the resource directory created by the management account.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceDirectoryResponse
 */
GetResourceDirectoryResponse Client::getResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetResourceDirectory"},
    {"version" , "2020-03-31"},
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
 * @summary Queries resource directory information. When called by a management account, returns the details of the resource directory created by the management account. When called by a member, returns the details of the resource directory to which the member belongs.
 *
 * @description This topic provides an example of how to use a management account to query the details of the resource directory created by the management account.
 *
 * @return GetResourceDirectoryResponse
 */
GetResourceDirectoryResponse Client::getResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceDirectoryWithOptions(runtime);
}

/**
 * @summary Queries the information about a resource group.
 *
 * @param request GetResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupResponse
 */
GetResourceGroupResponse Client::getResourceGroupWithOptions(const GetResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.getIncludeTags();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceGroup"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupResponse>();
}

/**
 * @summary Queries the information about a resource group.
 *
 * @param request GetResourceGroupRequest
 * @return GetResourceGroupResponse
 */
GetResourceGroupResponse Client::getResourceGroup(const GetResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the administrator settings of a resource group.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupAdminSettingResponse
 */
GetResourceGroupAdminSettingResponse Client::getResourceGroupAdminSettingWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetResourceGroupAdminSetting"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupAdminSettingResponse>();
}

/**
 * @summary Queries the administrator settings of a resource group.
 *
 * @return GetResourceGroupAdminSettingResponse
 */
GetResourceGroupAdminSettingResponse Client::getResourceGroupAdminSetting() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupAdminSettingWithOptions(runtime);
}

/**
 * @summary Queries the notification settings of a resource group by calling GetResourceGroupNotificationSetting.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupNotificationSettingResponse
 */
GetResourceGroupNotificationSettingResponse Client::getResourceGroupNotificationSettingWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetResourceGroupNotificationSetting"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupNotificationSettingResponse>();
}

/**
 * @summary Queries the notification settings of a resource group by calling GetResourceGroupNotificationSetting.
 *
 * @return GetResourceGroupNotificationSettingResponse
 */
GetResourceGroupNotificationSettingResponse Client::getResourceGroupNotificationSetting() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupNotificationSettingWithOptions(runtime);
}

/**
 * @summary Queries the resource count in visible resource groups.
 *
 * @param request GetResourceGroupResourceCountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupResourceCountsResponse
 */
GetResourceGroupResourceCountsResponse Client::getResourceGroupResourceCountsWithOptions(const GetResourceGroupResourceCountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupByKey()) {
    query["GroupByKey"] = request.getGroupByKey();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceGroupResourceCounts"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupResourceCountsResponse>();
}

/**
 * @summary Queries the resource count in visible resource groups.
 *
 * @param request GetResourceGroupResourceCountsRequest
 * @return GetResourceGroupResourceCountsResponse
 */
GetResourceGroupResourceCountsResponse Client::getResourceGroupResourceCounts(const GetResourceGroupResourceCountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupResourceCountsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a role by calling GetRole.
 *
 * @param request GetRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRoleWithOptions(const GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRole"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoleResponse>();
}

/**
 * @summary Queries the information about a role by calling GetRole.
 *
 * @param request GetRoleRequest
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRole(const GetRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoleWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a task that deletes a service-linked role.
 *
 * @param request GetServiceLinkedRoleDeletionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceLinkedRoleDeletionStatusResponse
 */
GetServiceLinkedRoleDeletionStatusResponse Client::getServiceLinkedRoleDeletionStatusWithOptions(const GetServiceLinkedRoleDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionTaskId()) {
    query["DeletionTaskId"] = request.getDeletionTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceLinkedRoleDeletionStatus"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceLinkedRoleDeletionStatusResponse>();
}

/**
 * @summary Queries the status of a task that deletes a service-linked role.
 *
 * @param request GetServiceLinkedRoleDeletionStatusRequest
 * @return GetServiceLinkedRoleDeletionStatusResponse
 */
GetServiceLinkedRoleDeletionStatusResponse Client::getServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceLinkedRoleDeletionStatusWithOptions(request, runtime);
}

/**
 * @summary Calls InitResourceDirectory to enable a resource directory. After you enable a resource directory, the system creates a Root folder and sets the current account as the management account. The management account has all permissions to manage the resource directory.
 *
 * @description > - Use an account that has passed enterprise real-name verification to enable a resource directory. An account that has passed only individual real-name verification cannot enable a resource directory.
 * > - Use the management account only as the administrator of the resource directory. Do not purchase cloud service resources with the management account.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitResourceDirectoryResponse
 */
InitResourceDirectoryResponse Client::initResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "InitResourceDirectory"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitResourceDirectoryResponse>();
}

/**
 * @summary Calls InitResourceDirectory to enable a resource directory. After you enable a resource directory, the system creates a Root folder and sets the current account as the management account. The management account has all permissions to manage the resource directory.
 *
 * @description > - Use an account that has passed enterprise real-name verification to enable a resource directory. An account that has passed only individual real-name verification cannot enable a resource directory.
 * > - Use the management account only as the administrator of the resource directory. Do not purchase cloud service resources with the management account.
 *
 * @return InitResourceDirectoryResponse
 */
InitResourceDirectoryResponse Client::initResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initResourceDirectoryWithOptions(runtime);
}

/**
 * @summary Invites an external account to join a resource directory.
 *
 * @description This topic provides an example on how to invite the external account `someone@example.com` to join a resource directory.
 *
 * @param request InviteAccountToResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InviteAccountToResourceDirectoryResponse
 */
InviteAccountToResourceDirectoryResponse Client::inviteAccountToResourceDirectoryWithOptions(const InviteAccountToResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTargetEntity()) {
    query["TargetEntity"] = request.getTargetEntity();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InviteAccountToResourceDirectory"},
    {"version" , "2020-03-31"},
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
 * @summary Invites an external account to join a resource directory.
 *
 * @description This topic provides an example on how to invite the external account `someone@example.com` to join a resource directory.
 *
 * @param request InviteAccountToResourceDirectoryRequest
 * @return InviteAccountToResourceDirectoryResponse
 */
InviteAccountToResourceDirectoryResponse Client::inviteAccountToResourceDirectory(const InviteAccountToResourceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inviteAccountToResourceDirectoryWithOptions(request, runtime);
}

/**
 * @summary Queries the list of all member accounts in a resource directory by calling ListAccounts.
 *
 * @description The management account of the resource directory and the delegated administrator accounts of trusted services can call this operation.
 *
 * @param request ListAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountsResponse
 */
ListAccountsResponse Client::listAccountsWithOptions(const ListAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.getIncludeTags();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccounts"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the list of all member accounts in a resource directory by calling ListAccounts.
 *
 * @description The management account of the resource directory and the delegated administrator accounts of trusted services can call this operation.
 *
 * @param request ListAccountsRequest
 * @return ListAccountsResponse
 */
ListAccountsResponse Client::listAccounts(const ListAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of member accounts in a resource folder by calling ListAccountsForParent.
 *
 * @param request ListAccountsForParentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountsForParentResponse
 */
ListAccountsForParentResponse Client::listAccountsForParentWithOptions(const ListAccountsForParentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.getIncludeTags();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.getParentFolderId();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.getQueryKeyword();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccountsForParent"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the list of member accounts in a resource folder by calling ListAccountsForParent.
 *
 * @param request ListAccountsForParentRequest
 * @return ListAccountsForParentResponse
 */
ListAccountsForParentResponse Client::listAccountsForParent(const ListAccountsForParentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountsForParentWithOptions(request, runtime);
}

/**
 * @summary Queries information about all parent folders of a specified folder. The results are displayed in order from top to bottom.
 *
 * @param request ListAncestorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAncestorsResponse
 */
ListAncestorsResponse Client::listAncestorsWithOptions(const ListAncestorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildId()) {
    query["ChildId"] = request.getChildId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAncestors"},
    {"version" , "2020-03-31"},
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
 * @summary Queries information about all parent folders of a specified folder. The results are displayed in order from top to bottom.
 *
 * @param request ListAncestorsRequest
 * @return ListAncestorsResponse
 */
ListAncestorsResponse Client::listAncestors(const ListAncestorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAncestorsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the settings of the associated resource group transfer feature.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAssociatedTransferSettingResponse
 */
ListAssociatedTransferSettingResponse Client::listAssociatedTransferSettingWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListAssociatedTransferSetting"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAssociatedTransferSettingResponse>();
}

/**
 * @summary Retrieves the settings of the associated resource group transfer feature.
 *
 * @return ListAssociatedTransferSettingResponse
 */
ListAssociatedTransferSettingResponse Client::listAssociatedTransferSetting() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAssociatedTransferSettingWithOptions(runtime);
}

/**
 * @summary Lists auto-grouping remediation records.
 *
 * @param request ListAutoGroupingRemediationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoGroupingRemediationsResponse
 */
ListAutoGroupingRemediationsResponse Client::listAutoGroupingRemediationsWithOptions(const ListAutoGroupingRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEarliestRemediationTime()) {
    query["EarliestRemediationTime"] = request.getEarliestRemediationTime();
  }

  if (!!request.hasLatestRemediationTime()) {
    query["LatestRemediationTime"] = request.getLatestRemediationTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasTargetResourceGroupId()) {
    query["TargetResourceGroupId"] = request.getTargetResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAutoGroupingRemediations"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoGroupingRemediationsResponse>();
}

/**
 * @summary Lists auto-grouping remediation records.
 *
 * @param request ListAutoGroupingRemediationsRequest
 * @return ListAutoGroupingRemediationsResponse
 */
ListAutoGroupingRemediationsResponse Client::listAutoGroupingRemediations(const ListAutoGroupingRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoGroupingRemediationsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of automatic group transfer rules.
 *
 * @param request ListAutoGroupingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoGroupingRulesResponse
 */
ListAutoGroupingRulesResponse Client::listAutoGroupingRulesWithOptions(const ListAutoGroupingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAutoGroupingRules"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoGroupingRulesResponse>();
}

/**
 * @summary Queries the list of automatic group transfer rules.
 *
 * @param request ListAutoGroupingRulesRequest
 * @return ListAutoGroupingRulesResponse
 */
ListAutoGroupingRulesResponse Client::listAutoGroupingRules(const ListAutoGroupingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoGroupingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of control policies.
 *
 * @param request ListControlPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListControlPoliciesResponse
 */
ListControlPoliciesResponse Client::listControlPoliciesWithOptions(const ListControlPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListControlPolicies"},
    {"version" , "2020-03-31"},
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
 * @summary Queries a list of control policies.
 *
 * @param request ListControlPoliciesRequest
 * @return ListControlPoliciesResponse
 */
ListControlPoliciesResponse Client::listControlPolicies(const ListControlPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listControlPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of control policies attached to a resource folder or member account.
 *
 * @description This topic provides an example on how to query the list of control policies attached to the resource folder `fd-ZDNPiT****`.
 *
 * @param request ListControlPolicyAttachmentsForTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListControlPolicyAttachmentsForTargetResponse
 */
ListControlPolicyAttachmentsForTargetResponse Client::listControlPolicyAttachmentsForTargetWithOptions(const ListControlPolicyAttachmentsForTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListControlPolicyAttachmentsForTarget"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the list of control policies attached to a resource folder or member account.
 *
 * @description This topic provides an example on how to query the list of control policies attached to the resource folder `fd-ZDNPiT****`.
 *
 * @param request ListControlPolicyAttachmentsForTargetRequest
 * @return ListControlPolicyAttachmentsForTargetResponse
 */
ListControlPolicyAttachmentsForTargetResponse Client::listControlPolicyAttachmentsForTarget(const ListControlPolicyAttachmentsForTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listControlPolicyAttachmentsForTargetWithOptions(request, runtime);
}

/**
 * @summary Queries the list of delegated administrator accounts for a trusted service.
 *
 * @param request ListDelegatedAdministratorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDelegatedAdministratorsResponse
 */
ListDelegatedAdministratorsResponse Client::listDelegatedAdministratorsWithOptions(const ListDelegatedAdministratorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasServicePrincipal()) {
    query["ServicePrincipal"] = request.getServicePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDelegatedAdministrators"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the list of delegated administrator accounts for a trusted service.
 *
 * @param request ListDelegatedAdministratorsRequest
 * @return ListDelegatedAdministratorsResponse
 */
ListDelegatedAdministratorsResponse Client::listDelegatedAdministrators(const ListDelegatedAdministratorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDelegatedAdministratorsWithOptions(request, runtime);
}

/**
 * @summary Queries the trusted services for which a specified member is set as a delegated administrator account.
 *
 * @param request ListDelegatedServicesForAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDelegatedServicesForAccountResponse
 */
ListDelegatedServicesForAccountResponse Client::listDelegatedServicesForAccountWithOptions(const ListDelegatedServicesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDelegatedServicesForAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the trusted services for which a specified member is set as a delegated administrator account.
 *
 * @param request ListDelegatedServicesForAccountRequest
 * @return ListDelegatedServicesForAccountResponse
 */
ListDelegatedServicesForAccountResponse Client::listDelegatedServicesForAccount(const ListDelegatedServicesForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDelegatedServicesForAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the subfolders of a specified folder.
 *
 * @description > You can query only the subfolders at the next level of the specified folder. You cannot query subfolders at deeper levels.
 *
 * @param request ListFoldersForParentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFoldersForParentResponse
 */
ListFoldersForParentResponse Client::listFoldersForParentWithOptions(const ListFoldersForParentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.getParentFolderId();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.getQueryKeyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFoldersForParent"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the subfolders of a specified folder.
 *
 * @description > You can query only the subfolders at the next level of the specified folder. You cannot query subfolders at deeper levels.
 *
 * @param request ListFoldersForParentRequest
 * @return ListFoldersForParentResponse
 */
ListFoldersForParentResponse Client::listFoldersForParent(const ListFoldersForParentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFoldersForParentWithOptions(request, runtime);
}

/**
 * @summary Queries the invitation records under the current account.
 *
 * @description This topic provides an example on how to query the invitation records of the current management account `172841235500****`.
 *
 * @param request ListHandshakesForAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHandshakesForAccountResponse
 */
ListHandshakesForAccountResponse Client::listHandshakesForAccountWithOptions(const ListHandshakesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHandshakesForAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the invitation records under the current account.
 *
 * @description This topic provides an example on how to query the invitation records of the current management account `172841235500****`.
 *
 * @param request ListHandshakesForAccountRequest
 * @return ListHandshakesForAccountResponse
 */
ListHandshakesForAccountResponse Client::listHandshakesForAccount(const ListHandshakesForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHandshakesForAccountWithOptions(request, runtime);
}

/**
 * @summary Queries all invitations in a resource directory.
 *
 * @param request ListHandshakesForResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHandshakesForResourceDirectoryResponse
 */
ListHandshakesForResourceDirectoryResponse Client::listHandshakesForResourceDirectoryWithOptions(const ListHandshakesForResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHandshakesForResourceDirectory"},
    {"version" , "2020-03-31"},
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
 * @summary Queries all invitations in a resource directory.
 *
 * @param request ListHandshakesForResourceDirectoryRequest
 * @return ListHandshakesForResourceDirectoryResponse
 */
ListHandshakesForResourceDirectoryResponse Client::listHandshakesForResourceDirectory(const ListHandshakesForResourceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHandshakesForResourceDirectoryWithOptions(request, runtime);
}

/**
 * @summary Calls ListPolicies to query a list of access policies.
 *
 * @param request ListPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicies"},
    {"version" , "2020-03-31"},
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
 * @summary Calls ListPolicies to query a list of access policies.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of policy attachments by calling ListPolicyAttachments.
 *
 * @description You can query the following information:
 * - All authorization records under an Alibaba Cloud account or a resource group.
 * - All access policies granted to a Resource Access Management (RAM) user, RAM user group, or RAM role.
 * - RAM users, RAM user groups, and RAM roles that have a specific permission under an Alibaba Cloud account or a resource group.
 *
 * @param request ListPolicyAttachmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyAttachmentsResponse
 */
ListPolicyAttachmentsResponse Client::listPolicyAttachmentsWithOptions(const ListPolicyAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
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

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasPrincipalName()) {
    query["PrincipalName"] = request.getPrincipalName();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicyAttachments"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicyAttachmentsResponse>();
}

/**
 * @summary Queries the list of policy attachments by calling ListPolicyAttachments.
 *
 * @description You can query the following information:
 * - All authorization records under an Alibaba Cloud account or a resource group.
 * - All access policies granted to a Resource Access Management (RAM) user, RAM user group, or RAM role.
 * - RAM users, RAM user groups, and RAM roles that have a specific permission under an Alibaba Cloud account or a resource group.
 *
 * @param request ListPolicyAttachmentsRequest
 * @return ListPolicyAttachmentsResponse
 */
ListPolicyAttachmentsResponse Client::listPolicyAttachments(const ListPolicyAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyAttachmentsWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of an access policy.
 *
 * @param request ListPolicyVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyVersionsResponse
 */
ListPolicyVersionsResponse Client::listPolicyVersionsWithOptions(const ListPolicyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicyVersions"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicyVersionsResponse>();
}

/**
 * @summary Queries the versions of an access policy.
 *
 * @param request ListPolicyVersionsRequest
 * @return ListPolicyVersionsResponse
 */
ListPolicyVersionsResponse Client::listPolicyVersions(const ListPolicyVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyVersionsWithOptions(request, runtime);
}

/**
 * @summary Lists the capability items of resource groups.
 *
 * @param request ListResourceGroupCapabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupCapabilityResponse
 */
ListResourceGroupCapabilityResponse Client::listResourceGroupCapabilityWithOptions(const ListResourceGroupCapabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  if (!!request.hasSupportResourceGroupEvent()) {
    query["SupportResourceGroupEvent"] = request.getSupportResourceGroupEvent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroupCapability"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupCapabilityResponse>();
}

/**
 * @summary Lists the capability items of resource groups.
 *
 * @param request ListResourceGroupCapabilityRequest
 * @return ListResourceGroupCapabilityResponse
 */
ListResourceGroupCapabilityResponse Client::listResourceGroupCapability(const ListResourceGroupCapabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupCapabilityWithOptions(request, runtime);
}

/**
 * @summary Queries the list of resource groups.
 *
 * @description You can call this operation to query all resource groups under the current account. You can also filter resource groups by resource group status, resource group ID, resource group identifier, or resource group display name.
 *
 * @param request ListResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroupsWithOptions(const ListResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.getIncludeTags();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroups"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupsResponse>();
}

/**
 * @summary Queries the list of resource groups.
 *
 * @description You can call this operation to query all resource groups under the current account. You can also filter resource groups by resource group status, resource group ID, resource group identifier, or resource group display name.
 *
 * @param request ListResourceGroupsRequest
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroups(const ListResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary Lists resource groups along with user authorization details.
 *
 * @param request ListResourceGroupsWithAuthDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupsWithAuthDetailsResponse
 */
ListResourceGroupsWithAuthDetailsResponse Client::listResourceGroupsWithAuthDetailsWithOptions(const ListResourceGroupsWithAuthDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.getIncludeTags();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroupsWithAuthDetails"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupsWithAuthDetailsResponse>();
}

/**
 * @summary Lists resource groups along with user authorization details.
 *
 * @param request ListResourceGroupsWithAuthDetailsRequest
 * @return ListResourceGroupsWithAuthDetailsResponse
 */
ListResourceGroupsWithAuthDetailsResponse Client::listResourceGroupsWithAuthDetails(const ListResourceGroupsWithAuthDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupsWithAuthDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the resources in the resource groups accessible to the current account.
 *
 * @description > This API can be called by assuming a RAM role, but session policies for the role are not supported.
 *
 * @param request ListResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResourcesWithOptions(const ListResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasService()) {
    query["Service"] = request.getService();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResources"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesResponse>();
}

/**
 * @summary Queries the resources in the resource groups accessible to the current account.
 *
 * @description > This API can be called by assuming a RAM role, but session policies for the role are not supported.
 *
 * @param request ListResourcesRequest
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResources(const ListResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of roles by calling ListRoles.
 *
 * @param request ListRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary Queries the list of roles by calling ListRoles.
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRolesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag key list of resource directory member accounts by calling ListTagKeys.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyFilter()) {
    query["KeyFilter"] = request.getKeyFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the tag key list of resource directory member accounts by calling ListTagKeys.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are attached to a resource group or a resource directory member.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
    {"version" , "2020-03-31"},
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
 * @summary Queries the tags that are attached to a resource group or a resource directory member.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values of a specified tag key by calling ListTagValues.
 *
 * @description ### Usage notes
 * This topic provides an example on how to query the tag values of the tag key k1. The response shows that the tag value corresponding to the tag key k1 is v1.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  if (!!request.hasValueFilter()) {
    query["ValueFilter"] = request.getValueFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the tag values of a specified tag key by calling ListTagValues.
 *
 * @description ### Usage notes
 * This topic provides an example on how to query the tag values of the tag key k1. The response shows that the tag value corresponding to the tag key k1 is v1.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Queries the nodes to which a control policy is attached.
 *
 * @param request ListTargetAttachmentsForControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTargetAttachmentsForControlPolicyResponse
 */
ListTargetAttachmentsForControlPolicyResponse Client::listTargetAttachmentsForControlPolicyWithOptions(const ListTargetAttachmentsForControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTargetAttachmentsForControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the nodes to which a control policy is attached.
 *
 * @param request ListTargetAttachmentsForControlPolicyRequest
 * @return ListTargetAttachmentsForControlPolicyResponse
 */
ListTargetAttachmentsForControlPolicyResponse Client::listTargetAttachmentsForControlPolicy(const ListTargetAttachmentsForControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTargetAttachmentsForControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of trusted services enabled by the management account or a delegated administrator account.
 *
 * @description > This operation can be called only by the management account or a delegated administrator account.
 *
 * @param request ListTrustedServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrustedServiceStatusResponse
 */
ListTrustedServiceStatusResponse Client::listTrustedServiceStatusWithOptions(const ListTrustedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminAccountId()) {
    query["AdminAccountId"] = request.getAdminAccountId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrustedServiceStatus"},
    {"version" , "2020-03-31"},
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
 * @summary Queries the list of trusted services enabled by the management account or a delegated administrator account.
 *
 * @description > This operation can be called only by the management account or a delegated administrator account.
 *
 * @param request ListTrustedServiceStatusRequest
 * @return ListTrustedServiceStatusResponse
 */
ListTrustedServiceStatusResponse Client::listTrustedServiceStatus(const ListTrustedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTrustedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries resource group events.
 *
 * @param request LookupResourceGroupEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LookupResourceGroupEventsResponse
 */
LookupResourceGroupEventsResponse Client::lookupResourceGroupEventsWithOptions(const LookupResourceGroupEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventCategory()) {
    query["EventCategory"] = request.getEventCategory();
  }

  if (!!request.hasLookupAttributes()) {
    query["LookupAttributes"] = request.getLookupAttributes();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupDisplayName()) {
    query["ResourceGroupDisplayName"] = request.getResourceGroupDisplayName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LookupResourceGroupEvents"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LookupResourceGroupEventsResponse>();
}

/**
 * @summary Queries resource group events.
 *
 * @param request LookupResourceGroupEventsRequest
 * @return LookupResourceGroupEventsResponse
 */
LookupResourceGroupEventsResponse Client::lookupResourceGroupEvents(const LookupResourceGroupEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lookupResourceGroupEventsWithOptions(request, runtime);
}

/**
 * @summary Moves a member to another folder.
 *
 * @param request MoveAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveAccountResponse
 */
MoveAccountResponse Client::moveAccountWithOptions(const MoveAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasDestinationFolderId()) {
    query["DestinationFolderId"] = request.getDestinationFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Moves a member to another folder.
 *
 * @param request MoveAccountRequest
 * @return MoveAccountResponse
 */
MoveAccountResponse Client::moveAccount(const MoveAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveAccountWithOptions(request, runtime);
}

/**
 * @summary Calls MoveResources to move resources from one resource group to another.
 *
 * @description Supports batch transfer of resources across regions, cloud services, and resource groups.
 * For cloud services that support resource group transfer, see the **API** column in [Cloud services that support resource groups](https://help.aliyun.com/document_detail/94479.html).
 *
 * @param request MoveResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourcesResponse
 */
MoveResourcesResponse Client::moveResourcesWithOptions(const MoveResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResources"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourcesResponse>();
}

/**
 * @summary Calls MoveResources to move resources from one resource group to another.
 *
 * @description Supports batch transfer of resources across regions, cloud services, and resource groups.
 * For cloud services that support resource group transfer, see the **API** column in [Cloud services that support resource groups](https://help.aliyun.com/document_detail/94479.html).
 *
 * @param request MoveResourcesRequest
 * @return MoveResourcesResponse
 */
MoveResourcesResponse Client::moveResources(const MoveResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourcesWithOptions(request, runtime);
}

/**
 * @summary Upgrades a resource account to an Alibaba Cloud account. This is an asynchronous operation.
 *
 * @param request PromoteResourceAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PromoteResourceAccountResponse
 */
PromoteResourceAccountResponse Client::promoteResourceAccountWithOptions(const PromoteResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PromoteResourceAccount"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PromoteResourceAccountResponse>();
}

/**
 * @summary Upgrades a resource account to an Alibaba Cloud account. This is an asynchronous operation.
 *
 * @param request PromoteResourceAccountRequest
 * @return PromoteResourceAccountResponse
 */
PromoteResourceAccountResponse Client::promoteResourceAccount(const PromoteResourceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return promoteResourceAccountWithOptions(request, runtime);
}

/**
 * @summary Sets a member account in a resource directory as a delegated administrator account for a trusted service.
 *
 * @description After the settings are complete, the delegated administrator account is granted authorization to access the organizational information of the resource directory, which provides visibility into the organization members and structure. The delegated administrator account executes service-related management operations on behalf of the management account in the specified trusted service.
 * Limits:
 * - Only some trusted services support the delegated administrator feature. For more information, see [Supported trusted services](https://help.aliyun.com/document_detail/208133.html).
 * - Only the management account of the resource directory and authorized Resource Access Management (RAM) users and RAM roles under the management account can invoke this API operation.
 * - The maximum number of delegated administrator accounts that can be added is defined by each trusted service.
 *
 * @param request RegisterDelegatedAdministratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterDelegatedAdministratorResponse
 */
RegisterDelegatedAdministratorResponse Client::registerDelegatedAdministratorWithOptions(const RegisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasServicePrincipal()) {
    query["ServicePrincipal"] = request.getServicePrincipal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterDelegatedAdministrator"},
    {"version" , "2020-03-31"},
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
 * @summary Sets a member account in a resource directory as a delegated administrator account for a trusted service.
 *
 * @description After the settings are complete, the delegated administrator account is granted authorization to access the organizational information of the resource directory, which provides visibility into the organization members and structure. The delegated administrator account executes service-related management operations on behalf of the management account in the specified trusted service.
 * Limits:
 * - Only some trusted services support the delegated administrator feature. For more information, see [Supported trusted services](https://help.aliyun.com/document_detail/208133.html).
 * - Only the management account of the resource directory and authorized Resource Access Management (RAM) users and RAM roles under the management account can invoke this API operation.
 * - The maximum number of delegated administrator accounts that can be added is defined by each trusted service.
 *
 * @param request RegisterDelegatedAdministratorRequest
 * @return RegisterDelegatedAdministratorResponse
 */
RegisterDelegatedAdministratorResponse Client::registerDelegatedAdministrator(const RegisterDelegatedAdministratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDelegatedAdministratorWithOptions(request, runtime);
}

/**
 * @summary Removes a member of the cloud account type. After the member is removed, it exists as an independent Alibaba Cloud account and is no longer managed by the management account of the resource directory.
 *
 * @param request RemoveCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveCloudAccountResponse
 */
RemoveCloudAccountResponse Client::removeCloudAccountWithOptions(const RemoveCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveCloudAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Removes a member of the cloud account type. After the member is removed, it exists as an independent Alibaba Cloud account and is no longer managed by the management account of the resource directory.
 *
 * @param request RemoveCloudAccountRequest
 * @return RemoveCloudAccountResponse
 */
RemoveCloudAccountResponse Client::removeCloudAccount(const RemoveCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Resends the confirmation email for creating a cloud account.
 *
 * @param request ResendCreateCloudAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendCreateCloudAccountEmailResponse
 */
ResendCreateCloudAccountEmailResponse Client::resendCreateCloudAccountEmailWithOptions(const ResendCreateCloudAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResendCreateCloudAccountEmail"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResendCreateCloudAccountEmailResponse>();
}

/**
 * @summary Resends the confirmation email for creating a cloud account.
 *
 * @param request ResendCreateCloudAccountEmailRequest
 * @return ResendCreateCloudAccountEmailResponse
 */
ResendCreateCloudAccountEmailResponse Client::resendCreateCloudAccountEmail(const ResendCreateCloudAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendCreateCloudAccountEmailWithOptions(request, runtime);
}

/**
 * @summary Resends the confirmation email for upgrading a resource account to a cloud account.
 *
 * @param request ResendPromoteResourceAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendPromoteResourceAccountEmailResponse
 */
ResendPromoteResourceAccountEmailResponse Client::resendPromoteResourceAccountEmailWithOptions(const ResendPromoteResourceAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResendPromoteResourceAccountEmail"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResendPromoteResourceAccountEmailResponse>();
}

/**
 * @summary Resends the confirmation email for upgrading a resource account to a cloud account.
 *
 * @param request ResendPromoteResourceAccountEmailRequest
 * @return ResendPromoteResourceAccountEmailResponse
 */
ResendPromoteResourceAccountEmailResponse Client::resendPromoteResourceAccountEmail(const ResendPromoteResourceAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendPromoteResourceAccountEmailWithOptions(request, runtime);
}

/**
 * @summary Resends the confirmation email for changing the email address of a member account.
 *
 * @param request RetryChangeAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryChangeAccountEmailResponse
 */
RetryChangeAccountEmailResponse Client::retryChangeAccountEmailWithOptions(const RetryChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryChangeAccountEmail"},
    {"version" , "2020-03-31"},
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
 * @summary Resends the confirmation email for changing the email address of a member account.
 *
 * @param request RetryChangeAccountEmailRequest
 * @return RetryChangeAccountEmailResponse
 */
RetryChangeAccountEmailResponse Client::retryChangeAccountEmail(const RetryChangeAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryChangeAccountEmailWithOptions(request, runtime);
}

/**
 * @summary Sends a verification code to a secure phone number when you set the secure phone number for a member of the resource account type by calling SendVerificationCodeForBindSecureMobilePhone.
 *
 * @description To ensure that the system can record the specific operator of management operations, use a Resource Access Management (RAM) user or RAM role under the management account that has the resource directory management permission (AliyunResourceDirectoryFullAccess) to call this API operation.
 *
 * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendVerificationCodeForBindSecureMobilePhoneResponse
 */
SendVerificationCodeForBindSecureMobilePhoneResponse Client::sendVerificationCodeForBindSecureMobilePhoneWithOptions(const SendVerificationCodeForBindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasSecureMobilePhone()) {
    query["SecureMobilePhone"] = request.getSecureMobilePhone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendVerificationCodeForBindSecureMobilePhone"},
    {"version" , "2020-03-31"},
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
 * @summary Sends a verification code to a secure phone number when you set the secure phone number for a member of the resource account type by calling SendVerificationCodeForBindSecureMobilePhone.
 *
 * @description To ensure that the system can record the specific operator of management operations, use a Resource Access Management (RAM) user or RAM role under the management account that has the resource directory management permission (AliyunResourceDirectoryFullAccess) to call this API operation.
 *
 * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
 * @return SendVerificationCodeForBindSecureMobilePhoneResponse
 */
SendVerificationCodeForBindSecureMobilePhoneResponse Client::sendVerificationCodeForBindSecureMobilePhone(const SendVerificationCodeForBindSecureMobilePhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendVerificationCodeForBindSecureMobilePhoneWithOptions(request, runtime);
}

/**
 * @summary Sends a verification code to the secure phone number of a new management account when you call SendVerificationCodeForEnableRD to enable a resource directory by creating a new management account.
 *
 * @description Each Alibaba Cloud account can send up to 100 verification codes per day.
 *
 * @param request SendVerificationCodeForEnableRDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendVerificationCodeForEnableRDResponse
 */
SendVerificationCodeForEnableRDResponse Client::sendVerificationCodeForEnableRDWithOptions(const SendVerificationCodeForEnableRDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecureMobilePhone()) {
    query["SecureMobilePhone"] = request.getSecureMobilePhone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendVerificationCodeForEnableRD"},
    {"version" , "2020-03-31"},
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
 * @summary Sends a verification code to the secure phone number of a new management account when you call SendVerificationCodeForEnableRD to enable a resource directory by creating a new management account.
 *
 * @description Each Alibaba Cloud account can send up to 100 verification codes per day.
 *
 * @param request SendVerificationCodeForEnableRDRequest
 * @return SendVerificationCodeForEnableRDResponse
 */
SendVerificationCodeForEnableRDResponse Client::sendVerificationCodeForEnableRD(const SendVerificationCodeForEnableRDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendVerificationCodeForEnableRDWithOptions(request, runtime);
}

/**
 * @summary Sets the default version of an access policy.
 *
 * @param request SetDefaultPolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultPolicyVersionResponse
 */
SetDefaultPolicyVersionResponse Client::setDefaultPolicyVersionWithOptions(const SetDefaultPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultPolicyVersion"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultPolicyVersionResponse>();
}

/**
 * @summary Sets the default version of an access policy.
 *
 * @param request SetDefaultPolicyVersionRequest
 * @return SetDefaultPolicyVersionResponse
 */
SetDefaultPolicyVersionResponse Client::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the member deletion permission by calling SetMemberDeletionPermission.
 *
 * @description You can delete members of the resource account type only after the member deletion permission is enabled.
 *
 * @param request SetMemberDeletionPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetMemberDeletionPermissionResponse
 */
SetMemberDeletionPermissionResponse Client::setMemberDeletionPermissionWithOptions(const SetMemberDeletionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetMemberDeletionPermission"},
    {"version" , "2020-03-31"},
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
 * @summary Enables or disables the member deletion permission by calling SetMemberDeletionPermission.
 *
 * @description You can delete members of the resource account type only after the member deletion permission is enabled.
 *
 * @param request SetMemberDeletionPermissionRequest
 * @return SetMemberDeletionPermissionResponse
 */
SetMemberDeletionPermissionResponse Client::setMemberDeletionPermission(const SetMemberDeletionPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setMemberDeletionPermissionWithOptions(request, runtime);
}

/**
 * @summary Attaches labels to resource groups or member accounts of a resource directory.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"version" , "2020-03-31"},
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
 * @summary Attaches labels to resource groups or member accounts of a resource directory.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds tags from resource groups or resource directory members.
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
    {"version" , "2020-03-31"},
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
 * @summary Unbinds tags from resource groups or resource directory members.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a member or switches the member type by calling UpdateAccount.
 *
 * @description ### Before you begin
 * - To ensure that the system can record the specific operator of management operations, use a Resource Access Management (RAM) user or RAM role under the management account that has the resource folder management permission (AliyunResourceDirectoryFullAccess) to invoke this API operation.
 * - For the conditions that must be met to switch a resource account to a cloud account, see [Switch a resource account to a cloud account](https://help.aliyun.com/document_detail/111233.html).
 * - For the conditions that must be met to switch a cloud account to a resource account, see [Switch a cloud account to a resource account](https://help.aliyun.com/document_detail/209980.html).
 *
 * @param request UpdateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccountResponse
 */
UpdateAccountResponse Client::updateAccountWithOptions(const UpdateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasNewAccountType()) {
    query["NewAccountType"] = request.getNewAccountType();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.getNewDisplayName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccount"},
    {"version" , "2020-03-31"},
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
 * @summary Modifies the name of a member or switches the member type by calling UpdateAccount.
 *
 * @description ### Before you begin
 * - To ensure that the system can record the specific operator of management operations, use a Resource Access Management (RAM) user or RAM role under the management account that has the resource folder management permission (AliyunResourceDirectoryFullAccess) to invoke this API operation.
 * - For the conditions that must be met to switch a resource account to a cloud account, see [Switch a resource account to a cloud account](https://help.aliyun.com/document_detail/111233.html).
 * - For the conditions that must be met to switch a cloud account to a resource account, see [Switch a cloud account to a resource account](https://help.aliyun.com/document_detail/209980.html).
 *
 * @param request UpdateAccountRequest
 * @return UpdateAccountResponse
 */
UpdateAccountResponse Client::updateAccount(const UpdateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccountWithOptions(request, runtime);
}

/**
 * @summary Updates the settings of the associated resource group transfer feature by calling UpdateAssociatedTransferSetting.
 *
 * @description For cloud resources that support the attached-resource allocation feature, see [Attached-resource allocation](https://help.aliyun.com/document_detail/606232.html).
 *
 * @param request UpdateAssociatedTransferSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAssociatedTransferSettingResponse
 */
UpdateAssociatedTransferSettingResponse Client::updateAssociatedTransferSettingWithOptions(const UpdateAssociatedTransferSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableExistingResourcesTransfer()) {
    query["EnableExistingResourcesTransfer"] = request.getEnableExistingResourcesTransfer();
  }

  if (!!request.hasRuleSettings()) {
    query["RuleSettings"] = request.getRuleSettings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAssociatedTransferSetting"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAssociatedTransferSettingResponse>();
}

/**
 * @summary Updates the settings of the associated resource group transfer feature by calling UpdateAssociatedTransferSetting.
 *
 * @description For cloud resources that support the attached-resource allocation feature, see [Attached-resource allocation](https://help.aliyun.com/document_detail/606232.html).
 *
 * @param request UpdateAssociatedTransferSettingRequest
 * @return UpdateAssociatedTransferSettingResponse
 */
UpdateAssociatedTransferSettingResponse Client::updateAssociatedTransferSetting(const UpdateAssociatedTransferSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAssociatedTransferSettingWithOptions(request, runtime);
}

/**
 * @summary Calls UpdateAutoGroupingConfig to update the automatic group transfer settings. Currently, only the setting for whether to enable existing associated resources to follow the group transfer task is supported.
 *
 * @param request UpdateAutoGroupingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoGroupingConfigResponse
 */
UpdateAutoGroupingConfigResponse Client::updateAutoGroupingConfigWithOptions(const UpdateAutoGroupingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableExistingResourcesTransfer()) {
    query["EnableExistingResourcesTransfer"] = request.getEnableExistingResourcesTransfer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAutoGroupingConfig"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutoGroupingConfigResponse>();
}

/**
 * @summary Calls UpdateAutoGroupingConfig to update the automatic group transfer settings. Currently, only the setting for whether to enable existing associated resources to follow the group transfer task is supported.
 *
 * @param request UpdateAutoGroupingConfigRequest
 * @return UpdateAutoGroupingConfigResponse
 */
UpdateAutoGroupingConfigResponse Client::updateAutoGroupingConfig(const UpdateAutoGroupingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoGroupingConfigWithOptions(request, runtime);
}

/**
 * @summary Updates an automatic resource group transfer rule by calling UpdateAutoGroupingRule.
 *
 * @param request UpdateAutoGroupingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoGroupingRuleResponse
 */
UpdateAutoGroupingRuleResponse Client::updateAutoGroupingRuleWithOptions(const UpdateAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExcludeRegionIdsScope()) {
    query["ExcludeRegionIdsScope"] = request.getExcludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    query["ExcludeResourceGroupIdsScope"] = request.getExcludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    query["ExcludeResourceIdsScope"] = request.getExcludeResourceIdsScope();
  }

  if (!!request.hasExcludeResourceTypesScope()) {
    query["ExcludeResourceTypesScope"] = request.getExcludeResourceTypesScope();
  }

  if (!!request.hasRegionIdsScope()) {
    query["RegionIdsScope"] = request.getRegionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    query["ResourceGroupIdsScope"] = request.getResourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    query["ResourceIdsScope"] = request.getResourceIdsScope();
  }

  if (!!request.hasResourceTypesScope()) {
    query["ResourceTypesScope"] = request.getResourceTypesScope();
  }

  if (!!request.hasRuleContents()) {
    query["RuleContents"] = request.getRuleContents();
  }

  if (!!request.hasRuleDesc()) {
    query["RuleDesc"] = request.getRuleDesc();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAutoGroupingRule"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutoGroupingRuleResponse>();
}

/**
 * @summary Updates an automatic resource group transfer rule by calling UpdateAutoGroupingRule.
 *
 * @param request UpdateAutoGroupingRuleRequest
 * @return UpdateAutoGroupingRuleResponse
 */
UpdateAutoGroupingRuleResponse Client::updateAutoGroupingRule(const UpdateAutoGroupingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoGroupingRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies a custom control policy by calling UpdateControlPolicy.
 *
 * @description This topic provides an example on how to modify the name of the control policy `cp-jExXAqIYkwHN****` to `NewControlPolicy`.
 *
 * @param request UpdateControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateControlPolicyResponse
 */
UpdateControlPolicyResponse Client::updateControlPolicyWithOptions(const UpdateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasNewPolicyDocument()) {
    query["NewPolicyDocument"] = request.getNewPolicyDocument();
  }

  if (!!request.hasNewPolicyName()) {
    query["NewPolicyName"] = request.getNewPolicyName();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateControlPolicy"},
    {"version" , "2020-03-31"},
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
 * @summary Modifies a custom control policy by calling UpdateControlPolicy.
 *
 * @description This topic provides an example on how to modify the name of the control policy `cp-jExXAqIYkwHN****` to `NewControlPolicy`.
 *
 * @param request UpdateControlPolicyRequest
 * @return UpdateControlPolicyResponse
 */
UpdateControlPolicyResponse Client::updateControlPolicy(const UpdateControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a folder by calling UpdateFolder.
 *
 * @param request UpdateFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolderWithOptions(const UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["FolderId"] = request.getFolderId();
  }

  if (!!request.hasNewFolderName()) {
    query["NewFolderName"] = request.getNewFolderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFolder"},
    {"version" , "2020-03-31"},
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
 * @summary Modifies the name of a folder by calling UpdateFolder.
 *
 * @param request UpdateFolderRequest
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolder(const UpdateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFolderWithOptions(request, runtime);
}

/**
 * @summary Modifies the display name of a resource group.
 *
 * @param request UpdateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceGroupResponse
 */
UpdateResourceGroupResponse Client::updateResourceGroupWithOptions(const UpdateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.getNewDisplayName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateResourceGroup"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceGroupResponse>();
}

/**
 * @summary Modifies the display name of a resource group.
 *
 * @param request UpdateResourceGroupRequest
 * @return UpdateResourceGroupResponse
 */
UpdateResourceGroupResponse Client::updateResourceGroup(const UpdateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the administrator settings of a resource group by calling UpdateResourceGroupAdminSetting.
 *
 * @param request UpdateResourceGroupAdminSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceGroupAdminSettingResponse
 */
UpdateResourceGroupAdminSettingResponse Client::updateResourceGroupAdminSettingWithOptions(const UpdateResourceGroupAdminSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreatorAsAdmin()) {
    query["CreatorAsAdmin"] = request.getCreatorAsAdmin();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateResourceGroupAdminSetting"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceGroupAdminSettingResponse>();
}

/**
 * @summary Updates the administrator settings of a resource group by calling UpdateResourceGroupAdminSetting.
 *
 * @param request UpdateResourceGroupAdminSettingRequest
 * @return UpdateResourceGroupAdminSettingResponse
 */
UpdateResourceGroupAdminSettingResponse Client::updateResourceGroupAdminSetting(const UpdateResourceGroupAdminSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceGroupAdminSettingWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a RAM role.
 *
 * @param request UpdateRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRoleWithOptions(const UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewAssumeRolePolicyDocument()) {
    query["NewAssumeRolePolicyDocument"] = request.getNewAssumeRolePolicyDocument();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasNewMaxSessionDuration()) {
    query["NewMaxSessionDuration"] = request.getNewMaxSessionDuration();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRole"},
    {"version" , "2020-03-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleResponse>();
}

/**
 * @summary Updates the information of a RAM role.
 *
 * @param request UpdateRoleRequest
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRole(const UpdateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRoleWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ResourceManager20200331