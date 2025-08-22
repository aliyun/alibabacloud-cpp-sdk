// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEANNOTIFICATIONPOLICIESNOTIFYTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEANNOTIFICATIONPOLICIESNOTIFYTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(EmailContent, emailContent_);
      DARABONBA_PTR_TO_JSON(EmailRecoverContent, emailRecoverContent_);
      DARABONBA_PTR_TO_JSON(EmailRecoverTitle, emailRecoverTitle_);
      DARABONBA_PTR_TO_JSON(EmailTitle, emailTitle_);
      DARABONBA_PTR_TO_JSON(RobotContent, robotContent_);
      DARABONBA_PTR_TO_JSON(SmsContent, smsContent_);
      DARABONBA_PTR_TO_JSON(SmsRecoverContent, smsRecoverContent_);
      DARABONBA_PTR_TO_JSON(TtsContent, ttsContent_);
      DARABONBA_PTR_TO_JSON(TtsRecoverContent, ttsRecoverContent_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(EmailContent, emailContent_);
      DARABONBA_PTR_FROM_JSON(EmailRecoverContent, emailRecoverContent_);
      DARABONBA_PTR_FROM_JSON(EmailRecoverTitle, emailRecoverTitle_);
      DARABONBA_PTR_FROM_JSON(EmailTitle, emailTitle_);
      DARABONBA_PTR_FROM_JSON(RobotContent, robotContent_);
      DARABONBA_PTR_FROM_JSON(SmsContent, smsContent_);
      DARABONBA_PTR_FROM_JSON(SmsRecoverContent, smsRecoverContent_);
      DARABONBA_PTR_FROM_JSON(TtsContent, ttsContent_);
      DARABONBA_PTR_FROM_JSON(TtsRecoverContent, ttsRecoverContent_);
    };
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate() = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate(const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate &) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate(ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate &&) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate() = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& operator=(const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate &) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& operator=(ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->emailContent_ != nullptr
        && this->emailRecoverContent_ != nullptr && this->emailRecoverTitle_ != nullptr && this->emailTitle_ != nullptr && this->robotContent_ != nullptr && this->smsContent_ != nullptr
        && this->smsRecoverContent_ != nullptr && this->ttsContent_ != nullptr && this->ttsRecoverContent_ != nullptr; };
    // emailContent Field Functions 
    bool hasEmailContent() const { return this->emailContent_ != nullptr;};
    void deleteEmailContent() { this->emailContent_ = nullptr;};
    inline string emailContent() const { DARABONBA_PTR_GET_DEFAULT(emailContent_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setEmailContent(string emailContent) { DARABONBA_PTR_SET_VALUE(emailContent_, emailContent) };


    // emailRecoverContent Field Functions 
    bool hasEmailRecoverContent() const { return this->emailRecoverContent_ != nullptr;};
    void deleteEmailRecoverContent() { this->emailRecoverContent_ = nullptr;};
    inline string emailRecoverContent() const { DARABONBA_PTR_GET_DEFAULT(emailRecoverContent_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setEmailRecoverContent(string emailRecoverContent) { DARABONBA_PTR_SET_VALUE(emailRecoverContent_, emailRecoverContent) };


    // emailRecoverTitle Field Functions 
    bool hasEmailRecoverTitle() const { return this->emailRecoverTitle_ != nullptr;};
    void deleteEmailRecoverTitle() { this->emailRecoverTitle_ = nullptr;};
    inline string emailRecoverTitle() const { DARABONBA_PTR_GET_DEFAULT(emailRecoverTitle_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setEmailRecoverTitle(string emailRecoverTitle) { DARABONBA_PTR_SET_VALUE(emailRecoverTitle_, emailRecoverTitle) };


    // emailTitle Field Functions 
    bool hasEmailTitle() const { return this->emailTitle_ != nullptr;};
    void deleteEmailTitle() { this->emailTitle_ = nullptr;};
    inline string emailTitle() const { DARABONBA_PTR_GET_DEFAULT(emailTitle_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setEmailTitle(string emailTitle) { DARABONBA_PTR_SET_VALUE(emailTitle_, emailTitle) };


    // robotContent Field Functions 
    bool hasRobotContent() const { return this->robotContent_ != nullptr;};
    void deleteRobotContent() { this->robotContent_ = nullptr;};
    inline string robotContent() const { DARABONBA_PTR_GET_DEFAULT(robotContent_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setRobotContent(string robotContent) { DARABONBA_PTR_SET_VALUE(robotContent_, robotContent) };


    // smsContent Field Functions 
    bool hasSmsContent() const { return this->smsContent_ != nullptr;};
    void deleteSmsContent() { this->smsContent_ = nullptr;};
    inline string smsContent() const { DARABONBA_PTR_GET_DEFAULT(smsContent_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setSmsContent(string smsContent) { DARABONBA_PTR_SET_VALUE(smsContent_, smsContent) };


    // smsRecoverContent Field Functions 
    bool hasSmsRecoverContent() const { return this->smsRecoverContent_ != nullptr;};
    void deleteSmsRecoverContent() { this->smsRecoverContent_ = nullptr;};
    inline string smsRecoverContent() const { DARABONBA_PTR_GET_DEFAULT(smsRecoverContent_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setSmsRecoverContent(string smsRecoverContent) { DARABONBA_PTR_SET_VALUE(smsRecoverContent_, smsRecoverContent) };


    // ttsContent Field Functions 
    bool hasTtsContent() const { return this->ttsContent_ != nullptr;};
    void deleteTtsContent() { this->ttsContent_ = nullptr;};
    inline string ttsContent() const { DARABONBA_PTR_GET_DEFAULT(ttsContent_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setTtsContent(string ttsContent) { DARABONBA_PTR_SET_VALUE(ttsContent_, ttsContent) };


    // ttsRecoverContent Field Functions 
    bool hasTtsRecoverContent() const { return this->ttsRecoverContent_ != nullptr;};
    void deleteTtsRecoverContent() { this->ttsRecoverContent_ = nullptr;};
    inline string ttsRecoverContent() const { DARABONBA_PTR_GET_DEFAULT(ttsRecoverContent_, "") };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesNotifyTemplate& setTtsRecoverContent(string ttsRecoverContent) { DARABONBA_PTR_SET_VALUE(ttsRecoverContent_, ttsRecoverContent) };


  protected:
    // The content of the alert notification sent by email.
    std::shared_ptr<string> emailContent_ = nullptr;
    // The content of the alert resolution notification sent by email.
    std::shared_ptr<string> emailRecoverContent_ = nullptr;
    // The title of the alert resolution notification sent by email.
    std::shared_ptr<string> emailRecoverTitle_ = nullptr;
    // The title of the alert notification sent by email.
    std::shared_ptr<string> emailTitle_ = nullptr;
    // The content of the alert notification sent by an IM chatbot.
    std::shared_ptr<string> robotContent_ = nullptr;
    // The content of the alert notification sent by text message.
    std::shared_ptr<string> smsContent_ = nullptr;
    // The content of the alert resolution notification sent by text message.
    std::shared_ptr<string> smsRecoverContent_ = nullptr;
    // The content of the alert notification sent by phone.
    std::shared_ptr<string> ttsContent_ = nullptr;
    // The content of the alert resolution notification sent by phone.
    std::shared_ptr<string> ttsRecoverContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
