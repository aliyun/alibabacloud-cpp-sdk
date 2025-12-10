// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETMEMBERDELETIONPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETMEMBERDELETIONPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
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
        && return this->memberDeletionStatus_ == nullptr && return this->requestId_ == nullptr && return this->resourceDirectoryId_ == nullptr; };
    // managementAccountId Field Functions 
    bool hasManagementAccountId() const { return this->managementAccountId_ != nullptr;};
    void deleteManagementAccountId() { this->managementAccountId_ = nullptr;};
    inline string managementAccountId() const { DARABONBA_PTR_GET_DEFAULT(managementAccountId_, "") };
    inline SetMemberDeletionPermissionResponseBody& setManagementAccountId(string managementAccountId) { DARABONBA_PTR_SET_VALUE(managementAccountId_, managementAccountId) };


    // memberDeletionStatus Field Functions 
    bool hasMemberDeletionStatus() const { return this->memberDeletionStatus_ != nullptr;};
    void deleteMemberDeletionStatus() { this->memberDeletionStatus_ = nullptr;};
    inline string memberDeletionStatus() const { DARABONBA_PTR_GET_DEFAULT(memberDeletionStatus_, "") };
    inline SetMemberDeletionPermissionResponseBody& setMemberDeletionStatus(string memberDeletionStatus) { DARABONBA_PTR_SET_VALUE(memberDeletionStatus_, memberDeletionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetMemberDeletionPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline SetMemberDeletionPermissionResponseBody& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


  protected:
    // The ID of the management account of the resource directory.
    std::shared_ptr<string> managementAccountId_ = nullptr;
    // The status of the member deletion feature. Valid values:
    // 
    // *   Enabled: The feature is enabled.
    // *   Disabled: The feature is disabled.
    std::shared_ptr<string> memberDeletionStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
