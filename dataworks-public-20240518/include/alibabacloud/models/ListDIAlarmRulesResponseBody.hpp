// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIAlarmRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIAlarmRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIAlarmRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDIAlarmRulesResponseBody() = default ;
    ListDIAlarmRulesResponseBody(const ListDIAlarmRulesResponseBody &) = default ;
    ListDIAlarmRulesResponseBody(ListDIAlarmRulesResponseBody &&) = default ;
    ListDIAlarmRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIAlarmRulesResponseBody() = default ;
    ListDIAlarmRulesResponseBody& operator=(const ListDIAlarmRulesResponseBody &) = default ;
    ListDIAlarmRulesResponseBody& operator=(ListDIAlarmRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DIJobAlarmRules, DIJobAlarmRules_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DIJobAlarmRules, DIJobAlarmRules_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DIJobAlarmRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DIJobAlarmRules& obj) { 
          DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
          DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MetricType, metricType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettings_);
          DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditions_);
        };
        friend void from_json(const Darabonba::Json& j, DIJobAlarmRules& obj) { 
          DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
          DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettings_);
          DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditions_);
        };
        DIJobAlarmRules() = default ;
        DIJobAlarmRules(const DIJobAlarmRules &) = default ;
        DIJobAlarmRules(DIJobAlarmRules &&) = default ;
        DIJobAlarmRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DIJobAlarmRules() = default ;
        DIJobAlarmRules& operator=(const DIJobAlarmRules &) = default ;
        DIJobAlarmRules& operator=(DIJobAlarmRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TriggerConditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TriggerConditions& obj) { 
            DARABONBA_PTR_TO_JSON(DdlReportTags, ddlReportTags_);
            DARABONBA_PTR_TO_JSON(DdlTypes, ddlTypes_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Severity, severity_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
          };
          friend void from_json(const Darabonba::Json& j, TriggerConditions& obj) { 
            DARABONBA_PTR_FROM_JSON(DdlReportTags, ddlReportTags_);
            DARABONBA_PTR_FROM_JSON(DdlTypes, ddlTypes_);
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
          virtual bool empty() const override { return this->ddlReportTags_ == nullptr
        && this->ddlTypes_ == nullptr && this->duration_ == nullptr && this->severity_ == nullptr && this->threshold_ == nullptr; };
          // ddlReportTags Field Functions 
          bool hasDdlReportTags() const { return this->ddlReportTags_ != nullptr;};
          void deleteDdlReportTags() { this->ddlReportTags_ = nullptr;};
          inline const vector<string> & getDdlReportTags() const { DARABONBA_PTR_GET_CONST(ddlReportTags_, vector<string>) };
          inline vector<string> getDdlReportTags() { DARABONBA_PTR_GET(ddlReportTags_, vector<string>) };
          inline TriggerConditions& setDdlReportTags(const vector<string> & ddlReportTags) { DARABONBA_PTR_SET_VALUE(ddlReportTags_, ddlReportTags) };
          inline TriggerConditions& setDdlReportTags(vector<string> && ddlReportTags) { DARABONBA_PTR_SET_RVALUE(ddlReportTags_, ddlReportTags) };


          // ddlTypes Field Functions 
          bool hasDdlTypes() const { return this->ddlTypes_ != nullptr;};
          void deleteDdlTypes() { this->ddlTypes_ = nullptr;};
          inline const vector<string> & getDdlTypes() const { DARABONBA_PTR_GET_CONST(ddlTypes_, vector<string>) };
          inline vector<string> getDdlTypes() { DARABONBA_PTR_GET(ddlTypes_, vector<string>) };
          inline TriggerConditions& setDdlTypes(const vector<string> & ddlTypes) { DARABONBA_PTR_SET_VALUE(ddlTypes_, ddlTypes) };
          inline TriggerConditions& setDdlTypes(vector<string> && ddlTypes) { DARABONBA_PTR_SET_RVALUE(ddlTypes_, ddlTypes) };


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
          // This parameter is deprecated and replaced by the DdlTypes parameter.
          shared_ptr<vector<string>> ddlReportTags_ {};
          // The types of DDL operations for which the alert rule takes effect. This parameter is returned only if the MetricType parameter is set to DdlReport.
          shared_ptr<vector<string>> ddlTypes_ {};
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
          // *   If the alert rule is for failovers, the threshold is the number of failovers.
          // *   If the alert rule is for latency, the threshold is the latency duration, in seconds.
          shared_ptr<int64_t> threshold_ {};
        };

        class NotificationSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NotificationSettings& obj) { 
            DARABONBA_PTR_TO_JSON(InhibitionInterval, inhibitionInterval_);
            DARABONBA_PTR_TO_JSON(MuteInterval, muteInterval_);
            DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
            DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
          };
          friend void from_json(const Darabonba::Json& j, NotificationSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(InhibitionInterval, inhibitionInterval_);
            DARABONBA_PTR_FROM_JSON(MuteInterval, muteInterval_);
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
            // The recipient type. Valid values: AliyunUid, DingToken, FeishuToken, and WebHookUrl.
            shared_ptr<string> receiverType_ {};
            // The recipient.
            // 
            // *   If the value of the ReceiverType parameter is AliyunUid, the value of this parameter is the Alibaba Cloud account ID of a user.
            // *   If the value of the ReceiverType parameter is DingToken, the value of this parameter is the token of a DingTalk chatbot.
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
        && this->muteInterval_ == nullptr && this->notificationChannels_ == nullptr && this->notificationReceivers_ == nullptr; };
          // inhibitionInterval Field Functions 
          bool hasInhibitionInterval() const { return this->inhibitionInterval_ != nullptr;};
          void deleteInhibitionInterval() { this->inhibitionInterval_ = nullptr;};
          inline int64_t getInhibitionInterval() const { DARABONBA_PTR_GET_DEFAULT(inhibitionInterval_, 0L) };
          inline NotificationSettings& setInhibitionInterval(int64_t inhibitionInterval) { DARABONBA_PTR_SET_VALUE(inhibitionInterval_, inhibitionInterval) };


          // muteInterval Field Functions 
          bool hasMuteInterval() const { return this->muteInterval_ != nullptr;};
          void deleteMuteInterval() { this->muteInterval_ = nullptr;};
          inline int64_t getMuteInterval() const { DARABONBA_PTR_GET_DEFAULT(muteInterval_, 0L) };
          inline NotificationSettings& setMuteInterval(int64_t muteInterval) { DARABONBA_PTR_SET_VALUE(muteInterval_, muteInterval) };


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
          // This parameter is deprecated and replaced by the MuteInterval parameter.
          shared_ptr<int64_t> inhibitionInterval_ {};
          // The duration of the alert suppression interval. Unit: minutes.
          shared_ptr<int64_t> muteInterval_ {};
          // The alert notification methods.
          shared_ptr<vector<NotificationSettings::NotificationChannels>> notificationChannels_ {};
          // The settings of alert notification recipients.
          shared_ptr<vector<NotificationSettings::NotificationReceivers>> notificationReceivers_ {};
        };

        virtual bool empty() const override { return this->DIAlarmRuleId_ == nullptr
        && this->DIJobId_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->id_ == nullptr && this->metricType_ == nullptr
        && this->name_ == nullptr && this->notificationSettings_ == nullptr && this->triggerConditions_ == nullptr; };
        // DIAlarmRuleId Field Functions 
        bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
        void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
        inline int64_t getDIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, 0L) };
        inline DIJobAlarmRules& setDIAlarmRuleId(int64_t DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


        // DIJobId Field Functions 
        bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
        void deleteDIJobId() { this->DIJobId_ = nullptr;};
        inline int64_t getDIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
        inline DIJobAlarmRules& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DIJobAlarmRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline DIJobAlarmRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DIJobAlarmRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // metricType Field Functions 
        bool hasMetricType() const { return this->metricType_ != nullptr;};
        void deleteMetricType() { this->metricType_ = nullptr;};
        inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
        inline DIJobAlarmRules& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DIJobAlarmRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // notificationSettings Field Functions 
        bool hasNotificationSettings() const { return this->notificationSettings_ != nullptr;};
        void deleteNotificationSettings() { this->notificationSettings_ = nullptr;};
        inline const DIJobAlarmRules::NotificationSettings & getNotificationSettings() const { DARABONBA_PTR_GET_CONST(notificationSettings_, DIJobAlarmRules::NotificationSettings) };
        inline DIJobAlarmRules::NotificationSettings getNotificationSettings() { DARABONBA_PTR_GET(notificationSettings_, DIJobAlarmRules::NotificationSettings) };
        inline DIJobAlarmRules& setNotificationSettings(const DIJobAlarmRules::NotificationSettings & notificationSettings) { DARABONBA_PTR_SET_VALUE(notificationSettings_, notificationSettings) };
        inline DIJobAlarmRules& setNotificationSettings(DIJobAlarmRules::NotificationSettings && notificationSettings) { DARABONBA_PTR_SET_RVALUE(notificationSettings_, notificationSettings) };


        // triggerConditions Field Functions 
        bool hasTriggerConditions() const { return this->triggerConditions_ != nullptr;};
        void deleteTriggerConditions() { this->triggerConditions_ = nullptr;};
        inline const vector<DIJobAlarmRules::TriggerConditions> & getTriggerConditions() const { DARABONBA_PTR_GET_CONST(triggerConditions_, vector<DIJobAlarmRules::TriggerConditions>) };
        inline vector<DIJobAlarmRules::TriggerConditions> getTriggerConditions() { DARABONBA_PTR_GET(triggerConditions_, vector<DIJobAlarmRules::TriggerConditions>) };
        inline DIJobAlarmRules& setTriggerConditions(const vector<DIJobAlarmRules::TriggerConditions> & triggerConditions) { DARABONBA_PTR_SET_VALUE(triggerConditions_, triggerConditions) };
        inline DIJobAlarmRules& setTriggerConditions(vector<DIJobAlarmRules::TriggerConditions> && triggerConditions) { DARABONBA_PTR_SET_RVALUE(triggerConditions_, triggerConditions) };


      protected:
        // This parameter is deprecated. Use the Id parameter instead.
        shared_ptr<int64_t> DIAlarmRuleId_ {};
        // The ID of the synchronization task.
        shared_ptr<int64_t> DIJobId_ {};
        // The description of the alert rule.
        shared_ptr<string> description_ {};
        // Indicates whether the alert rule is enabled. Valid values: True and False.
        shared_ptr<bool> enabled_ {};
        // The ID of the alert rule.
        shared_ptr<int64_t> id_ {};
        // The metric type in the alert rule. Valid values:
        // 
        // *   Heartbeat
        // *   FailoverCount
        // *   Delay
        // *   DdlReport
        // *   ResourceUtilization
        shared_ptr<string> metricType_ {};
        // The name of the alert rule.
        shared_ptr<string> name_ {};
        // The alert notification method and recipient settings.
        shared_ptr<DIJobAlarmRules::NotificationSettings> notificationSettings_ {};
        // The conditions that are used to trigger the alert rule.
        shared_ptr<vector<DIJobAlarmRules::TriggerConditions>> triggerConditions_ {};
      };

      virtual bool empty() const override { return this->DIJobAlarmRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // DIJobAlarmRules Field Functions 
      bool hasDIJobAlarmRules() const { return this->DIJobAlarmRules_ != nullptr;};
      void deleteDIJobAlarmRules() { this->DIJobAlarmRules_ = nullptr;};
      inline const vector<PagingInfo::DIJobAlarmRules> & getDIJobAlarmRules() const { DARABONBA_PTR_GET_CONST(DIJobAlarmRules_, vector<PagingInfo::DIJobAlarmRules>) };
      inline vector<PagingInfo::DIJobAlarmRules> getDIJobAlarmRules() { DARABONBA_PTR_GET(DIJobAlarmRules_, vector<PagingInfo::DIJobAlarmRules>) };
      inline PagingInfo& setDIJobAlarmRules(const vector<PagingInfo::DIJobAlarmRules> & dIJobAlarmRules) { DARABONBA_PTR_SET_VALUE(DIJobAlarmRules_, dIJobAlarmRules) };
      inline PagingInfo& setDIJobAlarmRules(vector<PagingInfo::DIJobAlarmRules> && dIJobAlarmRules) { DARABONBA_PTR_SET_RVALUE(DIJobAlarmRules_, dIJobAlarmRules) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline PagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline PagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The alert rules.
      shared_ptr<vector<PagingInfo::DIJobAlarmRules>> DIJobAlarmRules_ {};
      // The page number. Pages start from page 1.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDIAlarmRulesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDIAlarmRulesResponseBody::PagingInfo) };
    inline ListDIAlarmRulesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDIAlarmRulesResponseBody::PagingInfo) };
    inline ListDIAlarmRulesResponseBody& setPagingInfo(const ListDIAlarmRulesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDIAlarmRulesResponseBody& setPagingInfo(ListDIAlarmRulesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDIAlarmRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDIAlarmRulesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
