// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIAlarmRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIAlarmRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRule, DIAlarmRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIAlarmRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRule, DIAlarmRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDIAlarmRuleResponseBody() = default ;
    GetDIAlarmRuleResponseBody(const GetDIAlarmRuleResponseBody &) = default ;
    GetDIAlarmRuleResponseBody(GetDIAlarmRuleResponseBody &&) = default ;
    GetDIAlarmRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIAlarmRuleResponseBody() = default ;
    GetDIAlarmRuleResponseBody& operator=(const GetDIAlarmRuleResponseBody &) = default ;
    GetDIAlarmRuleResponseBody& operator=(GetDIAlarmRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DIAlarmRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DIAlarmRule& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(CreatedUid, createdUid_);
        DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
        DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(MetricType, metricType_);
        DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettings_);
        DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditions_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(UpdatedUid, updatedUid_);
      };
      friend void from_json(const Darabonba::Json& j, DIAlarmRule& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(CreatedUid, createdUid_);
        DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
        DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
        DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettings_);
        DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditions_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(UpdatedUid, updatedUid_);
      };
      DIAlarmRule() = default ;
      DIAlarmRule(const DIAlarmRule &) = default ;
      DIAlarmRule(DIAlarmRule &&) = default ;
      DIAlarmRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DIAlarmRule() = default ;
      DIAlarmRule& operator=(const DIAlarmRule &) = default ;
      DIAlarmRule& operator=(DIAlarmRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TriggerConditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TriggerConditions& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, TriggerConditions& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        TriggerConditions() = default ;
        TriggerConditions(const TriggerConditions &) = default ;
        TriggerConditions(TriggerConditions &&) = default ;
        TriggerConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TriggerConditions() = default ;
        TriggerConditions& operator=(const TriggerConditions &) = default ;
        TriggerConditions& operator=(TriggerConditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->severity_ == nullptr && this->threshold_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline TriggerConditions& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline TriggerConditions& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline int64_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0L) };
        inline TriggerConditions& setThreshold(int64_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // The time interval for alert calculation. Unit: minutes.
        shared_ptr<int64_t> duration_ {};
        // The severity level. Valid values:
        // 
        // *   Warning
        // *   Critical
        shared_ptr<string> severity_ {};
        // The alert threshold.
        // 
        // *   If the alert rule is for task status, no threshold is used.
        // *   If the alert rule is for failovers, specify the number of failovers.
        // *   If the alert rule is for latency, the threshold is the latency duration, in seconds.
        shared_ptr<int64_t> threshold_ {};
      };

      class NotificationSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotificationSettings& obj) { 
          DARABONBA_PTR_TO_JSON(InhibitionInterval, inhibitionInterval_);
          DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
          DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
        };
        friend void from_json(const Darabonba::Json& j, NotificationSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(InhibitionInterval, inhibitionInterval_);
          DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
          DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
        };
        NotificationSettings() = default ;
        NotificationSettings(const NotificationSettings &) = default ;
        NotificationSettings(NotificationSettings &&) = default ;
        NotificationSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotificationSettings() = default ;
        NotificationSettings& operator=(const NotificationSettings &) = default ;
        NotificationSettings& operator=(NotificationSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NotificationReceivers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NotificationReceivers& obj) { 
            DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
            DARABONBA_PTR_TO_JSON(ReceiverValues, receiverValues_);
          };
          friend void from_json(const Darabonba::Json& j, NotificationReceivers& obj) { 
            DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
            DARABONBA_PTR_FROM_JSON(ReceiverValues, receiverValues_);
          };
          NotificationReceivers() = default ;
          NotificationReceivers(const NotificationReceivers &) = default ;
          NotificationReceivers(NotificationReceivers &&) = default ;
          NotificationReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NotificationReceivers() = default ;
          NotificationReceivers& operator=(const NotificationReceivers &) = default ;
          NotificationReceivers& operator=(NotificationReceivers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->receiverType_ == nullptr
        && this->receiverValues_ == nullptr; };
          // receiverType Field Functions 
          bool hasReceiverType() const { return this->receiverType_ != nullptr;};
          void deleteReceiverType() { this->receiverType_ = nullptr;};
          inline string getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
          inline NotificationReceivers& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


          // receiverValues Field Functions 
          bool hasReceiverValues() const { return this->receiverValues_ != nullptr;};
          void deleteReceiverValues() { this->receiverValues_ = nullptr;};
          inline const vector<string> & getReceiverValues() const { DARABONBA_PTR_GET_CONST(receiverValues_, vector<string>) };
          inline vector<string> getReceiverValues() { DARABONBA_PTR_GET(receiverValues_, vector<string>) };
          inline NotificationReceivers& setReceiverValues(const vector<string> & receiverValues) { DARABONBA_PTR_SET_VALUE(receiverValues_, receiverValues) };
          inline NotificationReceivers& setReceiverValues(vector<string> && receiverValues) { DARABONBA_PTR_SET_RVALUE(receiverValues_, receiverValues) };


        protected:
          // The recipient type. Valid values: AliyunUid and DingToken.
          // 
          // *   If the alert notification method is Mail, Phone, or Sms, the value of this parameter is **AliyunUid**, which indicates the Alibaba Cloud account ID.
          // *   If the alert notification method is Ding, the value of this parameter is **DingToken**, which indicates the DingTalk chatbot token.
          shared_ptr<string> receiverType_ {};
          // The recipients.
          shared_ptr<vector<string>> receiverValues_ {};
        };

        class NotificationChannels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NotificationChannels& obj) { 
            DARABONBA_PTR_TO_JSON(Channels, channels_);
            DARABONBA_PTR_TO_JSON(Severity, severity_);
          };
          friend void from_json(const Darabonba::Json& j, NotificationChannels& obj) { 
            DARABONBA_PTR_FROM_JSON(Channels, channels_);
            DARABONBA_PTR_FROM_JSON(Severity, severity_);
          };
          NotificationChannels() = default ;
          NotificationChannels(const NotificationChannels &) = default ;
          NotificationChannels(NotificationChannels &&) = default ;
          NotificationChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NotificationChannels() = default ;
          NotificationChannels& operator=(const NotificationChannels &) = default ;
          NotificationChannels& operator=(NotificationChannels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->channels_ == nullptr
        && this->severity_ == nullptr; };
          // channels Field Functions 
          bool hasChannels() const { return this->channels_ != nullptr;};
          void deleteChannels() { this->channels_ = nullptr;};
          inline const vector<string> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
          inline vector<string> getChannels() { DARABONBA_PTR_GET(channels_, vector<string>) };
          inline NotificationChannels& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
          inline NotificationChannels& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline NotificationChannels& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        protected:
          // The alert notification methods.
          shared_ptr<vector<string>> channels_ {};
          // The severity level. Valid values:
          // 
          // *   Warning
          // *   Critical
          shared_ptr<string> severity_ {};
        };

        virtual bool empty() const override { return this->inhibitionInterval_ == nullptr
        && this->notificationChannels_ == nullptr && this->notificationReceivers_ == nullptr; };
        // inhibitionInterval Field Functions 
        bool hasInhibitionInterval() const { return this->inhibitionInterval_ != nullptr;};
        void deleteInhibitionInterval() { this->inhibitionInterval_ = nullptr;};
        inline int32_t getInhibitionInterval() const { DARABONBA_PTR_GET_DEFAULT(inhibitionInterval_, 0) };
        inline NotificationSettings& setInhibitionInterval(int32_t inhibitionInterval) { DARABONBA_PTR_SET_VALUE(inhibitionInterval_, inhibitionInterval) };


        // notificationChannels Field Functions 
        bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
        void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
        inline const vector<NotificationSettings::NotificationChannels> & getNotificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<NotificationSettings::NotificationChannels>) };
        inline vector<NotificationSettings::NotificationChannels> getNotificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<NotificationSettings::NotificationChannels>) };
        inline NotificationSettings& setNotificationChannels(const vector<NotificationSettings::NotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
        inline NotificationSettings& setNotificationChannels(vector<NotificationSettings::NotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


        // notificationReceivers Field Functions 
        bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
        void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
        inline const vector<NotificationSettings::NotificationReceivers> & getNotificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<NotificationSettings::NotificationReceivers>) };
        inline vector<NotificationSettings::NotificationReceivers> getNotificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<NotificationSettings::NotificationReceivers>) };
        inline NotificationSettings& setNotificationReceivers(const vector<NotificationSettings::NotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
        inline NotificationSettings& setNotificationReceivers(vector<NotificationSettings::NotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


      protected:
        // The duration of the alert suppression interval. Unit: minutes.
        shared_ptr<int32_t> inhibitionInterval_ {};
        // The alert notification methods.
        shared_ptr<vector<NotificationSettings::NotificationChannels>> notificationChannels_ {};
        // The alert notification recipients.
        shared_ptr<vector<NotificationSettings::NotificationReceivers>> notificationReceivers_ {};
      };

      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->createdUid_ == nullptr && this->DIAlarmRuleId_ == nullptr && this->DIJobId_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr
        && this->metricType_ == nullptr && this->notificationSettings_ == nullptr && this->triggerConditions_ == nullptr && this->updatedTime_ == nullptr && this->updatedUid_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline DIAlarmRule& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // createdUid Field Functions 
      bool hasCreatedUid() const { return this->createdUid_ != nullptr;};
      void deleteCreatedUid() { this->createdUid_ = nullptr;};
      inline string getCreatedUid() const { DARABONBA_PTR_GET_DEFAULT(createdUid_, "") };
      inline DIAlarmRule& setCreatedUid(string createdUid) { DARABONBA_PTR_SET_VALUE(createdUid_, createdUid) };


      // DIAlarmRuleId Field Functions 
      bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
      void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
      inline int64_t getDIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, 0L) };
      inline DIAlarmRule& setDIAlarmRuleId(int64_t DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


      // DIJobId Field Functions 
      bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
      void deleteDIJobId() { this->DIJobId_ = nullptr;};
      inline int64_t getDIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
      inline DIAlarmRule& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DIAlarmRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DIAlarmRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // metricType Field Functions 
      bool hasMetricType() const { return this->metricType_ != nullptr;};
      void deleteMetricType() { this->metricType_ = nullptr;};
      inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
      inline DIAlarmRule& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


      // notificationSettings Field Functions 
      bool hasNotificationSettings() const { return this->notificationSettings_ != nullptr;};
      void deleteNotificationSettings() { this->notificationSettings_ = nullptr;};
      inline const DIAlarmRule::NotificationSettings & getNotificationSettings() const { DARABONBA_PTR_GET_CONST(notificationSettings_, DIAlarmRule::NotificationSettings) };
      inline DIAlarmRule::NotificationSettings getNotificationSettings() { DARABONBA_PTR_GET(notificationSettings_, DIAlarmRule::NotificationSettings) };
      inline DIAlarmRule& setNotificationSettings(const DIAlarmRule::NotificationSettings & notificationSettings) { DARABONBA_PTR_SET_VALUE(notificationSettings_, notificationSettings) };
      inline DIAlarmRule& setNotificationSettings(DIAlarmRule::NotificationSettings && notificationSettings) { DARABONBA_PTR_SET_RVALUE(notificationSettings_, notificationSettings) };


      // triggerConditions Field Functions 
      bool hasTriggerConditions() const { return this->triggerConditions_ != nullptr;};
      void deleteTriggerConditions() { this->triggerConditions_ = nullptr;};
      inline const vector<DIAlarmRule::TriggerConditions> & getTriggerConditions() const { DARABONBA_PTR_GET_CONST(triggerConditions_, vector<DIAlarmRule::TriggerConditions>) };
      inline vector<DIAlarmRule::TriggerConditions> getTriggerConditions() { DARABONBA_PTR_GET(triggerConditions_, vector<DIAlarmRule::TriggerConditions>) };
      inline DIAlarmRule& setTriggerConditions(const vector<DIAlarmRule::TriggerConditions> & triggerConditions) { DARABONBA_PTR_SET_VALUE(triggerConditions_, triggerConditions) };
      inline DIAlarmRule& setTriggerConditions(vector<DIAlarmRule::TriggerConditions> && triggerConditions) { DARABONBA_PTR_SET_RVALUE(triggerConditions_, triggerConditions) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline DIAlarmRule& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // updatedUid Field Functions 
      bool hasUpdatedUid() const { return this->updatedUid_ != nullptr;};
      void deleteUpdatedUid() { this->updatedUid_ = nullptr;};
      inline string getUpdatedUid() const { DARABONBA_PTR_GET_DEFAULT(updatedUid_, "") };
      inline DIAlarmRule& setUpdatedUid(string updatedUid) { DARABONBA_PTR_SET_VALUE(updatedUid_, updatedUid) };


    protected:
      // The timestamp when the alert rule was created. Unit: seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The ID of the user who creates the alert rule.
      shared_ptr<string> createdUid_ {};
      // The alert rule ID.
      shared_ptr<int64_t> DIAlarmRuleId_ {};
      // The ID of the task with which the alert rule is associated.
      shared_ptr<int64_t> DIJobId_ {};
      // The description of the alert rule.
      shared_ptr<string> description_ {};
      // Indicates whether the alert rule is enabled.
      shared_ptr<bool> enabled_ {};
      // The metric type in the alert rule. Valid values:
      // 
      // *   Heartbeat
      // *   FailoverCount
      // *   Delay
      shared_ptr<string> metricType_ {};
      // The alert notification settings.
      shared_ptr<DIAlarmRule::NotificationSettings> notificationSettings_ {};
      // The conditions that are used to trigger the alert rule.
      shared_ptr<vector<DIAlarmRule::TriggerConditions>> triggerConditions_ {};
      // The timestamp when the alert rule was last updated. Unit: seconds.
      shared_ptr<int64_t> updatedTime_ {};
      // The ID of the user who last updates the alert rule.
      shared_ptr<string> updatedUid_ {};
    };

    virtual bool empty() const override { return this->DIAlarmRule_ == nullptr
        && this->requestId_ == nullptr; };
    // DIAlarmRule Field Functions 
    bool hasDIAlarmRule() const { return this->DIAlarmRule_ != nullptr;};
    void deleteDIAlarmRule() { this->DIAlarmRule_ = nullptr;};
    inline const GetDIAlarmRuleResponseBody::DIAlarmRule & getDIAlarmRule() const { DARABONBA_PTR_GET_CONST(DIAlarmRule_, GetDIAlarmRuleResponseBody::DIAlarmRule) };
    inline GetDIAlarmRuleResponseBody::DIAlarmRule getDIAlarmRule() { DARABONBA_PTR_GET(DIAlarmRule_, GetDIAlarmRuleResponseBody::DIAlarmRule) };
    inline GetDIAlarmRuleResponseBody& setDIAlarmRule(const GetDIAlarmRuleResponseBody::DIAlarmRule & dIAlarmRule) { DARABONBA_PTR_SET_VALUE(DIAlarmRule_, dIAlarmRule) };
    inline GetDIAlarmRuleResponseBody& setDIAlarmRule(GetDIAlarmRuleResponseBody::DIAlarmRule && dIAlarmRule) { DARABONBA_PTR_SET_RVALUE(DIAlarmRule_, dIAlarmRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDIAlarmRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the alert rule.
    shared_ptr<GetDIAlarmRuleResponseBody::DIAlarmRule> DIAlarmRule_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
