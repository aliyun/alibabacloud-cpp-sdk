// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCONFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCONFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateVideoConferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoConferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfTitle, confTitle_);
      DARABONBA_PTR_TO_JSON(InviteCaller, inviteCaller_);
      DARABONBA_PTR_TO_JSON(InviteUserIds, inviteUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoConferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfTitle, confTitle_);
      DARABONBA_PTR_FROM_JSON(InviteCaller, inviteCaller_);
      DARABONBA_PTR_FROM_JSON(InviteUserIds, inviteUserIds_);
    };
    CreateVideoConferenceRequest() = default ;
    CreateVideoConferenceRequest(const CreateVideoConferenceRequest &) = default ;
    CreateVideoConferenceRequest(CreateVideoConferenceRequest &&) = default ;
    CreateVideoConferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoConferenceRequest() = default ;
    CreateVideoConferenceRequest& operator=(const CreateVideoConferenceRequest &) = default ;
    CreateVideoConferenceRequest& operator=(CreateVideoConferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confTitle_ == nullptr
        && return this->inviteCaller_ == nullptr && return this->inviteUserIds_ == nullptr; };
    // confTitle Field Functions 
    bool hasConfTitle() const { return this->confTitle_ != nullptr;};
    void deleteConfTitle() { this->confTitle_ = nullptr;};
    inline string confTitle() const { DARABONBA_PTR_GET_DEFAULT(confTitle_, "") };
    inline CreateVideoConferenceRequest& setConfTitle(string confTitle) { DARABONBA_PTR_SET_VALUE(confTitle_, confTitle) };


    // inviteCaller Field Functions 
    bool hasInviteCaller() const { return this->inviteCaller_ != nullptr;};
    void deleteInviteCaller() { this->inviteCaller_ = nullptr;};
    inline bool inviteCaller() const { DARABONBA_PTR_GET_DEFAULT(inviteCaller_, false) };
    inline CreateVideoConferenceRequest& setInviteCaller(bool inviteCaller) { DARABONBA_PTR_SET_VALUE(inviteCaller_, inviteCaller) };


    // inviteUserIds Field Functions 
    bool hasInviteUserIds() const { return this->inviteUserIds_ != nullptr;};
    void deleteInviteUserIds() { this->inviteUserIds_ = nullptr;};
    inline const vector<string> & inviteUserIds() const { DARABONBA_PTR_GET_CONST(inviteUserIds_, vector<string>) };
    inline vector<string> inviteUserIds() { DARABONBA_PTR_GET(inviteUserIds_, vector<string>) };
    inline CreateVideoConferenceRequest& setInviteUserIds(const vector<string> & inviteUserIds) { DARABONBA_PTR_SET_VALUE(inviteUserIds_, inviteUserIds) };
    inline CreateVideoConferenceRequest& setInviteUserIds(vector<string> && inviteUserIds) { DARABONBA_PTR_SET_RVALUE(inviteUserIds_, inviteUserIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> confTitle_ = nullptr;
    std::shared_ptr<bool> inviteCaller_ = nullptr;
    std::shared_ptr<vector<string>> inviteUserIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
