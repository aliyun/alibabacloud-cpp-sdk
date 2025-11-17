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
        && return this->accountType_ == nullptr && return this->copilotId_ == nullptr && return this->expireTime_ == nullptr && return this->ticketNum_ == nullptr && return this->userId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateTicket4CopilotRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline int32_t accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
    inline CreateTicket4CopilotRequest& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // copilotId Field Functions 
    bool hasCopilotId() const { return this->copilotId_ != nullptr;};
    void deleteCopilotId() { this->copilotId_ = nullptr;};
    inline string copilotId() const { DARABONBA_PTR_GET_DEFAULT(copilotId_, "") };
    inline CreateTicket4CopilotRequest& setCopilotId(string copilotId) { DARABONBA_PTR_SET_VALUE(copilotId_, copilotId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline CreateTicket4CopilotRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ticketNum Field Functions 
    bool hasTicketNum() const { return this->ticketNum_ != nullptr;};
    void deleteTicketNum() { this->ticketNum_ = nullptr;};
    inline int32_t ticketNum() const { DARABONBA_PTR_GET_DEFAULT(ticketNum_, 0) };
    inline CreateTicket4CopilotRequest& setTicketNum(int32_t ticketNum) { DARABONBA_PTR_SET_VALUE(ticketNum_, ticketNum) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateTicket4CopilotRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // User\\"s account name.
    // <notice>Note: Only one of userId and accountName needs to be filled in. If neither is provided, it will default to the report owner, and the report will be accessed with that user\\"s identity.</notice>
    std::shared_ptr<string> accountName_ = nullptr;
    // User\\"s account type:
    // 
    // - 1: Alibaba Cloud Primary Account
    // 
    // - 3: Quick BI Self-built Account
    // 
    // - 4: DingTalk
    // 
    // - 5: Alibaba Cloud RAM Account
    // 
    // - 6: Third-party Account (SAML, OAuth, etc.)
    // 
    // - 9: WeCom
    // 
    // - 10: Feishu
    // 
    // <notice>Note: If accountName is not empty, then accountType must also be provided.</notice>
    std::shared_ptr<int32_t> accountType_ = nullptr;
    // ID of the Smart Q module to be embedded.
    // 
    // This parameter is required.
    std::shared_ptr<string> copilotId_ = nullptr;
    // Expiration time.
    // 
    // - Unit: minutes, maximum 240 (4 hours).
    // 
    // - Default: 240.
    std::shared_ptr<int32_t> expireTime_ = nullptr;
    // Range of ticket quantity:
    // 
    // - Default value is 1.
    // 
    // - Recommended value is 1.
    // 
    // - Maximum value is 99999.
    // 
    // Each time a ticket is used, the ticket count decreases by 1.
    std::shared_ptr<int32_t> ticketNum_ = nullptr;
    // Quick BI\\"s UserId.
    // 
    // - You can obtain this by calling [3.1.7 Get User Details Based on Third-Party Account] or other relevant APIs.
    // 
    // <notice>Note: Only one of userId and accountName needs to be filled in. If neither is provided, it will default to the report owner, and the report will be accessed with that user\\"s identity.</notice>
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
