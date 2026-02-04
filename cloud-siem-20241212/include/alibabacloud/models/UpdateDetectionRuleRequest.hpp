// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDETECTIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDETECTIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDetectionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDetectionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertAttCk, alertAttCk_);
      DARABONBA_PTR_TO_JSON(AlertDescription, alertDescription_);
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertSchemaId, alertSchemaId_);
      DARABONBA_PTR_TO_JSON(AlertTacticId, alertTacticId_);
      DARABONBA_PTR_TO_JSON(AlertThresholdCount, alertThresholdCount_);
      DARABONBA_PTR_TO_JSON(AlertThresholdGroup, alertThresholdGroup_);
      DARABONBA_PTR_TO_JSON(AlertThresholdPeriod, alertThresholdPeriod_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(DetectionExpressionContent, detectionExpressionContent_);
      DARABONBA_PTR_TO_JSON(DetectionExpressionType, detectionExpressionType_);
      DARABONBA_PTR_TO_JSON(DetectionRuleDescription, detectionRuleDescription_);
      DARABONBA_PTR_TO_JSON(DetectionRuleId, detectionRuleId_);
      DARABONBA_PTR_TO_JSON(DetectionRuleName, detectionRuleName_);
      DARABONBA_PTR_TO_JSON(DetectionRuleStatus, detectionRuleStatus_);
      DARABONBA_PTR_TO_JSON(DetectionRuleType, detectionRuleType_);
      DARABONBA_PTR_TO_JSON(EntityMappings, entityMappings_);
      DARABONBA_PTR_TO_JSON(IncidentAggregationExpression, incidentAggregationExpression_);
      DARABONBA_PTR_TO_JSON(IncidentAggregationType, incidentAggregationType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogCategoryId, logCategoryId_);
      DARABONBA_PTR_TO_JSON(LogSchemaId, logSchemaId_);
      DARABONBA_PTR_TO_JSON(PlaybookParameters, playbookParameters_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScheduleBeginTime, scheduleBeginTime_);
      DARABONBA_PTR_TO_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_TO_JSON(ScheduleMaxRetries, scheduleMaxRetries_);
      DARABONBA_PTR_TO_JSON(ScheduleMaxTimeout, scheduleMaxTimeout_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(ScheduleWindow, scheduleWindow_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDetectionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertAttCk, alertAttCk_);
      DARABONBA_PTR_FROM_JSON(AlertDescription, alertDescription_);
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertSchemaId, alertSchemaId_);
      DARABONBA_PTR_FROM_JSON(AlertTacticId, alertTacticId_);
      DARABONBA_PTR_FROM_JSON(AlertThresholdCount, alertThresholdCount_);
      DARABONBA_PTR_FROM_JSON(AlertThresholdGroup, alertThresholdGroup_);
      DARABONBA_PTR_FROM_JSON(AlertThresholdPeriod, alertThresholdPeriod_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(DetectionExpressionContent, detectionExpressionContent_);
      DARABONBA_PTR_FROM_JSON(DetectionExpressionType, detectionExpressionType_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleDescription, detectionRuleDescription_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleId, detectionRuleId_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleName, detectionRuleName_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleStatus, detectionRuleStatus_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleType, detectionRuleType_);
      DARABONBA_PTR_FROM_JSON(EntityMappings, entityMappings_);
      DARABONBA_PTR_FROM_JSON(IncidentAggregationExpression, incidentAggregationExpression_);
      DARABONBA_PTR_FROM_JSON(IncidentAggregationType, incidentAggregationType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogCategoryId, logCategoryId_);
      DARABONBA_PTR_FROM_JSON(LogSchemaId, logSchemaId_);
      DARABONBA_PTR_FROM_JSON(PlaybookParameters, playbookParameters_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScheduleBeginTime, scheduleBeginTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_FROM_JSON(ScheduleMaxRetries, scheduleMaxRetries_);
      DARABONBA_PTR_FROM_JSON(ScheduleMaxTimeout, scheduleMaxTimeout_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(ScheduleWindow, scheduleWindow_);
    };
    UpdateDetectionRuleRequest() = default ;
    UpdateDetectionRuleRequest(const UpdateDetectionRuleRequest &) = default ;
    UpdateDetectionRuleRequest(UpdateDetectionRuleRequest &&) = default ;
    UpdateDetectionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDetectionRuleRequest() = default ;
    UpdateDetectionRuleRequest& operator=(const UpdateDetectionRuleRequest &) = default ;
    UpdateDetectionRuleRequest& operator=(UpdateDetectionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertAttCk_ == nullptr
        && this->alertDescription_ == nullptr && this->alertLevel_ == nullptr && this->alertName_ == nullptr && this->alertSchemaId_ == nullptr && this->alertTacticId_ == nullptr
        && this->alertThresholdCount_ == nullptr && this->alertThresholdGroup_ == nullptr && this->alertThresholdPeriod_ == nullptr && this->alertType_ == nullptr && this->detectionExpressionContent_ == nullptr
        && this->detectionExpressionType_ == nullptr && this->detectionRuleDescription_ == nullptr && this->detectionRuleId_ == nullptr && this->detectionRuleName_ == nullptr && this->detectionRuleStatus_ == nullptr
        && this->detectionRuleType_ == nullptr && this->entityMappings_ == nullptr && this->incidentAggregationExpression_ == nullptr && this->incidentAggregationType_ == nullptr && this->lang_ == nullptr
        && this->logCategoryId_ == nullptr && this->logSchemaId_ == nullptr && this->playbookParameters_ == nullptr && this->playbookUuid_ == nullptr && this->regionId_ == nullptr
        && this->scheduleBeginTime_ == nullptr && this->scheduleExpression_ == nullptr && this->scheduleMaxRetries_ == nullptr && this->scheduleMaxTimeout_ == nullptr && this->scheduleType_ == nullptr
        && this->scheduleWindow_ == nullptr; };
    // alertAttCk Field Functions 
    bool hasAlertAttCk() const { return this->alertAttCk_ != nullptr;};
    void deleteAlertAttCk() { this->alertAttCk_ = nullptr;};
    inline string getAlertAttCk() const { DARABONBA_PTR_GET_DEFAULT(alertAttCk_, "") };
    inline UpdateDetectionRuleRequest& setAlertAttCk(string alertAttCk) { DARABONBA_PTR_SET_VALUE(alertAttCk_, alertAttCk) };


    // alertDescription Field Functions 
    bool hasAlertDescription() const { return this->alertDescription_ != nullptr;};
    void deleteAlertDescription() { this->alertDescription_ = nullptr;};
    inline string getAlertDescription() const { DARABONBA_PTR_GET_DEFAULT(alertDescription_, "") };
    inline UpdateDetectionRuleRequest& setAlertDescription(string alertDescription) { DARABONBA_PTR_SET_VALUE(alertDescription_, alertDescription) };


    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline string getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
    inline UpdateDetectionRuleRequest& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline UpdateDetectionRuleRequest& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertSchemaId Field Functions 
    bool hasAlertSchemaId() const { return this->alertSchemaId_ != nullptr;};
    void deleteAlertSchemaId() { this->alertSchemaId_ = nullptr;};
    inline string getAlertSchemaId() const { DARABONBA_PTR_GET_DEFAULT(alertSchemaId_, "") };
    inline UpdateDetectionRuleRequest& setAlertSchemaId(string alertSchemaId) { DARABONBA_PTR_SET_VALUE(alertSchemaId_, alertSchemaId) };


    // alertTacticId Field Functions 
    bool hasAlertTacticId() const { return this->alertTacticId_ != nullptr;};
    void deleteAlertTacticId() { this->alertTacticId_ = nullptr;};
    inline string getAlertTacticId() const { DARABONBA_PTR_GET_DEFAULT(alertTacticId_, "") };
    inline UpdateDetectionRuleRequest& setAlertTacticId(string alertTacticId) { DARABONBA_PTR_SET_VALUE(alertTacticId_, alertTacticId) };


    // alertThresholdCount Field Functions 
    bool hasAlertThresholdCount() const { return this->alertThresholdCount_ != nullptr;};
    void deleteAlertThresholdCount() { this->alertThresholdCount_ = nullptr;};
    inline int32_t getAlertThresholdCount() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdCount_, 0) };
    inline UpdateDetectionRuleRequest& setAlertThresholdCount(int32_t alertThresholdCount) { DARABONBA_PTR_SET_VALUE(alertThresholdCount_, alertThresholdCount) };


    // alertThresholdGroup Field Functions 
    bool hasAlertThresholdGroup() const { return this->alertThresholdGroup_ != nullptr;};
    void deleteAlertThresholdGroup() { this->alertThresholdGroup_ = nullptr;};
    inline string getAlertThresholdGroup() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdGroup_, "") };
    inline UpdateDetectionRuleRequest& setAlertThresholdGroup(string alertThresholdGroup) { DARABONBA_PTR_SET_VALUE(alertThresholdGroup_, alertThresholdGroup) };


    // alertThresholdPeriod Field Functions 
    bool hasAlertThresholdPeriod() const { return this->alertThresholdPeriod_ != nullptr;};
    void deleteAlertThresholdPeriod() { this->alertThresholdPeriod_ = nullptr;};
    inline string getAlertThresholdPeriod() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdPeriod_, "") };
    inline UpdateDetectionRuleRequest& setAlertThresholdPeriod(string alertThresholdPeriod) { DARABONBA_PTR_SET_VALUE(alertThresholdPeriod_, alertThresholdPeriod) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline UpdateDetectionRuleRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // detectionExpressionContent Field Functions 
    bool hasDetectionExpressionContent() const { return this->detectionExpressionContent_ != nullptr;};
    void deleteDetectionExpressionContent() { this->detectionExpressionContent_ = nullptr;};
    inline string getDetectionExpressionContent() const { DARABONBA_PTR_GET_DEFAULT(detectionExpressionContent_, "") };
    inline UpdateDetectionRuleRequest& setDetectionExpressionContent(string detectionExpressionContent) { DARABONBA_PTR_SET_VALUE(detectionExpressionContent_, detectionExpressionContent) };


    // detectionExpressionType Field Functions 
    bool hasDetectionExpressionType() const { return this->detectionExpressionType_ != nullptr;};
    void deleteDetectionExpressionType() { this->detectionExpressionType_ = nullptr;};
    inline string getDetectionExpressionType() const { DARABONBA_PTR_GET_DEFAULT(detectionExpressionType_, "") };
    inline UpdateDetectionRuleRequest& setDetectionExpressionType(string detectionExpressionType) { DARABONBA_PTR_SET_VALUE(detectionExpressionType_, detectionExpressionType) };


    // detectionRuleDescription Field Functions 
    bool hasDetectionRuleDescription() const { return this->detectionRuleDescription_ != nullptr;};
    void deleteDetectionRuleDescription() { this->detectionRuleDescription_ = nullptr;};
    inline string getDetectionRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleDescription_, "") };
    inline UpdateDetectionRuleRequest& setDetectionRuleDescription(string detectionRuleDescription) { DARABONBA_PTR_SET_VALUE(detectionRuleDescription_, detectionRuleDescription) };


    // detectionRuleId Field Functions 
    bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
    void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
    inline string getDetectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
    inline UpdateDetectionRuleRequest& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


    // detectionRuleName Field Functions 
    bool hasDetectionRuleName() const { return this->detectionRuleName_ != nullptr;};
    void deleteDetectionRuleName() { this->detectionRuleName_ = nullptr;};
    inline string getDetectionRuleName() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleName_, "") };
    inline UpdateDetectionRuleRequest& setDetectionRuleName(string detectionRuleName) { DARABONBA_PTR_SET_VALUE(detectionRuleName_, detectionRuleName) };


    // detectionRuleStatus Field Functions 
    bool hasDetectionRuleStatus() const { return this->detectionRuleStatus_ != nullptr;};
    void deleteDetectionRuleStatus() { this->detectionRuleStatus_ = nullptr;};
    inline string getDetectionRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleStatus_, "") };
    inline UpdateDetectionRuleRequest& setDetectionRuleStatus(string detectionRuleStatus) { DARABONBA_PTR_SET_VALUE(detectionRuleStatus_, detectionRuleStatus) };


    // detectionRuleType Field Functions 
    bool hasDetectionRuleType() const { return this->detectionRuleType_ != nullptr;};
    void deleteDetectionRuleType() { this->detectionRuleType_ = nullptr;};
    inline string getDetectionRuleType() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleType_, "") };
    inline UpdateDetectionRuleRequest& setDetectionRuleType(string detectionRuleType) { DARABONBA_PTR_SET_VALUE(detectionRuleType_, detectionRuleType) };


    // entityMappings Field Functions 
    bool hasEntityMappings() const { return this->entityMappings_ != nullptr;};
    void deleteEntityMappings() { this->entityMappings_ = nullptr;};
    inline string getEntityMappings() const { DARABONBA_PTR_GET_DEFAULT(entityMappings_, "") };
    inline UpdateDetectionRuleRequest& setEntityMappings(string entityMappings) { DARABONBA_PTR_SET_VALUE(entityMappings_, entityMappings) };


    // incidentAggregationExpression Field Functions 
    bool hasIncidentAggregationExpression() const { return this->incidentAggregationExpression_ != nullptr;};
    void deleteIncidentAggregationExpression() { this->incidentAggregationExpression_ = nullptr;};
    inline string getIncidentAggregationExpression() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationExpression_, "") };
    inline UpdateDetectionRuleRequest& setIncidentAggregationExpression(string incidentAggregationExpression) { DARABONBA_PTR_SET_VALUE(incidentAggregationExpression_, incidentAggregationExpression) };


    // incidentAggregationType Field Functions 
    bool hasIncidentAggregationType() const { return this->incidentAggregationType_ != nullptr;};
    void deleteIncidentAggregationType() { this->incidentAggregationType_ = nullptr;};
    inline string getIncidentAggregationType() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationType_, "") };
    inline UpdateDetectionRuleRequest& setIncidentAggregationType(string incidentAggregationType) { DARABONBA_PTR_SET_VALUE(incidentAggregationType_, incidentAggregationType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDetectionRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logCategoryId Field Functions 
    bool hasLogCategoryId() const { return this->logCategoryId_ != nullptr;};
    void deleteLogCategoryId() { this->logCategoryId_ = nullptr;};
    inline string getLogCategoryId() const { DARABONBA_PTR_GET_DEFAULT(logCategoryId_, "") };
    inline UpdateDetectionRuleRequest& setLogCategoryId(string logCategoryId) { DARABONBA_PTR_SET_VALUE(logCategoryId_, logCategoryId) };


    // logSchemaId Field Functions 
    bool hasLogSchemaId() const { return this->logSchemaId_ != nullptr;};
    void deleteLogSchemaId() { this->logSchemaId_ = nullptr;};
    inline string getLogSchemaId() const { DARABONBA_PTR_GET_DEFAULT(logSchemaId_, "") };
    inline UpdateDetectionRuleRequest& setLogSchemaId(string logSchemaId) { DARABONBA_PTR_SET_VALUE(logSchemaId_, logSchemaId) };


    // playbookParameters Field Functions 
    bool hasPlaybookParameters() const { return this->playbookParameters_ != nullptr;};
    void deletePlaybookParameters() { this->playbookParameters_ = nullptr;};
    inline string getPlaybookParameters() const { DARABONBA_PTR_GET_DEFAULT(playbookParameters_, "") };
    inline UpdateDetectionRuleRequest& setPlaybookParameters(string playbookParameters) { DARABONBA_PTR_SET_VALUE(playbookParameters_, playbookParameters) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline UpdateDetectionRuleRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDetectionRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scheduleBeginTime Field Functions 
    bool hasScheduleBeginTime() const { return this->scheduleBeginTime_ != nullptr;};
    void deleteScheduleBeginTime() { this->scheduleBeginTime_ = nullptr;};
    inline int64_t getScheduleBeginTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleBeginTime_, 0L) };
    inline UpdateDetectionRuleRequest& setScheduleBeginTime(int64_t scheduleBeginTime) { DARABONBA_PTR_SET_VALUE(scheduleBeginTime_, scheduleBeginTime) };


    // scheduleExpression Field Functions 
    bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
    void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
    inline string getScheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
    inline UpdateDetectionRuleRequest& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


    // scheduleMaxRetries Field Functions 
    bool hasScheduleMaxRetries() const { return this->scheduleMaxRetries_ != nullptr;};
    void deleteScheduleMaxRetries() { this->scheduleMaxRetries_ = nullptr;};
    inline int32_t getScheduleMaxRetries() const { DARABONBA_PTR_GET_DEFAULT(scheduleMaxRetries_, 0) };
    inline UpdateDetectionRuleRequest& setScheduleMaxRetries(int32_t scheduleMaxRetries) { DARABONBA_PTR_SET_VALUE(scheduleMaxRetries_, scheduleMaxRetries) };


    // scheduleMaxTimeout Field Functions 
    bool hasScheduleMaxTimeout() const { return this->scheduleMaxTimeout_ != nullptr;};
    void deleteScheduleMaxTimeout() { this->scheduleMaxTimeout_ = nullptr;};
    inline int32_t getScheduleMaxTimeout() const { DARABONBA_PTR_GET_DEFAULT(scheduleMaxTimeout_, 0) };
    inline UpdateDetectionRuleRequest& setScheduleMaxTimeout(int32_t scheduleMaxTimeout) { DARABONBA_PTR_SET_VALUE(scheduleMaxTimeout_, scheduleMaxTimeout) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline UpdateDetectionRuleRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // scheduleWindow Field Functions 
    bool hasScheduleWindow() const { return this->scheduleWindow_ != nullptr;};
    void deleteScheduleWindow() { this->scheduleWindow_ = nullptr;};
    inline string getScheduleWindow() const { DARABONBA_PTR_GET_DEFAULT(scheduleWindow_, "") };
    inline UpdateDetectionRuleRequest& setScheduleWindow(string scheduleWindow) { DARABONBA_PTR_SET_VALUE(scheduleWindow_, scheduleWindow) };


  protected:
    shared_ptr<string> alertAttCk_ {};
    shared_ptr<string> alertDescription_ {};
    shared_ptr<string> alertLevel_ {};
    shared_ptr<string> alertName_ {};
    shared_ptr<string> alertSchemaId_ {};
    shared_ptr<string> alertTacticId_ {};
    shared_ptr<int32_t> alertThresholdCount_ {};
    shared_ptr<string> alertThresholdGroup_ {};
    shared_ptr<string> alertThresholdPeriod_ {};
    shared_ptr<string> alertType_ {};
    shared_ptr<string> detectionExpressionContent_ {};
    shared_ptr<string> detectionExpressionType_ {};
    shared_ptr<string> detectionRuleDescription_ {};
    // This parameter is required.
    shared_ptr<string> detectionRuleId_ {};
    shared_ptr<string> detectionRuleName_ {};
    shared_ptr<string> detectionRuleStatus_ {};
    // This parameter is required.
    shared_ptr<string> detectionRuleType_ {};
    shared_ptr<string> entityMappings_ {};
    shared_ptr<string> incidentAggregationExpression_ {};
    shared_ptr<string> incidentAggregationType_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> logCategoryId_ {};
    shared_ptr<string> logSchemaId_ {};
    shared_ptr<string> playbookParameters_ {};
    shared_ptr<string> playbookUuid_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> scheduleBeginTime_ {};
    shared_ptr<string> scheduleExpression_ {};
    shared_ptr<int32_t> scheduleMaxRetries_ {};
    shared_ptr<int32_t> scheduleMaxTimeout_ {};
    shared_ptr<string> scheduleType_ {};
    shared_ptr<string> scheduleWindow_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
