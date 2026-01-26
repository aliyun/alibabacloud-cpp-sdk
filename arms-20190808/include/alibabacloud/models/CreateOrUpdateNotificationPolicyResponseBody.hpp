// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateNotificationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateNotificationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationPolicy, notificationPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateNotificationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationPolicy, notificationPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateNotificationPolicyResponseBody() = default ;
    CreateOrUpdateNotificationPolicyResponseBody(const CreateOrUpdateNotificationPolicyResponseBody &) = default ;
    CreateOrUpdateNotificationPolicyResponseBody(CreateOrUpdateNotificationPolicyResponseBody &&) = default ;
    CreateOrUpdateNotificationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateNotificationPolicyResponseBody() = default ;
    CreateOrUpdateNotificationPolicyResponseBody& operator=(const CreateOrUpdateNotificationPolicyResponseBody &) = default ;
    CreateOrUpdateNotificationPolicyResponseBody& operator=(CreateOrUpdateNotificationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NotificationPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotificationPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(DirectedMode, directedMode_);
        DARABONBA_PTR_TO_JSON(EscalationPolicyId, escalationPolicyId_);
        DARABONBA_PTR_TO_JSON(GroupRule, groupRule_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
        DARABONBA_PTR_TO_JSON(MatchingRules, matchingRules_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotifyRule, notifyRule_);
        DARABONBA_PTR_TO_JSON(NotifyTemplate, notifyTemplate_);
        DARABONBA_PTR_TO_JSON(Repeat, repeat_);
        DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
        DARABONBA_PTR_TO_JSON(SendRecoverMessage, sendRecoverMessage_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, NotificationPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(DirectedMode, directedMode_);
        DARABONBA_PTR_FROM_JSON(EscalationPolicyId, escalationPolicyId_);
        DARABONBA_PTR_FROM_JSON(GroupRule, groupRule_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
        DARABONBA_PTR_FROM_JSON(MatchingRules, matchingRules_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotifyRule, notifyRule_);
        DARABONBA_PTR_FROM_JSON(NotifyTemplate, notifyTemplate_);
        DARABONBA_PTR_FROM_JSON(Repeat, repeat_);
        DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
        DARABONBA_PTR_FROM_JSON(SendRecoverMessage, sendRecoverMessage_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      NotificationPolicy() = default ;
      NotificationPolicy(const NotificationPolicy &) = default ;
      NotificationPolicy(NotificationPolicy &&) = default ;
      NotificationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotificationPolicy() = default ;
      NotificationPolicy& operator=(const NotificationPolicy &) = default ;
      NotificationPolicy& operator=(NotificationPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NotifyTemplate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotifyTemplate& obj) { 
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
        friend void from_json(const Darabonba::Json& j, NotifyTemplate& obj) { 
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
        NotifyTemplate() = default ;
        NotifyTemplate(const NotifyTemplate &) = default ;
        NotifyTemplate(NotifyTemplate &&) = default ;
        NotifyTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotifyTemplate() = default ;
        NotifyTemplate& operator=(const NotifyTemplate &) = default ;
        NotifyTemplate& operator=(NotifyTemplate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->emailContent_ == nullptr
        && this->emailRecoverContent_ == nullptr && this->emailRecoverTitle_ == nullptr && this->emailTitle_ == nullptr && this->robotContent_ == nullptr && this->smsContent_ == nullptr
        && this->smsRecoverContent_ == nullptr && this->ttsContent_ == nullptr && this->ttsRecoverContent_ == nullptr; };
        // emailContent Field Functions 
        bool hasEmailContent() const { return this->emailContent_ != nullptr;};
        void deleteEmailContent() { this->emailContent_ = nullptr;};
        inline string getEmailContent() const { DARABONBA_PTR_GET_DEFAULT(emailContent_, "") };
        inline NotifyTemplate& setEmailContent(string emailContent) { DARABONBA_PTR_SET_VALUE(emailContent_, emailContent) };


        // emailRecoverContent Field Functions 
        bool hasEmailRecoverContent() const { return this->emailRecoverContent_ != nullptr;};
        void deleteEmailRecoverContent() { this->emailRecoverContent_ = nullptr;};
        inline string getEmailRecoverContent() const { DARABONBA_PTR_GET_DEFAULT(emailRecoverContent_, "") };
        inline NotifyTemplate& setEmailRecoverContent(string emailRecoverContent) { DARABONBA_PTR_SET_VALUE(emailRecoverContent_, emailRecoverContent) };


        // emailRecoverTitle Field Functions 
        bool hasEmailRecoverTitle() const { return this->emailRecoverTitle_ != nullptr;};
        void deleteEmailRecoverTitle() { this->emailRecoverTitle_ = nullptr;};
        inline string getEmailRecoverTitle() const { DARABONBA_PTR_GET_DEFAULT(emailRecoverTitle_, "") };
        inline NotifyTemplate& setEmailRecoverTitle(string emailRecoverTitle) { DARABONBA_PTR_SET_VALUE(emailRecoverTitle_, emailRecoverTitle) };


        // emailTitle Field Functions 
        bool hasEmailTitle() const { return this->emailTitle_ != nullptr;};
        void deleteEmailTitle() { this->emailTitle_ = nullptr;};
        inline string getEmailTitle() const { DARABONBA_PTR_GET_DEFAULT(emailTitle_, "") };
        inline NotifyTemplate& setEmailTitle(string emailTitle) { DARABONBA_PTR_SET_VALUE(emailTitle_, emailTitle) };


        // robotContent Field Functions 
        bool hasRobotContent() const { return this->robotContent_ != nullptr;};
        void deleteRobotContent() { this->robotContent_ = nullptr;};
        inline string getRobotContent() const { DARABONBA_PTR_GET_DEFAULT(robotContent_, "") };
        inline NotifyTemplate& setRobotContent(string robotContent) { DARABONBA_PTR_SET_VALUE(robotContent_, robotContent) };


        // smsContent Field Functions 
        bool hasSmsContent() const { return this->smsContent_ != nullptr;};
        void deleteSmsContent() { this->smsContent_ = nullptr;};
        inline string getSmsContent() const { DARABONBA_PTR_GET_DEFAULT(smsContent_, "") };
        inline NotifyTemplate& setSmsContent(string smsContent) { DARABONBA_PTR_SET_VALUE(smsContent_, smsContent) };


        // smsRecoverContent Field Functions 
        bool hasSmsRecoverContent() const { return this->smsRecoverContent_ != nullptr;};
        void deleteSmsRecoverContent() { this->smsRecoverContent_ = nullptr;};
        inline string getSmsRecoverContent() const { DARABONBA_PTR_GET_DEFAULT(smsRecoverContent_, "") };
        inline NotifyTemplate& setSmsRecoverContent(string smsRecoverContent) { DARABONBA_PTR_SET_VALUE(smsRecoverContent_, smsRecoverContent) };


        // ttsContent Field Functions 
        bool hasTtsContent() const { return this->ttsContent_ != nullptr;};
        void deleteTtsContent() { this->ttsContent_ = nullptr;};
        inline string getTtsContent() const { DARABONBA_PTR_GET_DEFAULT(ttsContent_, "") };
        inline NotifyTemplate& setTtsContent(string ttsContent) { DARABONBA_PTR_SET_VALUE(ttsContent_, ttsContent) };


        // ttsRecoverContent Field Functions 
        bool hasTtsRecoverContent() const { return this->ttsRecoverContent_ != nullptr;};
        void deleteTtsRecoverContent() { this->ttsRecoverContent_ = nullptr;};
        inline string getTtsRecoverContent() const { DARABONBA_PTR_GET_DEFAULT(ttsRecoverContent_, "") };
        inline NotifyTemplate& setTtsRecoverContent(string ttsRecoverContent) { DARABONBA_PTR_SET_VALUE(ttsRecoverContent_, ttsRecoverContent) };


      protected:
        // The content of the alert notification sent through email.
        shared_ptr<string> emailContent_ {};
        // The content of the alert resolution notification sent through email.
        shared_ptr<string> emailRecoverContent_ {};
        // The title of the alert resolution notification sent through email.
        shared_ptr<string> emailRecoverTitle_ {};
        // The title of the alert notification sent through email.
        shared_ptr<string> emailTitle_ {};
        // The content of the alert notification sent by the IM robot.
        shared_ptr<string> robotContent_ {};
        // The content of the alert notification sent through text message.
        shared_ptr<string> smsContent_ {};
        // The content of the alert resolution notification sent through text message.
        shared_ptr<string> smsRecoverContent_ {};
        // The content of the alert notification by phone.
        shared_ptr<string> ttsContent_ {};
        // The content of the alert resolution notification by phone.
        shared_ptr<string> ttsRecoverContent_ {};
      };

      class NotifyRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotifyRule& obj) { 
          DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
          DARABONBA_PTR_TO_JSON(NotifyEndTime, notifyEndTime_);
          DARABONBA_PTR_TO_JSON(NotifyObjects, notifyObjects_);
          DARABONBA_PTR_TO_JSON(NotifyStartTime, notifyStartTime_);
        };
        friend void from_json(const Darabonba::Json& j, NotifyRule& obj) { 
          DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
          DARABONBA_PTR_FROM_JSON(NotifyEndTime, notifyEndTime_);
          DARABONBA_PTR_FROM_JSON(NotifyObjects, notifyObjects_);
          DARABONBA_PTR_FROM_JSON(NotifyStartTime, notifyStartTime_);
        };
        NotifyRule() = default ;
        NotifyRule(const NotifyRule &) = default ;
        NotifyRule(NotifyRule &&) = default ;
        NotifyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotifyRule() = default ;
        NotifyRule& operator=(const NotifyRule &) = default ;
        NotifyRule& operator=(NotifyRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NotifyObjects : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NotifyObjects& obj) { 
            DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
            DARABONBA_PTR_TO_JSON(NotifyObjectId, notifyObjectId_);
            DARABONBA_PTR_TO_JSON(NotifyObjectName, notifyObjectName_);
            DARABONBA_PTR_TO_JSON(NotifyObjectType, notifyObjectType_);
          };
          friend void from_json(const Darabonba::Json& j, NotifyObjects& obj) { 
            DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
            DARABONBA_PTR_FROM_JSON(NotifyObjectId, notifyObjectId_);
            DARABONBA_PTR_FROM_JSON(NotifyObjectName, notifyObjectName_);
            DARABONBA_PTR_FROM_JSON(NotifyObjectType, notifyObjectType_);
          };
          NotifyObjects() = default ;
          NotifyObjects(const NotifyObjects &) = default ;
          NotifyObjects(NotifyObjects &&) = default ;
          NotifyObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NotifyObjects() = default ;
          NotifyObjects& operator=(const NotifyObjects &) = default ;
          NotifyObjects& operator=(NotifyObjects &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->notifyChannels_ == nullptr
        && this->notifyObjectId_ == nullptr && this->notifyObjectName_ == nullptr && this->notifyObjectType_ == nullptr; };
          // notifyChannels Field Functions 
          bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
          void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
          inline const vector<string> & getNotifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
          inline vector<string> getNotifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
          inline NotifyObjects& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
          inline NotifyObjects& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


          // notifyObjectId Field Functions 
          bool hasNotifyObjectId() const { return this->notifyObjectId_ != nullptr;};
          void deleteNotifyObjectId() { this->notifyObjectId_ = nullptr;};
          inline int64_t getNotifyObjectId() const { DARABONBA_PTR_GET_DEFAULT(notifyObjectId_, 0L) };
          inline NotifyObjects& setNotifyObjectId(int64_t notifyObjectId) { DARABONBA_PTR_SET_VALUE(notifyObjectId_, notifyObjectId) };


          // notifyObjectName Field Functions 
          bool hasNotifyObjectName() const { return this->notifyObjectName_ != nullptr;};
          void deleteNotifyObjectName() { this->notifyObjectName_ = nullptr;};
          inline string getNotifyObjectName() const { DARABONBA_PTR_GET_DEFAULT(notifyObjectName_, "") };
          inline NotifyObjects& setNotifyObjectName(string notifyObjectName) { DARABONBA_PTR_SET_VALUE(notifyObjectName_, notifyObjectName) };


          // notifyObjectType Field Functions 
          bool hasNotifyObjectType() const { return this->notifyObjectType_ != nullptr;};
          void deleteNotifyObjectType() { this->notifyObjectType_ = nullptr;};
          inline string getNotifyObjectType() const { DARABONBA_PTR_GET_DEFAULT(notifyObjectType_, "") };
          inline NotifyObjects& setNotifyObjectType(string notifyObjectType) { DARABONBA_PTR_SET_VALUE(notifyObjectType_, notifyObjectType) };


        protected:
          // The notification methods specified for a contact.
          shared_ptr<vector<string>> notifyChannels_ {};
          // The ID of the notification object.
          shared_ptr<int64_t> notifyObjectId_ {};
          // The name of the notification object.
          shared_ptr<string> notifyObjectName_ {};
          // The type of the notification object. Valid values:
          // 
          // *   CONTACT: contact
          // *   CONTACT_GROUP: contact group
          // *   ARMS_CONTACT: ARMS contact
          // *   ARMS_CONTACT_GROUP: ARMS contact group
          // *   DING_ROBOT_GROUP: DingTalk, Lark, WeCom, or IM robot
          // *   CONTACT_SCHEDULE: user on duty defined by a schedule
          shared_ptr<string> notifyObjectType_ {};
        };

        virtual bool empty() const override { return this->notifyChannels_ == nullptr
        && this->notifyEndTime_ == nullptr && this->notifyObjects_ == nullptr && this->notifyStartTime_ == nullptr; };
        // notifyChannels Field Functions 
        bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
        void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
        inline const vector<string> & getNotifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
        inline vector<string> getNotifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
        inline NotifyRule& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
        inline NotifyRule& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


        // notifyEndTime Field Functions 
        bool hasNotifyEndTime() const { return this->notifyEndTime_ != nullptr;};
        void deleteNotifyEndTime() { this->notifyEndTime_ = nullptr;};
        inline string getNotifyEndTime() const { DARABONBA_PTR_GET_DEFAULT(notifyEndTime_, "") };
        inline NotifyRule& setNotifyEndTime(string notifyEndTime) { DARABONBA_PTR_SET_VALUE(notifyEndTime_, notifyEndTime) };


        // notifyObjects Field Functions 
        bool hasNotifyObjects() const { return this->notifyObjects_ != nullptr;};
        void deleteNotifyObjects() { this->notifyObjects_ = nullptr;};
        inline const vector<NotifyRule::NotifyObjects> & getNotifyObjects() const { DARABONBA_PTR_GET_CONST(notifyObjects_, vector<NotifyRule::NotifyObjects>) };
        inline vector<NotifyRule::NotifyObjects> getNotifyObjects() { DARABONBA_PTR_GET(notifyObjects_, vector<NotifyRule::NotifyObjects>) };
        inline NotifyRule& setNotifyObjects(const vector<NotifyRule::NotifyObjects> & notifyObjects) { DARABONBA_PTR_SET_VALUE(notifyObjects_, notifyObjects) };
        inline NotifyRule& setNotifyObjects(vector<NotifyRule::NotifyObjects> && notifyObjects) { DARABONBA_PTR_SET_RVALUE(notifyObjects_, notifyObjects) };


        // notifyStartTime Field Functions 
        bool hasNotifyStartTime() const { return this->notifyStartTime_ != nullptr;};
        void deleteNotifyStartTime() { this->notifyStartTime_ = nullptr;};
        inline string getNotifyStartTime() const { DARABONBA_PTR_GET_DEFAULT(notifyStartTime_, "") };
        inline NotifyRule& setNotifyStartTime(string notifyStartTime) { DARABONBA_PTR_SET_VALUE(notifyStartTime_, notifyStartTime) };


      protected:
        // The notification method.
        shared_ptr<vector<string>> notifyChannels_ {};
        // The end time of the notification window.
        shared_ptr<string> notifyEndTime_ {};
        // An array of notification objects.
        shared_ptr<vector<NotifyRule::NotifyObjects>> notifyObjects_ {};
        // The start time of the notification window.
        shared_ptr<string> notifyStartTime_ {};
      };

      class MatchingRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchingRules& obj) { 
          DARABONBA_PTR_TO_JSON(MatchingConditions, matchingConditions_);
        };
        friend void from_json(const Darabonba::Json& j, MatchingRules& obj) { 
          DARABONBA_PTR_FROM_JSON(MatchingConditions, matchingConditions_);
        };
        MatchingRules() = default ;
        MatchingRules(const MatchingRules &) = default ;
        MatchingRules(MatchingRules &&) = default ;
        MatchingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchingRules() = default ;
        MatchingRules& operator=(const MatchingRules &) = default ;
        MatchingRules& operator=(MatchingRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MatchingConditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MatchingConditions& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MatchingConditions& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MatchingConditions() = default ;
          MatchingConditions(const MatchingConditions &) = default ;
          MatchingConditions(MatchingConditions &&) = default ;
          MatchingConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MatchingConditions() = default ;
          MatchingConditions& operator=(const MatchingConditions &) = default ;
          MatchingConditions& operator=(MatchingConditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline MatchingConditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline MatchingConditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline MatchingConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the matching condition.
          shared_ptr<string> key_ {};
          // The logical operator of the matching condition. Valid values:
          // 
          // *   `eq`: equal to
          // *   `neq`: not equal to
          // *   `in`: contains
          // *   `nin`: does not contain
          // *   `re`: regular expression match
          // *   `nre`: regular expression mismatch
          shared_ptr<string> operator_ {};
          // The value of the matching condition.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->matchingConditions_ == nullptr; };
        // matchingConditions Field Functions 
        bool hasMatchingConditions() const { return this->matchingConditions_ != nullptr;};
        void deleteMatchingConditions() { this->matchingConditions_ = nullptr;};
        inline const vector<MatchingRules::MatchingConditions> & getMatchingConditions() const { DARABONBA_PTR_GET_CONST(matchingConditions_, vector<MatchingRules::MatchingConditions>) };
        inline vector<MatchingRules::MatchingConditions> getMatchingConditions() { DARABONBA_PTR_GET(matchingConditions_, vector<MatchingRules::MatchingConditions>) };
        inline MatchingRules& setMatchingConditions(const vector<MatchingRules::MatchingConditions> & matchingConditions) { DARABONBA_PTR_SET_VALUE(matchingConditions_, matchingConditions) };
        inline MatchingRules& setMatchingConditions(vector<MatchingRules::MatchingConditions> && matchingConditions) { DARABONBA_PTR_SET_RVALUE(matchingConditions_, matchingConditions) };


      protected:
        // The matching conditions.
        shared_ptr<vector<MatchingRules::MatchingConditions>> matchingConditions_ {};
      };

      class GroupRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupRule& obj) { 
          DARABONBA_PTR_TO_JSON(GroupInterval, groupInterval_);
          DARABONBA_PTR_TO_JSON(GroupWait, groupWait_);
          DARABONBA_PTR_TO_JSON(GroupingFields, groupingFields_);
        };
        friend void from_json(const Darabonba::Json& j, GroupRule& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupInterval, groupInterval_);
          DARABONBA_PTR_FROM_JSON(GroupWait, groupWait_);
          DARABONBA_PTR_FROM_JSON(GroupingFields, groupingFields_);
        };
        GroupRule() = default ;
        GroupRule(const GroupRule &) = default ;
        GroupRule(GroupRule &&) = default ;
        GroupRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupRule() = default ;
        GroupRule& operator=(const GroupRule &) = default ;
        GroupRule& operator=(GroupRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupInterval_ == nullptr
        && this->groupWait_ == nullptr && this->groupingFields_ == nullptr; };
        // groupInterval Field Functions 
        bool hasGroupInterval() const { return this->groupInterval_ != nullptr;};
        void deleteGroupInterval() { this->groupInterval_ = nullptr;};
        inline int64_t getGroupInterval() const { DARABONBA_PTR_GET_DEFAULT(groupInterval_, 0L) };
        inline GroupRule& setGroupInterval(int64_t groupInterval) { DARABONBA_PTR_SET_VALUE(groupInterval_, groupInterval) };


        // groupWait Field Functions 
        bool hasGroupWait() const { return this->groupWait_ != nullptr;};
        void deleteGroupWait() { this->groupWait_ = nullptr;};
        inline int64_t getGroupWait() const { DARABONBA_PTR_GET_DEFAULT(groupWait_, 0L) };
        inline GroupRule& setGroupWait(int64_t groupWait) { DARABONBA_PTR_SET_VALUE(groupWait_, groupWait) };


        // groupingFields Field Functions 
        bool hasGroupingFields() const { return this->groupingFields_ != nullptr;};
        void deleteGroupingFields() { this->groupingFields_ = nullptr;};
        inline const vector<string> & getGroupingFields() const { DARABONBA_PTR_GET_CONST(groupingFields_, vector<string>) };
        inline vector<string> getGroupingFields() { DARABONBA_PTR_GET(groupingFields_, vector<string>) };
        inline GroupRule& setGroupingFields(const vector<string> & groupingFields) { DARABONBA_PTR_SET_VALUE(groupingFields_, groupingFields) };
        inline GroupRule& setGroupingFields(vector<string> && groupingFields) { DARABONBA_PTR_SET_RVALUE(groupingFields_, groupingFields) };


      protected:
        // The time interval of grouping. Unit: seconds. Default value: 30.
        shared_ptr<int64_t> groupInterval_ {};
        // The waiting time for grouping. Unit: seconds. Default value: 5.
        shared_ptr<int64_t> groupWait_ {};
        // An array of alert event group objects.
        // 
        // *   If you do not specify the groupingFields field, all alerts will be sent to contacts based on `alertname`.
        // *   If you specify the groupingFields field, alerts with the same field will be sent to contacts in one notification.
        shared_ptr<vector<string>> groupingFields_ {};
      };

      virtual bool empty() const override { return this->directedMode_ == nullptr
        && this->escalationPolicyId_ == nullptr && this->groupRule_ == nullptr && this->id_ == nullptr && this->integrationId_ == nullptr && this->matchingRules_ == nullptr
        && this->name_ == nullptr && this->notifyRule_ == nullptr && this->notifyTemplate_ == nullptr && this->repeat_ == nullptr && this->repeatInterval_ == nullptr
        && this->sendRecoverMessage_ == nullptr && this->state_ == nullptr; };
      // directedMode Field Functions 
      bool hasDirectedMode() const { return this->directedMode_ != nullptr;};
      void deleteDirectedMode() { this->directedMode_ = nullptr;};
      inline bool getDirectedMode() const { DARABONBA_PTR_GET_DEFAULT(directedMode_, false) };
      inline NotificationPolicy& setDirectedMode(bool directedMode) { DARABONBA_PTR_SET_VALUE(directedMode_, directedMode) };


      // escalationPolicyId Field Functions 
      bool hasEscalationPolicyId() const { return this->escalationPolicyId_ != nullptr;};
      void deleteEscalationPolicyId() { this->escalationPolicyId_ = nullptr;};
      inline int64_t getEscalationPolicyId() const { DARABONBA_PTR_GET_DEFAULT(escalationPolicyId_, 0L) };
      inline NotificationPolicy& setEscalationPolicyId(int64_t escalationPolicyId) { DARABONBA_PTR_SET_VALUE(escalationPolicyId_, escalationPolicyId) };


      // groupRule Field Functions 
      bool hasGroupRule() const { return this->groupRule_ != nullptr;};
      void deleteGroupRule() { this->groupRule_ = nullptr;};
      inline const NotificationPolicy::GroupRule & getGroupRule() const { DARABONBA_PTR_GET_CONST(groupRule_, NotificationPolicy::GroupRule) };
      inline NotificationPolicy::GroupRule getGroupRule() { DARABONBA_PTR_GET(groupRule_, NotificationPolicy::GroupRule) };
      inline NotificationPolicy& setGroupRule(const NotificationPolicy::GroupRule & groupRule) { DARABONBA_PTR_SET_VALUE(groupRule_, groupRule) };
      inline NotificationPolicy& setGroupRule(NotificationPolicy::GroupRule && groupRule) { DARABONBA_PTR_SET_RVALUE(groupRule_, groupRule) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline NotificationPolicy& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // integrationId Field Functions 
      bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
      void deleteIntegrationId() { this->integrationId_ = nullptr;};
      inline int64_t getIntegrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
      inline NotificationPolicy& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


      // matchingRules Field Functions 
      bool hasMatchingRules() const { return this->matchingRules_ != nullptr;};
      void deleteMatchingRules() { this->matchingRules_ = nullptr;};
      inline const vector<NotificationPolicy::MatchingRules> & getMatchingRules() const { DARABONBA_PTR_GET_CONST(matchingRules_, vector<NotificationPolicy::MatchingRules>) };
      inline vector<NotificationPolicy::MatchingRules> getMatchingRules() { DARABONBA_PTR_GET(matchingRules_, vector<NotificationPolicy::MatchingRules>) };
      inline NotificationPolicy& setMatchingRules(const vector<NotificationPolicy::MatchingRules> & matchingRules) { DARABONBA_PTR_SET_VALUE(matchingRules_, matchingRules) };
      inline NotificationPolicy& setMatchingRules(vector<NotificationPolicy::MatchingRules> && matchingRules) { DARABONBA_PTR_SET_RVALUE(matchingRules_, matchingRules) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NotificationPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notifyRule Field Functions 
      bool hasNotifyRule() const { return this->notifyRule_ != nullptr;};
      void deleteNotifyRule() { this->notifyRule_ = nullptr;};
      inline const NotificationPolicy::NotifyRule & getNotifyRule() const { DARABONBA_PTR_GET_CONST(notifyRule_, NotificationPolicy::NotifyRule) };
      inline NotificationPolicy::NotifyRule getNotifyRule() { DARABONBA_PTR_GET(notifyRule_, NotificationPolicy::NotifyRule) };
      inline NotificationPolicy& setNotifyRule(const NotificationPolicy::NotifyRule & notifyRule) { DARABONBA_PTR_SET_VALUE(notifyRule_, notifyRule) };
      inline NotificationPolicy& setNotifyRule(NotificationPolicy::NotifyRule && notifyRule) { DARABONBA_PTR_SET_RVALUE(notifyRule_, notifyRule) };


      // notifyTemplate Field Functions 
      bool hasNotifyTemplate() const { return this->notifyTemplate_ != nullptr;};
      void deleteNotifyTemplate() { this->notifyTemplate_ = nullptr;};
      inline const NotificationPolicy::NotifyTemplate & getNotifyTemplate() const { DARABONBA_PTR_GET_CONST(notifyTemplate_, NotificationPolicy::NotifyTemplate) };
      inline NotificationPolicy::NotifyTemplate getNotifyTemplate() { DARABONBA_PTR_GET(notifyTemplate_, NotificationPolicy::NotifyTemplate) };
      inline NotificationPolicy& setNotifyTemplate(const NotificationPolicy::NotifyTemplate & notifyTemplate) { DARABONBA_PTR_SET_VALUE(notifyTemplate_, notifyTemplate) };
      inline NotificationPolicy& setNotifyTemplate(NotificationPolicy::NotifyTemplate && notifyTemplate) { DARABONBA_PTR_SET_RVALUE(notifyTemplate_, notifyTemplate) };


      // repeat Field Functions 
      bool hasRepeat() const { return this->repeat_ != nullptr;};
      void deleteRepeat() { this->repeat_ = nullptr;};
      inline bool getRepeat() const { DARABONBA_PTR_GET_DEFAULT(repeat_, false) };
      inline NotificationPolicy& setRepeat(bool repeat) { DARABONBA_PTR_SET_VALUE(repeat_, repeat) };


      // repeatInterval Field Functions 
      bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
      void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
      inline int64_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
      inline NotificationPolicy& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


      // sendRecoverMessage Field Functions 
      bool hasSendRecoverMessage() const { return this->sendRecoverMessage_ != nullptr;};
      void deleteSendRecoverMessage() { this->sendRecoverMessage_ = nullptr;};
      inline bool getSendRecoverMessage() const { DARABONBA_PTR_GET_DEFAULT(sendRecoverMessage_, false) };
      inline NotificationPolicy& setSendRecoverMessage(bool sendRecoverMessage) { DARABONBA_PTR_SET_VALUE(sendRecoverMessage_, sendRecoverMessage) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline NotificationPolicy& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // Specifies whether to enable simple mode.
      shared_ptr<bool> directedMode_ {};
      // The ID of the escalation policy.
      shared_ptr<int64_t> escalationPolicyId_ {};
      // An array of alert event group objects.
      shared_ptr<NotificationPolicy::GroupRule> groupRule_ {};
      // The ID of the notification policy.
      shared_ptr<int64_t> id_ {};
      // The integration ID of the ticket system to which alerts are pushed.
      shared_ptr<int64_t> integrationId_ {};
      // The matching rules.
      shared_ptr<vector<NotificationPolicy::MatchingRules>> matchingRules_ {};
      // The name of the notification policy.
      shared_ptr<string> name_ {};
      // An array of notification rule objects.
      shared_ptr<NotificationPolicy::NotifyRule> notifyRule_ {};
      // The notification template.
      shared_ptr<NotificationPolicy::NotifyTemplate> notifyTemplate_ {};
      // Indicates whether a notification is resent for a long-lasting unresolved alert. Default value: true. Valid values:
      // 
      // *   `true`: The system resends a notification for a long-lasting unresolved alert at a specified time interval.
      // *   `false`: The system sends a notification for a long-lasting unresolved alert based on an escalation policy.
      shared_ptr<bool> repeat_ {};
      // The time interval at which a notification is resent for a long-lasting unresolved alert. Unit: seconds.
      shared_ptr<int64_t> repeatInterval_ {};
      // Indicates whether the status of an alert automatically changes to Resolved when all events related to the alert change to the Restored state. ARMS notifies contacts when the alert status changes to Resolved.
      // 
      // *   `true`: The system sends a notification.
      // *   `false`: The system does not send a notification.
      shared_ptr<bool> sendRecoverMessage_ {};
      // Indicates whether the notification policy is enabled. Valid values: enable and disable.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->notificationPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // notificationPolicy Field Functions 
    bool hasNotificationPolicy() const { return this->notificationPolicy_ != nullptr;};
    void deleteNotificationPolicy() { this->notificationPolicy_ = nullptr;};
    inline const CreateOrUpdateNotificationPolicyResponseBody::NotificationPolicy & getNotificationPolicy() const { DARABONBA_PTR_GET_CONST(notificationPolicy_, CreateOrUpdateNotificationPolicyResponseBody::NotificationPolicy) };
    inline CreateOrUpdateNotificationPolicyResponseBody::NotificationPolicy getNotificationPolicy() { DARABONBA_PTR_GET(notificationPolicy_, CreateOrUpdateNotificationPolicyResponseBody::NotificationPolicy) };
    inline CreateOrUpdateNotificationPolicyResponseBody& setNotificationPolicy(const CreateOrUpdateNotificationPolicyResponseBody::NotificationPolicy & notificationPolicy) { DARABONBA_PTR_SET_VALUE(notificationPolicy_, notificationPolicy) };
    inline CreateOrUpdateNotificationPolicyResponseBody& setNotificationPolicy(CreateOrUpdateNotificationPolicyResponseBody::NotificationPolicy && notificationPolicy) { DARABONBA_PTR_SET_RVALUE(notificationPolicy_, notificationPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateNotificationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of notification policy objects.
    shared_ptr<CreateOrUpdateNotificationPolicyResponseBody::NotificationPolicy> notificationPolicy_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
