// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUEST_HPP_
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
  class UpdateDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    UpdateDIJobRequest() = default ;
    UpdateDIJobRequest(const UpdateDIJobRequest &) = default ;
    UpdateDIJobRequest(UpdateDIJobRequest &&) = default ;
    UpdateDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequest() = default ;
    UpdateDIJobRequest& operator=(const UpdateDIJobRequest &) = default ;
    UpdateDIJobRequest& operator=(UpdateDIJobRequest &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ScheduleParameters, scheduleParameters_);
        };
        friend void from_json(const Darabonba::Json& j, CycleScheduleSettings& obj) { 
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
        virtual bool empty() const override { return this->scheduleParameters_ == nullptr; };
        // scheduleParameters Field Functions 
        bool hasScheduleParameters() const { return this->scheduleParameters_ != nullptr;};
        void deleteScheduleParameters() { this->scheduleParameters_ = nullptr;};
        inline string getScheduleParameters() const { DARABONBA_PTR_GET_DEFAULT(scheduleParameters_, "") };
        inline CycleScheduleSettings& setScheduleParameters(string scheduleParameters) { DARABONBA_PTR_SET_VALUE(scheduleParameters_, scheduleParameters) };


      protected:
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

    virtual bool empty() const override { return this->DIJobId_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->jobSettings_ == nullptr && this->projectId_ == nullptr && this->resourceSettings_ == nullptr
        && this->tableMappings_ == nullptr && this->transformationRules_ == nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t getDIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline UpdateDIJobRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDIJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDIJobRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobSettings Field Functions 
    bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
    void deleteJobSettings() { this->jobSettings_ = nullptr;};
    inline const UpdateDIJobRequest::JobSettings & getJobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, UpdateDIJobRequest::JobSettings) };
    inline UpdateDIJobRequest::JobSettings getJobSettings() { DARABONBA_PTR_GET(jobSettings_, UpdateDIJobRequest::JobSettings) };
    inline UpdateDIJobRequest& setJobSettings(const UpdateDIJobRequest::JobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
    inline UpdateDIJobRequest& setJobSettings(UpdateDIJobRequest::JobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDIJobRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceSettings Field Functions 
    bool hasResourceSettings() const { return this->resourceSettings_ != nullptr;};
    void deleteResourceSettings() { this->resourceSettings_ = nullptr;};
    inline const UpdateDIJobRequest::ResourceSettings & getResourceSettings() const { DARABONBA_PTR_GET_CONST(resourceSettings_, UpdateDIJobRequest::ResourceSettings) };
    inline UpdateDIJobRequest::ResourceSettings getResourceSettings() { DARABONBA_PTR_GET(resourceSettings_, UpdateDIJobRequest::ResourceSettings) };
    inline UpdateDIJobRequest& setResourceSettings(const UpdateDIJobRequest::ResourceSettings & resourceSettings) { DARABONBA_PTR_SET_VALUE(resourceSettings_, resourceSettings) };
    inline UpdateDIJobRequest& setResourceSettings(UpdateDIJobRequest::ResourceSettings && resourceSettings) { DARABONBA_PTR_SET_RVALUE(resourceSettings_, resourceSettings) };


    // tableMappings Field Functions 
    bool hasTableMappings() const { return this->tableMappings_ != nullptr;};
    void deleteTableMappings() { this->tableMappings_ = nullptr;};
    inline const vector<UpdateDIJobRequest::TableMappings> & getTableMappings() const { DARABONBA_PTR_GET_CONST(tableMappings_, vector<UpdateDIJobRequest::TableMappings>) };
    inline vector<UpdateDIJobRequest::TableMappings> getTableMappings() { DARABONBA_PTR_GET(tableMappings_, vector<UpdateDIJobRequest::TableMappings>) };
    inline UpdateDIJobRequest& setTableMappings(const vector<UpdateDIJobRequest::TableMappings> & tableMappings) { DARABONBA_PTR_SET_VALUE(tableMappings_, tableMappings) };
    inline UpdateDIJobRequest& setTableMappings(vector<UpdateDIJobRequest::TableMappings> && tableMappings) { DARABONBA_PTR_SET_RVALUE(tableMappings_, tableMappings) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<UpdateDIJobRequest::TransformationRules> & getTransformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<UpdateDIJobRequest::TransformationRules>) };
    inline vector<UpdateDIJobRequest::TransformationRules> getTransformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<UpdateDIJobRequest::TransformationRules>) };
    inline UpdateDIJobRequest& setTransformationRules(const vector<UpdateDIJobRequest::TransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline UpdateDIJobRequest& setTransformationRules(vector<UpdateDIJobRequest::TransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    shared_ptr<int64_t> DIJobId_ {};
    shared_ptr<string> description_ {};
    // The ID of the synchronization task.
    shared_ptr<int64_t> id_ {};
    shared_ptr<UpdateDIJobRequest::JobSettings> jobSettings_ {};
    // The DataWorks workspace ID. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to obtain the ID.
    shared_ptr<int64_t> projectId_ {};
    shared_ptr<UpdateDIJobRequest::ResourceSettings> resourceSettings_ {};
    shared_ptr<vector<UpdateDIJobRequest::TableMappings>> tableMappings_ {};
    shared_ptr<vector<UpdateDIJobRequest::TransformationRules>> transformationRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
