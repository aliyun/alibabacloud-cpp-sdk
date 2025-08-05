// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCACCOUNTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCACCOUNTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DescAccountSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescAccountSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DailyQuota, dailyQuota_);
      DARABONBA_PTR_TO_JSON(DailyRemainFreeQuota, dailyRemainFreeQuota_);
      DARABONBA_PTR_TO_JSON(DayuStatus, dayuStatus_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(EnableTimes, enableTimes_);
      DARABONBA_PTR_TO_JSON(IpChannelType, ipChannelType_);
      DARABONBA_PTR_TO_JSON(MailAddresses, mailAddresses_);
      DARABONBA_PTR_TO_JSON(MaxQuotaLevel, maxQuotaLevel_);
      DARABONBA_PTR_TO_JSON(MonthQuota, monthQuota_);
      DARABONBA_PTR_TO_JSON(QuotaLevel, quotaLevel_);
      DARABONBA_PTR_TO_JSON(Receivers, receivers_);
      DARABONBA_PTR_TO_JSON(RemainFreeQuota, remainFreeQuota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmsRecord, smsRecord_);
      DARABONBA_PTR_TO_JSON(SmsSign, smsSign_);
      DARABONBA_PTR_TO_JSON(SmsTemplates, smsTemplates_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescAccountSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DailyQuota, dailyQuota_);
      DARABONBA_PTR_FROM_JSON(DailyRemainFreeQuota, dailyRemainFreeQuota_);
      DARABONBA_PTR_FROM_JSON(DayuStatus, dayuStatus_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(EnableTimes, enableTimes_);
      DARABONBA_PTR_FROM_JSON(IpChannelType, ipChannelType_);
      DARABONBA_PTR_FROM_JSON(MailAddresses, mailAddresses_);
      DARABONBA_PTR_FROM_JSON(MaxQuotaLevel, maxQuotaLevel_);
      DARABONBA_PTR_FROM_JSON(MonthQuota, monthQuota_);
      DARABONBA_PTR_FROM_JSON(QuotaLevel, quotaLevel_);
      DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
      DARABONBA_PTR_FROM_JSON(RemainFreeQuota, remainFreeQuota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmsRecord, smsRecord_);
      DARABONBA_PTR_FROM_JSON(SmsSign, smsSign_);
      DARABONBA_PTR_FROM_JSON(SmsTemplates, smsTemplates_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescAccountSummaryResponseBody() = default ;
    DescAccountSummaryResponseBody(const DescAccountSummaryResponseBody &) = default ;
    DescAccountSummaryResponseBody(DescAccountSummaryResponseBody &&) = default ;
    DescAccountSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescAccountSummaryResponseBody() = default ;
    DescAccountSummaryResponseBody& operator=(const DescAccountSummaryResponseBody &) = default ;
    DescAccountSummaryResponseBody& operator=(DescAccountSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dailyQuota_ != nullptr
        && this->dailyRemainFreeQuota_ != nullptr && this->dayuStatus_ != nullptr && this->domains_ != nullptr && this->enableTimes_ != nullptr && this->ipChannelType_ != nullptr
        && this->mailAddresses_ != nullptr && this->maxQuotaLevel_ != nullptr && this->monthQuota_ != nullptr && this->quotaLevel_ != nullptr && this->receivers_ != nullptr
        && this->remainFreeQuota_ != nullptr && this->requestId_ != nullptr && this->smsRecord_ != nullptr && this->smsSign_ != nullptr && this->smsTemplates_ != nullptr
        && this->tags_ != nullptr && this->templates_ != nullptr && this->userStatus_ != nullptr; };
    // dailyQuota Field Functions 
    bool hasDailyQuota() const { return this->dailyQuota_ != nullptr;};
    void deleteDailyQuota() { this->dailyQuota_ = nullptr;};
    inline int32_t dailyQuota() const { DARABONBA_PTR_GET_DEFAULT(dailyQuota_, 0) };
    inline DescAccountSummaryResponseBody& setDailyQuota(int32_t dailyQuota) { DARABONBA_PTR_SET_VALUE(dailyQuota_, dailyQuota) };


    // dailyRemainFreeQuota Field Functions 
    bool hasDailyRemainFreeQuota() const { return this->dailyRemainFreeQuota_ != nullptr;};
    void deleteDailyRemainFreeQuota() { this->dailyRemainFreeQuota_ = nullptr;};
    inline int32_t dailyRemainFreeQuota() const { DARABONBA_PTR_GET_DEFAULT(dailyRemainFreeQuota_, 0) };
    inline DescAccountSummaryResponseBody& setDailyRemainFreeQuota(int32_t dailyRemainFreeQuota) { DARABONBA_PTR_SET_VALUE(dailyRemainFreeQuota_, dailyRemainFreeQuota) };


    // dayuStatus Field Functions 
    bool hasDayuStatus() const { return this->dayuStatus_ != nullptr;};
    void deleteDayuStatus() { this->dayuStatus_ = nullptr;};
    inline int32_t dayuStatus() const { DARABONBA_PTR_GET_DEFAULT(dayuStatus_, 0) };
    inline DescAccountSummaryResponseBody& setDayuStatus(int32_t dayuStatus) { DARABONBA_PTR_SET_VALUE(dayuStatus_, dayuStatus) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline int32_t domains() const { DARABONBA_PTR_GET_DEFAULT(domains_, 0) };
    inline DescAccountSummaryResponseBody& setDomains(int32_t domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };


    // enableTimes Field Functions 
    bool hasEnableTimes() const { return this->enableTimes_ != nullptr;};
    void deleteEnableTimes() { this->enableTimes_ = nullptr;};
    inline int32_t enableTimes() const { DARABONBA_PTR_GET_DEFAULT(enableTimes_, 0) };
    inline DescAccountSummaryResponseBody& setEnableTimes(int32_t enableTimes) { DARABONBA_PTR_SET_VALUE(enableTimes_, enableTimes) };


    // ipChannelType Field Functions 
    bool hasIpChannelType() const { return this->ipChannelType_ != nullptr;};
    void deleteIpChannelType() { this->ipChannelType_ = nullptr;};
    inline string ipChannelType() const { DARABONBA_PTR_GET_DEFAULT(ipChannelType_, "") };
    inline DescAccountSummaryResponseBody& setIpChannelType(string ipChannelType) { DARABONBA_PTR_SET_VALUE(ipChannelType_, ipChannelType) };


    // mailAddresses Field Functions 
    bool hasMailAddresses() const { return this->mailAddresses_ != nullptr;};
    void deleteMailAddresses() { this->mailAddresses_ = nullptr;};
    inline int32_t mailAddresses() const { DARABONBA_PTR_GET_DEFAULT(mailAddresses_, 0) };
    inline DescAccountSummaryResponseBody& setMailAddresses(int32_t mailAddresses) { DARABONBA_PTR_SET_VALUE(mailAddresses_, mailAddresses) };


    // maxQuotaLevel Field Functions 
    bool hasMaxQuotaLevel() const { return this->maxQuotaLevel_ != nullptr;};
    void deleteMaxQuotaLevel() { this->maxQuotaLevel_ = nullptr;};
    inline int32_t maxQuotaLevel() const { DARABONBA_PTR_GET_DEFAULT(maxQuotaLevel_, 0) };
    inline DescAccountSummaryResponseBody& setMaxQuotaLevel(int32_t maxQuotaLevel) { DARABONBA_PTR_SET_VALUE(maxQuotaLevel_, maxQuotaLevel) };


    // monthQuota Field Functions 
    bool hasMonthQuota() const { return this->monthQuota_ != nullptr;};
    void deleteMonthQuota() { this->monthQuota_ = nullptr;};
    inline int32_t monthQuota() const { DARABONBA_PTR_GET_DEFAULT(monthQuota_, 0) };
    inline DescAccountSummaryResponseBody& setMonthQuota(int32_t monthQuota) { DARABONBA_PTR_SET_VALUE(monthQuota_, monthQuota) };


    // quotaLevel Field Functions 
    bool hasQuotaLevel() const { return this->quotaLevel_ != nullptr;};
    void deleteQuotaLevel() { this->quotaLevel_ = nullptr;};
    inline int32_t quotaLevel() const { DARABONBA_PTR_GET_DEFAULT(quotaLevel_, 0) };
    inline DescAccountSummaryResponseBody& setQuotaLevel(int32_t quotaLevel) { DARABONBA_PTR_SET_VALUE(quotaLevel_, quotaLevel) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline int32_t receivers() const { DARABONBA_PTR_GET_DEFAULT(receivers_, 0) };
    inline DescAccountSummaryResponseBody& setReceivers(int32_t receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };


    // remainFreeQuota Field Functions 
    bool hasRemainFreeQuota() const { return this->remainFreeQuota_ != nullptr;};
    void deleteRemainFreeQuota() { this->remainFreeQuota_ = nullptr;};
    inline int32_t remainFreeQuota() const { DARABONBA_PTR_GET_DEFAULT(remainFreeQuota_, 0) };
    inline DescAccountSummaryResponseBody& setRemainFreeQuota(int32_t remainFreeQuota) { DARABONBA_PTR_SET_VALUE(remainFreeQuota_, remainFreeQuota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescAccountSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smsRecord Field Functions 
    bool hasSmsRecord() const { return this->smsRecord_ != nullptr;};
    void deleteSmsRecord() { this->smsRecord_ = nullptr;};
    inline int32_t smsRecord() const { DARABONBA_PTR_GET_DEFAULT(smsRecord_, 0) };
    inline DescAccountSummaryResponseBody& setSmsRecord(int32_t smsRecord) { DARABONBA_PTR_SET_VALUE(smsRecord_, smsRecord) };


    // smsSign Field Functions 
    bool hasSmsSign() const { return this->smsSign_ != nullptr;};
    void deleteSmsSign() { this->smsSign_ = nullptr;};
    inline int32_t smsSign() const { DARABONBA_PTR_GET_DEFAULT(smsSign_, 0) };
    inline DescAccountSummaryResponseBody& setSmsSign(int32_t smsSign) { DARABONBA_PTR_SET_VALUE(smsSign_, smsSign) };


    // smsTemplates Field Functions 
    bool hasSmsTemplates() const { return this->smsTemplates_ != nullptr;};
    void deleteSmsTemplates() { this->smsTemplates_ = nullptr;};
    inline int32_t smsTemplates() const { DARABONBA_PTR_GET_DEFAULT(smsTemplates_, 0) };
    inline DescAccountSummaryResponseBody& setSmsTemplates(int32_t smsTemplates) { DARABONBA_PTR_SET_VALUE(smsTemplates_, smsTemplates) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline int32_t tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, 0) };
    inline DescAccountSummaryResponseBody& setTags(int32_t tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline int32_t templates() const { DARABONBA_PTR_GET_DEFAULT(templates_, 0) };
    inline DescAccountSummaryResponseBody& setTemplates(int32_t templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline int32_t userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, 0) };
    inline DescAccountSummaryResponseBody& setUserStatus(int32_t userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // Daily quota
    std::shared_ptr<int32_t> dailyQuota_ = nullptr;
    // remaining amount of daily free quota
    std::shared_ptr<int32_t> dailyRemainFreeQuota_ = nullptr;
    // Dayu status (deprecated, retained for compatibility reasons.)
    std::shared_ptr<int32_t> dayuStatus_ = nullptr;
    // Number of domains
    std::shared_ptr<int32_t> domains_ = nullptr;
    // Effective time
    std::shared_ptr<int32_t> enableTimes_ = nullptr;
    std::shared_ptr<string> ipChannelType_ = nullptr;
    // Number of sending addresses
    std::shared_ptr<int32_t> mailAddresses_ = nullptr;
    // Maximum level
    std::shared_ptr<int32_t> maxQuotaLevel_ = nullptr;
    // Monthly quota
    std::shared_ptr<int32_t> monthQuota_ = nullptr;
    // Credit level
    std::shared_ptr<int32_t> quotaLevel_ = nullptr;
    // Number of recipients
    std::shared_ptr<int32_t> receivers_ = nullptr;
    // Remaining amount of total free quota
    std::shared_ptr<int32_t> remainFreeQuota_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Deprecated, retained for compatibility reasons.
    std::shared_ptr<int32_t> smsRecord_ = nullptr;
    // Deprecated, retained for compatibility reasons.
    std::shared_ptr<int32_t> smsSign_ = nullptr;
    // Deprecated, retained for compatibility reasons.
    std::shared_ptr<int32_t> smsTemplates_ = nullptr;
    // Number of tags
    std::shared_ptr<int32_t> tags_ = nullptr;
    // Number of templates
    std::shared_ptr<int32_t> templates_ = nullptr;
    // User status:
    // 1 Frozen
    // 2 In arrears
    // 4 Restricted from sending
    // 8 Logically deleted
    std::shared_ptr<int32_t> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
