// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTEMEMBERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MUTEMEMBERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class MuteMembersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteMembersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(UserIds, userIdsShrink_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(muteAction, muteAction_);
    };
    friend void from_json(const Darabonba::Json& j, MuteMembersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIdsShrink_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(muteAction, muteAction_);
    };
    MuteMembersShrinkRequest() = default ;
    MuteMembersShrinkRequest(const MuteMembersShrinkRequest &) = default ;
    MuteMembersShrinkRequest(MuteMembersShrinkRequest &&) = default ;
    MuteMembersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteMembersShrinkRequest() = default ;
    MuteMembersShrinkRequest& operator=(const MuteMembersShrinkRequest &) = default ;
    MuteMembersShrinkRequest& operator=(MuteMembersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->userIdsShrink_ == nullptr && this->conferenceId_ == nullptr && this->muteAction_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline MuteMembersShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string getUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline MuteMembersShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline MuteMembersShrinkRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // muteAction Field Functions 
    bool hasMuteAction() const { return this->muteAction_ != nullptr;};
    void deleteMuteAction() { this->muteAction_ = nullptr;};
    inline string getMuteAction() const { DARABONBA_PTR_GET_DEFAULT(muteAction_, "") };
    inline MuteMembersShrinkRequest& setMuteAction(string muteAction) { DARABONBA_PTR_SET_VALUE(muteAction_, muteAction) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> userIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    // This parameter is required.
    shared_ptr<string> muteAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
