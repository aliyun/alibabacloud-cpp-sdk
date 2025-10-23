// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMAILADDRESSBYPARAMRESPONSEBODYDATAMAILADDRESS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMAILADDRESSBYPARAMRESPONSEBODYDATAMAILADDRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryMailAddressByParamResponseBodyDataMailAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMailAddressByParamResponseBodyDataMailAddress& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(ConfigSetId, configSetId_);
      DARABONBA_PTR_TO_JSON(ConfigSetName, configSetName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DailyCount, dailyCount_);
      DARABONBA_PTR_TO_JSON(DailyReqCount, dailyReqCount_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(MailAddressId, mailAddressId_);
      DARABONBA_PTR_TO_JSON(MonthCount, monthCount_);
      DARABONBA_PTR_TO_JSON(MonthReqCount, monthReqCount_);
      DARABONBA_PTR_TO_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_TO_JSON(ReplyStatus, replyStatus_);
      DARABONBA_PTR_TO_JSON(Sendtype, sendtype_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMailAddressByParamResponseBodyDataMailAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(ConfigSetId, configSetId_);
      DARABONBA_PTR_FROM_JSON(ConfigSetName, configSetName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DailyCount, dailyCount_);
      DARABONBA_PTR_FROM_JSON(DailyReqCount, dailyReqCount_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(MailAddressId, mailAddressId_);
      DARABONBA_PTR_FROM_JSON(MonthCount, monthCount_);
      DARABONBA_PTR_FROM_JSON(MonthReqCount, monthReqCount_);
      DARABONBA_PTR_FROM_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_FROM_JSON(ReplyStatus, replyStatus_);
      DARABONBA_PTR_FROM_JSON(Sendtype, sendtype_);
    };
    QueryMailAddressByParamResponseBodyDataMailAddress() = default ;
    QueryMailAddressByParamResponseBodyDataMailAddress(const QueryMailAddressByParamResponseBodyDataMailAddress &) = default ;
    QueryMailAddressByParamResponseBodyDataMailAddress(QueryMailAddressByParamResponseBodyDataMailAddress &&) = default ;
    QueryMailAddressByParamResponseBodyDataMailAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMailAddressByParamResponseBodyDataMailAddress() = default ;
    QueryMailAddressByParamResponseBodyDataMailAddress& operator=(const QueryMailAddressByParamResponseBodyDataMailAddress &) = default ;
    QueryMailAddressByParamResponseBodyDataMailAddress& operator=(QueryMailAddressByParamResponseBodyDataMailAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->accountStatus_ == nullptr && return this->configSetId_ == nullptr && return this->configSetName_ == nullptr && return this->createTime_ == nullptr && return this->dailyCount_ == nullptr
        && return this->dailyReqCount_ == nullptr && return this->domainStatus_ == nullptr && return this->mailAddressId_ == nullptr && return this->monthCount_ == nullptr && return this->monthReqCount_ == nullptr
        && return this->replyAddress_ == nullptr && return this->replyStatus_ == nullptr && return this->sendtype_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // configSetId Field Functions 
    bool hasConfigSetId() const { return this->configSetId_ != nullptr;};
    void deleteConfigSetId() { this->configSetId_ = nullptr;};
    inline string configSetId() const { DARABONBA_PTR_GET_DEFAULT(configSetId_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setConfigSetId(string configSetId) { DARABONBA_PTR_SET_VALUE(configSetId_, configSetId) };


    // configSetName Field Functions 
    bool hasConfigSetName() const { return this->configSetName_ != nullptr;};
    void deleteConfigSetName() { this->configSetName_ = nullptr;};
    inline string configSetName() const { DARABONBA_PTR_GET_DEFAULT(configSetName_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setConfigSetName(string configSetName) { DARABONBA_PTR_SET_VALUE(configSetName_, configSetName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dailyCount Field Functions 
    bool hasDailyCount() const { return this->dailyCount_ != nullptr;};
    void deleteDailyCount() { this->dailyCount_ = nullptr;};
    inline string dailyCount() const { DARABONBA_PTR_GET_DEFAULT(dailyCount_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setDailyCount(string dailyCount) { DARABONBA_PTR_SET_VALUE(dailyCount_, dailyCount) };


    // dailyReqCount Field Functions 
    bool hasDailyReqCount() const { return this->dailyReqCount_ != nullptr;};
    void deleteDailyReqCount() { this->dailyReqCount_ = nullptr;};
    inline string dailyReqCount() const { DARABONBA_PTR_GET_DEFAULT(dailyReqCount_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setDailyReqCount(string dailyReqCount) { DARABONBA_PTR_SET_VALUE(dailyReqCount_, dailyReqCount) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // mailAddressId Field Functions 
    bool hasMailAddressId() const { return this->mailAddressId_ != nullptr;};
    void deleteMailAddressId() { this->mailAddressId_ = nullptr;};
    inline string mailAddressId() const { DARABONBA_PTR_GET_DEFAULT(mailAddressId_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setMailAddressId(string mailAddressId) { DARABONBA_PTR_SET_VALUE(mailAddressId_, mailAddressId) };


    // monthCount Field Functions 
    bool hasMonthCount() const { return this->monthCount_ != nullptr;};
    void deleteMonthCount() { this->monthCount_ = nullptr;};
    inline string monthCount() const { DARABONBA_PTR_GET_DEFAULT(monthCount_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setMonthCount(string monthCount) { DARABONBA_PTR_SET_VALUE(monthCount_, monthCount) };


    // monthReqCount Field Functions 
    bool hasMonthReqCount() const { return this->monthReqCount_ != nullptr;};
    void deleteMonthReqCount() { this->monthReqCount_ = nullptr;};
    inline string monthReqCount() const { DARABONBA_PTR_GET_DEFAULT(monthReqCount_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setMonthReqCount(string monthReqCount) { DARABONBA_PTR_SET_VALUE(monthReqCount_, monthReqCount) };


    // replyAddress Field Functions 
    bool hasReplyAddress() const { return this->replyAddress_ != nullptr;};
    void deleteReplyAddress() { this->replyAddress_ = nullptr;};
    inline string replyAddress() const { DARABONBA_PTR_GET_DEFAULT(replyAddress_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setReplyAddress(string replyAddress) { DARABONBA_PTR_SET_VALUE(replyAddress_, replyAddress) };


    // replyStatus Field Functions 
    bool hasReplyStatus() const { return this->replyStatus_ != nullptr;};
    void deleteReplyStatus() { this->replyStatus_ = nullptr;};
    inline string replyStatus() const { DARABONBA_PTR_GET_DEFAULT(replyStatus_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setReplyStatus(string replyStatus) { DARABONBA_PTR_SET_VALUE(replyStatus_, replyStatus) };


    // sendtype Field Functions 
    bool hasSendtype() const { return this->sendtype_ != nullptr;};
    void deleteSendtype() { this->sendtype_ = nullptr;};
    inline string sendtype() const { DARABONBA_PTR_GET_DEFAULT(sendtype_, "") };
    inline QueryMailAddressByParamResponseBodyDataMailAddress& setSendtype(string sendtype) { DARABONBA_PTR_SET_VALUE(sendtype_, sendtype) };


  protected:
    // Sending address
    std::shared_ptr<string> accountName_ = nullptr;
    // Account status, frozen: 1, normal: 0.
    std::shared_ptr<string> accountStatus_ = nullptr;
    std::shared_ptr<string> configSetId_ = nullptr;
    std::shared_ptr<string> configSetName_ = nullptr;
    // Creation time
    std::shared_ptr<string> createTime_ = nullptr;
    // Daily quota limit
    std::shared_ptr<string> dailyCount_ = nullptr;
    // Daily quota
    std::shared_ptr<string> dailyReqCount_ = nullptr;
    // Domain status, 0 indicates normal, 1 indicates abnormal.
    std::shared_ptr<string> domainStatus_ = nullptr;
    // Sending address ID
    std::shared_ptr<string> mailAddressId_ = nullptr;
    // Monthly quota limit
    std::shared_ptr<string> monthCount_ = nullptr;
    // Monthly quota
    std::shared_ptr<string> monthReqCount_ = nullptr;
    // Reply address
    std::shared_ptr<string> replyAddress_ = nullptr;
    // Reply address status
    std::shared_ptr<string> replyStatus_ = nullptr;
    // Sending address type. Values:
    // 
    // - batch: bulk email
    // - trigger: triggered email
    std::shared_ptr<string> sendtype_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
