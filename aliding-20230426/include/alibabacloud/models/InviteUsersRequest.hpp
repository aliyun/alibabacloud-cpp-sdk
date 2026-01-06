// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVITEUSERSREQUEST_HPP_
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
  class InviteUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InviteeList, inviteeList_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(phoneInviteeList, phoneInviteeList_);
    };
    friend void from_json(const Darabonba::Json& j, InviteUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InviteeList, inviteeList_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(phoneInviteeList, phoneInviteeList_);
    };
    InviteUsersRequest() = default ;
    InviteUsersRequest(const InviteUsersRequest &) = default ;
    InviteUsersRequest(InviteUsersRequest &&) = default ;
    InviteUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteUsersRequest() = default ;
    InviteUsersRequest& operator=(const InviteUsersRequest &) = default ;
    InviteUsersRequest& operator=(InviteUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PhoneInviteeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PhoneInviteeList& obj) { 
        DARABONBA_PTR_TO_JSON(InviteClient, inviteClient_);
        DARABONBA_PTR_TO_JSON(Nick, nick_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      };
      friend void from_json(const Darabonba::Json& j, PhoneInviteeList& obj) { 
        DARABONBA_PTR_FROM_JSON(InviteClient, inviteClient_);
        DARABONBA_PTR_FROM_JSON(Nick, nick_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      };
      PhoneInviteeList() = default ;
      PhoneInviteeList(const PhoneInviteeList &) = default ;
      PhoneInviteeList(PhoneInviteeList &&) = default ;
      PhoneInviteeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PhoneInviteeList() = default ;
      PhoneInviteeList& operator=(const PhoneInviteeList &) = default ;
      PhoneInviteeList& operator=(PhoneInviteeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inviteClient_ == nullptr
        && this->nick_ == nullptr && this->phoneNumber_ == nullptr && this->statusCode_ == nullptr; };
      // inviteClient Field Functions 
      bool hasInviteClient() const { return this->inviteClient_ != nullptr;};
      void deleteInviteClient() { this->inviteClient_ = nullptr;};
      inline bool getInviteClient() const { DARABONBA_PTR_GET_DEFAULT(inviteClient_, false) };
      inline PhoneInviteeList& setInviteClient(bool inviteClient) { DARABONBA_PTR_SET_VALUE(inviteClient_, inviteClient) };


      // nick Field Functions 
      bool hasNick() const { return this->nick_ != nullptr;};
      void deleteNick() { this->nick_ = nullptr;};
      inline string getNick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
      inline PhoneInviteeList& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline PhoneInviteeList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline PhoneInviteeList& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    protected:
      shared_ptr<bool> inviteClient_ {};
      shared_ptr<string> nick_ {};
      shared_ptr<string> phoneNumber_ {};
      shared_ptr<string> statusCode_ {};
    };

    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class InviteeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InviteeList& obj) { 
        DARABONBA_PTR_TO_JSON(Nick, nick_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, InviteeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Nick, nick_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      InviteeList() = default ;
      InviteeList(const InviteeList &) = default ;
      InviteeList(InviteeList &&) = default ;
      InviteeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InviteeList() = default ;
      InviteeList& operator=(const InviteeList &) = default ;
      InviteeList& operator=(InviteeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nick_ == nullptr
        && this->userId_ == nullptr; };
      // nick Field Functions 
      bool hasNick() const { return this->nick_ != nullptr;};
      void deleteNick() { this->nick_ = nullptr;};
      inline string getNick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
      inline InviteeList& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline InviteeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // This parameter is required.
      shared_ptr<string> nick_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->inviteeList_ == nullptr
        && this->tenantContext_ == nullptr && this->conferenceId_ == nullptr && this->phoneInviteeList_ == nullptr; };
    // inviteeList Field Functions 
    bool hasInviteeList() const { return this->inviteeList_ != nullptr;};
    void deleteInviteeList() { this->inviteeList_ = nullptr;};
    inline const vector<InviteUsersRequest::InviteeList> & getInviteeList() const { DARABONBA_PTR_GET_CONST(inviteeList_, vector<InviteUsersRequest::InviteeList>) };
    inline vector<InviteUsersRequest::InviteeList> getInviteeList() { DARABONBA_PTR_GET(inviteeList_, vector<InviteUsersRequest::InviteeList>) };
    inline InviteUsersRequest& setInviteeList(const vector<InviteUsersRequest::InviteeList> & inviteeList) { DARABONBA_PTR_SET_VALUE(inviteeList_, inviteeList) };
    inline InviteUsersRequest& setInviteeList(vector<InviteUsersRequest::InviteeList> && inviteeList) { DARABONBA_PTR_SET_RVALUE(inviteeList_, inviteeList) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InviteUsersRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InviteUsersRequest::TenantContext) };
    inline InviteUsersRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, InviteUsersRequest::TenantContext) };
    inline InviteUsersRequest& setTenantContext(const InviteUsersRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InviteUsersRequest& setTenantContext(InviteUsersRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline InviteUsersRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // phoneInviteeList Field Functions 
    bool hasPhoneInviteeList() const { return this->phoneInviteeList_ != nullptr;};
    void deletePhoneInviteeList() { this->phoneInviteeList_ = nullptr;};
    inline const vector<InviteUsersRequest::PhoneInviteeList> & getPhoneInviteeList() const { DARABONBA_PTR_GET_CONST(phoneInviteeList_, vector<InviteUsersRequest::PhoneInviteeList>) };
    inline vector<InviteUsersRequest::PhoneInviteeList> getPhoneInviteeList() { DARABONBA_PTR_GET(phoneInviteeList_, vector<InviteUsersRequest::PhoneInviteeList>) };
    inline InviteUsersRequest& setPhoneInviteeList(const vector<InviteUsersRequest::PhoneInviteeList> & phoneInviteeList) { DARABONBA_PTR_SET_VALUE(phoneInviteeList_, phoneInviteeList) };
    inline InviteUsersRequest& setPhoneInviteeList(vector<InviteUsersRequest::PhoneInviteeList> && phoneInviteeList) { DARABONBA_PTR_SET_RVALUE(phoneInviteeList_, phoneInviteeList) };


  protected:
    shared_ptr<vector<InviteUsersRequest::InviteeList>> inviteeList_ {};
    shared_ptr<InviteUsersRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    shared_ptr<vector<InviteUsersRequest::PhoneInviteeList>> phoneInviteeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
