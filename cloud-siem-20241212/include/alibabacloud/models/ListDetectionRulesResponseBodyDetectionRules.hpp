// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODYDETECTIONRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODYDETECTIONRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDetectionRulesResponseBodyDetectionRulesEntityMappings.hpp>
#include <alibabacloud/models/ListDetectionRulesResponseBodyDetectionRulesPlaybook.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDetectionRulesResponseBodyDetectionRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectionRulesResponseBodyDetectionRules& obj) { 
      DARABONBA_PTR_TO_JSON(AlertAttCk, alertAttCk_);
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(AlertSchemaId, alertSchemaId_);
      DARABONBA_PTR_TO_JSON(AlertTacticId, alertTacticId_);
      DARABONBA_PTR_TO_JSON(AlertThresholdCount, alertThresholdCount_);
      DARABONBA_PTR_TO_JSON(AlertThresholdGroup, alertThresholdGroup_);
      DARABONBA_PTR_TO_JSON(AlertThresholdPeriod, alertThresholdPeriod_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
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
      DARABONBA_PTR_TO_JSON(LogCategoryId, logCategoryId_);
      DARABONBA_PTR_TO_JSON(LogSchemaId, logSchemaId_);
      DARABONBA_PTR_TO_JSON(Playbook, playbook_);
      DARABONBA_PTR_TO_JSON(PlaybookParameters, playbookParameters_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(ScheduleBeginTime, scheduleBeginTime_);
      DARABONBA_PTR_TO_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_TO_JSON(ScheduleMaxRetries, scheduleMaxRetries_);
      DARABONBA_PTR_TO_JSON(ScheduleMaxTimeout, scheduleMaxTimeout_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(ScheduleWindow, scheduleWindow_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectionRulesResponseBodyDetectionRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertAttCk, alertAttCk_);
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(AlertSchemaId, alertSchemaId_);
      DARABONBA_PTR_FROM_JSON(AlertTacticId, alertTacticId_);
      DARABONBA_PTR_FROM_JSON(AlertThresholdCount, alertThresholdCount_);
      DARABONBA_PTR_FROM_JSON(AlertThresholdGroup, alertThresholdGroup_);
      DARABONBA_PTR_FROM_JSON(AlertThresholdPeriod, alertThresholdPeriod_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
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
      DARABONBA_PTR_FROM_JSON(LogCategoryId, logCategoryId_);
      DARABONBA_PTR_FROM_JSON(LogSchemaId, logSchemaId_);
      DARABONBA_PTR_FROM_JSON(Playbook, playbook_);
      DARABONBA_PTR_FROM_JSON(PlaybookParameters, playbookParameters_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(ScheduleBeginTime, scheduleBeginTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_FROM_JSON(ScheduleMaxRetries, scheduleMaxRetries_);
      DARABONBA_PTR_FROM_JSON(ScheduleMaxTimeout, scheduleMaxTimeout_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(ScheduleWindow, scheduleWindow_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDetectionRulesResponseBodyDetectionRules() = default ;
    ListDetectionRulesResponseBodyDetectionRules(const ListDetectionRulesResponseBodyDetectionRules &) = default ;
    ListDetectionRulesResponseBodyDetectionRules(ListDetectionRulesResponseBodyDetectionRules &&) = default ;
    ListDetectionRulesResponseBodyDetectionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectionRulesResponseBodyDetectionRules() = default ;
    ListDetectionRulesResponseBodyDetectionRules& operator=(const ListDetectionRulesResponseBodyDetectionRules &) = default ;
    ListDetectionRulesResponseBodyDetectionRules& operator=(ListDetectionRulesResponseBodyDetectionRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertAttCk_ == nullptr
        && return this->alertLevel_ == nullptr && return this->alertSchemaId_ == nullptr && return this->alertTacticId_ == nullptr && return this->alertThresholdCount_ == nullptr && return this->alertThresholdGroup_ == nullptr
        && return this->alertThresholdPeriod_ == nullptr && return this->alertType_ == nullptr && return this->createTime_ == nullptr && return this->detectionExpressionContent_ == nullptr && return this->detectionExpressionType_ == nullptr
        && return this->detectionRuleDescription_ == nullptr && return this->detectionRuleId_ == nullptr && return this->detectionRuleName_ == nullptr && return this->detectionRuleStatus_ == nullptr && return this->detectionRuleType_ == nullptr
        && return this->entityMappings_ == nullptr && return this->incidentAggregationExpression_ == nullptr && return this->incidentAggregationType_ == nullptr && return this->logCategoryId_ == nullptr && return this->logSchemaId_ == nullptr
        && return this->playbook_ == nullptr && return this->playbookParameters_ == nullptr && return this->playbookUuid_ == nullptr && return this->scheduleBeginTime_ == nullptr && return this->scheduleExpression_ == nullptr
        && return this->scheduleMaxRetries_ == nullptr && return this->scheduleMaxTimeout_ == nullptr && return this->scheduleType_ == nullptr && return this->scheduleWindow_ == nullptr && return this->updateTime_ == nullptr; };
    // alertAttCk Field Functions 
    bool hasAlertAttCk() const { return this->alertAttCk_ != nullptr;};
    void deleteAlertAttCk() { this->alertAttCk_ = nullptr;};
    inline string alertAttCk() const { DARABONBA_PTR_GET_DEFAULT(alertAttCk_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setAlertAttCk(string alertAttCk) { DARABONBA_PTR_SET_VALUE(alertAttCk_, alertAttCk) };


    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline string alertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // alertSchemaId Field Functions 
    bool hasAlertSchemaId() const { return this->alertSchemaId_ != nullptr;};
    void deleteAlertSchemaId() { this->alertSchemaId_ = nullptr;};
    inline string alertSchemaId() const { DARABONBA_PTR_GET_DEFAULT(alertSchemaId_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setAlertSchemaId(string alertSchemaId) { DARABONBA_PTR_SET_VALUE(alertSchemaId_, alertSchemaId) };


    // alertTacticId Field Functions 
    bool hasAlertTacticId() const { return this->alertTacticId_ != nullptr;};
    void deleteAlertTacticId() { this->alertTacticId_ = nullptr;};
    inline string alertTacticId() const { DARABONBA_PTR_GET_DEFAULT(alertTacticId_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setAlertTacticId(string alertTacticId) { DARABONBA_PTR_SET_VALUE(alertTacticId_, alertTacticId) };


    // alertThresholdCount Field Functions 
    bool hasAlertThresholdCount() const { return this->alertThresholdCount_ != nullptr;};
    void deleteAlertThresholdCount() { this->alertThresholdCount_ = nullptr;};
    inline int32_t alertThresholdCount() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdCount_, 0) };
    inline ListDetectionRulesResponseBodyDetectionRules& setAlertThresholdCount(int32_t alertThresholdCount) { DARABONBA_PTR_SET_VALUE(alertThresholdCount_, alertThresholdCount) };


    // alertThresholdGroup Field Functions 
    bool hasAlertThresholdGroup() const { return this->alertThresholdGroup_ != nullptr;};
    void deleteAlertThresholdGroup() { this->alertThresholdGroup_ = nullptr;};
    inline string alertThresholdGroup() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdGroup_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setAlertThresholdGroup(string alertThresholdGroup) { DARABONBA_PTR_SET_VALUE(alertThresholdGroup_, alertThresholdGroup) };


    // alertThresholdPeriod Field Functions 
    bool hasAlertThresholdPeriod() const { return this->alertThresholdPeriod_ != nullptr;};
    void deleteAlertThresholdPeriod() { this->alertThresholdPeriod_ = nullptr;};
    inline string alertThresholdPeriod() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdPeriod_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setAlertThresholdPeriod(string alertThresholdPeriod) { DARABONBA_PTR_SET_VALUE(alertThresholdPeriod_, alertThresholdPeriod) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDetectionRulesResponseBodyDetectionRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detectionExpressionContent Field Functions 
    bool hasDetectionExpressionContent() const { return this->detectionExpressionContent_ != nullptr;};
    void deleteDetectionExpressionContent() { this->detectionExpressionContent_ = nullptr;};
    inline string detectionExpressionContent() const { DARABONBA_PTR_GET_DEFAULT(detectionExpressionContent_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setDetectionExpressionContent(string detectionExpressionContent) { DARABONBA_PTR_SET_VALUE(detectionExpressionContent_, detectionExpressionContent) };


    // detectionExpressionType Field Functions 
    bool hasDetectionExpressionType() const { return this->detectionExpressionType_ != nullptr;};
    void deleteDetectionExpressionType() { this->detectionExpressionType_ = nullptr;};
    inline string detectionExpressionType() const { DARABONBA_PTR_GET_DEFAULT(detectionExpressionType_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setDetectionExpressionType(string detectionExpressionType) { DARABONBA_PTR_SET_VALUE(detectionExpressionType_, detectionExpressionType) };


    // detectionRuleDescription Field Functions 
    bool hasDetectionRuleDescription() const { return this->detectionRuleDescription_ != nullptr;};
    void deleteDetectionRuleDescription() { this->detectionRuleDescription_ = nullptr;};
    inline string detectionRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleDescription_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setDetectionRuleDescription(string detectionRuleDescription) { DARABONBA_PTR_SET_VALUE(detectionRuleDescription_, detectionRuleDescription) };


    // detectionRuleId Field Functions 
    bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
    void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
    inline string detectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


    // detectionRuleName Field Functions 
    bool hasDetectionRuleName() const { return this->detectionRuleName_ != nullptr;};
    void deleteDetectionRuleName() { this->detectionRuleName_ = nullptr;};
    inline string detectionRuleName() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleName_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setDetectionRuleName(string detectionRuleName) { DARABONBA_PTR_SET_VALUE(detectionRuleName_, detectionRuleName) };


    // detectionRuleStatus Field Functions 
    bool hasDetectionRuleStatus() const { return this->detectionRuleStatus_ != nullptr;};
    void deleteDetectionRuleStatus() { this->detectionRuleStatus_ = nullptr;};
    inline string detectionRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleStatus_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setDetectionRuleStatus(string detectionRuleStatus) { DARABONBA_PTR_SET_VALUE(detectionRuleStatus_, detectionRuleStatus) };


    // detectionRuleType Field Functions 
    bool hasDetectionRuleType() const { return this->detectionRuleType_ != nullptr;};
    void deleteDetectionRuleType() { this->detectionRuleType_ = nullptr;};
    inline string detectionRuleType() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleType_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setDetectionRuleType(string detectionRuleType) { DARABONBA_PTR_SET_VALUE(detectionRuleType_, detectionRuleType) };


    // entityMappings Field Functions 
    bool hasEntityMappings() const { return this->entityMappings_ != nullptr;};
    void deleteEntityMappings() { this->entityMappings_ = nullptr;};
    inline const vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappings> & entityMappings() const { DARABONBA_PTR_GET_CONST(entityMappings_, vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappings>) };
    inline vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappings> entityMappings() { DARABONBA_PTR_GET(entityMappings_, vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappings>) };
    inline ListDetectionRulesResponseBodyDetectionRules& setEntityMappings(const vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappings> & entityMappings) { DARABONBA_PTR_SET_VALUE(entityMappings_, entityMappings) };
    inline ListDetectionRulesResponseBodyDetectionRules& setEntityMappings(vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappings> && entityMappings) { DARABONBA_PTR_SET_RVALUE(entityMappings_, entityMappings) };


    // incidentAggregationExpression Field Functions 
    bool hasIncidentAggregationExpression() const { return this->incidentAggregationExpression_ != nullptr;};
    void deleteIncidentAggregationExpression() { this->incidentAggregationExpression_ = nullptr;};
    inline string incidentAggregationExpression() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationExpression_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setIncidentAggregationExpression(string incidentAggregationExpression) { DARABONBA_PTR_SET_VALUE(incidentAggregationExpression_, incidentAggregationExpression) };


    // incidentAggregationType Field Functions 
    bool hasIncidentAggregationType() const { return this->incidentAggregationType_ != nullptr;};
    void deleteIncidentAggregationType() { this->incidentAggregationType_ = nullptr;};
    inline string incidentAggregationType() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationType_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setIncidentAggregationType(string incidentAggregationType) { DARABONBA_PTR_SET_VALUE(incidentAggregationType_, incidentAggregationType) };


    // logCategoryId Field Functions 
    bool hasLogCategoryId() const { return this->logCategoryId_ != nullptr;};
    void deleteLogCategoryId() { this->logCategoryId_ = nullptr;};
    inline string logCategoryId() const { DARABONBA_PTR_GET_DEFAULT(logCategoryId_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setLogCategoryId(string logCategoryId) { DARABONBA_PTR_SET_VALUE(logCategoryId_, logCategoryId) };


    // logSchemaId Field Functions 
    bool hasLogSchemaId() const { return this->logSchemaId_ != nullptr;};
    void deleteLogSchemaId() { this->logSchemaId_ = nullptr;};
    inline string logSchemaId() const { DARABONBA_PTR_GET_DEFAULT(logSchemaId_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setLogSchemaId(string logSchemaId) { DARABONBA_PTR_SET_VALUE(logSchemaId_, logSchemaId) };


    // playbook Field Functions 
    bool hasPlaybook() const { return this->playbook_ != nullptr;};
    void deletePlaybook() { this->playbook_ = nullptr;};
    inline const Models::ListDetectionRulesResponseBodyDetectionRulesPlaybook & playbook() const { DARABONBA_PTR_GET_CONST(playbook_, Models::ListDetectionRulesResponseBodyDetectionRulesPlaybook) };
    inline Models::ListDetectionRulesResponseBodyDetectionRulesPlaybook playbook() { DARABONBA_PTR_GET(playbook_, Models::ListDetectionRulesResponseBodyDetectionRulesPlaybook) };
    inline ListDetectionRulesResponseBodyDetectionRules& setPlaybook(const Models::ListDetectionRulesResponseBodyDetectionRulesPlaybook & playbook) { DARABONBA_PTR_SET_VALUE(playbook_, playbook) };
    inline ListDetectionRulesResponseBodyDetectionRules& setPlaybook(Models::ListDetectionRulesResponseBodyDetectionRulesPlaybook && playbook) { DARABONBA_PTR_SET_RVALUE(playbook_, playbook) };


    // playbookParameters Field Functions 
    bool hasPlaybookParameters() const { return this->playbookParameters_ != nullptr;};
    void deletePlaybookParameters() { this->playbookParameters_ = nullptr;};
    inline string playbookParameters() const { DARABONBA_PTR_GET_DEFAULT(playbookParameters_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setPlaybookParameters(string playbookParameters) { DARABONBA_PTR_SET_VALUE(playbookParameters_, playbookParameters) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // scheduleBeginTime Field Functions 
    bool hasScheduleBeginTime() const { return this->scheduleBeginTime_ != nullptr;};
    void deleteScheduleBeginTime() { this->scheduleBeginTime_ = nullptr;};
    inline int64_t scheduleBeginTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleBeginTime_, 0L) };
    inline ListDetectionRulesResponseBodyDetectionRules& setScheduleBeginTime(int64_t scheduleBeginTime) { DARABONBA_PTR_SET_VALUE(scheduleBeginTime_, scheduleBeginTime) };


    // scheduleExpression Field Functions 
    bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
    void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
    inline string scheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


    // scheduleMaxRetries Field Functions 
    bool hasScheduleMaxRetries() const { return this->scheduleMaxRetries_ != nullptr;};
    void deleteScheduleMaxRetries() { this->scheduleMaxRetries_ = nullptr;};
    inline int32_t scheduleMaxRetries() const { DARABONBA_PTR_GET_DEFAULT(scheduleMaxRetries_, 0) };
    inline ListDetectionRulesResponseBodyDetectionRules& setScheduleMaxRetries(int32_t scheduleMaxRetries) { DARABONBA_PTR_SET_VALUE(scheduleMaxRetries_, scheduleMaxRetries) };


    // scheduleMaxTimeout Field Functions 
    bool hasScheduleMaxTimeout() const { return this->scheduleMaxTimeout_ != nullptr;};
    void deleteScheduleMaxTimeout() { this->scheduleMaxTimeout_ = nullptr;};
    inline int32_t scheduleMaxTimeout() const { DARABONBA_PTR_GET_DEFAULT(scheduleMaxTimeout_, 0) };
    inline ListDetectionRulesResponseBodyDetectionRules& setScheduleMaxTimeout(int32_t scheduleMaxTimeout) { DARABONBA_PTR_SET_VALUE(scheduleMaxTimeout_, scheduleMaxTimeout) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // scheduleWindow Field Functions 
    bool hasScheduleWindow() const { return this->scheduleWindow_ != nullptr;};
    void deleteScheduleWindow() { this->scheduleWindow_ = nullptr;};
    inline string scheduleWindow() const { DARABONBA_PTR_GET_DEFAULT(scheduleWindow_, "") };
    inline ListDetectionRulesResponseBodyDetectionRules& setScheduleWindow(string scheduleWindow) { DARABONBA_PTR_SET_VALUE(scheduleWindow_, scheduleWindow) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDetectionRulesResponseBodyDetectionRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> alertAttCk_ = nullptr;
    std::shared_ptr<string> alertLevel_ = nullptr;
    std::shared_ptr<string> alertSchemaId_ = nullptr;
    std::shared_ptr<string> alertTacticId_ = nullptr;
    std::shared_ptr<int32_t> alertThresholdCount_ = nullptr;
    std::shared_ptr<string> alertThresholdGroup_ = nullptr;
    std::shared_ptr<string> alertThresholdPeriod_ = nullptr;
    std::shared_ptr<string> alertType_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> detectionExpressionContent_ = nullptr;
    std::shared_ptr<string> detectionExpressionType_ = nullptr;
    std::shared_ptr<string> detectionRuleDescription_ = nullptr;
    std::shared_ptr<string> detectionRuleId_ = nullptr;
    std::shared_ptr<string> detectionRuleName_ = nullptr;
    std::shared_ptr<string> detectionRuleStatus_ = nullptr;
    std::shared_ptr<string> detectionRuleType_ = nullptr;
    std::shared_ptr<vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappings>> entityMappings_ = nullptr;
    std::shared_ptr<string> incidentAggregationExpression_ = nullptr;
    std::shared_ptr<string> incidentAggregationType_ = nullptr;
    std::shared_ptr<string> logCategoryId_ = nullptr;
    std::shared_ptr<string> logSchemaId_ = nullptr;
    std::shared_ptr<Models::ListDetectionRulesResponseBodyDetectionRulesPlaybook> playbook_ = nullptr;
    std::shared_ptr<string> playbookParameters_ = nullptr;
    std::shared_ptr<string> playbookUuid_ = nullptr;
    std::shared_ptr<int64_t> scheduleBeginTime_ = nullptr;
    std::shared_ptr<string> scheduleExpression_ = nullptr;
    std::shared_ptr<int32_t> scheduleMaxRetries_ = nullptr;
    std::shared_ptr<int32_t> scheduleMaxTimeout_ = nullptr;
    std::shared_ptr<string> scheduleType_ = nullptr;
    std::shared_ptr<string> scheduleWindow_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
