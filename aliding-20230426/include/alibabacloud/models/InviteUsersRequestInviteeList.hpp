// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITEUSERSREQUESTINVITEELIST_HPP_
#define ALIBABACLOUD_MODELS_INVITEUSERSREQUESTINVITEELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InviteUsersRequestInviteeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteUsersRequestInviteeList& obj) { 
      DARABONBA_PTR_TO_JSON(Nick, nick_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, InviteUsersRequestInviteeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Nick, nick_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    InviteUsersRequestInviteeList() = default ;
    InviteUsersRequestInviteeList(const InviteUsersRequestInviteeList &) = default ;
    InviteUsersRequestInviteeList(InviteUsersRequestInviteeList &&) = default ;
    InviteUsersRequestInviteeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteUsersRequestInviteeList() = default ;
    InviteUsersRequestInviteeList& operator=(const InviteUsersRequestInviteeList &) = default ;
    InviteUsersRequestInviteeList& operator=(InviteUsersRequestInviteeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nick_ == nullptr
        && return this->userId_ == nullptr; };
    // nick Field Functions 
    bool hasNick() const { return this->nick_ != nullptr;};
    void deleteNick() { this->nick_ = nullptr;};
    inline string nick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
    inline InviteUsersRequestInviteeList& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InviteUsersRequestInviteeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> nick_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
