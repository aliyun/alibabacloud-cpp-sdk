// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMGLOBALALERTRESPONSEBODYALERTCONFIGALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMGLOBALALERTRESPONSEBODYALERTCONFIGALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_TO_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(SmsNotice, smsNotice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
    };
    DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig() = default ;
    DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig(const DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig &) = default ;
    DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig(DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig &&) = default ;
    DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig() = default ;
    DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig& operator=(const DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig &) = default ;
    DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig& operator=(DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingtalkNotice_ == nullptr
        && return this->emailNotice_ == nullptr && return this->noticeType_ == nullptr && return this->smsNotice_ == nullptr; };
    // dingtalkNotice Field Functions 
    bool hasDingtalkNotice() const { return this->dingtalkNotice_ != nullptr;};
    void deleteDingtalkNotice() { this->dingtalkNotice_ = nullptr;};
    inline bool dingtalkNotice() const { DARABONBA_PTR_GET_DEFAULT(dingtalkNotice_, false) };
    inline DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig& setDingtalkNotice(bool dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


    // emailNotice Field Functions 
    bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
    void deleteEmailNotice() { this->emailNotice_ = nullptr;};
    inline bool emailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, false) };
    inline DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig& setEmailNotice(bool emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline string noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
    inline DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // smsNotice Field Functions 
    bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
    void deleteSmsNotice() { this->smsNotice_ = nullptr;};
    inline bool smsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, false) };
    inline DescribeCloudGtmGlobalAlertResponseBodyAlertConfigAlertConfig& setSmsNotice(bool smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


  protected:
    // Indicates whether DingTalk notifications are configured. Valid values:
    // 
    // *   true: DingTalk notifications are configured. DingTalk notifications are sent when alerts are triggered.
    // *   false: DingTalk notifications are not configured.
    std::shared_ptr<bool> dingtalkNotice_ = nullptr;
    // Indicates whether email notifications are configured. Valid values:
    // 
    // *   true: Email notifications are configured. Emails are sent when alerts are triggered.
    // *   false: Email notifications are not configured.
    std::shared_ptr<bool> emailNotice_ = nullptr;
    // The type of the alert event. Valid values:
    // 
    // *   addr_alert: The address is unavailable.
    // *   addr_resume: The address becomes available.
    // *   addr_pool_unavailable: The address pool is unavailable.
    // *   addr_pool_available: The address pool becomes available.
    std::shared_ptr<string> noticeType_ = nullptr;
    // Indicates whether text message notifications are configured. Valid values:
    // 
    // *   true: Text message notifications are configured. Text messages are sent when alerts are triggered.
    // *   false: Text message notifications are not configured.
    // 
    // Only the China site (aliyun.com) supports text message notifications.
    std::shared_ptr<bool> smsNotice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
