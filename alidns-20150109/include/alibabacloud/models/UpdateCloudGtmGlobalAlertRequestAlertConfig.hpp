// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMGLOBALALERTREQUESTALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMGLOBALALERTREQUESTALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmGlobalAlertRequestAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmGlobalAlertRequestAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_TO_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(SmsNotice, smsNotice_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmGlobalAlertRequestAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
    };
    UpdateCloudGtmGlobalAlertRequestAlertConfig() = default ;
    UpdateCloudGtmGlobalAlertRequestAlertConfig(const UpdateCloudGtmGlobalAlertRequestAlertConfig &) = default ;
    UpdateCloudGtmGlobalAlertRequestAlertConfig(UpdateCloudGtmGlobalAlertRequestAlertConfig &&) = default ;
    UpdateCloudGtmGlobalAlertRequestAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmGlobalAlertRequestAlertConfig() = default ;
    UpdateCloudGtmGlobalAlertRequestAlertConfig& operator=(const UpdateCloudGtmGlobalAlertRequestAlertConfig &) = default ;
    UpdateCloudGtmGlobalAlertRequestAlertConfig& operator=(UpdateCloudGtmGlobalAlertRequestAlertConfig &&) = default ;
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
    inline UpdateCloudGtmGlobalAlertRequestAlertConfig& setDingtalkNotice(bool dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


    // emailNotice Field Functions 
    bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
    void deleteEmailNotice() { this->emailNotice_ = nullptr;};
    inline bool emailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, false) };
    inline UpdateCloudGtmGlobalAlertRequestAlertConfig& setEmailNotice(bool emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline string noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
    inline UpdateCloudGtmGlobalAlertRequestAlertConfig& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // smsNotice Field Functions 
    bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
    void deleteSmsNotice() { this->smsNotice_ = nullptr;};
    inline bool smsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, false) };
    inline UpdateCloudGtmGlobalAlertRequestAlertConfig& setSmsNotice(bool smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


  protected:
    // Specifies whether to configure DingTalk notifications. Valid values:
    // 
    // *   true: configures DingTalk notifications. DingTalk notifications are sent when alerts are triggered.
    // *   false: does not configure DingTalk notifications.
    std::shared_ptr<bool> dingtalkNotice_ = nullptr;
    // Specifies whether to configure email notifications. Valid values:
    // 
    // *   true: configures email notifications. Emails are sent when alerts are triggered.
    // *   false｜null: does not configure email notifications.
    std::shared_ptr<bool> emailNotice_ = nullptr;
    // The type of the alert event. Valid values:
    // 
    // *   addr_alert: The address is unavailable.
    // *   addr_resume: The address becomes available.
    // *   addr_pool_unavailable: The address pool is unavailable.
    // *   addr_pool_available: The address pool becomes available.
    std::shared_ptr<string> noticeType_ = nullptr;
    // Specifies whether to configure text message notifications. Valid values:
    // 
    // *   true: configures text message notifications. Text messages are sent when alerts are triggered.
    // *   false｜null: does not configure text message notifications.
    // 
    // Only the China site (aliyun.com) supports text message notifications.
    std::shared_ptr<bool> smsNotice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
