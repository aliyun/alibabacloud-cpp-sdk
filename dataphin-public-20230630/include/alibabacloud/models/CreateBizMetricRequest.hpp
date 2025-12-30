// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZMETRICREQUEST_HPP_
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
  class CreateBizMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateBizMetricCommand, createBizMetricCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateBizMetricCommand, createBizMetricCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateBizMetricRequest() = default ;
    CreateBizMetricRequest(const CreateBizMetricRequest &) = default ;
    CreateBizMetricRequest(CreateBizMetricRequest &&) = default ;
    CreateBizMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizMetricRequest() = default ;
    CreateBizMetricRequest& operator=(const CreateBizMetricRequest &) = default ;
    CreateBizMetricRequest& operator=(CreateBizMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateBizMetricCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateBizMetricCommand& obj) { 
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
        DARABONBA_PTR_TO_JSON(OperateInstructionContent, operateInstructionContent_);
        DARABONBA_PTR_TO_JSON(OperateInstructionEnabled, operateInstructionEnabled_);
        DARABONBA_PTR_TO_JSON(RelatedBizMetrics, relatedBizMetrics_);
        DARABONBA_PTR_TO_JSON(ViewScope, viewScope_);
      };
      friend void from_json(const Darabonba::Json& j, CreateBizMetricCommand& obj) { 
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
        DARABONBA_PTR_FROM_JSON(OperateInstructionContent, operateInstructionContent_);
        DARABONBA_PTR_FROM_JSON(OperateInstructionEnabled, operateInstructionEnabled_);
        DARABONBA_PTR_FROM_JSON(RelatedBizMetrics, relatedBizMetrics_);
        DARABONBA_PTR_FROM_JSON(ViewScope, viewScope_);
      };
      CreateBizMetricCommand() = default ;
      CreateBizMetricCommand(const CreateBizMetricCommand &) = default ;
      CreateBizMetricCommand(CreateBizMetricCommand &&) = default ;
      CreateBizMetricCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateBizMetricCommand() = default ;
      CreateBizMetricCommand& operator=(const CreateBizMetricCommand &) = default ;
      CreateBizMetricCommand& operator=(CreateBizMetricCommand &&) = default ;
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
        shared_ptr<string> scopeType_ {};
        shared_ptr<vector<string>> userGroupNames_ {};
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
        shared_ptr<string> name_ {};
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
        shared_ptr<string> code_ {};
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->associatedTechMetricFullNames_ == nullptr
        && this->bizOwnerName_ == nullptr && this->catalogIds_ == nullptr && this->customAttribute_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr
        && this->labels_ == nullptr && this->metricDefinition_ == nullptr && this->metricRelationDiagramExpression_ == nullptr && this->metricRelationDiagramSwitchOpen_ == nullptr && this->name_ == nullptr
        && this->operateInstructionContent_ == nullptr && this->operateInstructionEnabled_ == nullptr && this->relatedBizMetrics_ == nullptr && this->viewScope_ == nullptr; };
      // associatedTechMetricFullNames Field Functions 
      bool hasAssociatedTechMetricFullNames() const { return this->associatedTechMetricFullNames_ != nullptr;};
      void deleteAssociatedTechMetricFullNames() { this->associatedTechMetricFullNames_ = nullptr;};
      inline const vector<string> & getAssociatedTechMetricFullNames() const { DARABONBA_PTR_GET_CONST(associatedTechMetricFullNames_, vector<string>) };
      inline vector<string> getAssociatedTechMetricFullNames() { DARABONBA_PTR_GET(associatedTechMetricFullNames_, vector<string>) };
      inline CreateBizMetricCommand& setAssociatedTechMetricFullNames(const vector<string> & associatedTechMetricFullNames) { DARABONBA_PTR_SET_VALUE(associatedTechMetricFullNames_, associatedTechMetricFullNames) };
      inline CreateBizMetricCommand& setAssociatedTechMetricFullNames(vector<string> && associatedTechMetricFullNames) { DARABONBA_PTR_SET_RVALUE(associatedTechMetricFullNames_, associatedTechMetricFullNames) };


      // bizOwnerName Field Functions 
      bool hasBizOwnerName() const { return this->bizOwnerName_ != nullptr;};
      void deleteBizOwnerName() { this->bizOwnerName_ = nullptr;};
      inline string getBizOwnerName() const { DARABONBA_PTR_GET_DEFAULT(bizOwnerName_, "") };
      inline CreateBizMetricCommand& setBizOwnerName(string bizOwnerName) { DARABONBA_PTR_SET_VALUE(bizOwnerName_, bizOwnerName) };


      // catalogIds Field Functions 
      bool hasCatalogIds() const { return this->catalogIds_ != nullptr;};
      void deleteCatalogIds() { this->catalogIds_ = nullptr;};
      inline const vector<int64_t> & getCatalogIds() const { DARABONBA_PTR_GET_CONST(catalogIds_, vector<int64_t>) };
      inline vector<int64_t> getCatalogIds() { DARABONBA_PTR_GET(catalogIds_, vector<int64_t>) };
      inline CreateBizMetricCommand& setCatalogIds(const vector<int64_t> & catalogIds) { DARABONBA_PTR_SET_VALUE(catalogIds_, catalogIds) };
      inline CreateBizMetricCommand& setCatalogIds(vector<int64_t> && catalogIds) { DARABONBA_PTR_SET_RVALUE(catalogIds_, catalogIds) };


      // customAttribute Field Functions 
      bool hasCustomAttribute() const { return this->customAttribute_ != nullptr;};
      void deleteCustomAttribute() { this->customAttribute_ = nullptr;};
      inline const vector<CreateBizMetricCommand::CustomAttribute> & getCustomAttribute() const { DARABONBA_PTR_GET_CONST(customAttribute_, vector<CreateBizMetricCommand::CustomAttribute>) };
      inline vector<CreateBizMetricCommand::CustomAttribute> getCustomAttribute() { DARABONBA_PTR_GET(customAttribute_, vector<CreateBizMetricCommand::CustomAttribute>) };
      inline CreateBizMetricCommand& setCustomAttribute(const vector<CreateBizMetricCommand::CustomAttribute> & customAttribute) { DARABONBA_PTR_SET_VALUE(customAttribute_, customAttribute) };
      inline CreateBizMetricCommand& setCustomAttribute(vector<CreateBizMetricCommand::CustomAttribute> && customAttribute) { DARABONBA_PTR_SET_RVALUE(customAttribute_, customAttribute) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateBizMetricCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline CreateBizMetricCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline CreateBizMetricCommand& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline CreateBizMetricCommand& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // metricDefinition Field Functions 
      bool hasMetricDefinition() const { return this->metricDefinition_ != nullptr;};
      void deleteMetricDefinition() { this->metricDefinition_ = nullptr;};
      inline string getMetricDefinition() const { DARABONBA_PTR_GET_DEFAULT(metricDefinition_, "") };
      inline CreateBizMetricCommand& setMetricDefinition(string metricDefinition) { DARABONBA_PTR_SET_VALUE(metricDefinition_, metricDefinition) };


      // metricRelationDiagramExpression Field Functions 
      bool hasMetricRelationDiagramExpression() const { return this->metricRelationDiagramExpression_ != nullptr;};
      void deleteMetricRelationDiagramExpression() { this->metricRelationDiagramExpression_ = nullptr;};
      inline string getMetricRelationDiagramExpression() const { DARABONBA_PTR_GET_DEFAULT(metricRelationDiagramExpression_, "") };
      inline CreateBizMetricCommand& setMetricRelationDiagramExpression(string metricRelationDiagramExpression) { DARABONBA_PTR_SET_VALUE(metricRelationDiagramExpression_, metricRelationDiagramExpression) };


      // metricRelationDiagramSwitchOpen Field Functions 
      bool hasMetricRelationDiagramSwitchOpen() const { return this->metricRelationDiagramSwitchOpen_ != nullptr;};
      void deleteMetricRelationDiagramSwitchOpen() { this->metricRelationDiagramSwitchOpen_ = nullptr;};
      inline bool getMetricRelationDiagramSwitchOpen() const { DARABONBA_PTR_GET_DEFAULT(metricRelationDiagramSwitchOpen_, false) };
      inline CreateBizMetricCommand& setMetricRelationDiagramSwitchOpen(bool metricRelationDiagramSwitchOpen) { DARABONBA_PTR_SET_VALUE(metricRelationDiagramSwitchOpen_, metricRelationDiagramSwitchOpen) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateBizMetricCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operateInstructionContent Field Functions 
      bool hasOperateInstructionContent() const { return this->operateInstructionContent_ != nullptr;};
      void deleteOperateInstructionContent() { this->operateInstructionContent_ = nullptr;};
      inline string getOperateInstructionContent() const { DARABONBA_PTR_GET_DEFAULT(operateInstructionContent_, "") };
      inline CreateBizMetricCommand& setOperateInstructionContent(string operateInstructionContent) { DARABONBA_PTR_SET_VALUE(operateInstructionContent_, operateInstructionContent) };


      // operateInstructionEnabled Field Functions 
      bool hasOperateInstructionEnabled() const { return this->operateInstructionEnabled_ != nullptr;};
      void deleteOperateInstructionEnabled() { this->operateInstructionEnabled_ = nullptr;};
      inline bool getOperateInstructionEnabled() const { DARABONBA_PTR_GET_DEFAULT(operateInstructionEnabled_, false) };
      inline CreateBizMetricCommand& setOperateInstructionEnabled(bool operateInstructionEnabled) { DARABONBA_PTR_SET_VALUE(operateInstructionEnabled_, operateInstructionEnabled) };


      // relatedBizMetrics Field Functions 
      bool hasRelatedBizMetrics() const { return this->relatedBizMetrics_ != nullptr;};
      void deleteRelatedBizMetrics() { this->relatedBizMetrics_ = nullptr;};
      inline const vector<CreateBizMetricCommand::RelatedBizMetrics> & getRelatedBizMetrics() const { DARABONBA_PTR_GET_CONST(relatedBizMetrics_, vector<CreateBizMetricCommand::RelatedBizMetrics>) };
      inline vector<CreateBizMetricCommand::RelatedBizMetrics> getRelatedBizMetrics() { DARABONBA_PTR_GET(relatedBizMetrics_, vector<CreateBizMetricCommand::RelatedBizMetrics>) };
      inline CreateBizMetricCommand& setRelatedBizMetrics(const vector<CreateBizMetricCommand::RelatedBizMetrics> & relatedBizMetrics) { DARABONBA_PTR_SET_VALUE(relatedBizMetrics_, relatedBizMetrics) };
      inline CreateBizMetricCommand& setRelatedBizMetrics(vector<CreateBizMetricCommand::RelatedBizMetrics> && relatedBizMetrics) { DARABONBA_PTR_SET_RVALUE(relatedBizMetrics_, relatedBizMetrics) };


      // viewScope Field Functions 
      bool hasViewScope() const { return this->viewScope_ != nullptr;};
      void deleteViewScope() { this->viewScope_ = nullptr;};
      inline const CreateBizMetricCommand::ViewScope & getViewScope() const { DARABONBA_PTR_GET_CONST(viewScope_, CreateBizMetricCommand::ViewScope) };
      inline CreateBizMetricCommand::ViewScope getViewScope() { DARABONBA_PTR_GET(viewScope_, CreateBizMetricCommand::ViewScope) };
      inline CreateBizMetricCommand& setViewScope(const CreateBizMetricCommand::ViewScope & viewScope) { DARABONBA_PTR_SET_VALUE(viewScope_, viewScope) };
      inline CreateBizMetricCommand& setViewScope(CreateBizMetricCommand::ViewScope && viewScope) { DARABONBA_PTR_SET_RVALUE(viewScope_, viewScope) };


    protected:
      shared_ptr<vector<string>> associatedTechMetricFullNames_ {};
      shared_ptr<string> bizOwnerName_ {};
      shared_ptr<vector<int64_t>> catalogIds_ {};
      shared_ptr<vector<CreateBizMetricCommand::CustomAttribute>> customAttribute_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<vector<string>> labels_ {};
      shared_ptr<string> metricDefinition_ {};
      shared_ptr<string> metricRelationDiagramExpression_ {};
      shared_ptr<bool> metricRelationDiagramSwitchOpen_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<string> operateInstructionContent_ {};
      shared_ptr<bool> operateInstructionEnabled_ {};
      shared_ptr<vector<CreateBizMetricCommand::RelatedBizMetrics>> relatedBizMetrics_ {};
      shared_ptr<CreateBizMetricCommand::ViewScope> viewScope_ {};
    };

    virtual bool empty() const override { return this->createBizMetricCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createBizMetricCommand Field Functions 
    bool hasCreateBizMetricCommand() const { return this->createBizMetricCommand_ != nullptr;};
    void deleteCreateBizMetricCommand() { this->createBizMetricCommand_ = nullptr;};
    inline const CreateBizMetricRequest::CreateBizMetricCommand & getCreateBizMetricCommand() const { DARABONBA_PTR_GET_CONST(createBizMetricCommand_, CreateBizMetricRequest::CreateBizMetricCommand) };
    inline CreateBizMetricRequest::CreateBizMetricCommand getCreateBizMetricCommand() { DARABONBA_PTR_GET(createBizMetricCommand_, CreateBizMetricRequest::CreateBizMetricCommand) };
    inline CreateBizMetricRequest& setCreateBizMetricCommand(const CreateBizMetricRequest::CreateBizMetricCommand & createBizMetricCommand) { DARABONBA_PTR_SET_VALUE(createBizMetricCommand_, createBizMetricCommand) };
    inline CreateBizMetricRequest& setCreateBizMetricCommand(CreateBizMetricRequest::CreateBizMetricCommand && createBizMetricCommand) { DARABONBA_PTR_SET_RVALUE(createBizMetricCommand_, createBizMetricCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateBizMetricRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateBizMetricRequest::CreateBizMetricCommand> createBizMetricCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
