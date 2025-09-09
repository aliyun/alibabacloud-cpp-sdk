// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODYCONFIGALERTCONFIGALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODYCONFIGALERTCONFIGALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_TO_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(SmsNotice, smsNotice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
    };
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig() = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig(const DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig &) = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig(DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig &&) = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig() = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig& operator=(const DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig &) = default ;
    DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig& operator=(DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dingtalkNotice_ != nullptr
        && this->emailNotice_ != nullptr && this->noticeType_ != nullptr && this->smsNotice_ != nullptr; };
    // dingtalkNotice Field Functions 
    bool hasDingtalkNotice() const { return this->dingtalkNotice_ != nullptr;};
    void deleteDingtalkNotice() { this->dingtalkNotice_ = nullptr;};
    inline bool dingtalkNotice() const { DARABONBA_PTR_GET_DEFAULT(dingtalkNotice_, false) };
    inline DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig& setDingtalkNotice(bool dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


    // emailNotice Field Functions 
    bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
    void deleteEmailNotice() { this->emailNotice_ = nullptr;};
    inline bool emailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, false) };
    inline DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig& setEmailNotice(bool emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline string noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
    inline DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // smsNotice Field Functions 
    bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
    void deleteSmsNotice() { this->smsNotice_ = nullptr;};
    inline bool smsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, false) };
    inline DescribeDnsGtmInstanceResponseBodyConfigAlertConfigAlertConfig& setSmsNotice(bool smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


  protected:
    std::shared_ptr<bool> dingtalkNotice_ = nullptr;
    // Indicates whether email notification is configured. Valid values:
    // 
    // *   true: Email notification is configured.
    // *   false: Email notification is not configured. null: Email notification is not configured.
    std::shared_ptr<bool> emailNotice_ = nullptr;
    // The type of the alert event. Valid values:
    // 
    // *   ADDR_ALERT: The address is unavailable.
    // *   ADDR_RESUME: The address is restored and becomes available.
    // *   ADDR_POOL_GROUP_UNAVAILABLE: The address pool group is unavailable.
    // *   ADDR_POOL_GROUP_AVAILABLE: The address pool group is restored and becomes available.
    // *   ACCESS_STRATEGY_POOL_GROUP_SWITCH: Switchover is triggered between the primary and secondary address pools.
    // *   MONITOR_NODE_IP_CHANGE: The IP address of the monitoring node has changed.
    std::shared_ptr<string> noticeType_ = nullptr;
    // Indicates whether SMS notification is configured. Valid values:
    // 
    // *   true: SMS notification is configured.
    // *   false: SMS notification is not configured. null: SMS notification is not configured.
    std::shared_ptr<bool> smsNotice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
