// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RESOURCEDIRECTORYMASTER20220419_HPP_
#define ALIBABACLOUD_RESOURCEDIRECTORYMASTER20220419_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ResourceDirectoryMaster20220419Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ResourceDirectoryMaster20220419.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Accepts an invitation.
       *
       * @description After an invited Alibaba Cloud account joins a resource directory, it becomes a member of the resource directory. By default, the name of the invited Alibaba Cloud account is used as the display name of the account in the resource directory.
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
       *
       * @param request AcceptHandshakeRequest
       * @return AcceptHandshakeResponse
       */
      Models::AcceptHandshakeResponse acceptHandshake(const Models::AcceptHandshakeRequest &request);

      /**
       * @summary Adds a contact.
       *
       * @param request AddMessageContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMessageContactResponse
       */
      Models::AddMessageContactResponse addMessageContactWithOptions(const Models::AddMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a contact.
       *
       * @param request AddMessageContactRequest
       * @return AddMessageContactResponse
       */
      Models::AddMessageContactResponse addMessageContact(const Models::AddMessageContactRequest &request);

      /**
       * @summary Binds a contact to a resource directory, folder, or member.
       *
       * @param request AssociateMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateMembersResponse
       */
      Models::AssociateMembersResponse associateMembersWithOptions(const Models::AssociateMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a contact to a resource directory, folder, or member.
       *
       * @param request AssociateMembersRequest
       * @return AssociateMembersResponse
       */
      Models::AssociateMembersResponse associateMembers(const Models::AssociateMembersRequest &request);

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
      Models::AttachControlPolicyResponse attachControlPolicyWithOptions(const Models::AttachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AttachControlPolicyResponse attachControlPolicy(const Models::AttachControlPolicyRequest &request);

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
      Models::BindSecureMobilePhoneResponse bindSecureMobilePhoneWithOptions(const Models::BindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a mobile phone number to a member of the resource account type in a resource directory for security purposes.
       *
       * @description You can call this API operation only to bind a mobile phone number to a member of the resource account type. You cannot call this API operation to change the mobile phone number that is bound to a member of the resource account type.
       * To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
       *
       * @param request BindSecureMobilePhoneRequest
       * @return BindSecureMobilePhoneResponse
       */
      Models::BindSecureMobilePhoneResponse bindSecureMobilePhone(const Models::BindSecureMobilePhoneRequest &request);

      /**
       * @summary Cancels the email address change of a member.
       *
       * @param request CancelChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelChangeAccountEmailResponse
       */
      Models::CancelChangeAccountEmailResponse cancelChangeAccountEmailWithOptions(const Models::CancelChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the email address change of a member.
       *
       * @param request CancelChangeAccountEmailRequest
       * @return CancelChangeAccountEmailResponse
       */
      Models::CancelChangeAccountEmailResponse cancelChangeAccountEmail(const Models::CancelChangeAccountEmailRequest &request);

      /**
       * @summary Cancels an invitation.
       *
       * @param request CancelHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelHandshakeResponse
       */
      Models::CancelHandshakeResponse cancelHandshakeWithOptions(const Models::CancelHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an invitation.
       *
       * @param request CancelHandshakeRequest
       * @return CancelHandshakeResponse
       */
      Models::CancelHandshakeResponse cancelHandshake(const Models::CancelHandshakeRequest &request);

      /**
       * @summary Cancels the update of the mobile phone number or email address of a contact.
       *
       * @param request CancelMessageContactUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelMessageContactUpdateResponse
       */
      Models::CancelMessageContactUpdateResponse cancelMessageContactUpdateWithOptions(const Models::CancelMessageContactUpdateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the update of the mobile phone number or email address of a contact.
       *
       * @param request CancelMessageContactUpdateRequest
       * @return CancelMessageContactUpdateResponse
       */
      Models::CancelMessageContactUpdateResponse cancelMessageContactUpdate(const Models::CancelMessageContactUpdateRequest &request);

      /**
       * @summary Changes the email address that is bound to a member.
       *
       * @param request ChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAccountEmailResponse
       */
      Models::ChangeAccountEmailResponse changeAccountEmailWithOptions(const Models::ChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the email address that is bound to a member.
       *
       * @param request ChangeAccountEmailRequest
       * @return ChangeAccountEmailResponse
       */
      Models::ChangeAccountEmailResponse changeAccountEmail(const Models::ChangeAccountEmailRequest &request);

      /**
       * @summary Performs a member deletion check.
       *
       * @description Before you delete a member, you must call this API operation to check whether the member can be deleted.
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
       *
       * @param request CheckAccountDeleteRequest
       * @return CheckAccountDeleteResponse
       */
      Models::CheckAccountDeleteResponse checkAccountDelete(const Models::CheckAccountDeleteRequest &request);

      /**
       * @summary Creates a custom access control policy.
       *
       * @param request CreateControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateControlPolicyResponse
       */
      Models::CreateControlPolicyResponse createControlPolicyWithOptions(const Models::CreateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom access control policy.
       *
       * @param request CreateControlPolicyRequest
       * @return CreateControlPolicyResponse
       */
      Models::CreateControlPolicyResponse createControlPolicy(const Models::CreateControlPolicyRequest &request);

      /**
       * @summary Creates a folder.
       *
       * @description A maximum of five levels of folders can be created under the Root folder.
       *
       * @param request CreateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolderWithOptions(const Models::CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a folder.
       *
       * @description A maximum of five levels of folders can be created under the Root folder.
       *
       * @param request CreateFolderRequest
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolder(const Models::CreateFolderRequest &request);

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
      Models::CreateResourceAccountResponse createResourceAccountWithOptions(const Models::CreateResourceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a member of the resource account type.
       *
       * @description A member serves as a container for resources and is also an organizational unit in a resource directory. A member indicates a project or application. The resources of different members are isolated.
       * This topic provides an example on how to call the API operation to create a member in the `fd-r23M55****` folder. The display name of the member is `Dev`, and the prefix for the Alibaba Cloud account name of the member is `alice`.
       *
       * @param request CreateResourceAccountRequest
       * @return CreateResourceAccountResponse
       */
      Models::CreateResourceAccountResponse createResourceAccount(const Models::CreateResourceAccountRequest &request);

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
       * @summary Deletes a member of the resource account type.
       *
       * @description Before you delete a member, we recommend that you call the [CheckAccountDelete](~~CheckAccountDelete~~) and [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operations to check whether the member meets deletion requirements. You can call the DeleteAccount operation to delete only members that meet the deletion requirements.
       * After you submit a deletion request for a member, you can call the [GetAccountDeletionStatus](~~GetAccountDeletionStatus~~) operation to query the deletion status of the member. After a member is deleted, the resources and data within the member are deleted, and you can no longer use the member to log on to the Alibaba Cloud Management Console. In addition, the member cannot be recovered. Proceed with caution. For more information about how to delete a member, see [Delete a member of the resource account type](https://help.aliyun.com/document_detail/446078.html).
       *
       * @param tmpReq DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a member of the resource account type.
       *
       * @description Before you delete a member, we recommend that you call the [CheckAccountDelete](~~CheckAccountDelete~~) and [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operations to check whether the member meets deletion requirements. You can call the DeleteAccount operation to delete only members that meet the deletion requirements.
       * After you submit a deletion request for a member, you can call the [GetAccountDeletionStatus](~~GetAccountDeletionStatus~~) operation to query the deletion status of the member. After a member is deleted, the resources and data within the member are deleted, and you can no longer use the member to log on to the Alibaba Cloud Management Console. In addition, the member cannot be recovered. Proceed with caution. For more information about how to delete a member, see [Delete a member of the resource account type](https://help.aliyun.com/document_detail/446078.html).
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes a custom access control policy.
       *
       * @description If you want to delete a custom access control policy that is attached to folders or members, you must call the [DetachControlPolicy](~~DetachControlPolicy~~) operation to detach the policy before you delete it.
       *
       * @param request DeleteControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteControlPolicyResponse
       */
      Models::DeleteControlPolicyResponse deleteControlPolicyWithOptions(const Models::DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom access control policy.
       *
       * @description If you want to delete a custom access control policy that is attached to folders or members, you must call the [DetachControlPolicy](~~DetachControlPolicy~~) operation to detach the policy before you delete it.
       *
       * @param request DeleteControlPolicyRequest
       * @return DeleteControlPolicyResponse
       */
      Models::DeleteControlPolicyResponse deleteControlPolicy(const Models::DeleteControlPolicyRequest &request);

      /**
       * @summary Deletes a folder.
       *
       * @description Before you delete a folder, you must make sure that the folder does not contain members or subfolders.
       *
       * @param request DeleteFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolderWithOptions(const Models::DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a folder.
       *
       * @description Before you delete a folder, you must make sure that the folder does not contain members or subfolders.
       *
       * @param request DeleteFolderRequest
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolder(const Models::DeleteFolderRequest &request);

      /**
       * @summary Deletes a contact.
       *
       * @param request DeleteMessageContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessageContactResponse
       */
      Models::DeleteMessageContactResponse deleteMessageContactWithOptions(const Models::DeleteMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a contact.
       *
       * @param request DeleteMessageContactRequest
       * @return DeleteMessageContactResponse
       */
      Models::DeleteMessageContactResponse deleteMessageContact(const Models::DeleteMessageContactRequest &request);

      /**
       * @summary Removes a delegated administrator account for a trusted service.
       *
       * @description If the delegated administrator account that you want to remove has historical management tasks in the related trusted service, the trusted service may be affected after the delegated administrator account is removed. Therefore, proceed with caution.
       *
       * @param request DeregisterDelegatedAdministratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeregisterDelegatedAdministratorResponse
       */
      Models::DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministratorWithOptions(const Models::DeregisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a delegated administrator account for a trusted service.
       *
       * @description If the delegated administrator account that you want to remove has historical management tasks in the related trusted service, the trusted service may be affected after the delegated administrator account is removed. Therefore, proceed with caution.
       *
       * @param request DeregisterDelegatedAdministratorRequest
       * @return DeregisterDelegatedAdministratorResponse
       */
      Models::DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministrator(const Models::DeregisterDelegatedAdministratorRequest &request);

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
      Models::DestroyResourceDirectoryResponse destroyResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a resource directory. This operation cannot be undone. Therefore, proceed with caution.
       *
       * @description Before you disable a resource directory, you must make sure that the following requirements are met:
       * *   All members of the cloud account type in the resource directory are removed. You can call the [RemoveCloudAccount](~~RemoveCloudAccount~~) operation to remove a member of the cloud account type.
       * *   All folders except the Root folder are deleted from the resource directory. You can call the [DeleteFolder](~~DeleteFolder~~) operation to delete a folder.
       *
       * @return DestroyResourceDirectoryResponse
       */
      Models::DestroyResourceDirectoryResponse destroyResourceDirectory();

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
      Models::DetachControlPolicyResponse detachControlPolicyWithOptions(const Models::DetachControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches an access control policy.
       *
       * @description After you detach an access control policy, the operations performed on resources by using members are not limited by the policy. Make sure that the detached policy meets your expectations. Otherwise, your business may be affected.
       * Both the system and custom access control policies can be detached. If an object has only one access control policy attached, the policy cannot be detached.
       *
       * @param request DetachControlPolicyRequest
       * @return DetachControlPolicyResponse
       */
      Models::DetachControlPolicyResponse detachControlPolicy(const Models::DetachControlPolicyRequest &request);

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
      Models::DisableControlPolicyResponse disableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the Control Policy feature.
       *
       * @description After you disable the Control Policy feature, the system automatically detaches all access control policies that are attached to folders and members. The system does not delete these access control policies, but you cannot attach them to folders or members again.
       * > If you disable the Control Policy feature, the permissions of all folders and members in your resource directory are affected. Therefore, proceed with caution.
       *
       * @return DisableControlPolicyResponse
       */
      Models::DisableControlPolicyResponse disableControlPolicy();

      /**
       * @summary Unbinds a contact from a resource directory, folder, or member.
       *
       * @param request DisassociateMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateMembersResponse
       */
      Models::DisassociateMembersResponse disassociateMembersWithOptions(const Models::DisassociateMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a contact from a resource directory, folder, or member.
       *
       * @param request DisassociateMembersRequest
       * @return DisassociateMembersResponse
       */
      Models::DisassociateMembersResponse disassociateMembers(const Models::DisassociateMembersRequest &request);

      /**
       * @summary Enables the Control Policy feature.
       *
       * @description The Control Policy feature provided by the Resource Directory service allows you to manage the permission boundaries of the folders or members in your resource directory in a centralized manner. This feature is implemented based on the resource directory. You can use this feature to develop common or dedicated rules for access control. The Control Policy feature does not grant permissions but only defines permission boundaries. A member in a resource directory can be used to access resources only after it is granted the required permissions by using the Resource Access Management (RAM) service. For more information, see [Overview of the Control Policy feature](https://help.aliyun.com/document_detail/178671.html).
       *
       * @param request EnableControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableControlPolicyResponse
       */
      Models::EnableControlPolicyResponse enableControlPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Control Policy feature.
       *
       * @description The Control Policy feature provided by the Resource Directory service allows you to manage the permission boundaries of the folders or members in your resource directory in a centralized manner. This feature is implemented based on the resource directory. You can use this feature to develop common or dedicated rules for access control. The Control Policy feature does not grant permissions but only defines permission boundaries. A member in a resource directory can be used to access resources only after it is granted the required permissions by using the Resource Access Management (RAM) service. For more information, see [Overview of the Control Policy feature](https://help.aliyun.com/document_detail/178671.html).
       *
       * @return EnableControlPolicyResponse
       */
      Models::EnableControlPolicyResponse enableControlPolicy();

      /**
       * @summary Enables a resource directory.
       *
       * @description You can use the current account or a newly created account to enable a resource directory. For more information, see [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
       *
       * @param request EnableResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableResourceDirectoryResponse
       */
      Models::EnableResourceDirectoryResponse enableResourceDirectoryWithOptions(const Models::EnableResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a resource directory.
       *
       * @description You can use the current account or a newly created account to enable a resource directory. For more information, see [Enable a resource directory](https://help.aliyun.com/document_detail/111215.html).
       *
       * @param request EnableResourceDirectoryRequest
       * @return EnableResourceDirectoryResponse
       */
      Models::EnableResourceDirectoryResponse enableResourceDirectory(const Models::EnableResourceDirectoryRequest &request);

      /**
       * @summary Queries the information of a member.
       *
       * @param request GetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountResponse
       */
      Models::GetAccountResponse getAccountWithOptions(const Models::GetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a member.
       *
       * @param request GetAccountRequest
       * @return GetAccountResponse
       */
      Models::GetAccountResponse getAccount(const Models::GetAccountRequest &request);

      /**
       * @summary Queries the result of a member deletion check.
       *
       * @description After you call the [CheckAccountDelete](~~CheckAccountDelete~~) operation to perform a member deletion check, you can call the [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operation to query the check result. If the check result shows that the member meets deletion requirements, you can delete the member. Otherwise, you need to first modify the items that do not meet requirements.
       *
       * @param request GetAccountDeletionCheckResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountDeletionCheckResultResponse
       */
      Models::GetAccountDeletionCheckResultResponse getAccountDeletionCheckResultWithOptions(const Models::GetAccountDeletionCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of a member deletion check.
       *
       * @description After you call the [CheckAccountDelete](~~CheckAccountDelete~~) operation to perform a member deletion check, you can call the [GetAccountDeletionCheckResult](~~GetAccountDeletionCheckResult~~) operation to query the check result. If the check result shows that the member meets deletion requirements, you can delete the member. Otherwise, you need to first modify the items that do not meet requirements.
       *
       * @param request GetAccountDeletionCheckResultRequest
       * @return GetAccountDeletionCheckResultResponse
       */
      Models::GetAccountDeletionCheckResultResponse getAccountDeletionCheckResult(const Models::GetAccountDeletionCheckResultRequest &request);

      /**
       * @summary Queries the deletion status of a member.
       *
       * @param request GetAccountDeletionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountDeletionStatusResponse
       */
      Models::GetAccountDeletionStatusResponse getAccountDeletionStatusWithOptions(const Models::GetAccountDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deletion status of a member.
       *
       * @param request GetAccountDeletionStatusRequest
       * @return GetAccountDeletionStatusResponse
       */
      Models::GetAccountDeletionStatusResponse getAccountDeletionStatus(const Models::GetAccountDeletionStatusRequest &request);

      /**
       * @summary Queries the details of an access control policy.
       *
       * @param request GetControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetControlPolicyResponse
       */
      Models::GetControlPolicyResponse getControlPolicyWithOptions(const Models::GetControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access control policy.
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
       * @summary Queries the information about a folder.
       *
       * @param request GetFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolderWithOptions(const Models::GetFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a folder.
       *
       * @param request GetFolderRequest
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolder(const Models::GetFolderRequest &request);

      /**
       * @summary Queries the information of an invitation.
       *
       * @param request GetHandshakeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHandshakeResponse
       */
      Models::GetHandshakeResponse getHandshakeWithOptions(const Models::GetHandshakeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of an invitation.
       *
       * @param request GetHandshakeRequest
       * @return GetHandshakeResponse
       */
      Models::GetHandshakeResponse getHandshake(const Models::GetHandshakeRequest &request);

      /**
       * @summary Queries the information about a contact.
       *
       * @param request GetMessageContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageContactResponse
       */
      Models::GetMessageContactResponse getMessageContactWithOptions(const Models::GetMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a contact.
       *
       * @param request GetMessageContactRequest
       * @return GetMessageContactResponse
       */
      Models::GetMessageContactResponse getMessageContact(const Models::GetMessageContactRequest &request);

      /**
       * @summary Queries the deletion status of a contact.
       *
       * @param request GetMessageContactDeletionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageContactDeletionStatusResponse
       */
      Models::GetMessageContactDeletionStatusResponse getMessageContactDeletionStatusWithOptions(const Models::GetMessageContactDeletionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deletion status of a contact.
       *
       * @param request GetMessageContactDeletionStatusRequest
       * @return GetMessageContactDeletionStatusResponse
       */
      Models::GetMessageContactDeletionStatusResponse getMessageContactDeletionStatus(const Models::GetMessageContactDeletionStatusRequest &request);

      /**
       * @summary Queries the information of a billing account.
       *
       * @param request GetPayerForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPayerForAccountResponse
       */
      Models::GetPayerForAccountResponse getPayerForAccountWithOptions(const Models::GetPayerForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a billing account.
       *
       * @param request GetPayerForAccountRequest
       * @return GetPayerForAccountResponse
       */
      Models::GetPayerForAccountResponse getPayerForAccount(const Models::GetPayerForAccountRequest &request);

      /**
       * @summary Queries the information of a resource directory. If you use a management account to call this API operation, the system returns the information of the resource directory that is enabled by using the management account. If you use a member to call this operation, the system returns the information of
       *
       * @param request GetResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceDirectoryResponse
       */
      Models::GetResourceDirectoryResponse getResourceDirectoryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a resource directory. If you use a management account to call this API operation, the system returns the information of the resource directory that is enabled by using the management account. If you use a member to call this operation, the system returns the information of
       *
       * @return GetResourceDirectoryResponse
       */
      Models::GetResourceDirectoryResponse getResourceDirectory();

      /**
       * @summary Invites an account to join a resource directory.
       *
       * @param request InviteAccountToResourceDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InviteAccountToResourceDirectoryResponse
       */
      Models::InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectoryWithOptions(const Models::InviteAccountToResourceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invites an account to join a resource directory.
       *
       * @param request InviteAccountToResourceDirectoryRequest
       * @return InviteAccountToResourceDirectoryResponse
       */
      Models::InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectory(const Models::InviteAccountToResourceDirectoryRequest &request);

      /**
       * @summary Queries a list of members in a resource directory.
       *
       * @description You can use only the management account of a resource directory or a delegated administrator account of a trusted service to call this operation.
       *
       * @param request ListAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsResponse
       */
      Models::ListAccountsResponse listAccountsWithOptions(const Models::ListAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of members in a resource directory.
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
       * @summary Queries the information of all the parent folders of a specified folder.
       *
       * @param request ListAncestorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAncestorsResponse
       */
      Models::ListAncestorsResponse listAncestorsWithOptions(const Models::ListAncestorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of all the parent folders of a specified folder.
       *
       * @param request ListAncestorsRequest
       * @return ListAncestorsResponse
       */
      Models::ListAncestorsResponse listAncestors(const Models::ListAncestorsRequest &request);

      /**
       * @summary Queries a list of members who have the permission to query member information in a resource directory.
       *
       * @description The permission to query member information refers to the permission to call the [GetAccount](~~GetAccount~~) API operation.
       *
       * @param request ListAuthorizedAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedAccountsResponse
       */
      Models::ListAuthorizedAccountsResponse listAuthorizedAccountsWithOptions(const Models::ListAuthorizedAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of members who have the permission to query member information in a resource directory.
       *
       * @description The permission to query member information refers to the permission to call the [GetAccount](~~GetAccount~~) API operation.
       *
       * @param request ListAuthorizedAccountsRequest
       * @return ListAuthorizedAccountsResponse
       */
      Models::ListAuthorizedAccountsResponse listAuthorizedAccounts(const Models::ListAuthorizedAccountsRequest &request);

      /**
       * @summary Queries a list of folders that have permissions to query subfolder information in a resource directory.
       *
       * @description The permissions to query subfolder information refer to the permissions to call the [ListAccountsForParent](~~ListAccountsForParent~~) and [ListFoldersForParent](~~ListFoldersForParent~~) API operations.
       *
       * @param request ListAuthorizedFoldersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizedFoldersResponse
       */
      Models::ListAuthorizedFoldersResponse listAuthorizedFoldersWithOptions(const Models::ListAuthorizedFoldersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of folders that have permissions to query subfolder information in a resource directory.
       *
       * @description The permissions to query subfolder information refer to the permissions to call the [ListAccountsForParent](~~ListAccountsForParent~~) and [ListFoldersForParent](~~ListFoldersForParent~~) API operations.
       *
       * @param request ListAuthorizedFoldersRequest
       * @return ListAuthorizedFoldersResponse
       */
      Models::ListAuthorizedFoldersResponse listAuthorizedFolders(const Models::ListAuthorizedFoldersRequest &request);

      /**
       * @summary Queries access control policies.
       *
       * @param request ListControlPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListControlPoliciesResponse
       */
      Models::ListControlPoliciesResponse listControlPoliciesWithOptions(const Models::ListControlPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access control policies.
       *
       * @param request ListControlPoliciesRequest
       * @return ListControlPoliciesResponse
       */
      Models::ListControlPoliciesResponse listControlPolicies(const Models::ListControlPoliciesRequest &request);

      /**
       * @summary Queries the access control policies that are attached to a folder or member.
       *
       * @param request ListControlPolicyAttachmentsForTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListControlPolicyAttachmentsForTargetResponse
       */
      Models::ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTargetWithOptions(const Models::ListControlPolicyAttachmentsForTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access control policies that are attached to a folder or member.
       *
       * @param request ListControlPolicyAttachmentsForTargetRequest
       * @return ListControlPolicyAttachmentsForTargetResponse
       */
      Models::ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTarget(const Models::ListControlPolicyAttachmentsForTargetRequest &request);

      /**
       * @summary Queries delegated administrator accounts.
       *
       * @param request ListDelegatedAdministratorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDelegatedAdministratorsResponse
       */
      Models::ListDelegatedAdministratorsResponse listDelegatedAdministratorsWithOptions(const Models::ListDelegatedAdministratorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries delegated administrator accounts.
       *
       * @param request ListDelegatedAdministratorsRequest
       * @return ListDelegatedAdministratorsResponse
       */
      Models::ListDelegatedAdministratorsResponse listDelegatedAdministrators(const Models::ListDelegatedAdministratorsRequest &request);

      /**
       * @summary Queries the trusted services for which a member is specified as a delegated administrator account.
       *
       * @param request ListDelegatedServicesForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDelegatedServicesForAccountResponse
       */
      Models::ListDelegatedServicesForAccountResponse listDelegatedServicesForAccountWithOptions(const Models::ListDelegatedServicesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trusted services for which a member is specified as a delegated administrator account.
       *
       * @param request ListDelegatedServicesForAccountRequest
       * @return ListDelegatedServicesForAccountResponse
       */
      Models::ListDelegatedServicesForAccountResponse listDelegatedServicesForAccount(const Models::ListDelegatedServicesForAccountRequest &request);

      /**
       * @summary Queries the information of all subfolders of a folder.
       *
       * @description You can call this API operation to view the information of only the first-level subfolders of a folder.
       *
       * @param request ListFoldersForParentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFoldersForParentResponse
       */
      Models::ListFoldersForParentResponse listFoldersForParentWithOptions(const Models::ListFoldersForParentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of all subfolders of a folder.
       *
       * @description You can call this API operation to view the information of only the first-level subfolders of a folder.
       *
       * @param request ListFoldersForParentRequest
       * @return ListFoldersForParentResponse
       */
      Models::ListFoldersForParentResponse listFoldersForParent(const Models::ListFoldersForParentRequest &request);

      /**
       * @summary Queries the invitations that are associated with an account.
       *
       * @param request ListHandshakesForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHandshakesForAccountResponse
       */
      Models::ListHandshakesForAccountResponse listHandshakesForAccountWithOptions(const Models::ListHandshakesForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the invitations that are associated with an account.
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
       * @summary Queries the mobile phone number or email address to be verified for a contact.
       *
       * @param request ListMessageContactVerificationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageContactVerificationsResponse
       */
      Models::ListMessageContactVerificationsResponse listMessageContactVerificationsWithOptions(const Models::ListMessageContactVerificationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mobile phone number or email address to be verified for a contact.
       *
       * @param request ListMessageContactVerificationsRequest
       * @return ListMessageContactVerificationsResponse
       */
      Models::ListMessageContactVerificationsResponse listMessageContactVerifications(const Models::ListMessageContactVerificationsRequest &request);

      /**
       * @summary Queries contacts.
       *
       * @param request ListMessageContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageContactsResponse
       */
      Models::ListMessageContactsResponse listMessageContactsWithOptions(const Models::ListMessageContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries contacts.
       *
       * @param request ListMessageContactsRequest
       * @return ListMessageContactsResponse
       */
      Models::ListMessageContactsResponse listMessageContacts(const Models::ListMessageContactsRequest &request);

      /**
       * @summary Queries tag keys.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag keys.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags that are added to the members in a resource directory.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to the members in a resource directory.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tag values of a tag key.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values of a tag key.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Queries the objects to which an access control policy is attached.
       *
       * @param request ListTargetAttachmentsForControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTargetAttachmentsForControlPolicyResponse
       */
      Models::ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicyWithOptions(const Models::ListTargetAttachmentsForControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the objects to which an access control policy is attached.
       *
       * @param request ListTargetAttachmentsForControlPolicyRequest
       * @return ListTargetAttachmentsForControlPolicyResponse
       */
      Models::ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicy(const Models::ListTargetAttachmentsForControlPolicyRequest &request);

      /**
       * @summary Queries the trusted services that are enabled within a management account or delegated administrator account.
       *
       * @description Only a management account or delegated administrator account can be used to call this operation.
       *
       * @param request ListTrustedServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrustedServiceStatusResponse
       */
      Models::ListTrustedServiceStatusResponse listTrustedServiceStatusWithOptions(const Models::ListTrustedServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trusted services that are enabled within a management account or delegated administrator account.
       *
       * @description Only a management account or delegated administrator account can be used to call this operation.
       *
       * @param request ListTrustedServiceStatusRequest
       * @return ListTrustedServiceStatusResponse
       */
      Models::ListTrustedServiceStatusResponse listTrustedServiceStatus(const Models::ListTrustedServiceStatusRequest &request);

      /**
       * @summary Moves a member from a folder to another.
       *
       * @param request MoveAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveAccountResponse
       */
      Models::MoveAccountResponse moveAccountWithOptions(const Models::MoveAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a member from a folder to another.
       *
       * @param request MoveAccountRequest
       * @return MoveAccountResponse
       */
      Models::MoveAccountResponse moveAccount(const Models::MoveAccountRequest &request);

      /**
       * @summary Checks whether a management account or member can be used as a main financial account.
       *
       * @param request PrecheckForConsolidatedBillingAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckForConsolidatedBillingAccountResponse
       */
      Models::PrecheckForConsolidatedBillingAccountResponse precheckForConsolidatedBillingAccountWithOptions(const Models::PrecheckForConsolidatedBillingAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a management account or member can be used as a main financial account.
       *
       * @param request PrecheckForConsolidatedBillingAccountRequest
       * @return PrecheckForConsolidatedBillingAccountResponse
       */
      Models::PrecheckForConsolidatedBillingAccountResponse precheckForConsolidatedBillingAccount(const Models::PrecheckForConsolidatedBillingAccountRequest &request);

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
      Models::RegisterDelegatedAdministratorResponse registerDelegatedAdministratorWithOptions(const Models::RegisterDelegatedAdministratorRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::RegisterDelegatedAdministratorResponse registerDelegatedAdministrator(const Models::RegisterDelegatedAdministratorRequest &request);

      /**
       * @summary Removes a member of the cloud account type.
       *
       * @param request RemoveCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCloudAccountResponse
       */
      Models::RemoveCloudAccountResponse removeCloudAccountWithOptions(const Models::RemoveCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a member of the cloud account type.
       *
       * @param request RemoveCloudAccountRequest
       * @return RemoveCloudAccountResponse
       */
      Models::RemoveCloudAccountResponse removeCloudAccount(const Models::RemoveCloudAccountRequest &request);

      /**
       * @summary Resends a verification email for the email address change of a member.
       *
       * @param request RetryChangeAccountEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryChangeAccountEmailResponse
       */
      Models::RetryChangeAccountEmailResponse retryChangeAccountEmailWithOptions(const Models::RetryChangeAccountEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resends a verification email for the email address change of a member.
       *
       * @param request RetryChangeAccountEmailRequest
       * @return RetryChangeAccountEmailResponse
       */
      Models::RetryChangeAccountEmailResponse retryChangeAccountEmail(const Models::RetryChangeAccountEmailRequest &request);

      /**
       * @summary Sends verification information to the email address of a contact.
       *
       * @param request SendEmailVerificationForMessageContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendEmailVerificationForMessageContactResponse
       */
      Models::SendEmailVerificationForMessageContactResponse sendEmailVerificationForMessageContactWithOptions(const Models::SendEmailVerificationForMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends verification information to the email address of a contact.
       *
       * @param request SendEmailVerificationForMessageContactRequest
       * @return SendEmailVerificationForMessageContactResponse
       */
      Models::SendEmailVerificationForMessageContactResponse sendEmailVerificationForMessageContact(const Models::SendEmailVerificationForMessageContactRequest &request);

      /**
       * @summary Sends verification information to the mobile phone number of a contact.
       *
       * @param request SendPhoneVerificationForMessageContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendPhoneVerificationForMessageContactResponse
       */
      Models::SendPhoneVerificationForMessageContactResponse sendPhoneVerificationForMessageContactWithOptions(const Models::SendPhoneVerificationForMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends verification information to the mobile phone number of a contact.
       *
       * @param request SendPhoneVerificationForMessageContactRequest
       * @return SendPhoneVerificationForMessageContactResponse
       */
      Models::SendPhoneVerificationForMessageContactResponse sendPhoneVerificationForMessageContact(const Models::SendPhoneVerificationForMessageContactRequest &request);

      /**
       * @summary Sends a verification code to the mobile phone number that you want to bind to a member of the resource account type in a resource directory for security purposes.
       *
       * @description To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
       *
       * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendVerificationCodeForBindSecureMobilePhoneResponse
       */
      Models::SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhoneWithOptions(const Models::SendVerificationCodeForBindSecureMobilePhoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a verification code to the mobile phone number that you want to bind to a member of the resource account type in a resource directory for security purposes.
       *
       * @description To ensure that the system can record the operators of management operations, you must use a RAM user or RAM role to which the AliyunResourceDirectoryFullAccess policy is attached within the management account of your resource directory to call this API operation.
       *
       * @param request SendVerificationCodeForBindSecureMobilePhoneRequest
       * @return SendVerificationCodeForBindSecureMobilePhoneResponse
       */
      Models::SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhone(const Models::SendVerificationCodeForBindSecureMobilePhoneRequest &request);

      /**
       * @summary Sends a verification code to the mobile phone number bound to a newly created account when you use the account to enable a resource directory.
       *
       * @description Each Alibaba Cloud account can be used to send a maximum of 100 verification codes per day.
       *
       * @param request SendVerificationCodeForEnableRDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendVerificationCodeForEnableRDResponse
       */
      Models::SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRDWithOptions(const Models::SendVerificationCodeForEnableRDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a verification code to the mobile phone number bound to a newly created account when you use the account to enable a resource directory.
       *
       * @description Each Alibaba Cloud account can be used to send a maximum of 100 verification codes per day.
       *
       * @param request SendVerificationCodeForEnableRDRequest
       * @return SendVerificationCodeForEnableRDResponse
       */
      Models::SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRD(const Models::SendVerificationCodeForEnableRDRequest &request);

      /**
       * @summary Enables or disables the member deletion feature.
       *
       * @description Members of the resource account type can be deleted only after the member deletion feature is enabled.
       *
       * @param request SetMemberDeletionPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetMemberDeletionPermissionResponse
       */
      Models::SetMemberDeletionPermissionResponse setMemberDeletionPermissionWithOptions(const Models::SetMemberDeletionPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the member deletion feature.
       *
       * @description Members of the resource account type can be deleted only after the member deletion feature is enabled.
       *
       * @param request SetMemberDeletionPermissionRequest
       * @return SetMemberDeletionPermissionResponse
       */
      Models::SetMemberDeletionPermissionResponse setMemberDeletionPermission(const Models::SetMemberDeletionPermissionRequest &request);

      /**
       * @summary Enables or disables the Member Display Name Synchronization feature.
       *
       * @param request SetMemberDisplayNameSyncStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetMemberDisplayNameSyncStatusResponse
       */
      Models::SetMemberDisplayNameSyncStatusResponse setMemberDisplayNameSyncStatusWithOptions(const Models::SetMemberDisplayNameSyncStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the Member Display Name Synchronization feature.
       *
       * @param request SetMemberDisplayNameSyncStatusRequest
       * @return SetMemberDisplayNameSyncStatusResponse
       */
      Models::SetMemberDisplayNameSyncStatusResponse setMemberDisplayNameSyncStatus(const Models::SetMemberDisplayNameSyncStatusRequest &request);

      /**
       * @summary Adds tags to the members in a resource directory.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to the members in a resource directory.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from the members in a resource directory.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from the members in a resource directory.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

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
      Models::UpdateAccountResponse updateAccountWithOptions(const Models::UpdateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateAccountResponse updateAccount(const Models::UpdateAccountRequest &request);

      /**
       * @summary Updates a custom access control policy.
       *
       * @param request UpdateControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateControlPolicyResponse
       */
      Models::UpdateControlPolicyResponse updateControlPolicyWithOptions(const Models::UpdateControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom access control policy.
       *
       * @param request UpdateControlPolicyRequest
       * @return UpdateControlPolicyResponse
       */
      Models::UpdateControlPolicyResponse updateControlPolicy(const Models::UpdateControlPolicyRequest &request);

      /**
       * @summary Changes the name of a folder.
       *
       * @param request UpdateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolderWithOptions(const Models::UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a folder.
       *
       * @param request UpdateFolderRequest
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolder(const Models::UpdateFolderRequest &request);

      /**
       * @summary Updates a contact.
       *
       * @param request UpdateMessageContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMessageContactResponse
       */
      Models::UpdateMessageContactResponse updateMessageContactWithOptions(const Models::UpdateMessageContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a contact.
       *
       * @param request UpdateMessageContactRequest
       * @return UpdateMessageContactResponse
       */
      Models::UpdateMessageContactResponse updateMessageContact(const Models::UpdateMessageContactRequest &request);

      /**
       * @summary Updates the billing account of a member.
       *
       * @param request UpdatePayerForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePayerForAccountResponse
       */
      Models::UpdatePayerForAccountResponse updatePayerForAccountWithOptions(const Models::UpdatePayerForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the billing account of a member.
       *
       * @param request UpdatePayerForAccountRequest
       * @return UpdatePayerForAccountResponse
       */
      Models::UpdatePayerForAccountResponse updatePayerForAccount(const Models::UpdatePayerForAccountRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
