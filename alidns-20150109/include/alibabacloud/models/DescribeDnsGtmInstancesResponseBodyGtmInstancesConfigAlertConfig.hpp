// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESRESPONSEBODYGTMINSTANCESCONFIGALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESRESPONSEBODYGTMINSTANCESCONFIGALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_TO_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(SmsNotice, smsNotice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
    };
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig() = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig(const DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig &) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig(DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig &&) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig() = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig& operator=(const DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig &) = default ;
    DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig& operator=(DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingtalkNotice_ == nullptr
        && return this->emailNotice_ == nullptr && return this->noticeType_ == nullptr && return this->smsNotice_ == nullptr; };
    // dingtalkNotice Field Functions 
    bool hasDingtalkNotice() const { return this->dingtalkNotice_ != nullptr;};
    void deleteDingtalkNotice() { this->dingtalkNotice_ = nullptr;};
    inline string dingtalkNotice() const { DARABONBA_PTR_GET_DEFAULT(dingtalkNotice_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig& setDingtalkNotice(string dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


    // emailNotice Field Functions 
    bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
    void deleteEmailNotice() { this->emailNotice_ = nullptr;};
    inline string emailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig& setEmailNotice(string emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline string noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // smsNotice Field Functions 
    bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
    void deleteSmsNotice() { this->smsNotice_ = nullptr;};
    inline string smsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, "") };
    inline DescribeDnsGtmInstancesResponseBodyGtmInstancesConfigAlertConfig& setSmsNotice(string smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


  protected:
    // Indicates whether DingTalk alert notifications are configured. Valid values:
    // 
    // *   true
    // *   false | null
    std::shared_ptr<string> dingtalkNotice_ = nullptr;
    // Indicates whether email notifications are configured. Valid values:
    // 
    // *   true
    // *   false | null
    std::shared_ptr<string> emailNotice_ = nullptr;
    // The type of the alert event. Valid values:
    // 
    // *   ADDR_ALERT: The address is unavailable.
    // *   ADDR_RESUME: The address becomes available.
    // *   ADDR_POOL_GROUP_UNAVAILABLE: The address pool set is unavailable.
    // *   ADDR_POOL_GROUP_AVAILABLE: The address pool set becomes available.
    // *   ACCESS_STRATEGY_POOL_GROUP_SWITCH: Switchover is triggered between the primary and secondary address pools.
    std::shared_ptr<string> noticeType_ = nullptr;
    // Indicates whether SMS notifications are configured. Valid values:
    // 
    // *   true
    // *   false | null
    std::shared_ptr<string> smsNotice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
