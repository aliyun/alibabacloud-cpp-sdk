// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETMEMBERDISPLAYNAMESYNCSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETMEMBERDISPLAYNAMESYNCSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SetMemberDisplayNameSyncStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetMemberDisplayNameSyncStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MemberAccountDisplayNameSyncStatus, memberAccountDisplayNameSyncStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetMemberDisplayNameSyncStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberAccountDisplayNameSyncStatus, memberAccountDisplayNameSyncStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetMemberDisplayNameSyncStatusResponseBody() = default ;
    SetMemberDisplayNameSyncStatusResponseBody(const SetMemberDisplayNameSyncStatusResponseBody &) = default ;
    SetMemberDisplayNameSyncStatusResponseBody(SetMemberDisplayNameSyncStatusResponseBody &&) = default ;
    SetMemberDisplayNameSyncStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetMemberDisplayNameSyncStatusResponseBody() = default ;
    SetMemberDisplayNameSyncStatusResponseBody& operator=(const SetMemberDisplayNameSyncStatusResponseBody &) = default ;
    SetMemberDisplayNameSyncStatusResponseBody& operator=(SetMemberDisplayNameSyncStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberAccountDisplayNameSyncStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // memberAccountDisplayNameSyncStatus Field Functions 
    bool hasMemberAccountDisplayNameSyncStatus() const { return this->memberAccountDisplayNameSyncStatus_ != nullptr;};
    void deleteMemberAccountDisplayNameSyncStatus() { this->memberAccountDisplayNameSyncStatus_ = nullptr;};
    inline string memberAccountDisplayNameSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(memberAccountDisplayNameSyncStatus_, "") };
    inline SetMemberDisplayNameSyncStatusResponseBody& setMemberAccountDisplayNameSyncStatus(string memberAccountDisplayNameSyncStatus) { DARABONBA_PTR_SET_VALUE(memberAccountDisplayNameSyncStatus_, memberAccountDisplayNameSyncStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetMemberDisplayNameSyncStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the Member Display Name Synchronization feature. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    std::shared_ptr<string> memberAccountDisplayNameSyncStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
