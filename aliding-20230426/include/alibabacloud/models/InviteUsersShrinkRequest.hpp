// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITEUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVITEUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InviteUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InviteeList, inviteeListShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(phoneInviteeList, phoneInviteeListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, InviteUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InviteeList, inviteeListShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(phoneInviteeList, phoneInviteeListShrink_);
    };
    InviteUsersShrinkRequest() = default ;
    InviteUsersShrinkRequest(const InviteUsersShrinkRequest &) = default ;
    InviteUsersShrinkRequest(InviteUsersShrinkRequest &&) = default ;
    InviteUsersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteUsersShrinkRequest() = default ;
    InviteUsersShrinkRequest& operator=(const InviteUsersShrinkRequest &) = default ;
    InviteUsersShrinkRequest& operator=(InviteUsersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inviteeListShrink_ == nullptr
        && return this->tenantContextShrink_ == nullptr && return this->conferenceId_ == nullptr && return this->phoneInviteeListShrink_ == nullptr; };
    // inviteeListShrink Field Functions 
    bool hasInviteeListShrink() const { return this->inviteeListShrink_ != nullptr;};
    void deleteInviteeListShrink() { this->inviteeListShrink_ = nullptr;};
    inline string inviteeListShrink() const { DARABONBA_PTR_GET_DEFAULT(inviteeListShrink_, "") };
    inline InviteUsersShrinkRequest& setInviteeListShrink(string inviteeListShrink) { DARABONBA_PTR_SET_VALUE(inviteeListShrink_, inviteeListShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline InviteUsersShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline InviteUsersShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // phoneInviteeListShrink Field Functions 
    bool hasPhoneInviteeListShrink() const { return this->phoneInviteeListShrink_ != nullptr;};
    void deletePhoneInviteeListShrink() { this->phoneInviteeListShrink_ = nullptr;};
    inline string phoneInviteeListShrink() const { DARABONBA_PTR_GET_DEFAULT(phoneInviteeListShrink_, "") };
    inline InviteUsersShrinkRequest& setPhoneInviteeListShrink(string phoneInviteeListShrink) { DARABONBA_PTR_SET_VALUE(phoneInviteeListShrink_, phoneInviteeListShrink) };


  protected:
    std::shared_ptr<string> inviteeListShrink_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<string> phoneInviteeListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
