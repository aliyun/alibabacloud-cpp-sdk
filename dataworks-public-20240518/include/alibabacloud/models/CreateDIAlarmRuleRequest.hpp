// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALARMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALARMRULEREQUEST_HPP_
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
  class CreateDIAlarmRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditions_);
    };
    CreateDIAlarmRuleRequest() = default ;
    CreateDIAlarmRuleRequest(const CreateDIAlarmRuleRequest &) = default ;
    CreateDIAlarmRuleRequest(CreateDIAlarmRuleRequest &&) = default ;
    CreateDIAlarmRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIAlarmRuleRequest() = default ;
    CreateDIAlarmRuleRequest& operator=(const CreateDIAlarmRuleRequest &) = default ;
    CreateDIAlarmRuleRequest& operator=(CreateDIAlarmRuleRequest &&) = default ;
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
      // The types of DDL operations for which the alert rule takes effect.
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
      // *   If the alert rule is for task status, you do not need to specify a threshold.
      // *   If the alert rule is for failovers, you must specify the number of failovers.
      // *   If the alert rule is for latency, you must specify the latency duration, in seconds.
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
        // *   If the ReceiverType parameter is set to AliyunUid, set this parameter to the Alibaba Cloud account ID of a user.
        // *   If the ReceiverType parameter is set to DingToken, set this parameter to the token of a DingTalk chatbot.
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
        // The alert notification method. Valid values:
        // 
        // *   Mail
        // *   Phone
        // *   Sms
        // *   Ding
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
      inline int32_t getInhibitionInterval() const { DARABONBA_PTR_GET_DEFAULT(inhibitionInterval_, 0) };
      inline NotificationSettings& setInhibitionInterval(int32_t inhibitionInterval) { DARABONBA_PTR_SET_VALUE(inhibitionInterval_, inhibitionInterval) };


      // muteInterval Field Functions 
      bool hasMuteInterval() const { return this->muteInterval_ != nullptr;};
      void deleteMuteInterval() { this->muteInterval_ = nullptr;};
      inline int32_t getMuteInterval() const { DARABONBA_PTR_GET_DEFAULT(muteInterval_, 0) };
      inline NotificationSettings& setMuteInterval(int32_t muteInterval) { DARABONBA_PTR_SET_VALUE(muteInterval_, muteInterval) };


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
      shared_ptr<int32_t> inhibitionInterval_ {};
      // The duration of the alert suppression interval. Default value: 5. Unit: minutes.
      shared_ptr<int32_t> muteInterval_ {};
      // The alert notification methods.
      shared_ptr<vector<NotificationSettings::NotificationChannels>> notificationChannels_ {};
      // The settings of alert notification recipients.
      shared_ptr<vector<NotificationSettings::NotificationReceivers>> notificationReceivers_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DIJobId_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->metricType_ == nullptr && this->name_ == nullptr
        && this->notificationSettings_ == nullptr && this->triggerConditions_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDIAlarmRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t getDIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline CreateDIAlarmRuleRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDIAlarmRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateDIAlarmRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline CreateDIAlarmRuleRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDIAlarmRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationSettings Field Functions 
    bool hasNotificationSettings() const { return this->notificationSettings_ != nullptr;};
    void deleteNotificationSettings() { this->notificationSettings_ = nullptr;};
    inline const CreateDIAlarmRuleRequest::NotificationSettings & getNotificationSettings() const { DARABONBA_PTR_GET_CONST(notificationSettings_, CreateDIAlarmRuleRequest::NotificationSettings) };
    inline CreateDIAlarmRuleRequest::NotificationSettings getNotificationSettings() { DARABONBA_PTR_GET(notificationSettings_, CreateDIAlarmRuleRequest::NotificationSettings) };
    inline CreateDIAlarmRuleRequest& setNotificationSettings(const CreateDIAlarmRuleRequest::NotificationSettings & notificationSettings) { DARABONBA_PTR_SET_VALUE(notificationSettings_, notificationSettings) };
    inline CreateDIAlarmRuleRequest& setNotificationSettings(CreateDIAlarmRuleRequest::NotificationSettings && notificationSettings) { DARABONBA_PTR_SET_RVALUE(notificationSettings_, notificationSettings) };


    // triggerConditions Field Functions 
    bool hasTriggerConditions() const { return this->triggerConditions_ != nullptr;};
    void deleteTriggerConditions() { this->triggerConditions_ = nullptr;};
    inline const vector<CreateDIAlarmRuleRequest::TriggerConditions> & getTriggerConditions() const { DARABONBA_PTR_GET_CONST(triggerConditions_, vector<CreateDIAlarmRuleRequest::TriggerConditions>) };
    inline vector<CreateDIAlarmRuleRequest::TriggerConditions> getTriggerConditions() { DARABONBA_PTR_GET(triggerConditions_, vector<CreateDIAlarmRuleRequest::TriggerConditions>) };
    inline CreateDIAlarmRuleRequest& setTriggerConditions(const vector<CreateDIAlarmRuleRequest::TriggerConditions> & triggerConditions) { DARABONBA_PTR_SET_VALUE(triggerConditions_, triggerConditions) };
    inline CreateDIAlarmRuleRequest& setTriggerConditions(vector<CreateDIAlarmRuleRequest::TriggerConditions> && triggerConditions) { DARABONBA_PTR_SET_RVALUE(triggerConditions_, triggerConditions) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The ID of the synchronization task with which the alert rule is associated.
    // 
    // This parameter is required.
    shared_ptr<int64_t> DIJobId_ {};
    // The description of the alert rule.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the alert rule. By default, the alert rule is disabled.
    shared_ptr<bool> enabled_ {};
    // The metric type in the alert rule. Valid values:
    // 
    // *   Heartbeat
    // *   FailoverCount
    // *   Delay
    // *   DdlReport
    // *   ResourceUtilization
    // 
    // This parameter is required.
    shared_ptr<string> metricType_ {};
    // The name of the alert rule.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The alert notification settings.
    // 
    // This parameter is required.
    shared_ptr<CreateDIAlarmRuleRequest::NotificationSettings> notificationSettings_ {};
    // The conditions that can trigger the alert rule.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateDIAlarmRuleRequest::TriggerConditions>> triggerConditions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
