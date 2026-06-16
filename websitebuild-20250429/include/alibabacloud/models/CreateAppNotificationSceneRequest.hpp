// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPNOTIFICATIONSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPNOTIFICATIONSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppNotificationSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppNotificationSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ChannelsJson, channelsJson_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EmailFieldsJson, emailFieldsJson_);
      DARABONBA_PTR_TO_JSON(EmailLimitJson, emailLimitJson_);
      DARABONBA_PTR_TO_JSON(EmailRecipientIdsJson, emailRecipientIdsJson_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PhoneRecipientIdsJson, phoneRecipientIdsJson_);
      DARABONBA_PTR_TO_JSON(SmsFieldsJson, smsFieldsJson_);
      DARABONBA_PTR_TO_JSON(SmsLimitJson, smsLimitJson_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TriggerEventsJson, triggerEventsJson_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppNotificationSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ChannelsJson, channelsJson_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EmailFieldsJson, emailFieldsJson_);
      DARABONBA_PTR_FROM_JSON(EmailLimitJson, emailLimitJson_);
      DARABONBA_PTR_FROM_JSON(EmailRecipientIdsJson, emailRecipientIdsJson_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PhoneRecipientIdsJson, phoneRecipientIdsJson_);
      DARABONBA_PTR_FROM_JSON(SmsFieldsJson, smsFieldsJson_);
      DARABONBA_PTR_FROM_JSON(SmsLimitJson, smsLimitJson_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TriggerEventsJson, triggerEventsJson_);
    };
    CreateAppNotificationSceneRequest() = default ;
    CreateAppNotificationSceneRequest(const CreateAppNotificationSceneRequest &) = default ;
    CreateAppNotificationSceneRequest(CreateAppNotificationSceneRequest &&) = default ;
    CreateAppNotificationSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppNotificationSceneRequest() = default ;
    CreateAppNotificationSceneRequest& operator=(const CreateAppNotificationSceneRequest &) = default ;
    CreateAppNotificationSceneRequest& operator=(CreateAppNotificationSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->channelsJson_ == nullptr && this->description_ == nullptr && this->emailFieldsJson_ == nullptr && this->emailLimitJson_ == nullptr && this->emailRecipientIdsJson_ == nullptr
        && this->name_ == nullptr && this->phoneRecipientIdsJson_ == nullptr && this->smsFieldsJson_ == nullptr && this->smsLimitJson_ == nullptr && this->tableName_ == nullptr
        && this->triggerEventsJson_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateAppNotificationSceneRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // channelsJson Field Functions 
    bool hasChannelsJson() const { return this->channelsJson_ != nullptr;};
    void deleteChannelsJson() { this->channelsJson_ = nullptr;};
    inline string getChannelsJson() const { DARABONBA_PTR_GET_DEFAULT(channelsJson_, "") };
    inline CreateAppNotificationSceneRequest& setChannelsJson(string channelsJson) { DARABONBA_PTR_SET_VALUE(channelsJson_, channelsJson) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppNotificationSceneRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // emailFieldsJson Field Functions 
    bool hasEmailFieldsJson() const { return this->emailFieldsJson_ != nullptr;};
    void deleteEmailFieldsJson() { this->emailFieldsJson_ = nullptr;};
    inline string getEmailFieldsJson() const { DARABONBA_PTR_GET_DEFAULT(emailFieldsJson_, "") };
    inline CreateAppNotificationSceneRequest& setEmailFieldsJson(string emailFieldsJson) { DARABONBA_PTR_SET_VALUE(emailFieldsJson_, emailFieldsJson) };


    // emailLimitJson Field Functions 
    bool hasEmailLimitJson() const { return this->emailLimitJson_ != nullptr;};
    void deleteEmailLimitJson() { this->emailLimitJson_ = nullptr;};
    inline string getEmailLimitJson() const { DARABONBA_PTR_GET_DEFAULT(emailLimitJson_, "") };
    inline CreateAppNotificationSceneRequest& setEmailLimitJson(string emailLimitJson) { DARABONBA_PTR_SET_VALUE(emailLimitJson_, emailLimitJson) };


    // emailRecipientIdsJson Field Functions 
    bool hasEmailRecipientIdsJson() const { return this->emailRecipientIdsJson_ != nullptr;};
    void deleteEmailRecipientIdsJson() { this->emailRecipientIdsJson_ = nullptr;};
    inline string getEmailRecipientIdsJson() const { DARABONBA_PTR_GET_DEFAULT(emailRecipientIdsJson_, "") };
    inline CreateAppNotificationSceneRequest& setEmailRecipientIdsJson(string emailRecipientIdsJson) { DARABONBA_PTR_SET_VALUE(emailRecipientIdsJson_, emailRecipientIdsJson) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppNotificationSceneRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phoneRecipientIdsJson Field Functions 
    bool hasPhoneRecipientIdsJson() const { return this->phoneRecipientIdsJson_ != nullptr;};
    void deletePhoneRecipientIdsJson() { this->phoneRecipientIdsJson_ = nullptr;};
    inline string getPhoneRecipientIdsJson() const { DARABONBA_PTR_GET_DEFAULT(phoneRecipientIdsJson_, "") };
    inline CreateAppNotificationSceneRequest& setPhoneRecipientIdsJson(string phoneRecipientIdsJson) { DARABONBA_PTR_SET_VALUE(phoneRecipientIdsJson_, phoneRecipientIdsJson) };


    // smsFieldsJson Field Functions 
    bool hasSmsFieldsJson() const { return this->smsFieldsJson_ != nullptr;};
    void deleteSmsFieldsJson() { this->smsFieldsJson_ = nullptr;};
    inline string getSmsFieldsJson() const { DARABONBA_PTR_GET_DEFAULT(smsFieldsJson_, "") };
    inline CreateAppNotificationSceneRequest& setSmsFieldsJson(string smsFieldsJson) { DARABONBA_PTR_SET_VALUE(smsFieldsJson_, smsFieldsJson) };


    // smsLimitJson Field Functions 
    bool hasSmsLimitJson() const { return this->smsLimitJson_ != nullptr;};
    void deleteSmsLimitJson() { this->smsLimitJson_ = nullptr;};
    inline string getSmsLimitJson() const { DARABONBA_PTR_GET_DEFAULT(smsLimitJson_, "") };
    inline CreateAppNotificationSceneRequest& setSmsLimitJson(string smsLimitJson) { DARABONBA_PTR_SET_VALUE(smsLimitJson_, smsLimitJson) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateAppNotificationSceneRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // triggerEventsJson Field Functions 
    bool hasTriggerEventsJson() const { return this->triggerEventsJson_ != nullptr;};
    void deleteTriggerEventsJson() { this->triggerEventsJson_ = nullptr;};
    inline string getTriggerEventsJson() const { DARABONBA_PTR_GET_DEFAULT(triggerEventsJson_, "") };
    inline CreateAppNotificationSceneRequest& setTriggerEventsJson(string triggerEventsJson) { DARABONBA_PTR_SET_VALUE(triggerEventsJson_, triggerEventsJson) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The notification channels in a JSON array string, such as ["sms","email"].
    shared_ptr<string> channelsJson_ {};
    // The description of the scenario.
    shared_ptr<string> description_ {};
    // The email notification fields in a JSON array string. A maximum of 10 fields are supported.
    shared_ptr<string> emailFieldsJson_ {};
    // The email sending limit in a JSON string, including the minInterval and dailyLimit fields.
    shared_ptr<string> emailLimitJson_ {};
    // The list of email recipient IDs in a JSON array string.
    shared_ptr<string> emailRecipientIdsJson_ {};
    // The name of the scenario.
    shared_ptr<string> name_ {};
    // The list of SMS recipient IDs in a JSON array string.
    shared_ptr<string> phoneRecipientIdsJson_ {};
    // The SMS notification fields in a JSON array string. A maximum of 3 fields are supported.
    shared_ptr<string> smsFieldsJson_ {};
    // The SMS sending limit in a JSON string, including the minInterval and dailyLimit fields.
    shared_ptr<string> smsLimitJson_ {};
    // The name of the monitored data table.
    shared_ptr<string> tableName_ {};
    // The trigger events in a JSON array string, such as ["INSERT","UPDATE","DELETE"].
    shared_ptr<string> triggerEventsJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
