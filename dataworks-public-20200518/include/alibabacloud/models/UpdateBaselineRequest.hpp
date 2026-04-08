// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASELINEREQUEST_HPP_
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
  class UpdateBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_TO_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_TO_JSON(AlertSettings, alertSettings_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(OvertimeSettings, overtimeSettings_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RemoveNodeIds, removeNodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_FROM_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_FROM_JSON(AlertSettings, alertSettings_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(OvertimeSettings, overtimeSettings_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RemoveNodeIds, removeNodeIds_);
    };
    UpdateBaselineRequest() = default ;
    UpdateBaselineRequest(const UpdateBaselineRequest &) = default ;
    UpdateBaselineRequest(UpdateBaselineRequest &&) = default ;
    UpdateBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBaselineRequest() = default ;
    UpdateBaselineRequest& operator=(const UpdateBaselineRequest &) = default ;
    UpdateBaselineRequest& operator=(UpdateBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OvertimeSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OvertimeSettings& obj) { 
        DARABONBA_PTR_TO_JSON(Cycle, cycle_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, OvertimeSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      OvertimeSettings() = default ;
      OvertimeSettings(const OvertimeSettings &) = default ;
      OvertimeSettings(OvertimeSettings &&) = default ;
      OvertimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OvertimeSettings() = default ;
      OvertimeSettings& operator=(const OvertimeSettings &) = default ;
      OvertimeSettings& operator=(OvertimeSettings &&) = default ;
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
      inline OvertimeSettings& setCycle(int32_t cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline OvertimeSettings& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The cycle that corresponds to the committed completion time. For a day-level baseline, set this parameter to 1. For an hour-level baseline, set this parameter to a value that is no more than 24.
      shared_ptr<int32_t> cycle_ {};
      // The committed completion time in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
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
        // Specifies whether to remind all members by using the at sign (@). Valid values: true and false.
        shared_ptr<bool> atAll_ {};
        // The webhook URL of the DingTalk chatbot.
        shared_ptr<string> webUrl_ {};
      };

      virtual bool empty() const override { return this->alertInterval_ == nullptr
        && this->alertMaximum_ == nullptr && this->alertMethods_ == nullptr && this->alertRecipient_ == nullptr && this->alertRecipientType_ == nullptr && this->alertType_ == nullptr
        && this->baselineAlertEnabled_ == nullptr && this->dingRobots_ == nullptr && this->silenceEndTime_ == nullptr && this->silenceStartTime_ == nullptr && this->topicTypes_ == nullptr
        && this->webhooks_ == nullptr; };
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
      // The interval at which an event alert notification is sent. Unit: minutes. Minimum value: 5. Maximum value: 1,440.
      shared_ptr<int32_t> alertInterval_ {};
      // The maximum number of times an event alert notification is sent. Maximum value: 24.
      shared_ptr<int32_t> alertMaximum_ {};
      // The alert notification methods. Valid values: MAIL, SMS, PHONE, DINGROBOTS, and Webhooks. The value MAIL indicates that alert notifications are sent by email. The value SMS indicates that alert notifications are sent by text message. The value PHONE indicates that alert notifications are sent by phone call. You can use this notification method only in DataWorks Professional Edition or a more advanced edition. The value DINGROBOTS indicates that alert notifications are sent by using a DingTalk chatbot. You can use this notification method only if the RobotUrls parameter is configured. The value Webhooks indicates that alert notifications are sent by WeCom or Lark. You can use this notification method only if the Webhooks parameter is configured.
      shared_ptr<vector<string>> alertMethods_ {};
      // The details of the alert recipient. If you set AlertRecipientType to OWNER, leave this parameter empty. If you set AlertRecipientType to SHIFT_SCHEDULE, set this parameter to the name of the shift schedule. If you set AlertRecipientType to OTHER, set this parameter to the employee IDs of specified personnel.
      shared_ptr<string> alertRecipient_ {};
      // The type of the alert recipient. Valid values: OWNER, OTHER, and SHIFT_SCHEDULE. The value OWNER indicates the node owner. The value OTHER indicates specified personnel. The value SHIFT_SCHEDULE indicates personnel in a shift schedule.
      shared_ptr<string> alertRecipientType_ {};
      // The type of the alert. Valid values: BASELINE and TOPIC. The value BASELINE indicates a baseline alert. The value TOPIC indicates an event alert.
      shared_ptr<string> alertType_ {};
      // Specifies whether to enable the baseline alerting feature. This feature is specific to baselines. Valid values: true and false.
      shared_ptr<bool> baselineAlertEnabled_ {};
      // The DingTalk chatbots.
      shared_ptr<vector<AlertSettings::DingRobots>> dingRobots_ {};
      // The end time of silence.
      shared_ptr<string> silenceEndTime_ {};
      // The start time of silence.
      shared_ptr<string> silenceStartTime_ {};
      // The types of event alerts, which are event-specific configurations.
      shared_ptr<vector<string>> topicTypes_ {};
      // The webhook URLs.
      shared_ptr<vector<string>> webhooks_ {};
    };

    virtual bool empty() const override { return this->alertEnabled_ == nullptr
        && this->alertMarginThreshold_ == nullptr && this->alertSettings_ == nullptr && this->baselineId_ == nullptr && this->baselineName_ == nullptr && this->baselineType_ == nullptr
        && this->enabled_ == nullptr && this->nodeIds_ == nullptr && this->overtimeSettings_ == nullptr && this->owner_ == nullptr && this->priority_ == nullptr
        && this->projectId_ == nullptr && this->removeNodeIds_ == nullptr; };
    // alertEnabled Field Functions 
    bool hasAlertEnabled() const { return this->alertEnabled_ != nullptr;};
    void deleteAlertEnabled() { this->alertEnabled_ = nullptr;};
    inline bool getAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(alertEnabled_, false) };
    inline UpdateBaselineRequest& setAlertEnabled(bool alertEnabled) { DARABONBA_PTR_SET_VALUE(alertEnabled_, alertEnabled) };


    // alertMarginThreshold Field Functions 
    bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
    void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
    inline int32_t getAlertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
    inline UpdateBaselineRequest& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


    // alertSettings Field Functions 
    bool hasAlertSettings() const { return this->alertSettings_ != nullptr;};
    void deleteAlertSettings() { this->alertSettings_ = nullptr;};
    inline const vector<UpdateBaselineRequest::AlertSettings> & getAlertSettings() const { DARABONBA_PTR_GET_CONST(alertSettings_, vector<UpdateBaselineRequest::AlertSettings>) };
    inline vector<UpdateBaselineRequest::AlertSettings> getAlertSettings() { DARABONBA_PTR_GET(alertSettings_, vector<UpdateBaselineRequest::AlertSettings>) };
    inline UpdateBaselineRequest& setAlertSettings(const vector<UpdateBaselineRequest::AlertSettings> & alertSettings) { DARABONBA_PTR_SET_VALUE(alertSettings_, alertSettings) };
    inline UpdateBaselineRequest& setAlertSettings(vector<UpdateBaselineRequest::AlertSettings> && alertSettings) { DARABONBA_PTR_SET_RVALUE(alertSettings_, alertSettings) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline UpdateBaselineRequest& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline UpdateBaselineRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string getBaselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline UpdateBaselineRequest& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateBaselineRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string getNodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline UpdateBaselineRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // overtimeSettings Field Functions 
    bool hasOvertimeSettings() const { return this->overtimeSettings_ != nullptr;};
    void deleteOvertimeSettings() { this->overtimeSettings_ = nullptr;};
    inline const vector<UpdateBaselineRequest::OvertimeSettings> & getOvertimeSettings() const { DARABONBA_PTR_GET_CONST(overtimeSettings_, vector<UpdateBaselineRequest::OvertimeSettings>) };
    inline vector<UpdateBaselineRequest::OvertimeSettings> getOvertimeSettings() { DARABONBA_PTR_GET(overtimeSettings_, vector<UpdateBaselineRequest::OvertimeSettings>) };
    inline UpdateBaselineRequest& setOvertimeSettings(const vector<UpdateBaselineRequest::OvertimeSettings> & overtimeSettings) { DARABONBA_PTR_SET_VALUE(overtimeSettings_, overtimeSettings) };
    inline UpdateBaselineRequest& setOvertimeSettings(vector<UpdateBaselineRequest::OvertimeSettings> && overtimeSettings) { DARABONBA_PTR_SET_RVALUE(overtimeSettings_, overtimeSettings) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateBaselineRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateBaselineRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateBaselineRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // removeNodeIds Field Functions 
    bool hasRemoveNodeIds() const { return this->removeNodeIds_ != nullptr;};
    void deleteRemoveNodeIds() { this->removeNodeIds_ = nullptr;};
    inline string getRemoveNodeIds() const { DARABONBA_PTR_GET_DEFAULT(removeNodeIds_, "") };
    inline UpdateBaselineRequest& setRemoveNodeIds(string removeNodeIds) { DARABONBA_PTR_SET_VALUE(removeNodeIds_, removeNodeIds) };


  protected:
    // Specifies whether to enable the alerting feature. Valid values: true and false.
    shared_ptr<bool> alertEnabled_ {};
    // The alert margin threshold of the baseline. Unit: minutes.
    shared_ptr<int32_t> alertMarginThreshold_ {};
    // The alert settings of the baseline.
    shared_ptr<vector<UpdateBaselineRequest::AlertSettings>> alertSettings_ {};
    // The baseline ID. You can call the [ListBaselines](https://help.aliyun.com/document_detail/2261507.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> baselineId_ {};
    // The name of the baseline.
    shared_ptr<string> baselineName_ {};
    // The type of the baseline. Valid values: DAILY and HOURLY.
    shared_ptr<string> baselineType_ {};
    // Specifies whether to enable the baseline. Valid values: true and false.
    shared_ptr<bool> enabled_ {};
    // The ancestor nodes of nodes in the baseline. Separate the ancestor nodes with commas (,). If a large number of ancestor nodes exist, we recommend that you create a zero load node and configure the zero load node as the descendant node of nodes in the baseline to facilitate node management.
    shared_ptr<string> nodeIds_ {};
    // The settings of the committed completion time of the baseline.
    shared_ptr<vector<UpdateBaselineRequest::OvertimeSettings>> overtimeSettings_ {};
    // The ID of the Alibaba Cloud account used by the baseline owner.
    shared_ptr<string> owner_ {};
    // The priority of the baseline. Valid values: {1,3,5,7,8}.
    shared_ptr<int32_t> priority_ {};
    // The workspace ID. You can call the [ListBaselines](https://help.aliyun.com/document_detail/2261507.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The ID of the node that you want to disassociate from the baseline. You can specify multiple node IDs. Separate multiple node IDs with commas (,).
    shared_ptr<string> removeNodeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
