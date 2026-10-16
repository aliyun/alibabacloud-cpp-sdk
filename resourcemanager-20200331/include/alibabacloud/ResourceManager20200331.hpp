// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RESOURCEMANAGER20200331_HPP_
#define ALIBABACLOUD_RESOURCEMANAGER20200331_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ResourceManager20200331Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ResourceManager20200331.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::AcceptHandshakeResponse acceptHandshakeWithOptions(const Models::AcceptHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Accepts an invitation by the invited Alibaba Cloud account by calling AcceptHandshake.
       *
       * @description After the invited Alibaba Cloud account successfully joins a resource directory, the account becomes a member of the resource directory. The resource directory uses the name of the invited Alibaba Cloud account as the display name and account name of the member by default.
       * This topic provides an example on how the invited Alibaba Cloud account `177242285274****` accepts an invitation from the resource directory `rd-3G****`. The handshake ID is `h-Ih8IuPfvV0t0****`.
       *
       * @param request AcceptHandshakeRequest
       * @return AcceptHandshakeResponse
       */
      Models::AcceptHandshakeResponse acceptHandshake(const Models::AcceptHandshakeRequest &request);

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
      Models::AttachControlPolicyResponse attachControlPolicyWithOptions(const Models::AttachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AttachControlPolicyResponse attachControlPolicy(const Models::AttachControlPolicyRequest &request);

      /**
       * @summary Invokes AttachPolicy to add an access policy to an authorization object (a Resource Access Management (RAM) user, RAM user group, or RAM role), which is authorization. After the authorization is complete, the authorized object obtains access permissions on resources within the specified resource group or Alibaba Cloud account.
       *
       * @param request AttachPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicyResponse
       */
      Models::AttachPolicyResponse attachPolicyWithOptions(const Models::AttachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes AttachPolicy to add an access policy to an authorization object (a Resource Access Management (RAM) user, RAM user group, or RAM role), which is authorization. After the authorization is complete, the authorized object obtains access permissions on resources within the specified resource group or Alibaba Cloud account.
       *
       * @param request AttachPolicyRequest
       * @return AttachPolicyResponse
       */
      Models::AttachPolicyResponse attachPolicy(const Models::AttachPolicyRequest &request);

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
      Models::BindSecureMobilePhoneResponse bindSecureMobilePhoneWithOptions(const Models::BindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::BindSecureMobilePhoneResponse bindSecureMobilePhone(const Models::BindSecureMobilePhoneRequest &request);

      /**
       * @summary Cancels the modification of a member account email address.
       *
       * @param request CancelChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelChangeAccountEmailResponse
       */
      Models::CancelChangeAccountEmailResponse cancelChangeAccountEmailWithOptions(const Models::CancelChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the modification of a member account email address.
       *
       * @param request CancelChangeAccountEmailRequest
       * @return CancelChangeAccountEmailResponse
       */
      Models::CancelChangeAccountEmailResponse cancelChangeAccountEmail(const Models::CancelChangeAccountEmailRequest &request);

      /**
       * @summary Cancels the creation of a member of the cloud account type in a resource directory.
       *
       * @param request CancelCreateCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCreateCloudAccountResponse
       */
      Models::CancelCreateCloudAccountResponse cancelCreateCloudAccountWithOptions(const Models::CancelCreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the creation of a member of the cloud account type in a resource directory.
       *
       * @param request CancelCreateCloudAccountRequest
       * @return CancelCreateCloudAccountResponse
       */
      Models::CancelCreateCloudAccountResponse cancelCreateCloudAccount(const Models::CancelCreateCloudAccountRequest &request);

      /**
       * @summary Cancels a handshake.
       *
       * @description This topic provides an example on how to cancel the handshake whose ID is `h-ycm4rp****`.
       *
       * @param request CancelHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelHandshakeResponse
       */
      Models::CancelHandshakeResponse cancelHandshakeWithOptions(const Models::CancelHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a handshake.
       *
       * @description This topic provides an example on how to cancel the handshake whose ID is `h-ycm4rp****`.
       *
       * @param request CancelHandshakeRequest
       * @return CancelHandshakeResponse
       */
      Models::CancelHandshakeResponse cancelHandshake(const Models::CancelHandshakeRequest &request);

      /**
       * @summary Cancels the upgrade of a resource directory resource account to an Alibaba Cloud account.
       *
       * @param request CancelPromoteResourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPromoteResourceAccountResponse
       */
      Models::CancelPromoteResourceAccountResponse cancelPromoteResourceAccountWithOptions(const Models::CancelPromoteResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the upgrade of a resource directory resource account to an Alibaba Cloud account.
       *
       * @param request CancelPromoteResourceAccountRequest
       * @return CancelPromoteResourceAccountResponse
       */
      Models::CancelPromoteResourceAccountResponse cancelPromoteResourceAccount(const Models::CancelPromoteResourceAccountRequest &request);

      /**
       * @summary Modifies the email address of a member account by calling ChangeAccountEmail.
       *
       * @param request ChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAccountEmailResponse
       */
      Models::ChangeAccountEmailResponse changeAccountEmailWithOptions(const Models::ChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the email address of a member account by calling ChangeAccountEmail.
       *
       * @param request ChangeAccountEmailRequest
       * @return ChangeAccountEmailResponse
       */
      Models::ChangeAccountEmailResponse changeAccountEmail(const Models::ChangeAccountEmailRequest &request);

      /**
       * @summary Calls CheckAccountDelete to perform a member account deletion check task.
       *
       * @description Before deleting a member account, call this API to perform a pre-deletion condition check on the target member account.
       *
       * @param request CheckAccountDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountDeleteResponse
       */
      Models::CheckAccountDeleteResponse checkAccountDeleteWithOptions(const Models::CheckAccountDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CheckAccountDelete to perform a member account deletion check task.
       *
       * @description Before deleting a member account, call this API to perform a pre-deletion condition check on the target member account.
       *
       * @param request CheckAccountDeleteRequest
       * @return CheckAccountDeleteResponse
       */
      Models::CheckAccountDeleteResponse checkAccountDelete(const Models::CheckAccountDeleteRequest &request);

      /**
       * @summary Creates an automatic allocation rule by calling CreateAutoGroupingRule. Two types are supported: custom allocation rules and attached-resource allocation rules.
       *
       * @description You can create up to 10 custom allocation rules, and each custom allocation rule supports up to 10 rule content entries.
       *
       * @param request CreateAutoGroupingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoGroupingRuleResponse
       */
      Models::CreateAutoGroupingRuleResponse createAutoGroupingRuleWithOptions(const Models::CreateAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic allocation rule by calling CreateAutoGroupingRule. Two types are supported: custom allocation rules and attached-resource allocation rules.
       *
       * @description You can create up to 10 custom allocation rules, and each custom allocation rule supports up to 10 rule content entries.
       *
       * @param request CreateAutoGroupingRuleRequest
       * @return CreateAutoGroupingRuleResponse
       */
      Models::CreateAutoGroupingRuleResponse createAutoGroupingRule(const Models::CreateAutoGroupingRuleRequest &request);

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
      Models::CreateCloudAccountResponse createCloudAccountWithOptions(const Models::CreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCloudAccountResponse createCloudAccount(const Models::CreateCloudAccountRequest &request);

      /**
       * @summary Calls CreateControlPolicy to create a custom control policy.
       *
       * @description This topic provides an example on how to create a control policy named `ExampleControlPolicy` that prohibits modifications to the ResourceDirectoryAccountAccessRole role and its permissions.
       *
       * @param request CreateControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateControlPolicyResponse
       */
      Models::CreateControlPolicyResponse createControlPolicyWithOptions(const Models::CreateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CreateControlPolicy to create a custom control policy.
       *
       * @description This topic provides an example on how to create a control policy named `ExampleControlPolicy` that prohibits modifications to the ResourceDirectoryAccountAccessRole role and its permissions.
       *
       * @param request CreateControlPolicyRequest
       * @return CreateControlPolicyResponse
       */
      Models::CreateControlPolicyResponse createControlPolicy(const Models::CreateControlPolicyRequest &request);

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
      Models::CreateFolderResponse createFolderWithOptions(const Models::CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource folder by calling CreateFolder.
       *
       * @description > You can create a maximum of five levels of resource folders.
       * This topic provides an example of how to create a resource folder named `rdFolder` under the Root folder.
       *
       * @param request CreateFolderRequest
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolder(const Models::CreateFolderRequest &request);

      /**
       * @summary Creates an access policy.
       *
       * @param request CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access policy.
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary Creates a version of an access policy by calling CreatePolicyVersion.
       *
       * @param request CreatePolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyVersionResponse
       */
      Models::CreatePolicyVersionResponse createPolicyVersionWithOptions(const Models::CreatePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a version of an access policy by calling CreatePolicyVersion.
       *
       * @param request CreatePolicyVersionRequest
       * @return CreatePolicyVersionResponse
       */
      Models::CreatePolicyVersionResponse createPolicyVersion(const Models::CreatePolicyVersionRequest &request);

      /**
       * @summary Creates a member of the resource account type by calling CreateResourceAccount.
       *
       * @description In a resource directory, a member serves as a resource container and is a resource grouping unit. A member typically represents a project or application. Resources in each member are physically isolated from resources in other members.
       *
       * @param request CreateResourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceAccountResponse
       */
      Models::CreateResourceAccountResponse createResourceAccountWithOptions(const Models::CreateResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a member of the resource account type by calling CreateResourceAccount.
       *
       * @description In a resource directory, a member serves as a resource container and is a resource grouping unit. A member typically represents a project or application. Resources in each member are physically isolated from resources in other members.
       *
       * @param request CreateResourceAccountRequest
       * @return CreateResourceAccountResponse
       */
      Models::CreateResourceAccountResponse createResourceAccount(const Models::CreateResourceAccountRequest &request);

      /**
       * @summary Creates a resource group.
       *
       * @description > You can create a maximum of 30 resource groups within an Alibaba Cloud account.
       *
       * @param request CreateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroupWithOptions(const Models::CreateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group.
       *
       * @description > You can create a maximum of 30 resource groups within an Alibaba Cloud account.
       *
       * @param request CreateResourceGroupRequest
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroup(const Models::CreateResourceGroupRequest &request);

      /**
       * @summary Creates a role by calling CreateRole.
       *
       * @param request CreateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a role by calling CreateRole.
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const Models::CreateRoleRequest &request);

      /**
       * @summary Creates a service-linked role.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role.
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Declines a handshake invitation by the invited Alibaba Cloud account.
       *
       * @param request DeclineHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeclineHandshakeResponse
       */
      Models::DeclineHandshakeResponse declineHandshakeWithOptions(const Models::DeclineHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Declines a handshake invitation by the invited Alibaba Cloud account.
       *
       * @param request DeclineHandshakeRequest
       * @return DeclineHandshakeResponse
       */
      Models::DeclineHandshakeResponse declineHandshake(const Models::DeclineHandshakeRequest &request);

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
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a member of the resource account type by calling DeleteAccount.
       *
       * @description Before deleting a member, call [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) and [GetAccountDeletionCheckResult](https://help.aliyun.com/document_detail/448775.html) to perform a pre-deletion check on the member. Only members that meet the deletion conditions can be successfully deleted by calling DeleteAccount.
       * After you successfully submit a member deletion request, you can call [GetAccountDeletionStatus](https://help.aliyun.com/document_detail/449001.html) to query the deletion status. Once a member is deleted, all resources and data in the member are deleted. You can no longer log on to or use the member, and the data cannot be recovered. Proceed with caution. For more information about member deletion, see [Delete a member of the resource account type](https://help.aliyun.com/document_detail/446078.html).
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes an automatic group transfer rule.
       *
       * @param request DeleteAutoGroupingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoGroupingRuleResponse
       */
      Models::DeleteAutoGroupingRuleResponse deleteAutoGroupingRuleWithOptions(const Models::DeleteAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic group transfer rule.
       *
       * @param request DeleteAutoGroupingRuleRequest
       * @return DeleteAutoGroupingRuleResponse
       */
      Models::DeleteAutoGroupingRuleResponse deleteAutoGroupingRule(const Models::DeleteAutoGroupingRuleRequest &request);

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
      Models::DeleteControlPolicyResponse deleteControlPolicyWithOptions(const Models::DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom control policy.
       *
       * @description To delete a custom control policy that is attached to a resource folder or member accounts, invoke [DetachControlPolicy](https://help.aliyun.com/document_detail/208331.html) to detach the policy first.
       * This topic provides an example on how to delete the custom control policy cp-SImPt8GCEwiq****.
       *
       * @param request DeleteControlPolicyRequest
       * @return DeleteControlPolicyResponse
       */
      Models::DeleteControlPolicyResponse deleteControlPolicy(const Models::DeleteControlPolicyRequest &request);

      /**
       * @summary Deletes a folder.
       *
       * @description > Before deleting a folder, make sure that the folder does not contain any member accounts or subfolders.
       *
       * @param request DeleteFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolderWithOptions(const Models::DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a folder.
       *
       * @description > Before deleting a folder, make sure that the folder does not contain any member accounts or subfolders.
       *
       * @param request DeleteFolderRequest
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolder(const Models::DeleteFolderRequest &request);

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
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified access policy.
       *
       * @description > - Before deleting an access policy, delete all non-default versions of the policy. For information about how to delete a policy version, see [DeletePolicyVersion](https://help.aliyun.com/document_detail/159041.html).
       * > - Before deleting an access policy, make sure that the policy is not referenced, meaning it is not attached to any Resource Access Management (RAM) user, user group, or RAM role. For information about how to remove an authorization, see [DetachPolicy](https://help.aliyun.com/document_detail/159168.html).
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary Deletes a version of an access policy.
       *
       * @description > The default version of an access policy cannot be deleted.
       *
       * @param request DeletePolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyVersionResponse
       */
      Models::DeletePolicyVersionResponse deletePolicyVersionWithOptions(const Models::DeletePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a version of an access policy.
       *
       * @description > The default version of an access policy cannot be deleted.
       *
       * @param request DeletePolicyVersionRequest
       * @return DeletePolicyVersionResponse
       */
      Models::DeletePolicyVersionResponse deletePolicyVersion(const Models::DeletePolicyVersionRequest &request);

      /**
       * @summary Deletes a resource group.
       *
       * @description > Before you delete a resource group, delete all resources in the resource group.
       *
       * @param request DeleteResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroupWithOptions(const Models::DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group.
       *
       * @description > Before you delete a resource group, delete all resources in the resource group.
       *
       * @param request DeleteResourceGroupRequest
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroup(const Models::DeleteResourceGroupRequest &request);

      /**
       * @summary Deletes a role.
       *
       * @param request DeleteRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a role.
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const Models::DeleteRoleRequest &request);

      /**
       * @summary Deletes a service-linked role.
       *
       * @param request DeleteServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceLinkedRoleResponse
       */
      Models::DeleteServiceLinkedRoleResponse deleteServiceLinkedRoleWithOptions(const Models::DeleteServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service-linked role.
       *
       * @param request DeleteServiceLinkedRoleRequest
       * @return DeleteServiceLinkedRoleResponse
       */
      Models::DeleteServiceLinkedRoleResponse deleteServiceLinkedRole(const Models::DeleteServiceLinkedRoleRequest &request);

      /**
       * @summary Calls the DeregisterDelegatedAdministrator operation to remove the delegated administrator account of a trusted service.
       *
       * @description > If the delegated administrator account being removed has historical management tasks in the trusted service, the removal may affect the normal use of the trusted service. Carefully consider the potential impact before performing the removal.
       *
       * @param request DeregisterDelegatedAdministratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterDelegatedAdministratorResponse
       */
      Models::DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministratorWithOptions(const Models::DeregisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeregisterDelegatedAdministrator operation to remove the delegated administrator account of a trusted service.
       *
       * @description > If the delegated administrator account being removed has historical management tasks in the trusted service, the removal may affect the normal use of the trusted service. Carefully consider the potential impact before performing the removal.
       *
       * @param request DeregisterDelegatedAdministratorRequest
       * @return DeregisterDelegatedAdministratorResponse
       */
      Models::DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministrator(const Models::DeregisterDelegatedAdministratorRequest &request);

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
      Models::DestroyResourceDirectoryResponse destroyResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes a resource directory by calling DestroyResourceDirectory. This operation is irreversible. Proceed with caution.
       *
       * @description Before closing a resource directory, make sure that you have completed the following operations:
       * - All members in the resource directory have been removed. For information about how to remove a member, see [RemoveCloudAccount](https://help.aliyun.com/document_detail/159431.html).
       * - All folders except the Root folder in the resource directory have been deleted. For information about how to delete a folder, see [DeleteFolder](https://help.aliyun.com/document_detail/159432.html).
       *
       * @return DestroyResourceDirectoryResponse
       */
      Models::DestroyResourceDirectoryResponse destroyResourceDirectory();

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
      Models::DetachControlPolicyResponse detachControlPolicyWithOptions(const Models::DetachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DetachControlPolicyResponse detachControlPolicy(const Models::DetachControlPolicyRequest &request);

      /**
       * @summary Detaches an access policy from a specified identity. After the policy is detached, the identity loses the permissions to manage resources in the specified resource group or Alibaba Cloud account.
       *
       * @param request DetachPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicyResponse
       */
      Models::DetachPolicyResponse detachPolicyWithOptions(const Models::DetachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches an access policy from a specified identity. After the policy is detached, the identity loses the permissions to manage resources in the specified resource group or Alibaba Cloud account.
       *
       * @param request DetachPolicyRequest
       * @return DetachPolicyResponse
       */
      Models::DetachPolicyResponse detachPolicy(const Models::DetachPolicyRequest &request);

      /**
       * @summary Disables the attached-resource allocation feature for associated resources.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAssociatedTransferResponse
       */
      Models::DisableAssociatedTransferResponse disableAssociatedTransferWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the attached-resource allocation feature for associated resources.
       *
       * @return DisableAssociatedTransferResponse
       */
      Models::DisableAssociatedTransferResponse disableAssociatedTransfer();

      /**
       * @summary Disables automatic resource group transfer. After this feature is disabled, the custom condition rules and attached-resource transfer rules that have been configured are deleted. The resource groups of existing resources are not affected. If needed, you can re-enable this feature 1 minute after disabling it.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAutoGroupingResponse
       */
      Models::DisableAutoGroupingResponse disableAutoGroupingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables automatic resource group transfer. After this feature is disabled, the custom condition rules and attached-resource transfer rules that have been configured are deleted. The resource groups of existing resources are not affected. If needed, you can re-enable this feature 1 minute after disabling it.
       *
       * @return DisableAutoGroupingResponse
       */
      Models::DisableAutoGroupingResponse disableAutoGrouping();

      /**
       * @summary Disables the control policy feature.
       *
       * @description After you disable the control policy feature, all control policies that are attached to resource folders and member accounts are automatically detached. However, the control policies are not deleted. They cannot be attached to any target nodes.
       * > Disabling the control policy feature affects the permissions of resource folders and member accounts in the entire resource directory. Proceed with caution.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableControlPolicyResponse
       */
      Models::DisableControlPolicyResponse disableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the control policy feature.
       *
       * @description After you disable the control policy feature, all control policies that are attached to resource folders and member accounts are automatically detached. However, the control policies are not deleted. They cannot be attached to any target nodes.
       * > Disabling the control policy feature affects the permissions of resource folders and member accounts in the entire resource directory. Proceed with caution.
       *
       * @return DisableControlPolicyResponse
       */
      Models::DisableControlPolicyResponse disableControlPolicy();

      /**
       * @summary Disables a resource group event notification that is currently enabled. If the notification is already disabled, the error code `UnsupportedOperation.RepeatDisableResourceGroupNotification` is returned. You can call `EnableResourceGroupNotification` to enable the notification first.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableResourceGroupNotificationResponse
       */
      Models::DisableResourceGroupNotificationResponse disableResourceGroupNotificationWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a resource group event notification that is currently enabled. If the notification is already disabled, the error code `UnsupportedOperation.RepeatDisableResourceGroupNotification` is returned. You can call `EnableResourceGroupNotification` to enable the notification first.
       *
       * @return DisableResourceGroupNotificationResponse
       */
      Models::DisableResourceGroupNotificationResponse disableResourceGroupNotification();

      /**
       * @summary Enables the attached-resource allocation feature for resource group transfers.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAssociatedTransferResponse
       */
      Models::EnableAssociatedTransferResponse enableAssociatedTransferWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the attached-resource allocation feature for resource group transfers.
       *
       * @return EnableAssociatedTransferResponse
       */
      Models::EnableAssociatedTransferResponse enableAssociatedTransfer();

      /**
       * @summary Enables automatic grouping. After automatic grouping is enabled, you can create, update, delete, and query automatic grouping rules.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAutoGroupingResponse
       */
      Models::EnableAutoGroupingResponse enableAutoGroupingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables automatic grouping. After automatic grouping is enabled, you can create, update, delete, and query automatic grouping rules.
       *
       * @return EnableAutoGroupingResponse
       */
      Models::EnableAutoGroupingResponse enableAutoGrouping();

      /**
       * @summary Enables the control policy feature by calling EnableControlPolicy.
       *
       * @description A resource directory control policy is an access control policy based on the resource structure (resource folders or member accounts). It allows you to centrally manage the access permissions border for resource access at each level of the resource directory and establish overall or localized access control principles for your enterprise. Control policies define only the access permissions border and do not actually grant permissions. You must also set permissions by using Resource Access Management (RAM) in a member account before the corresponding identity can have access permissions to resources. For more information, see [Overview of control policies](https://help.aliyun.com/document_detail/178671.html).
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableControlPolicyResponse
       */
      Models::EnableControlPolicyResponse enableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the control policy feature by calling EnableControlPolicy.
       *
       * @description A resource directory control policy is an access control policy based on the resource structure (resource folders or member accounts). It allows you to centrally manage the access permissions border for resource access at each level of the resource directory and establish overall or localized access control principles for your enterprise. Control policies define only the access permissions border and do not actually grant permissions. You must also set permissions by using Resource Access Management (RAM) in a member account before the corresponding identity can have access permissions to resources. For more information, see [Overview of control policies](https://help.aliyun.com/document_detail/178671.html).
       *
       * @return EnableControlPolicyResponse
       */
      Models::EnableControlPolicyResponse enableControlPolicy();

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
      Models::EnableResourceDirectoryResponse enableResourceDirectoryWithOptions(const Models::EnableResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a resource directory.
       *
       * @description You can enable a resource directory by using the current logon account or by creating a new management account. For more information, refer to [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
       * This topic provides an example of how to enable a resource directory by using the current logon account.
       *
       * @param request EnableResourceDirectoryRequest
       * @return EnableResourceDirectoryResponse
       */
      Models::EnableResourceDirectoryResponse enableResourceDirectory(const Models::EnableResourceDirectoryRequest &request);

      /**
       * @summary Enables resource group event notifications by calling EnableResourceGroupNotification.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableResourceGroupNotificationResponse
       */
      Models::EnableResourceGroupNotificationResponse enableResourceGroupNotificationWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables resource group event notifications by calling EnableResourceGroupNotification.
       *
       * @return EnableResourceGroupNotificationResponse
       */
      Models::EnableResourceGroupNotificationResponse enableResourceGroupNotification();

      /**
       * @summary Calls GetAccount to retrieve member account information.
       *
       * @param request GetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountResponse
       */
      Models::GetAccountResponse getAccountWithOptions(const Models::GetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls GetAccount to retrieve member account information.
       *
       * @param request GetAccountRequest
       * @return GetAccountResponse
       */
      Models::GetAccountResponse getAccount(const Models::GetAccountRequest &request);

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
      Models::GetAccountDeletionCheckResultResponse getAccountDeletionCheckResultWithOptions(const Models::GetAccountDeletionCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of a member deletion check by calling GetAccountDeletionCheckResult.
       *
       * @description After you call [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) to perform a member deletion check task, you can call GetAccountDeletionCheckResult to query the result of the member deletion check. If the deletion check requirements are met, the member account can be deleted. Otherwise, manually handle the non-compliant items until all requirements are met.
       * This topic provides an example on how to query the deletion check result of the member account `179855839641****` that you want to delete. The response shows that the member account does not meet the deletion requirements.
       *
       * @param request GetAccountDeletionCheckResultRequest
       * @return GetAccountDeletionCheckResultResponse
       */
      Models::GetAccountDeletionCheckResultResponse getAccountDeletionCheckResult(const Models::GetAccountDeletionCheckResultRequest &request);

      /**
       * @summary Queries the deletion status of a member account.
       *
       * @description This topic provides an example on how to query the deletion status of the member account `169946124551****`. The response shows that the member account has been successfully deleted.
       *
       * @param request GetAccountDeletionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountDeletionStatusResponse
       */
      Models::GetAccountDeletionStatusResponse getAccountDeletionStatusWithOptions(const Models::GetAccountDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deletion status of a member account.
       *
       * @description This topic provides an example on how to query the deletion status of the member account `169946124551****`. The response shows that the member account has been successfully deleted.
       *
       * @param request GetAccountDeletionStatusRequest
       * @return GetAccountDeletionStatusResponse
       */
      Models::GetAccountDeletionStatusResponse getAccountDeletionStatus(const Models::GetAccountDeletionStatusRequest &request);

      /**
       * @summary Queries the information about an automatic resource group transfer rule.
       *
       * @param request GetAutoGroupingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoGroupingRuleResponse
       */
      Models::GetAutoGroupingRuleResponse getAutoGroupingRuleWithOptions(const Models::GetAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an automatic resource group transfer rule.
       *
       * @param request GetAutoGroupingRuleRequest
       * @return GetAutoGroupingRuleResponse
       */
      Models::GetAutoGroupingRuleResponse getAutoGroupingRule(const Models::GetAutoGroupingRuleRequest &request);

      /**
       * @summary Queries the status of automatic resource group transfer settings by calling GetAutoGroupingStatus.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoGroupingStatusResponse
       */
      Models::GetAutoGroupingStatusResponse getAutoGroupingStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of automatic resource group transfer settings by calling GetAutoGroupingStatus.
       *
       * @return GetAutoGroupingStatusResponse
       */
      Models::GetAutoGroupingStatusResponse getAutoGroupingStatus();

      /**
       * @summary Queries the details of a control policy.
       *
       * @description This topic provides an example on how to query the details of the control policy whose ID is `cp-SImPt8GCEwiq****`.
       *
       * @param request GetControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetControlPolicyResponse
       */
      Models::GetControlPolicyResponse getControlPolicyWithOptions(const Models::GetControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a control policy.
       *
       * @description This topic provides an example on how to query the details of the control policy whose ID is `cp-SImPt8GCEwiq****`.
       *
       * @param request GetControlPolicyRequest
       * @return GetControlPolicyResponse
       */
      Models::GetControlPolicyResponse getControlPolicy(const Models::GetControlPolicyRequest &request);

      /**
       * @summary Queries the enabling status of the control policy feature.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetControlPolicyEnablementStatusResponse
       */
      Models::GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the enabling status of the control policy feature.
       *
       * @return GetControlPolicyEnablementStatusResponse
       */
      Models::GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatus();

      /**
       * @summary Calls GetFolder to retrieve the information about a folder.
       *
       * @param request GetFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolderWithOptions(const Models::GetFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls GetFolder to retrieve the information about a folder.
       *
       * @param request GetFolderRequest
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolder(const Models::GetFolderRequest &request);

      /**
       * @summary Retrieves handshake information by calling GetHandshake.
       *
       * @description This topic provides an example on how to retrieve the information about the handshake whose ID is `h-ycm4rp****`.
       *
       * @param request GetHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHandshakeResponse
       */
      Models::GetHandshakeResponse getHandshakeWithOptions(const Models::GetHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves handshake information by calling GetHandshake.
       *
       * @description This topic provides an example on how to retrieve the information about the handshake whose ID is `h-ycm4rp****`.
       *
       * @param request GetHandshakeRequest
       * @return GetHandshakeResponse
       */
      Models::GetHandshakeResponse getHandshake(const Models::GetHandshakeRequest &request);

      /**
       * @summary Retrieves the billing account information of a member account by calling GetPayerForAccount.
       *
       * @param request GetPayerForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPayerForAccountResponse
       */
      Models::GetPayerForAccountResponse getPayerForAccountWithOptions(const Models::GetPayerForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the billing account information of a member account by calling GetPayerForAccount.
       *
       * @param request GetPayerForAccountRequest
       * @return GetPayerForAccountResponse
       */
      Models::GetPayerForAccountResponse getPayerForAccount(const Models::GetPayerForAccountRequest &request);

      /**
       * @summary Retrieves information about a specified access policy.
       *
       * @param request GetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const Models::GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specified access policy.
       *
       * @param request GetPolicyRequest
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const Models::GetPolicyRequest &request);

      /**
       * @summary Retrieves a version of an access policy.
       *
       * @param request GetPolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyVersionResponse
       */
      Models::GetPolicyVersionResponse getPolicyVersionWithOptions(const Models::GetPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a version of an access policy.
       *
       * @param request GetPolicyVersionRequest
       * @return GetPolicyVersionResponse
       */
      Models::GetPolicyVersionResponse getPolicyVersion(const Models::GetPolicyVersionRequest &request);

      /**
       * @summary Queries resource directory information. When called by a management account, returns the details of the resource directory created by the management account. When called by a member, returns the details of the resource directory to which the member belongs.
       *
       * @description This topic provides an example of how to use a management account to query the details of the resource directory created by the management account.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceDirectoryResponse
       */
      Models::GetResourceDirectoryResponse getResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource directory information. When called by a management account, returns the details of the resource directory created by the management account. When called by a member, returns the details of the resource directory to which the member belongs.
       *
       * @description This topic provides an example of how to use a management account to query the details of the resource directory created by the management account.
       *
       * @return GetResourceDirectoryResponse
       */
      Models::GetResourceDirectoryResponse getResourceDirectory();

      /**
       * @summary Queries the information about a resource group.
       *
       * @param request GetResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroupWithOptions(const Models::GetResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a resource group.
       *
       * @param request GetResourceGroupRequest
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroup(const Models::GetResourceGroupRequest &request);

      /**
       * @summary Queries the administrator settings of a resource group.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupAdminSettingResponse
       */
      Models::GetResourceGroupAdminSettingResponse getResourceGroupAdminSettingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the administrator settings of a resource group.
       *
       * @return GetResourceGroupAdminSettingResponse
       */
      Models::GetResourceGroupAdminSettingResponse getResourceGroupAdminSetting();

      /**
       * @summary Queries the notification settings of a resource group by calling GetResourceGroupNotificationSetting.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupNotificationSettingResponse
       */
      Models::GetResourceGroupNotificationSettingResponse getResourceGroupNotificationSettingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the notification settings of a resource group by calling GetResourceGroupNotificationSetting.
       *
       * @return GetResourceGroupNotificationSettingResponse
       */
      Models::GetResourceGroupNotificationSettingResponse getResourceGroupNotificationSetting();

      /**
       * @summary Queries the resource count in visible resource groups.
       *
       * @param request GetResourceGroupResourceCountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResourceCountsResponse
       */
      Models::GetResourceGroupResourceCountsResponse getResourceGroupResourceCountsWithOptions(const Models::GetResourceGroupResourceCountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource count in visible resource groups.
       *
       * @param request GetResourceGroupResourceCountsRequest
       * @return GetResourceGroupResourceCountsResponse
       */
      Models::GetResourceGroupResourceCountsResponse getResourceGroupResourceCounts(const Models::GetResourceGroupResourceCountsRequest &request);

      /**
       * @summary Queries the information about a role by calling GetRole.
       *
       * @param request GetRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const Models::GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a role by calling GetRole.
       *
       * @param request GetRoleRequest
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const Models::GetRoleRequest &request);

      /**
       * @summary Queries the status of a task that deletes a service-linked role.
       *
       * @param request GetServiceLinkedRoleDeletionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceLinkedRoleDeletionStatusResponse
       */
      Models::GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatusWithOptions(const Models::GetServiceLinkedRoleDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a task that deletes a service-linked role.
       *
       * @param request GetServiceLinkedRoleDeletionStatusRequest
       * @return GetServiceLinkedRoleDeletionStatusResponse
       */
      Models::GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatus(const Models::GetServiceLinkedRoleDeletionStatusRequest &request);

      /**
       * @summary Calls InitResourceDirectory to enable a resource directory. After you enable a resource directory, the system creates a Root folder and sets the current account as the management account. The management account has all permissions to manage the resource directory.
       *
       * @description > - Use an account that has passed enterprise real-name verification to enable a resource directory. An account that has passed only individual real-name verification cannot enable a resource directory.
       * > - Use the management account only as the administrator of the resource directory. Do not purchase cloud service resources with the management account.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitResourceDirectoryResponse
       */
      Models::InitResourceDirectoryResponse initResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls InitResourceDirectory to enable a resource directory. After you enable a resource directory, the system creates a Root folder and sets the current account as the management account. The management account has all permissions to manage the resource directory.
       *
       * @description > - Use an account that has passed enterprise real-name verification to enable a resource directory. An account that has passed only individual real-name verification cannot enable a resource directory.
       * > - Use the management account only as the administrator of the resource directory. Do not purchase cloud service resources with the management account.
       *
       * @return InitResourceDirectoryResponse
       */
      Models::InitResourceDirectoryResponse initResourceDirectory();

      /**
       * @summary Invites an external account to join a resource directory.
       *
       * @description This topic provides an example on how to invite the external account `someone@example.com` to join a resource directory.
       *
       * @param request InviteAccountToResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InviteAccountToResourceDirectoryResponse
       */
      Models::InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectoryWithOptions(const Models::InviteAccountToResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invites an external account to join a resource directory.
       *
       * @description This topic provides an example on how to invite the external account `someone@example.com` to join a resource directory.
       *
       * @param request InviteAccountToResourceDirectoryRequest
       * @return InviteAccountToResourceDirectoryResponse
       */
      Models::InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectory(const Models::InviteAccountToResourceDirectoryRequest &request);

      /**
       * @summary Queries the list of all member accounts in a resource directory by calling ListAccounts.
       *
       * @description The management account of the resource directory and the delegated administrator accounts of trusted services can call this operation.
       *
       * @param request ListAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccountsWithOptions(const Models::ListAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of all member accounts in a resource directory by calling ListAccounts.
       *
       * @description The management account of the resource directory and the delegated administrator accounts of trusted services can call this operation.
       *
       * @param request ListAccountsRequest
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccounts(const Models::ListAccountsRequest &request);

      /**
       * @summary Queries the list of member accounts in a resource folder by calling ListAccountsForParent.
       *
       * @param request ListAccountsForParentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsForParentResponse
       */
      Models::ListAccountsForParentResponse listAccountsForParentWithOptions(const Models::ListAccountsForParentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of member accounts in a resource folder by calling ListAccountsForParent.
       *
       * @param request ListAccountsForParentRequest
       * @return ListAccountsForParentResponse
       */
      Models::ListAccountsForParentResponse listAccountsForParent(const Models::ListAccountsForParentRequest &request);

      /**
       * @summary Queries information about all parent folders of a specified folder. The results are displayed in order from top to bottom.
       *
       * @param request ListAncestorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAncestorsResponse
       */
      Models::ListAncestorsResponse listAncestorsWithOptions(const Models::ListAncestorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all parent folders of a specified folder. The results are displayed in order from top to bottom.
       *
       * @param request ListAncestorsRequest
       * @return ListAncestorsResponse
       */
      Models::ListAncestorsResponse listAncestors(const Models::ListAncestorsRequest &request);

      /**
       * @summary Retrieves the settings of the associated resource group transfer feature.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssociatedTransferSettingResponse
       */
      Models::ListAssociatedTransferSettingResponse listAssociatedTransferSettingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the settings of the associated resource group transfer feature.
       *
       * @return ListAssociatedTransferSettingResponse
       */
      Models::ListAssociatedTransferSettingResponse listAssociatedTransferSetting();

      /**
       * @summary Lists auto-grouping remediation records.
       *
       * @param request ListAutoGroupingRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoGroupingRemediationsResponse
       */
      Models::ListAutoGroupingRemediationsResponse listAutoGroupingRemediationsWithOptions(const Models::ListAutoGroupingRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists auto-grouping remediation records.
       *
       * @param request ListAutoGroupingRemediationsRequest
       * @return ListAutoGroupingRemediationsResponse
       */
      Models::ListAutoGroupingRemediationsResponse listAutoGroupingRemediations(const Models::ListAutoGroupingRemediationsRequest &request);

      /**
       * @summary Queries the list of automatic group transfer rules.
       *
       * @param request ListAutoGroupingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoGroupingRulesResponse
       */
      Models::ListAutoGroupingRulesResponse listAutoGroupingRulesWithOptions(const Models::ListAutoGroupingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of automatic group transfer rules.
       *
       * @param request ListAutoGroupingRulesRequest
       * @return ListAutoGroupingRulesResponse
       */
      Models::ListAutoGroupingRulesResponse listAutoGroupingRules(const Models::ListAutoGroupingRulesRequest &request);

      /**
       * @summary Queries a list of control policies.
       *
       * @param request ListControlPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListControlPoliciesResponse
       */
      Models::ListControlPoliciesResponse listControlPoliciesWithOptions(const Models::ListControlPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of control policies.
       *
       * @param request ListControlPoliciesRequest
       * @return ListControlPoliciesResponse
       */
      Models::ListControlPoliciesResponse listControlPolicies(const Models::ListControlPoliciesRequest &request);

      /**
       * @summary Queries the list of control policies attached to a resource folder or member account.
       *
       * @description This topic provides an example on how to query the list of control policies attached to the resource folder `fd-ZDNPiT****`.
       *
       * @param request ListControlPolicyAttachmentsForTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListControlPolicyAttachmentsForTargetResponse
       */
      Models::ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTargetWithOptions(const Models::ListControlPolicyAttachmentsForTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of control policies attached to a resource folder or member account.
       *
       * @description This topic provides an example on how to query the list of control policies attached to the resource folder `fd-ZDNPiT****`.
       *
       * @param request ListControlPolicyAttachmentsForTargetRequest
       * @return ListControlPolicyAttachmentsForTargetResponse
       */
      Models::ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTarget(const Models::ListControlPolicyAttachmentsForTargetRequest &request);

      /**
       * @summary Queries the list of delegated administrator accounts for a trusted service.
       *
       * @param request ListDelegatedAdministratorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDelegatedAdministratorsResponse
       */
      Models::ListDelegatedAdministratorsResponse listDelegatedAdministratorsWithOptions(const Models::ListDelegatedAdministratorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of delegated administrator accounts for a trusted service.
       *
       * @param request ListDelegatedAdministratorsRequest
       * @return ListDelegatedAdministratorsResponse
       */
      Models::ListDelegatedAdministratorsResponse listDelegatedAdministrators(const Models::ListDelegatedAdministratorsRequest &request);

      /**
       * @summary Queries the trusted services for which a specified member is set as a delegated administrator account.
       *
       * @param request ListDelegatedServicesForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDelegatedServicesForAccountResponse
       */
      Models::ListDelegatedServicesForAccountResponse listDelegatedServicesForAccountWithOptions(const Models::ListDelegatedServicesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trusted services for which a specified member is set as a delegated administrator account.
       *
       * @param request ListDelegatedServicesForAccountRequest
       * @return ListDelegatedServicesForAccountResponse
       */
      Models::ListDelegatedServicesForAccountResponse listDelegatedServicesForAccount(const Models::ListDelegatedServicesForAccountRequest &request);

      /**
       * @summary Queries the subfolders of a specified folder.
       *
       * @description > You can query only the subfolders at the next level of the specified folder. You cannot query subfolders at deeper levels.
       *
       * @param request ListFoldersForParentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFoldersForParentResponse
       */
      Models::ListFoldersForParentResponse listFoldersForParentWithOptions(const Models::ListFoldersForParentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subfolders of a specified folder.
       *
       * @description > You can query only the subfolders at the next level of the specified folder. You cannot query subfolders at deeper levels.
       *
       * @param request ListFoldersForParentRequest
       * @return ListFoldersForParentResponse
       */
      Models::ListFoldersForParentResponse listFoldersForParent(const Models::ListFoldersForParentRequest &request);

      /**
       * @summary Queries the invitation records under the current account.
       *
       * @description This topic provides an example on how to query the invitation records of the current management account `172841235500****`.
       *
       * @param request ListHandshakesForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHandshakesForAccountResponse
       */
      Models::ListHandshakesForAccountResponse listHandshakesForAccountWithOptions(const Models::ListHandshakesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the invitation records under the current account.
       *
       * @description This topic provides an example on how to query the invitation records of the current management account `172841235500****`.
       *
       * @param request ListHandshakesForAccountRequest
       * @return ListHandshakesForAccountResponse
       */
      Models::ListHandshakesForAccountResponse listHandshakesForAccount(const Models::ListHandshakesForAccountRequest &request);

      /**
       * @summary Queries all invitations in a resource directory.
       *
       * @param request ListHandshakesForResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHandshakesForResourceDirectoryResponse
       */
      Models::ListHandshakesForResourceDirectoryResponse listHandshakesForResourceDirectoryWithOptions(const Models::ListHandshakesForResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all invitations in a resource directory.
       *
       * @param request ListHandshakesForResourceDirectoryRequest
       * @return ListHandshakesForResourceDirectoryResponse
       */
      Models::ListHandshakesForResourceDirectoryResponse listHandshakesForResourceDirectory(const Models::ListHandshakesForResourceDirectoryRequest &request);

      /**
       * @summary Calls ListPolicies to query a list of access policies.
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ListPolicies to query a list of access policies.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

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
      Models::ListPolicyAttachmentsResponse listPolicyAttachmentsWithOptions(const Models::ListPolicyAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListPolicyAttachmentsResponse listPolicyAttachments(const Models::ListPolicyAttachmentsRequest &request);

      /**
       * @summary Queries the versions of an access policy.
       *
       * @param request ListPolicyVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyVersionsResponse
       */
      Models::ListPolicyVersionsResponse listPolicyVersionsWithOptions(const Models::ListPolicyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of an access policy.
       *
       * @param request ListPolicyVersionsRequest
       * @return ListPolicyVersionsResponse
       */
      Models::ListPolicyVersionsResponse listPolicyVersions(const Models::ListPolicyVersionsRequest &request);

      /**
       * @summary Lists the capability items of resource groups.
       *
       * @param request ListResourceGroupCapabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupCapabilityResponse
       */
      Models::ListResourceGroupCapabilityResponse listResourceGroupCapabilityWithOptions(const Models::ListResourceGroupCapabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the capability items of resource groups.
       *
       * @param request ListResourceGroupCapabilityRequest
       * @return ListResourceGroupCapabilityResponse
       */
      Models::ListResourceGroupCapabilityResponse listResourceGroupCapability(const Models::ListResourceGroupCapabilityRequest &request);

      /**
       * @summary Queries the list of resource groups.
       *
       * @description You can call this operation to query all resource groups under the current account. You can also filter resource groups by resource group status, resource group ID, resource group identifier, or resource group display name.
       *
       * @param request ListResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource groups.
       *
       * @description You can call this operation to query all resource groups under the current account. You can also filter resource groups by resource group status, resource group ID, resource group identifier, or resource group display name.
       *
       * @param request ListResourceGroupsRequest
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroups(const Models::ListResourceGroupsRequest &request);

      /**
       * @summary Lists resource groups along with user authorization details.
       *
       * @param request ListResourceGroupsWithAuthDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsWithAuthDetailsResponse
       */
      Models::ListResourceGroupsWithAuthDetailsResponse listResourceGroupsWithAuthDetailsWithOptions(const Models::ListResourceGroupsWithAuthDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists resource groups along with user authorization details.
       *
       * @param request ListResourceGroupsWithAuthDetailsRequest
       * @return ListResourceGroupsWithAuthDetailsResponse
       */
      Models::ListResourceGroupsWithAuthDetailsResponse listResourceGroupsWithAuthDetails(const Models::ListResourceGroupsWithAuthDetailsRequest &request);

      /**
       * @summary Queries the resources in the resource groups accessible to the current account.
       *
       * @description > This API can be called by assuming a RAM role, but session policies for the role are not supported.
       *
       * @param request ListResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const Models::ListResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources in the resource groups accessible to the current account.
       *
       * @description > This API can be called by assuming a RAM role, but session policies for the role are not supported.
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const Models::ListResourcesRequest &request);

      /**
       * @summary Queries the list of roles by calling ListRoles.
       *
       * @param request ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of roles by calling ListRoles.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary Queries the tag key list of resource directory member accounts by calling ListTagKeys.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag key list of resource directory member accounts by calling ListTagKeys.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags that are attached to a resource group or a resource directory member.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to a resource group or a resource directory member.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

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
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values of a specified tag key by calling ListTagValues.
       *
       * @description ### Usage notes
       * This topic provides an example on how to query the tag values of the tag key k1. The response shows that the tag value corresponding to the tag key k1 is v1.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Queries the nodes to which a control policy is attached.
       *
       * @param request ListTargetAttachmentsForControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTargetAttachmentsForControlPolicyResponse
       */
      Models::ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicyWithOptions(const Models::ListTargetAttachmentsForControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the nodes to which a control policy is attached.
       *
       * @param request ListTargetAttachmentsForControlPolicyRequest
       * @return ListTargetAttachmentsForControlPolicyResponse
       */
      Models::ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicy(const Models::ListTargetAttachmentsForControlPolicyRequest &request);

      /**
       * @summary Queries the list of trusted services enabled by the management account or a delegated administrator account.
       *
       * @description > This operation can be called only by the management account or a delegated administrator account.
       *
       * @param request ListTrustedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrustedServiceStatusResponse
       */
      Models::ListTrustedServiceStatusResponse listTrustedServiceStatusWithOptions(const Models::ListTrustedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of trusted services enabled by the management account or a delegated administrator account.
       *
       * @description > This operation can be called only by the management account or a delegated administrator account.
       *
       * @param request ListTrustedServiceStatusRequest
       * @return ListTrustedServiceStatusResponse
       */
      Models::ListTrustedServiceStatusResponse listTrustedServiceStatus(const Models::ListTrustedServiceStatusRequest &request);

      /**
       * @summary Queries resource group events.
       *
       * @param request LookupResourceGroupEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupResourceGroupEventsResponse
       */
      Models::LookupResourceGroupEventsResponse lookupResourceGroupEventsWithOptions(const Models::LookupResourceGroupEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource group events.
       *
       * @param request LookupResourceGroupEventsRequest
       * @return LookupResourceGroupEventsResponse
       */
      Models::LookupResourceGroupEventsResponse lookupResourceGroupEvents(const Models::LookupResourceGroupEventsRequest &request);

      /**
       * @summary Moves a member to another folder.
       *
       * @param request MoveAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveAccountResponse
       */
      Models::MoveAccountResponse moveAccountWithOptions(const Models::MoveAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a member to another folder.
       *
       * @param request MoveAccountRequest
       * @return MoveAccountResponse
       */
      Models::MoveAccountResponse moveAccount(const Models::MoveAccountRequest &request);

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
      Models::MoveResourcesResponse moveResourcesWithOptions(const Models::MoveResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls MoveResources to move resources from one resource group to another.
       *
       * @description Supports batch transfer of resources across regions, cloud services, and resource groups.
       * For cloud services that support resource group transfer, see the **API** column in [Cloud services that support resource groups](https://help.aliyun.com/document_detail/94479.html).
       *
       * @param request MoveResourcesRequest
       * @return MoveResourcesResponse
       */
      Models::MoveResourcesResponse moveResources(const Models::MoveResourcesRequest &request);

      /**
       * @summary Upgrades a resource account to an Alibaba Cloud account. This is an asynchronous operation.
       *
       * @param request PromoteResourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PromoteResourceAccountResponse
       */
      Models::PromoteResourceAccountResponse promoteResourceAccountWithOptions(const Models::PromoteResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a resource account to an Alibaba Cloud account. This is an asynchronous operation.
       *
       * @param request PromoteResourceAccountRequest
       * @return PromoteResourceAccountResponse
       */
      Models::PromoteResourceAccountResponse promoteResourceAccount(const Models::PromoteResourceAccountRequest &request);

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
      Models::RegisterDelegatedAdministratorResponse registerDelegatedAdministratorWithOptions(const Models::RegisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::RegisterDelegatedAdministratorResponse registerDelegatedAdministrator(const Models::RegisterDelegatedAdministratorRequest &request);

      /**
       * @summary Removes a member of the cloud account type. After the member is removed, it exists as an independent Alibaba Cloud account and is no longer managed by the management account of the resource directory.
       *
       * @param request RemoveCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCloudAccountResponse
       */
      Models::RemoveCloudAccountResponse removeCloudAccountWithOptions(const Models::RemoveCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a member of the cloud account type. After the member is removed, it exists as an independent Alibaba Cloud account and is no longer managed by the management account of the resource directory.
       *
       * @param request RemoveCloudAccountRequest
       * @return RemoveCloudAccountResponse
       */
      Models::RemoveCloudAccountResponse removeCloudAccount(const Models::RemoveCloudAccountRequest &request);

      /**
       * @summary Resends the confirmation email for creating a cloud account.
       *
       * @param request ResendCreateCloudAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendCreateCloudAccountEmailResponse
       */
      Models::ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmailWithOptions(const Models::ResendCreateCloudAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resends the confirmation email for creating a cloud account.
       *
       * @param request ResendCreateCloudAccountEmailRequest
       * @return ResendCreateCloudAccountEmailResponse
       */
      Models::ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmail(const Models::ResendCreateCloudAccountEmailRequest &request);

      /**
       * @summary Resends the confirmation email for upgrading a resource account to a cloud account.
       *
       * @param request ResendPromoteResourceAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendPromoteResourceAccountEmailResponse
       */
      Models::ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmailWithOptions(const Models::ResendPromoteResourceAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resends the confirmation email for upgrading a resource account to a cloud account.
       *
       * @param request ResendPromoteResourceAccountEmailRequest
       * @return ResendPromoteResourceAccountEmailResponse
       */
      Models::ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmail(const Models::ResendPromoteResourceAccountEmailRequest &request);

      /**
       * @summary Resends the confirmation email for changing the email address of a member account.
       *
       * @param request RetryChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryChangeAccountEmailResponse
       */
      Models::RetryChangeAccountEmailResponse retryChangeAccountEmailWithOptions(const Models::RetryChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resends the confirmation email for changing the email address of a member account.
       *
       * @param request RetryChangeAccountEmailRequest
       * @return RetryChangeAccountEmailResponse
       */
      Models::RetryChangeAccountEmailResponse retryChangeAccountEmail(const Models::RetryChangeAccountEmailRequest &request);

      /**
       * @summary Sends a verification code to a secure phone number when you set the secure phone number for a member of the resource account type by calling SendVerificationCodeForBindSecureMobilePhone.
       *
       * @description To ensure that the system can record the specific operator of management operations, use a Resource Access Management (RAM) user or RAM role under the management account that has the resource directory management permission (AliyunResourceDirectoryFullAccess) to call this API operation.
       *
       * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendVerificationCodeForBindSecureMobilePhoneResponse
       */
      Models::SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhoneWithOptions(const Models::SendVerificationCodeForBindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a verification code to a secure phone number when you set the secure phone number for a member of the resource account type by calling SendVerificationCodeForBindSecureMobilePhone.
       *
       * @description To ensure that the system can record the specific operator of management operations, use a Resource Access Management (RAM) user or RAM role under the management account that has the resource directory management permission (AliyunResourceDirectoryFullAccess) to call this API operation.
       *
       * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
       * @return SendVerificationCodeForBindSecureMobilePhoneResponse
       */
      Models::SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhone(const Models::SendVerificationCodeForBindSecureMobilePhoneRequest &request);

      /**
       * @summary Sends a verification code to the secure phone number of a new management account when you call SendVerificationCodeForEnableRD to enable a resource directory by creating a new management account.
       *
       * @description Each Alibaba Cloud account can send up to 100 verification codes per day.
       *
       * @param request SendVerificationCodeForEnableRDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendVerificationCodeForEnableRDResponse
       */
      Models::SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRDWithOptions(const Models::SendVerificationCodeForEnableRDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a verification code to the secure phone number of a new management account when you call SendVerificationCodeForEnableRD to enable a resource directory by creating a new management account.
       *
       * @description Each Alibaba Cloud account can send up to 100 verification codes per day.
       *
       * @param request SendVerificationCodeForEnableRDRequest
       * @return SendVerificationCodeForEnableRDResponse
       */
      Models::SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRD(const Models::SendVerificationCodeForEnableRDRequest &request);

      /**
       * @summary Sets the default version of an access policy.
       *
       * @param request SetDefaultPolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultPolicyVersionResponse
       */
      Models::SetDefaultPolicyVersionResponse setDefaultPolicyVersionWithOptions(const Models::SetDefaultPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the default version of an access policy.
       *
       * @param request SetDefaultPolicyVersionRequest
       * @return SetDefaultPolicyVersionResponse
       */
      Models::SetDefaultPolicyVersionResponse setDefaultPolicyVersion(const Models::SetDefaultPolicyVersionRequest &request);

      /**
       * @summary Enables or disables the member deletion permission by calling SetMemberDeletionPermission.
       *
       * @description You can delete members of the resource account type only after the member deletion permission is enabled.
       *
       * @param request SetMemberDeletionPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetMemberDeletionPermissionResponse
       */
      Models::SetMemberDeletionPermissionResponse setMemberDeletionPermissionWithOptions(const Models::SetMemberDeletionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the member deletion permission by calling SetMemberDeletionPermission.
       *
       * @description You can delete members of the resource account type only after the member deletion permission is enabled.
       *
       * @param request SetMemberDeletionPermissionRequest
       * @return SetMemberDeletionPermissionResponse
       */
      Models::SetMemberDeletionPermissionResponse setMemberDeletionPermission(const Models::SetMemberDeletionPermissionRequest &request);

      /**
       * @summary Attaches labels to resource groups or member accounts of a resource directory.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches labels to resource groups or member accounts of a resource directory.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbinds tags from resource groups or resource directory members.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from resource groups or resource directory members.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

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
      Models::UpdateAccountResponse updateAccountWithOptions(const Models::UpdateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateAccountResponse updateAccount(const Models::UpdateAccountRequest &request);

      /**
       * @summary Updates the settings of the associated resource group transfer feature by calling UpdateAssociatedTransferSetting.
       *
       * @description For cloud resources that support the attached-resource allocation feature, see [Attached-resource allocation](https://help.aliyun.com/document_detail/606232.html).
       *
       * @param request UpdateAssociatedTransferSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAssociatedTransferSettingResponse
       */
      Models::UpdateAssociatedTransferSettingResponse updateAssociatedTransferSettingWithOptions(const Models::UpdateAssociatedTransferSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the settings of the associated resource group transfer feature by calling UpdateAssociatedTransferSetting.
       *
       * @description For cloud resources that support the attached-resource allocation feature, see [Attached-resource allocation](https://help.aliyun.com/document_detail/606232.html).
       *
       * @param request UpdateAssociatedTransferSettingRequest
       * @return UpdateAssociatedTransferSettingResponse
       */
      Models::UpdateAssociatedTransferSettingResponse updateAssociatedTransferSetting(const Models::UpdateAssociatedTransferSettingRequest &request);

      /**
       * @summary Calls UpdateAutoGroupingConfig to update the automatic group transfer settings. Currently, only the setting for whether to enable existing associated resources to follow the group transfer task is supported.
       *
       * @param request UpdateAutoGroupingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoGroupingConfigResponse
       */
      Models::UpdateAutoGroupingConfigResponse updateAutoGroupingConfigWithOptions(const Models::UpdateAutoGroupingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls UpdateAutoGroupingConfig to update the automatic group transfer settings. Currently, only the setting for whether to enable existing associated resources to follow the group transfer task is supported.
       *
       * @param request UpdateAutoGroupingConfigRequest
       * @return UpdateAutoGroupingConfigResponse
       */
      Models::UpdateAutoGroupingConfigResponse updateAutoGroupingConfig(const Models::UpdateAutoGroupingConfigRequest &request);

      /**
       * @summary Updates an automatic resource group transfer rule by calling UpdateAutoGroupingRule.
       *
       * @param request UpdateAutoGroupingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoGroupingRuleResponse
       */
      Models::UpdateAutoGroupingRuleResponse updateAutoGroupingRuleWithOptions(const Models::UpdateAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an automatic resource group transfer rule by calling UpdateAutoGroupingRule.
       *
       * @param request UpdateAutoGroupingRuleRequest
       * @return UpdateAutoGroupingRuleResponse
       */
      Models::UpdateAutoGroupingRuleResponse updateAutoGroupingRule(const Models::UpdateAutoGroupingRuleRequest &request);

      /**
       * @summary Modifies a custom control policy by calling UpdateControlPolicy.
       *
       * @description This topic provides an example on how to modify the name of the control policy `cp-jExXAqIYkwHN****` to `NewControlPolicy`.
       *
       * @param request UpdateControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateControlPolicyResponse
       */
      Models::UpdateControlPolicyResponse updateControlPolicyWithOptions(const Models::UpdateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom control policy by calling UpdateControlPolicy.
       *
       * @description This topic provides an example on how to modify the name of the control policy `cp-jExXAqIYkwHN****` to `NewControlPolicy`.
       *
       * @param request UpdateControlPolicyRequest
       * @return UpdateControlPolicyResponse
       */
      Models::UpdateControlPolicyResponse updateControlPolicy(const Models::UpdateControlPolicyRequest &request);

      /**
       * @summary Modifies the name of a folder by calling UpdateFolder.
       *
       * @param request UpdateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolderWithOptions(const Models::UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a folder by calling UpdateFolder.
       *
       * @param request UpdateFolderRequest
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolder(const Models::UpdateFolderRequest &request);

      /**
       * @summary Modifies the display name of a resource group.
       *
       * @param request UpdateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroupWithOptions(const Models::UpdateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the display name of a resource group.
       *
       * @param request UpdateResourceGroupRequest
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroup(const Models::UpdateResourceGroupRequest &request);

      /**
       * @summary Updates the administrator settings of a resource group by calling UpdateResourceGroupAdminSetting.
       *
       * @param request UpdateResourceGroupAdminSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceGroupAdminSettingResponse
       */
      Models::UpdateResourceGroupAdminSettingResponse updateResourceGroupAdminSettingWithOptions(const Models::UpdateResourceGroupAdminSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the administrator settings of a resource group by calling UpdateResourceGroupAdminSetting.
       *
       * @param request UpdateResourceGroupAdminSettingRequest
       * @return UpdateResourceGroupAdminSettingResponse
       */
      Models::UpdateResourceGroupAdminSettingResponse updateResourceGroupAdminSetting(const Models::UpdateResourceGroupAdminSettingRequest &request);

      /**
       * @summary Updates the information of a RAM role.
       *
       * @param request UpdateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a RAM role.
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
