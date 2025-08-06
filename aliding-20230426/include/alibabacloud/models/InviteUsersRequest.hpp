// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVITEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InviteUsersRequestInviteeList.hpp>
#include <alibabacloud/models/InviteUsersRequestTenantContext.hpp>
#include <alibabacloud/models/InviteUsersRequestPhoneInviteeList.hpp>
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
    virtual bool empty() const override { this->inviteeList_ != nullptr
        && this->tenantContext_ != nullptr && this->conferenceId_ != nullptr && this->phoneInviteeList_ != nullptr; };
    // inviteeList Field Functions 
    bool hasInviteeList() const { return this->inviteeList_ != nullptr;};
    void deleteInviteeList() { this->inviteeList_ = nullptr;};
    inline const vector<InviteUsersRequestInviteeList> & inviteeList() const { DARABONBA_PTR_GET_CONST(inviteeList_, vector<InviteUsersRequestInviteeList>) };
    inline vector<InviteUsersRequestInviteeList> inviteeList() { DARABONBA_PTR_GET(inviteeList_, vector<InviteUsersRequestInviteeList>) };
    inline InviteUsersRequest& setInviteeList(const vector<InviteUsersRequestInviteeList> & inviteeList) { DARABONBA_PTR_SET_VALUE(inviteeList_, inviteeList) };
    inline InviteUsersRequest& setInviteeList(vector<InviteUsersRequestInviteeList> && inviteeList) { DARABONBA_PTR_SET_RVALUE(inviteeList_, inviteeList) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InviteUsersRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InviteUsersRequestTenantContext) };
    inline InviteUsersRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, InviteUsersRequestTenantContext) };
    inline InviteUsersRequest& setTenantContext(const InviteUsersRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InviteUsersRequest& setTenantContext(InviteUsersRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline InviteUsersRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // phoneInviteeList Field Functions 
    bool hasPhoneInviteeList() const { return this->phoneInviteeList_ != nullptr;};
    void deletePhoneInviteeList() { this->phoneInviteeList_ = nullptr;};
    inline const vector<InviteUsersRequestPhoneInviteeList> & phoneInviteeList() const { DARABONBA_PTR_GET_CONST(phoneInviteeList_, vector<InviteUsersRequestPhoneInviteeList>) };
    inline vector<InviteUsersRequestPhoneInviteeList> phoneInviteeList() { DARABONBA_PTR_GET(phoneInviteeList_, vector<InviteUsersRequestPhoneInviteeList>) };
    inline InviteUsersRequest& setPhoneInviteeList(const vector<InviteUsersRequestPhoneInviteeList> & phoneInviteeList) { DARABONBA_PTR_SET_VALUE(phoneInviteeList_, phoneInviteeList) };
    inline InviteUsersRequest& setPhoneInviteeList(vector<InviteUsersRequestPhoneInviteeList> && phoneInviteeList) { DARABONBA_PTR_SET_RVALUE(phoneInviteeList_, phoneInviteeList) };


  protected:
    std::shared_ptr<vector<InviteUsersRequestInviteeList>> inviteeList_ = nullptr;
    std::shared_ptr<InviteUsersRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<vector<InviteUsersRequestPhoneInviteeList>> phoneInviteeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
