// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCONFERENCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCONFERENCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateVideoConferenceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoConferenceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfTitle, confTitle_);
      DARABONBA_PTR_TO_JSON(InviteCaller, inviteCaller_);
      DARABONBA_PTR_TO_JSON(InviteUserIds, inviteUserIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoConferenceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfTitle, confTitle_);
      DARABONBA_PTR_FROM_JSON(InviteCaller, inviteCaller_);
      DARABONBA_PTR_FROM_JSON(InviteUserIds, inviteUserIdsShrink_);
    };
    CreateVideoConferenceShrinkRequest() = default ;
    CreateVideoConferenceShrinkRequest(const CreateVideoConferenceShrinkRequest &) = default ;
    CreateVideoConferenceShrinkRequest(CreateVideoConferenceShrinkRequest &&) = default ;
    CreateVideoConferenceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoConferenceShrinkRequest() = default ;
    CreateVideoConferenceShrinkRequest& operator=(const CreateVideoConferenceShrinkRequest &) = default ;
    CreateVideoConferenceShrinkRequest& operator=(CreateVideoConferenceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confTitle_ != nullptr
        && this->inviteCaller_ != nullptr && this->inviteUserIdsShrink_ != nullptr; };
    // confTitle Field Functions 
    bool hasConfTitle() const { return this->confTitle_ != nullptr;};
    void deleteConfTitle() { this->confTitle_ = nullptr;};
    inline string confTitle() const { DARABONBA_PTR_GET_DEFAULT(confTitle_, "") };
    inline CreateVideoConferenceShrinkRequest& setConfTitle(string confTitle) { DARABONBA_PTR_SET_VALUE(confTitle_, confTitle) };


    // inviteCaller Field Functions 
    bool hasInviteCaller() const { return this->inviteCaller_ != nullptr;};
    void deleteInviteCaller() { this->inviteCaller_ = nullptr;};
    inline bool inviteCaller() const { DARABONBA_PTR_GET_DEFAULT(inviteCaller_, false) };
    inline CreateVideoConferenceShrinkRequest& setInviteCaller(bool inviteCaller) { DARABONBA_PTR_SET_VALUE(inviteCaller_, inviteCaller) };


    // inviteUserIdsShrink Field Functions 
    bool hasInviteUserIdsShrink() const { return this->inviteUserIdsShrink_ != nullptr;};
    void deleteInviteUserIdsShrink() { this->inviteUserIdsShrink_ = nullptr;};
    inline string inviteUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(inviteUserIdsShrink_, "") };
    inline CreateVideoConferenceShrinkRequest& setInviteUserIdsShrink(string inviteUserIdsShrink) { DARABONBA_PTR_SET_VALUE(inviteUserIdsShrink_, inviteUserIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> confTitle_ = nullptr;
    std::shared_ptr<bool> inviteCaller_ = nullptr;
    std::shared_ptr<string> inviteUserIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
