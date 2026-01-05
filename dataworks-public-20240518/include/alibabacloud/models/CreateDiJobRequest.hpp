// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUEST_HPP_
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
  class CreateDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    CreateDIJobRequest() = default ;
    CreateDIJobRequest(const CreateDIJobRequest &) = default ;
    CreateDIJobRequest(CreateDIJobRequest &&) = default ;
    CreateDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequest() = default ;
    CreateDIJobRequest& operator=(const CreateDIJobRequest &) = default ;
    CreateDIJobRequest& operator=(CreateDIJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransformationRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransformationRules& obj) { 
        DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
        DARABONBA_PTR_TO_JSON(RuleExpression, ruleExpression_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
      };
      friend void from_json(const Darabonba::Json& j, TransformationRules& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
        DARABONBA_PTR_FROM_JSON(RuleExpression, ruleExpression_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
      };
      TransformationRules() = default ;
      TransformationRules(const TransformationRules &) = default ;
      TransformationRules(TransformationRules &&) = default ;
      TransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransformationRules() = default ;
      TransformationRules& operator=(const TransformationRules &) = default ;
      TransformationRules& operator=(TransformationRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleActionType_ == nullptr
        && this->ruleExpression_ == nullptr && this->ruleName_ == nullptr && this->ruleTargetType_ == nullptr; };
      // ruleActionType Field Functions 
      bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
      void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
      inline string getRuleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
      inline TransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


      // ruleExpression Field Functions 
      bool hasRuleExpression() const { return this->ruleExpression_ != nullptr;};
      void deleteRuleExpression() { this->ruleExpression_ = nullptr;};
      inline string getRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(ruleExpression_, "") };
      inline TransformationRules& setRuleExpression(string ruleExpression) { DARABONBA_PTR_SET_VALUE(ruleExpression_, ruleExpression) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline TransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleTargetType Field Functions 
      bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
      void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
      inline string getRuleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
      inline TransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


    protected:
      shared_ptr<string> ruleActionType_ {};
      shared_ptr<string> ruleExpression_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> ruleTargetType_ {};
    };

    class TableMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableMappings& obj) { 
        DARABONBA_PTR_TO_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
        DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
      };
      friend void from_json(const Darabonba::Json& j, TableMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
        DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
      };
      TableMappings() = default ;
      TableMappings(const TableMappings &) = default ;
      TableMappings(TableMappings &&) = default ;
      TableMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableMappings() = default ;
      TableMappings& operator=(const TableMappings &) = default ;
      TableMappings& operator=(TableMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TransformationRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransformationRules& obj) { 
          DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
        };
        friend void from_json(const Darabonba::Json& j, TransformationRules& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
        };
        TransformationRules() = default ;
        TransformationRules(const TransformationRules &) = default ;
        TransformationRules(TransformationRules &&) = default ;
        TransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransformationRules() = default ;
        TransformationRules& operator=(const TransformationRules &) = default ;
        TransformationRules& operator=(TransformationRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ruleActionType_ == nullptr
        && this->ruleName_ == nullptr && this->ruleTargetType_ == nullptr; };
        // ruleActionType Field Functions 
        bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
        void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
        inline string getRuleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
        inline TransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline TransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleTargetType Field Functions 
        bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
        void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
        inline string getRuleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
        inline TransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


      protected:
        shared_ptr<string> ruleActionType_ {};
        shared_ptr<string> ruleName_ {};
        shared_ptr<string> ruleTargetType_ {};
      };

      class SourceObjectSelectionRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceObjectSelectionRules& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(ExpressionType, expressionType_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
        };
        friend void from_json(const Darabonba::Json& j, SourceObjectSelectionRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(ExpressionType, expressionType_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
        };
        SourceObjectSelectionRules() = default ;
        SourceObjectSelectionRules(const SourceObjectSelectionRules &) = default ;
        SourceObjectSelectionRules(SourceObjectSelectionRules &&) = default ;
        SourceObjectSelectionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceObjectSelectionRules() = default ;
        SourceObjectSelectionRules& operator=(const SourceObjectSelectionRules &) = default ;
        SourceObjectSelectionRules& operator=(SourceObjectSelectionRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->expression_ == nullptr && this->expressionType_ == nullptr && this->objectType_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline SourceObjectSelectionRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline SourceObjectSelectionRules& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // expressionType Field Functions 
        bool hasExpressionType() const { return this->expressionType_ != nullptr;};
        void deleteExpressionType() { this->expressionType_ = nullptr;};
        inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
        inline SourceObjectSelectionRules& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline SourceObjectSelectionRules& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<string> expression_ {};
        shared_ptr<string> expressionType_ {};
        shared_ptr<string> objectType_ {};
      };

      virtual bool empty() const override { return this->sourceObjectSelectionRules_ == nullptr
        && this->transformationRules_ == nullptr; };
      // sourceObjectSelectionRules Field Functions 
      bool hasSourceObjectSelectionRules() const { return this->sourceObjectSelectionRules_ != nullptr;};
      void deleteSourceObjectSelectionRules() { this->sourceObjectSelectionRules_ = nullptr;};
      inline const vector<TableMappings::SourceObjectSelectionRules> & getSourceObjectSelectionRules() const { DARABONBA_PTR_GET_CONST(sourceObjectSelectionRules_, vector<TableMappings::SourceObjectSelectionRules>) };
      inline vector<TableMappings::SourceObjectSelectionRules> getSourceObjectSelectionRules() { DARABONBA_PTR_GET(sourceObjectSelectionRules_, vector<TableMappings::SourceObjectSelectionRules>) };
      inline TableMappings& setSourceObjectSelectionRules(const vector<TableMappings::SourceObjectSelectionRules> & sourceObjectSelectionRules) { DARABONBA_PTR_SET_VALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };
      inline TableMappings& setSourceObjectSelectionRules(vector<TableMappings::SourceObjectSelectionRules> && sourceObjectSelectionRules) { DARABONBA_PTR_SET_RVALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };


      // transformationRules Field Functions 
      bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
      void deleteTransformationRules() { this->transformationRules_ = nullptr;};
      inline const vector<TableMappings::TransformationRules> & getTransformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<TableMappings::TransformationRules>) };
      inline vector<TableMappings::TransformationRules> getTransformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<TableMappings::TransformationRules>) };
      inline TableMappings& setTransformationRules(const vector<TableMappings::TransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
      inline TableMappings& setTransformationRules(vector<TableMappings::TransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


    protected:
      shared_ptr<vector<TableMappings::SourceObjectSelectionRules>> sourceObjectSelectionRules_ {};
      shared_ptr<vector<TableMappings::TransformationRules>> transformationRules_ {};
    };

    class SourceDataSourceSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceDataSourceSettings& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_TO_JSON(DataSourceProperties, dataSourceProperties_);
      };
      friend void from_json(const Darabonba::Json& j, SourceDataSourceSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_FROM_JSON(DataSourceProperties, dataSourceProperties_);
      };
      SourceDataSourceSettings() = default ;
      SourceDataSourceSettings(const SourceDataSourceSettings &) = default ;
      SourceDataSourceSettings(SourceDataSourceSettings &&) = default ;
      SourceDataSourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceDataSourceSettings() = default ;
      SourceDataSourceSettings& operator=(const SourceDataSourceSettings &) = default ;
      SourceDataSourceSettings& operator=(SourceDataSourceSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataSourceProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceProperties& obj) { 
          DARABONBA_PTR_TO_JSON(Encoding, encoding_);
          DARABONBA_PTR_TO_JSON(Timezone, timezone_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
          DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
        };
        DataSourceProperties() = default ;
        DataSourceProperties(const DataSourceProperties &) = default ;
        DataSourceProperties(DataSourceProperties &&) = default ;
        DataSourceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceProperties() = default ;
        DataSourceProperties& operator=(const DataSourceProperties &) = default ;
        DataSourceProperties& operator=(DataSourceProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->encoding_ == nullptr
        && this->timezone_ == nullptr; };
        // encoding Field Functions 
        bool hasEncoding() const { return this->encoding_ != nullptr;};
        void deleteEncoding() { this->encoding_ = nullptr;};
        inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
        inline DataSourceProperties& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline DataSourceProperties& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      protected:
        shared_ptr<string> encoding_ {};
        shared_ptr<string> timezone_ {};
      };

      virtual bool empty() const override { return this->dataSourceName_ == nullptr
        && this->dataSourceProperties_ == nullptr; };
      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline SourceDataSourceSettings& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // dataSourceProperties Field Functions 
      bool hasDataSourceProperties() const { return this->dataSourceProperties_ != nullptr;};
      void deleteDataSourceProperties() { this->dataSourceProperties_ = nullptr;};
      inline const SourceDataSourceSettings::DataSourceProperties & getDataSourceProperties() const { DARABONBA_PTR_GET_CONST(dataSourceProperties_, SourceDataSourceSettings::DataSourceProperties) };
      inline SourceDataSourceSettings::DataSourceProperties getDataSourceProperties() { DARABONBA_PTR_GET(dataSourceProperties_, SourceDataSourceSettings::DataSourceProperties) };
      inline SourceDataSourceSettings& setDataSourceProperties(const SourceDataSourceSettings::DataSourceProperties & dataSourceProperties) { DARABONBA_PTR_SET_VALUE(dataSourceProperties_, dataSourceProperties) };
      inline SourceDataSourceSettings& setDataSourceProperties(SourceDataSourceSettings::DataSourceProperties && dataSourceProperties) { DARABONBA_PTR_SET_RVALUE(dataSourceProperties_, dataSourceProperties) };


    protected:
      shared_ptr<string> dataSourceName_ {};
      shared_ptr<SourceDataSourceSettings::DataSourceProperties> dataSourceProperties_ {};
    };

    class ResourceSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSettings& obj) { 
        DARABONBA_PTR_TO_JSON(OfflineResourceSettings, offlineResourceSettings_);
        DARABONBA_PTR_TO_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
        DARABONBA_PTR_TO_JSON(ScheduleResourceSettings, scheduleResourceSettings_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(OfflineResourceSettings, offlineResourceSettings_);
        DARABONBA_PTR_FROM_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
        DARABONBA_PTR_FROM_JSON(ScheduleResourceSettings, scheduleResourceSettings_);
      };
      ResourceSettings() = default ;
      ResourceSettings(const ResourceSettings &) = default ;
      ResourceSettings(ResourceSettings &&) = default ;
      ResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceSettings() = default ;
      ResourceSettings& operator=(const ResourceSettings &) = default ;
      ResourceSettings& operator=(ResourceSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScheduleResourceSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleResourceSettings& obj) { 
          DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
          DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleResourceSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
        };
        ScheduleResourceSettings() = default ;
        ScheduleResourceSettings(const ScheduleResourceSettings &) = default ;
        ScheduleResourceSettings(ScheduleResourceSettings &&) = default ;
        ScheduleResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleResourceSettings() = default ;
        ScheduleResourceSettings& operator=(const ScheduleResourceSettings &) = default ;
        ScheduleResourceSettings& operator=(ScheduleResourceSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requestedCu_ == nullptr
        && this->resourceGroupIdentifier_ == nullptr; };
        // requestedCu Field Functions 
        bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
        void deleteRequestedCu() { this->requestedCu_ = nullptr;};
        inline double getRequestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
        inline ScheduleResourceSettings& setRequestedCu(double requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


        // resourceGroupIdentifier Field Functions 
        bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
        void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
        inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
        inline ScheduleResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


      protected:
        shared_ptr<double> requestedCu_ {};
        shared_ptr<string> resourceGroupIdentifier_ {};
      };

      class RealtimeResourceSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealtimeResourceSettings& obj) { 
          DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
          DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
        };
        friend void from_json(const Darabonba::Json& j, RealtimeResourceSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
        };
        RealtimeResourceSettings() = default ;
        RealtimeResourceSettings(const RealtimeResourceSettings &) = default ;
        RealtimeResourceSettings(RealtimeResourceSettings &&) = default ;
        RealtimeResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RealtimeResourceSettings() = default ;
        RealtimeResourceSettings& operator=(const RealtimeResourceSettings &) = default ;
        RealtimeResourceSettings& operator=(RealtimeResourceSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requestedCu_ == nullptr
        && this->resourceGroupIdentifier_ == nullptr; };
        // requestedCu Field Functions 
        bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
        void deleteRequestedCu() { this->requestedCu_ = nullptr;};
        inline double getRequestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
        inline RealtimeResourceSettings& setRequestedCu(double requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


        // resourceGroupIdentifier Field Functions 
        bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
        void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
        inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
        inline RealtimeResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


      protected:
        shared_ptr<double> requestedCu_ {};
        shared_ptr<string> resourceGroupIdentifier_ {};
      };

      class OfflineResourceSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OfflineResourceSettings& obj) { 
          DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
          DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
        };
        friend void from_json(const Darabonba::Json& j, OfflineResourceSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
        };
        OfflineResourceSettings() = default ;
        OfflineResourceSettings(const OfflineResourceSettings &) = default ;
        OfflineResourceSettings(OfflineResourceSettings &&) = default ;
        OfflineResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OfflineResourceSettings() = default ;
        OfflineResourceSettings& operator=(const OfflineResourceSettings &) = default ;
        OfflineResourceSettings& operator=(OfflineResourceSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requestedCu_ == nullptr
        && this->resourceGroupIdentifier_ == nullptr; };
        // requestedCu Field Functions 
        bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
        void deleteRequestedCu() { this->requestedCu_ = nullptr;};
        inline double getRequestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
        inline OfflineResourceSettings& setRequestedCu(double requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


        // resourceGroupIdentifier Field Functions 
        bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
        void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
        inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
        inline OfflineResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


      protected:
        shared_ptr<double> requestedCu_ {};
        shared_ptr<string> resourceGroupIdentifier_ {};
      };

      virtual bool empty() const override { return this->offlineResourceSettings_ == nullptr
        && this->realtimeResourceSettings_ == nullptr && this->scheduleResourceSettings_ == nullptr; };
      // offlineResourceSettings Field Functions 
      bool hasOfflineResourceSettings() const { return this->offlineResourceSettings_ != nullptr;};
      void deleteOfflineResourceSettings() { this->offlineResourceSettings_ = nullptr;};
      inline const ResourceSettings::OfflineResourceSettings & getOfflineResourceSettings() const { DARABONBA_PTR_GET_CONST(offlineResourceSettings_, ResourceSettings::OfflineResourceSettings) };
      inline ResourceSettings::OfflineResourceSettings getOfflineResourceSettings() { DARABONBA_PTR_GET(offlineResourceSettings_, ResourceSettings::OfflineResourceSettings) };
      inline ResourceSettings& setOfflineResourceSettings(const ResourceSettings::OfflineResourceSettings & offlineResourceSettings) { DARABONBA_PTR_SET_VALUE(offlineResourceSettings_, offlineResourceSettings) };
      inline ResourceSettings& setOfflineResourceSettings(ResourceSettings::OfflineResourceSettings && offlineResourceSettings) { DARABONBA_PTR_SET_RVALUE(offlineResourceSettings_, offlineResourceSettings) };


      // realtimeResourceSettings Field Functions 
      bool hasRealtimeResourceSettings() const { return this->realtimeResourceSettings_ != nullptr;};
      void deleteRealtimeResourceSettings() { this->realtimeResourceSettings_ = nullptr;};
      inline const ResourceSettings::RealtimeResourceSettings & getRealtimeResourceSettings() const { DARABONBA_PTR_GET_CONST(realtimeResourceSettings_, ResourceSettings::RealtimeResourceSettings) };
      inline ResourceSettings::RealtimeResourceSettings getRealtimeResourceSettings() { DARABONBA_PTR_GET(realtimeResourceSettings_, ResourceSettings::RealtimeResourceSettings) };
      inline ResourceSettings& setRealtimeResourceSettings(const ResourceSettings::RealtimeResourceSettings & realtimeResourceSettings) { DARABONBA_PTR_SET_VALUE(realtimeResourceSettings_, realtimeResourceSettings) };
      inline ResourceSettings& setRealtimeResourceSettings(ResourceSettings::RealtimeResourceSettings && realtimeResourceSettings) { DARABONBA_PTR_SET_RVALUE(realtimeResourceSettings_, realtimeResourceSettings) };


      // scheduleResourceSettings Field Functions 
      bool hasScheduleResourceSettings() const { return this->scheduleResourceSettings_ != nullptr;};
      void deleteScheduleResourceSettings() { this->scheduleResourceSettings_ = nullptr;};
      inline const ResourceSettings::ScheduleResourceSettings & getScheduleResourceSettings() const { DARABONBA_PTR_GET_CONST(scheduleResourceSettings_, ResourceSettings::ScheduleResourceSettings) };
      inline ResourceSettings::ScheduleResourceSettings getScheduleResourceSettings() { DARABONBA_PTR_GET(scheduleResourceSettings_, ResourceSettings::ScheduleResourceSettings) };
      inline ResourceSettings& setScheduleResourceSettings(const ResourceSettings::ScheduleResourceSettings & scheduleResourceSettings) { DARABONBA_PTR_SET_VALUE(scheduleResourceSettings_, scheduleResourceSettings) };
      inline ResourceSettings& setScheduleResourceSettings(ResourceSettings::ScheduleResourceSettings && scheduleResourceSettings) { DARABONBA_PTR_SET_RVALUE(scheduleResourceSettings_, scheduleResourceSettings) };


    protected:
      shared_ptr<ResourceSettings::OfflineResourceSettings> offlineResourceSettings_ {};
      shared_ptr<ResourceSettings::RealtimeResourceSettings> realtimeResourceSettings_ {};
      shared_ptr<ResourceSettings::ScheduleResourceSettings> scheduleResourceSettings_ {};
    };

    class JobSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobSettings& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelSettings, channelSettings_);
        DARABONBA_PTR_TO_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
        DARABONBA_PTR_TO_JSON(CycleScheduleSettings, cycleScheduleSettings_);
        DARABONBA_PTR_TO_JSON(DdlHandlingSettings, ddlHandlingSettings_);
        DARABONBA_PTR_TO_JSON(RuntimeSettings, runtimeSettings_);
      };
      friend void from_json(const Darabonba::Json& j, JobSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelSettings, channelSettings_);
        DARABONBA_PTR_FROM_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
        DARABONBA_PTR_FROM_JSON(CycleScheduleSettings, cycleScheduleSettings_);
        DARABONBA_PTR_FROM_JSON(DdlHandlingSettings, ddlHandlingSettings_);
        DARABONBA_PTR_FROM_JSON(RuntimeSettings, runtimeSettings_);
      };
      JobSettings() = default ;
      JobSettings(const JobSettings &) = default ;
      JobSettings(JobSettings &&) = default ;
      JobSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobSettings() = default ;
      JobSettings& operator=(const JobSettings &) = default ;
      JobSettings& operator=(JobSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuntimeSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuntimeSettings& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, RuntimeSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        RuntimeSettings() = default ;
        RuntimeSettings(const RuntimeSettings &) = default ;
        RuntimeSettings(RuntimeSettings &&) = default ;
        RuntimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuntimeSettings() = default ;
        RuntimeSettings& operator=(const RuntimeSettings &) = default ;
        RuntimeSettings& operator=(RuntimeSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RuntimeSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RuntimeSettings& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
      };

      class DdlHandlingSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DdlHandlingSettings& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DdlHandlingSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DdlHandlingSettings() = default ;
        DdlHandlingSettings(const DdlHandlingSettings &) = default ;
        DdlHandlingSettings(DdlHandlingSettings &&) = default ;
        DdlHandlingSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DdlHandlingSettings() = default ;
        DdlHandlingSettings& operator=(const DdlHandlingSettings &) = default ;
        DdlHandlingSettings& operator=(DdlHandlingSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->type_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline DdlHandlingSettings& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DdlHandlingSettings& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<string> type_ {};
      };

      class CycleScheduleSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CycleScheduleSettings& obj) { 
          DARABONBA_PTR_TO_JSON(CycleMigrationType, cycleMigrationType_);
          DARABONBA_PTR_TO_JSON(ScheduleParameters, scheduleParameters_);
        };
        friend void from_json(const Darabonba::Json& j, CycleScheduleSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(CycleMigrationType, cycleMigrationType_);
          DARABONBA_PTR_FROM_JSON(ScheduleParameters, scheduleParameters_);
        };
        CycleScheduleSettings() = default ;
        CycleScheduleSettings(const CycleScheduleSettings &) = default ;
        CycleScheduleSettings(CycleScheduleSettings &&) = default ;
        CycleScheduleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CycleScheduleSettings() = default ;
        CycleScheduleSettings& operator=(const CycleScheduleSettings &) = default ;
        CycleScheduleSettings& operator=(CycleScheduleSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cycleMigrationType_ == nullptr
        && this->scheduleParameters_ == nullptr; };
        // cycleMigrationType Field Functions 
        bool hasCycleMigrationType() const { return this->cycleMigrationType_ != nullptr;};
        void deleteCycleMigrationType() { this->cycleMigrationType_ = nullptr;};
        inline string getCycleMigrationType() const { DARABONBA_PTR_GET_DEFAULT(cycleMigrationType_, "") };
        inline CycleScheduleSettings& setCycleMigrationType(string cycleMigrationType) { DARABONBA_PTR_SET_VALUE(cycleMigrationType_, cycleMigrationType) };


        // scheduleParameters Field Functions 
        bool hasScheduleParameters() const { return this->scheduleParameters_ != nullptr;};
        void deleteScheduleParameters() { this->scheduleParameters_ = nullptr;};
        inline string getScheduleParameters() const { DARABONBA_PTR_GET_DEFAULT(scheduleParameters_, "") };
        inline CycleScheduleSettings& setScheduleParameters(string scheduleParameters) { DARABONBA_PTR_SET_VALUE(scheduleParameters_, scheduleParameters) };


      protected:
        shared_ptr<string> cycleMigrationType_ {};
        shared_ptr<string> scheduleParameters_ {};
      };

      class ColumnDataTypeSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnDataTypeSettings& obj) { 
          DARABONBA_PTR_TO_JSON(DestinationDataType, destinationDataType_);
          DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnDataTypeSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(DestinationDataType, destinationDataType_);
          DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
        };
        ColumnDataTypeSettings() = default ;
        ColumnDataTypeSettings(const ColumnDataTypeSettings &) = default ;
        ColumnDataTypeSettings(ColumnDataTypeSettings &&) = default ;
        ColumnDataTypeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColumnDataTypeSettings() = default ;
        ColumnDataTypeSettings& operator=(const ColumnDataTypeSettings &) = default ;
        ColumnDataTypeSettings& operator=(ColumnDataTypeSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destinationDataType_ == nullptr
        && this->sourceDataType_ == nullptr; };
        // destinationDataType Field Functions 
        bool hasDestinationDataType() const { return this->destinationDataType_ != nullptr;};
        void deleteDestinationDataType() { this->destinationDataType_ = nullptr;};
        inline string getDestinationDataType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataType_, "") };
        inline ColumnDataTypeSettings& setDestinationDataType(string destinationDataType) { DARABONBA_PTR_SET_VALUE(destinationDataType_, destinationDataType) };


        // sourceDataType Field Functions 
        bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
        void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
        inline string getSourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, "") };
        inline ColumnDataTypeSettings& setSourceDataType(string sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


      protected:
        shared_ptr<string> destinationDataType_ {};
        shared_ptr<string> sourceDataType_ {};
      };

      virtual bool empty() const override { return this->channelSettings_ == nullptr
        && this->columnDataTypeSettings_ == nullptr && this->cycleScheduleSettings_ == nullptr && this->ddlHandlingSettings_ == nullptr && this->runtimeSettings_ == nullptr; };
      // channelSettings Field Functions 
      bool hasChannelSettings() const { return this->channelSettings_ != nullptr;};
      void deleteChannelSettings() { this->channelSettings_ = nullptr;};
      inline string getChannelSettings() const { DARABONBA_PTR_GET_DEFAULT(channelSettings_, "") };
      inline JobSettings& setChannelSettings(string channelSettings) { DARABONBA_PTR_SET_VALUE(channelSettings_, channelSettings) };


      // columnDataTypeSettings Field Functions 
      bool hasColumnDataTypeSettings() const { return this->columnDataTypeSettings_ != nullptr;};
      void deleteColumnDataTypeSettings() { this->columnDataTypeSettings_ = nullptr;};
      inline const vector<JobSettings::ColumnDataTypeSettings> & getColumnDataTypeSettings() const { DARABONBA_PTR_GET_CONST(columnDataTypeSettings_, vector<JobSettings::ColumnDataTypeSettings>) };
      inline vector<JobSettings::ColumnDataTypeSettings> getColumnDataTypeSettings() { DARABONBA_PTR_GET(columnDataTypeSettings_, vector<JobSettings::ColumnDataTypeSettings>) };
      inline JobSettings& setColumnDataTypeSettings(const vector<JobSettings::ColumnDataTypeSettings> & columnDataTypeSettings) { DARABONBA_PTR_SET_VALUE(columnDataTypeSettings_, columnDataTypeSettings) };
      inline JobSettings& setColumnDataTypeSettings(vector<JobSettings::ColumnDataTypeSettings> && columnDataTypeSettings) { DARABONBA_PTR_SET_RVALUE(columnDataTypeSettings_, columnDataTypeSettings) };


      // cycleScheduleSettings Field Functions 
      bool hasCycleScheduleSettings() const { return this->cycleScheduleSettings_ != nullptr;};
      void deleteCycleScheduleSettings() { this->cycleScheduleSettings_ = nullptr;};
      inline const JobSettings::CycleScheduleSettings & getCycleScheduleSettings() const { DARABONBA_PTR_GET_CONST(cycleScheduleSettings_, JobSettings::CycleScheduleSettings) };
      inline JobSettings::CycleScheduleSettings getCycleScheduleSettings() { DARABONBA_PTR_GET(cycleScheduleSettings_, JobSettings::CycleScheduleSettings) };
      inline JobSettings& setCycleScheduleSettings(const JobSettings::CycleScheduleSettings & cycleScheduleSettings) { DARABONBA_PTR_SET_VALUE(cycleScheduleSettings_, cycleScheduleSettings) };
      inline JobSettings& setCycleScheduleSettings(JobSettings::CycleScheduleSettings && cycleScheduleSettings) { DARABONBA_PTR_SET_RVALUE(cycleScheduleSettings_, cycleScheduleSettings) };


      // ddlHandlingSettings Field Functions 
      bool hasDdlHandlingSettings() const { return this->ddlHandlingSettings_ != nullptr;};
      void deleteDdlHandlingSettings() { this->ddlHandlingSettings_ = nullptr;};
      inline const vector<JobSettings::DdlHandlingSettings> & getDdlHandlingSettings() const { DARABONBA_PTR_GET_CONST(ddlHandlingSettings_, vector<JobSettings::DdlHandlingSettings>) };
      inline vector<JobSettings::DdlHandlingSettings> getDdlHandlingSettings() { DARABONBA_PTR_GET(ddlHandlingSettings_, vector<JobSettings::DdlHandlingSettings>) };
      inline JobSettings& setDdlHandlingSettings(const vector<JobSettings::DdlHandlingSettings> & ddlHandlingSettings) { DARABONBA_PTR_SET_VALUE(ddlHandlingSettings_, ddlHandlingSettings) };
      inline JobSettings& setDdlHandlingSettings(vector<JobSettings::DdlHandlingSettings> && ddlHandlingSettings) { DARABONBA_PTR_SET_RVALUE(ddlHandlingSettings_, ddlHandlingSettings) };


      // runtimeSettings Field Functions 
      bool hasRuntimeSettings() const { return this->runtimeSettings_ != nullptr;};
      void deleteRuntimeSettings() { this->runtimeSettings_ = nullptr;};
      inline const vector<JobSettings::RuntimeSettings> & getRuntimeSettings() const { DARABONBA_PTR_GET_CONST(runtimeSettings_, vector<JobSettings::RuntimeSettings>) };
      inline vector<JobSettings::RuntimeSettings> getRuntimeSettings() { DARABONBA_PTR_GET(runtimeSettings_, vector<JobSettings::RuntimeSettings>) };
      inline JobSettings& setRuntimeSettings(const vector<JobSettings::RuntimeSettings> & runtimeSettings) { DARABONBA_PTR_SET_VALUE(runtimeSettings_, runtimeSettings) };
      inline JobSettings& setRuntimeSettings(vector<JobSettings::RuntimeSettings> && runtimeSettings) { DARABONBA_PTR_SET_RVALUE(runtimeSettings_, runtimeSettings) };


    protected:
      shared_ptr<string> channelSettings_ {};
      shared_ptr<vector<JobSettings::ColumnDataTypeSettings>> columnDataTypeSettings_ {};
      shared_ptr<JobSettings::CycleScheduleSettings> cycleScheduleSettings_ {};
      shared_ptr<vector<JobSettings::DdlHandlingSettings>> ddlHandlingSettings_ {};
      shared_ptr<vector<JobSettings::RuntimeSettings>> runtimeSettings_ {};
    };

    class DestinationDataSourceSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DestinationDataSourceSettings& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      };
      friend void from_json(const Darabonba::Json& j, DestinationDataSourceSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      };
      DestinationDataSourceSettings() = default ;
      DestinationDataSourceSettings(const DestinationDataSourceSettings &) = default ;
      DestinationDataSourceSettings(DestinationDataSourceSettings &&) = default ;
      DestinationDataSourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DestinationDataSourceSettings() = default ;
      DestinationDataSourceSettings& operator=(const DestinationDataSourceSettings &) = default ;
      DestinationDataSourceSettings& operator=(DestinationDataSourceSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSourceName_ == nullptr; };
      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline DestinationDataSourceSettings& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    protected:
      shared_ptr<string> dataSourceName_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationDataSourceSettings_ == nullptr && this->destinationDataSourceType_ == nullptr && this->jobName_ == nullptr && this->jobSettings_ == nullptr && this->jobType_ == nullptr
        && this->migrationType_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->resourceSettings_ == nullptr && this->sourceDataSourceSettings_ == nullptr
        && this->sourceDataSourceType_ == nullptr && this->tableMappings_ == nullptr && this->transformationRules_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDIJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationDataSourceSettings Field Functions 
    bool hasDestinationDataSourceSettings() const { return this->destinationDataSourceSettings_ != nullptr;};
    void deleteDestinationDataSourceSettings() { this->destinationDataSourceSettings_ = nullptr;};
    inline const vector<CreateDIJobRequest::DestinationDataSourceSettings> & getDestinationDataSourceSettings() const { DARABONBA_PTR_GET_CONST(destinationDataSourceSettings_, vector<CreateDIJobRequest::DestinationDataSourceSettings>) };
    inline vector<CreateDIJobRequest::DestinationDataSourceSettings> getDestinationDataSourceSettings() { DARABONBA_PTR_GET(destinationDataSourceSettings_, vector<CreateDIJobRequest::DestinationDataSourceSettings>) };
    inline CreateDIJobRequest& setDestinationDataSourceSettings(const vector<CreateDIJobRequest::DestinationDataSourceSettings> & destinationDataSourceSettings) { DARABONBA_PTR_SET_VALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };
    inline CreateDIJobRequest& setDestinationDataSourceSettings(vector<CreateDIJobRequest::DestinationDataSourceSettings> && destinationDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };


    // destinationDataSourceType Field Functions 
    bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
    void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
    inline string getDestinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
    inline CreateDIJobRequest& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateDIJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobSettings Field Functions 
    bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
    void deleteJobSettings() { this->jobSettings_ = nullptr;};
    inline const CreateDIJobRequest::JobSettings & getJobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, CreateDIJobRequest::JobSettings) };
    inline CreateDIJobRequest::JobSettings getJobSettings() { DARABONBA_PTR_GET(jobSettings_, CreateDIJobRequest::JobSettings) };
    inline CreateDIJobRequest& setJobSettings(const CreateDIJobRequest::JobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
    inline CreateDIJobRequest& setJobSettings(CreateDIJobRequest::JobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateDIJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline CreateDIJobRequest& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDIJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDIJobRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceSettings Field Functions 
    bool hasResourceSettings() const { return this->resourceSettings_ != nullptr;};
    void deleteResourceSettings() { this->resourceSettings_ = nullptr;};
    inline const CreateDIJobRequest::ResourceSettings & getResourceSettings() const { DARABONBA_PTR_GET_CONST(resourceSettings_, CreateDIJobRequest::ResourceSettings) };
    inline CreateDIJobRequest::ResourceSettings getResourceSettings() { DARABONBA_PTR_GET(resourceSettings_, CreateDIJobRequest::ResourceSettings) };
    inline CreateDIJobRequest& setResourceSettings(const CreateDIJobRequest::ResourceSettings & resourceSettings) { DARABONBA_PTR_SET_VALUE(resourceSettings_, resourceSettings) };
    inline CreateDIJobRequest& setResourceSettings(CreateDIJobRequest::ResourceSettings && resourceSettings) { DARABONBA_PTR_SET_RVALUE(resourceSettings_, resourceSettings) };


    // sourceDataSourceSettings Field Functions 
    bool hasSourceDataSourceSettings() const { return this->sourceDataSourceSettings_ != nullptr;};
    void deleteSourceDataSourceSettings() { this->sourceDataSourceSettings_ = nullptr;};
    inline const vector<CreateDIJobRequest::SourceDataSourceSettings> & getSourceDataSourceSettings() const { DARABONBA_PTR_GET_CONST(sourceDataSourceSettings_, vector<CreateDIJobRequest::SourceDataSourceSettings>) };
    inline vector<CreateDIJobRequest::SourceDataSourceSettings> getSourceDataSourceSettings() { DARABONBA_PTR_GET(sourceDataSourceSettings_, vector<CreateDIJobRequest::SourceDataSourceSettings>) };
    inline CreateDIJobRequest& setSourceDataSourceSettings(const vector<CreateDIJobRequest::SourceDataSourceSettings> & sourceDataSourceSettings) { DARABONBA_PTR_SET_VALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };
    inline CreateDIJobRequest& setSourceDataSourceSettings(vector<CreateDIJobRequest::SourceDataSourceSettings> && sourceDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };


    // sourceDataSourceType Field Functions 
    bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
    void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
    inline string getSourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
    inline CreateDIJobRequest& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


    // tableMappings Field Functions 
    bool hasTableMappings() const { return this->tableMappings_ != nullptr;};
    void deleteTableMappings() { this->tableMappings_ = nullptr;};
    inline const vector<CreateDIJobRequest::TableMappings> & getTableMappings() const { DARABONBA_PTR_GET_CONST(tableMappings_, vector<CreateDIJobRequest::TableMappings>) };
    inline vector<CreateDIJobRequest::TableMappings> getTableMappings() { DARABONBA_PTR_GET(tableMappings_, vector<CreateDIJobRequest::TableMappings>) };
    inline CreateDIJobRequest& setTableMappings(const vector<CreateDIJobRequest::TableMappings> & tableMappings) { DARABONBA_PTR_SET_VALUE(tableMappings_, tableMappings) };
    inline CreateDIJobRequest& setTableMappings(vector<CreateDIJobRequest::TableMappings> && tableMappings) { DARABONBA_PTR_SET_RVALUE(tableMappings_, tableMappings) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<CreateDIJobRequest::TransformationRules> & getTransformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<CreateDIJobRequest::TransformationRules>) };
    inline vector<CreateDIJobRequest::TransformationRules> getTransformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<CreateDIJobRequest::TransformationRules>) };
    inline CreateDIJobRequest& setTransformationRules(const vector<CreateDIJobRequest::TransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline CreateDIJobRequest& setTransformationRules(vector<CreateDIJobRequest::TransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDIJobRequest::DestinationDataSourceSettings>> destinationDataSourceSettings_ {};
    // The destination type. Valid values: Hologres, OSS-HDFS, OSS, MaxCompute, LogHub, StarRocks, DataHub, AnalyticDB for MySQL, Kafka, and Hive.
    // 
    // This parameter is required.
    shared_ptr<string> destinationDataSourceType_ {};
    // This parameter is deprecated and is replaced by the Name parameter.
    shared_ptr<string> jobName_ {};
    shared_ptr<CreateDIJobRequest::JobSettings> jobSettings_ {};
    // The type of the synchronization task. Valid values:
    // 
    // *   DatabaseRealtimeMigration: A real-time synchronization task used to synchronize only full data, only incremental data, or full and incremental data in multiple tables of multiple databases in the source.
    // *   DatabaseOfflineMigration: A batch synchronization task used to synchronize only full data, only incremental data, or full and incremental data in multiple tables of multiple databases in the source.
    // *   SingleTableRealtimeMigration: A real-time synchronization task used to synchronize data only in a single table in the source.
    shared_ptr<string> jobType_ {};
    // The synchronization type. Valid values:
    // 
    // *   FullAndRealtimeIncremental
    // *   RealtimeIncremental
    // *   Full
    // *   OfflineIncremental
    // *   FullAndOfflineIncremental
    // 
    // This parameter is required.
    shared_ptr<string> migrationType_ {};
    // The name of the synchronization task.
    shared_ptr<string> name_ {};
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    shared_ptr<int64_t> projectId_ {};
    // This parameter is required.
    shared_ptr<CreateDIJobRequest::ResourceSettings> resourceSettings_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDIJobRequest::SourceDataSourceSettings>> sourceDataSourceSettings_ {};
    // The source type. Valid values: PolarDB, MySQL, Kafka, LogHub, Hologres, Oracle, OceanBase, MongoDB, Redshift, Hive, SQL Server, Doris, and ClickHouse.
    // 
    // This parameter is required.
    shared_ptr<string> sourceDataSourceType_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDIJobRequest::TableMappings>> tableMappings_ {};
    shared_ptr<vector<CreateDIJobRequest::TransformationRules>> transformationRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
