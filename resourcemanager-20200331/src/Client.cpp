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
 * @summary Accepts an invitation.
 *
 * @description After an invited Alibaba Cloud account joins a resource directory, it becomes a member of the resource directory. By default, the name of the invited Alibaba Cloud account is used as the display name of the account in the resource directory.
 * This topic provides an example on how to call the API operation to accept the invitation `h-Ih8IuPfvV0t0****` that is initiated to invite the Alibaba Cloud account `177242285274****` to join the resource directory `rd-3G****`.
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
 * @summary Accepts an invitation.
 *
 * @description After an invited Alibaba Cloud account joins a resource directory, it becomes a member of the resource directory. By default, the name of the invited Alibaba Cloud account is used as the display name of the account in the resource directory.
 * This topic provides an example on how to call the API operation to accept the invitation `h-Ih8IuPfvV0t0****` that is initiated to invite the Alibaba Cloud account `177242285274****` to join the resource directory `rd-3G****`.
 *
 * @param request AcceptHandshakeRequest
 * @return AcceptHandshakeResponse
 */
AcceptHandshakeResponse Client::acceptHandshake(const AcceptHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptHandshakeWithOptions(request, runtime);
}

/**
 * @description After you attach an access control policy, the operations performed on resources by using members are limited by the policy. Make sure that the attached policy meets your expectations. Otherwise, your business may be affected.
 * By default, the system access control policy FullAliyunAccess is attached to each folder and member.
 * The access control policy that is attached to a folder also applies to all its subfolders and all members in the subfolders.
 * A maximum of 10 access control policies can be attached to a folder or member.
 * This topic provides an example on how to call the API operation to attach the custom access control policy `cp-jExXAqIYkwHN****` to the folder `fd-ZDNPiT****`.
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
 * @description After you attach an access control policy, the operations performed on resources by using members are limited by the policy. Make sure that the attached policy meets your expectations. Otherwise, your business may be affected.
 * By default, the system access control policy FullAliyunAccess is attached to each folder and member.
 * The access control policy that is attached to a folder also applies to all its subfolders and all members in the subfolders.
 * A maximum of 10 access control policies can be attached to a folder or member.
 * This topic provides an example on how to call the API operation to attach the custom access control policy `cp-jExXAqIYkwHN****` to the folder `fd-ZDNPiT****`.
 *
 * @param request AttachControlPolicyRequest
 * @return AttachControlPolicyResponse
 */
AttachControlPolicyResponse Client::attachControlPolicy(const AttachControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Attaches a permission policy to an object, which can be a RAM user, RAM user group, or RAM role. After you attach a permission policy to an object, the object has the operation permissions on the resources in a specific resource group or within a specific Alibaba Cloud account.
 *
 * @description In this example, the policy `AdministratorAccess` is attached to the RAM user `alice@demo.onaliyun.com` and takes effect only for resources in the `rg-9gLOoK****` resource group.
 *
 * @param request AttachPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicyResponse
 */
AttachPolicyResponse Client::attachPolicyWithOptions(const AttachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  if (!!request.hasPrincipalName()) {
    query["PrincipalName"] = request.principalName();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.principalType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @summary Attaches a permission policy to an object, which can be a RAM user, RAM user group, or RAM role. After you attach a permission policy to an object, the object has the operation permissions on the resources in a specific resource group or within a specific Alibaba Cloud account.
 *
 * @description In this example, the policy `AdministratorAccess` is attached to the RAM user `alice@demo.onaliyun.com` and takes effect only for resources in the `rg-9gLOoK****` resource group.
 *
 * @param request AttachPolicyRequest
 * @return AttachPolicyResponse
 */
AttachPolicyResponse Client::attachPolicy(const AttachPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicyWithOptions(request, runtime);
}

/**
 * @summary 设置安全手机号
 *
 * @description You can call this API operation only to bind a mobile phone number to a member of the resource account type. You cannot call this API operation to change the mobile phone number that is bound to a member of the resource account type.
 * To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
 * This topic provides an example on how to call the API operation to bind a mobile phone number to the member `138660628348****` for security purposes.
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
 * @summary 设置安全手机号
 *
 * @description You can call this API operation only to bind a mobile phone number to a member of the resource account type. You cannot call this API operation to change the mobile phone number that is bound to a member of the resource account type.
 * To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
 * This topic provides an example on how to call the API operation to bind a mobile phone number to the member `138660628348****` for security purposes.
 *
 * @param request BindSecureMobilePhoneRequest
 * @return BindSecureMobilePhoneResponse
 */
BindSecureMobilePhoneResponse Client::bindSecureMobilePhone(const BindSecureMobilePhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindSecureMobilePhoneWithOptions(request, runtime);
}

/**
 * @summary 取消修改邮箱
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
 * @summary 取消修改邮箱
 *
 * @param request CancelChangeAccountEmailRequest
 * @return CancelChangeAccountEmailResponse
 */
CancelChangeAccountEmailResponse Client::cancelChangeAccountEmail(const CancelChangeAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelChangeAccountEmailWithOptions(request, runtime);
}

/**
 * @summary 取消创建云账号类型的成员
 *
 * @param request CancelCreateCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCreateCloudAccountResponse
 */
CancelCreateCloudAccountResponse Client::cancelCreateCloudAccountWithOptions(const CancelCreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.recordId();
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
 * @summary 取消创建云账号类型的成员
 *
 * @param request CancelCreateCloudAccountRequest
 * @return CancelCreateCloudAccountResponse
 */
CancelCreateCloudAccountResponse Client::cancelCreateCloudAccount(const CancelCreateCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCreateCloudAccountWithOptions(request, runtime);
}

/**
 * @summary Cancels an invitation.
 *
 * @description This topic provides an example on how to call the API operation to cancel the invitation whose ID is `h-ycm4rp****`.
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
 * @summary Cancels an invitation.
 *
 * @description This topic provides an example on how to call the API operation to cancel the invitation whose ID is `h-ycm4rp****`.
 *
 * @param request CancelHandshakeRequest
 * @return CancelHandshakeResponse
 */
CancelHandshakeResponse Client::cancelHandshake(const CancelHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelHandshakeWithOptions(request, runtime);
}

/**
 * @summary 取消升级资源账号
 *
 * @param request CancelPromoteResourceAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPromoteResourceAccountResponse
 */
CancelPromoteResourceAccountResponse Client::cancelPromoteResourceAccountWithOptions(const CancelPromoteResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.recordId();
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
 * @summary 取消升级资源账号
 *
 * @param request CancelPromoteResourceAccountRequest
 * @return CancelPromoteResourceAccountResponse
 */
CancelPromoteResourceAccountResponse Client::cancelPromoteResourceAccount(const CancelPromoteResourceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPromoteResourceAccountWithOptions(request, runtime);
}

/**
 * @summary 成员账号设置安全邮箱
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
 * @summary 成员账号设置安全邮箱
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
 * This topic provides an example on how to call the API operation to perform a deletion check on the member whose ID is `179855839641****`.
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
 * @summary Performs a member deletion check.
 *
 * @description Before you delete a member, you must call this API operation to check whether the member can be deleted.
 * This topic provides an example on how to call the API operation to perform a deletion check on the member whose ID is `179855839641****`.
 *
 * @param request CheckAccountDeleteRequest
 * @return CheckAccountDeleteResponse
 */
CheckAccountDeleteResponse Client::checkAccountDelete(const CheckAccountDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountDeleteWithOptions(request, runtime);
}

/**
 * @summary Creates a transfer rule. Custom transfer rules and transfer rules for associated resources are supported.
 *
 * @description You can create up to 10 custom transfer rules. Each custom transfer rule can contain up to 10 content records.
 *
 * @param request CreateAutoGroupingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoGroupingRuleResponse
 */
CreateAutoGroupingRuleResponse Client::createAutoGroupingRuleWithOptions(const CreateAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExcludeRegionIdsScope()) {
    query["ExcludeRegionIdsScope"] = request.excludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    query["ExcludeResourceGroupIdsScope"] = request.excludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    query["ExcludeResourceIdsScope"] = request.excludeResourceIdsScope();
  }

  if (!!request.hasExcludeResourceTypesScope()) {
    query["ExcludeResourceTypesScope"] = request.excludeResourceTypesScope();
  }

  if (!!request.hasRegionIdsScope()) {
    query["RegionIdsScope"] = request.regionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    query["ResourceGroupIdsScope"] = request.resourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    query["ResourceIdsScope"] = request.resourceIdsScope();
  }

  if (!!request.hasResourceTypesScope()) {
    query["ResourceTypesScope"] = request.resourceTypesScope();
  }

  if (!!request.hasRuleContents()) {
    query["RuleContents"] = request.ruleContents();
  }

  if (!!request.hasRuleDesc()) {
    query["RuleDesc"] = request.ruleDesc();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
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
 * @summary Creates a transfer rule. Custom transfer rules and transfer rules for associated resources are supported.
 *
 * @description You can create up to 10 custom transfer rules. Each custom transfer rule can contain up to 10 content records.
 *
 * @param request CreateAutoGroupingRuleRequest
 * @return CreateAutoGroupingRuleResponse
 */
CreateAutoGroupingRuleResponse Client::createAutoGroupingRule(const CreateAutoGroupingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoGroupingRuleWithOptions(request, runtime);
}

/**
 * @summary 创建云账号
 *
 * @description A resource directory supports two types of member accounts: resource accounts and cloud accounts.
 * *   Resource account (recommended): A resource account is only used as a resource container and fully depends on a resource directory. Such member accounts are secure and easy-to-create. For more information about how to create a resource account, see [CreateResourceAccount](https://help.aliyun.com/document_detail/159392.html).
 * >  A resource account can be upgraded to a cloud account. For more information, see [PromoteResourceAccount](https://help.aliyun.com/document_detail/159395.html) .
 * *   Cloud account: A cloud account has all the features of an Alibaba Cloud account, including root permissions.
 *
 * @param request CreateCloudAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudAccountResponse
 */
CreateCloudAccountResponse Client::createCloudAccountWithOptions(const CreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasParentFolderId()) {
    query["ParentFolderId"] = request.parentFolderId();
  }

  if (!!request.hasPayerAccountId()) {
    query["PayerAccountId"] = request.payerAccountId();
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
 * @summary 创建云账号
 *
 * @description A resource directory supports two types of member accounts: resource accounts and cloud accounts.
 * *   Resource account (recommended): A resource account is only used as a resource container and fully depends on a resource directory. Such member accounts are secure and easy-to-create. For more information about how to create a resource account, see [CreateResourceAccount](https://help.aliyun.com/document_detail/159392.html).
 * >  A resource account can be upgraded to a cloud account. For more information, see [PromoteResourceAccount](https://help.aliyun.com/document_detail/159395.html) .
 * *   Cloud account: A cloud account has all the features of an Alibaba Cloud account, including root permissions.
 *
 * @param request CreateCloudAccountRequest
 * @return CreateCloudAccountResponse
 */
CreateCloudAccountResponse Client::createCloudAccount(const CreateCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudAccountWithOptions(request, runtime);
}

/**
 * @description This topic provides an example on how to call the API operation to create a custom access control policy named `ExampleControlPolicy`. This access control policy is used to prohibit modifications to the ResourceDirectoryAccountAccessRole role and the permissions of the role.
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
 * @description This topic provides an example on how to call the API operation to create a custom access control policy named `ExampleControlPolicy`. This access control policy is used to prohibit modifications to the ResourceDirectoryAccountAccessRole role and the permissions of the role.
 *
 * @param request CreateControlPolicyRequest
 * @return CreateControlPolicyResponse
 */
CreateControlPolicyResponse Client::createControlPolicy(const CreateControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createControlPolicyWithOptions(request, runtime);
}

/**
 * @description >  A maximum of five levels of folders can be created under the root folder.
 * In this example, a folder named `rdFolder` is created under the root folder.
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
 * @description >  A maximum of five levels of folders can be created under the root folder.
 * In this example, a folder named `rdFolder` is created under the root folder.
 *
 * @param request CreateFolderRequest
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolder(const CreateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFolderWithOptions(request, runtime);
}

/**
 * @summary Creates a permission policy.
 *
 * @param request CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.policyDocument();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
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
 * @summary Creates a permission policy.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a version for a permission policy.
 *
 * @param request CreatePolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyVersionResponse
 */
CreatePolicyVersionResponse Client::createPolicyVersionWithOptions(const CreatePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyDocument()) {
    query["PolicyDocument"] = request.policyDocument();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasSetAsDefault()) {
    query["SetAsDefault"] = request.setAsDefault();
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
 * @summary Creates a version for a permission policy.
 *
 * @param request CreatePolicyVersionRequest
 * @return CreatePolicyVersionResponse
 */
CreatePolicyVersionResponse Client::createPolicyVersion(const CreatePolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Creates a member of the resource account type.
 *
 * @description A member serves as a container for resources and is also an organizational unit in a resource directory. A member indicates a project or application. The resources of different members are isolated.
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
 * @summary Creates a member of the resource account type.
 *
 * @description A member serves as a container for resources and is also an organizational unit in a resource directory. A member indicates a project or application. The resources of different members are isolated.
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
 * @description > A maximum of 30 resource groups can be created within an Alibaba Cloud account.
 *
 * @param request CreateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroupWithOptions(const CreateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @description > A maximum of 30 resource groups can be created within an Alibaba Cloud account.
 *
 * @param request CreateResourceGroupRequest
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroup(const CreateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a RAM role.
 *
 * @param request CreateRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRoleWithOptions(const CreateRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssumeRolePolicyDocument()) {
    query["AssumeRolePolicyDocument"] = request.assumeRolePolicyDocument();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasMaxSessionDuration()) {
    query["MaxSessionDuration"] = request.maxSessionDuration();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
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
 * @summary Creates a RAM role.
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
    query["CustomSuffix"] = request.customSuffix();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
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
 * @summary 账号一键删除
 *
 * @description The ID of the member that you want to delete.
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
 * @summary 账号一键删除
 *
 * @description The ID of the member that you want to delete.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a transfer rule.
 *
 * @param request DeleteAutoGroupingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoGroupingRuleResponse
 */
DeleteAutoGroupingRuleResponse Client::deleteAutoGroupingRuleWithOptions(const DeleteAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
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
 * @summary Deletes a transfer rule.
 *
 * @param request DeleteAutoGroupingRuleRequest
 * @return DeleteAutoGroupingRuleResponse
 */
DeleteAutoGroupingRuleResponse Client::deleteAutoGroupingRule(const DeleteAutoGroupingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoGroupingRuleWithOptions(request, runtime);
}

/**
 * @summary 删除管控策略
 *
 * @description If you want to delete a custom control policy that is attached to folders or member accounts, you must call the [DetachControlPolicy](https://help.aliyun.com/document_detail/208331.html) operation to detach the policy before you delete it.
 * In this example, the custom control policy `cp-SImPt8GCEwiq****` is deleted.
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
 * @summary 删除管控策略
 *
 * @description If you want to delete a custom control policy that is attached to folders or member accounts, you must call the [DetachControlPolicy](https://help.aliyun.com/document_detail/208331.html) operation to detach the policy before you delete it.
 * In this example, the custom control policy `cp-SImPt8GCEwiq****` is deleted.
 *
 * @param request DeleteControlPolicyRequest
 * @return DeleteControlPolicyResponse
 */
DeleteControlPolicyResponse Client::deleteControlPolicy(const DeleteControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteControlPolicyWithOptions(request, runtime);
}

/**
 * @description >  Before you delete a folder, make sure that the folder does not contain any member accounts or child folders.
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
 * @description >  Before you delete a folder, make sure that the folder does not contain any member accounts or child folders.
 *
 * @param request DeleteFolderRequest
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolder(const DeleteFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFolderWithOptions(request, runtime);
}

/**
 * @summary Deletes a permission policy.
 *
 * @description > 
 * *   Before you delete a permission policy, you must delete its all non-default versions. For information about how to delete a policy version, see [DeletePolicyVersion](https://help.aliyun.com/document_detail/159041.html).
 * *   Before you delete a permission policy, you must make sure that the policy is not attached to a RAM user, a RAM user group, or a RAM role. For information about how to detach a policy, see [DetachPolicy](https://help.aliyun.com/document_detail/159168.html).
 *
 * @param request DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
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
 * @summary Deletes a permission policy.
 *
 * @description > 
 * *   Before you delete a permission policy, you must delete its all non-default versions. For information about how to delete a policy version, see [DeletePolicyVersion](https://help.aliyun.com/document_detail/159041.html).
 * *   Before you delete a permission policy, you must make sure that the policy is not attached to a RAM user, a RAM user group, or a RAM role. For information about how to detach a policy, see [DetachPolicy](https://help.aliyun.com/document_detail/159168.html).
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a version of a permission policy.
 *
 * @description >  The default version of a policy cannot be deleted.
 *
 * @param request DeletePolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyVersionResponse
 */
DeletePolicyVersionResponse Client::deletePolicyVersionWithOptions(const DeletePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
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
 * @summary Deletes a version of a permission policy.
 *
 * @description >  The default version of a policy cannot be deleted.
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
 * @description >  Before you delete a resource group, you must delete all the resources in it.
 * In this example, the resource group whose ID is `rg-9gLOoK****` is deleted.
 *
 * @param request DeleteResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroupWithOptions(const DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @description >  Before you delete a resource group, you must delete all the resources in it.
 * In this example, the resource group whose ID is `rg-9gLOoK****` is deleted.
 *
 * @param request DeleteResourceGroupRequest
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroup(const DeleteResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a RAM role.
 *
 * @param request DeleteRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRoleWithOptions(const DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
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
 * @summary Deletes a RAM role.
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
    query["RoleName"] = request.roleName();
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
 * @summary 注销代理管理员
 *
 * @description >  If the delegated administrator account that you want to remove has historical management tasks in the related trusted service, the trusted service may be affected after the delegated administrator account is removed. Therefore, proceed with caution.
 * This topic provides an example on how to call the API operation to remove the delegated administrator account `181761095690****` for Cloud Firewall.
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
 * @summary 注销代理管理员
 *
 * @description >  If the delegated administrator account that you want to remove has historical management tasks in the related trusted service, the trusted service may be affected after the delegated administrator account is removed. Therefore, proceed with caution.
 * This topic provides an example on how to call the API operation to remove the delegated administrator account `181761095690****` for Cloud Firewall.
 *
 * @param request DeregisterDelegatedAdministratorRequest
 * @return DeregisterDelegatedAdministratorResponse
 */
DeregisterDelegatedAdministratorResponse Client::deregisterDelegatedAdministrator(const DeregisterDelegatedAdministratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deregisterDelegatedAdministratorWithOptions(request, runtime);
}

/**
 * @description Before you disable a resource directory, make sure that the following requirements are met:
 * *   All member accounts must be removed from the resource directory. For more information about how to remove a member account, see [RemoveCloudAccount](https://help.aliyun.com/document_detail/159431.html).
 * *   All folders except the root folder must be deleted from the resource directory. For more information about how to delete a folder, see [DeleteFolder](https://help.aliyun.com/document_detail/159432.html).
 *
 * @param request DestroyResourceDirectoryRequest
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
 * @description Before you disable a resource directory, make sure that the following requirements are met:
 * *   All member accounts must be removed from the resource directory. For more information about how to remove a member account, see [RemoveCloudAccount](https://help.aliyun.com/document_detail/159431.html).
 * *   All folders except the root folder must be deleted from the resource directory. For more information about how to delete a folder, see [DeleteFolder](https://help.aliyun.com/document_detail/159432.html).
 *
 * @return DestroyResourceDirectoryResponse
 */
DestroyResourceDirectoryResponse Client::destroyResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return destroyResourceDirectoryWithOptions(runtime);
}

/**
 * @summary 解绑管控策略
 *
 * @description After you detach an access control policy, the operations performed on resources by using members are not limited by the policy. Make sure that the detached policy meets your expectations. Otherwise, your business may be affected.
 * Both the system and custom access control policies can be detached. If an object has only one access control policy attached, the policy cannot be detached.
 * This topic provides an example on how to call the API operation to detach the custom control policy `cp-jExXAqIYkwHN****` from the folder `fd-ZDNPiT****`.
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
 * @summary 解绑管控策略
 *
 * @description After you detach an access control policy, the operations performed on resources by using members are not limited by the policy. Make sure that the detached policy meets your expectations. Otherwise, your business may be affected.
 * Both the system and custom access control policies can be detached. If an object has only one access control policy attached, the policy cannot be detached.
 * This topic provides an example on how to call the API operation to detach the custom control policy `cp-jExXAqIYkwHN****` from the folder `fd-ZDNPiT****`.
 *
 * @param request DetachControlPolicyRequest
 * @return DetachControlPolicyResponse
 */
DetachControlPolicyResponse Client::detachControlPolicy(const DetachControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Detaches a permission policy from an object. After you detach a policy from an object, the object does not have the operation permissions on the current resource group or the resources within the current account.
 *
 * @param request DetachPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicyResponse
 */
DetachPolicyResponse Client::detachPolicyWithOptions(const DetachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  if (!!request.hasPrincipalName()) {
    query["PrincipalName"] = request.principalName();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.principalType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @summary Detaches a permission policy from an object. After you detach a policy from an object, the object does not have the operation permissions on the current resource group or the resources within the current account.
 *
 * @param request DetachPolicyRequest
 * @return DetachPolicyResponse
 */
DetachPolicyResponse Client::detachPolicy(const DetachPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicyWithOptions(request, runtime);
}

/**
 * @summary Disables the Transfer Associated Resources feature.
 *
 * @param request DisableAssociatedTransferRequest
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
 * @summary Disables the Transfer Associated Resources feature.
 *
 * @return DisableAssociatedTransferResponse
 */
DisableAssociatedTransferResponse Client::disableAssociatedTransfer() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAssociatedTransferWithOptions(runtime);
}

/**
 * @summary Disables the Automatic Resource Transfer feature. After the feature is disabled, existing custom transfer rules and existing transfer rules for associated resources are deleted. However, existing relationships between resources and resource groups are not affected. If you still want to use this feature, you can enable it again 1 minute later.
 *
 * @param request DisableAutoGroupingRequest
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
 * @summary Disables the Automatic Resource Transfer feature. After the feature is disabled, existing custom transfer rules and existing transfer rules for associated resources are deleted. However, existing relationships between resources and resource groups are not affected. If you still want to use this feature, you can enable it again 1 minute later.
 *
 * @return DisableAutoGroupingResponse
 */
DisableAutoGroupingResponse Client::disableAutoGrouping() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAutoGroupingWithOptions(runtime);
}

/**
 * @summary 禁用管控策略
 *
 * @description After you disable the Control Policy feature, the system automatically detaches all control policies that are attached to folders and member accounts. The system does not delete these control policies, but you cannot attach them to folders or member accounts again.
 * >  If you disable the Control Policy feature, the permissions of all folders and member accounts in a resource directory are affected. You must proceed with caution.
 *
 * @param request DisableControlPolicyRequest
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
 * @summary 禁用管控策略
 *
 * @description After you disable the Control Policy feature, the system automatically detaches all control policies that are attached to folders and member accounts. The system does not delete these control policies, but you cannot attach them to folders or member accounts again.
 * >  If you disable the Control Policy feature, the permissions of all folders and member accounts in a resource directory are affected. You must proceed with caution.
 *
 * @return DisableControlPolicyResponse
 */
DisableControlPolicyResponse Client::disableControlPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableControlPolicyWithOptions(runtime);
}

/**
 * @summary 关闭资源组通知
 *
 * @param request DisableResourceGroupNotificationRequest
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
 * @summary 关闭资源组通知
 *
 * @return DisableResourceGroupNotificationResponse
 */
DisableResourceGroupNotificationResponse Client::disableResourceGroupNotification() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableResourceGroupNotificationWithOptions(runtime);
}

/**
 * @summary Enables the Transfer Associated Resources feature.
 *
 * @param request EnableAssociatedTransferRequest
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
 * @summary Enables the Transfer Associated Resources feature.
 *
 * @return EnableAssociatedTransferResponse
 */
EnableAssociatedTransferResponse Client::enableAssociatedTransfer() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAssociatedTransferWithOptions(runtime);
}

/**
 * @summary Enables the Automatic Resource Transfer feature. After the feature is enabled, you can create, update, delete, and query transfer rules.
 *
 * @param request EnableAutoGroupingRequest
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
 * @summary Enables the Automatic Resource Transfer feature. After the feature is enabled, you can create, update, delete, and query transfer rules.
 *
 * @return EnableAutoGroupingResponse
 */
EnableAutoGroupingResponse Client::enableAutoGrouping() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAutoGroupingWithOptions(runtime);
}

/**
 * @summary Enables the Control Policy feature.
 *
 * @description The Control Policy feature allows you to manage the permission boundaries of the folders or member accounts in a resource directory in a centralized manner. This feature is implemented based on the resource directory. You can use this feature to develop common or dedicated rules for access control. The Control Policy feature does not grant permissions but only defines permission boundaries. A member account in a resource directory can be used to access resources only after it is granted the required permissions by using the Resource Access Management (RAM) service. For more information, see [Overview of the Control Policy feature](https://help.aliyun.com/document_detail/178671.html).
 *
 * @param request EnableControlPolicyRequest
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
 * @summary Enables the Control Policy feature.
 *
 * @description The Control Policy feature allows you to manage the permission boundaries of the folders or member accounts in a resource directory in a centralized manner. This feature is implemented based on the resource directory. You can use this feature to develop common or dedicated rules for access control. The Control Policy feature does not grant permissions but only defines permission boundaries. A member account in a resource directory can be used to access resources only after it is granted the required permissions by using the Resource Access Management (RAM) service. For more information, see [Overview of the Control Policy feature](https://help.aliyun.com/document_detail/178671.html).
 *
 * @return EnableControlPolicyResponse
 */
EnableControlPolicyResponse Client::enableControlPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableControlPolicyWithOptions(runtime);
}

/**
 * @summary 开启RD
 *
 * @description You can use the current account or a newly created account to enable a resource directory. For more information, see [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
 * In this example, the current account is used to enable a resource directory.
 *
 * @param request EnableResourceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableResourceDirectoryResponse
 */
EnableResourceDirectoryResponse Client::enableResourceDirectoryWithOptions(const EnableResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
 * @summary 开启RD
 *
 * @description You can use the current account or a newly created account to enable a resource directory. For more information, see [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
 * In this example, the current account is used to enable a resource directory.
 *
 * @param request EnableResourceDirectoryRequest
 * @return EnableResourceDirectoryResponse
 */
EnableResourceDirectoryResponse Client::enableResourceDirectory(const EnableResourceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableResourceDirectoryWithOptions(request, runtime);
}

/**
 * @summary 开通资源组通知
 *
 * @param request EnableResourceGroupNotificationRequest
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
 * @summary 开通资源组通知
 *
 * @return EnableResourceGroupNotificationResponse
 */
EnableResourceGroupNotificationResponse Client::enableResourceGroupNotification() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableResourceGroupNotificationWithOptions(runtime);
}

/**
 * @description This topic provides an example on how to call the API operation to query the information of the member whose Alibaba Cloud account ID is `181761095690****`.
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
 * @description This topic provides an example on how to call the API operation to query the information of the member whose Alibaba Cloud account ID is `181761095690****`.
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
 * @description After you call the [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) operation to perform a member deletion check, you can call the GetAccountDeletionCheckResult operation to query the check result. If the check result shows that the member meets deletion requirements, you can delete the member. Otherwise, you need to first modify the items that do not meet requirements.
 * This topic provides an example on how to call the API operation to query the result of the deletion check for the member whose ID is `179855839641****`. The response shows that the member does not meet deletion requirements.
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
 * @summary Queries the result of a member deletion check.
 *
 * @description After you call the [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) operation to perform a member deletion check, you can call the GetAccountDeletionCheckResult operation to query the check result. If the check result shows that the member meets deletion requirements, you can delete the member. Otherwise, you need to first modify the items that do not meet requirements.
 * This topic provides an example on how to call the API operation to query the result of the deletion check for the member whose ID is `179855839641****`. The response shows that the member does not meet deletion requirements.
 *
 * @param request GetAccountDeletionCheckResultRequest
 * @return GetAccountDeletionCheckResultResponse
 */
GetAccountDeletionCheckResultResponse Client::getAccountDeletionCheckResult(const GetAccountDeletionCheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountDeletionCheckResultWithOptions(request, runtime);
}

/**
 * @summary 获取账号删除状态
 *
 * @description This topic provides an example on how to call the API operation to query the deletion status of the member whose Alibaba Cloud account ID is `169946124551****`. The response shows that the member is deleted.
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
 * @summary 获取账号删除状态
 *
 * @description This topic provides an example on how to call the API operation to query the deletion status of the member whose Alibaba Cloud account ID is `169946124551****`. The response shows that the member is deleted.
 *
 * @param request GetAccountDeletionStatusRequest
 * @return GetAccountDeletionStatusResponse
 */
GetAccountDeletionStatusResponse Client::getAccountDeletionStatus(const GetAccountDeletionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountDeletionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a transfer rule.
 *
 * @param request GetAutoGroupingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoGroupingRuleResponse
 */
GetAutoGroupingRuleResponse Client::getAutoGroupingRuleWithOptions(const GetAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
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
 * @summary Queries the information about a transfer rule.
 *
 * @param request GetAutoGroupingRuleRequest
 * @return GetAutoGroupingRuleResponse
 */
GetAutoGroupingRuleResponse Client::getAutoGroupingRule(const GetAutoGroupingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoGroupingRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Automatic Resource Transfer feature.
 *
 * @param request GetAutoGroupingStatusRequest
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
 * @summary Queries the status of the Automatic Resource Transfer feature.
 *
 * @return GetAutoGroupingStatusResponse
 */
GetAutoGroupingStatusResponse Client::getAutoGroupingStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoGroupingStatusWithOptions(runtime);
}

/**
 * @description This topic provides an example on how to call the API operation to query the details of the access control policy whose ID is `cp-SImPt8GCEwiq****`.
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
 * @description This topic provides an example on how to call the API operation to query the details of the access control policy whose ID is `cp-SImPt8GCEwiq****`.
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
 * @summary Queries the status of the Control Policy feature.
 *
 * @return GetControlPolicyEnablementStatusResponse
 */
GetControlPolicyEnablementStatusResponse Client::getControlPolicyEnablementStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getControlPolicyEnablementStatusWithOptions(runtime);
}

/**
 * @description In this example, the information of the folder `fd-Jyl5U7****` is queried.
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
 * @description In this example, the information of the folder `fd-Jyl5U7****` is queried.
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
 * @description In this example, the information of the invitation whose ID is `h-ycm4rp****` is queried.
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
 * @summary Queries the information of an invitation.
 *
 * @description In this example, the information of the invitation whose ID is `h-ycm4rp****` is queried.
 *
 * @param request GetHandshakeRequest
 * @return GetHandshakeResponse
 */
GetHandshakeResponse Client::getHandshake(const GetHandshakeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHandshakeWithOptions(request, runtime);
}

/**
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
 * @param request GetPayerForAccountRequest
 * @return GetPayerForAccountResponse
 */
GetPayerForAccountResponse Client::getPayerForAccount(const GetPayerForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPayerForAccountWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a permission policy.
 *
 * @param request GetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicyWithOptions(const GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
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
 * @summary Queries the information about a permission policy.
 *
 * @param request GetPolicyRequest
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const GetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a version of a permission policy.
 *
 * @param request GetPolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyVersionResponse
 */
GetPolicyVersionResponse Client::getPolicyVersionWithOptions(const GetPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
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
 * @summary Queries the information about a version of a permission policy.
 *
 * @param request GetPolicyVersionRequest
 * @return GetPolicyVersionResponse
 */
GetPolicyVersionResponse Client::getPolicyVersion(const GetPolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a resource directory. If you use a management account to call this API operation, the system returns the information of the resource directory that is enabled by using the management account. If you use a member to call this operation, the system returns the information of
 *
 * @description This topic provides an example on how to use a management account to call the API operation to query the information of the resource directory that is enabled by using the management account.
 *
 * @param request GetResourceDirectoryRequest
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
 * @summary Queries the information of a resource directory. If you use a management account to call this API operation, the system returns the information of the resource directory that is enabled by using the management account. If you use a member to call this operation, the system returns the information of
 *
 * @description This topic provides an example on how to use a management account to call the API operation to query the information of the resource directory that is enabled by using the management account.
 *
 * @return GetResourceDirectoryResponse
 */
GetResourceDirectoryResponse Client::getResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceDirectoryWithOptions(runtime);
}

/**
 * @summary Queries the information of a resource group.
 *
 * @param request GetResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupResponse
 */
GetResourceGroupResponse Client::getResourceGroupWithOptions(const GetResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.includeTags();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @summary Queries the information of a resource group.
 *
 * @param request GetResourceGroupRequest
 * @return GetResourceGroupResponse
 */
GetResourceGroupResponse Client::getResourceGroup(const GetResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 查询资源组管理员配置
 *
 * @param request GetResourceGroupAdminSettingRequest
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
 * @summary 查询资源组管理员配置
 *
 * @return GetResourceGroupAdminSettingResponse
 */
GetResourceGroupAdminSettingResponse Client::getResourceGroupAdminSetting() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupAdminSettingWithOptions(runtime);
}

/**
 * @summary 查询资源组通知设置
 *
 * @param request GetResourceGroupNotificationSettingRequest
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
 * @summary 查询资源组通知设置
 *
 * @return GetResourceGroupNotificationSettingResponse
 */
GetResourceGroupNotificationSettingResponse Client::getResourceGroupNotificationSetting() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupNotificationSettingWithOptions(runtime);
}

/**
 * @summary Queries the number of resources in a visible resource group.
 *
 * @param request GetResourceGroupResourceCountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupResourceCountsResponse
 */
GetResourceGroupResourceCountsResponse Client::getResourceGroupResourceCountsWithOptions(const GetResourceGroupResourceCountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupByKey()) {
    query["GroupByKey"] = request.groupByKey();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.resourceTypes();
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
 * @summary Queries the number of resources in a visible resource group.
 *
 * @param request GetResourceGroupResourceCountsRequest
 * @return GetResourceGroupResourceCountsResponse
 */
GetResourceGroupResourceCountsResponse Client::getResourceGroupResourceCounts(const GetResourceGroupResourceCountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupResourceCountsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a RAM role.
 *
 * @param request GetRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRoleWithOptions(const GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
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
 * @summary Queries the information about a RAM role.
 *
 * @param request GetRoleRequest
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRole(const GetRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoleWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the task that is used to delete a service-linked role.
 *
 * @param request GetServiceLinkedRoleDeletionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceLinkedRoleDeletionStatusResponse
 */
GetServiceLinkedRoleDeletionStatusResponse Client::getServiceLinkedRoleDeletionStatusWithOptions(const GetServiceLinkedRoleDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionTaskId()) {
    query["DeletionTaskId"] = request.deletionTaskId();
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
 * @summary Queries the status of the task that is used to delete a service-linked role.
 *
 * @param request GetServiceLinkedRoleDeletionStatusRequest
 * @return GetServiceLinkedRoleDeletionStatusResponse
 */
GetServiceLinkedRoleDeletionStatusResponse Client::getServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceLinkedRoleDeletionStatusWithOptions(request, runtime);
}

/**
 * @summary Enables a resource directory. After you enable a resource directory, the system automatically creates a root folder and sets the current account as the enterprise management account of the resource directory. The enterprise management account has all administrative permissions on this resource direc
 *
 * @description > 
 * *   An account can be used to enable a resource directory only after it passes enterprise real-name verification. An account that only passed individual real-name verification cannot be used to enable a resource directory.
 * *   We recommend that you only use the enterprise management account as the administrator of the resource directory. Do not use the enterprise management account to purchase cloud resources.
 *
 * @param request InitResourceDirectoryRequest
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
 * @summary Enables a resource directory. After you enable a resource directory, the system automatically creates a root folder and sets the current account as the enterprise management account of the resource directory. The enterprise management account has all administrative permissions on this resource direc
 *
 * @description > 
 * *   An account can be used to enable a resource directory only after it passes enterprise real-name verification. An account that only passed individual real-name verification cannot be used to enable a resource directory.
 * *   We recommend that you only use the enterprise management account as the administrator of the resource directory. Do not use the enterprise management account to purchase cloud resources.
 *
 * @return InitResourceDirectoryResponse
 */
InitResourceDirectoryResponse Client::initResourceDirectory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initResourceDirectoryWithOptions(runtime);
}

/**
 * @summary Invites an account to join a resource directory.
 *
 * @description This topic provides an example on how to call the API operation to invite the account `someone@example.com` to join a resource directory.
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
 * @summary Invites an account to join a resource directory.
 *
 * @description This topic provides an example on how to call the API operation to invite the account `someone@example.com` to join a resource directory.
 *
 * @param request InviteAccountToResourceDirectoryRequest
 * @return InviteAccountToResourceDirectoryResponse
 */
InviteAccountToResourceDirectoryResponse Client::inviteAccountToResourceDirectory(const InviteAccountToResourceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inviteAccountToResourceDirectoryWithOptions(request, runtime);
}

/**
 * @summary Queries all the members in a resource directory.
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

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Queries all the members in a resource directory.
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
 * @param request ListAncestorsRequest
 * @return ListAncestorsResponse
 */
ListAncestorsResponse Client::listAncestors(const ListAncestorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAncestorsWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of the Transfer Associated Resources feature.
 *
 * @param request ListAssociatedTransferSettingRequest
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
 * @summary Queries the settings of the Transfer Associated Resources feature.
 *
 * @return ListAssociatedTransferSettingResponse
 */
ListAssociatedTransferSettingResponse Client::listAssociatedTransferSetting() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAssociatedTransferSettingWithOptions(runtime);
}

/**
 * @summary 列出自动分组修正记录
 *
 * @param request ListAutoGroupingRemediationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoGroupingRemediationsResponse
 */
ListAutoGroupingRemediationsResponse Client::listAutoGroupingRemediationsWithOptions(const ListAutoGroupingRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEarliestRemediationTime()) {
    query["EarliestRemediationTime"] = request.earliestRemediationTime();
  }

  if (!!request.hasLatestRemediationTime()) {
    query["LatestRemediationTime"] = request.latestRemediationTime();
  }

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

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasService()) {
    query["Service"] = request.service();
  }

  if (!!request.hasTargetResourceGroupId()) {
    query["TargetResourceGroupId"] = request.targetResourceGroupId();
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
 * @summary 列出自动分组修正记录
 *
 * @param request ListAutoGroupingRemediationsRequest
 * @return ListAutoGroupingRemediationsResponse
 */
ListAutoGroupingRemediationsResponse Client::listAutoGroupingRemediations(const ListAutoGroupingRemediationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoGroupingRemediationsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of transfer rules.
 *
 * @param request ListAutoGroupingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoGroupingRulesResponse
 */
ListAutoGroupingRulesResponse Client::listAutoGroupingRulesWithOptions(const ListAutoGroupingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
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
 * @summary Queries a list of transfer rules.
 *
 * @param request ListAutoGroupingRulesRequest
 * @return ListAutoGroupingRulesResponse
 */
ListAutoGroupingRulesResponse Client::listAutoGroupingRules(const ListAutoGroupingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoGroupingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries access control policies.
 *
 * @description This topic provides an example on how to call the API operation to query the system access control policies within a resource directory. The response shows that the resource directory has only one system access control policy. The policy is named `FullAliyunAccess`.
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
 * @summary Queries access control policies.
 *
 * @description This topic provides an example on how to call the API operation to query the system access control policies within a resource directory. The response shows that the resource directory has only one system access control policy. The policy is named `FullAliyunAccess`.
 *
 * @param request ListControlPoliciesRequest
 * @return ListControlPoliciesResponse
 */
ListControlPoliciesResponse Client::listControlPolicies(const ListControlPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listControlPoliciesWithOptions(request, runtime);
}

/**
 * @description This topic provides an example on how to call the API operation to query the access control policies that are attached to the folder `fd-ZDNPiT****`.
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
 * @description This topic provides an example on how to call the API operation to query the access control policies that are attached to the folder `fd-ZDNPiT****`.
 *
 * @param request ListControlPolicyAttachmentsForTargetRequest
 * @return ListControlPolicyAttachmentsForTargetResponse
 */
ListControlPolicyAttachmentsForTargetResponse Client::listControlPolicyAttachmentsForTarget(const ListControlPolicyAttachmentsForTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listControlPolicyAttachmentsForTargetWithOptions(request, runtime);
}

/**
 * @summary 列出所有的代理管理员
 *
 * @description This topic provides an example on how to call the API operation to query all delegated administrator accounts in a resource directory. The response shows that two delegated administrator accounts for Cloud Firewall exist in the resource directory.
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
 * @summary 列出所有的代理管理员
 *
 * @description This topic provides an example on how to call the API operation to query all delegated administrator accounts in a resource directory. The response shows that two delegated administrator accounts for Cloud Firewall exist in the resource directory.
 *
 * @param request ListDelegatedAdministratorsRequest
 * @return ListDelegatedAdministratorsResponse
 */
ListDelegatedAdministratorsResponse Client::listDelegatedAdministrators(const ListDelegatedAdministratorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDelegatedAdministratorsWithOptions(request, runtime);
}

/**
 * @summary 查看指定账号被设置为哪些可信服务的委派管理员
 *
 * @description This topic provides an example on how to call the API operation to query the trusted services for which the member `138660628348****` is specified as a delegated administrator account. The response shows that the member is specified as a delegated administrator account of Cloud Firewall.
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
 * @summary 查看指定账号被设置为哪些可信服务的委派管理员
 *
 * @description This topic provides an example on how to call the API operation to query the trusted services for which the member `138660628348****` is specified as a delegated administrator account. The response shows that the member is specified as a delegated administrator account of Cloud Firewall.
 *
 * @param request ListDelegatedServicesForAccountRequest
 * @return ListDelegatedServicesForAccountResponse
 */
ListDelegatedServicesForAccountResponse Client::listDelegatedServicesForAccount(const ListDelegatedServicesForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDelegatedServicesForAccountWithOptions(request, runtime);
}

/**
 * @description >  You can view the information of only the first-level subfolders of a folder.
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
 * @description >  You can view the information of only the first-level subfolders of a folder.
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
 * @description This topic provides an example on how to call the API operation to query the invitations that are associated with the management account `172841235500****`. The response shows that two invitations are associated with the management account.
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
 * @summary Queries the invitations that are associated with an account.
 *
 * @description This topic provides an example on how to call the API operation to query the invitations that are associated with the management account `172841235500****`. The response shows that two invitations are associated with the management account.
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
 * @summary Queries a list of permission policies.
 *
 * @param request ListPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Queries a list of permission policies.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries policy attachment records.
 *
 * @description You can view the following information:
 * *   Policy attachment records within an Alibaba Cloud account or a resource group
 * *   Permission policies attached to RAM users, RAM user groups, or RAM roles
 * *   RAM users, RAM user groups, or RAM roles to which permission policies are attached within an Alibaba Cloud account or a resource group
 *
 * @param request ListPolicyAttachmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyAttachmentsResponse
 */
ListPolicyAttachmentsResponse Client::listPolicyAttachmentsWithOptions(const ListPolicyAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  if (!!request.hasPrincipalName()) {
    query["PrincipalName"] = request.principalName();
  }

  if (!!request.hasPrincipalType()) {
    query["PrincipalType"] = request.principalType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @summary Queries policy attachment records.
 *
 * @description You can view the following information:
 * *   Policy attachment records within an Alibaba Cloud account or a resource group
 * *   Permission policies attached to RAM users, RAM user groups, or RAM roles
 * *   RAM users, RAM user groups, or RAM roles to which permission policies are attached within an Alibaba Cloud account or a resource group
 *
 * @param request ListPolicyAttachmentsRequest
 * @return ListPolicyAttachmentsResponse
 */
ListPolicyAttachmentsResponse Client::listPolicyAttachments(const ListPolicyAttachmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyAttachmentsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of versions of a policy.
 *
 * @param request ListPolicyVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyVersionsResponse
 */
ListPolicyVersionsResponse Client::listPolicyVersionsWithOptions(const ListPolicyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
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
 * @summary Queries a list of versions of a policy.
 *
 * @param request ListPolicyVersionsRequest
 * @return ListPolicyVersionsResponse
 */
ListPolicyVersionsResponse Client::listPolicyVersions(const ListPolicyVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyVersionsWithOptions(request, runtime);
}

/**
 * @description You can call this API operation to query all resource groups within the current account. You can also call this API operation to query a specific resource group based on the status, ID, identifier, or display name of the resource group.
 * This topic provides an example on how to call the API operation to query the basic information about the resource groups `rg-1hSBH2****` and `rg-9gLOoK****` within the current account.
 *
 * @param request ListResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroupsWithOptions(const ListResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.includeTags();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.resourceGroupIds();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @description You can call this API operation to query all resource groups within the current account. You can also call this API operation to query a specific resource group based on the status, ID, identifier, or display name of the resource group.
 * This topic provides an example on how to call the API operation to query the basic information about the resource groups `rg-1hSBH2****` and `rg-9gLOoK****` within the current account.
 *
 * @param request ListResourceGroupsRequest
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroups(const ListResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary 列出资源组与用户授权信息
 *
 * @param request ListResourceGroupsWithAuthDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupsWithAuthDetailsResponse
 */
ListResourceGroupsWithAuthDetailsResponse Client::listResourceGroupsWithAuthDetailsWithOptions(const ListResourceGroupsWithAuthDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.includeTags();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.resourceGroupIds();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.resourceTypes();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary 列出资源组与用户授权信息
 *
 * @param request ListResourceGroupsWithAuthDetailsRequest
 * @return ListResourceGroupsWithAuthDetailsResponse
 */
ListResourceGroupsWithAuthDetailsResponse Client::listResourceGroupsWithAuthDetails(const ListResourceGroupsWithAuthDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupsWithAuthDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries resources that can be accessed by the current account in resource groups.
 *
 * @description >  You can use a RAM role that is not associated with a session policy to call this API operation.
 * This topic provides an example on how to call the API operation to query resources that can be accessed by the current account in resource groups. The response shows that the current account can access only the Elastic Compute Service (ECS) instance `i-23v38****` in the resource group `rg-uPJpP****`.
 *
 * @param request ListResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResourcesWithOptions(const ListResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.resourceTypes();
  }

  if (!!request.hasService()) {
    query["Service"] = request.service();
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
 * @summary Queries resources that can be accessed by the current account in resource groups.
 *
 * @description >  You can use a RAM role that is not associated with a session policy to call this API operation.
 * This topic provides an example on how to call the API operation to query resources that can be accessed by the current account in resource groups. The response shows that the current account can access only the Elastic Compute Service (ECS) instance `i-23v38****` in the resource group `rg-uPJpP****`.
 *
 * @param request ListResourcesRequest
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResources(const ListResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of RAM roles.
 *
 * @param request ListRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Queries a list of RAM roles.
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRolesWithOptions(request, runtime);
}

/**
 * @summary 列出所有的Tag key
 *
 * @description This topic provides an example on how to call the API operation to query tag keys. The response shows that the custom tag key team exists.
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
 * @summary 列出所有的Tag key
 *
 * @description This topic provides an example on how to call the API operation to query tag keys. The response shows that the custom tag key team exists.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to resource groups or the members in a resource directory.
 *
 * @description This topic provides an example on how to call the API operation to query the tags that are added to the resource group with an ID of `rg-aekz6bre2uq****`. The response shows that only the `k1:v1` tag is added to the resource group.
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
 * @summary Queries the tags that are added to resource groups or the members in a resource directory.
 *
 * @description This topic provides an example on how to call the API operation to query the tags that are added to the resource group with an ID of `rg-aekz6bre2uq****`. The response shows that only the `k1:v1` tag is added to the resource group.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 列出所有的Tag values
 *
 * @description This topic provides an example on how to call the API operation to query the tag values of the tag key k1. The response shows that the tag value of the tag key k1 is v1.
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
 * @summary 列出所有的Tag values
 *
 * @description This topic provides an example on how to call the API operation to query the tag values of the tag key k1. The response shows that the tag value of the tag key k1 is v1.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Queries the objects to which a specific control policy is attached.
 *
 * @description In this example, the folders or member accounts to which the control policy `cp-jExXAqIYkwHN****` is attached are queried. The returned result shows that the control policy is attached to the folder `fd-ZDNPiT****`.
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
 * @summary Queries the objects to which a specific control policy is attached.
 *
 * @description In this example, the folders or member accounts to which the control policy `cp-jExXAqIYkwHN****` is attached are queried. The returned result shows that the control policy is attached to the folder `fd-ZDNPiT****`.
 *
 * @param request ListTargetAttachmentsForControlPolicyRequest
 * @return ListTargetAttachmentsForControlPolicyResponse
 */
ListTargetAttachmentsForControlPolicyResponse Client::listTargetAttachmentsForControlPolicy(const ListTargetAttachmentsForControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTargetAttachmentsForControlPolicyWithOptions(request, runtime);
}

/**
 * @description >  Only an enterprise management account or delegated administrator account can be used to call this operation.
 * In this example, the trusted services that are enabled within an enterprise management account are queried. The returned result shows that the trusted services Cloud Config and ActionTrail are enabled within the enterprise management account.
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
 * @description >  Only an enterprise management account or delegated administrator account can be used to call this operation.
 * In this example, the trusted services that are enabled within an enterprise management account are queried. The returned result shows that the trusted services Cloud Config and ActionTrail are enabled within the enterprise management account.
 *
 * @param request ListTrustedServiceStatusRequest
 * @return ListTrustedServiceStatusResponse
 */
ListTrustedServiceStatusResponse Client::listTrustedServiceStatus(const ListTrustedServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTrustedServiceStatusWithOptions(request, runtime);
}

/**
 * @summary 移动账号
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
 * @summary 移动账号
 *
 * @param request MoveAccountRequest
 * @return MoveAccountResponse
 */
MoveAccountResponse Client::moveAccount(const MoveAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveAccountWithOptions(request, runtime);
}

/**
 * @summary Moves resources from one resource group to another. You can move multiple resources that reside in different regions, are used by different Alibaba Cloud services, or belong to different resource groups.
 *
 * @description For more information about Alibaba Cloud services whose resources can be moved between resource groups, see the **Supported by the API** column in [Alibaba Cloud services that support resource groups](https://help.aliyun.com/document_detail/94479.html).
 * In this example, two virtual private clouds (VPCs) `vpc-bp1sig0mjktx5ewx1****` and `vpc-bp1visxm225pv49dz****` that reside in different regions and belong to different resource groups are moved to the resource group `rg-aekzmeobk5w****`.
 *
 * @param request MoveResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourcesResponse
 */
MoveResourcesResponse Client::moveResourcesWithOptions(const MoveResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
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
 * @summary Moves resources from one resource group to another. You can move multiple resources that reside in different regions, are used by different Alibaba Cloud services, or belong to different resource groups.
 *
 * @description For more information about Alibaba Cloud services whose resources can be moved between resource groups, see the **Supported by the API** column in [Alibaba Cloud services that support resource groups](https://help.aliyun.com/document_detail/94479.html).
 * In this example, two virtual private clouds (VPCs) `vpc-bp1sig0mjktx5ewx1****` and `vpc-bp1visxm225pv49dz****` that reside in different regions and belong to different resource groups are moved to the resource group `rg-aekzmeobk5w****`.
 *
 * @param request MoveResourcesRequest
 * @return MoveResourcesResponse
 */
MoveResourcesResponse Client::moveResources(const MoveResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourcesWithOptions(request, runtime);
}

/**
 * @summary 升级资源账号
 *
 * @param request PromoteResourceAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PromoteResourceAccountResponse
 */
PromoteResourceAccountResponse Client::promoteResourceAccountWithOptions(const PromoteResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 升级资源账号
 *
 * @param request PromoteResourceAccountRequest
 * @return PromoteResourceAccountResponse
 */
PromoteResourceAccountResponse Client::promoteResourceAccount(const PromoteResourceAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return promoteResourceAccountWithOptions(request, runtime);
}

/**
 * @description The delegated administrator account can be used to access the information of the resource directory and view the structure and members of the resource directory. The delegated administrator account can also be used to perform service-related management operations in the trusted service on behalf of the management account of the resource directory.
 * When you call this operation, you must take note of the following limits:
 * *   Only some trusted services support delegated administrator accounts. For more information, see [Supported trusted services](https://help.aliyun.com/document_detail/208133.html).
 * *   Only the management account of a resource directory or an authorized RAM user or RAM role of the management account can be used to call this operation.
 * *   The number of delegated administrator accounts that are allowed for a trusted service is defined by the trusted service.
 * This topic provides an example on how to call the API operation to specify the member `181761095690****` as a delegated administrator account of Cloud Firewall.
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
 * @description The delegated administrator account can be used to access the information of the resource directory and view the structure and members of the resource directory. The delegated administrator account can also be used to perform service-related management operations in the trusted service on behalf of the management account of the resource directory.
 * When you call this operation, you must take note of the following limits:
 * *   Only some trusted services support delegated administrator accounts. For more information, see [Supported trusted services](https://help.aliyun.com/document_detail/208133.html).
 * *   Only the management account of a resource directory or an authorized RAM user or RAM role of the management account can be used to call this operation.
 * *   The number of delegated administrator accounts that are allowed for a trusted service is defined by the trusted service.
 * This topic provides an example on how to call the API operation to specify the member `181761095690****` as a delegated administrator account of Cloud Firewall.
 *
 * @param request RegisterDelegatedAdministratorRequest
 * @return RegisterDelegatedAdministratorResponse
 */
RegisterDelegatedAdministratorResponse Client::registerDelegatedAdministrator(const RegisterDelegatedAdministratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDelegatedAdministratorWithOptions(request, runtime);
}

/**
 * @description This topic provides an example on how to call the API operation to remove the member `177242285274****` from a resource directory.
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
 * @description This topic provides an example on how to call the API operation to remove the member `177242285274****` from a resource directory.
 *
 * @param request RemoveCloudAccountRequest
 * @return RemoveCloudAccountResponse
 */
RemoveCloudAccountResponse Client::removeCloudAccount(const RemoveCloudAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeCloudAccountWithOptions(request, runtime);
}

/**
 * @summary 重新发送创建云账号的邮箱验证
 *
 * @param request ResendCreateCloudAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendCreateCloudAccountEmailResponse
 */
ResendCreateCloudAccountEmailResponse Client::resendCreateCloudAccountEmailWithOptions(const ResendCreateCloudAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.recordId();
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
 * @summary 重新发送创建云账号的邮箱验证
 *
 * @param request ResendCreateCloudAccountEmailRequest
 * @return ResendCreateCloudAccountEmailResponse
 */
ResendCreateCloudAccountEmailResponse Client::resendCreateCloudAccountEmail(const ResendCreateCloudAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendCreateCloudAccountEmailWithOptions(request, runtime);
}

/**
 * @summary 重新发送升级资源账号的邮箱验证
 *
 * @param request ResendPromoteResourceAccountEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendPromoteResourceAccountEmailResponse
 */
ResendPromoteResourceAccountEmailResponse Client::resendPromoteResourceAccountEmailWithOptions(const ResendPromoteResourceAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.recordId();
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
 * @summary 重新发送升级资源账号的邮箱验证
 *
 * @param request ResendPromoteResourceAccountEmailRequest
 * @return ResendPromoteResourceAccountEmailResponse
 */
ResendPromoteResourceAccountEmailResponse Client::resendPromoteResourceAccountEmail(const ResendPromoteResourceAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendPromoteResourceAccountEmailWithOptions(request, runtime);
}

/**
 * @summary 重新发送确认邮件
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
 * @summary 重新发送确认邮件
 *
 * @param request RetryChangeAccountEmailRequest
 * @return RetryChangeAccountEmailResponse
 */
RetryChangeAccountEmailResponse Client::retryChangeAccountEmail(const RetryChangeAccountEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryChangeAccountEmailWithOptions(request, runtime);
}

/**
 * @summary 发送绑定安全手机验证码
 *
 * @description To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this operation.
 * In this example, a verification code is sent to the mobile phone number that you want to bind to the resource account `138660628348****`.
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
 * @summary 发送绑定安全手机验证码
 *
 * @description To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this operation.
 * In this example, a verification code is sent to the mobile phone number that you want to bind to the resource account `138660628348****`.
 *
 * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
 * @return SendVerificationCodeForBindSecureMobilePhoneResponse
 */
SendVerificationCodeForBindSecureMobilePhoneResponse Client::sendVerificationCodeForBindSecureMobilePhone(const SendVerificationCodeForBindSecureMobilePhoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendVerificationCodeForBindSecureMobilePhoneWithOptions(request, runtime);
}

/**
 * @summary 发送开启资源目录短信
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
 * @summary 发送开启资源目录短信
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
 * @summary Sets a default version for a permission policy.
 *
 * @param request SetDefaultPolicyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultPolicyVersionResponse
 */
SetDefaultPolicyVersionResponse Client::setDefaultPolicyVersionWithOptions(const SetDefaultPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
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
 * @summary Sets a default version for a permission policy.
 *
 * @param request SetDefaultPolicyVersionRequest
 * @return SetDefaultPolicyVersionResponse
 */
SetDefaultPolicyVersionResponse Client::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultPolicyVersionWithOptions(request, runtime);
}

/**
 * @summary 开启或关闭成员删除许可
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
 * @summary 开启或关闭成员删除许可
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
 * @summary Adds tags to resource groups or the members in a resource directory.
 *
 * @description This topic provides an example on how to call the API operation to add the tag `k1:v1` to the resource group with an ID of `rg-aekz6bre2uq****`.
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
 * @summary Adds tags to resource groups or the members in a resource directory.
 *
 * @description This topic provides an example on how to call the API operation to add the tag `k1:v1` to the resource group with an ID of `rg-aekz6bre2uq****`.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resource groups or the members in a resource directory.
 *
 * @description This topic provides an example on how to call the API operation to remove the tag whose tag key is `k1` from the resource group whose ID is `rg-aek2dpwyrfr****`.
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
 * @summary Removes tags from resource groups or the members in a resource directory.
 *
 * @description This topic provides an example on how to call the API operation to remove the tag whose tag key is `k1` from the resource group whose ID is `rg-aek2dpwyrfr****`.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @description *   To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this operation.
 * *   Before you switch the type of a member from resource account to cloud account, make sure that specific conditions are met. For more information about the conditions, see [Switch a resource account to a cloud account](https://help.aliyun.com/document_detail/111233.html).
 * *   Before you switch the type of a member from cloud account to resource account, make sure that specific conditions are met. For more information about the conditions, see [Switch a cloud account to a resource account](https://help.aliyun.com/document_detail/209980.html).
 * This example provides an example on how to call the API operation to change the display name of the member `12323344****` to `admin`.
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
 * @description *   To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this operation.
 * *   Before you switch the type of a member from resource account to cloud account, make sure that specific conditions are met. For more information about the conditions, see [Switch a resource account to a cloud account](https://help.aliyun.com/document_detail/111233.html).
 * *   Before you switch the type of a member from cloud account to resource account, make sure that specific conditions are met. For more information about the conditions, see [Switch a cloud account to a resource account](https://help.aliyun.com/document_detail/209980.html).
 * This example provides an example on how to call the API operation to change the display name of the member `12323344****` to `admin`.
 *
 * @param request UpdateAccountRequest
 * @return UpdateAccountResponse
 */
UpdateAccountResponse Client::updateAccount(const UpdateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccountWithOptions(request, runtime);
}

/**
 * @summary Updates the settings of the Transfer Associated Resources feature.
 *
 * @description For information about the resources that support the Transfer Associated Resources feature, see [Use the Transfer Associated Resources feature](https://help.aliyun.com/document_detail/606232.html).
 *
 * @param request UpdateAssociatedTransferSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAssociatedTransferSettingResponse
 */
UpdateAssociatedTransferSettingResponse Client::updateAssociatedTransferSettingWithOptions(const UpdateAssociatedTransferSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableExistingResourcesTransfer()) {
    query["EnableExistingResourcesTransfer"] = request.enableExistingResourcesTransfer();
  }

  if (!!request.hasRuleSettings()) {
    query["RuleSettings"] = request.ruleSettings();
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
 * @summary Updates the settings of the Transfer Associated Resources feature.
 *
 * @description For information about the resources that support the Transfer Associated Resources feature, see [Use the Transfer Associated Resources feature](https://help.aliyun.com/document_detail/606232.html).
 *
 * @param request UpdateAssociatedTransferSettingRequest
 * @return UpdateAssociatedTransferSettingResponse
 */
UpdateAssociatedTransferSettingResponse Client::updateAssociatedTransferSetting(const UpdateAssociatedTransferSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAssociatedTransferSettingWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of the Automatic Resource Transfer feature. You can update only the configuration of the Transfer Existing Associated Resources feature.
 *
 * @param request UpdateAutoGroupingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoGroupingConfigResponse
 */
UpdateAutoGroupingConfigResponse Client::updateAutoGroupingConfigWithOptions(const UpdateAutoGroupingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableExistingResourcesTransfer()) {
    query["EnableExistingResourcesTransfer"] = request.enableExistingResourcesTransfer();
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
 * @summary Updates the configuration of the Automatic Resource Transfer feature. You can update only the configuration of the Transfer Existing Associated Resources feature.
 *
 * @param request UpdateAutoGroupingConfigRequest
 * @return UpdateAutoGroupingConfigResponse
 */
UpdateAutoGroupingConfigResponse Client::updateAutoGroupingConfig(const UpdateAutoGroupingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoGroupingConfigWithOptions(request, runtime);
}

/**
 * @summary Updates a transfer rule.
 *
 * @param request UpdateAutoGroupingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoGroupingRuleResponse
 */
UpdateAutoGroupingRuleResponse Client::updateAutoGroupingRuleWithOptions(const UpdateAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExcludeRegionIdsScope()) {
    query["ExcludeRegionIdsScope"] = request.excludeRegionIdsScope();
  }

  if (!!request.hasExcludeResourceGroupIdsScope()) {
    query["ExcludeResourceGroupIdsScope"] = request.excludeResourceGroupIdsScope();
  }

  if (!!request.hasExcludeResourceIdsScope()) {
    query["ExcludeResourceIdsScope"] = request.excludeResourceIdsScope();
  }

  if (!!request.hasExcludeResourceTypesScope()) {
    query["ExcludeResourceTypesScope"] = request.excludeResourceTypesScope();
  }

  if (!!request.hasRegionIdsScope()) {
    query["RegionIdsScope"] = request.regionIdsScope();
  }

  if (!!request.hasResourceGroupIdsScope()) {
    query["ResourceGroupIdsScope"] = request.resourceGroupIdsScope();
  }

  if (!!request.hasResourceIdsScope()) {
    query["ResourceIdsScope"] = request.resourceIdsScope();
  }

  if (!!request.hasResourceTypesScope()) {
    query["ResourceTypesScope"] = request.resourceTypesScope();
  }

  if (!!request.hasRuleContents()) {
    query["RuleContents"] = request.ruleContents();
  }

  if (!!request.hasRuleDesc()) {
    query["RuleDesc"] = request.ruleDesc();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
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
 * @summary Updates a transfer rule.
 *
 * @param request UpdateAutoGroupingRuleRequest
 * @return UpdateAutoGroupingRuleResponse
 */
UpdateAutoGroupingRuleResponse Client::updateAutoGroupingRule(const UpdateAutoGroupingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoGroupingRuleWithOptions(request, runtime);
}

/**
 * @description In this example, the name of the access control policy whose ID is `cp-jExXAqIYkwHN****` is changed to `NewControlPolicy`.
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
 * @description In this example, the name of the access control policy whose ID is `cp-jExXAqIYkwHN****` is changed to `NewControlPolicy`.
 *
 * @param request UpdateControlPolicyRequest
 * @return UpdateControlPolicyResponse
 */
UpdateControlPolicyResponse Client::updateControlPolicy(const UpdateControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateControlPolicyWithOptions(request, runtime);
}

/**
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
 * @param request UpdateFolderRequest
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolder(const UpdateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFolderWithOptions(request, runtime);
}

/**
 * @description In this example, the display name of the resource group `rg-9gLOoK****` is changed to `project`.
 *
 * @param request UpdateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceGroupResponse
 */
UpdateResourceGroupResponse Client::updateResourceGroupWithOptions(const UpdateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.newDisplayName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @description In this example, the display name of the resource group `rg-9gLOoK****` is changed to `project`.
 *
 * @param request UpdateResourceGroupRequest
 * @return UpdateResourceGroupResponse
 */
UpdateResourceGroupResponse Client::updateResourceGroup(const UpdateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 更新资源组管理员配置
 *
 * @param request UpdateResourceGroupAdminSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceGroupAdminSettingResponse
 */
UpdateResourceGroupAdminSettingResponse Client::updateResourceGroupAdminSettingWithOptions(const UpdateResourceGroupAdminSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreatorAsAdmin()) {
    query["CreatorAsAdmin"] = request.creatorAsAdmin();
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
 * @summary 更新资源组管理员配置
 *
 * @param request UpdateResourceGroupAdminSettingRequest
 * @return UpdateResourceGroupAdminSettingResponse
 */
UpdateResourceGroupAdminSettingResponse Client::updateResourceGroupAdminSetting(const UpdateResourceGroupAdminSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceGroupAdminSettingWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a Resource Access Management (RAM) role.
 *
 * @description In this example, the description of the RAM role `ECSAdmin` is updated to `ECS administrator`.
 *
 * @param request UpdateRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRoleWithOptions(const UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewAssumeRolePolicyDocument()) {
    query["NewAssumeRolePolicyDocument"] = request.newAssumeRolePolicyDocument();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.newDescription();
  }

  if (!!request.hasNewMaxSessionDuration()) {
    query["NewMaxSessionDuration"] = request.newMaxSessionDuration();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
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
 * @summary Updates the information about a Resource Access Management (RAM) role.
 *
 * @description In this example, the description of the RAM role `ECSAdmin` is updated to `ECS administrator`.
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