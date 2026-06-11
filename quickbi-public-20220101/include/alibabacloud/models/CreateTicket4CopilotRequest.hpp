// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKET4COPILOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKET4COPILOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CreateTicket4CopilotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicket4CopilotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(CopilotId, copilotId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(TicketNum, ticketNum_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicket4CopilotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(CopilotId, copilotId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(TicketNum, ticketNum_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateTicket4CopilotRequest() = default ;
    CreateTicket4CopilotRequest(const CreateTicket4CopilotRequest &) = default ;
    CreateTicket4CopilotRequest(CreateTicket4CopilotRequest &&) = default ;
    CreateTicket4CopilotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicket4CopilotRequest() = default ;
    CreateTicket4CopilotRequest& operator=(const CreateTicket4CopilotRequest &) = default ;
    CreateTicket4CopilotRequest& operator=(CreateTicket4CopilotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountType_ == nullptr && this->copilotId_ == nullptr && this->expireTime_ == nullptr && this->ticketNum_ == nullptr && this->userId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateTicket4CopilotRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline int32_t getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
    inline CreateTicket4CopilotRequest& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // copilotId Field Functions 
    bool hasCopilotId() const { return this->copilotId_ != nullptr;};
    void deleteCopilotId() { this->copilotId_ = nullptr;};
    inline string getCopilotId() const { DARABONBA_PTR_GET_DEFAULT(copilotId_, "") };
    inline CreateTicket4CopilotRequest& setCopilotId(string copilotId) { DARABONBA_PTR_SET_VALUE(copilotId_, copilotId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline CreateTicket4CopilotRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ticketNum Field Functions 
    bool hasTicketNum() const { return this->ticketNum_ != nullptr;};
    void deleteTicketNum() { this->ticketNum_ = nullptr;};
    inline int32_t getTicketNum() const { DARABONBA_PTR_GET_DEFAULT(ticketNum_, 0) };
    inline CreateTicket4CopilotRequest& setTicketNum(int32_t ticketNum) { DARABONBA_PTR_SET_VALUE(ticketNum_, ticketNum) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateTicket4CopilotRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The name of the user account.
    // >Notice: Note: Specify either UserId or AccountName. If you leave both parameters empty, the ticket is bound to the API caller by default. Access is then granted based on the caller\\"s identity.
    shared_ptr<string> accountName_ {};
    // The type of the user account:
    // 
    // - 1: Alibaba Cloud account
    // 
    // - 3: Quick BI user
    // 
    // - 4: DingTalk
    // 
    // - 5: RAM user
    // 
    // - 6: Third-party account (an account integrated using protocols such as SAML or OAuth)
    // 
    // - 9: WeCom
    // 
    // - 10: Lark
    // 
    // >Notice: 
    // 
    // Note: This parameter is required if you specify AccountName.
    shared_ptr<int32_t> accountType_ {};
    // The ID of the embedded Copilot module.
    // 
    // This parameter is required.
    shared_ptr<string> copilotId_ {};
    // The expiration time of the ticket.
    // 
    // - Unit: minutes. The maximum validity period is 240 minutes (4 hours).
    // 
    // - Default: 240 minutes.
    shared_ptr<int32_t> expireTime_ {};
    // The number of times the ticket can be used. The value can range from 1 to 99,999.
    // 
    // - Default: 1.
    // 
    // - Recommended: 1.
    // 
    // - Maximum: 99,999.
    // 
    // Each access decrements the ticket\\"s usage count by one.
    shared_ptr<int32_t> ticketNum_ {};
    // The ID of the Quick BI user. This is not your Alibaba Cloud account ID. Call the QueryUserInfoByAccount operation to obtain the user ID. Example: `fe67f61a35a94b7da1a34ba174a7****`.
    // 
    // >Notice: 
    // 
    // Note: Specify either UserId or AccountName. If you leave both parameters empty, the ticket is bound to the API caller by default. Access is then granted based on the caller\\"s identity.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
