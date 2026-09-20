// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODY_HPP_
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
  class GetBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBaselineResponseBody() = default ;
    GetBaselineResponseBody(const GetBaselineResponseBody &) = default ;
    GetBaselineResponseBody(GetBaselineResponseBody &&) = default ;
    GetBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineResponseBody() = default ;
    GetBaselineResponseBody& operator=(const GetBaselineResponseBody &) = default ;
    GetBaselineResponseBody& operator=(GetBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlertEnabled, alertEnabled_);
        DARABONBA_PTR_TO_JSON(AlertMarginThreshold, alertMarginThreshold_);
        DARABONBA_PTR_TO_JSON(AlertSettings, alertSettings_);
        DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
        DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
        DARABONBA_PTR_TO_JSON(OverTimeSettings, overTimeSettings_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertEnabled, alertEnabled_);
        DARABONBA_PTR_FROM_JSON(AlertMarginThreshold, alertMarginThreshold_);
        DARABONBA_PTR_FROM_JSON(AlertSettings, alertSettings_);
        DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
        DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
        DARABONBA_PTR_FROM_JSON(OverTimeSettings, overTimeSettings_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OverTimeSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OverTimeSettings& obj) { 
          DARABONBA_PTR_TO_JSON(Cycle, cycle_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, OverTimeSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        OverTimeSettings() = default ;
        OverTimeSettings(const OverTimeSettings &) = default ;
        OverTimeSettings(OverTimeSettings &&) = default ;
        OverTimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OverTimeSettings() = default ;
        OverTimeSettings& operator=(const OverTimeSettings &) = default ;
        OverTimeSettings& operator=(OverTimeSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cycle_ == nullptr
        && this->time_ == nullptr; };
        // cycle Field Functions 
        bool hasCycle() const { return this->cycle_ != nullptr;};
        void deleteCycle() { this->cycle_ = nullptr;};
        inline int32_t getCycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, 0) };
        inline OverTimeSettings& setCycle(int32_t cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline OverTimeSettings& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The cycle corresponding to the committed time. The value is 1 for daily baselines. You can configure up to 24 cycles for hourly baselines.
        shared_ptr<int32_t> cycle_ {};
        // The committed time in hh:mm format, where hh ranges from 0 to 47 and mm ranges from 0 to 59.
        shared_ptr<string> time_ {};
      };

      class AlertSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertSettings& obj) { 
          DARABONBA_PTR_TO_JSON(AlertInterval, alertInterval_);
          DARABONBA_PTR_TO_JSON(AlertMaximum, alertMaximum_);
          DARABONBA_PTR_TO_JSON(AlertMethods, alertMethods_);
          DARABONBA_PTR_TO_JSON(AlertRecipient, alertRecipient_);
          DARABONBA_PTR_TO_JSON(AlertRecipientType, alertRecipientType_);
          DARABONBA_PTR_TO_JSON(AlertType, alertType_);
          DARABONBA_PTR_TO_JSON(BaselineAlertEnabled, baselineAlertEnabled_);
          DARABONBA_PTR_TO_JSON(DingRobots, dingRobots_);
          DARABONBA_PTR_TO_JSON(SilenceEndTime, silenceEndTime_);
          DARABONBA_PTR_TO_JSON(SilenceStartTime, silenceStartTime_);
          DARABONBA_PTR_TO_JSON(TopicSlowConfig, topicSlowConfig_);
          DARABONBA_PTR_TO_JSON(TopicTypes, topicTypes_);
          DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
        };
        friend void from_json(const Darabonba::Json& j, AlertSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertInterval, alertInterval_);
          DARABONBA_PTR_FROM_JSON(AlertMaximum, alertMaximum_);
          DARABONBA_PTR_FROM_JSON(AlertMethods, alertMethods_);
          DARABONBA_PTR_FROM_JSON(AlertRecipient, alertRecipient_);
          DARABONBA_PTR_FROM_JSON(AlertRecipientType, alertRecipientType_);
          DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
          DARABONBA_PTR_FROM_JSON(BaselineAlertEnabled, baselineAlertEnabled_);
          DARABONBA_PTR_FROM_JSON(DingRobots, dingRobots_);
          DARABONBA_PTR_FROM_JSON(SilenceEndTime, silenceEndTime_);
          DARABONBA_PTR_FROM_JSON(SilenceStartTime, silenceStartTime_);
          DARABONBA_PTR_FROM_JSON(TopicSlowConfig, topicSlowConfig_);
          DARABONBA_PTR_FROM_JSON(TopicTypes, topicTypes_);
          DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
        };
        AlertSettings() = default ;
        AlertSettings(const AlertSettings &) = default ;
        AlertSettings(AlertSettings &&) = default ;
        AlertSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertSettings() = default ;
        AlertSettings& operator=(const AlertSettings &) = default ;
        AlertSettings& operator=(AlertSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TopicSlowConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TopicSlowConfig& obj) { 
            DARABONBA_PTR_TO_JSON(MinOver, minOver_);
            DARABONBA_PTR_TO_JSON(OverFactor, overFactor_);
          };
          friend void from_json(const Darabonba::Json& j, TopicSlowConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(MinOver, minOver_);
            DARABONBA_PTR_FROM_JSON(OverFactor, overFactor_);
          };
          TopicSlowConfig() = default ;
          TopicSlowConfig(const TopicSlowConfig &) = default ;
          TopicSlowConfig(TopicSlowConfig &&) = default ;
          TopicSlowConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TopicSlowConfig() = default ;
          TopicSlowConfig& operator=(const TopicSlowConfig &) = default ;
          TopicSlowConfig& operator=(TopicSlowConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->minOver_ == nullptr
        && this->overFactor_ == nullptr; };
          // minOver Field Functions 
          bool hasMinOver() const { return this->minOver_ != nullptr;};
          void deleteMinOver() { this->minOver_ = nullptr;};
          inline int32_t getMinOver() const { DARABONBA_PTR_GET_DEFAULT(minOver_, 0) };
          inline TopicSlowConfig& setMinOver(int32_t minOver) { DARABONBA_PTR_SET_VALUE(minOver_, minOver) };


          // overFactor Field Functions 
          bool hasOverFactor() const { return this->overFactor_ != nullptr;};
          void deleteOverFactor() { this->overFactor_ = nullptr;};
          inline double getOverFactor() const { DARABONBA_PTR_GET_DEFAULT(overFactor_, 0.0) };
          inline TopicSlowConfig& setOverFactor(double overFactor) { DARABONBA_PTR_SET_VALUE(overFactor_, overFactor) };


        protected:
          shared_ptr<int32_t> minOver_ {};
          shared_ptr<double> overFactor_ {};
        };

        class DingRobots : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DingRobots& obj) { 
            DARABONBA_PTR_TO_JSON(AtAll, atAll_);
            DARABONBA_PTR_TO_JSON(WebUrl, webUrl_);
          };
          friend void from_json(const Darabonba::Json& j, DingRobots& obj) { 
            DARABONBA_PTR_FROM_JSON(AtAll, atAll_);
            DARABONBA_PTR_FROM_JSON(WebUrl, webUrl_);
          };
          DingRobots() = default ;
          DingRobots(const DingRobots &) = default ;
          DingRobots(DingRobots &&) = default ;
          DingRobots(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DingRobots() = default ;
          DingRobots& operator=(const DingRobots &) = default ;
          DingRobots& operator=(DingRobots &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->atAll_ == nullptr
        && this->webUrl_ == nullptr; };
          // atAll Field Functions 
          bool hasAtAll() const { return this->atAll_ != nullptr;};
          void deleteAtAll() { this->atAll_ = nullptr;};
          inline bool getAtAll() const { DARABONBA_PTR_GET_DEFAULT(atAll_, false) };
          inline DingRobots& setAtAll(bool atAll) { DARABONBA_PTR_SET_VALUE(atAll_, atAll) };


          // webUrl Field Functions 
          bool hasWebUrl() const { return this->webUrl_ != nullptr;};
          void deleteWebUrl() { this->webUrl_ = nullptr;};
          inline string getWebUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
          inline DingRobots& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


        protected:
          // Indicates whether to @ all members.
          shared_ptr<bool> atAll_ {};
          // The webhook URL of the DingTalk chatbot.
          shared_ptr<string> webUrl_ {};
        };

        virtual bool empty() const override { return this->alertInterval_ == nullptr
        && this->alertMaximum_ == nullptr && this->alertMethods_ == nullptr && this->alertRecipient_ == nullptr && this->alertRecipientType_ == nullptr && this->alertType_ == nullptr
        && this->baselineAlertEnabled_ == nullptr && this->dingRobots_ == nullptr && this->silenceEndTime_ == nullptr && this->silenceStartTime_ == nullptr && this->topicSlowConfig_ == nullptr
        && this->topicTypes_ == nullptr && this->webhooks_ == nullptr; };
        // alertInterval Field Functions 
        bool hasAlertInterval() const { return this->alertInterval_ != nullptr;};
        void deleteAlertInterval() { this->alertInterval_ = nullptr;};
        inline int32_t getAlertInterval() const { DARABONBA_PTR_GET_DEFAULT(alertInterval_, 0) };
        inline AlertSettings& setAlertInterval(int32_t alertInterval) { DARABONBA_PTR_SET_VALUE(alertInterval_, alertInterval) };


        // alertMaximum Field Functions 
        bool hasAlertMaximum() const { return this->alertMaximum_ != nullptr;};
        void deleteAlertMaximum() { this->alertMaximum_ = nullptr;};
        inline int32_t getAlertMaximum() const { DARABONBA_PTR_GET_DEFAULT(alertMaximum_, 0) };
        inline AlertSettings& setAlertMaximum(int32_t alertMaximum) { DARABONBA_PTR_SET_VALUE(alertMaximum_, alertMaximum) };


        // alertMethods Field Functions 
        bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
        void deleteAlertMethods() { this->alertMethods_ = nullptr;};
        inline const vector<string> & getAlertMethods() const { DARABONBA_PTR_GET_CONST(alertMethods_, vector<string>) };
        inline vector<string> getAlertMethods() { DARABONBA_PTR_GET(alertMethods_, vector<string>) };
        inline AlertSettings& setAlertMethods(const vector<string> & alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };
        inline AlertSettings& setAlertMethods(vector<string> && alertMethods) { DARABONBA_PTR_SET_RVALUE(alertMethods_, alertMethods) };


        // alertRecipient Field Functions 
        bool hasAlertRecipient() const { return this->alertRecipient_ != nullptr;};
        void deleteAlertRecipient() { this->alertRecipient_ = nullptr;};
        inline string getAlertRecipient() const { DARABONBA_PTR_GET_DEFAULT(alertRecipient_, "") };
        inline AlertSettings& setAlertRecipient(string alertRecipient) { DARABONBA_PTR_SET_VALUE(alertRecipient_, alertRecipient) };


        // alertRecipientType Field Functions 
        bool hasAlertRecipientType() const { return this->alertRecipientType_ != nullptr;};
        void deleteAlertRecipientType() { this->alertRecipientType_ = nullptr;};
        inline string getAlertRecipientType() const { DARABONBA_PTR_GET_DEFAULT(alertRecipientType_, "") };
        inline AlertSettings& setAlertRecipientType(string alertRecipientType) { DARABONBA_PTR_SET_VALUE(alertRecipientType_, alertRecipientType) };


        // alertType Field Functions 
        bool hasAlertType() const { return this->alertType_ != nullptr;};
        void deleteAlertType() { this->alertType_ = nullptr;};
        inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
        inline AlertSettings& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


        // baselineAlertEnabled Field Functions 
        bool hasBaselineAlertEnabled() const { return this->baselineAlertEnabled_ != nullptr;};
        void deleteBaselineAlertEnabled() { this->baselineAlertEnabled_ = nullptr;};
        inline bool getBaselineAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(baselineAlertEnabled_, false) };
        inline AlertSettings& setBaselineAlertEnabled(bool baselineAlertEnabled) { DARABONBA_PTR_SET_VALUE(baselineAlertEnabled_, baselineAlertEnabled) };


        // dingRobots Field Functions 
        bool hasDingRobots() const { return this->dingRobots_ != nullptr;};
        void deleteDingRobots() { this->dingRobots_ = nullptr;};
        inline const vector<AlertSettings::DingRobots> & getDingRobots() const { DARABONBA_PTR_GET_CONST(dingRobots_, vector<AlertSettings::DingRobots>) };
        inline vector<AlertSettings::DingRobots> getDingRobots() { DARABONBA_PTR_GET(dingRobots_, vector<AlertSettings::DingRobots>) };
        inline AlertSettings& setDingRobots(const vector<AlertSettings::DingRobots> & dingRobots) { DARABONBA_PTR_SET_VALUE(dingRobots_, dingRobots) };
        inline AlertSettings& setDingRobots(vector<AlertSettings::DingRobots> && dingRobots) { DARABONBA_PTR_SET_RVALUE(dingRobots_, dingRobots) };


        // silenceEndTime Field Functions 
        bool hasSilenceEndTime() const { return this->silenceEndTime_ != nullptr;};
        void deleteSilenceEndTime() { this->silenceEndTime_ = nullptr;};
        inline string getSilenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(silenceEndTime_, "") };
        inline AlertSettings& setSilenceEndTime(string silenceEndTime) { DARABONBA_PTR_SET_VALUE(silenceEndTime_, silenceEndTime) };


        // silenceStartTime Field Functions 
        bool hasSilenceStartTime() const { return this->silenceStartTime_ != nullptr;};
        void deleteSilenceStartTime() { this->silenceStartTime_ = nullptr;};
        inline string getSilenceStartTime() const { DARABONBA_PTR_GET_DEFAULT(silenceStartTime_, "") };
        inline AlertSettings& setSilenceStartTime(string silenceStartTime) { DARABONBA_PTR_SET_VALUE(silenceStartTime_, silenceStartTime) };


        // topicSlowConfig Field Functions 
        bool hasTopicSlowConfig() const { return this->topicSlowConfig_ != nullptr;};
        void deleteTopicSlowConfig() { this->topicSlowConfig_ = nullptr;};
        inline const AlertSettings::TopicSlowConfig & getTopicSlowConfig() const { DARABONBA_PTR_GET_CONST(topicSlowConfig_, AlertSettings::TopicSlowConfig) };
        inline AlertSettings::TopicSlowConfig getTopicSlowConfig() { DARABONBA_PTR_GET(topicSlowConfig_, AlertSettings::TopicSlowConfig) };
        inline AlertSettings& setTopicSlowConfig(const AlertSettings::TopicSlowConfig & topicSlowConfig) { DARABONBA_PTR_SET_VALUE(topicSlowConfig_, topicSlowConfig) };
        inline AlertSettings& setTopicSlowConfig(AlertSettings::TopicSlowConfig && topicSlowConfig) { DARABONBA_PTR_SET_RVALUE(topicSlowConfig_, topicSlowConfig) };


        // topicTypes Field Functions 
        bool hasTopicTypes() const { return this->topicTypes_ != nullptr;};
        void deleteTopicTypes() { this->topicTypes_ = nullptr;};
        inline const vector<string> & getTopicTypes() const { DARABONBA_PTR_GET_CONST(topicTypes_, vector<string>) };
        inline vector<string> getTopicTypes() { DARABONBA_PTR_GET(topicTypes_, vector<string>) };
        inline AlertSettings& setTopicTypes(const vector<string> & topicTypes) { DARABONBA_PTR_SET_VALUE(topicTypes_, topicTypes) };
        inline AlertSettings& setTopicTypes(vector<string> && topicTypes) { DARABONBA_PTR_SET_RVALUE(topicTypes_, topicTypes) };


        // webhooks Field Functions 
        bool hasWebhooks() const { return this->webhooks_ != nullptr;};
        void deleteWebhooks() { this->webhooks_ = nullptr;};
        inline const vector<string> & getWebhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<string>) };
        inline vector<string> getWebhooks() { DARABONBA_PTR_GET(webhooks_, vector<string>) };
        inline AlertSettings& setWebhooks(const vector<string> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
        inline AlertSettings& setWebhooks(vector<string> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


      protected:
        // The event alerting interval, in seconds.
        shared_ptr<int32_t> alertInterval_ {};
        // The maximum number of event alerting notifications.
        shared_ptr<int32_t> alertMaximum_ {};
        // The list of alert methods.
        shared_ptr<vector<string>> alertMethods_ {};
        // The alert recipient details.
        // 
        // - If AlertRecipientType is set to OWNER: empty.
        // - If AlertRecipientType is set to SHIFT_SCHEDULE: the UID of the shift schedule.
        // - If AlertRecipientType is set to OTHER: a list of UIDs. Separate multiple UIDs with commas (,).
        shared_ptr<string> alertRecipient_ {};
        // The type of alert recipient. Valid values:
        // 
        // - OWNER: node owner.
        // - OTHER: specified users.
        // - SHIFT_SCHEDULE: shift schedule.
        shared_ptr<string> alertRecipientType_ {};
        // The alerting type. Valid values:
        // - BASELINE: baseline.
        // - TOPIC: event.
        shared_ptr<string> alertType_ {};
        // The baseline alert switch. This is a baseline-specific configuration. Valid values:
        // 
        // - true: started.
        // - false: stopped.
        shared_ptr<bool> baselineAlertEnabled_ {};
        // The list of DingTalk chatbots.
        shared_ptr<vector<AlertSettings::DingRobots>> dingRobots_ {};
        // The silence end time, in the HH:mm:ss format.
        shared_ptr<string> silenceEndTime_ {};
        // The silence start time, in the HH:mm:ss format.
        shared_ptr<string> silenceStartTime_ {};
        shared_ptr<AlertSettings::TopicSlowConfig> topicSlowConfig_ {};
        // The list of event alerting types. This is an event-specific configuration.
        shared_ptr<vector<string>> topicTypes_ {};
        // The list of webhooks.
        shared_ptr<vector<string>> webhooks_ {};
      };

      virtual bool empty() const override { return this->alertEnabled_ == nullptr
        && this->alertMarginThreshold_ == nullptr && this->alertSettings_ == nullptr && this->baselineId_ == nullptr && this->baselineName_ == nullptr && this->baselineType_ == nullptr
        && this->enabled_ == nullptr && this->nodeIds_ == nullptr && this->overTimeSettings_ == nullptr && this->owner_ == nullptr && this->priority_ == nullptr
        && this->projectId_ == nullptr; };
      // alertEnabled Field Functions 
      bool hasAlertEnabled() const { return this->alertEnabled_ != nullptr;};
      void deleteAlertEnabled() { this->alertEnabled_ = nullptr;};
      inline bool getAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(alertEnabled_, false) };
      inline Data& setAlertEnabled(bool alertEnabled) { DARABONBA_PTR_SET_VALUE(alertEnabled_, alertEnabled) };


      // alertMarginThreshold Field Functions 
      bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
      void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
      inline int32_t getAlertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
      inline Data& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


      // alertSettings Field Functions 
      bool hasAlertSettings() const { return this->alertSettings_ != nullptr;};
      void deleteAlertSettings() { this->alertSettings_ = nullptr;};
      inline const vector<Data::AlertSettings> & getAlertSettings() const { DARABONBA_PTR_GET_CONST(alertSettings_, vector<Data::AlertSettings>) };
      inline vector<Data::AlertSettings> getAlertSettings() { DARABONBA_PTR_GET(alertSettings_, vector<Data::AlertSettings>) };
      inline Data& setAlertSettings(const vector<Data::AlertSettings> & alertSettings) { DARABONBA_PTR_SET_VALUE(alertSettings_, alertSettings) };
      inline Data& setAlertSettings(vector<Data::AlertSettings> && alertSettings) { DARABONBA_PTR_SET_RVALUE(alertSettings_, alertSettings) };


      // baselineId Field Functions 
      bool hasBaselineId() const { return this->baselineId_ != nullptr;};
      void deleteBaselineId() { this->baselineId_ = nullptr;};
      inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
      inline Data& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


      // baselineName Field Functions 
      bool hasBaselineName() const { return this->baselineName_ != nullptr;};
      void deleteBaselineName() { this->baselineName_ = nullptr;};
      inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
      inline Data& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


      // baselineType Field Functions 
      bool hasBaselineType() const { return this->baselineType_ != nullptr;};
      void deleteBaselineType() { this->baselineType_ = nullptr;};
      inline string getBaselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
      inline Data& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // nodeIds Field Functions 
      bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
      void deleteNodeIds() { this->nodeIds_ = nullptr;};
      inline const vector<int64_t> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<int64_t>) };
      inline vector<int64_t> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<int64_t>) };
      inline Data& setNodeIds(const vector<int64_t> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
      inline Data& setNodeIds(vector<int64_t> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


      // overTimeSettings Field Functions 
      bool hasOverTimeSettings() const { return this->overTimeSettings_ != nullptr;};
      void deleteOverTimeSettings() { this->overTimeSettings_ = nullptr;};
      inline const vector<Data::OverTimeSettings> & getOverTimeSettings() const { DARABONBA_PTR_GET_CONST(overTimeSettings_, vector<Data::OverTimeSettings>) };
      inline vector<Data::OverTimeSettings> getOverTimeSettings() { DARABONBA_PTR_GET(overTimeSettings_, vector<Data::OverTimeSettings>) };
      inline Data& setOverTimeSettings(const vector<Data::OverTimeSettings> & overTimeSettings) { DARABONBA_PTR_SET_VALUE(overTimeSettings_, overTimeSettings) };
      inline Data& setOverTimeSettings(vector<Data::OverTimeSettings> && overTimeSettings) { DARABONBA_PTR_SET_RVALUE(overTimeSettings_, overTimeSettings) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Data& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // Indicates whether alerting is started. Valid values:
      // 
      // - true
      // - false
      shared_ptr<bool> alertEnabled_ {};
      // The alert margin threshold, in minutes.
      shared_ptr<int32_t> alertMarginThreshold_ {};
      // The alert settings.
      shared_ptr<vector<Data::AlertSettings>> alertSettings_ {};
      // The ID of the baseline.
      shared_ptr<int64_t> baselineId_ {};
      // The name of the baseline.
      shared_ptr<string> baselineName_ {};
      // The type of the baseline. Valid values:
      // 
      // - DAILY: daily baseline.
      // - HOURLY: hourly baseline.
      shared_ptr<string> baselineType_ {};
      // Indicates whether the baseline is started.
      shared_ptr<bool> enabled_ {};
      // The list of upstream nodes of the baseline.
      shared_ptr<vector<int64_t>> nodeIds_ {};
      // The baseline committed time settings.
      shared_ptr<vector<Data::OverTimeSettings>> overTimeSettings_ {};
      // The owner.
      shared_ptr<string> owner_ {};
      // The priority of the baseline. Valid values: 1, 3, 5, 7, and 8.
      shared_ptr<int32_t> priority_ {};
      // The project ID.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBaselineResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBaselineResponseBody::Data) };
    inline GetBaselineResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBaselineResponseBody::Data) };
    inline GetBaselineResponseBody& setData(const GetBaselineResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBaselineResponseBody& setData(GetBaselineResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetBaselineResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetBaselineResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBaselineResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBaselineResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    shared_ptr<GetBaselineResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - true
    // - false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
