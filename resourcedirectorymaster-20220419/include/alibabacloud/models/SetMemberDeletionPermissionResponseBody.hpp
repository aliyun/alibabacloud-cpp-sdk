// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETMEMBERDELETIONPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETMEMBERDELETIONPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SetMemberDeletionPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetMemberDeletionPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagementAccountId, managementAccountId_);
      DARABONBA_PTR_TO_JSON(MemberDeletionStatus, memberDeletionStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
    };
    friend void from_json(const Darabonba::Json& j, SetMemberDeletionPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagementAccountId, managementAccountId_);
      DARABONBA_PTR_FROM_JSON(MemberDeletionStatus, memberDeletionStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
    };
    SetMemberDeletionPermissionResponseBody() = default ;
    SetMemberDeletionPermissionResponseBody(const SetMemberDeletionPermissionResponseBody &) = default ;
    SetMemberDeletionPermissionResponseBody(SetMemberDeletionPermissionResponseBody &&) = default ;
    SetMemberDeletionPermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetMemberDeletionPermissionResponseBody() = default ;
    SetMemberDeletionPermissionResponseBody& operator=(const SetMemberDeletionPermissionResponseBody &) = default ;
    SetMemberDeletionPermissionResponseBody& operator=(SetMemberDeletionPermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->managementAccountId_ == nullptr
        && this->memberDeletionStatus_ == nullptr && this->requestId_ == nullptr && this->resourceDirectoryId_ == nullptr; };
    // managementAccountId Field Functions 
    bool hasManagementAccountId() const { return this->managementAccountId_ != nullptr;};
    void deleteManagementAccountId() { this->managementAccountId_ = nullptr;};
    inline string getManagementAccountId() const { DARABONBA_PTR_GET_DEFAULT(managementAccountId_, "") };
    inline SetMemberDeletionPermissionResponseBody& setManagementAccountId(string managementAccountId) { DARABONBA_PTR_SET_VALUE(managementAccountId_, managementAccountId) };


    // memberDeletionStatus Field Functions 
    bool hasMemberDeletionStatus() const { return this->memberDeletionStatus_ != nullptr;};
    void deleteMemberDeletionStatus() { this->memberDeletionStatus_ = nullptr;};
    inline string getMemberDeletionStatus() const { DARABONBA_PTR_GET_DEFAULT(memberDeletionStatus_, "") };
    inline SetMemberDeletionPermissionResponseBody& setMemberDeletionStatus(string memberDeletionStatus) { DARABONBA_PTR_SET_VALUE(memberDeletionStatus_, memberDeletionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetMemberDeletionPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string getResourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline SetMemberDeletionPermissionResponseBody& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


  protected:
    // The ID of the management account of the resource directory.
    shared_ptr<string> managementAccountId_ {};
    // The status of the member deletion feature. Valid values:
    // 
    // *   Enabled: The feature is enabled.
    // *   Disabled: The feature is disabled.
    shared_ptr<string> memberDeletionStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource directory.
    shared_ptr<string> resourceDirectoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
