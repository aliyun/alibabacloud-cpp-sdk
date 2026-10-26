// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKET4AIPROREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKET4AIPROREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CreateTicket4AiProRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicket4AiProRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(AiProId, aiProId_);
      DARABONBA_PTR_TO_JSON(CustomParam, customParam_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(QuickBIUserId, quickBIUserId_);
      DARABONBA_PTR_TO_JSON(SystemUid, systemUid_);
      DARABONBA_PTR_TO_JSON(TicketNum, ticketNum_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicket4AiProRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(AiProId, aiProId_);
      DARABONBA_PTR_FROM_JSON(CustomParam, customParam_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(QuickBIUserId, quickBIUserId_);
      DARABONBA_PTR_FROM_JSON(SystemUid, systemUid_);
      DARABONBA_PTR_FROM_JSON(TicketNum, ticketNum_);
    };
    CreateTicket4AiProRequest() = default ;
    CreateTicket4AiProRequest(const CreateTicket4AiProRequest &) = default ;
    CreateTicket4AiProRequest(CreateTicket4AiProRequest &&) = default ;
    CreateTicket4AiProRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicket4AiProRequest() = default ;
    CreateTicket4AiProRequest& operator=(const CreateTicket4AiProRequest &) = default ;
    CreateTicket4AiProRequest& operator=(CreateTicket4AiProRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountType_ == nullptr && this->aiProId_ == nullptr && this->customParam_ == nullptr && this->expireTime_ == nullptr && this->quickBIUserId_ == nullptr
        && this->systemUid_ == nullptr && this->ticketNum_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateTicket4AiProRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline int32_t getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
    inline CreateTicket4AiProRequest& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // aiProId Field Functions 
    bool hasAiProId() const { return this->aiProId_ != nullptr;};
    void deleteAiProId() { this->aiProId_ = nullptr;};
    inline string getAiProId() const { DARABONBA_PTR_GET_DEFAULT(aiProId_, "") };
    inline CreateTicket4AiProRequest& setAiProId(string aiProId) { DARABONBA_PTR_SET_VALUE(aiProId_, aiProId) };


    // customParam Field Functions 
    bool hasCustomParam() const { return this->customParam_ != nullptr;};
    void deleteCustomParam() { this->customParam_ = nullptr;};
    inline string getCustomParam() const { DARABONBA_PTR_GET_DEFAULT(customParam_, "") };
    inline CreateTicket4AiProRequest& setCustomParam(string customParam) { DARABONBA_PTR_SET_VALUE(customParam_, customParam) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline CreateTicket4AiProRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // quickBIUserId Field Functions 
    bool hasQuickBIUserId() const { return this->quickBIUserId_ != nullptr;};
    void deleteQuickBIUserId() { this->quickBIUserId_ = nullptr;};
    inline string getQuickBIUserId() const { DARABONBA_PTR_GET_DEFAULT(quickBIUserId_, "") };
    inline CreateTicket4AiProRequest& setQuickBIUserId(string quickBIUserId) { DARABONBA_PTR_SET_VALUE(quickBIUserId_, quickBIUserId) };


    // systemUid Field Functions 
    bool hasSystemUid() const { return this->systemUid_ != nullptr;};
    void deleteSystemUid() { this->systemUid_ = nullptr;};
    inline string getSystemUid() const { DARABONBA_PTR_GET_DEFAULT(systemUid_, "") };
    inline CreateTicket4AiProRequest& setSystemUid(string systemUid) { DARABONBA_PTR_SET_VALUE(systemUid_, systemUid) };


    // ticketNum Field Functions 
    bool hasTicketNum() const { return this->ticketNum_ != nullptr;};
    void deleteTicketNum() { this->ticketNum_ = nullptr;};
    inline int32_t getTicketNum() const { DARABONBA_PTR_GET_DEFAULT(ticketNum_, 0) };
    inline CreateTicket4AiProRequest& setTicketNum(int32_t ticketNum) { DARABONBA_PTR_SET_VALUE(ticketNum_, ticketNum) };


  protected:
    shared_ptr<string> accountName_ {};
    shared_ptr<int32_t> accountType_ {};
    // This parameter is required.
    shared_ptr<string> aiProId_ {};
    shared_ptr<string> customParam_ {};
    shared_ptr<int32_t> expireTime_ {};
    shared_ptr<string> quickBIUserId_ {};
    shared_ptr<string> systemUid_ {};
    shared_ptr<int32_t> ticketNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
