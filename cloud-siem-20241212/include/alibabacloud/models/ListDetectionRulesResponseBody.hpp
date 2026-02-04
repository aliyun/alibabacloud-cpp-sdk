// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDetectionRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectionRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetectionRules, detectionRules_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectionRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectionRules, detectionRules_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDetectionRulesResponseBody() = default ;
    ListDetectionRulesResponseBody(const ListDetectionRulesResponseBody &) = default ;
    ListDetectionRulesResponseBody(ListDetectionRulesResponseBody &&) = default ;
    ListDetectionRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectionRulesResponseBody() = default ;
    ListDetectionRulesResponseBody& operator=(const ListDetectionRulesResponseBody &) = default ;
    ListDetectionRulesResponseBody& operator=(ListDetectionRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectionRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectionRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DetectionRules& obj) { 
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
      DetectionRules() = default ;
      DetectionRules(const DetectionRules &) = default ;
      DetectionRules(DetectionRules &&) = default ;
      DetectionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectionRules() = default ;
      DetectionRules& operator=(const DetectionRules &) = default ;
      DetectionRules& operator=(DetectionRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Playbook : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Playbook& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(Flow, flow_);
        };
        friend void from_json(const Darabonba::Json& j, Playbook& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
        };
        Playbook() = default ;
        Playbook(const Playbook &) = default ;
        Playbook(Playbook &&) = default ;
        Playbook(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Playbook() = default ;
        Playbook& operator=(const Playbook &) = default ;
        Playbook& operator=(Playbook &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->config_ == nullptr
        && this->flow_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline Playbook& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline Playbook& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


      protected:
        shared_ptr<string> config_ {};
        shared_ptr<string> flow_ {};
      };

      class EntityMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntityMappings& obj) { 
          DARABONBA_PTR_TO_JSON(NormalizationFieldMappings, normalizationFieldMappings_);
          DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
        };
        friend void from_json(const Darabonba::Json& j, EntityMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(NormalizationFieldMappings, normalizationFieldMappings_);
          DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
        };
        EntityMappings() = default ;
        EntityMappings(const EntityMappings &) = default ;
        EntityMappings(EntityMappings &&) = default ;
        EntityMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntityMappings() = default ;
        EntityMappings& operator=(const EntityMappings &) = default ;
        EntityMappings& operator=(EntityMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NormalizationFieldMappings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NormalizationFieldMappings& obj) { 
            DARABONBA_PTR_TO_JSON(MappingFieldName, mappingFieldName_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
            DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
          };
          friend void from_json(const Darabonba::Json& j, NormalizationFieldMappings& obj) { 
            DARABONBA_PTR_FROM_JSON(MappingFieldName, mappingFieldName_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
            DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
          };
          NormalizationFieldMappings() = default ;
          NormalizationFieldMappings(const NormalizationFieldMappings &) = default ;
          NormalizationFieldMappings(NormalizationFieldMappings &&) = default ;
          NormalizationFieldMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NormalizationFieldMappings() = default ;
          NormalizationFieldMappings& operator=(const NormalizationFieldMappings &) = default ;
          NormalizationFieldMappings& operator=(NormalizationFieldMappings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mappingFieldName_ == nullptr
        && this->normalizationFieldName_ == nullptr && this->normalizationFieldType_ == nullptr; };
          // mappingFieldName Field Functions 
          bool hasMappingFieldName() const { return this->mappingFieldName_ != nullptr;};
          void deleteMappingFieldName() { this->mappingFieldName_ = nullptr;};
          inline string getMappingFieldName() const { DARABONBA_PTR_GET_DEFAULT(mappingFieldName_, "") };
          inline NormalizationFieldMappings& setMappingFieldName(string mappingFieldName) { DARABONBA_PTR_SET_VALUE(mappingFieldName_, mappingFieldName) };


          // normalizationFieldName Field Functions 
          bool hasNormalizationFieldName() const { return this->normalizationFieldName_ != nullptr;};
          void deleteNormalizationFieldName() { this->normalizationFieldName_ = nullptr;};
          inline string getNormalizationFieldName() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldName_, "") };
          inline NormalizationFieldMappings& setNormalizationFieldName(string normalizationFieldName) { DARABONBA_PTR_SET_VALUE(normalizationFieldName_, normalizationFieldName) };


          // normalizationFieldType Field Functions 
          bool hasNormalizationFieldType() const { return this->normalizationFieldType_ != nullptr;};
          void deleteNormalizationFieldType() { this->normalizationFieldType_ = nullptr;};
          inline string getNormalizationFieldType() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldType_, "") };
          inline NormalizationFieldMappings& setNormalizationFieldType(string normalizationFieldType) { DARABONBA_PTR_SET_VALUE(normalizationFieldType_, normalizationFieldType) };


        protected:
          shared_ptr<string> mappingFieldName_ {};
          shared_ptr<string> normalizationFieldName_ {};
          shared_ptr<string> normalizationFieldType_ {};
        };

        virtual bool empty() const override { return this->normalizationFieldMappings_ == nullptr
        && this->normalizationSchemaId_ == nullptr; };
        // normalizationFieldMappings Field Functions 
        bool hasNormalizationFieldMappings() const { return this->normalizationFieldMappings_ != nullptr;};
        void deleteNormalizationFieldMappings() { this->normalizationFieldMappings_ = nullptr;};
        inline const vector<EntityMappings::NormalizationFieldMappings> & getNormalizationFieldMappings() const { DARABONBA_PTR_GET_CONST(normalizationFieldMappings_, vector<EntityMappings::NormalizationFieldMappings>) };
        inline vector<EntityMappings::NormalizationFieldMappings> getNormalizationFieldMappings() { DARABONBA_PTR_GET(normalizationFieldMappings_, vector<EntityMappings::NormalizationFieldMappings>) };
        inline EntityMappings& setNormalizationFieldMappings(const vector<EntityMappings::NormalizationFieldMappings> & normalizationFieldMappings) { DARABONBA_PTR_SET_VALUE(normalizationFieldMappings_, normalizationFieldMappings) };
        inline EntityMappings& setNormalizationFieldMappings(vector<EntityMappings::NormalizationFieldMappings> && normalizationFieldMappings) { DARABONBA_PTR_SET_RVALUE(normalizationFieldMappings_, normalizationFieldMappings) };


        // normalizationSchemaId Field Functions 
        bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
        void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
        inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
        inline EntityMappings& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


      protected:
        shared_ptr<vector<EntityMappings::NormalizationFieldMappings>> normalizationFieldMappings_ {};
        shared_ptr<string> normalizationSchemaId_ {};
      };

      virtual bool empty() const override { return this->alertAttCk_ == nullptr
        && this->alertDescription_ == nullptr && this->alertLevel_ == nullptr && this->alertName_ == nullptr && this->alertSchemaId_ == nullptr && this->alertTacticId_ == nullptr
        && this->alertThresholdCount_ == nullptr && this->alertThresholdGroup_ == nullptr && this->alertThresholdPeriod_ == nullptr && this->alertType_ == nullptr && this->createTime_ == nullptr
        && this->detectionExpressionContent_ == nullptr && this->detectionExpressionType_ == nullptr && this->detectionRuleDescription_ == nullptr && this->detectionRuleId_ == nullptr && this->detectionRuleName_ == nullptr
        && this->detectionRuleStatus_ == nullptr && this->detectionRuleType_ == nullptr && this->entityMappings_ == nullptr && this->incidentAggregationExpression_ == nullptr && this->incidentAggregationType_ == nullptr
        && this->logCategoryId_ == nullptr && this->logSchemaId_ == nullptr && this->playbook_ == nullptr && this->playbookParameters_ == nullptr && this->playbookUuid_ == nullptr
        && this->scheduleBeginTime_ == nullptr && this->scheduleExpression_ == nullptr && this->scheduleMaxRetries_ == nullptr && this->scheduleMaxTimeout_ == nullptr && this->scheduleType_ == nullptr
        && this->scheduleWindow_ == nullptr && this->updateTime_ == nullptr; };
      // alertAttCk Field Functions 
      bool hasAlertAttCk() const { return this->alertAttCk_ != nullptr;};
      void deleteAlertAttCk() { this->alertAttCk_ = nullptr;};
      inline string getAlertAttCk() const { DARABONBA_PTR_GET_DEFAULT(alertAttCk_, "") };
      inline DetectionRules& setAlertAttCk(string alertAttCk) { DARABONBA_PTR_SET_VALUE(alertAttCk_, alertAttCk) };


      // alertDescription Field Functions 
      bool hasAlertDescription() const { return this->alertDescription_ != nullptr;};
      void deleteAlertDescription() { this->alertDescription_ = nullptr;};
      inline string getAlertDescription() const { DARABONBA_PTR_GET_DEFAULT(alertDescription_, "") };
      inline DetectionRules& setAlertDescription(string alertDescription) { DARABONBA_PTR_SET_VALUE(alertDescription_, alertDescription) };


      // alertLevel Field Functions 
      bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
      void deleteAlertLevel() { this->alertLevel_ = nullptr;};
      inline string getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
      inline DetectionRules& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


      // alertName Field Functions 
      bool hasAlertName() const { return this->alertName_ != nullptr;};
      void deleteAlertName() { this->alertName_ = nullptr;};
      inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
      inline DetectionRules& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


      // alertSchemaId Field Functions 
      bool hasAlertSchemaId() const { return this->alertSchemaId_ != nullptr;};
      void deleteAlertSchemaId() { this->alertSchemaId_ = nullptr;};
      inline string getAlertSchemaId() const { DARABONBA_PTR_GET_DEFAULT(alertSchemaId_, "") };
      inline DetectionRules& setAlertSchemaId(string alertSchemaId) { DARABONBA_PTR_SET_VALUE(alertSchemaId_, alertSchemaId) };


      // alertTacticId Field Functions 
      bool hasAlertTacticId() const { return this->alertTacticId_ != nullptr;};
      void deleteAlertTacticId() { this->alertTacticId_ = nullptr;};
      inline string getAlertTacticId() const { DARABONBA_PTR_GET_DEFAULT(alertTacticId_, "") };
      inline DetectionRules& setAlertTacticId(string alertTacticId) { DARABONBA_PTR_SET_VALUE(alertTacticId_, alertTacticId) };


      // alertThresholdCount Field Functions 
      bool hasAlertThresholdCount() const { return this->alertThresholdCount_ != nullptr;};
      void deleteAlertThresholdCount() { this->alertThresholdCount_ = nullptr;};
      inline int32_t getAlertThresholdCount() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdCount_, 0) };
      inline DetectionRules& setAlertThresholdCount(int32_t alertThresholdCount) { DARABONBA_PTR_SET_VALUE(alertThresholdCount_, alertThresholdCount) };


      // alertThresholdGroup Field Functions 
      bool hasAlertThresholdGroup() const { return this->alertThresholdGroup_ != nullptr;};
      void deleteAlertThresholdGroup() { this->alertThresholdGroup_ = nullptr;};
      inline string getAlertThresholdGroup() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdGroup_, "") };
      inline DetectionRules& setAlertThresholdGroup(string alertThresholdGroup) { DARABONBA_PTR_SET_VALUE(alertThresholdGroup_, alertThresholdGroup) };


      // alertThresholdPeriod Field Functions 
      bool hasAlertThresholdPeriod() const { return this->alertThresholdPeriod_ != nullptr;};
      void deleteAlertThresholdPeriod() { this->alertThresholdPeriod_ = nullptr;};
      inline string getAlertThresholdPeriod() const { DARABONBA_PTR_GET_DEFAULT(alertThresholdPeriod_, "") };
      inline DetectionRules& setAlertThresholdPeriod(string alertThresholdPeriod) { DARABONBA_PTR_SET_VALUE(alertThresholdPeriod_, alertThresholdPeriod) };


      // alertType Field Functions 
      bool hasAlertType() const { return this->alertType_ != nullptr;};
      void deleteAlertType() { this->alertType_ = nullptr;};
      inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
      inline DetectionRules& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DetectionRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // detectionExpressionContent Field Functions 
      bool hasDetectionExpressionContent() const { return this->detectionExpressionContent_ != nullptr;};
      void deleteDetectionExpressionContent() { this->detectionExpressionContent_ = nullptr;};
      inline string getDetectionExpressionContent() const { DARABONBA_PTR_GET_DEFAULT(detectionExpressionContent_, "") };
      inline DetectionRules& setDetectionExpressionContent(string detectionExpressionContent) { DARABONBA_PTR_SET_VALUE(detectionExpressionContent_, detectionExpressionContent) };


      // detectionExpressionType Field Functions 
      bool hasDetectionExpressionType() const { return this->detectionExpressionType_ != nullptr;};
      void deleteDetectionExpressionType() { this->detectionExpressionType_ = nullptr;};
      inline string getDetectionExpressionType() const { DARABONBA_PTR_GET_DEFAULT(detectionExpressionType_, "") };
      inline DetectionRules& setDetectionExpressionType(string detectionExpressionType) { DARABONBA_PTR_SET_VALUE(detectionExpressionType_, detectionExpressionType) };


      // detectionRuleDescription Field Functions 
      bool hasDetectionRuleDescription() const { return this->detectionRuleDescription_ != nullptr;};
      void deleteDetectionRuleDescription() { this->detectionRuleDescription_ = nullptr;};
      inline string getDetectionRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleDescription_, "") };
      inline DetectionRules& setDetectionRuleDescription(string detectionRuleDescription) { DARABONBA_PTR_SET_VALUE(detectionRuleDescription_, detectionRuleDescription) };


      // detectionRuleId Field Functions 
      bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
      void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
      inline string getDetectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
      inline DetectionRules& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


      // detectionRuleName Field Functions 
      bool hasDetectionRuleName() const { return this->detectionRuleName_ != nullptr;};
      void deleteDetectionRuleName() { this->detectionRuleName_ = nullptr;};
      inline string getDetectionRuleName() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleName_, "") };
      inline DetectionRules& setDetectionRuleName(string detectionRuleName) { DARABONBA_PTR_SET_VALUE(detectionRuleName_, detectionRuleName) };


      // detectionRuleStatus Field Functions 
      bool hasDetectionRuleStatus() const { return this->detectionRuleStatus_ != nullptr;};
      void deleteDetectionRuleStatus() { this->detectionRuleStatus_ = nullptr;};
      inline string getDetectionRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleStatus_, "") };
      inline DetectionRules& setDetectionRuleStatus(string detectionRuleStatus) { DARABONBA_PTR_SET_VALUE(detectionRuleStatus_, detectionRuleStatus) };


      // detectionRuleType Field Functions 
      bool hasDetectionRuleType() const { return this->detectionRuleType_ != nullptr;};
      void deleteDetectionRuleType() { this->detectionRuleType_ = nullptr;};
      inline string getDetectionRuleType() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleType_, "") };
      inline DetectionRules& setDetectionRuleType(string detectionRuleType) { DARABONBA_PTR_SET_VALUE(detectionRuleType_, detectionRuleType) };


      // entityMappings Field Functions 
      bool hasEntityMappings() const { return this->entityMappings_ != nullptr;};
      void deleteEntityMappings() { this->entityMappings_ = nullptr;};
      inline const vector<DetectionRules::EntityMappings> & getEntityMappings() const { DARABONBA_PTR_GET_CONST(entityMappings_, vector<DetectionRules::EntityMappings>) };
      inline vector<DetectionRules::EntityMappings> getEntityMappings() { DARABONBA_PTR_GET(entityMappings_, vector<DetectionRules::EntityMappings>) };
      inline DetectionRules& setEntityMappings(const vector<DetectionRules::EntityMappings> & entityMappings) { DARABONBA_PTR_SET_VALUE(entityMappings_, entityMappings) };
      inline DetectionRules& setEntityMappings(vector<DetectionRules::EntityMappings> && entityMappings) { DARABONBA_PTR_SET_RVALUE(entityMappings_, entityMappings) };


      // incidentAggregationExpression Field Functions 
      bool hasIncidentAggregationExpression() const { return this->incidentAggregationExpression_ != nullptr;};
      void deleteIncidentAggregationExpression() { this->incidentAggregationExpression_ = nullptr;};
      inline string getIncidentAggregationExpression() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationExpression_, "") };
      inline DetectionRules& setIncidentAggregationExpression(string incidentAggregationExpression) { DARABONBA_PTR_SET_VALUE(incidentAggregationExpression_, incidentAggregationExpression) };


      // incidentAggregationType Field Functions 
      bool hasIncidentAggregationType() const { return this->incidentAggregationType_ != nullptr;};
      void deleteIncidentAggregationType() { this->incidentAggregationType_ = nullptr;};
      inline string getIncidentAggregationType() const { DARABONBA_PTR_GET_DEFAULT(incidentAggregationType_, "") };
      inline DetectionRules& setIncidentAggregationType(string incidentAggregationType) { DARABONBA_PTR_SET_VALUE(incidentAggregationType_, incidentAggregationType) };


      // logCategoryId Field Functions 
      bool hasLogCategoryId() const { return this->logCategoryId_ != nullptr;};
      void deleteLogCategoryId() { this->logCategoryId_ = nullptr;};
      inline string getLogCategoryId() const { DARABONBA_PTR_GET_DEFAULT(logCategoryId_, "") };
      inline DetectionRules& setLogCategoryId(string logCategoryId) { DARABONBA_PTR_SET_VALUE(logCategoryId_, logCategoryId) };


      // logSchemaId Field Functions 
      bool hasLogSchemaId() const { return this->logSchemaId_ != nullptr;};
      void deleteLogSchemaId() { this->logSchemaId_ = nullptr;};
      inline string getLogSchemaId() const { DARABONBA_PTR_GET_DEFAULT(logSchemaId_, "") };
      inline DetectionRules& setLogSchemaId(string logSchemaId) { DARABONBA_PTR_SET_VALUE(logSchemaId_, logSchemaId) };


      // playbook Field Functions 
      bool hasPlaybook() const { return this->playbook_ != nullptr;};
      void deletePlaybook() { this->playbook_ = nullptr;};
      inline const DetectionRules::Playbook & getPlaybook() const { DARABONBA_PTR_GET_CONST(playbook_, DetectionRules::Playbook) };
      inline DetectionRules::Playbook getPlaybook() { DARABONBA_PTR_GET(playbook_, DetectionRules::Playbook) };
      inline DetectionRules& setPlaybook(const DetectionRules::Playbook & playbook) { DARABONBA_PTR_SET_VALUE(playbook_, playbook) };
      inline DetectionRules& setPlaybook(DetectionRules::Playbook && playbook) { DARABONBA_PTR_SET_RVALUE(playbook_, playbook) };


      // playbookParameters Field Functions 
      bool hasPlaybookParameters() const { return this->playbookParameters_ != nullptr;};
      void deletePlaybookParameters() { this->playbookParameters_ = nullptr;};
      inline string getPlaybookParameters() const { DARABONBA_PTR_GET_DEFAULT(playbookParameters_, "") };
      inline DetectionRules& setPlaybookParameters(string playbookParameters) { DARABONBA_PTR_SET_VALUE(playbookParameters_, playbookParameters) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline DetectionRules& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


      // scheduleBeginTime Field Functions 
      bool hasScheduleBeginTime() const { return this->scheduleBeginTime_ != nullptr;};
      void deleteScheduleBeginTime() { this->scheduleBeginTime_ = nullptr;};
      inline int64_t getScheduleBeginTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleBeginTime_, 0L) };
      inline DetectionRules& setScheduleBeginTime(int64_t scheduleBeginTime) { DARABONBA_PTR_SET_VALUE(scheduleBeginTime_, scheduleBeginTime) };


      // scheduleExpression Field Functions 
      bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
      void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
      inline string getScheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
      inline DetectionRules& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


      // scheduleMaxRetries Field Functions 
      bool hasScheduleMaxRetries() const { return this->scheduleMaxRetries_ != nullptr;};
      void deleteScheduleMaxRetries() { this->scheduleMaxRetries_ = nullptr;};
      inline int32_t getScheduleMaxRetries() const { DARABONBA_PTR_GET_DEFAULT(scheduleMaxRetries_, 0) };
      inline DetectionRules& setScheduleMaxRetries(int32_t scheduleMaxRetries) { DARABONBA_PTR_SET_VALUE(scheduleMaxRetries_, scheduleMaxRetries) };


      // scheduleMaxTimeout Field Functions 
      bool hasScheduleMaxTimeout() const { return this->scheduleMaxTimeout_ != nullptr;};
      void deleteScheduleMaxTimeout() { this->scheduleMaxTimeout_ = nullptr;};
      inline int32_t getScheduleMaxTimeout() const { DARABONBA_PTR_GET_DEFAULT(scheduleMaxTimeout_, 0) };
      inline DetectionRules& setScheduleMaxTimeout(int32_t scheduleMaxTimeout) { DARABONBA_PTR_SET_VALUE(scheduleMaxTimeout_, scheduleMaxTimeout) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline DetectionRules& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // scheduleWindow Field Functions 
      bool hasScheduleWindow() const { return this->scheduleWindow_ != nullptr;};
      void deleteScheduleWindow() { this->scheduleWindow_ = nullptr;};
      inline string getScheduleWindow() const { DARABONBA_PTR_GET_DEFAULT(scheduleWindow_, "") };
      inline DetectionRules& setScheduleWindow(string scheduleWindow) { DARABONBA_PTR_SET_VALUE(scheduleWindow_, scheduleWindow) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DetectionRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


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
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> detectionExpressionContent_ {};
      shared_ptr<string> detectionExpressionType_ {};
      shared_ptr<string> detectionRuleDescription_ {};
      shared_ptr<string> detectionRuleId_ {};
      shared_ptr<string> detectionRuleName_ {};
      shared_ptr<string> detectionRuleStatus_ {};
      shared_ptr<string> detectionRuleType_ {};
      shared_ptr<vector<DetectionRules::EntityMappings>> entityMappings_ {};
      shared_ptr<string> incidentAggregationExpression_ {};
      shared_ptr<string> incidentAggregationType_ {};
      shared_ptr<string> logCategoryId_ {};
      shared_ptr<string> logSchemaId_ {};
      shared_ptr<DetectionRules::Playbook> playbook_ {};
      shared_ptr<string> playbookParameters_ {};
      shared_ptr<string> playbookUuid_ {};
      shared_ptr<int64_t> scheduleBeginTime_ {};
      shared_ptr<string> scheduleExpression_ {};
      shared_ptr<int32_t> scheduleMaxRetries_ {};
      shared_ptr<int32_t> scheduleMaxTimeout_ {};
      shared_ptr<string> scheduleType_ {};
      shared_ptr<string> scheduleWindow_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->detectionRules_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // detectionRules Field Functions 
    bool hasDetectionRules() const { return this->detectionRules_ != nullptr;};
    void deleteDetectionRules() { this->detectionRules_ = nullptr;};
    inline const vector<ListDetectionRulesResponseBody::DetectionRules> & getDetectionRules() const { DARABONBA_PTR_GET_CONST(detectionRules_, vector<ListDetectionRulesResponseBody::DetectionRules>) };
    inline vector<ListDetectionRulesResponseBody::DetectionRules> getDetectionRules() { DARABONBA_PTR_GET(detectionRules_, vector<ListDetectionRulesResponseBody::DetectionRules>) };
    inline ListDetectionRulesResponseBody& setDetectionRules(const vector<ListDetectionRulesResponseBody::DetectionRules> & detectionRules) { DARABONBA_PTR_SET_VALUE(detectionRules_, detectionRules) };
    inline ListDetectionRulesResponseBody& setDetectionRules(vector<ListDetectionRulesResponseBody::DetectionRules> && detectionRules) { DARABONBA_PTR_SET_RVALUE(detectionRules_, detectionRules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDetectionRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDetectionRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDetectionRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDetectionRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDetectionRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDetectionRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDetectionRulesResponseBody::DetectionRules>> detectionRules_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
