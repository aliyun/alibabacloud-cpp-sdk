// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBIZMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBIZMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBizMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBizMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateBizMetricCommand, updateBizMetricCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBizMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateBizMetricCommand, updateBizMetricCommand_);
    };
    UpdateBizMetricRequest() = default ;
    UpdateBizMetricRequest(const UpdateBizMetricRequest &) = default ;
    UpdateBizMetricRequest(UpdateBizMetricRequest &&) = default ;
    UpdateBizMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBizMetricRequest() = default ;
    UpdateBizMetricRequest& operator=(const UpdateBizMetricRequest &) = default ;
    UpdateBizMetricRequest& operator=(UpdateBizMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateBizMetricCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateBizMetricCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedTechMetricFullNames, associatedTechMetricFullNames_);
        DARABONBA_PTR_TO_JSON(BizOwnerName, bizOwnerName_);
        DARABONBA_PTR_TO_JSON(CatalogIds, catalogIds_);
        DARABONBA_PTR_TO_JSON(CustomAttribute, customAttribute_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(MetricDefinition, metricDefinition_);
        DARABONBA_PTR_TO_JSON(MetricRelationDiagramExpression, metricRelationDiagramExpression_);
        DARABONBA_PTR_TO_JSON(MetricRelationDiagramSwitchOpen, metricRelationDiagramSwitchOpen_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NewName, newName_);
        DARABONBA_PTR_TO_JSON(OperateInstructionContent, operateInstructionContent_);
        DARABONBA_PTR_TO_JSON(OperateInstructionEnabled, operateInstructionEnabled_);
        DARABONBA_PTR_TO_JSON(RelatedBizMetrics, relatedBizMetrics_);
        DARABONBA_PTR_TO_JSON(ViewScope, viewScope_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateBizMetricCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedTechMetricFullNames, associatedTechMetricFullNames_);
        DARABONBA_PTR_FROM_JSON(BizOwnerName, bizOwnerName_);
        DARABONBA_PTR_FROM_JSON(CatalogIds, catalogIds_);
        DARABONBA_PTR_FROM_JSON(CustomAttribute, customAttribute_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(MetricDefinition, metricDefinition_);
        DARABONBA_PTR_FROM_JSON(MetricRelationDiagramExpression, metricRelationDiagramExpression_);
        DARABONBA_PTR_FROM_JSON(MetricRelationDiagramSwitchOpen, metricRelationDiagramSwitchOpen_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NewName, newName_);
        DARABONBA_PTR_FROM_JSON(OperateInstructionContent, operateInstructionContent_);
        DARABONBA_PTR_FROM_JSON(OperateInstructionEnabled, operateInstructionEnabled_);
        DARABONBA_PTR_FROM_JSON(RelatedBizMetrics, relatedBizMetrics_);
        DARABONBA_PTR_FROM_JSON(ViewScope, viewScope_);
      };
      UpdateBizMetricCommand() = default ;
      UpdateBizMetricCommand(const UpdateBizMetricCommand &) = default ;
      UpdateBizMetricCommand(UpdateBizMetricCommand &&) = default ;
      UpdateBizMetricCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateBizMetricCommand() = default ;
      UpdateBizMetricCommand& operator=(const UpdateBizMetricCommand &) = default ;
      UpdateBizMetricCommand& operator=(UpdateBizMetricCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ViewScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ViewScope& obj) { 
          DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
          DARABONBA_PTR_TO_JSON(UserGroupNames, userGroupNames_);
          DARABONBA_PTR_TO_JSON(UserNames, userNames_);
        };
        friend void from_json(const Darabonba::Json& j, ViewScope& obj) { 
          DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
          DARABONBA_PTR_FROM_JSON(UserGroupNames, userGroupNames_);
          DARABONBA_PTR_FROM_JSON(UserNames, userNames_);
        };
        ViewScope() = default ;
        ViewScope(const ViewScope &) = default ;
        ViewScope(ViewScope &&) = default ;
        ViewScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ViewScope() = default ;
        ViewScope& operator=(const ViewScope &) = default ;
        ViewScope& operator=(ViewScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->scopeType_ == nullptr
        && this->userGroupNames_ == nullptr && this->userNames_ == nullptr; };
        // scopeType Field Functions 
        bool hasScopeType() const { return this->scopeType_ != nullptr;};
        void deleteScopeType() { this->scopeType_ = nullptr;};
        inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
        inline ViewScope& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


        // userGroupNames Field Functions 
        bool hasUserGroupNames() const { return this->userGroupNames_ != nullptr;};
        void deleteUserGroupNames() { this->userGroupNames_ = nullptr;};
        inline const vector<string> & getUserGroupNames() const { DARABONBA_PTR_GET_CONST(userGroupNames_, vector<string>) };
        inline vector<string> getUserGroupNames() { DARABONBA_PTR_GET(userGroupNames_, vector<string>) };
        inline ViewScope& setUserGroupNames(const vector<string> & userGroupNames) { DARABONBA_PTR_SET_VALUE(userGroupNames_, userGroupNames) };
        inline ViewScope& setUserGroupNames(vector<string> && userGroupNames) { DARABONBA_PTR_SET_RVALUE(userGroupNames_, userGroupNames) };


        // userNames Field Functions 
        bool hasUserNames() const { return this->userNames_ != nullptr;};
        void deleteUserNames() { this->userNames_ = nullptr;};
        inline const vector<string> & getUserNames() const { DARABONBA_PTR_GET_CONST(userNames_, vector<string>) };
        inline vector<string> getUserNames() { DARABONBA_PTR_GET(userNames_, vector<string>) };
        inline ViewScope& setUserNames(const vector<string> & userNames) { DARABONBA_PTR_SET_VALUE(userNames_, userNames) };
        inline ViewScope& setUserNames(vector<string> && userNames) { DARABONBA_PTR_SET_RVALUE(userNames_, userNames) };


      protected:
        // The visibility scope type. Valid values:
        // - ALL_USERS_CAN_VIEW: Visible to all users.
        // - PART_USERS_CAN_VIEW: Visible to specific users.
        // - PART_USERS_CAN_NOT_VIEW: Invisible to specific users.
        shared_ptr<string> scopeType_ {};
        // The user group names. This parameter is read only when the visibility scope of the asset is set to Visible to specific users or Invisible to specific users.
        shared_ptr<vector<string>> userGroupNames_ {};
        // The usernames of individual accounts. This parameter is valid only when the visibility scope of the asset is set to Visible to specific users or Invisible to specific users.
        shared_ptr<vector<string>> userNames_ {};
      };

      class RelatedBizMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedBizMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedBizMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        };
        RelatedBizMetrics() = default ;
        RelatedBizMetrics(const RelatedBizMetrics &) = default ;
        RelatedBizMetrics(RelatedBizMetrics &&) = default ;
        RelatedBizMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedBizMetrics() = default ;
        RelatedBizMetrics& operator=(const RelatedBizMetrics &) = default ;
        RelatedBizMetrics& operator=(RelatedBizMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->relationType_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RelatedBizMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline RelatedBizMetrics& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      protected:
        // The name of the business metric.
        shared_ptr<string> name_ {};
        // The relationship type. Valid values:
        // - POSITIVE: Positive correlation.
        // - NEGATIVE: Negative correlation.
        // - OTHER: Other.
        shared_ptr<string> relationType_ {};
      };

      class CustomAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, CustomAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        CustomAttribute() = default ;
        CustomAttribute(const CustomAttribute &) = default ;
        CustomAttribute(CustomAttribute &&) = default ;
        CustomAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomAttribute() = default ;
        CustomAttribute& operator=(const CustomAttribute &) = default ;
        CustomAttribute& operator=(CustomAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->values_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline CustomAttribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline CustomAttribute& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline CustomAttribute& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The code of the custom attribute.
        shared_ptr<string> code_ {};
        // The attribute values. 1. For custom input and drop-down single-select attributes, only the first attribute value in the list is read. 2. For drop-down multi-select attributes, all attribute values in the list are read. 3. For hyperlink attributes, the first attribute value in the list is read as the display text, and the second attribute value is read as the redirect link.
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->associatedTechMetricFullNames_ == nullptr
        && this->bizOwnerName_ == nullptr && this->catalogIds_ == nullptr && this->customAttribute_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr
        && this->labels_ == nullptr && this->metricDefinition_ == nullptr && this->metricRelationDiagramExpression_ == nullptr && this->metricRelationDiagramSwitchOpen_ == nullptr && this->name_ == nullptr
        && this->newName_ == nullptr && this->operateInstructionContent_ == nullptr && this->operateInstructionEnabled_ == nullptr && this->relatedBizMetrics_ == nullptr && this->viewScope_ == nullptr; };
      // associatedTechMetricFullNames Field Functions 
      bool hasAssociatedTechMetricFullNames() const { return this->associatedTechMetricFullNames_ != nullptr;};
      void deleteAssociatedTechMetricFullNames() { this->associatedTechMetricFullNames_ = nullptr;};
      inline const vector<string> & getAssociatedTechMetricFullNames() const { DARABONBA_PTR_GET_CONST(associatedTechMetricFullNames_, vector<string>) };
      inline vector<string> getAssociatedTechMetricFullNames() { DARABONBA_PTR_GET(associatedTechMetricFullNames_, vector<string>) };
      inline UpdateBizMetricCommand& setAssociatedTechMetricFullNames(const vector<string> & associatedTechMetricFullNames) { DARABONBA_PTR_SET_VALUE(associatedTechMetricFullNames_, associatedTechMetricFullNames) };
      inline UpdateBizMetricCommand& setAssociatedTechMetricFullNames(vector<string> && associatedTechMetricFullNames) { DARABONBA_PTR_SET_RVALUE(associatedTechMetricFullNames_, associatedTechMetricFullNames) };


      // bizOwnerName Field Functions 
      bool hasBizOwnerName() const { return this->bizOwnerName_ != nullptr;};
      void deleteBizOwnerName() { this->bizOwnerName_ = nullptr;};
      inline string getBizOwnerName() const { DARABONBA_PTR_GET_DEFAULT(bizOwnerName_, "") };
      inline UpdateBizMetricCommand& setBizOwnerName(string bizOwnerName) { DARABONBA_PTR_SET_VALUE(bizOwnerName_, bizOwnerName) };


      // catalogIds Field Functions 
      bool hasCatalogIds() const { return this->catalogIds_ != nullptr;};
      void deleteCatalogIds() { this->catalogIds_ = nullptr;};
      inline const vector<int64_t> & getCatalogIds() const { DARABONBA_PTR_GET_CONST(catalogIds_, vector<int64_t>) };
      inline vector<int64_t> getCatalogIds() { DARABONBA_PTR_GET(catalogIds_, vector<int64_t>) };
      inline UpdateBizMetricCommand& setCatalogIds(const vector<int64_t> & catalogIds) { DARABONBA_PTR_SET_VALUE(catalogIds_, catalogIds) };
      inline UpdateBizMetricCommand& setCatalogIds(vector<int64_t> && catalogIds) { DARABONBA_PTR_SET_RVALUE(catalogIds_, catalogIds) };


      // customAttribute Field Functions 
      bool hasCustomAttribute() const { return this->customAttribute_ != nullptr;};
      void deleteCustomAttribute() { this->customAttribute_ = nullptr;};
      inline const vector<UpdateBizMetricCommand::CustomAttribute> & getCustomAttribute() const { DARABONBA_PTR_GET_CONST(customAttribute_, vector<UpdateBizMetricCommand::CustomAttribute>) };
      inline vector<UpdateBizMetricCommand::CustomAttribute> getCustomAttribute() { DARABONBA_PTR_GET(customAttribute_, vector<UpdateBizMetricCommand::CustomAttribute>) };
      inline UpdateBizMetricCommand& setCustomAttribute(const vector<UpdateBizMetricCommand::CustomAttribute> & customAttribute) { DARABONBA_PTR_SET_VALUE(customAttribute_, customAttribute) };
      inline UpdateBizMetricCommand& setCustomAttribute(vector<UpdateBizMetricCommand::CustomAttribute> && customAttribute) { DARABONBA_PTR_SET_RVALUE(customAttribute_, customAttribute) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateBizMetricCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline UpdateBizMetricCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline UpdateBizMetricCommand& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline UpdateBizMetricCommand& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // metricDefinition Field Functions 
      bool hasMetricDefinition() const { return this->metricDefinition_ != nullptr;};
      void deleteMetricDefinition() { this->metricDefinition_ = nullptr;};
      inline string getMetricDefinition() const { DARABONBA_PTR_GET_DEFAULT(metricDefinition_, "") };
      inline UpdateBizMetricCommand& setMetricDefinition(string metricDefinition) { DARABONBA_PTR_SET_VALUE(metricDefinition_, metricDefinition) };


      // metricRelationDiagramExpression Field Functions 
      bool hasMetricRelationDiagramExpression() const { return this->metricRelationDiagramExpression_ != nullptr;};
      void deleteMetricRelationDiagramExpression() { this->metricRelationDiagramExpression_ = nullptr;};
      inline string getMetricRelationDiagramExpression() const { DARABONBA_PTR_GET_DEFAULT(metricRelationDiagramExpression_, "") };
      inline UpdateBizMetricCommand& setMetricRelationDiagramExpression(string metricRelationDiagramExpression) { DARABONBA_PTR_SET_VALUE(metricRelationDiagramExpression_, metricRelationDiagramExpression) };


      // metricRelationDiagramSwitchOpen Field Functions 
      bool hasMetricRelationDiagramSwitchOpen() const { return this->metricRelationDiagramSwitchOpen_ != nullptr;};
      void deleteMetricRelationDiagramSwitchOpen() { this->metricRelationDiagramSwitchOpen_ = nullptr;};
      inline bool getMetricRelationDiagramSwitchOpen() const { DARABONBA_PTR_GET_DEFAULT(metricRelationDiagramSwitchOpen_, false) };
      inline UpdateBizMetricCommand& setMetricRelationDiagramSwitchOpen(bool metricRelationDiagramSwitchOpen) { DARABONBA_PTR_SET_VALUE(metricRelationDiagramSwitchOpen_, metricRelationDiagramSwitchOpen) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateBizMetricCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // newName Field Functions 
      bool hasNewName() const { return this->newName_ != nullptr;};
      void deleteNewName() { this->newName_ = nullptr;};
      inline string getNewName() const { DARABONBA_PTR_GET_DEFAULT(newName_, "") };
      inline UpdateBizMetricCommand& setNewName(string newName) { DARABONBA_PTR_SET_VALUE(newName_, newName) };


      // operateInstructionContent Field Functions 
      bool hasOperateInstructionContent() const { return this->operateInstructionContent_ != nullptr;};
      void deleteOperateInstructionContent() { this->operateInstructionContent_ = nullptr;};
      inline string getOperateInstructionContent() const { DARABONBA_PTR_GET_DEFAULT(operateInstructionContent_, "") };
      inline UpdateBizMetricCommand& setOperateInstructionContent(string operateInstructionContent) { DARABONBA_PTR_SET_VALUE(operateInstructionContent_, operateInstructionContent) };


      // operateInstructionEnabled Field Functions 
      bool hasOperateInstructionEnabled() const { return this->operateInstructionEnabled_ != nullptr;};
      void deleteOperateInstructionEnabled() { this->operateInstructionEnabled_ = nullptr;};
      inline bool getOperateInstructionEnabled() const { DARABONBA_PTR_GET_DEFAULT(operateInstructionEnabled_, false) };
      inline UpdateBizMetricCommand& setOperateInstructionEnabled(bool operateInstructionEnabled) { DARABONBA_PTR_SET_VALUE(operateInstructionEnabled_, operateInstructionEnabled) };


      // relatedBizMetrics Field Functions 
      bool hasRelatedBizMetrics() const { return this->relatedBizMetrics_ != nullptr;};
      void deleteRelatedBizMetrics() { this->relatedBizMetrics_ = nullptr;};
      inline const vector<UpdateBizMetricCommand::RelatedBizMetrics> & getRelatedBizMetrics() const { DARABONBA_PTR_GET_CONST(relatedBizMetrics_, vector<UpdateBizMetricCommand::RelatedBizMetrics>) };
      inline vector<UpdateBizMetricCommand::RelatedBizMetrics> getRelatedBizMetrics() { DARABONBA_PTR_GET(relatedBizMetrics_, vector<UpdateBizMetricCommand::RelatedBizMetrics>) };
      inline UpdateBizMetricCommand& setRelatedBizMetrics(const vector<UpdateBizMetricCommand::RelatedBizMetrics> & relatedBizMetrics) { DARABONBA_PTR_SET_VALUE(relatedBizMetrics_, relatedBizMetrics) };
      inline UpdateBizMetricCommand& setRelatedBizMetrics(vector<UpdateBizMetricCommand::RelatedBizMetrics> && relatedBizMetrics) { DARABONBA_PTR_SET_RVALUE(relatedBizMetrics_, relatedBizMetrics) };


      // viewScope Field Functions 
      bool hasViewScope() const { return this->viewScope_ != nullptr;};
      void deleteViewScope() { this->viewScope_ = nullptr;};
      inline const UpdateBizMetricCommand::ViewScope & getViewScope() const { DARABONBA_PTR_GET_CONST(viewScope_, UpdateBizMetricCommand::ViewScope) };
      inline UpdateBizMetricCommand::ViewScope getViewScope() { DARABONBA_PTR_GET(viewScope_, UpdateBizMetricCommand::ViewScope) };
      inline UpdateBizMetricCommand& setViewScope(const UpdateBizMetricCommand::ViewScope & viewScope) { DARABONBA_PTR_SET_VALUE(viewScope_, viewScope) };
      inline UpdateBizMetricCommand& setViewScope(UpdateBizMetricCommand::ViewScope && viewScope) { DARABONBA_PTR_SET_RVALUE(viewScope_, viewScope) };


    protected:
      // The associated technical metrics. Enter the technical metric in the "Full table name.Metric name" format, where the "Full table name" is equal to "Asset source.Table name". A technical metric can be associated with only one business metric and cannot be repeatedly associated.
      shared_ptr<vector<string>> associatedTechMetricFullNames_ {};
      // The business owner. Enter the username of the owner\\"s account.
      shared_ptr<string> bizOwnerName_ {};
      // The IDs of the parent folders.
      shared_ptr<vector<int64_t>> catalogIds_ {};
      // The custom attributes. Enter the attribute code and attribute value separately.
      shared_ptr<vector<UpdateBizMetricCommand::CustomAttribute>> customAttribute_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The display name.
      shared_ptr<string> displayName_ {};
      // The asset labels.
      shared_ptr<vector<string>> labels_ {};
      // The metric definition. To reference other business metrics, enclose the metric names in half-width square brackets [].
      shared_ptr<string> metricDefinition_ {};
      // The expression for the metric relationship diagram. This parameter is read only when the metric relationship diagram is enabled. You can only enter a calculation expression composed of metric names selected from the related business metrics. The supported operators are +, -, *, /, (), %, and ∑. Each metric name must be enclosed in half-width square brackets []. If no operator is specified between two metrics, the system automatically adds padding as a placeholder. If the metric relational expression is not configured, a shutdown of the metric relationship diagram switch is automatically triggered.
      shared_ptr<string> metricRelationDiagramExpression_ {};
      // Specifies whether to enable the metric relationship diagram. Valid values:
      // - true: Enabled.
      // - false: Disabled.
      // This switch can be enabled only when at least one related business metric exists. Otherwise, it is automatically disabled.
      shared_ptr<bool> metricRelationDiagramSwitchOpen_ {};
      // The name of the business metric to update.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The new name. Specify this parameter when you need to modify the metric name.
      shared_ptr<string> newName_ {};
      // The content of the usage instructions. Only text format is supported.
      shared_ptr<string> operateInstructionContent_ {};
      // Specifies whether to enable the usage instructions. Valid values:
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> operateInstructionEnabled_ {};
      // The related business metrics.
      shared_ptr<vector<UpdateBizMetricCommand::RelatedBizMetrics>> relatedBizMetrics_ {};
      // The visibility scope.
      shared_ptr<UpdateBizMetricCommand::ViewScope> viewScope_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateBizMetricCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateBizMetricRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateBizMetricRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateBizMetricCommand Field Functions 
    bool hasUpdateBizMetricCommand() const { return this->updateBizMetricCommand_ != nullptr;};
    void deleteUpdateBizMetricCommand() { this->updateBizMetricCommand_ = nullptr;};
    inline const UpdateBizMetricRequest::UpdateBizMetricCommand & getUpdateBizMetricCommand() const { DARABONBA_PTR_GET_CONST(updateBizMetricCommand_, UpdateBizMetricRequest::UpdateBizMetricCommand) };
    inline UpdateBizMetricRequest::UpdateBizMetricCommand getUpdateBizMetricCommand() { DARABONBA_PTR_GET(updateBizMetricCommand_, UpdateBizMetricRequest::UpdateBizMetricCommand) };
    inline UpdateBizMetricRequest& setUpdateBizMetricCommand(const UpdateBizMetricRequest::UpdateBizMetricCommand & updateBizMetricCommand) { DARABONBA_PTR_SET_VALUE(updateBizMetricCommand_, updateBizMetricCommand) };
    inline UpdateBizMetricRequest& setUpdateBizMetricCommand(UpdateBizMetricRequest::UpdateBizMetricCommand && updateBizMetricCommand) { DARABONBA_PTR_SET_RVALUE(updateBizMetricCommand_, updateBizMetricCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The update request.
    // 
    // This parameter is required.
    shared_ptr<UpdateBizMetricRequest::UpdateBizMetricCommand> updateBizMetricCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
