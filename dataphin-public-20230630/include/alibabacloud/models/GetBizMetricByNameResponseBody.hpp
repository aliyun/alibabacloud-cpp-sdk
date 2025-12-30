// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZMETRICBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBIZMETRICBYNAMERESPONSEBODY_HPP_
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
  class GetBizMetricByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizMetricByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizMetricByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBizMetricByNameResponseBody() = default ;
    GetBizMetricByNameResponseBody(const GetBizMetricByNameResponseBody &) = default ;
    GetBizMetricByNameResponseBody(GetBizMetricByNameResponseBody &&) = default ;
    GetBizMetricByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizMetricByNameResponseBody() = default ;
    GetBizMetricByNameResponseBody& operator=(const GetBizMetricByNameResponseBody &) = default ;
    GetBizMetricByNameResponseBody& operator=(GetBizMetricByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedTechMetrics, associatedTechMetrics_);
        DARABONBA_PTR_TO_JSON(BizOwnerName, bizOwnerName_);
        DARABONBA_PTR_TO_JSON(Catalogs, catalogs_);
        DARABONBA_PTR_TO_JSON(CustomAttribute, customAttribute_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Guid, guid_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(MetricDefinition, metricDefinition_);
        DARABONBA_PTR_TO_JSON(MetricRelationDiagramExpression, metricRelationDiagramExpression_);
        DARABONBA_PTR_TO_JSON(MetricRelationDiagramSwitchOpen, metricRelationDiagramSwitchOpen_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OperateInstructionContent, operateInstructionContent_);
        DARABONBA_PTR_TO_JSON(OperateInstructionEnabled, operateInstructionEnabled_);
        DARABONBA_PTR_TO_JSON(RelatedBizMetrics, relatedBizMetrics_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(ViewScope, viewScope_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedTechMetrics, associatedTechMetrics_);
        DARABONBA_PTR_FROM_JSON(BizOwnerName, bizOwnerName_);
        DARABONBA_PTR_FROM_JSON(Catalogs, catalogs_);
        DARABONBA_PTR_FROM_JSON(CustomAttribute, customAttribute_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Guid, guid_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(MetricDefinition, metricDefinition_);
        DARABONBA_PTR_FROM_JSON(MetricRelationDiagramExpression, metricRelationDiagramExpression_);
        DARABONBA_PTR_FROM_JSON(MetricRelationDiagramSwitchOpen, metricRelationDiagramSwitchOpen_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OperateInstructionContent, operateInstructionContent_);
        DARABONBA_PTR_FROM_JSON(OperateInstructionEnabled, operateInstructionEnabled_);
        DARABONBA_PTR_FROM_JSON(RelatedBizMetrics, relatedBizMetrics_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(ViewScope, viewScope_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Guid, guid_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedBizMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Guid, guid_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->guid_ == nullptr && this->name_ == nullptr && this->relationType_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RelatedBizMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline RelatedBizMetrics& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline RelatedBizMetrics& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


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
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        // guid
        shared_ptr<string> guid_ {};
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

      class Catalogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Catalogs& obj) { 
          DARABONBA_PTR_TO_JSON(CatalogDesc, catalogDesc_);
          DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
          DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_TO_JSON(ParentCatalogId, parentCatalogId_);
          DARABONBA_PTR_TO_JSON(ParentPath, parentPath_);
          DARABONBA_PTR_TO_JSON(TopicId, topicId_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        };
        friend void from_json(const Darabonba::Json& j, Catalogs& obj) { 
          DARABONBA_PTR_FROM_JSON(CatalogDesc, catalogDesc_);
          DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
          DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_FROM_JSON(ParentCatalogId, parentCatalogId_);
          DARABONBA_PTR_FROM_JSON(ParentPath, parentPath_);
          DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
        };
        Catalogs() = default ;
        Catalogs(const Catalogs &) = default ;
        Catalogs(Catalogs &&) = default ;
        Catalogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Catalogs() = default ;
        Catalogs& operator=(const Catalogs &) = default ;
        Catalogs& operator=(Catalogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->catalogDesc_ == nullptr
        && this->catalogId_ == nullptr && this->catalogName_ == nullptr && this->parentCatalogId_ == nullptr && this->parentPath_ == nullptr && this->topicId_ == nullptr
        && this->topicName_ == nullptr; };
        // catalogDesc Field Functions 
        bool hasCatalogDesc() const { return this->catalogDesc_ != nullptr;};
        void deleteCatalogDesc() { this->catalogDesc_ = nullptr;};
        inline string getCatalogDesc() const { DARABONBA_PTR_GET_DEFAULT(catalogDesc_, "") };
        inline Catalogs& setCatalogDesc(string catalogDesc) { DARABONBA_PTR_SET_VALUE(catalogDesc_, catalogDesc) };


        // catalogId Field Functions 
        bool hasCatalogId() const { return this->catalogId_ != nullptr;};
        void deleteCatalogId() { this->catalogId_ = nullptr;};
        inline int64_t getCatalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, 0L) };
        inline Catalogs& setCatalogId(int64_t catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


        // catalogName Field Functions 
        bool hasCatalogName() const { return this->catalogName_ != nullptr;};
        void deleteCatalogName() { this->catalogName_ = nullptr;};
        inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
        inline Catalogs& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


        // parentCatalogId Field Functions 
        bool hasParentCatalogId() const { return this->parentCatalogId_ != nullptr;};
        void deleteParentCatalogId() { this->parentCatalogId_ = nullptr;};
        inline int64_t getParentCatalogId() const { DARABONBA_PTR_GET_DEFAULT(parentCatalogId_, 0L) };
        inline Catalogs& setParentCatalogId(int64_t parentCatalogId) { DARABONBA_PTR_SET_VALUE(parentCatalogId_, parentCatalogId) };


        // parentPath Field Functions 
        bool hasParentPath() const { return this->parentPath_ != nullptr;};
        void deleteParentPath() { this->parentPath_ = nullptr;};
        inline string getParentPath() const { DARABONBA_PTR_GET_DEFAULT(parentPath_, "") };
        inline Catalogs& setParentPath(string parentPath) { DARABONBA_PTR_SET_VALUE(parentPath_, parentPath) };


        // topicId Field Functions 
        bool hasTopicId() const { return this->topicId_ != nullptr;};
        void deleteTopicId() { this->topicId_ = nullptr;};
        inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
        inline Catalogs& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Catalogs& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      protected:
        shared_ptr<string> catalogDesc_ {};
        shared_ptr<int64_t> catalogId_ {};
        shared_ptr<string> catalogName_ {};
        shared_ptr<int64_t> parentCatalogId_ {};
        shared_ptr<string> parentPath_ {};
        shared_ptr<int64_t> topicId_ {};
        shared_ptr<string> topicName_ {};
      };

      class AssociatedTechMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedTechMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Guid, guid_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedTechMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Guid, guid_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
        };
        AssociatedTechMetrics() = default ;
        AssociatedTechMetrics(const AssociatedTechMetrics &) = default ;
        AssociatedTechMetrics(AssociatedTechMetrics &&) = default ;
        AssociatedTechMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedTechMetrics() = default ;
        AssociatedTechMetrics& operator=(const AssociatedTechMetrics &) = default ;
        AssociatedTechMetrics& operator=(AssociatedTechMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->guid_ == nullptr && this->name_ == nullptr && this->subType_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AssociatedTechMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline AssociatedTechMetrics& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline AssociatedTechMetrics& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AssociatedTechMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline AssociatedTechMetrics& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        // guid
        shared_ptr<string> guid_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> subType_ {};
      };

      virtual bool empty() const override { return this->associatedTechMetrics_ == nullptr
        && this->bizOwnerName_ == nullptr && this->catalogs_ == nullptr && this->customAttribute_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr
        && this->guid_ == nullptr && this->labels_ == nullptr && this->metricDefinition_ == nullptr && this->metricRelationDiagramExpression_ == nullptr && this->metricRelationDiagramSwitchOpen_ == nullptr
        && this->name_ == nullptr && this->operateInstructionContent_ == nullptr && this->operateInstructionEnabled_ == nullptr && this->relatedBizMetrics_ == nullptr && this->tenantId_ == nullptr
        && this->viewScope_ == nullptr; };
      // associatedTechMetrics Field Functions 
      bool hasAssociatedTechMetrics() const { return this->associatedTechMetrics_ != nullptr;};
      void deleteAssociatedTechMetrics() { this->associatedTechMetrics_ = nullptr;};
      inline const vector<Data::AssociatedTechMetrics> & getAssociatedTechMetrics() const { DARABONBA_PTR_GET_CONST(associatedTechMetrics_, vector<Data::AssociatedTechMetrics>) };
      inline vector<Data::AssociatedTechMetrics> getAssociatedTechMetrics() { DARABONBA_PTR_GET(associatedTechMetrics_, vector<Data::AssociatedTechMetrics>) };
      inline Data& setAssociatedTechMetrics(const vector<Data::AssociatedTechMetrics> & associatedTechMetrics) { DARABONBA_PTR_SET_VALUE(associatedTechMetrics_, associatedTechMetrics) };
      inline Data& setAssociatedTechMetrics(vector<Data::AssociatedTechMetrics> && associatedTechMetrics) { DARABONBA_PTR_SET_RVALUE(associatedTechMetrics_, associatedTechMetrics) };


      // bizOwnerName Field Functions 
      bool hasBizOwnerName() const { return this->bizOwnerName_ != nullptr;};
      void deleteBizOwnerName() { this->bizOwnerName_ = nullptr;};
      inline string getBizOwnerName() const { DARABONBA_PTR_GET_DEFAULT(bizOwnerName_, "") };
      inline Data& setBizOwnerName(string bizOwnerName) { DARABONBA_PTR_SET_VALUE(bizOwnerName_, bizOwnerName) };


      // catalogs Field Functions 
      bool hasCatalogs() const { return this->catalogs_ != nullptr;};
      void deleteCatalogs() { this->catalogs_ = nullptr;};
      inline const vector<Data::Catalogs> & getCatalogs() const { DARABONBA_PTR_GET_CONST(catalogs_, vector<Data::Catalogs>) };
      inline vector<Data::Catalogs> getCatalogs() { DARABONBA_PTR_GET(catalogs_, vector<Data::Catalogs>) };
      inline Data& setCatalogs(const vector<Data::Catalogs> & catalogs) { DARABONBA_PTR_SET_VALUE(catalogs_, catalogs) };
      inline Data& setCatalogs(vector<Data::Catalogs> && catalogs) { DARABONBA_PTR_SET_RVALUE(catalogs_, catalogs) };


      // customAttribute Field Functions 
      bool hasCustomAttribute() const { return this->customAttribute_ != nullptr;};
      void deleteCustomAttribute() { this->customAttribute_ = nullptr;};
      inline const vector<Data::CustomAttribute> & getCustomAttribute() const { DARABONBA_PTR_GET_CONST(customAttribute_, vector<Data::CustomAttribute>) };
      inline vector<Data::CustomAttribute> getCustomAttribute() { DARABONBA_PTR_GET(customAttribute_, vector<Data::CustomAttribute>) };
      inline Data& setCustomAttribute(const vector<Data::CustomAttribute> & customAttribute) { DARABONBA_PTR_SET_VALUE(customAttribute_, customAttribute) };
      inline Data& setCustomAttribute(vector<Data::CustomAttribute> && customAttribute) { DARABONBA_PTR_SET_RVALUE(customAttribute_, customAttribute) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // guid Field Functions 
      bool hasGuid() const { return this->guid_ != nullptr;};
      void deleteGuid() { this->guid_ = nullptr;};
      inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
      inline Data& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline Data& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Data& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // metricDefinition Field Functions 
      bool hasMetricDefinition() const { return this->metricDefinition_ != nullptr;};
      void deleteMetricDefinition() { this->metricDefinition_ = nullptr;};
      inline string getMetricDefinition() const { DARABONBA_PTR_GET_DEFAULT(metricDefinition_, "") };
      inline Data& setMetricDefinition(string metricDefinition) { DARABONBA_PTR_SET_VALUE(metricDefinition_, metricDefinition) };


      // metricRelationDiagramExpression Field Functions 
      bool hasMetricRelationDiagramExpression() const { return this->metricRelationDiagramExpression_ != nullptr;};
      void deleteMetricRelationDiagramExpression() { this->metricRelationDiagramExpression_ = nullptr;};
      inline string getMetricRelationDiagramExpression() const { DARABONBA_PTR_GET_DEFAULT(metricRelationDiagramExpression_, "") };
      inline Data& setMetricRelationDiagramExpression(string metricRelationDiagramExpression) { DARABONBA_PTR_SET_VALUE(metricRelationDiagramExpression_, metricRelationDiagramExpression) };


      // metricRelationDiagramSwitchOpen Field Functions 
      bool hasMetricRelationDiagramSwitchOpen() const { return this->metricRelationDiagramSwitchOpen_ != nullptr;};
      void deleteMetricRelationDiagramSwitchOpen() { this->metricRelationDiagramSwitchOpen_ = nullptr;};
      inline bool getMetricRelationDiagramSwitchOpen() const { DARABONBA_PTR_GET_DEFAULT(metricRelationDiagramSwitchOpen_, false) };
      inline Data& setMetricRelationDiagramSwitchOpen(bool metricRelationDiagramSwitchOpen) { DARABONBA_PTR_SET_VALUE(metricRelationDiagramSwitchOpen_, metricRelationDiagramSwitchOpen) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operateInstructionContent Field Functions 
      bool hasOperateInstructionContent() const { return this->operateInstructionContent_ != nullptr;};
      void deleteOperateInstructionContent() { this->operateInstructionContent_ = nullptr;};
      inline string getOperateInstructionContent() const { DARABONBA_PTR_GET_DEFAULT(operateInstructionContent_, "") };
      inline Data& setOperateInstructionContent(string operateInstructionContent) { DARABONBA_PTR_SET_VALUE(operateInstructionContent_, operateInstructionContent) };


      // operateInstructionEnabled Field Functions 
      bool hasOperateInstructionEnabled() const { return this->operateInstructionEnabled_ != nullptr;};
      void deleteOperateInstructionEnabled() { this->operateInstructionEnabled_ = nullptr;};
      inline bool getOperateInstructionEnabled() const { DARABONBA_PTR_GET_DEFAULT(operateInstructionEnabled_, false) };
      inline Data& setOperateInstructionEnabled(bool operateInstructionEnabled) { DARABONBA_PTR_SET_VALUE(operateInstructionEnabled_, operateInstructionEnabled) };


      // relatedBizMetrics Field Functions 
      bool hasRelatedBizMetrics() const { return this->relatedBizMetrics_ != nullptr;};
      void deleteRelatedBizMetrics() { this->relatedBizMetrics_ = nullptr;};
      inline const vector<Data::RelatedBizMetrics> & getRelatedBizMetrics() const { DARABONBA_PTR_GET_CONST(relatedBizMetrics_, vector<Data::RelatedBizMetrics>) };
      inline vector<Data::RelatedBizMetrics> getRelatedBizMetrics() { DARABONBA_PTR_GET(relatedBizMetrics_, vector<Data::RelatedBizMetrics>) };
      inline Data& setRelatedBizMetrics(const vector<Data::RelatedBizMetrics> & relatedBizMetrics) { DARABONBA_PTR_SET_VALUE(relatedBizMetrics_, relatedBizMetrics) };
      inline Data& setRelatedBizMetrics(vector<Data::RelatedBizMetrics> && relatedBizMetrics) { DARABONBA_PTR_SET_RVALUE(relatedBizMetrics_, relatedBizMetrics) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // viewScope Field Functions 
      bool hasViewScope() const { return this->viewScope_ != nullptr;};
      void deleteViewScope() { this->viewScope_ = nullptr;};
      inline const Data::ViewScope & getViewScope() const { DARABONBA_PTR_GET_CONST(viewScope_, Data::ViewScope) };
      inline Data::ViewScope getViewScope() { DARABONBA_PTR_GET(viewScope_, Data::ViewScope) };
      inline Data& setViewScope(const Data::ViewScope & viewScope) { DARABONBA_PTR_SET_VALUE(viewScope_, viewScope) };
      inline Data& setViewScope(Data::ViewScope && viewScope) { DARABONBA_PTR_SET_RVALUE(viewScope_, viewScope) };


    protected:
      shared_ptr<vector<Data::AssociatedTechMetrics>> associatedTechMetrics_ {};
      shared_ptr<string> bizOwnerName_ {};
      shared_ptr<vector<Data::Catalogs>> catalogs_ {};
      shared_ptr<vector<Data::CustomAttribute>> customAttribute_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> guid_ {};
      shared_ptr<vector<string>> labels_ {};
      shared_ptr<string> metricDefinition_ {};
      shared_ptr<string> metricRelationDiagramExpression_ {};
      shared_ptr<bool> metricRelationDiagramSwitchOpen_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> operateInstructionContent_ {};
      shared_ptr<bool> operateInstructionEnabled_ {};
      shared_ptr<vector<Data::RelatedBizMetrics>> relatedBizMetrics_ {};
      shared_ptr<int64_t> tenantId_ {};
      shared_ptr<Data::ViewScope> viewScope_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBizMetricByNameResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBizMetricByNameResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBizMetricByNameResponseBody::Data) };
    inline GetBizMetricByNameResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBizMetricByNameResponseBody::Data) };
    inline GetBizMetricByNameResponseBody& setData(const GetBizMetricByNameResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBizMetricByNameResponseBody& setData(GetBizMetricByNameResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBizMetricByNameResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBizMetricByNameResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBizMetricByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBizMetricByNameResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBizMetricByNameResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
