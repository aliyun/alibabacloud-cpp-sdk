// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITEUSERSREQUESTPHONEINVITEELIST_HPP_
#define ALIBABACLOUD_MODELS_INVITEUSERSREQUESTPHONEINVITEELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InviteUsersRequestPhoneInviteeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteUsersRequestPhoneInviteeList& obj) { 
      DARABONBA_PTR_TO_JSON(InviteClient, inviteClient_);
      DARABONBA_PTR_TO_JSON(Nick, nick_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, InviteUsersRequestPhoneInviteeList& obj) { 
      DARABONBA_PTR_FROM_JSON(InviteClient, inviteClient_);
      DARABONBA_PTR_FROM_JSON(Nick, nick_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    InviteUsersRequestPhoneInviteeList() = default ;
    InviteUsersRequestPhoneInviteeList(const InviteUsersRequestPhoneInviteeList &) = default ;
    InviteUsersRequestPhoneInviteeList(InviteUsersRequestPhoneInviteeList &&) = default ;
    InviteUsersRequestPhoneInviteeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteUsersRequestPhoneInviteeList() = default ;
    InviteUsersRequestPhoneInviteeList& operator=(const InviteUsersRequestPhoneInviteeList &) = default ;
    InviteUsersRequestPhoneInviteeList& operator=(InviteUsersRequestPhoneInviteeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inviteClient_ != nullptr
        && this->nick_ != nullptr && this->phoneNumber_ != nullptr && this->statusCode_ != nullptr; };
    // inviteClient Field Functions 
    bool hasInviteClient() const { return this->inviteClient_ != nullptr;};
    void deleteInviteClient() { this->inviteClient_ = nullptr;};
    inline bool inviteClient() const { DARABONBA_PTR_GET_DEFAULT(inviteClient_, false) };
    inline InviteUsersRequestPhoneInviteeList& setInviteClient(bool inviteClient) { DARABONBA_PTR_SET_VALUE(inviteClient_, inviteClient) };


    // nick Field Functions 
    bool hasNick() const { return this->nick_ != nullptr;};
    void deleteNick() { this->nick_ = nullptr;};
    inline string nick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
    inline InviteUsersRequestPhoneInviteeList& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline InviteUsersRequestPhoneInviteeList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline InviteUsersRequestPhoneInviteeList& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    std::shared_ptr<bool> inviteClient_ = nullptr;
    std::shared_ptr<string> nick_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> statusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
