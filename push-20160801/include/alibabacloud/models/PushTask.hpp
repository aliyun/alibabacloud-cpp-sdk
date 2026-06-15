// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASK_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTask& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, PushTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    PushTask() = default ;
    PushTask(const PushTask &) = default ;
    PushTask(PushTask &&) = default ;
    PushTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTask() = default ;
    PushTask& operator=(const PushTask &) = default ;
    PushTask& operator=(PushTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Target : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Target& obj) { 
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Target& obj) { 
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Target() = default ;
      Target(const Target &) = default ;
      Target(Target &&) = default ;
      Target(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Target() = default ;
      Target& operator=(const Target &) = default ;
      Target& operator=(Target &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->platform_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Target& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Target& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Target& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The platform type. This is an optional parameter.
      shared_ptr<string> platform_ {};
      // The push target type.
      // 
      // >Notice: 
      // 
      // The `MassPushV2` batch push API and `CONTINUOUS_PUSH` continuous push support only the following three target types:
      // 
      // - `DEVICE`
      // 
      // - `ACCOUNT`
      // 
      // - `ALIAS`
      shared_ptr<string> type_ {};
      // Set the push target based on `Target.Type`. Separate multiple targets with commas. The target types and their values are described as follows:
      // 
      // > - `DEVICE`: Device ID, such as deviceid1,deviceid2. You can specify up to 1,000 device IDs.
      // >
      // > - `ACCOUNT`: Account ID, such as account1,account2. You can specify up to 1,000 account IDs.
      // >
      // > - `ALIAS`: Alias, such as alias1,alias2. You can specify up to 1,000 aliases.
      // >
      // > - `TAG`: Supports one or more tags. For more information about the format, see [Tag format specifications](https://help.aliyun.com/document_detail/434847.html).
      // >
      // > - `ALL`: Push to all devices. You do not need to set a value. Pushing to all devices may increase costs. Use this feature with caution.
      shared_ptr<string> value_ {};
    };

    class Options : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Options& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
        DARABONBA_PTR_TO_JSON(Sms, sms_);
        DARABONBA_PTR_TO_JSON(Trim, trim_);
        DARABONBA_PTR_TO_JSON(UseChannels, useChannels_);
      };
      friend void from_json(const Darabonba::Json& j, Options& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
        DARABONBA_PTR_FROM_JSON(Sms, sms_);
        DARABONBA_PTR_FROM_JSON(Trim, trim_);
        DARABONBA_PTR_FROM_JSON(UseChannels, useChannels_);
      };
      Options() = default ;
      Options(const Options &) = default ;
      Options(Options &&) = default ;
      Options(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Options() = default ;
      Options& operator=(const Options &) = default ;
      Options& operator=(Options &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sms& obj) { 
          DARABONBA_PTR_TO_JSON(DelaySecs, delaySecs_);
          DARABONBA_PTR_TO_JSON(Params, params_);
          DARABONBA_PTR_TO_JSON(SendPolicy, sendPolicy_);
          DARABONBA_PTR_TO_JSON(SignName, signName_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, Sms& obj) { 
          DARABONBA_PTR_FROM_JSON(DelaySecs, delaySecs_);
          DARABONBA_PTR_FROM_JSON(Params, params_);
          DARABONBA_PTR_FROM_JSON(SendPolicy, sendPolicy_);
          DARABONBA_PTR_FROM_JSON(SignName, signName_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        };
        Sms() = default ;
        Sms(const Sms &) = default ;
        Sms(Sms &&) = default ;
        Sms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sms() = default ;
        Sms& operator=(const Sms &) = default ;
        Sms& operator=(Sms &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->delaySecs_ == nullptr
        && this->params_ == nullptr && this->sendPolicy_ == nullptr && this->signName_ == nullptr && this->templateName_ == nullptr; };
        // delaySecs Field Functions 
        bool hasDelaySecs() const { return this->delaySecs_ != nullptr;};
        void deleteDelaySecs() { this->delaySecs_ = nullptr;};
        inline int64_t getDelaySecs() const { DARABONBA_PTR_GET_DEFAULT(delaySecs_, 0L) };
        inline Sms& setDelaySecs(int64_t delaySecs) { DARABONBA_PTR_SET_VALUE(delaySecs_, delaySecs) };


        // params Field Functions 
        bool hasParams() const { return this->params_ != nullptr;};
        void deleteParams() { this->params_ = nullptr;};
        inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
        inline Sms& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


        // sendPolicy Field Functions 
        bool hasSendPolicy() const { return this->sendPolicy_ != nullptr;};
        void deleteSendPolicy() { this->sendPolicy_ = nullptr;};
        inline string getSendPolicy() const { DARABONBA_PTR_GET_DEFAULT(sendPolicy_, "") };
        inline Sms& setSendPolicy(string sendPolicy) { DARABONBA_PTR_SET_VALUE(sendPolicy_, sendPolicy) };


        // signName Field Functions 
        bool hasSignName() const { return this->signName_ != nullptr;};
        void deleteSignName() { this->signName_ = nullptr;};
        inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
        inline Sms& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Sms& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        // The delay time to trigger the text message, in seconds.
        // 
        // This must be set if you use SMS filter interaction. We recommend setting it to 15 seconds or more, with a maximum of 3 days, to avoid duplicate text messages and pushes.
        // 
        // > When you use SMS filter interaction, the ExpireTime parameter is invalid. The notification expiration time is calculated based on the DelaySecs parameter. The expiration time is the current time plus the DelaySecs time.
        shared_ptr<int64_t> delaySecs_ {};
        // Key-value pairs for the variables in the SMS template.
        shared_ptr<string> params_ {};
        // The SMS sending policy.
        shared_ptr<string> sendPolicy_ {};
        // The SMS signature.
        shared_ptr<string> signName_ {};
        // The SMS template name. You can get this from the SMS template management interface. It is the name assigned by the system, not the name set by the developer.
        shared_ptr<string> templateName_ {};
      };

      virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->jobKey_ == nullptr && this->messageId_ == nullptr && this->pushTime_ == nullptr && this->sms_ == nullptr && this->trim_ == nullptr
        && this->useChannels_ == nullptr; };
      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Options& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // jobKey Field Functions 
      bool hasJobKey() const { return this->jobKey_ != nullptr;};
      void deleteJobKey() { this->jobKey_ = nullptr;};
      inline string getJobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
      inline Options& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline int64_t getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, 0L) };
      inline Options& setMessageId(int64_t messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // pushTime Field Functions 
      bool hasPushTime() const { return this->pushTime_ != nullptr;};
      void deletePushTime() { this->pushTime_ = nullptr;};
      inline string getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
      inline Options& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


      // sms Field Functions 
      bool hasSms() const { return this->sms_ != nullptr;};
      void deleteSms() { this->sms_ = nullptr;};
      inline const Options::Sms & getSms() const { DARABONBA_PTR_GET_CONST(sms_, Options::Sms) };
      inline Options::Sms getSms() { DARABONBA_PTR_GET(sms_, Options::Sms) };
      inline Options& setSms(const Options::Sms & sms) { DARABONBA_PTR_SET_VALUE(sms_, sms) };
      inline Options& setSms(Options::Sms && sms) { DARABONBA_PTR_SET_RVALUE(sms_, sms) };


      // trim Field Functions 
      bool hasTrim() const { return this->trim_ != nullptr;};
      void deleteTrim() { this->trim_ = nullptr;};
      inline bool getTrim() const { DARABONBA_PTR_GET_DEFAULT(trim_, false) };
      inline Options& setTrim(bool trim) { DARABONBA_PTR_SET_VALUE(trim_, trim) };


      // useChannels Field Functions 
      bool hasUseChannels() const { return this->useChannels_ != nullptr;};
      void deleteUseChannels() { this->useChannels_ = nullptr;};
      inline string getUseChannels() const { DARABONBA_PTR_GET_DEFAULT(useChannels_, "") };
      inline Options& setUseChannels(string useChannels) { DARABONBA_PTR_SET_VALUE(useChannels_, useChannels) };


    protected:
      // Sets the expiration time of the message. After this time, the message will no longer be sent. The maximum retention period is 72 hours.
      // 
      // > - This uses the ISO 8601 standard and UTC time. The format is YYYY-MM-DDThh:mm:ssZ.
      // >
      // > - The expiration time must satisfy: ExpireTime > PushTime + 3 seconds (3 seconds is a buffer for network and system delays).
      // >
      // > - Recommendation: The expiration time for a single push should be at least 1 minute. For a push to all or a batch push, it should be at least 10 minutes.
      // 
      // >Notice: 
      // 
      // For pass-through messages, if you do not set an expiration time, the message is only sent to online devices. If the device is offline, the message is discarded.
      shared_ptr<string> expireTime_ {};
      // A custom identifier for the push task. If JobKey is not empty, this field will be included in the receipt log. To view receipt logs, see [Receipt logs](https://help.aliyun.com/document_detail/434651.html).
      shared_ptr<string> jobKey_ {};
      // A unique ID used to identify the message. This is only valid when the `Action` parameter is `CONTINUOUS_PUSH`.
      shared_ptr<int64_t> messageId_ {};
      // Specifies the sending time of the message, up to 7 days in the future. This is only valid when the `Action` parameter is `SCHEDULED_PUSH`.
      // 
      // > This uses the ISO 8601 standard and UTC time. The format is yyyy-MM-ddTHH:mm:ssZ.
      shared_ptr<string> pushTime_ {};
      // Resends the message as a text message.
      // 
      // > Currently, this is only supported for `Android` and `HarmonyOS` devices.
      shared_ptr<Options::Sms> sms_ {};
      // Specifies whether to automatically truncate oversized titles and content.
      // 
      // > This is only supported for vendor channels that have explicit limits on title and content length. It does not apply to channels like APNs, Huawei, and Honor, which do not limit title and content length but only the total request body size.
      shared_ptr<bool> trim_ {};
      // Specifies the sending channel. Valid values are:
      // 
      // - `accs`: Alibaba Cloud proprietary channel
      // 
      // - `huawei`: Huawei channel
      // 
      // - `honor`: Honor channel
      // 
      // - `xiaomi`: Xiaomi channel
      // 
      // - `oppo`: OPPO channel
      // 
      // - `vivo`: vivo channel
      // 
      // - `meizu`: Meizu channel
      // 
      // - `fcm`: Google Firebase channel (HTTP v1 API)
      // 
      // - `apns`: APNs channel
      // 
      // - `harmony`: HarmonyOS channel
      // 
      // > * If this parameter is not configured, all channels can be used.
      // >
      // > * If this parameter is configured, only the channels specified in the parameter are used.
      // >
      // > * If the configured channel conflicts with the sending policy (for example, iOS notifications only go through the APNs channel, but this parameter does not include \\`apns\\`), the message is not sent.
      shared_ptr<string> useChannels_ {};
    };

    class Notification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Notification& obj) { 
        DARABONBA_PTR_TO_JSON(Android, android_);
        DARABONBA_PTR_TO_JSON(Body, body_);
        DARABONBA_PTR_TO_JSON(Hmos, hmos_);
        DARABONBA_PTR_TO_JSON(Ios, ios_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Notification& obj) { 
        DARABONBA_PTR_FROM_JSON(Android, android_);
        DARABONBA_PTR_FROM_JSON(Body, body_);
        DARABONBA_PTR_FROM_JSON(Hmos, hmos_);
        DARABONBA_PTR_FROM_JSON(Ios, ios_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Notification() = default ;
      Notification(const Notification &) = default ;
      Notification(Notification &&) = default ;
      Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Notification() = default ;
      Notification& operator=(const Notification &) = default ;
      Notification& operator=(Notification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ios : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ios& obj) { 
          DARABONBA_PTR_TO_JSON(ApnsEnv, apnsEnv_);
          DARABONBA_PTR_TO_JSON(Badge, badge_);
          DARABONBA_PTR_TO_JSON(BadgeAutoIncrement, badgeAutoIncrement_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CollapseId, collapseId_);
          DARABONBA_PTR_TO_JSON(ExtParameters, extParameters_);
          DARABONBA_PTR_TO_JSON(InterruptionLevel, interruptionLevel_);
          DARABONBA_PTR_TO_JSON(LiveActivity, liveActivity_);
          DARABONBA_PTR_TO_JSON(Music, music_);
          DARABONBA_PTR_TO_JSON(Mutable, mutable_);
          DARABONBA_PTR_TO_JSON(RelevanceScore, relevanceScore_);
          DARABONBA_PTR_TO_JSON(Silent, silent_);
          DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
          DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
        };
        friend void from_json(const Darabonba::Json& j, Ios& obj) { 
          DARABONBA_PTR_FROM_JSON(ApnsEnv, apnsEnv_);
          DARABONBA_PTR_FROM_JSON(Badge, badge_);
          DARABONBA_PTR_FROM_JSON(BadgeAutoIncrement, badgeAutoIncrement_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CollapseId, collapseId_);
          DARABONBA_PTR_FROM_JSON(ExtParameters, extParameters_);
          DARABONBA_PTR_FROM_JSON(InterruptionLevel, interruptionLevel_);
          DARABONBA_PTR_FROM_JSON(LiveActivity, liveActivity_);
          DARABONBA_PTR_FROM_JSON(Music, music_);
          DARABONBA_PTR_FROM_JSON(Mutable, mutable_);
          DARABONBA_PTR_FROM_JSON(RelevanceScore, relevanceScore_);
          DARABONBA_PTR_FROM_JSON(Silent, silent_);
          DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
          DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
        };
        Ios() = default ;
        Ios(const Ios &) = default ;
        Ios(Ios &&) = default ;
        Ios(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ios() = default ;
        Ios& operator=(const Ios &) = default ;
        Ios& operator=(Ios &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LiveActivity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LiveActivity& obj) { 
            DARABONBA_PTR_TO_JSON(Attributes, attributes_);
            DARABONBA_PTR_TO_JSON(AttributesType, attributesType_);
            DARABONBA_PTR_TO_JSON(ContentState, contentState_);
            DARABONBA_PTR_TO_JSON(DismissalDate, dismissalDate_);
            DARABONBA_PTR_TO_JSON(Event, event_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(StaleDate, staleDate_);
          };
          friend void from_json(const Darabonba::Json& j, LiveActivity& obj) { 
            DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
            DARABONBA_PTR_FROM_JSON(AttributesType, attributesType_);
            DARABONBA_PTR_FROM_JSON(ContentState, contentState_);
            DARABONBA_PTR_FROM_JSON(DismissalDate, dismissalDate_);
            DARABONBA_PTR_FROM_JSON(Event, event_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(StaleDate, staleDate_);
          };
          LiveActivity() = default ;
          LiveActivity(const LiveActivity &) = default ;
          LiveActivity(LiveActivity &&) = default ;
          LiveActivity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LiveActivity() = default ;
          LiveActivity& operator=(const LiveActivity &) = default ;
          LiveActivity& operator=(LiveActivity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributes_ == nullptr
        && this->attributesType_ == nullptr && this->contentState_ == nullptr && this->dismissalDate_ == nullptr && this->event_ == nullptr && this->id_ == nullptr
        && this->staleDate_ == nullptr; };
          // attributes Field Functions 
          bool hasAttributes() const { return this->attributes_ != nullptr;};
          void deleteAttributes() { this->attributes_ = nullptr;};
          inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
          inline LiveActivity& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


          // attributesType Field Functions 
          bool hasAttributesType() const { return this->attributesType_ != nullptr;};
          void deleteAttributesType() { this->attributesType_ = nullptr;};
          inline string getAttributesType() const { DARABONBA_PTR_GET_DEFAULT(attributesType_, "") };
          inline LiveActivity& setAttributesType(string attributesType) { DARABONBA_PTR_SET_VALUE(attributesType_, attributesType) };


          // contentState Field Functions 
          bool hasContentState() const { return this->contentState_ != nullptr;};
          void deleteContentState() { this->contentState_ = nullptr;};
          inline string getContentState() const { DARABONBA_PTR_GET_DEFAULT(contentState_, "") };
          inline LiveActivity& setContentState(string contentState) { DARABONBA_PTR_SET_VALUE(contentState_, contentState) };


          // dismissalDate Field Functions 
          bool hasDismissalDate() const { return this->dismissalDate_ != nullptr;};
          void deleteDismissalDate() { this->dismissalDate_ = nullptr;};
          inline int64_t getDismissalDate() const { DARABONBA_PTR_GET_DEFAULT(dismissalDate_, 0L) };
          inline LiveActivity& setDismissalDate(int64_t dismissalDate) { DARABONBA_PTR_SET_VALUE(dismissalDate_, dismissalDate) };


          // event Field Functions 
          bool hasEvent() const { return this->event_ != nullptr;};
          void deleteEvent() { this->event_ = nullptr;};
          inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
          inline LiveActivity& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline LiveActivity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // staleDate Field Functions 
          bool hasStaleDate() const { return this->staleDate_ != nullptr;};
          void deleteStaleDate() { this->staleDate_ = nullptr;};
          inline int64_t getStaleDate() const { DARABONBA_PTR_GET_DEFAULT(staleDate_, 0L) };
          inline LiveActivity& setStaleDate(int64_t staleDate) { DARABONBA_PTR_SET_VALUE(staleDate_, staleDate) };


        protected:
          // Static pass-through parameters for iOS Live Activities push. They are used to transmit immutable business identification information.
          // 
          // > This is required when `Event` is \\`start\\`.
          shared_ptr<string> attributes_ {};
          // The type of Live Activity to start.
          // 
          // > This is required when `Event` is \\`start\\`.
          shared_ptr<string> attributesType_ {};
          // Dynamic pass-through parameters for a Live Activity. They contain real-time updatable status information and changing data.
          // 
          // > - Avoid overly frequent updates. An interval of 5 seconds or more is recommended.
          // >
          // > - Update multiple fields in a batch to reduce the number of pushes.
          // >
          // > - Consider the user experience and avoid screen flickering.
          // >
          // > - Must be a valid JSON string.
          shared_ptr<string> contentState_ {};
          // Sets the retention period for a finished Live Activity on the lock screen. This lets users view information after the activity has ended. It is a Unix timestamp in seconds.
          shared_ptr<int64_t> dismissalDate_ {};
          // Starts, updates, or ends a Live Activity.
          shared_ptr<string> event_ {};
          // The unique identifier for a Live Activity. It associates the activity instance on the device with the push target on the server.
          // 
          // >Notice: 
          // 
          // - This `ID` must be the same as the `forActivityId` parameter of the `registerLiveActivityPushToken` method in the client SDK.
          // 
          // - The server uses this `ID` to locate the specific activity instance during a push.
          shared_ptr<string> id_ {};
          // Sets the expiration timestamp for the content of an iOS Live Activity. It is a Unix timestamp in seconds.
          // 
          // > - After the specified time is reached, the system automatically marks the activity as expired.
          // >
          // > - Expired activities are removed from the Live Activity and the lock screen.
          // >
          // > - This prevents outdated information from occupying the user interface for a long time.
          shared_ptr<int64_t> staleDate_ {};
        };

        virtual bool empty() const override { return this->apnsEnv_ == nullptr
        && this->badge_ == nullptr && this->badgeAutoIncrement_ == nullptr && this->category_ == nullptr && this->collapseId_ == nullptr && this->extParameters_ == nullptr
        && this->interruptionLevel_ == nullptr && this->liveActivity_ == nullptr && this->music_ == nullptr && this->mutable_ == nullptr && this->relevanceScore_ == nullptr
        && this->silent_ == nullptr && this->subtitle_ == nullptr && this->threadId_ == nullptr; };
        // apnsEnv Field Functions 
        bool hasApnsEnv() const { return this->apnsEnv_ != nullptr;};
        void deleteApnsEnv() { this->apnsEnv_ = nullptr;};
        inline string getApnsEnv() const { DARABONBA_PTR_GET_DEFAULT(apnsEnv_, "") };
        inline Ios& setApnsEnv(string apnsEnv) { DARABONBA_PTR_SET_VALUE(apnsEnv_, apnsEnv) };


        // badge Field Functions 
        bool hasBadge() const { return this->badge_ != nullptr;};
        void deleteBadge() { this->badge_ = nullptr;};
        inline int32_t getBadge() const { DARABONBA_PTR_GET_DEFAULT(badge_, 0) };
        inline Ios& setBadge(int32_t badge) { DARABONBA_PTR_SET_VALUE(badge_, badge) };


        // badgeAutoIncrement Field Functions 
        bool hasBadgeAutoIncrement() const { return this->badgeAutoIncrement_ != nullptr;};
        void deleteBadgeAutoIncrement() { this->badgeAutoIncrement_ = nullptr;};
        inline bool getBadgeAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(badgeAutoIncrement_, false) };
        inline Ios& setBadgeAutoIncrement(bool badgeAutoIncrement) { DARABONBA_PTR_SET_VALUE(badgeAutoIncrement_, badgeAutoIncrement) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Ios& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // collapseId Field Functions 
        bool hasCollapseId() const { return this->collapseId_ != nullptr;};
        void deleteCollapseId() { this->collapseId_ = nullptr;};
        inline string getCollapseId() const { DARABONBA_PTR_GET_DEFAULT(collapseId_, "") };
        inline Ios& setCollapseId(string collapseId) { DARABONBA_PTR_SET_VALUE(collapseId_, collapseId) };


        // extParameters Field Functions 
        bool hasExtParameters() const { return this->extParameters_ != nullptr;};
        void deleteExtParameters() { this->extParameters_ = nullptr;};
        inline string getExtParameters() const { DARABONBA_PTR_GET_DEFAULT(extParameters_, "") };
        inline Ios& setExtParameters(string extParameters) { DARABONBA_PTR_SET_VALUE(extParameters_, extParameters) };


        // interruptionLevel Field Functions 
        bool hasInterruptionLevel() const { return this->interruptionLevel_ != nullptr;};
        void deleteInterruptionLevel() { this->interruptionLevel_ = nullptr;};
        inline string getInterruptionLevel() const { DARABONBA_PTR_GET_DEFAULT(interruptionLevel_, "") };
        inline Ios& setInterruptionLevel(string interruptionLevel) { DARABONBA_PTR_SET_VALUE(interruptionLevel_, interruptionLevel) };


        // liveActivity Field Functions 
        bool hasLiveActivity() const { return this->liveActivity_ != nullptr;};
        void deleteLiveActivity() { this->liveActivity_ = nullptr;};
        inline const Ios::LiveActivity & getLiveActivity() const { DARABONBA_PTR_GET_CONST(liveActivity_, Ios::LiveActivity) };
        inline Ios::LiveActivity getLiveActivity() { DARABONBA_PTR_GET(liveActivity_, Ios::LiveActivity) };
        inline Ios& setLiveActivity(const Ios::LiveActivity & liveActivity) { DARABONBA_PTR_SET_VALUE(liveActivity_, liveActivity) };
        inline Ios& setLiveActivity(Ios::LiveActivity && liveActivity) { DARABONBA_PTR_SET_RVALUE(liveActivity_, liveActivity) };


        // music Field Functions 
        bool hasMusic() const { return this->music_ != nullptr;};
        void deleteMusic() { this->music_ = nullptr;};
        inline string getMusic() const { DARABONBA_PTR_GET_DEFAULT(music_, "") };
        inline Ios& setMusic(string music) { DARABONBA_PTR_SET_VALUE(music_, music) };


        // mutable Field Functions 
        bool hasMutable() const { return this->mutable_ != nullptr;};
        void deleteMutable() { this->mutable_ = nullptr;};
        inline bool getMutable() const { DARABONBA_PTR_GET_DEFAULT(mutable_, false) };
        inline Ios& setMutable(bool _mutable) { DARABONBA_PTR_SET_VALUE(mutable_, _mutable) };


        // relevanceScore Field Functions 
        bool hasRelevanceScore() const { return this->relevanceScore_ != nullptr;};
        void deleteRelevanceScore() { this->relevanceScore_ = nullptr;};
        inline double getRelevanceScore() const { DARABONBA_PTR_GET_DEFAULT(relevanceScore_, 0.0) };
        inline Ios& setRelevanceScore(double relevanceScore) { DARABONBA_PTR_SET_VALUE(relevanceScore_, relevanceScore) };


        // silent Field Functions 
        bool hasSilent() const { return this->silent_ != nullptr;};
        void deleteSilent() { this->silent_ = nullptr;};
        inline bool getSilent() const { DARABONBA_PTR_GET_DEFAULT(silent_, false) };
        inline Ios& setSilent(bool silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


        // subtitle Field Functions 
        bool hasSubtitle() const { return this->subtitle_ != nullptr;};
        void deleteSubtitle() { this->subtitle_ = nullptr;};
        inline string getSubtitle() const { DARABONBA_PTR_GET_DEFAULT(subtitle_, "") };
        inline Ios& setSubtitle(string subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };


        // threadId Field Functions 
        bool hasThreadId() const { return this->threadId_ != nullptr;};
        void deleteThreadId() { this->threadId_ = nullptr;};
        inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
        inline Ios& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


      protected:
        // iOS notifications are sent through the Apple Push Notification service (APNs) center. You must specify the environment information. This is an optional parameter. The default is the production environment.
        // 
        // - DEV: Development environment, for applications installed and tested directly from Xcode.
        // 
        // - PRODUCT: Production environment, for applications distributed through the App Store, TestFlight, Ad Hoc, and enterprise channels.
        shared_ptr<string> apnsEnv_ {};
        // The iOS application badge.
        shared_ptr<int32_t> badge_ {};
        // Specifies whether to enable the badge auto-increment feature. This is an optional parameter. The default value is false.
        // 
        // > - This parameter cannot be used with the badge setting parameter.
        // >
        // > - The badge auto-increment feature is maintained by the Alibaba Cloud push server, which counts the badges for each device. You must use SDK version 1.9.5 or later and actively sync the badge number to the server through the SDK.
        shared_ptr<bool> badgeAutoIncrement_ {};
        // Specifies the category identifier for an iOS notification. This defines the notification\\"s interactive behavior and display style.
        // 
        // > - The category must be pre-registered in the app to take effect.
        // >
        // > - Different categories can define different sets of actions.
        shared_ptr<string> category_ {};
        // A unique identifier that controls notification merging. Notifications with the same identifier are overwritten.
        shared_ptr<string> collapseId_ {};
        // Custom extension properties for iOS notifications.
        // 
        // > - The parameter must be passed in a standard JSON Map format. An incorrect format causes parsing to fail.
        shared_ptr<string> extParameters_ {};
        // The interruption level. This is an optional parameter. Valid values are:
        // 
        // - `passive`: The system adds the notification to the notification list without lighting up the screen or playing a sound.
        // 
        // - `active`: The system displays the notification immediately, lights up the screen, and can play a sound.
        // 
        // - `time-sensitive`: The system presents the notification immediately, lights up the screen, and can play a sound, but does not override system notification controls.
        // 
        // - `critical`: The system displays the notification immediately, lights up the screen, and plays a sound, bypassing the mute switch.
        shared_ptr<string> interruptionLevel_ {};
        // Live Activities parameter object.
        // 
        // >Notice: 
        // 
        // - Live Activities push only supports pushing to a single device of the `DEVICE` type.
        // 
        // - When you push to Live Activities, you can leave the title and body parameters empty.
        shared_ptr<Ios::LiveActivity> liveActivity_ {};
        // The iOS notification sound. Specify the name of the audio file stored in the app bundle or the sandbox Library/Sounds directory. For more information, see [How to set the notification sound for iOS push](https://help.aliyun.com/document_detail/48906.html).
        // 
        // > - If you specify an empty string (""), the notification is silent.
        // >
        // > - If this parameter is not set, the default value is \\`default\\`, which is the system prompt sound.
        shared_ptr<string> music_ {};
        // Enables extended notifications and controls whether iOS notifications support processing by the Notification Service Extension.
        // 
        // > - This must be set to true when you send a silent notification.
        // >
        // > - The extension processing time cannot exceed 30 seconds.
        // >
        // > - A timeout causes the notification to display the original content.
        // >
        // > - You must add a Notification Service Extension to your application.
        shared_ptr<bool> mutable_ {};
        // The relevance score of the notification message. It is used to control the priority and display policy of the notification.
        shared_ptr<double> relevanceScore_ {};
        // Controls whether to enable silent push mode.
        // 
        // > - When you send a silent notification, you can leave the `title` and `body` parameters empty.
        shared_ptr<bool> silent_ {};
        // The subtitle of the iOS notification.
        shared_ptr<string> subtitle_ {};
        // The thread identifier for iOS notification grouping. It is used to classify and collapse related notifications.
        // 
        // > - Notifications with the same thread-id are automatically grouped.
        // >
        // > - Multiple related notifications are collapsed into one notification group.
        // >
        // > - Users can expand the group to view all notifications within it.
        shared_ptr<string> threadId_ {};
      };

      class Hmos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Hmos& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(BadgeAddNum, badgeAddNum_);
          DARABONBA_PTR_TO_JSON(BadgeSetNum, badgeSetNum_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(ExtParameters, extParameters_);
          DARABONBA_PTR_TO_JSON(ExtensionExtraData, extensionExtraData_);
          DARABONBA_PTR_TO_JSON(ExtensionPush, extensionPush_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(InboxContent, inboxContent_);
          DARABONBA_PTR_TO_JSON(LiveViewPayload, liveViewPayload_);
          DARABONBA_PTR_TO_JSON(NotifyId, notifyId_);
          DARABONBA_PTR_TO_JSON(ReceiptId, receiptId_);
          DARABONBA_PTR_TO_JSON(RenderStyle, renderStyle_);
          DARABONBA_PTR_TO_JSON(SlotType, slotType_);
          DARABONBA_PTR_TO_JSON(Sound, sound_);
          DARABONBA_PTR_TO_JSON(SoundDuration, soundDuration_);
          DARABONBA_PTR_TO_JSON(TestMessage, testMessage_);
          DARABONBA_PTR_TO_JSON(Uri, uri_);
        };
        friend void from_json(const Darabonba::Json& j, Hmos& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(BadgeAddNum, badgeAddNum_);
          DARABONBA_PTR_FROM_JSON(BadgeSetNum, badgeSetNum_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(ExtParameters, extParameters_);
          DARABONBA_PTR_FROM_JSON(ExtensionExtraData, extensionExtraData_);
          DARABONBA_PTR_FROM_JSON(ExtensionPush, extensionPush_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(InboxContent, inboxContent_);
          DARABONBA_PTR_FROM_JSON(LiveViewPayload, liveViewPayload_);
          DARABONBA_PTR_FROM_JSON(NotifyId, notifyId_);
          DARABONBA_PTR_FROM_JSON(ReceiptId, receiptId_);
          DARABONBA_PTR_FROM_JSON(RenderStyle, renderStyle_);
          DARABONBA_PTR_FROM_JSON(SlotType, slotType_);
          DARABONBA_PTR_FROM_JSON(Sound, sound_);
          DARABONBA_PTR_FROM_JSON(SoundDuration, soundDuration_);
          DARABONBA_PTR_FROM_JSON(TestMessage, testMessage_);
          DARABONBA_PTR_FROM_JSON(Uri, uri_);
        };
        Hmos() = default ;
        Hmos(const Hmos &) = default ;
        Hmos(Hmos &&) = default ;
        Hmos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Hmos() = default ;
        Hmos& operator=(const Hmos &) = default ;
        Hmos& operator=(Hmos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->badgeAddNum_ == nullptr && this->badgeSetNum_ == nullptr && this->category_ == nullptr && this->extParameters_ == nullptr && this->extensionExtraData_ == nullptr
        && this->extensionPush_ == nullptr && this->imageUrl_ == nullptr && this->inboxContent_ == nullptr && this->liveViewPayload_ == nullptr && this->notifyId_ == nullptr
        && this->receiptId_ == nullptr && this->renderStyle_ == nullptr && this->slotType_ == nullptr && this->sound_ == nullptr && this->soundDuration_ == nullptr
        && this->testMessage_ == nullptr && this->uri_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Hmos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // badgeAddNum Field Functions 
        bool hasBadgeAddNum() const { return this->badgeAddNum_ != nullptr;};
        void deleteBadgeAddNum() { this->badgeAddNum_ = nullptr;};
        inline int32_t getBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(badgeAddNum_, 0) };
        inline Hmos& setBadgeAddNum(int32_t badgeAddNum) { DARABONBA_PTR_SET_VALUE(badgeAddNum_, badgeAddNum) };


        // badgeSetNum Field Functions 
        bool hasBadgeSetNum() const { return this->badgeSetNum_ != nullptr;};
        void deleteBadgeSetNum() { this->badgeSetNum_ = nullptr;};
        inline int32_t getBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(badgeSetNum_, 0) };
        inline Hmos& setBadgeSetNum(int32_t badgeSetNum) { DARABONBA_PTR_SET_VALUE(badgeSetNum_, badgeSetNum) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Hmos& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // extParameters Field Functions 
        bool hasExtParameters() const { return this->extParameters_ != nullptr;};
        void deleteExtParameters() { this->extParameters_ = nullptr;};
        inline string getExtParameters() const { DARABONBA_PTR_GET_DEFAULT(extParameters_, "") };
        inline Hmos& setExtParameters(string extParameters) { DARABONBA_PTR_SET_VALUE(extParameters_, extParameters) };


        // extensionExtraData Field Functions 
        bool hasExtensionExtraData() const { return this->extensionExtraData_ != nullptr;};
        void deleteExtensionExtraData() { this->extensionExtraData_ = nullptr;};
        inline string getExtensionExtraData() const { DARABONBA_PTR_GET_DEFAULT(extensionExtraData_, "") };
        inline Hmos& setExtensionExtraData(string extensionExtraData) { DARABONBA_PTR_SET_VALUE(extensionExtraData_, extensionExtraData) };


        // extensionPush Field Functions 
        bool hasExtensionPush() const { return this->extensionPush_ != nullptr;};
        void deleteExtensionPush() { this->extensionPush_ = nullptr;};
        inline bool getExtensionPush() const { DARABONBA_PTR_GET_DEFAULT(extensionPush_, false) };
        inline Hmos& setExtensionPush(bool extensionPush) { DARABONBA_PTR_SET_VALUE(extensionPush_, extensionPush) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Hmos& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // inboxContent Field Functions 
        bool hasInboxContent() const { return this->inboxContent_ != nullptr;};
        void deleteInboxContent() { this->inboxContent_ = nullptr;};
        inline const vector<string> & getInboxContent() const { DARABONBA_PTR_GET_CONST(inboxContent_, vector<string>) };
        inline vector<string> getInboxContent() { DARABONBA_PTR_GET(inboxContent_, vector<string>) };
        inline Hmos& setInboxContent(const vector<string> & inboxContent) { DARABONBA_PTR_SET_VALUE(inboxContent_, inboxContent) };
        inline Hmos& setInboxContent(vector<string> && inboxContent) { DARABONBA_PTR_SET_RVALUE(inboxContent_, inboxContent) };


        // liveViewPayload Field Functions 
        bool hasLiveViewPayload() const { return this->liveViewPayload_ != nullptr;};
        void deleteLiveViewPayload() { this->liveViewPayload_ = nullptr;};
        inline string getLiveViewPayload() const { DARABONBA_PTR_GET_DEFAULT(liveViewPayload_, "") };
        inline Hmos& setLiveViewPayload(string liveViewPayload) { DARABONBA_PTR_SET_VALUE(liveViewPayload_, liveViewPayload) };


        // notifyId Field Functions 
        bool hasNotifyId() const { return this->notifyId_ != nullptr;};
        void deleteNotifyId() { this->notifyId_ = nullptr;};
        inline int32_t getNotifyId() const { DARABONBA_PTR_GET_DEFAULT(notifyId_, 0) };
        inline Hmos& setNotifyId(int32_t notifyId) { DARABONBA_PTR_SET_VALUE(notifyId_, notifyId) };


        // receiptId Field Functions 
        bool hasReceiptId() const { return this->receiptId_ != nullptr;};
        void deleteReceiptId() { this->receiptId_ = nullptr;};
        inline string getReceiptId() const { DARABONBA_PTR_GET_DEFAULT(receiptId_, "") };
        inline Hmos& setReceiptId(string receiptId) { DARABONBA_PTR_SET_VALUE(receiptId_, receiptId) };


        // renderStyle Field Functions 
        bool hasRenderStyle() const { return this->renderStyle_ != nullptr;};
        void deleteRenderStyle() { this->renderStyle_ = nullptr;};
        inline string getRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(renderStyle_, "") };
        inline Hmos& setRenderStyle(string renderStyle) { DARABONBA_PTR_SET_VALUE(renderStyle_, renderStyle) };


        // slotType Field Functions 
        bool hasSlotType() const { return this->slotType_ != nullptr;};
        void deleteSlotType() { this->slotType_ = nullptr;};
        inline string getSlotType() const { DARABONBA_PTR_GET_DEFAULT(slotType_, "") };
        inline Hmos& setSlotType(string slotType) { DARABONBA_PTR_SET_VALUE(slotType_, slotType) };


        // sound Field Functions 
        bool hasSound() const { return this->sound_ != nullptr;};
        void deleteSound() { this->sound_ = nullptr;};
        inline string getSound() const { DARABONBA_PTR_GET_DEFAULT(sound_, "") };
        inline Hmos& setSound(string sound) { DARABONBA_PTR_SET_VALUE(sound_, sound) };


        // soundDuration Field Functions 
        bool hasSoundDuration() const { return this->soundDuration_ != nullptr;};
        void deleteSoundDuration() { this->soundDuration_ = nullptr;};
        inline int32_t getSoundDuration() const { DARABONBA_PTR_GET_DEFAULT(soundDuration_, 0) };
        inline Hmos& setSoundDuration(int32_t soundDuration) { DARABONBA_PTR_SET_VALUE(soundDuration_, soundDuration) };


        // testMessage Field Functions 
        bool hasTestMessage() const { return this->testMessage_ != nullptr;};
        void deleteTestMessage() { this->testMessage_ = nullptr;};
        inline bool getTestMessage() const { DARABONBA_PTR_GET_DEFAULT(testMessage_, false) };
        inline Hmos& setTestMessage(bool testMessage) { DARABONBA_PTR_SET_VALUE(testMessage_, testMessage) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline Hmos& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        // Specifies the action corresponding to the ability of an in-app page.
        // 
        // > For more information, see [ClickAction.action](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section152462191216) on the official HarmonyOS website.
        shared_ptr<string> action_ {};
        // The HarmonyOS application badge cumulative number.
        // 
        // > - This is supported starting from HarmonyOS SDK 1.2.0.
        // >
        // > - See the description of the [addNum field](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section266310382145) for HarmonyOS badges.
        shared_ptr<int32_t> badgeAddNum_ {};
        // The HarmonyOS application badge number setting.
        // 
        // > - See the description of the [setNum field](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section266310382145) for HarmonyOS badges.
        // >
        // > - This is supported starting from HarmonyOS SDK 1.2.0.
        shared_ptr<int32_t> badgeSetNum_ {};
        // The notification message category. This is an optional parameter. The default category is `MARKETING`.
        // 
        // > After you apply for the right to self-classify notification messages, this parameter is used to identify the message type. Different notification message types affect how messages are displayed and how users are reminded. For more information, see [Notification.category](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the official HarmonyOS website.
        shared_ptr<string> category_ {};
        // Sets custom extension properties for the notification message. This is used to pass additional business data.
        // 
        // > The parameter must be passed in a standard JSON Map format. An incorrect format causes parsing to fail.
        shared_ptr<string> extParameters_ {};
        // Extra data for the notification extension message.
        // 
        // > - This is valid when sending a HarmonyOS notification extension message.
        // >
        // > - It is conceptually equivalent to the extraData field of a HarmonyOS notification extension message. For a specific definition, see the HarmonyOS [ExtensionPayload](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section161192514234) description.
        // >
        // > - This is supported starting from HarmonyOS SDK 1.2.0.
        shared_ptr<string> extensionExtraData_ {};
        // Enables the HarmonyOS notification extension.
        // 
        // > - You must first apply for permission on the official HarmonyOS website to send notification extension messages. For related content, see the [HarmonyOS documentation](https://developer.huawei.com/consumer/cn/doc/harmonyos-guides-V5/push-send-extend-noti-V5) on sending notification extension messages.
        // >
        // > - This is supported starting from HarmonyOS SDK 1.2.0.
        shared_ptr<bool> extensionPush_ {};
        // The URL for the large icon on the right side of the notification. The URL must use the HTTPS protocol.
        // 
        // > - Supported image formats are png, jpg, jpeg, heif, gif, and bmp. The image dimensions (length × width) must be less than 25,000 pixels.
        // >
        // > - For more information, see [Notification.image](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the official HarmonyOS website.
        shared_ptr<string> imageUrl_ {};
        // When `RenderStyle` is `MULTI_LINE`, you must fill in this field to define the content for the multi-line text style. It supports up to 3 lines of content.
        shared_ptr<vector<string>> inboxContent_ {};
        // The JSON string of the HarmonyOS Live Window data structure [LiveViewPayload](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V13/push-scenariozed-api-request-param-V13#section66881469306). For developer integration, see the document [HarmonyOS Live Window Push Guide](https://help.aliyun.com/document_detail/2982112.html).
        shared_ptr<string> liveViewPayload_ {};
        // Specifies the unique identifier (notifyId) for each message when it is displayed in the notification bar. If not provided, the push service automatically generates a unique identifier. Different notification messages can use the same notifyId to allow new messages to overwrite old ones. For more information, see [Notification.notifyId](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the official HarmonyOS website.
        shared_ptr<int32_t> notifyId_ {};
        // The receipt ID for the HarmonyOS channel. This ID can be found in the receipt parameter settings on the HarmonyOS channel push operations platform.
        // 
        // > - If the default receipt configuration on the HarmonyOS channel push operations platform is the Alibaba Cloud receipt, you do not need to provide this. If not, we recommend that you first configure the default HarmonyOS channel receipt ID in the Alibaba Cloud EMAS Mobile Push console.
        // >
        // > - For more information, see [pushOptions.receiptId](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section418321011212) on the official HarmonyOS website.
        shared_ptr<string> receiptId_ {};
        // The notification message style. This is an optional parameter. The default is a normal notification.
        shared_ptr<string> renderStyle_ {};
        // Uses the specified type of notification channel.
        // 
        // > - This is only valid for Alibaba Cloud\\"s proprietary channels.
        // >
        // > - For more information, see [SlotType](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/js-apis-notificationmanager-V5#slottype) on the official HarmonyOS website.
        shared_ptr<string> slotType_ {};
        // The HarmonyOS custom ringtone file name.
        shared_ptr<string> sound_ {};
        // The duration of the custom message notification ringtone in seconds. The range is [1, 60]. If the ringtone duration is too short, it will loop.
        shared_ptr<int32_t> soundDuration_ {};
        // Enables test messages.
        // 
        // > - For more information, see the HarmonyOS push parameter [TestMessage](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section418321011212).
        shared_ptr<bool> testMessage_ {};
        // The URI corresponding to the ability of an in-app page.
        // 
        // > - If there are multiple abilities, specify the action and URI for each ability separately. The system prioritizes using the action to find the corresponding in-app page.
        // >
        // > - For more information, see [ClickAction.uri](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section152462191216) on the official HarmonyOS website.
        shared_ptr<string> uri_ {};
      };

      class Android : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Android& obj) { 
          DARABONBA_PTR_TO_JSON(BadgeActivity, badgeActivity_);
          DARABONBA_PTR_TO_JSON(BadgeAddNum, badgeAddNum_);
          DARABONBA_PTR_TO_JSON(BadgeSetNum, badgeSetNum_);
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(ExtParameters, extParameters_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(InboxContent, inboxContent_);
          DARABONBA_PTR_TO_JSON(Music, music_);
          DARABONBA_PTR_TO_JSON(NotifyId, notifyId_);
          DARABONBA_PTR_TO_JSON(Options, options_);
          DARABONBA_PTR_TO_JSON(PictureUrl, pictureUrl_);
          DARABONBA_PTR_TO_JSON(RenderStyle, renderStyle_);
          DARABONBA_PTR_TO_JSON(TestMessage, testMessage_);
          DARABONBA_PTR_TO_JSON(VendorChannelActivity, vendorChannelActivity_);
        };
        friend void from_json(const Darabonba::Json& j, Android& obj) { 
          DARABONBA_PTR_FROM_JSON(BadgeActivity, badgeActivity_);
          DARABONBA_PTR_FROM_JSON(BadgeAddNum, badgeAddNum_);
          DARABONBA_PTR_FROM_JSON(BadgeSetNum, badgeSetNum_);
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(ExtParameters, extParameters_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(InboxContent, inboxContent_);
          DARABONBA_PTR_FROM_JSON(Music, music_);
          DARABONBA_PTR_FROM_JSON(NotifyId, notifyId_);
          DARABONBA_PTR_FROM_JSON(Options, options_);
          DARABONBA_PTR_FROM_JSON(PictureUrl, pictureUrl_);
          DARABONBA_PTR_FROM_JSON(RenderStyle, renderStyle_);
          DARABONBA_PTR_FROM_JSON(TestMessage, testMessage_);
          DARABONBA_PTR_FROM_JSON(VendorChannelActivity, vendorChannelActivity_);
        };
        Android() = default ;
        Android(const Android &) = default ;
        Android(Android &&) = default ;
        Android(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Android() = default ;
        Android& operator=(const Android &) = default ;
        Android& operator=(Android &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Options : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Options& obj) { 
            DARABONBA_PTR_TO_JSON(Accs, accs_);
            DARABONBA_PTR_TO_JSON(Honor, honor_);
            DARABONBA_PTR_TO_JSON(Huawei, huawei_);
            DARABONBA_PTR_TO_JSON(Meizu, meizu_);
            DARABONBA_PTR_TO_JSON(Oppo, oppo_);
            DARABONBA_PTR_TO_JSON(Vivo, vivo_);
            DARABONBA_PTR_TO_JSON(Xiaomi, xiaomi_);
          };
          friend void from_json(const Darabonba::Json& j, Options& obj) { 
            DARABONBA_PTR_FROM_JSON(Accs, accs_);
            DARABONBA_PTR_FROM_JSON(Honor, honor_);
            DARABONBA_PTR_FROM_JSON(Huawei, huawei_);
            DARABONBA_PTR_FROM_JSON(Meizu, meizu_);
            DARABONBA_PTR_FROM_JSON(Oppo, oppo_);
            DARABONBA_PTR_FROM_JSON(Vivo, vivo_);
            DARABONBA_PTR_FROM_JSON(Xiaomi, xiaomi_);
          };
          Options() = default ;
          Options(const Options &) = default ;
          Options(Options &&) = default ;
          Options(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Options() = default ;
          Options& operator=(const Options &) = default ;
          Options& operator=(Options &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Xiaomi : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Xiaomi& obj) { 
              DARABONBA_PTR_TO_JSON(Channel, channel_);
              DARABONBA_PTR_TO_JSON(FocusParam, focusParam_);
              DARABONBA_PTR_TO_JSON(FocusPics, focusPics_);
              DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
              DARABONBA_PTR_TO_JSON(TemplateParams, templateParams_);
            };
            friend void from_json(const Darabonba::Json& j, Xiaomi& obj) { 
              DARABONBA_PTR_FROM_JSON(Channel, channel_);
              DARABONBA_PTR_FROM_JSON(FocusParam, focusParam_);
              DARABONBA_PTR_FROM_JSON(FocusPics, focusPics_);
              DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
              DARABONBA_PTR_FROM_JSON(TemplateParams, templateParams_);
            };
            Xiaomi() = default ;
            Xiaomi(const Xiaomi &) = default ;
            Xiaomi(Xiaomi &&) = default ;
            Xiaomi(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Xiaomi() = default ;
            Xiaomi& operator=(const Xiaomi &) = default ;
            Xiaomi& operator=(Xiaomi &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->channel_ == nullptr
        && this->focusParam_ == nullptr && this->focusPics_ == nullptr && this->templateId_ == nullptr && this->templateParams_ == nullptr; };
            // channel Field Functions 
            bool hasChannel() const { return this->channel_ != nullptr;};
            void deleteChannel() { this->channel_ = nullptr;};
            inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
            inline Xiaomi& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


            // focusParam Field Functions 
            bool hasFocusParam() const { return this->focusParam_ != nullptr;};
            void deleteFocusParam() { this->focusParam_ = nullptr;};
            inline string getFocusParam() const { DARABONBA_PTR_GET_DEFAULT(focusParam_, "") };
            inline Xiaomi& setFocusParam(string focusParam) { DARABONBA_PTR_SET_VALUE(focusParam_, focusParam) };


            // focusPics Field Functions 
            bool hasFocusPics() const { return this->focusPics_ != nullptr;};
            void deleteFocusPics() { this->focusPics_ = nullptr;};
            inline string getFocusPics() const { DARABONBA_PTR_GET_DEFAULT(focusPics_, "") };
            inline Xiaomi& setFocusPics(string focusPics) { DARABONBA_PTR_SET_VALUE(focusPics_, focusPics) };


            // templateId Field Functions 
            bool hasTemplateId() const { return this->templateId_ != nullptr;};
            void deleteTemplateId() { this->templateId_ = nullptr;};
            inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
            inline Xiaomi& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


            // templateParams Field Functions 
            bool hasTemplateParams() const { return this->templateParams_ != nullptr;};
            void deleteTemplateParams() { this->templateParams_ = nullptr;};
            inline string getTemplateParams() const { DARABONBA_PTR_GET_DEFAULT(templateParams_, "") };
            inline Xiaomi& setTemplateParams(string templateParams) { DARABONBA_PTR_SET_VALUE(templateParams_, templateParams) };


          protected:
            // Sets the channelId for the Xiaomi notification type. You must apply for this on the Xiaomi platform. For more information, see: [Application link](https://dev.mi.com/console/doc/detail?pId=2422#_4).
            // 
            // > A single application can apply for a maximum of 8 channels on the Xiaomi channel. Plan accordingly.
            shared_ptr<string> channel_ {};
            // The JSON string of the Xiaomi Super Island data structure [miui.focus.param](https://dev.mi.com/xiaomihyperos/documentation/detail?pId=2131). For developer integration, see the document [Xiaomi Super Island Push Guide](https://help.aliyun.com/zh/document_detail/3037956.html).
            shared_ptr<string> focusParam_ {};
            // The JSON string of the Xiaomi Super Island data image [miui.focus.pic_xxx](https://dev.mi.com/xiaomihyperos/documentation/detail?pId=2131). For developer integration, see the document [Xiaomi Super Island Push Guide](https://help.aliyun.com/zh/document_detail/3037956.html).
            shared_ptr<string> focusPics_ {};
            shared_ptr<string> templateId_ {};
            shared_ptr<string> templateParams_ {};
          };

          class Vivo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Vivo& obj) { 
              DARABONBA_PTR_TO_JSON(Category, category_);
              DARABONBA_PTR_TO_JSON(Importance, importance_);
              DARABONBA_PTR_TO_JSON(LiveMessage, liveMessage_);
              DARABONBA_PTR_TO_JSON(ReceiptId, receiptId_);
            };
            friend void from_json(const Darabonba::Json& j, Vivo& obj) { 
              DARABONBA_PTR_FROM_JSON(Category, category_);
              DARABONBA_PTR_FROM_JSON(Importance, importance_);
              DARABONBA_PTR_FROM_JSON(LiveMessage, liveMessage_);
              DARABONBA_PTR_FROM_JSON(ReceiptId, receiptId_);
            };
            Vivo() = default ;
            Vivo(const Vivo &) = default ;
            Vivo(Vivo &&) = default ;
            Vivo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Vivo() = default ;
            Vivo& operator=(const Vivo &) = default ;
            Vivo& operator=(Vivo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->category_ == nullptr
        && this->importance_ == nullptr && this->liveMessage_ == nullptr && this->receiptId_ == nullptr; };
            // category Field Functions 
            bool hasCategory() const { return this->category_ != nullptr;};
            void deleteCategory() { this->category_ = nullptr;};
            inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
            inline Vivo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


            // importance Field Functions 
            bool hasImportance() const { return this->importance_ != nullptr;};
            void deleteImportance() { this->importance_ = nullptr;};
            inline int32_t getImportance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
            inline Vivo& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


            // liveMessage Field Functions 
            bool hasLiveMessage() const { return this->liveMessage_ != nullptr;};
            void deleteLiveMessage() { this->liveMessage_ = nullptr;};
            inline string getLiveMessage() const { DARABONBA_PTR_GET_DEFAULT(liveMessage_, "") };
            inline Vivo& setLiveMessage(string liveMessage) { DARABONBA_PTR_SET_VALUE(liveMessage_, liveMessage) };


            // receiptId Field Functions 
            bool hasReceiptId() const { return this->receiptId_ != nullptr;};
            void deleteReceiptId() { this->receiptId_ = nullptr;};
            inline string getReceiptId() const { DARABONBA_PTR_GET_DEFAULT(receiptId_, "") };
            inline Vivo& setReceiptId(string receiptId) { DARABONBA_PTR_SET_VALUE(receiptId_, receiptId) };


          protected:
            // vivo classifies messages into two categories for management: system messages and operational messages.
            // 
            // **System messages:**
            // 
            // - IM: Instant messages
            // 
            // - ACCOUNT: Account and asset
            // 
            // - TODO: To-do list
            // 
            // - DEVICE_REMINDER: Device information
            // 
            // - ORDER: Order and logistics
            // 
            // - SUBSCRIPTION: Subscription reminder
            // 
            // **Operational messages:**
            // 
            // - NEWS: News
            // 
            // - CONTENT: Content recommendation
            // 
            // - MARKETING: Operational activity
            // 
            // - SOCIAL: Social dynamics
            // 
            // For more information, see [vivo classification description](https://dev.vivo.com.cn/documentCenter/doc/359#s-ef3qugc3).
            shared_ptr<string> category_ {};
            // Sets the vivo notification message classification. Valid values are:
            // 
            // - `0`: Operational message (default)
            // 
            // - `1`: System message
            // 
            // > We recommend using `Category` for notification classification. You must apply for this on the vivo platform. For more information, see: [Application link](https://dev.vivo.com.cn/documentCenter/doc/359).
            shared_ptr<int32_t> importance_ {};
            // The JSON string of the vivo Atomic Island data structure [liveMessage](https://dev.vivo.com.cn/documentCenter/doc/896#s-fdagzbd4). For developer integration, see the document [vivo Atomic Island Push Guide](https://help.aliyun.com/zh/document_detail/3030718.html).
            shared_ptr<string> liveMessage_ {};
            // The message receipt identifier for the vivo vendor push channel. It is used to receive push result callback notifications.
            // 
            // > - Location: vivo Open Platform → Push Service → Application Information → Receipt Configuration
            // >
            // > - Recommendation: First, configure the default receipt ID in the Alibaba Cloud EMAS console.
            // >
            // > - Condition: This must be configured only if the default receipt on the vivo platform is not the Alibaba Cloud receipt.
            shared_ptr<string> receiptId_ {};
          };

          class Oppo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Oppo& obj) { 
              DARABONBA_PTR_TO_JSON(Category, category_);
              DARABONBA_PTR_TO_JSON(DeleteIntentData, deleteIntentData_);
              DARABONBA_PTR_TO_JSON(IntelligentIntent, intelligentIntent_);
              DARABONBA_PTR_TO_JSON(NotifyLevel, notifyLevel_);
              DARABONBA_PTR_TO_JSON(PrivateContentParameters, privateContentParameters_);
              DARABONBA_PTR_TO_JSON(PrivateMsgTemplateId, privateMsgTemplateId_);
              DARABONBA_PTR_TO_JSON(PrivateTitleParameters, privateTitleParameters_);
            };
            friend void from_json(const Darabonba::Json& j, Oppo& obj) { 
              DARABONBA_PTR_FROM_JSON(Category, category_);
              DARABONBA_PTR_FROM_JSON(DeleteIntentData, deleteIntentData_);
              DARABONBA_PTR_FROM_JSON(IntelligentIntent, intelligentIntent_);
              DARABONBA_PTR_FROM_JSON(NotifyLevel, notifyLevel_);
              DARABONBA_PTR_FROM_JSON(PrivateContentParameters, privateContentParameters_);
              DARABONBA_PTR_FROM_JSON(PrivateMsgTemplateId, privateMsgTemplateId_);
              DARABONBA_PTR_FROM_JSON(PrivateTitleParameters, privateTitleParameters_);
            };
            Oppo() = default ;
            Oppo(const Oppo &) = default ;
            Oppo(Oppo &&) = default ;
            Oppo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Oppo() = default ;
            Oppo& operator=(const Oppo &) = default ;
            Oppo& operator=(Oppo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->category_ == nullptr
        && this->deleteIntentData_ == nullptr && this->intelligentIntent_ == nullptr && this->notifyLevel_ == nullptr && this->privateContentParameters_ == nullptr && this->privateMsgTemplateId_ == nullptr
        && this->privateTitleParameters_ == nullptr; };
            // category Field Functions 
            bool hasCategory() const { return this->category_ != nullptr;};
            void deleteCategory() { this->category_ = nullptr;};
            inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
            inline Oppo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


            // deleteIntentData Field Functions 
            bool hasDeleteIntentData() const { return this->deleteIntentData_ != nullptr;};
            void deleteDeleteIntentData() { this->deleteIntentData_ = nullptr;};
            inline string getDeleteIntentData() const { DARABONBA_PTR_GET_DEFAULT(deleteIntentData_, "") };
            inline Oppo& setDeleteIntentData(string deleteIntentData) { DARABONBA_PTR_SET_VALUE(deleteIntentData_, deleteIntentData) };


            // intelligentIntent Field Functions 
            bool hasIntelligentIntent() const { return this->intelligentIntent_ != nullptr;};
            void deleteIntelligentIntent() { this->intelligentIntent_ = nullptr;};
            inline string getIntelligentIntent() const { DARABONBA_PTR_GET_DEFAULT(intelligentIntent_, "") };
            inline Oppo& setIntelligentIntent(string intelligentIntent) { DARABONBA_PTR_SET_VALUE(intelligentIntent_, intelligentIntent) };


            // notifyLevel Field Functions 
            bool hasNotifyLevel() const { return this->notifyLevel_ != nullptr;};
            void deleteNotifyLevel() { this->notifyLevel_ = nullptr;};
            inline int64_t getNotifyLevel() const { DARABONBA_PTR_GET_DEFAULT(notifyLevel_, 0L) };
            inline Oppo& setNotifyLevel(int64_t notifyLevel) { DARABONBA_PTR_SET_VALUE(notifyLevel_, notifyLevel) };


            // privateContentParameters Field Functions 
            bool hasPrivateContentParameters() const { return this->privateContentParameters_ != nullptr;};
            void deletePrivateContentParameters() { this->privateContentParameters_ = nullptr;};
            inline string getPrivateContentParameters() const { DARABONBA_PTR_GET_DEFAULT(privateContentParameters_, "") };
            inline Oppo& setPrivateContentParameters(string privateContentParameters) { DARABONBA_PTR_SET_VALUE(privateContentParameters_, privateContentParameters) };


            // privateMsgTemplateId Field Functions 
            bool hasPrivateMsgTemplateId() const { return this->privateMsgTemplateId_ != nullptr;};
            void deletePrivateMsgTemplateId() { this->privateMsgTemplateId_ = nullptr;};
            inline string getPrivateMsgTemplateId() const { DARABONBA_PTR_GET_DEFAULT(privateMsgTemplateId_, "") };
            inline Oppo& setPrivateMsgTemplateId(string privateMsgTemplateId) { DARABONBA_PTR_SET_VALUE(privateMsgTemplateId_, privateMsgTemplateId) };


            // privateTitleParameters Field Functions 
            bool hasPrivateTitleParameters() const { return this->privateTitleParameters_ != nullptr;};
            void deletePrivateTitleParameters() { this->privateTitleParameters_ = nullptr;};
            inline string getPrivateTitleParameters() const { DARABONBA_PTR_GET_DEFAULT(privateTitleParameters_, "") };
            inline Oppo& setPrivateTitleParameters(string privateTitleParameters) { DARABONBA_PTR_SET_VALUE(privateTitleParameters_, privateTitleParameters) };


          protected:
            // OPPO classifies messages into two categories for management: communication and services, and content and marketing.
            // 
            // **Communication and services (requires permission application):**
            // 
            // - IM: Instant messages
            // 
            // - ACCOUNT: Account and asset
            // 
            // - TODO: To-do list
            // 
            // - DEVICE_REMINDER: Device information
            // 
            // - ORDER: Order and logistics
            // 
            // - SUBSCRIPTION: Subscription reminder
            // 
            // **Content and marketing:**
            // 
            // - NEWS: News
            // 
            // - CONTENT: Content recommendation
            // 
            // - MARKETING: Operational activity
            // 
            // - SOCIAL: Social dynamics
            // 
            // For more information, see [vivo classification description](https://open.oppomobile.com/new/developmentDoc/info?id=13189).
            shared_ptr<string> category_ {};
            // The JSON string of the OPPO Fluid Cloud\\"s intent deletion data structure [data](https://open.oppomobile.com/documentation/page/info?id=13578). This parameter is invalid if the AndroidOppoIntelligentIntent parameter is already filled. For developer integration, see the document [OPPO Fluid Cloud Push Guide](https://help.aliyun.com/document_detail/2997310.html).
            shared_ptr<string> deleteIntentData_ {};
            // The JSON string of the OPPO Fluid Cloud\\"s intent sharing data structure [IntelligentIntent](https://open.oppomobile.com/documentation/page/info?id=13565). For developer integration, see the document [OPPO Fluid Cloud Push Guide](https://help.aliyun.com/document_detail/2997310.html).
            shared_ptr<string> intelligentIntent_ {};
            // The OPPO channel notification bar message reminder level. Valid values are:
            // 
            // - `1`: Notification bar
            // 
            // - `2`: Notification bar, lock screen, ringtone, vibration (default notification level for communication and service messages)
            // 
            // - `16`: Notification bar, lock screen, ringtone, vibration, banner (requires permission application)
            // 
            // > When you use the `NotifyLevel` parameter, you must also pass the `Category` parameter.
            shared_ptr<int64_t> notifyLevel_ {};
            // The OPPO private message template content parameters.
            shared_ptr<string> privateContentParameters_ {};
            // The OPPO private message template ID.
            shared_ptr<string> privateMsgTemplateId_ {};
            // The OPPO private message template title parameters.
            shared_ptr<string> privateTitleParameters_ {};
          };

          class Meizu : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Meizu& obj) { 
              DARABONBA_PTR_TO_JSON(NoticeMsgType, noticeMsgType_);
            };
            friend void from_json(const Darabonba::Json& j, Meizu& obj) { 
              DARABONBA_PTR_FROM_JSON(NoticeMsgType, noticeMsgType_);
            };
            Meizu() = default ;
            Meizu(const Meizu &) = default ;
            Meizu(Meizu &&) = default ;
            Meizu(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Meizu() = default ;
            Meizu& operator=(const Meizu &) = default ;
            Meizu& operator=(Meizu &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->noticeMsgType_ == nullptr; };
            // noticeMsgType Field Functions 
            bool hasNoticeMsgType() const { return this->noticeMsgType_ != nullptr;};
            void deleteNoticeMsgType() { this->noticeMsgType_ = nullptr;};
            inline int32_t getNoticeMsgType() const { DARABONBA_PTR_GET_DEFAULT(noticeMsgType_, 0) };
            inline Meizu& setNoticeMsgType(int32_t noticeMsgType) { DARABONBA_PTR_SET_VALUE(noticeMsgType_, noticeMsgType) };


          protected:
            // The Meizu message type.
            // 
            // - 0 Public message (default)
            // 
            // - 1 Private message
            shared_ptr<int32_t> noticeMsgType_ {};
          };

          class Huawei : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Huawei& obj) { 
              DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
              DARABONBA_PTR_TO_JSON(Category, category_);
              DARABONBA_PTR_TO_JSON(Importance, importance_);
              DARABONBA_PTR_TO_JSON(LiveNotificationPayload, liveNotificationPayload_);
              DARABONBA_PTR_TO_JSON(ReceiptId, receiptId_);
              DARABONBA_PTR_TO_JSON(Urgency, urgency_);
            };
            friend void from_json(const Darabonba::Json& j, Huawei& obj) { 
              DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
              DARABONBA_PTR_FROM_JSON(Category, category_);
              DARABONBA_PTR_FROM_JSON(Importance, importance_);
              DARABONBA_PTR_FROM_JSON(LiveNotificationPayload, liveNotificationPayload_);
              DARABONBA_PTR_FROM_JSON(ReceiptId, receiptId_);
              DARABONBA_PTR_FROM_JSON(Urgency, urgency_);
            };
            Huawei() = default ;
            Huawei(const Huawei &) = default ;
            Huawei(Huawei &&) = default ;
            Huawei(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Huawei() = default ;
            Huawei& operator=(const Huawei &) = default ;
            Huawei& operator=(Huawei &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->businessType_ == nullptr
        && this->category_ == nullptr && this->importance_ == nullptr && this->liveNotificationPayload_ == nullptr && this->receiptId_ == nullptr && this->urgency_ == nullptr; };
            // businessType Field Functions 
            bool hasBusinessType() const { return this->businessType_ != nullptr;};
            void deleteBusinessType() { this->businessType_ = nullptr;};
            inline int32_t getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0) };
            inline Huawei& setBusinessType(int32_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


            // category Field Functions 
            bool hasCategory() const { return this->category_ != nullptr;};
            void deleteCategory() { this->category_ = nullptr;};
            inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
            inline Huawei& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


            // importance Field Functions 
            bool hasImportance() const { return this->importance_ != nullptr;};
            void deleteImportance() { this->importance_ = nullptr;};
            inline int32_t getImportance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
            inline Huawei& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


            // liveNotificationPayload Field Functions 
            bool hasLiveNotificationPayload() const { return this->liveNotificationPayload_ != nullptr;};
            void deleteLiveNotificationPayload() { this->liveNotificationPayload_ = nullptr;};
            inline string getLiveNotificationPayload() const { DARABONBA_PTR_GET_DEFAULT(liveNotificationPayload_, "") };
            inline Huawei& setLiveNotificationPayload(string liveNotificationPayload) { DARABONBA_PTR_SET_VALUE(liveNotificationPayload_, liveNotificationPayload) };


            // receiptId Field Functions 
            bool hasReceiptId() const { return this->receiptId_ != nullptr;};
            void deleteReceiptId() { this->receiptId_ = nullptr;};
            inline string getReceiptId() const { DARABONBA_PTR_GET_DEFAULT(receiptId_, "") };
            inline Huawei& setReceiptId(string receiptId) { DARABONBA_PTR_SET_VALUE(receiptId_, receiptId) };


            // urgency Field Functions 
            bool hasUrgency() const { return this->urgency_ != nullptr;};
            void deleteUrgency() { this->urgency_ = nullptr;};
            inline string getUrgency() const { DARABONBA_PTR_GET_DEFAULT(urgency_, "") };
            inline Huawei& setUrgency(string urgency) { DARABONBA_PTR_SET_VALUE(urgency_, urgency) };


          protected:
            // Sets the Huawei quick notification parameters.
            // 
            // - **0**: Send a normal Huawei notification (default).
            // 
            // - **1**: Send a Huawei quick notification.
            shared_ptr<int32_t> businessType_ {};
            // Function 1: After you apply for [self-classification rights](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835?#section3410731125514), this is used to identify the message type and determine the [message reminder method](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#ZH-CN_TOPIC_0000001149358835__p3850133955718). It speeds up the sending of specific types of messages. For valid values, see the [message classification standards](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#section1076611477914) in the official Huawei Push documentation. Fill in the "Cloud notification category value" or "Local notification category value" from the document\\"s table.
            // 
            // Function 2: After [applying for special permissions](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/faq-0000001050042183#section037425218509), this is used to identify high-priority pass-through scenarios. Valid values are:
            // 
            // - `VOIP`: Video call
            // 
            // - `PLAY_VOICE`: Voice playback
            // 
            // > * For "Cloud notification category value" that is "Not applicable," all messages go through Alibaba Cloud\\"s proprietary channel.
            // >
            // > * For "Local notification category value" that is "Not applicable," all messages go through the Huawei channel.
            shared_ptr<string> category_ {};
            // Sets the importance parameter for Huawei notification message classification, which determines the notification behavior on the user\\"s device. Valid values are:
            // 
            // - `0`: Marketing message
            // 
            // - `1`: Service and communication message
            // 
            // > We recommend using `Category` for notification classification. You must apply for this on the Huawei platform. [Application link](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#section893184112272).
            shared_ptr<int32_t> importance_ {};
            // The JSON string of the Huawei Android Live Window data structure [LiveNotificationPayload](https://developer.huawei.com/consumer/cn/doc/HMSCore-References/rest-live-0000001562939968#ZH-CN_TOPIC_0000001700850537__p195121620102511). For developer integration, see the document [Huawei Live Window Push Guide](https://help.aliyun.com/document_detail/2983768.html).
            shared_ptr<string> liveNotificationPayload_ {};
            // The receipt ID for the Huawei channel. This ID can be found in the receipt parameter settings on the Huawei channel push operations platform.
            // 
            // > If the default receipt configuration on the Huawei channel push operations platform is the Alibaba Cloud receipt, you do not need to provide this. If not, we recommend that you first configure the default Huawei channel receipt ID in the Alibaba Cloud EMAS Mobile Push console.
            shared_ptr<string> receiptId_ {};
            // The Huawei channel notification delivery priority. Valid values are:
            // 
            // - `HIGH`
            // 
            // - `NORMAL`
            // 
            // You must apply for permission. For more information, see: [Application link](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/faq-0000001050042183#section037425218509).
            shared_ptr<string> urgency_ {};
          };

          class Honor : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Honor& obj) { 
              DARABONBA_PTR_TO_JSON(Importance, importance_);
            };
            friend void from_json(const Darabonba::Json& j, Honor& obj) { 
              DARABONBA_PTR_FROM_JSON(Importance, importance_);
            };
            Honor() = default ;
            Honor(const Honor &) = default ;
            Honor(Honor &&) = default ;
            Honor(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Honor() = default ;
            Honor& operator=(const Honor &) = default ;
            Honor& operator=(Honor &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->importance_ == nullptr; };
            // importance Field Functions 
            bool hasImportance() const { return this->importance_ != nullptr;};
            void deleteImportance() { this->importance_ = nullptr;};
            inline int32_t getImportance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
            inline Honor& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


          protected:
            // Sets the importance parameter for Honor notification message classification, which determines the notification behavior on the user\\"s device. Valid values are:
            // 
            // - `0`: Marketing message
            // 
            // - `1`: Service and communication message
            // 
            // You must apply for this on the Honor platform. [Application link](https://developer.honor.com/cn/docs/11002/guides/notification-class#%E8%87%AA%E5%88%86%E7%B1%BB%E6%9D%83%E7%9B%8A%E7%94%B3%E8%AF%B7).
            shared_ptr<int32_t> importance_ {};
          };

          class Accs : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Accs& obj) { 
              DARABONBA_PTR_TO_JSON(CustomStyle, customStyle_);
              DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
              DARABONBA_PTR_TO_JSON(OpenActivity, openActivity_);
              DARABONBA_PTR_TO_JSON(OpenType, openType_);
              DARABONBA_PTR_TO_JSON(OpenUrl, openUrl_);
              DARABONBA_PTR_TO_JSON(Priority, priority_);
              DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
            };
            friend void from_json(const Darabonba::Json& j, Accs& obj) { 
              DARABONBA_PTR_FROM_JSON(CustomStyle, customStyle_);
              DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
              DARABONBA_PTR_FROM_JSON(OpenActivity, openActivity_);
              DARABONBA_PTR_FROM_JSON(OpenType, openType_);
              DARABONBA_PTR_FROM_JSON(OpenUrl, openUrl_);
              DARABONBA_PTR_FROM_JSON(Priority, priority_);
              DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
            };
            Accs() = default ;
            Accs(const Accs &) = default ;
            Accs(Accs &&) = default ;
            Accs(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Accs() = default ;
            Accs& operator=(const Accs &) = default ;
            Accs& operator=(Accs &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->customStyle_ == nullptr
        && this->notifyType_ == nullptr && this->openActivity_ == nullptr && this->openType_ == nullptr && this->openUrl_ == nullptr && this->priority_ == nullptr
        && this->threadId_ == nullptr; };
            // customStyle Field Functions 
            bool hasCustomStyle() const { return this->customStyle_ != nullptr;};
            void deleteCustomStyle() { this->customStyle_ = nullptr;};
            inline int32_t getCustomStyle() const { DARABONBA_PTR_GET_DEFAULT(customStyle_, 0) };
            inline Accs& setCustomStyle(int32_t customStyle) { DARABONBA_PTR_SET_VALUE(customStyle_, customStyle) };


            // notifyType Field Functions 
            bool hasNotifyType() const { return this->notifyType_ != nullptr;};
            void deleteNotifyType() { this->notifyType_ = nullptr;};
            inline string getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
            inline Accs& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


            // openActivity Field Functions 
            bool hasOpenActivity() const { return this->openActivity_ != nullptr;};
            void deleteOpenActivity() { this->openActivity_ = nullptr;};
            inline string getOpenActivity() const { DARABONBA_PTR_GET_DEFAULT(openActivity_, "") };
            inline Accs& setOpenActivity(string openActivity) { DARABONBA_PTR_SET_VALUE(openActivity_, openActivity) };


            // openType Field Functions 
            bool hasOpenType() const { return this->openType_ != nullptr;};
            void deleteOpenType() { this->openType_ = nullptr;};
            inline string getOpenType() const { DARABONBA_PTR_GET_DEFAULT(openType_, "") };
            inline Accs& setOpenType(string openType) { DARABONBA_PTR_SET_VALUE(openType_, openType) };


            // openUrl Field Functions 
            bool hasOpenUrl() const { return this->openUrl_ != nullptr;};
            void deleteOpenUrl() { this->openUrl_ = nullptr;};
            inline string getOpenUrl() const { DARABONBA_PTR_GET_DEFAULT(openUrl_, "") };
            inline Accs& setOpenUrl(string openUrl) { DARABONBA_PTR_SET_VALUE(openUrl_, openUrl) };


            // priority Field Functions 
            bool hasPriority() const { return this->priority_ != nullptr;};
            void deletePriority() { this->priority_ = nullptr;};
            inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
            inline Accs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


            // threadId Field Functions 
            bool hasThreadId() const { return this->threadId_ != nullptr;};
            void deleteThreadId() { this->threadId_ = nullptr;};
            inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
            inline Accs& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


          protected:
            // The custom Android notification bar style. The value can be from 1 to 100.
            // 
            // > The client must complete the style preset configuration. For more information, see the [Custom Notification Style API](https://help.aliyun.com/document_detail/2834944.html) document.
            shared_ptr<int32_t> customStyle_ {};
            // The notification reminder method. Valid values:
            // 
            // - `VIBRATE`: Vibrate (default)
            // 
            // - `SOUND`: Sound
            // 
            // - `BOTH`: Sound and vibration
            // 
            // - `NONE`: Silent
            shared_ptr<string> notifyType_ {};
            // Sets the activity to open when the notification is clicked. This is valid when `OpenType` is `ACTIVITY`.
            shared_ptr<string> openActivity_ {};
            // The action to take after the notification is clicked. Valid values:
            // 
            // - `APPLICATION`: Open the application (default).
            // 
            // - `ACTIVITY`: Open the specified page `OpenActivity`.
            // 
            // - `URL`: Open a URL.
            // 
            // - `NONE`: No action.
            shared_ptr<string> openType_ {};
            // After an Android device receives a push, clicking the notification opens the corresponding URL. This is valid when `OpenType` is `URL`.
            shared_ptr<string> openUrl_ {};
            // The priority of the Android notification\\"s position in the notification bar. Valid values: -2, -1, 0, 1, 2.
            shared_ptr<int32_t> priority_ {};
            // Message grouping. Messages in the same group are displayed collapsed in the notification bar and can be expanded. Different groups of notifications are displayed separately.
            // 
            // > This is for Android SDK 3.9.2 and later.
            shared_ptr<string> threadId_ {};
          };

          virtual bool empty() const override { return this->accs_ == nullptr
        && this->honor_ == nullptr && this->huawei_ == nullptr && this->meizu_ == nullptr && this->oppo_ == nullptr && this->vivo_ == nullptr
        && this->xiaomi_ == nullptr; };
          // accs Field Functions 
          bool hasAccs() const { return this->accs_ != nullptr;};
          void deleteAccs() { this->accs_ = nullptr;};
          inline const Options::Accs & getAccs() const { DARABONBA_PTR_GET_CONST(accs_, Options::Accs) };
          inline Options::Accs getAccs() { DARABONBA_PTR_GET(accs_, Options::Accs) };
          inline Options& setAccs(const Options::Accs & accs) { DARABONBA_PTR_SET_VALUE(accs_, accs) };
          inline Options& setAccs(Options::Accs && accs) { DARABONBA_PTR_SET_RVALUE(accs_, accs) };


          // honor Field Functions 
          bool hasHonor() const { return this->honor_ != nullptr;};
          void deleteHonor() { this->honor_ = nullptr;};
          inline const Options::Honor & getHonor() const { DARABONBA_PTR_GET_CONST(honor_, Options::Honor) };
          inline Options::Honor getHonor() { DARABONBA_PTR_GET(honor_, Options::Honor) };
          inline Options& setHonor(const Options::Honor & honor) { DARABONBA_PTR_SET_VALUE(honor_, honor) };
          inline Options& setHonor(Options::Honor && honor) { DARABONBA_PTR_SET_RVALUE(honor_, honor) };


          // huawei Field Functions 
          bool hasHuawei() const { return this->huawei_ != nullptr;};
          void deleteHuawei() { this->huawei_ = nullptr;};
          inline const Options::Huawei & getHuawei() const { DARABONBA_PTR_GET_CONST(huawei_, Options::Huawei) };
          inline Options::Huawei getHuawei() { DARABONBA_PTR_GET(huawei_, Options::Huawei) };
          inline Options& setHuawei(const Options::Huawei & huawei) { DARABONBA_PTR_SET_VALUE(huawei_, huawei) };
          inline Options& setHuawei(Options::Huawei && huawei) { DARABONBA_PTR_SET_RVALUE(huawei_, huawei) };


          // meizu Field Functions 
          bool hasMeizu() const { return this->meizu_ != nullptr;};
          void deleteMeizu() { this->meizu_ = nullptr;};
          inline const Options::Meizu & getMeizu() const { DARABONBA_PTR_GET_CONST(meizu_, Options::Meizu) };
          inline Options::Meizu getMeizu() { DARABONBA_PTR_GET(meizu_, Options::Meizu) };
          inline Options& setMeizu(const Options::Meizu & meizu) { DARABONBA_PTR_SET_VALUE(meizu_, meizu) };
          inline Options& setMeizu(Options::Meizu && meizu) { DARABONBA_PTR_SET_RVALUE(meizu_, meizu) };


          // oppo Field Functions 
          bool hasOppo() const { return this->oppo_ != nullptr;};
          void deleteOppo() { this->oppo_ = nullptr;};
          inline const Options::Oppo & getOppo() const { DARABONBA_PTR_GET_CONST(oppo_, Options::Oppo) };
          inline Options::Oppo getOppo() { DARABONBA_PTR_GET(oppo_, Options::Oppo) };
          inline Options& setOppo(const Options::Oppo & oppo) { DARABONBA_PTR_SET_VALUE(oppo_, oppo) };
          inline Options& setOppo(Options::Oppo && oppo) { DARABONBA_PTR_SET_RVALUE(oppo_, oppo) };


          // vivo Field Functions 
          bool hasVivo() const { return this->vivo_ != nullptr;};
          void deleteVivo() { this->vivo_ = nullptr;};
          inline const Options::Vivo & getVivo() const { DARABONBA_PTR_GET_CONST(vivo_, Options::Vivo) };
          inline Options::Vivo getVivo() { DARABONBA_PTR_GET(vivo_, Options::Vivo) };
          inline Options& setVivo(const Options::Vivo & vivo) { DARABONBA_PTR_SET_VALUE(vivo_, vivo) };
          inline Options& setVivo(Options::Vivo && vivo) { DARABONBA_PTR_SET_RVALUE(vivo_, vivo) };


          // xiaomi Field Functions 
          bool hasXiaomi() const { return this->xiaomi_ != nullptr;};
          void deleteXiaomi() { this->xiaomi_ = nullptr;};
          inline const Options::Xiaomi & getXiaomi() const { DARABONBA_PTR_GET_CONST(xiaomi_, Options::Xiaomi) };
          inline Options::Xiaomi getXiaomi() { DARABONBA_PTR_GET(xiaomi_, Options::Xiaomi) };
          inline Options& setXiaomi(const Options::Xiaomi & xiaomi) { DARABONBA_PTR_SET_VALUE(xiaomi_, xiaomi) };
          inline Options& setXiaomi(Options::Xiaomi && xiaomi) { DARABONBA_PTR_SET_RVALUE(xiaomi_, xiaomi) };


        protected:
          // Alibaba Cloud proprietary configuration
          // 
          // > This is only valid when using Alibaba Cloud\\"s proprietary channel.
          shared_ptr<Options::Accs> accs_ {};
          // Honor configuration
          shared_ptr<Options::Honor> honor_ {};
          // Huawei configuration
          shared_ptr<Options::Huawei> huawei_ {};
          // Meizu configuration
          shared_ptr<Options::Meizu> meizu_ {};
          // OPPO configuration
          shared_ptr<Options::Oppo> oppo_ {};
          // vivo configuration
          shared_ptr<Options::Vivo> vivo_ {};
          // Xiaomi configuration
          shared_ptr<Options::Xiaomi> xiaomi_ {};
        };

        virtual bool empty() const override { return this->badgeActivity_ == nullptr
        && this->badgeAddNum_ == nullptr && this->badgeSetNum_ == nullptr && this->channelId_ == nullptr && this->extParameters_ == nullptr && this->groupId_ == nullptr
        && this->imageUrl_ == nullptr && this->inboxContent_ == nullptr && this->music_ == nullptr && this->notifyId_ == nullptr && this->options_ == nullptr
        && this->pictureUrl_ == nullptr && this->renderStyle_ == nullptr && this->testMessage_ == nullptr && this->vendorChannelActivity_ == nullptr; };
        // badgeActivity Field Functions 
        bool hasBadgeActivity() const { return this->badgeActivity_ != nullptr;};
        void deleteBadgeActivity() { this->badgeActivity_ = nullptr;};
        inline string getBadgeActivity() const { DARABONBA_PTR_GET_DEFAULT(badgeActivity_, "") };
        inline Android& setBadgeActivity(string badgeActivity) { DARABONBA_PTR_SET_VALUE(badgeActivity_, badgeActivity) };


        // badgeAddNum Field Functions 
        bool hasBadgeAddNum() const { return this->badgeAddNum_ != nullptr;};
        void deleteBadgeAddNum() { this->badgeAddNum_ = nullptr;};
        inline int32_t getBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(badgeAddNum_, 0) };
        inline Android& setBadgeAddNum(int32_t badgeAddNum) { DARABONBA_PTR_SET_VALUE(badgeAddNum_, badgeAddNum) };


        // badgeSetNum Field Functions 
        bool hasBadgeSetNum() const { return this->badgeSetNum_ != nullptr;};
        void deleteBadgeSetNum() { this->badgeSetNum_ = nullptr;};
        inline int32_t getBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(badgeSetNum_, 0) };
        inline Android& setBadgeSetNum(int32_t badgeSetNum) { DARABONBA_PTR_SET_VALUE(badgeSetNum_, badgeSetNum) };


        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline Android& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // extParameters Field Functions 
        bool hasExtParameters() const { return this->extParameters_ != nullptr;};
        void deleteExtParameters() { this->extParameters_ = nullptr;};
        inline string getExtParameters() const { DARABONBA_PTR_GET_DEFAULT(extParameters_, "") };
        inline Android& setExtParameters(string extParameters) { DARABONBA_PTR_SET_VALUE(extParameters_, extParameters) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Android& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Android& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // inboxContent Field Functions 
        bool hasInboxContent() const { return this->inboxContent_ != nullptr;};
        void deleteInboxContent() { this->inboxContent_ = nullptr;};
        inline const vector<string> & getInboxContent() const { DARABONBA_PTR_GET_CONST(inboxContent_, vector<string>) };
        inline vector<string> getInboxContent() { DARABONBA_PTR_GET(inboxContent_, vector<string>) };
        inline Android& setInboxContent(const vector<string> & inboxContent) { DARABONBA_PTR_SET_VALUE(inboxContent_, inboxContent) };
        inline Android& setInboxContent(vector<string> && inboxContent) { DARABONBA_PTR_SET_RVALUE(inboxContent_, inboxContent) };


        // music Field Functions 
        bool hasMusic() const { return this->music_ != nullptr;};
        void deleteMusic() { this->music_ = nullptr;};
        inline string getMusic() const { DARABONBA_PTR_GET_DEFAULT(music_, "") };
        inline Android& setMusic(string music) { DARABONBA_PTR_SET_VALUE(music_, music) };


        // notifyId Field Functions 
        bool hasNotifyId() const { return this->notifyId_ != nullptr;};
        void deleteNotifyId() { this->notifyId_ = nullptr;};
        inline int32_t getNotifyId() const { DARABONBA_PTR_GET_DEFAULT(notifyId_, 0) };
        inline Android& setNotifyId(int32_t notifyId) { DARABONBA_PTR_SET_VALUE(notifyId_, notifyId) };


        // options Field Functions 
        bool hasOptions() const { return this->options_ != nullptr;};
        void deleteOptions() { this->options_ = nullptr;};
        inline const Android::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, Android::Options) };
        inline Android::Options getOptions() { DARABONBA_PTR_GET(options_, Android::Options) };
        inline Android& setOptions(const Android::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
        inline Android& setOptions(Android::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


        // pictureUrl Field Functions 
        bool hasPictureUrl() const { return this->pictureUrl_ != nullptr;};
        void deletePictureUrl() { this->pictureUrl_ = nullptr;};
        inline string getPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(pictureUrl_, "") };
        inline Android& setPictureUrl(string pictureUrl) { DARABONBA_PTR_SET_VALUE(pictureUrl_, pictureUrl) };


        // renderStyle Field Functions 
        bool hasRenderStyle() const { return this->renderStyle_ != nullptr;};
        void deleteRenderStyle() { this->renderStyle_ = nullptr;};
        inline string getRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(renderStyle_, "") };
        inline Android& setRenderStyle(string renderStyle) { DARABONBA_PTR_SET_VALUE(renderStyle_, renderStyle) };


        // testMessage Field Functions 
        bool hasTestMessage() const { return this->testMessage_ != nullptr;};
        void deleteTestMessage() { this->testMessage_ = nullptr;};
        inline bool getTestMessage() const { DARABONBA_PTR_GET_DEFAULT(testMessage_, false) };
        inline Android& setTestMessage(bool testMessage) { DARABONBA_PTR_SET_VALUE(testMessage_, testMessage) };


        // vendorChannelActivity Field Functions 
        bool hasVendorChannelActivity() const { return this->vendorChannelActivity_ != nullptr;};
        void deleteVendorChannelActivity() { this->vendorChannelActivity_ = nullptr;};
        inline string getVendorChannelActivity() const { DARABONBA_PTR_GET_DEFAULT(vendorChannelActivity_, "") };
        inline Android& setVendorChannelActivity(string vendorChannelActivity) { DARABONBA_PTR_SET_VALUE(vendorChannelActivity_, vendorChannelActivity) };


      protected:
        // The full class name of the application entry Activity for badge settings.
        // 
        // > This is only valid when pushing through the Huawei or Honor vendor channel.
        shared_ptr<string> badgeActivity_ {};
        // Sets a cumulative value for the badge, which is added to the original badge number.
        // 
        // > - This is supported by `Huawei` and `Honor` channels.
        // >
        // > - If both `BadgeAddNum` and `BadgeSetNum` are present, the latter takes precedence.
        shared_ptr<int32_t> badgeAddNum_ {};
        // Sets a fixed value for the badge number. The value range is [1, 99].
        // 
        // > - For vendor channel pushes, this is only effective for Huawei and Honor channels.
        // >
        // > - When pushing through Alibaba Cloud\\"s proprietary channel, this is only effective on Huawei, Honor, and vivo models.
        shared_ptr<int32_t> badgeSetNum_ {};
        // Sets the channelId for the Android app. It must correspond to the channelId in the vendor\\"s app.
        // 
        // > - Because the channel_id for OPPO\\"s private message notification channel is the same as the app\\"s channelId, the channel_id takes this value when pushing through the OPPO channel.
        // >
        // > - For pushes through Huawei, FCM, and Alibaba Cloud\\"s proprietary channels, the channel_id takes this value.
        // >
        // > - For specific uses, see the FAQ: [Notifications not received on Android 8.0 and later devices](https://help.aliyun.com/document_detail/67398.html).
        shared_ptr<string> channelId_ {};
        // Custom extension properties for Android notifications.
        // 
        // > - The parameter must be passed in a standard JSON Map format. An incorrect format causes parsing to fail.
        shared_ptr<string> extParameters_ {};
        // Message grouping. For messages in the same group, only the latest one and the total number of messages received in that group are displayed in the notification bar. Not all messages are displayed, and they cannot be expanded. Currently supported by:
        // 
        // - Huawei vendor channel
        // 
        // - Honor vendor channel
        // 
        // - Proprietary channels with Android SDK 3.9.1 and earlier
        // 
        // > This parameter is no longer supported by proprietary channels in Android SDK 3.9.2 and later versions.
        shared_ptr<string> groupId_ {};
        // The URL for the icon on the right. Currently supported by:
        // 
        // - `Huawei EMUI` (only applicable in long text mode and Inbox mode).
        // 
        // - `Honor Magic UI` (only applicable in long text mode).
        // 
        // - `Proprietary channels` (Android SDK 3.5.0 and later).
        shared_ptr<string> imageUrl_ {};
        // The body text in Inbox mode. The content is a valid JSON Array with no more than 5 elements. Currently supported by:
        // 
        // - Huawei: EMUI 9 and later
        // 
        // - Honor: Magic UI 4.0 and later
        // 
        // - Xiaomi: MIUI 10 and later
        // 
        // - OPPO: ColorOS 5.0 and later
        // 
        // - Proprietary channels: Android SDK 3.6.0 and later
        shared_ptr<vector<string>> inboxContent_ {};
        // The Huawei vendor channel notification sound. Specify the name of the audio file stored in the `app/src/main/res/raw/` directory of the client project, without the file format suffix. If not set, the default ringtone is used.
        shared_ptr<string> music_ {};
        // The unique identifier for an Android notification bar message. It controls the overwriting and replacement behavior of notifications. A new notification with the same NotifyId automatically overwrites the old one.
        shared_ptr<int32_t> notifyId_ {};
        // Detailed channel configuration.
        shared_ptr<Android::Options> options_ {};
        // The image URL in large image mode. Currently supported by: proprietary channels with Android SDK 3.6.0 and later.
        shared_ptr<string> pictureUrl_ {};
        // The notification style. Valid values are:
        // 
        // - `0`: Standard mode (default)
        // 
        // - `1`: Long text mode (supported by Huawei, Honor, Xiaomi, OPPO, Meizu, and proprietary channels)
        // 
        // - `2`: Large image mode (supported by proprietary channels)
        // 
        // - `3`: List mode (supported by Huawei, Honor, Xiaomi, OPPO, and proprietary channels)
        shared_ptr<string> renderStyle_ {};
        // Sets the vendor channel notification type:
        // 
        // - `false`: Formal notification (default).
        // 
        // - `true`: Test notification.
        // 
        // > Currently supported by: Huawei channel, Honor channel, vivo channel, and OPPO Fluid Cloud.
        shared_ptr<bool> testMessage_ {};
        // Specifies the Activity to open after the notification is clicked.
        // 
        // >Warning: 
        // 
        // You must fill in this option when you use an Android vendor channel.
        shared_ptr<string> vendorChannelActivity_ {};
      };

      virtual bool empty() const override { return this->android_ == nullptr
        && this->body_ == nullptr && this->hmos_ == nullptr && this->ios_ == nullptr && this->title_ == nullptr; };
      // android Field Functions 
      bool hasAndroid() const { return this->android_ != nullptr;};
      void deleteAndroid() { this->android_ = nullptr;};
      inline const Notification::Android & getAndroid() const { DARABONBA_PTR_GET_CONST(android_, Notification::Android) };
      inline Notification::Android getAndroid() { DARABONBA_PTR_GET(android_, Notification::Android) };
      inline Notification& setAndroid(const Notification::Android & android) { DARABONBA_PTR_SET_VALUE(android_, android) };
      inline Notification& setAndroid(Notification::Android && android) { DARABONBA_PTR_SET_RVALUE(android_, android) };


      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
      inline Notification& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // hmos Field Functions 
      bool hasHmos() const { return this->hmos_ != nullptr;};
      void deleteHmos() { this->hmos_ = nullptr;};
      inline const Notification::Hmos & getHmos() const { DARABONBA_PTR_GET_CONST(hmos_, Notification::Hmos) };
      inline Notification::Hmos getHmos() { DARABONBA_PTR_GET(hmos_, Notification::Hmos) };
      inline Notification& setHmos(const Notification::Hmos & hmos) { DARABONBA_PTR_SET_VALUE(hmos_, hmos) };
      inline Notification& setHmos(Notification::Hmos && hmos) { DARABONBA_PTR_SET_RVALUE(hmos_, hmos) };


      // ios Field Functions 
      bool hasIos() const { return this->ios_ != nullptr;};
      void deleteIos() { this->ios_ = nullptr;};
      inline const Notification::Ios & getIos() const { DARABONBA_PTR_GET_CONST(ios_, Notification::Ios) };
      inline Notification::Ios getIos() { DARABONBA_PTR_GET(ios_, Notification::Ios) };
      inline Notification& setIos(const Notification::Ios & ios) { DARABONBA_PTR_SET_VALUE(ios_, ios) };
      inline Notification& setIos(Notification::Ios && ios) { DARABONBA_PTR_SET_RVALUE(ios_, ios) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Notification& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Android notification configuration
      shared_ptr<Notification::Android> android_ {};
      // The content of the push notification.
      // 
      // > The length limits are as follows:
      // >
      // > - For iOS, HarmonyOS, and Android, the character length cannot exceed 200.
      shared_ptr<string> body_ {};
      // HarmonyOS notification configuration.
      shared_ptr<Notification::Hmos> hmos_ {};
      // iOS notification configuration
      shared_ptr<Notification::Ios> ios_ {};
      // The title of the push notification.
      // 
      // > The length limits are as follows:
      // >
      // > - For iOS/HarmonyOS, the byte length cannot exceed 200.
      // >
      // > - For Android, the character length cannot exceed 50.
      shared_ptr<string> title_ {};
    };

    class Message : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Message& obj) { 
        DARABONBA_PTR_TO_JSON(Body, body_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Message& obj) { 
        DARABONBA_PTR_FROM_JSON(Body, body_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Message() = default ;
      Message(const Message &) = default ;
      Message(Message &&) = default ;
      Message(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Message() = default ;
      Message& operator=(const Message &) = default ;
      Message& operator=(Message &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->body_ == nullptr
        && this->title_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
      inline Message& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Message& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The content of the message to send.
      shared_ptr<string> body_ {};
      // The title of the message to send.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->action_ == nullptr
        && this->message_ == nullptr && this->notification_ == nullptr && this->options_ == nullptr && this->target_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline PushTask& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const PushTask::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, PushTask::Message) };
    inline PushTask::Message getMessage() { DARABONBA_PTR_GET(message_, PushTask::Message) };
    inline PushTask& setMessage(const PushTask::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline PushTask& setMessage(PushTask::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const PushTask::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, PushTask::Notification) };
    inline PushTask::Notification getNotification() { DARABONBA_PTR_GET(notification_, PushTask::Notification) };
    inline PushTask& setNotification(const PushTask::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline PushTask& setNotification(PushTask::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const PushTask::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, PushTask::Options) };
    inline PushTask::Options getOptions() { DARABONBA_PTR_GET(options_, PushTask::Options) };
    inline PushTask& setOptions(const PushTask::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline PushTask& setOptions(PushTask::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const PushTask::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, PushTask::Target) };
    inline PushTask::Target getTarget() { DARABONBA_PTR_GET(target_, PushTask::Target) };
    inline PushTask& setTarget(const PushTask::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline PushTask& setTarget(PushTask::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // The push method. This is an optional parameter. The default value is `PUSH_IMMEDIATELY` (immediate push).
    // 
    // >Notice: 
    // 
    // The `MassPushV2` batch push API supports only the following push methods:
    // 
    // - `PUSH_IMMEDIATELY` (immediate push)
    // 
    // - `SCHEDULED_PUSH` (scheduled push)
    shared_ptr<string> action_ {};
    // The pass-through message data sent to the device. The total length cannot exceed 4,000 bytes.
    // 
    // > Length calculation
    // >
    // > - The length is calculated based on the byte length of the UTF-8 encoded string after the Message object is serialized into JSON.
    // >
    // > - A Chinese character typically occupies 3 bytes in UTF-8 encoding.
    shared_ptr<PushTask::Message> message_ {};
    // The vendor notification data sent to the device.
    // 
    // >Notice: 
    // 
    // If you set both `Message` and `Notification`, the device receives only one. The sending rules are as follows:
    // 
    // - If the device is online, pass-through message data is sent.
    // 
    // - If the device is offline, a system notification is sent.
    shared_ptr<PushTask::Notification> notification_ {};
    // Push options
    shared_ptr<PushTask::Options> options_ {};
    // The target object for the message push. This parameter is optional when the `Action` operation type is `CREATE_CONTINUOUS_PUSH` (create a continuous push task).
    shared_ptr<PushTask::Target> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
