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
       * @summary Accepts an invitation.
       *
       * @description After an invited Alibaba Cloud account joins a resource directory, it becomes a member of the resource directory. By default, the name of the invited Alibaba Cloud account is used as the display name of the account in the resource directory.
       * This topic provides an example on how to call the API operation to accept the invitation `h-Ih8IuPfvV0t0****` that is initiated to invite the Alibaba Cloud account `177242285274****` to join the resource directory `rd-3G****`.
       *
       * @param request AcceptHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptHandshakeResponse
       */
      Models::AcceptHandshakeResponse acceptHandshakeWithOptions(const Models::AcceptHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Accepts an invitation.
       *
       * @description After an invited Alibaba Cloud account joins a resource directory, it becomes a member of the resource directory. By default, the name of the invited Alibaba Cloud account is used as the display name of the account in the resource directory.
       * This topic provides an example on how to call the API operation to accept the invitation `h-Ih8IuPfvV0t0****` that is initiated to invite the Alibaba Cloud account `177242285274****` to join the resource directory `rd-3G****`.
       *
       * @param request AcceptHandshakeRequest
       * @return AcceptHandshakeResponse
       */
      Models::AcceptHandshakeResponse acceptHandshake(const Models::AcceptHandshakeRequest &request);

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
      Models::AttachControlPolicyResponse attachControlPolicyWithOptions(const Models::AttachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AttachControlPolicyResponse attachControlPolicy(const Models::AttachControlPolicyRequest &request);

      /**
       * @summary Attaches a permission policy to an object, which can be a RAM user, RAM user group, or RAM role. After you attach a permission policy to an object, the object has the operation permissions on the resources in a specific resource group or within a specific Alibaba Cloud account.
       *
       * @description In this example, the policy `AdministratorAccess` is attached to the RAM user `alice@demo.onaliyun.com` and takes effect only for resources in the `rg-9gLOoK****` resource group.
       *
       * @param request AttachPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicyResponse
       */
      Models::AttachPolicyResponse attachPolicyWithOptions(const Models::AttachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a permission policy to an object, which can be a RAM user, RAM user group, or RAM role. After you attach a permission policy to an object, the object has the operation permissions on the resources in a specific resource group or within a specific Alibaba Cloud account.
       *
       * @description In this example, the policy `AdministratorAccess` is attached to the RAM user `alice@demo.onaliyun.com` and takes effect only for resources in the `rg-9gLOoK****` resource group.
       *
       * @param request AttachPolicyRequest
       * @return AttachPolicyResponse
       */
      Models::AttachPolicyResponse attachPolicy(const Models::AttachPolicyRequest &request);

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
      Models::BindSecureMobilePhoneResponse bindSecureMobilePhoneWithOptions(const Models::BindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::BindSecureMobilePhoneResponse bindSecureMobilePhone(const Models::BindSecureMobilePhoneRequest &request);

      /**
       * @summary 取消修改邮箱
       *
       * @param request CancelChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelChangeAccountEmailResponse
       */
      Models::CancelChangeAccountEmailResponse cancelChangeAccountEmailWithOptions(const Models::CancelChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消修改邮箱
       *
       * @param request CancelChangeAccountEmailRequest
       * @return CancelChangeAccountEmailResponse
       */
      Models::CancelChangeAccountEmailResponse cancelChangeAccountEmail(const Models::CancelChangeAccountEmailRequest &request);

      /**
       * @summary 取消创建云账号类型的成员
       *
       * @param request CancelCreateCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCreateCloudAccountResponse
       */
      Models::CancelCreateCloudAccountResponse cancelCreateCloudAccountWithOptions(const Models::CancelCreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消创建云账号类型的成员
       *
       * @param request CancelCreateCloudAccountRequest
       * @return CancelCreateCloudAccountResponse
       */
      Models::CancelCreateCloudAccountResponse cancelCreateCloudAccount(const Models::CancelCreateCloudAccountRequest &request);

      /**
       * @summary Cancels an invitation.
       *
       * @description This topic provides an example on how to call the API operation to cancel the invitation whose ID is `h-ycm4rp****`.
       *
       * @param request CancelHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelHandshakeResponse
       */
      Models::CancelHandshakeResponse cancelHandshakeWithOptions(const Models::CancelHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an invitation.
       *
       * @description This topic provides an example on how to call the API operation to cancel the invitation whose ID is `h-ycm4rp****`.
       *
       * @param request CancelHandshakeRequest
       * @return CancelHandshakeResponse
       */
      Models::CancelHandshakeResponse cancelHandshake(const Models::CancelHandshakeRequest &request);

      /**
       * @summary 取消升级资源账号
       *
       * @param request CancelPromoteResourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPromoteResourceAccountResponse
       */
      Models::CancelPromoteResourceAccountResponse cancelPromoteResourceAccountWithOptions(const Models::CancelPromoteResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消升级资源账号
       *
       * @param request CancelPromoteResourceAccountRequest
       * @return CancelPromoteResourceAccountResponse
       */
      Models::CancelPromoteResourceAccountResponse cancelPromoteResourceAccount(const Models::CancelPromoteResourceAccountRequest &request);

      /**
       * @summary 成员账号设置安全邮箱
       *
       * @param request ChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAccountEmailResponse
       */
      Models::ChangeAccountEmailResponse changeAccountEmailWithOptions(const Models::ChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 成员账号设置安全邮箱
       *
       * @param request ChangeAccountEmailRequest
       * @return ChangeAccountEmailResponse
       */
      Models::ChangeAccountEmailResponse changeAccountEmail(const Models::ChangeAccountEmailRequest &request);

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
      Models::CheckAccountDeleteResponse checkAccountDeleteWithOptions(const Models::CheckAccountDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a member deletion check.
       *
       * @description Before you delete a member, you must call this API operation to check whether the member can be deleted.
       * This topic provides an example on how to call the API operation to perform a deletion check on the member whose ID is `179855839641****`.
       *
       * @param request CheckAccountDeleteRequest
       * @return CheckAccountDeleteResponse
       */
      Models::CheckAccountDeleteResponse checkAccountDelete(const Models::CheckAccountDeleteRequest &request);

      /**
       * @summary Creates a transfer rule. Custom transfer rules and transfer rules for associated resources are supported.
       *
       * @description You can create up to 10 custom transfer rules. Each custom transfer rule can contain up to 10 content records.
       *
       * @param request CreateAutoGroupingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoGroupingRuleResponse
       */
      Models::CreateAutoGroupingRuleResponse createAutoGroupingRuleWithOptions(const Models::CreateAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a transfer rule. Custom transfer rules and transfer rules for associated resources are supported.
       *
       * @description You can create up to 10 custom transfer rules. Each custom transfer rule can contain up to 10 content records.
       *
       * @param request CreateAutoGroupingRuleRequest
       * @return CreateAutoGroupingRuleResponse
       */
      Models::CreateAutoGroupingRuleResponse createAutoGroupingRule(const Models::CreateAutoGroupingRuleRequest &request);

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
      Models::CreateCloudAccountResponse createCloudAccountWithOptions(const Models::CreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCloudAccountResponse createCloudAccount(const Models::CreateCloudAccountRequest &request);

      /**
       * @description This topic provides an example on how to call the API operation to create a custom access control policy named `ExampleControlPolicy`. This access control policy is used to prohibit modifications to the ResourceDirectoryAccountAccessRole role and the permissions of the role.
       *
       * @param request CreateControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateControlPolicyResponse
       */
      Models::CreateControlPolicyResponse createControlPolicyWithOptions(const Models::CreateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This topic provides an example on how to call the API operation to create a custom access control policy named `ExampleControlPolicy`. This access control policy is used to prohibit modifications to the ResourceDirectoryAccountAccessRole role and the permissions of the role.
       *
       * @param request CreateControlPolicyRequest
       * @return CreateControlPolicyResponse
       */
      Models::CreateControlPolicyResponse createControlPolicy(const Models::CreateControlPolicyRequest &request);

      /**
       * @description >  A maximum of five levels of folders can be created under the root folder.
       * In this example, a folder named `rdFolder` is created under the root folder.
       *
       * @param request CreateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolderWithOptions(const Models::CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description >  A maximum of five levels of folders can be created under the root folder.
       * In this example, a folder named `rdFolder` is created under the root folder.
       *
       * @param request CreateFolderRequest
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolder(const Models::CreateFolderRequest &request);

      /**
       * @summary Creates a permission policy.
       *
       * @param request CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission policy.
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary Creates a version for a permission policy.
       *
       * @param request CreatePolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyVersionResponse
       */
      Models::CreatePolicyVersionResponse createPolicyVersionWithOptions(const Models::CreatePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a version for a permission policy.
       *
       * @param request CreatePolicyVersionRequest
       * @return CreatePolicyVersionResponse
       */
      Models::CreatePolicyVersionResponse createPolicyVersion(const Models::CreatePolicyVersionRequest &request);

      /**
       * @summary Creates a member of the resource account type.
       *
       * @description A member serves as a container for resources and is also an organizational unit in a resource directory. A member indicates a project or application. The resources of different members are isolated.
       *
       * @param request CreateResourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceAccountResponse
       */
      Models::CreateResourceAccountResponse createResourceAccountWithOptions(const Models::CreateResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a member of the resource account type.
       *
       * @description A member serves as a container for resources and is also an organizational unit in a resource directory. A member indicates a project or application. The resources of different members are isolated.
       *
       * @param request CreateResourceAccountRequest
       * @return CreateResourceAccountResponse
       */
      Models::CreateResourceAccountResponse createResourceAccount(const Models::CreateResourceAccountRequest &request);

      /**
       * @summary Creates a resource group.
       *
       * @description > A maximum of 30 resource groups can be created within an Alibaba Cloud account.
       *
       * @param request CreateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroupWithOptions(const Models::CreateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group.
       *
       * @description > A maximum of 30 resource groups can be created within an Alibaba Cloud account.
       *
       * @param request CreateResourceGroupRequest
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroup(const Models::CreateResourceGroupRequest &request);

      /**
       * @summary Creates a RAM role.
       *
       * @param request CreateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a RAM role.
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
       * @summary Rejects an invitation.
       *
       * @param request DeclineHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeclineHandshakeResponse
       */
      Models::DeclineHandshakeResponse declineHandshakeWithOptions(const Models::DeclineHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rejects an invitation.
       *
       * @param request DeclineHandshakeRequest
       * @return DeclineHandshakeResponse
       */
      Models::DeclineHandshakeResponse declineHandshake(const Models::DeclineHandshakeRequest &request);

      /**
       * @summary 账号一键删除
       *
       * @description The ID of the member that you want to delete.
       *
       * @param tmpReq DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号一键删除
       *
       * @description The ID of the member that you want to delete.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes a transfer rule.
       *
       * @param request DeleteAutoGroupingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoGroupingRuleResponse
       */
      Models::DeleteAutoGroupingRuleResponse deleteAutoGroupingRuleWithOptions(const Models::DeleteAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a transfer rule.
       *
       * @param request DeleteAutoGroupingRuleRequest
       * @return DeleteAutoGroupingRuleResponse
       */
      Models::DeleteAutoGroupingRuleResponse deleteAutoGroupingRule(const Models::DeleteAutoGroupingRuleRequest &request);

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
      Models::DeleteControlPolicyResponse deleteControlPolicyWithOptions(const Models::DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除管控策略
       *
       * @description If you want to delete a custom control policy that is attached to folders or member accounts, you must call the [DetachControlPolicy](https://help.aliyun.com/document_detail/208331.html) operation to detach the policy before you delete it.
       * In this example, the custom control policy `cp-SImPt8GCEwiq****` is deleted.
       *
       * @param request DeleteControlPolicyRequest
       * @return DeleteControlPolicyResponse
       */
      Models::DeleteControlPolicyResponse deleteControlPolicy(const Models::DeleteControlPolicyRequest &request);

      /**
       * @description >  Before you delete a folder, make sure that the folder does not contain any member accounts or child folders.
       *
       * @param request DeleteFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolderWithOptions(const Models::DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description >  Before you delete a folder, make sure that the folder does not contain any member accounts or child folders.
       *
       * @param request DeleteFolderRequest
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolder(const Models::DeleteFolderRequest &request);

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
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary Deletes a version of a permission policy.
       *
       * @description >  The default version of a policy cannot be deleted.
       *
       * @param request DeletePolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyVersionResponse
       */
      Models::DeletePolicyVersionResponse deletePolicyVersionWithOptions(const Models::DeletePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a version of a permission policy.
       *
       * @description >  The default version of a policy cannot be deleted.
       *
       * @param request DeletePolicyVersionRequest
       * @return DeletePolicyVersionResponse
       */
      Models::DeletePolicyVersionResponse deletePolicyVersion(const Models::DeletePolicyVersionRequest &request);

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
      Models::DeleteResourceGroupResponse deleteResourceGroupWithOptions(const Models::DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group.
       *
       * @description >  Before you delete a resource group, you must delete all the resources in it.
       * In this example, the resource group whose ID is `rg-9gLOoK****` is deleted.
       *
       * @param request DeleteResourceGroupRequest
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroup(const Models::DeleteResourceGroupRequest &request);

      /**
       * @summary Deletes a RAM role.
       *
       * @param request DeleteRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a RAM role.
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
       * @summary 注销代理管理员
       *
       * @description >  If the delegated administrator account that you want to remove has historical management tasks in the related trusted service, the trusted service may be affected after the delegated administrator account is removed. Therefore, proceed with caution.
       * This topic provides an example on how to call the API operation to remove the delegated administrator account `181761095690****` for Cloud Firewall.
       *
       * @param request DeregisterDelegatedAdministratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterDelegatedAdministratorResponse
       */
      Models::DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministratorWithOptions(const Models::DeregisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注销代理管理员
       *
       * @description >  If the delegated administrator account that you want to remove has historical management tasks in the related trusted service, the trusted service may be affected after the delegated administrator account is removed. Therefore, proceed with caution.
       * This topic provides an example on how to call the API operation to remove the delegated administrator account `181761095690****` for Cloud Firewall.
       *
       * @param request DeregisterDelegatedAdministratorRequest
       * @return DeregisterDelegatedAdministratorResponse
       */
      Models::DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministrator(const Models::DeregisterDelegatedAdministratorRequest &request);

      /**
       * @description Before you disable a resource directory, make sure that the following requirements are met:
       * *   All member accounts must be removed from the resource directory. For more information about how to remove a member account, see [RemoveCloudAccount](https://help.aliyun.com/document_detail/159431.html).
       * *   All folders except the root folder must be deleted from the resource directory. For more information about how to delete a folder, see [DeleteFolder](https://help.aliyun.com/document_detail/159432.html).
       *
       * @param request DestroyResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DestroyResourceDirectoryResponse
       */
      Models::DestroyResourceDirectoryResponse destroyResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @description Before you disable a resource directory, make sure that the following requirements are met:
       * *   All member accounts must be removed from the resource directory. For more information about how to remove a member account, see [RemoveCloudAccount](https://help.aliyun.com/document_detail/159431.html).
       * *   All folders except the root folder must be deleted from the resource directory. For more information about how to delete a folder, see [DeleteFolder](https://help.aliyun.com/document_detail/159432.html).
       *
       * @return DestroyResourceDirectoryResponse
       */
      Models::DestroyResourceDirectoryResponse destroyResourceDirectory();

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
      Models::DetachControlPolicyResponse detachControlPolicyWithOptions(const Models::DetachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DetachControlPolicyResponse detachControlPolicy(const Models::DetachControlPolicyRequest &request);

      /**
       * @summary Detaches a permission policy from an object. After you detach a policy from an object, the object does not have the operation permissions on the current resource group or the resources within the current account.
       *
       * @param request DetachPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicyResponse
       */
      Models::DetachPolicyResponse detachPolicyWithOptions(const Models::DetachPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a permission policy from an object. After you detach a policy from an object, the object does not have the operation permissions on the current resource group or the resources within the current account.
       *
       * @param request DetachPolicyRequest
       * @return DetachPolicyResponse
       */
      Models::DetachPolicyResponse detachPolicy(const Models::DetachPolicyRequest &request);

      /**
       * @summary Disables the Transfer Associated Resources feature.
       *
       * @param request DisableAssociatedTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAssociatedTransferResponse
       */
      Models::DisableAssociatedTransferResponse disableAssociatedTransferWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the Transfer Associated Resources feature.
       *
       * @return DisableAssociatedTransferResponse
       */
      Models::DisableAssociatedTransferResponse disableAssociatedTransfer();

      /**
       * @summary Disables the Automatic Resource Transfer feature. After the feature is disabled, existing custom transfer rules and existing transfer rules for associated resources are deleted. However, existing relationships between resources and resource groups are not affected. If you still want to use this feature, you can enable it again 1 minute later.
       *
       * @param request DisableAutoGroupingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAutoGroupingResponse
       */
      Models::DisableAutoGroupingResponse disableAutoGroupingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the Automatic Resource Transfer feature. After the feature is disabled, existing custom transfer rules and existing transfer rules for associated resources are deleted. However, existing relationships between resources and resource groups are not affected. If you still want to use this feature, you can enable it again 1 minute later.
       *
       * @return DisableAutoGroupingResponse
       */
      Models::DisableAutoGroupingResponse disableAutoGrouping();

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
      Models::DisableControlPolicyResponse disableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用管控策略
       *
       * @description After you disable the Control Policy feature, the system automatically detaches all control policies that are attached to folders and member accounts. The system does not delete these control policies, but you cannot attach them to folders or member accounts again.
       * >  If you disable the Control Policy feature, the permissions of all folders and member accounts in a resource directory are affected. You must proceed with caution.
       *
       * @return DisableControlPolicyResponse
       */
      Models::DisableControlPolicyResponse disableControlPolicy();

      /**
       * @summary Disables group event notification.
       *
       * @param request DisableResourceGroupNotificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableResourceGroupNotificationResponse
       */
      Models::DisableResourceGroupNotificationResponse disableResourceGroupNotificationWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables group event notification.
       *
       * @return DisableResourceGroupNotificationResponse
       */
      Models::DisableResourceGroupNotificationResponse disableResourceGroupNotification();

      /**
       * @summary Enables the Transfer Associated Resources feature.
       *
       * @param request EnableAssociatedTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAssociatedTransferResponse
       */
      Models::EnableAssociatedTransferResponse enableAssociatedTransferWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Transfer Associated Resources feature.
       *
       * @return EnableAssociatedTransferResponse
       */
      Models::EnableAssociatedTransferResponse enableAssociatedTransfer();

      /**
       * @summary Enables the Automatic Resource Transfer feature. After the feature is enabled, you can create, update, delete, and query transfer rules.
       *
       * @param request EnableAutoGroupingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAutoGroupingResponse
       */
      Models::EnableAutoGroupingResponse enableAutoGroupingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Automatic Resource Transfer feature. After the feature is enabled, you can create, update, delete, and query transfer rules.
       *
       * @return EnableAutoGroupingResponse
       */
      Models::EnableAutoGroupingResponse enableAutoGrouping();

      /**
       * @summary Enables the Control Policy feature.
       *
       * @description The Control Policy feature allows you to manage the permission boundaries of the folders or member accounts in a resource directory in a centralized manner. This feature is implemented based on the resource directory. You can use this feature to develop common or dedicated rules for access control. The Control Policy feature does not grant permissions but only defines permission boundaries. A member account in a resource directory can be used to access resources only after it is granted the required permissions by using the Resource Access Management (RAM) service. For more information, see [Overview of the Control Policy feature](https://help.aliyun.com/document_detail/178671.html).
       *
       * @param request EnableControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableControlPolicyResponse
       */
      Models::EnableControlPolicyResponse enableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Control Policy feature.
       *
       * @description The Control Policy feature allows you to manage the permission boundaries of the folders or member accounts in a resource directory in a centralized manner. This feature is implemented based on the resource directory. You can use this feature to develop common or dedicated rules for access control. The Control Policy feature does not grant permissions but only defines permission boundaries. A member account in a resource directory can be used to access resources only after it is granted the required permissions by using the Resource Access Management (RAM) service. For more information, see [Overview of the Control Policy feature](https://help.aliyun.com/document_detail/178671.html).
       *
       * @return EnableControlPolicyResponse
       */
      Models::EnableControlPolicyResponse enableControlPolicy();

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
      Models::EnableResourceDirectoryResponse enableResourceDirectoryWithOptions(const Models::EnableResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启RD
       *
       * @description You can use the current account or a newly created account to enable a resource directory. For more information, see [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
       * In this example, the current account is used to enable a resource directory.
       *
       * @param request EnableResourceDirectoryRequest
       * @return EnableResourceDirectoryResponse
       */
      Models::EnableResourceDirectoryResponse enableResourceDirectory(const Models::EnableResourceDirectoryRequest &request);

      /**
       * @summary Enables group event notification.
       *
       * @param request EnableResourceGroupNotificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableResourceGroupNotificationResponse
       */
      Models::EnableResourceGroupNotificationResponse enableResourceGroupNotificationWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables group event notification.
       *
       * @return EnableResourceGroupNotificationResponse
       */
      Models::EnableResourceGroupNotificationResponse enableResourceGroupNotification();

      /**
       * @description This topic provides an example on how to call the API operation to query the information of the member whose Alibaba Cloud account ID is `181761095690****`.
       *
       * @param request GetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountResponse
       */
      Models::GetAccountResponse getAccountWithOptions(const Models::GetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This topic provides an example on how to call the API operation to query the information of the member whose Alibaba Cloud account ID is `181761095690****`.
       *
       * @param request GetAccountRequest
       * @return GetAccountResponse
       */
      Models::GetAccountResponse getAccount(const Models::GetAccountRequest &request);

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
      Models::GetAccountDeletionCheckResultResponse getAccountDeletionCheckResultWithOptions(const Models::GetAccountDeletionCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of a member deletion check.
       *
       * @description After you call the [CheckAccountDelete](https://help.aliyun.com/document_detail/448542.html) operation to perform a member deletion check, you can call the GetAccountDeletionCheckResult operation to query the check result. If the check result shows that the member meets deletion requirements, you can delete the member. Otherwise, you need to first modify the items that do not meet requirements.
       * This topic provides an example on how to call the API operation to query the result of the deletion check for the member whose ID is `179855839641****`. The response shows that the member does not meet deletion requirements.
       *
       * @param request GetAccountDeletionCheckResultRequest
       * @return GetAccountDeletionCheckResultResponse
       */
      Models::GetAccountDeletionCheckResultResponse getAccountDeletionCheckResult(const Models::GetAccountDeletionCheckResultRequest &request);

      /**
       * @summary 获取账号删除状态
       *
       * @description This topic provides an example on how to call the API operation to query the deletion status of the member whose Alibaba Cloud account ID is `169946124551****`. The response shows that the member is deleted.
       *
       * @param request GetAccountDeletionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountDeletionStatusResponse
       */
      Models::GetAccountDeletionStatusResponse getAccountDeletionStatusWithOptions(const Models::GetAccountDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取账号删除状态
       *
       * @description This topic provides an example on how to call the API operation to query the deletion status of the member whose Alibaba Cloud account ID is `169946124551****`. The response shows that the member is deleted.
       *
       * @param request GetAccountDeletionStatusRequest
       * @return GetAccountDeletionStatusResponse
       */
      Models::GetAccountDeletionStatusResponse getAccountDeletionStatus(const Models::GetAccountDeletionStatusRequest &request);

      /**
       * @summary Queries the information about a transfer rule.
       *
       * @param request GetAutoGroupingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoGroupingRuleResponse
       */
      Models::GetAutoGroupingRuleResponse getAutoGroupingRuleWithOptions(const Models::GetAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a transfer rule.
       *
       * @param request GetAutoGroupingRuleRequest
       * @return GetAutoGroupingRuleResponse
       */
      Models::GetAutoGroupingRuleResponse getAutoGroupingRule(const Models::GetAutoGroupingRuleRequest &request);

      /**
       * @summary Queries the status of the Automatic Resource Transfer feature.
       *
       * @param request GetAutoGroupingStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoGroupingStatusResponse
       */
      Models::GetAutoGroupingStatusResponse getAutoGroupingStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Automatic Resource Transfer feature.
       *
       * @return GetAutoGroupingStatusResponse
       */
      Models::GetAutoGroupingStatusResponse getAutoGroupingStatus();

      /**
       * @description This topic provides an example on how to call the API operation to query the details of the access control policy whose ID is `cp-SImPt8GCEwiq****`.
       *
       * @param request GetControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetControlPolicyResponse
       */
      Models::GetControlPolicyResponse getControlPolicyWithOptions(const Models::GetControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This topic provides an example on how to call the API operation to query the details of the access control policy whose ID is `cp-SImPt8GCEwiq****`.
       *
       * @param request GetControlPolicyRequest
       * @return GetControlPolicyResponse
       */
      Models::GetControlPolicyResponse getControlPolicy(const Models::GetControlPolicyRequest &request);

      /**
       * @summary Queries the status of the Control Policy feature.
       *
       * @param request GetControlPolicyEnablementStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetControlPolicyEnablementStatusResponse
       */
      Models::GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Control Policy feature.
       *
       * @return GetControlPolicyEnablementStatusResponse
       */
      Models::GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatus();

      /**
       * @description In this example, the information of the folder `fd-Jyl5U7****` is queried.
       *
       * @param request GetFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolderWithOptions(const Models::GetFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description In this example, the information of the folder `fd-Jyl5U7****` is queried.
       *
       * @param request GetFolderRequest
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolder(const Models::GetFolderRequest &request);

      /**
       * @summary Queries the information of an invitation.
       *
       * @description In this example, the information of the invitation whose ID is `h-ycm4rp****` is queried.
       *
       * @param request GetHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHandshakeResponse
       */
      Models::GetHandshakeResponse getHandshakeWithOptions(const Models::GetHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of an invitation.
       *
       * @description In this example, the information of the invitation whose ID is `h-ycm4rp****` is queried.
       *
       * @param request GetHandshakeRequest
       * @return GetHandshakeResponse
       */
      Models::GetHandshakeResponse getHandshake(const Models::GetHandshakeRequest &request);

      /**
       * @param request GetPayerForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPayerForAccountResponse
       */
      Models::GetPayerForAccountResponse getPayerForAccountWithOptions(const Models::GetPayerForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetPayerForAccountRequest
       * @return GetPayerForAccountResponse
       */
      Models::GetPayerForAccountResponse getPayerForAccount(const Models::GetPayerForAccountRequest &request);

      /**
       * @summary Queries the information about a permission policy.
       *
       * @param request GetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const Models::GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a permission policy.
       *
       * @param request GetPolicyRequest
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const Models::GetPolicyRequest &request);

      /**
       * @summary Queries the information about a version of a permission policy.
       *
       * @param request GetPolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyVersionResponse
       */
      Models::GetPolicyVersionResponse getPolicyVersionWithOptions(const Models::GetPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a version of a permission policy.
       *
       * @param request GetPolicyVersionRequest
       * @return GetPolicyVersionResponse
       */
      Models::GetPolicyVersionResponse getPolicyVersion(const Models::GetPolicyVersionRequest &request);

      /**
       * @summary Queries the information of a resource directory. If you use a management account to call this API operation, the system returns the information of the resource directory that is enabled by using the management account. If you use a member to call this operation, the system returns the information of
       *
       * @description This topic provides an example on how to use a management account to call the API operation to query the information of the resource directory that is enabled by using the management account.
       *
       * @param request GetResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceDirectoryResponse
       */
      Models::GetResourceDirectoryResponse getResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a resource directory. If you use a management account to call this API operation, the system returns the information of the resource directory that is enabled by using the management account. If you use a member to call this operation, the system returns the information of
       *
       * @description This topic provides an example on how to use a management account to call the API operation to query the information of the resource directory that is enabled by using the management account.
       *
       * @return GetResourceDirectoryResponse
       */
      Models::GetResourceDirectoryResponse getResourceDirectory();

      /**
       * @summary Queries the information of a resource group.
       *
       * @param request GetResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroupWithOptions(const Models::GetResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a resource group.
       *
       * @param request GetResourceGroupRequest
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroup(const Models::GetResourceGroupRequest &request);

      /**
       * @summary Queries the configurations of a resource group administrator.
       *
       * @param request GetResourceGroupAdminSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupAdminSettingResponse
       */
      Models::GetResourceGroupAdminSettingResponse getResourceGroupAdminSettingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a resource group administrator.
       *
       * @return GetResourceGroupAdminSettingResponse
       */
      Models::GetResourceGroupAdminSettingResponse getResourceGroupAdminSetting();

      /**
       * @summary Queries the notification settings of a resource group.
       *
       * @param request GetResourceGroupNotificationSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupNotificationSettingResponse
       */
      Models::GetResourceGroupNotificationSettingResponse getResourceGroupNotificationSettingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the notification settings of a resource group.
       *
       * @return GetResourceGroupNotificationSettingResponse
       */
      Models::GetResourceGroupNotificationSettingResponse getResourceGroupNotificationSetting();

      /**
       * @summary Queries the number of resources in a visible resource group.
       *
       * @param request GetResourceGroupResourceCountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResourceCountsResponse
       */
      Models::GetResourceGroupResourceCountsResponse getResourceGroupResourceCountsWithOptions(const Models::GetResourceGroupResourceCountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of resources in a visible resource group.
       *
       * @param request GetResourceGroupResourceCountsRequest
       * @return GetResourceGroupResourceCountsResponse
       */
      Models::GetResourceGroupResourceCountsResponse getResourceGroupResourceCounts(const Models::GetResourceGroupResourceCountsRequest &request);

      /**
       * @summary Queries the information about a RAM role.
       *
       * @param request GetRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const Models::GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a RAM role.
       *
       * @param request GetRoleRequest
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const Models::GetRoleRequest &request);

      /**
       * @summary Queries the status of the task that is used to delete a service-linked role.
       *
       * @param request GetServiceLinkedRoleDeletionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceLinkedRoleDeletionStatusResponse
       */
      Models::GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatusWithOptions(const Models::GetServiceLinkedRoleDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the task that is used to delete a service-linked role.
       *
       * @param request GetServiceLinkedRoleDeletionStatusRequest
       * @return GetServiceLinkedRoleDeletionStatusResponse
       */
      Models::GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatus(const Models::GetServiceLinkedRoleDeletionStatusRequest &request);

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
      Models::InitResourceDirectoryResponse initResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a resource directory. After you enable a resource directory, the system automatically creates a root folder and sets the current account as the enterprise management account of the resource directory. The enterprise management account has all administrative permissions on this resource direc
       *
       * @description > 
       * *   An account can be used to enable a resource directory only after it passes enterprise real-name verification. An account that only passed individual real-name verification cannot be used to enable a resource directory.
       * *   We recommend that you only use the enterprise management account as the administrator of the resource directory. Do not use the enterprise management account to purchase cloud resources.
       *
       * @return InitResourceDirectoryResponse
       */
      Models::InitResourceDirectoryResponse initResourceDirectory();

      /**
       * @summary Invites an account to join a resource directory.
       *
       * @description This topic provides an example on how to call the API operation to invite the account `someone@example.com` to join a resource directory.
       *
       * @param request InviteAccountToResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InviteAccountToResourceDirectoryResponse
       */
      Models::InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectoryWithOptions(const Models::InviteAccountToResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invites an account to join a resource directory.
       *
       * @description This topic provides an example on how to call the API operation to invite the account `someone@example.com` to join a resource directory.
       *
       * @param request InviteAccountToResourceDirectoryRequest
       * @return InviteAccountToResourceDirectoryResponse
       */
      Models::InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectory(const Models::InviteAccountToResourceDirectoryRequest &request);

      /**
       * @summary Queries all the members in a resource directory.
       *
       * @description You can use only the management account of a resource directory or a delegated administrator account of a trusted service to call this operation.
       *
       * @param request ListAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccountsWithOptions(const Models::ListAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all the members in a resource directory.
       *
       * @description You can use only the management account of a resource directory or a delegated administrator account of a trusted service to call this operation.
       *
       * @param request ListAccountsRequest
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccounts(const Models::ListAccountsRequest &request);

      /**
       * @summary Queries the information of members in a folder.
       *
       * @param request ListAccountsForParentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsForParentResponse
       */
      Models::ListAccountsForParentResponse listAccountsForParentWithOptions(const Models::ListAccountsForParentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of members in a folder.
       *
       * @param request ListAccountsForParentRequest
       * @return ListAccountsForParentResponse
       */
      Models::ListAccountsForParentResponse listAccountsForParent(const Models::ListAccountsForParentRequest &request);

      /**
       * @param request ListAncestorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAncestorsResponse
       */
      Models::ListAncestorsResponse listAncestorsWithOptions(const Models::ListAncestorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAncestorsRequest
       * @return ListAncestorsResponse
       */
      Models::ListAncestorsResponse listAncestors(const Models::ListAncestorsRequest &request);

      /**
       * @summary Queries the settings of the Transfer Associated Resources feature.
       *
       * @param request ListAssociatedTransferSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssociatedTransferSettingResponse
       */
      Models::ListAssociatedTransferSettingResponse listAssociatedTransferSettingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of the Transfer Associated Resources feature.
       *
       * @return ListAssociatedTransferSettingResponse
       */
      Models::ListAssociatedTransferSettingResponse listAssociatedTransferSetting();

      /**
       * @summary Queries a list of automatic grouping remediation records.
       *
       * @param request ListAutoGroupingRemediationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoGroupingRemediationsResponse
       */
      Models::ListAutoGroupingRemediationsResponse listAutoGroupingRemediationsWithOptions(const Models::ListAutoGroupingRemediationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of automatic grouping remediation records.
       *
       * @param request ListAutoGroupingRemediationsRequest
       * @return ListAutoGroupingRemediationsResponse
       */
      Models::ListAutoGroupingRemediationsResponse listAutoGroupingRemediations(const Models::ListAutoGroupingRemediationsRequest &request);

      /**
       * @summary Queries a list of transfer rules.
       *
       * @param request ListAutoGroupingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoGroupingRulesResponse
       */
      Models::ListAutoGroupingRulesResponse listAutoGroupingRulesWithOptions(const Models::ListAutoGroupingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of transfer rules.
       *
       * @param request ListAutoGroupingRulesRequest
       * @return ListAutoGroupingRulesResponse
       */
      Models::ListAutoGroupingRulesResponse listAutoGroupingRules(const Models::ListAutoGroupingRulesRequest &request);

      /**
       * @summary Queries access control policies.
       *
       * @description This topic provides an example on how to call the API operation to query the system access control policies within a resource directory. The response shows that the resource directory has only one system access control policy. The policy is named `FullAliyunAccess`.
       *
       * @param request ListControlPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListControlPoliciesResponse
       */
      Models::ListControlPoliciesResponse listControlPoliciesWithOptions(const Models::ListControlPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access control policies.
       *
       * @description This topic provides an example on how to call the API operation to query the system access control policies within a resource directory. The response shows that the resource directory has only one system access control policy. The policy is named `FullAliyunAccess`.
       *
       * @param request ListControlPoliciesRequest
       * @return ListControlPoliciesResponse
       */
      Models::ListControlPoliciesResponse listControlPolicies(const Models::ListControlPoliciesRequest &request);

      /**
       * @description This topic provides an example on how to call the API operation to query the access control policies that are attached to the folder `fd-ZDNPiT****`.
       *
       * @param request ListControlPolicyAttachmentsForTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListControlPolicyAttachmentsForTargetResponse
       */
      Models::ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTargetWithOptions(const Models::ListControlPolicyAttachmentsForTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This topic provides an example on how to call the API operation to query the access control policies that are attached to the folder `fd-ZDNPiT****`.
       *
       * @param request ListControlPolicyAttachmentsForTargetRequest
       * @return ListControlPolicyAttachmentsForTargetResponse
       */
      Models::ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTarget(const Models::ListControlPolicyAttachmentsForTargetRequest &request);

      /**
       * @summary 列出所有的代理管理员
       *
       * @description This topic provides an example on how to call the API operation to query all delegated administrator accounts in a resource directory. The response shows that two delegated administrator accounts for Cloud Firewall exist in the resource directory.
       *
       * @param request ListDelegatedAdministratorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDelegatedAdministratorsResponse
       */
      Models::ListDelegatedAdministratorsResponse listDelegatedAdministratorsWithOptions(const Models::ListDelegatedAdministratorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出所有的代理管理员
       *
       * @description This topic provides an example on how to call the API operation to query all delegated administrator accounts in a resource directory. The response shows that two delegated administrator accounts for Cloud Firewall exist in the resource directory.
       *
       * @param request ListDelegatedAdministratorsRequest
       * @return ListDelegatedAdministratorsResponse
       */
      Models::ListDelegatedAdministratorsResponse listDelegatedAdministrators(const Models::ListDelegatedAdministratorsRequest &request);

      /**
       * @summary 查看指定账号被设置为哪些可信服务的委派管理员
       *
       * @description This topic provides an example on how to call the API operation to query the trusted services for which the member `138660628348****` is specified as a delegated administrator account. The response shows that the member is specified as a delegated administrator account of Cloud Firewall.
       *
       * @param request ListDelegatedServicesForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDelegatedServicesForAccountResponse
       */
      Models::ListDelegatedServicesForAccountResponse listDelegatedServicesForAccountWithOptions(const Models::ListDelegatedServicesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看指定账号被设置为哪些可信服务的委派管理员
       *
       * @description This topic provides an example on how to call the API operation to query the trusted services for which the member `138660628348****` is specified as a delegated administrator account. The response shows that the member is specified as a delegated administrator account of Cloud Firewall.
       *
       * @param request ListDelegatedServicesForAccountRequest
       * @return ListDelegatedServicesForAccountResponse
       */
      Models::ListDelegatedServicesForAccountResponse listDelegatedServicesForAccount(const Models::ListDelegatedServicesForAccountRequest &request);

      /**
       * @description >  You can view the information of only the first-level subfolders of a folder.
       *
       * @param request ListFoldersForParentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFoldersForParentResponse
       */
      Models::ListFoldersForParentResponse listFoldersForParentWithOptions(const Models::ListFoldersForParentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description >  You can view the information of only the first-level subfolders of a folder.
       *
       * @param request ListFoldersForParentRequest
       * @return ListFoldersForParentResponse
       */
      Models::ListFoldersForParentResponse listFoldersForParent(const Models::ListFoldersForParentRequest &request);

      /**
       * @summary Queries the invitations that are associated with an account.
       *
       * @description This topic provides an example on how to call the API operation to query the invitations that are associated with the management account `172841235500****`. The response shows that two invitations are associated with the management account.
       *
       * @param request ListHandshakesForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHandshakesForAccountResponse
       */
      Models::ListHandshakesForAccountResponse listHandshakesForAccountWithOptions(const Models::ListHandshakesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the invitations that are associated with an account.
       *
       * @description This topic provides an example on how to call the API operation to query the invitations that are associated with the management account `172841235500****`. The response shows that two invitations are associated with the management account.
       *
       * @param request ListHandshakesForAccountRequest
       * @return ListHandshakesForAccountResponse
       */
      Models::ListHandshakesForAccountResponse listHandshakesForAccount(const Models::ListHandshakesForAccountRequest &request);

      /**
       * @summary Queries invitations in a resource directory.
       *
       * @param request ListHandshakesForResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHandshakesForResourceDirectoryResponse
       */
      Models::ListHandshakesForResourceDirectoryResponse listHandshakesForResourceDirectoryWithOptions(const Models::ListHandshakesForResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries invitations in a resource directory.
       *
       * @param request ListHandshakesForResourceDirectoryRequest
       * @return ListHandshakesForResourceDirectoryResponse
       */
      Models::ListHandshakesForResourceDirectoryResponse listHandshakesForResourceDirectory(const Models::ListHandshakesForResourceDirectoryRequest &request);

      /**
       * @summary Queries a list of permission policies.
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of permission policies.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

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
      Models::ListPolicyAttachmentsResponse listPolicyAttachmentsWithOptions(const Models::ListPolicyAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListPolicyAttachmentsResponse listPolicyAttachments(const Models::ListPolicyAttachmentsRequest &request);

      /**
       * @summary Queries a list of versions of a policy.
       *
       * @param request ListPolicyVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyVersionsResponse
       */
      Models::ListPolicyVersionsResponse listPolicyVersionsWithOptions(const Models::ListPolicyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of versions of a policy.
       *
       * @param request ListPolicyVersionsRequest
       * @return ListPolicyVersionsResponse
       */
      Models::ListPolicyVersionsResponse listPolicyVersions(const Models::ListPolicyVersionsRequest &request);

      /**
       * @summary 列出资源组能力项
       *
       * @param request ListResourceGroupCapabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupCapabilityResponse
       */
      Models::ListResourceGroupCapabilityResponse listResourceGroupCapabilityWithOptions(const Models::ListResourceGroupCapabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源组能力项
       *
       * @param request ListResourceGroupCapabilityRequest
       * @return ListResourceGroupCapabilityResponse
       */
      Models::ListResourceGroupCapabilityResponse listResourceGroupCapability(const Models::ListResourceGroupCapabilityRequest &request);

      /**
       * @description You can call this API operation to query all resource groups within the current account. You can also call this API operation to query a specific resource group based on the status, ID, identifier, or display name of the resource group.
       * This topic provides an example on how to call the API operation to query the basic information about the resource groups `rg-1hSBH2****` and `rg-9gLOoK****` within the current account.
       *
       * @param request ListResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description You can call this API operation to query all resource groups within the current account. You can also call this API operation to query a specific resource group based on the status, ID, identifier, or display name of the resource group.
       * This topic provides an example on how to call the API operation to query the basic information about the resource groups `rg-1hSBH2****` and `rg-9gLOoK****` within the current account.
       *
       * @param request ListResourceGroupsRequest
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroups(const Models::ListResourceGroupsRequest &request);

      /**
       * @summary 列出资源组与用户授权信息
       *
       * @param request ListResourceGroupsWithAuthDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsWithAuthDetailsResponse
       */
      Models::ListResourceGroupsWithAuthDetailsResponse listResourceGroupsWithAuthDetailsWithOptions(const Models::ListResourceGroupsWithAuthDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源组与用户授权信息
       *
       * @param request ListResourceGroupsWithAuthDetailsRequest
       * @return ListResourceGroupsWithAuthDetailsResponse
       */
      Models::ListResourceGroupsWithAuthDetailsResponse listResourceGroupsWithAuthDetails(const Models::ListResourceGroupsWithAuthDetailsRequest &request);

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
      Models::ListResourcesResponse listResourcesWithOptions(const Models::ListResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resources that can be accessed by the current account in resource groups.
       *
       * @description >  You can use a RAM role that is not associated with a session policy to call this API operation.
       * This topic provides an example on how to call the API operation to query resources that can be accessed by the current account in resource groups. The response shows that the current account can access only the Elastic Compute Service (ECS) instance `i-23v38****` in the resource group `rg-uPJpP****`.
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const Models::ListResourcesRequest &request);

      /**
       * @summary Queries a list of RAM roles.
       *
       * @param request ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of RAM roles.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary 列出所有的Tag key
       *
       * @description This topic provides an example on how to call the API operation to query tag keys. The response shows that the custom tag key team exists.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出所有的Tag key
       *
       * @description This topic provides an example on how to call the API operation to query tag keys. The response shows that the custom tag key team exists.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags that are added to resource groups or the members in a resource directory.
       *
       * @description This topic provides an example on how to call the API operation to query the tags that are added to the resource group with an ID of `rg-aekz6bre2uq****`. The response shows that only the `k1:v1` tag is added to the resource group.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resource groups or the members in a resource directory.
       *
       * @description This topic provides an example on how to call the API operation to query the tags that are added to the resource group with an ID of `rg-aekz6bre2uq****`. The response shows that only the `k1:v1` tag is added to the resource group.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 列出所有的Tag values
       *
       * @description This topic provides an example on how to call the API operation to query the tag values of the tag key k1. The response shows that the tag value of the tag key k1 is v1.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出所有的Tag values
       *
       * @description This topic provides an example on how to call the API operation to query the tag values of the tag key k1. The response shows that the tag value of the tag key k1 is v1.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Queries the objects to which a specific control policy is attached.
       *
       * @description In this example, the folders or member accounts to which the control policy `cp-jExXAqIYkwHN****` is attached are queried. The returned result shows that the control policy is attached to the folder `fd-ZDNPiT****`.
       *
       * @param request ListTargetAttachmentsForControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTargetAttachmentsForControlPolicyResponse
       */
      Models::ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicyWithOptions(const Models::ListTargetAttachmentsForControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the objects to which a specific control policy is attached.
       *
       * @description In this example, the folders or member accounts to which the control policy `cp-jExXAqIYkwHN****` is attached are queried. The returned result shows that the control policy is attached to the folder `fd-ZDNPiT****`.
       *
       * @param request ListTargetAttachmentsForControlPolicyRequest
       * @return ListTargetAttachmentsForControlPolicyResponse
       */
      Models::ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicy(const Models::ListTargetAttachmentsForControlPolicyRequest &request);

      /**
       * @description >  Only an enterprise management account or delegated administrator account can be used to call this operation.
       * In this example, the trusted services that are enabled within an enterprise management account are queried. The returned result shows that the trusted services Cloud Config and ActionTrail are enabled within the enterprise management account.
       *
       * @param request ListTrustedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrustedServiceStatusResponse
       */
      Models::ListTrustedServiceStatusResponse listTrustedServiceStatusWithOptions(const Models::ListTrustedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description >  Only an enterprise management account or delegated administrator account can be used to call this operation.
       * In this example, the trusted services that are enabled within an enterprise management account are queried. The returned result shows that the trusted services Cloud Config and ActionTrail are enabled within the enterprise management account.
       *
       * @param request ListTrustedServiceStatusRequest
       * @return ListTrustedServiceStatusResponse
       */
      Models::ListTrustedServiceStatusResponse listTrustedServiceStatus(const Models::ListTrustedServiceStatusRequest &request);

      /**
       * @summary 查询资源组事件
       *
       * @param request LookupResourceGroupEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LookupResourceGroupEventsResponse
       */
      Models::LookupResourceGroupEventsResponse lookupResourceGroupEventsWithOptions(const Models::LookupResourceGroupEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源组事件
       *
       * @param request LookupResourceGroupEventsRequest
       * @return LookupResourceGroupEventsResponse
       */
      Models::LookupResourceGroupEventsResponse lookupResourceGroupEvents(const Models::LookupResourceGroupEventsRequest &request);

      /**
       * @summary 移动账号
       *
       * @param request MoveAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveAccountResponse
       */
      Models::MoveAccountResponse moveAccountWithOptions(const Models::MoveAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动账号
       *
       * @param request MoveAccountRequest
       * @return MoveAccountResponse
       */
      Models::MoveAccountResponse moveAccount(const Models::MoveAccountRequest &request);

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
      Models::MoveResourcesResponse moveResourcesWithOptions(const Models::MoveResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves resources from one resource group to another. You can move multiple resources that reside in different regions, are used by different Alibaba Cloud services, or belong to different resource groups.
       *
       * @description For more information about Alibaba Cloud services whose resources can be moved between resource groups, see the **Supported by the API** column in [Alibaba Cloud services that support resource groups](https://help.aliyun.com/document_detail/94479.html).
       * In this example, two virtual private clouds (VPCs) `vpc-bp1sig0mjktx5ewx1****` and `vpc-bp1visxm225pv49dz****` that reside in different regions and belong to different resource groups are moved to the resource group `rg-aekzmeobk5w****`.
       *
       * @param request MoveResourcesRequest
       * @return MoveResourcesResponse
       */
      Models::MoveResourcesResponse moveResources(const Models::MoveResourcesRequest &request);

      /**
       * @summary 升级资源账号
       *
       * @param request PromoteResourceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PromoteResourceAccountResponse
       */
      Models::PromoteResourceAccountResponse promoteResourceAccountWithOptions(const Models::PromoteResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级资源账号
       *
       * @param request PromoteResourceAccountRequest
       * @return PromoteResourceAccountResponse
       */
      Models::PromoteResourceAccountResponse promoteResourceAccount(const Models::PromoteResourceAccountRequest &request);

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
      Models::RegisterDelegatedAdministratorResponse registerDelegatedAdministratorWithOptions(const Models::RegisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::RegisterDelegatedAdministratorResponse registerDelegatedAdministrator(const Models::RegisterDelegatedAdministratorRequest &request);

      /**
       * @description This topic provides an example on how to call the API operation to remove the member `177242285274****` from a resource directory.
       *
       * @param request RemoveCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCloudAccountResponse
       */
      Models::RemoveCloudAccountResponse removeCloudAccountWithOptions(const Models::RemoveCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This topic provides an example on how to call the API operation to remove the member `177242285274****` from a resource directory.
       *
       * @param request RemoveCloudAccountRequest
       * @return RemoveCloudAccountResponse
       */
      Models::RemoveCloudAccountResponse removeCloudAccount(const Models::RemoveCloudAccountRequest &request);

      /**
       * @summary 重新发送创建云账号的邮箱验证
       *
       * @param request ResendCreateCloudAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendCreateCloudAccountEmailResponse
       */
      Models::ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmailWithOptions(const Models::ResendCreateCloudAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新发送创建云账号的邮箱验证
       *
       * @param request ResendCreateCloudAccountEmailRequest
       * @return ResendCreateCloudAccountEmailResponse
       */
      Models::ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmail(const Models::ResendCreateCloudAccountEmailRequest &request);

      /**
       * @summary 重新发送升级资源账号的邮箱验证
       *
       * @param request ResendPromoteResourceAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendPromoteResourceAccountEmailResponse
       */
      Models::ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmailWithOptions(const Models::ResendPromoteResourceAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新发送升级资源账号的邮箱验证
       *
       * @param request ResendPromoteResourceAccountEmailRequest
       * @return ResendPromoteResourceAccountEmailResponse
       */
      Models::ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmail(const Models::ResendPromoteResourceAccountEmailRequest &request);

      /**
       * @summary 重新发送确认邮件
       *
       * @param request RetryChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryChangeAccountEmailResponse
       */
      Models::RetryChangeAccountEmailResponse retryChangeAccountEmailWithOptions(const Models::RetryChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新发送确认邮件
       *
       * @param request RetryChangeAccountEmailRequest
       * @return RetryChangeAccountEmailResponse
       */
      Models::RetryChangeAccountEmailResponse retryChangeAccountEmail(const Models::RetryChangeAccountEmailRequest &request);

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
      Models::SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhoneWithOptions(const Models::SendVerificationCodeForBindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送绑定安全手机验证码
       *
       * @description To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this operation.
       * In this example, a verification code is sent to the mobile phone number that you want to bind to the resource account `138660628348****`.
       *
       * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
       * @return SendVerificationCodeForBindSecureMobilePhoneResponse
       */
      Models::SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhone(const Models::SendVerificationCodeForBindSecureMobilePhoneRequest &request);

      /**
       * @summary 发送开启资源目录短信
       *
       * @description Each Alibaba Cloud account can be used to send a maximum of 100 verification codes per day.
       *
       * @param request SendVerificationCodeForEnableRDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendVerificationCodeForEnableRDResponse
       */
      Models::SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRDWithOptions(const Models::SendVerificationCodeForEnableRDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送开启资源目录短信
       *
       * @description Each Alibaba Cloud account can be used to send a maximum of 100 verification codes per day.
       *
       * @param request SendVerificationCodeForEnableRDRequest
       * @return SendVerificationCodeForEnableRDResponse
       */
      Models::SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRD(const Models::SendVerificationCodeForEnableRDRequest &request);

      /**
       * @summary Sets a default version for a permission policy.
       *
       * @param request SetDefaultPolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultPolicyVersionResponse
       */
      Models::SetDefaultPolicyVersionResponse setDefaultPolicyVersionWithOptions(const Models::SetDefaultPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a default version for a permission policy.
       *
       * @param request SetDefaultPolicyVersionRequest
       * @return SetDefaultPolicyVersionResponse
       */
      Models::SetDefaultPolicyVersionResponse setDefaultPolicyVersion(const Models::SetDefaultPolicyVersionRequest &request);

      /**
       * @summary 开启或关闭成员删除许可
       *
       * @description Members of the resource account type can be deleted only after the member deletion feature is enabled.
       *
       * @param request SetMemberDeletionPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetMemberDeletionPermissionResponse
       */
      Models::SetMemberDeletionPermissionResponse setMemberDeletionPermissionWithOptions(const Models::SetMemberDeletionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启或关闭成员删除许可
       *
       * @description Members of the resource account type can be deleted only after the member deletion feature is enabled.
       *
       * @param request SetMemberDeletionPermissionRequest
       * @return SetMemberDeletionPermissionResponse
       */
      Models::SetMemberDeletionPermissionResponse setMemberDeletionPermission(const Models::SetMemberDeletionPermissionRequest &request);

      /**
       * @summary Adds tags to resource groups or the members in a resource directory.
       *
       * @description This topic provides an example on how to call the API operation to add the tag `k1:v1` to the resource group with an ID of `rg-aekz6bre2uq****`.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resource groups or the members in a resource directory.
       *
       * @description This topic provides an example on how to call the API operation to add the tag `k1:v1` to the resource group with an ID of `rg-aekz6bre2uq****`.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resource groups or the members in a resource directory.
       *
       * @description This topic provides an example on how to call the API operation to remove the tag whose tag key is `k1` from the resource group whose ID is `rg-aek2dpwyrfr****`.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resource groups or the members in a resource directory.
       *
       * @description This topic provides an example on how to call the API operation to remove the tag whose tag key is `k1` from the resource group whose ID is `rg-aek2dpwyrfr****`.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

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
      Models::UpdateAccountResponse updateAccountWithOptions(const Models::UpdateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description *   To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this operation.
       * *   Before you switch the type of a member from resource account to cloud account, make sure that specific conditions are met. For more information about the conditions, see [Switch a resource account to a cloud account](https://help.aliyun.com/document_detail/111233.html).
       * *   Before you switch the type of a member from cloud account to resource account, make sure that specific conditions are met. For more information about the conditions, see [Switch a cloud account to a resource account](https://help.aliyun.com/document_detail/209980.html).
       * This example provides an example on how to call the API operation to change the display name of the member `12323344****` to `admin`.
       *
       * @param request UpdateAccountRequest
       * @return UpdateAccountResponse
       */
      Models::UpdateAccountResponse updateAccount(const Models::UpdateAccountRequest &request);

      /**
       * @summary Updates the settings of the Transfer Associated Resources feature.
       *
       * @description For information about the resources that support the Transfer Associated Resources feature, see [Use the Transfer Associated Resources feature](https://help.aliyun.com/document_detail/606232.html).
       *
       * @param request UpdateAssociatedTransferSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAssociatedTransferSettingResponse
       */
      Models::UpdateAssociatedTransferSettingResponse updateAssociatedTransferSettingWithOptions(const Models::UpdateAssociatedTransferSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the settings of the Transfer Associated Resources feature.
       *
       * @description For information about the resources that support the Transfer Associated Resources feature, see [Use the Transfer Associated Resources feature](https://help.aliyun.com/document_detail/606232.html).
       *
       * @param request UpdateAssociatedTransferSettingRequest
       * @return UpdateAssociatedTransferSettingResponse
       */
      Models::UpdateAssociatedTransferSettingResponse updateAssociatedTransferSetting(const Models::UpdateAssociatedTransferSettingRequest &request);

      /**
       * @summary Updates the configuration of the Automatic Resource Transfer feature. You can update only the configuration of the Transfer Existing Associated Resources feature.
       *
       * @param request UpdateAutoGroupingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoGroupingConfigResponse
       */
      Models::UpdateAutoGroupingConfigResponse updateAutoGroupingConfigWithOptions(const Models::UpdateAutoGroupingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of the Automatic Resource Transfer feature. You can update only the configuration of the Transfer Existing Associated Resources feature.
       *
       * @param request UpdateAutoGroupingConfigRequest
       * @return UpdateAutoGroupingConfigResponse
       */
      Models::UpdateAutoGroupingConfigResponse updateAutoGroupingConfig(const Models::UpdateAutoGroupingConfigRequest &request);

      /**
       * @summary Updates a transfer rule.
       *
       * @param request UpdateAutoGroupingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoGroupingRuleResponse
       */
      Models::UpdateAutoGroupingRuleResponse updateAutoGroupingRuleWithOptions(const Models::UpdateAutoGroupingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a transfer rule.
       *
       * @param request UpdateAutoGroupingRuleRequest
       * @return UpdateAutoGroupingRuleResponse
       */
      Models::UpdateAutoGroupingRuleResponse updateAutoGroupingRule(const Models::UpdateAutoGroupingRuleRequest &request);

      /**
       * @description In this example, the name of the access control policy whose ID is `cp-jExXAqIYkwHN****` is changed to `NewControlPolicy`.
       *
       * @param request UpdateControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateControlPolicyResponse
       */
      Models::UpdateControlPolicyResponse updateControlPolicyWithOptions(const Models::UpdateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description In this example, the name of the access control policy whose ID is `cp-jExXAqIYkwHN****` is changed to `NewControlPolicy`.
       *
       * @param request UpdateControlPolicyRequest
       * @return UpdateControlPolicyResponse
       */
      Models::UpdateControlPolicyResponse updateControlPolicy(const Models::UpdateControlPolicyRequest &request);

      /**
       * @param request UpdateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolderWithOptions(const Models::UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateFolderRequest
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolder(const Models::UpdateFolderRequest &request);

      /**
       * @description In this example, the display name of the resource group `rg-9gLOoK****` is changed to `project`.
       *
       * @param request UpdateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroupWithOptions(const Models::UpdateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description In this example, the display name of the resource group `rg-9gLOoK****` is changed to `project`.
       *
       * @param request UpdateResourceGroupRequest
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroup(const Models::UpdateResourceGroupRequest &request);

      /**
       * @summary Updates the configurations of a resource group administrator.
       *
       * @param request UpdateResourceGroupAdminSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceGroupAdminSettingResponse
       */
      Models::UpdateResourceGroupAdminSettingResponse updateResourceGroupAdminSettingWithOptions(const Models::UpdateResourceGroupAdminSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a resource group administrator.
       *
       * @param request UpdateResourceGroupAdminSettingRequest
       * @return UpdateResourceGroupAdminSettingResponse
       */
      Models::UpdateResourceGroupAdminSettingResponse updateResourceGroupAdminSetting(const Models::UpdateResourceGroupAdminSettingRequest &request);

      /**
       * @summary Updates the information about a Resource Access Management (RAM) role.
       *
       * @description In this example, the description of the RAM role `ECSAdmin` is updated to `ECS administrator`.
       *
       * @param request UpdateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a Resource Access Management (RAM) role.
       *
       * @description In this example, the description of the RAM role `ECSAdmin` is updated to `ECS administrator`.
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
