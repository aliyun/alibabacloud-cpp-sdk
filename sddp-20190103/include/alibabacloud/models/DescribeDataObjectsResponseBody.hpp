// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataObjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(HasPrevious, hasPrevious_);
      DARABONBA_PTR_TO_JSON(HitValues, hitValues_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(NextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PreviousCursor, previousCursor_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(HasPrevious, hasPrevious_);
      DARABONBA_PTR_FROM_JSON(HitValues, hitValues_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(NextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PreviousCursor, previousCursor_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataObjectsResponseBody() = default ;
    DescribeDataObjectsResponseBody(const DescribeDataObjectsResponseBody &) = default ;
    DescribeDataObjectsResponseBody(DescribeDataObjectsResponseBody &&) = default ;
    DescribeDataObjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectsResponseBody() = default ;
    DescribeDataObjectsResponseBody& operator=(const DescribeDataObjectsResponseBody &) = default ;
    DescribeDataObjectsResponseBody& operator=(DescribeDataObjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(EngineType, engineType_);
        DARABONBA_PTR_TO_JSON(FileCategoryCode, fileCategoryCode_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IsRevision, isRevision_);
        DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(LogStore, logStore_);
        DARABONBA_PTR_TO_JSON(MaskStatus, maskStatus_);
        DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
        DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ObjectFileCategory, objectFileCategory_);
        DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Sx, sx_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskNumber, taskNumber_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
        DARABONBA_PTR_FROM_JSON(FileCategoryCode, fileCategoryCode_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IsRevision, isRevision_);
        DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
        DARABONBA_PTR_FROM_JSON(MaskStatus, maskStatus_);
        DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
        DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ObjectFileCategory, objectFileCategory_);
        DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Sx, sx_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskNumber, taskNumber_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
          DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
          DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
          DARABONBA_PTR_TO_JSON(RuleCategoryNameList, ruleCategoryNameList_);
          DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(SampleList, sampleList_);
        };
        friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
          DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
          DARABONBA_PTR_FROM_JSON(RuleCategoryNameList, ruleCategoryNameList_);
          DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(SampleList, sampleList_);
        };
        RuleList() = default ;
        RuleList(const RuleList &) = default ;
        RuleList(RuleList &&) = default ;
        RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleList() = default ;
        RuleList& operator=(const RuleList &) = default ;
        RuleList& operator=(RuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->riskLevelId_ == nullptr
        && this->riskLevelName_ == nullptr && this->ruleCategoryNameList_ == nullptr && this->ruleCount_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->sampleList_ == nullptr; };
        // riskLevelId Field Functions 
        bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
        void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
        inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
        inline RuleList& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


        // riskLevelName Field Functions 
        bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
        void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
        inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
        inline RuleList& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


        // ruleCategoryNameList Field Functions 
        bool hasRuleCategoryNameList() const { return this->ruleCategoryNameList_ != nullptr;};
        void deleteRuleCategoryNameList() { this->ruleCategoryNameList_ = nullptr;};
        inline string getRuleCategoryNameList() const { DARABONBA_PTR_GET_DEFAULT(ruleCategoryNameList_, "") };
        inline RuleList& setRuleCategoryNameList(string ruleCategoryNameList) { DARABONBA_PTR_SET_VALUE(ruleCategoryNameList_, ruleCategoryNameList) };


        // ruleCount Field Functions 
        bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
        void deleteRuleCount() { this->ruleCount_ = nullptr;};
        inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
        inline RuleList& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline RuleList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sampleList Field Functions 
        bool hasSampleList() const { return this->sampleList_ != nullptr;};
        void deleteSampleList() { this->sampleList_ = nullptr;};
        inline string getSampleList() const { DARABONBA_PTR_GET_DEFAULT(sampleList_, "") };
        inline RuleList& setSampleList(string sampleList) { DARABONBA_PTR_SET_VALUE(sampleList_, sampleList) };


      protected:
        // The risk level ID of the sensitive data detection rule. Valid values:
        // - **1**: N/A. No sensitive data is detected.
        // - **2**: S1. Level 1 sensitive data.
        // - **3**: S2. Level 2 sensitive data.
        // - **4**: S3. Level 3 sensitive data.
        // - **5**: S4. Level 4 sensitive data.
        shared_ptr<int64_t> riskLevelId_ {};
        // The risk level name of the data asset table. Valid values:
        // - **N/A**: No sensitive data is detected.
        // - **S1**: Level 1 sensitive data.
        // - **S2**: Level 2 sensitive data.
        // - **S3**: Level 3 sensitive data.
        // - **S4**: Level 4 sensitive data.
        shared_ptr<string> riskLevelName_ {};
        // The rule information described from the top to the bottom of the template.
        shared_ptr<string> ruleCategoryNameList_ {};
        // The number of matched detection models.
        shared_ptr<int32_t> ruleCount_ {};
        // The detection model ID.
        shared_ptr<int64_t> ruleId_ {};
        // The detection model name.
        shared_ptr<string> ruleName_ {};
        // The sample data.
        shared_ptr<string> sampleList_ {};
      };

      class ModelTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelTags& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ModelTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ModelTags() = default ;
        ModelTags(const ModelTags &) = default ;
        ModelTags(ModelTags &&) = default ;
        ModelTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelTags() = default ;
        ModelTags& operator=(const ModelTags &) = default ;
        ModelTags& operator=(ModelTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ModelTags& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ModelTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The data label ID. Valid values:
        // - **101**: Personal sensitive information.
        // - **102**: Personal information.
        // - **107**: General information.
        shared_ptr<int64_t> id_ {};
        // The data label name. Valid values:
        // - **Personal sensitive information.**
        // - **Personal information.**
        // - **General information.**
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->categories_ == nullptr
        && this->clusterType_ == nullptr && this->comment_ == nullptr && this->dataType_ == nullptr && this->dbName_ == nullptr && this->engineType_ == nullptr
        && this->fileCategoryCode_ == nullptr && this->id_ == nullptr && this->instanceDescription_ == nullptr && this->instanceId_ == nullptr && this->isRevision_ == nullptr
        && this->lastModifiedTime_ == nullptr && this->lastScanTime_ == nullptr && this->logStore_ == nullptr && this->maskStatus_ == nullptr && this->memberAccount_ == nullptr
        && this->modelTags_ == nullptr && this->name_ == nullptr && this->objectFileCategory_ == nullptr && this->objectType_ == nullptr && this->path_ == nullptr
        && this->productCode_ == nullptr && this->productId_ == nullptr && this->project_ == nullptr && this->regionId_ == nullptr && this->regionName_ == nullptr
        && this->riskLevelId_ == nullptr && this->ruleCount_ == nullptr && this->ruleList_ == nullptr && this->sensitiveCount_ == nullptr && this->size_ == nullptr
        && this->sx_ == nullptr && this->tableName_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskNumber_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr; };
      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
      inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
      inline Items& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline Items& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Items& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Items& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Items& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline Items& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Items& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // fileCategoryCode Field Functions 
      bool hasFileCategoryCode() const { return this->fileCategoryCode_ != nullptr;};
      void deleteFileCategoryCode() { this->fileCategoryCode_ = nullptr;};
      inline int32_t getFileCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(fileCategoryCode_, 0) };
      inline Items& setFileCategoryCode(int32_t fileCategoryCode) { DARABONBA_PTR_SET_VALUE(fileCategoryCode_, fileCategoryCode) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Items& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isRevision Field Functions 
      bool hasIsRevision() const { return this->isRevision_ != nullptr;};
      void deleteIsRevision() { this->isRevision_ = nullptr;};
      inline int32_t getIsRevision() const { DARABONBA_PTR_GET_DEFAULT(isRevision_, 0) };
      inline Items& setIsRevision(int32_t isRevision) { DARABONBA_PTR_SET_VALUE(isRevision_, isRevision) };


      // lastModifiedTime Field Functions 
      bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
      void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
      inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
      inline Items& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline Items& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline Items& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      // maskStatus Field Functions 
      bool hasMaskStatus() const { return this->maskStatus_ != nullptr;};
      void deleteMaskStatus() { this->maskStatus_ = nullptr;};
      inline int32_t getMaskStatus() const { DARABONBA_PTR_GET_DEFAULT(maskStatus_, 0) };
      inline Items& setMaskStatus(int32_t maskStatus) { DARABONBA_PTR_SET_VALUE(maskStatus_, maskStatus) };


      // memberAccount Field Functions 
      bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
      void deleteMemberAccount() { this->memberAccount_ = nullptr;};
      inline int64_t getMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
      inline Items& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


      // modelTags Field Functions 
      bool hasModelTags() const { return this->modelTags_ != nullptr;};
      void deleteModelTags() { this->modelTags_ = nullptr;};
      inline const vector<Items::ModelTags> & getModelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Items::ModelTags>) };
      inline vector<Items::ModelTags> getModelTags() { DARABONBA_PTR_GET(modelTags_, vector<Items::ModelTags>) };
      inline Items& setModelTags(const vector<Items::ModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
      inline Items& setModelTags(vector<Items::ModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectFileCategory Field Functions 
      bool hasObjectFileCategory() const { return this->objectFileCategory_ != nullptr;};
      void deleteObjectFileCategory() { this->objectFileCategory_ = nullptr;};
      inline string getObjectFileCategory() const { DARABONBA_PTR_GET_DEFAULT(objectFileCategory_, "") };
      inline Items& setObjectFileCategory(string objectFileCategory) { DARABONBA_PTR_SET_VALUE(objectFileCategory_, objectFileCategory) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline Items& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Items& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
      inline Items& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Items& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline Items& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // riskLevelId Field Functions 
      bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
      void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
      inline int32_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0) };
      inline Items& setRiskLevelId(int32_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline Items& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const vector<Items::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Items::RuleList>) };
      inline vector<Items::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<Items::RuleList>) };
      inline Items& setRuleList(const vector<Items::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline Items& setRuleList(vector<Items::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      // sensitiveCount Field Functions 
      bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
      void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
      inline int32_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
      inline Items& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Items& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // sx Field Functions 
      bool hasSx() const { return this->sx_ != nullptr;};
      void deleteSx() { this->sx_ = nullptr;};
      inline string getSx() const { DARABONBA_PTR_GET_DEFAULT(sx_, "") };
      inline Items& setSx(string sx) { DARABONBA_PTR_SET_VALUE(sx_, sx) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Items& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Items& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskNumber Field Functions 
      bool hasTaskNumber() const { return this->taskNumber_ != nullptr;};
      void deleteTaskNumber() { this->taskNumber_ = nullptr;};
      inline int64_t getTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(taskNumber_, 0L) };
      inline Items& setTaskNumber(int64_t taskNumber) { DARABONBA_PTR_SET_VALUE(taskNumber_, taskNumber) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Items& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Items& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The list of industry categories to which the sensitive data belongs.
      shared_ptr<vector<string>> categories_ {};
      shared_ptr<string> clusterType_ {};
      // The column comment.
      shared_ptr<string> comment_ {};
      // The database column type.
      shared_ptr<string> dataType_ {};
      // The database name.
      shared_ptr<string> dbName_ {};
      // The engine type.
      shared_ptr<string> engineType_ {};
      // The file type.
      shared_ptr<int32_t> fileCategoryCode_ {};
      // The unique ID of the data object.
      shared_ptr<string> id_ {};
      // The instance description of the data object.
      shared_ptr<string> instanceDescription_ {};
      // The data asset instance ID.
      shared_ptr<string> instanceId_ {};
      // The revision status.
      shared_ptr<int32_t> isRevision_ {};
      // The last modification time of the file, in milliseconds.
      shared_ptr<int64_t> lastModifiedTime_ {};
      // The timestamp of the last scan, in milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The SLS Logstore.
      shared_ptr<string> logStore_ {};
      // The column encryption status.
      shared_ptr<int32_t> maskStatus_ {};
      // The member accounts ID.
      shared_ptr<int64_t> memberAccount_ {};
      // The list of data labels.
      shared_ptr<vector<Items::ModelTags>> modelTags_ {};
      // The name of the data object.
      shared_ptr<string> name_ {};
      // The file category name.
      shared_ptr<string> objectFileCategory_ {};
      // The object type of the data object.
      shared_ptr<string> objectType_ {};
      // The path of the data object.
      shared_ptr<string> path_ {};
      // The product name to which the data object belongs. Valid values:
      // - **MaxCompute**
      // - **OSS**
      // - **ADB-MYSQL**
      // - **TableStore**
      // - **RDS**
      // - **SELF_DB**
      // - **PolarDB-X**
      // - **PolarDB**
      // - **ADB-PG**
      // - **OceanBase**
      // - **MongoDB**
      // - **Redis**
      shared_ptr<string> productCode_ {};
      // The ID that corresponds to the product name to which the data object belongs. Valid values:
      // - **1**: MaxCompute
      // - **2**: OSS
      // - **3**: ADB-MYSQL
      // - **4**: TableStore
      // - **5**: RDS
      // - **6**: SELF_DB
      // - **7**: PolarDB-X
      // - **8**: PolarDB
      // - **9**: ADB-PG
      // - **10**: OceanBase
      // - **11**: MongoDB
      // - **25**: Redis
      shared_ptr<int64_t> productId_ {};
      // The Simple Log Service (SLS) project.
      shared_ptr<string> project_ {};
      // The region ID to which the data object belongs.
      shared_ptr<string> regionId_ {};
      // The region name.
      shared_ptr<string> regionName_ {};
      // The sensitivity level.
      shared_ptr<int32_t> riskLevelId_ {};
      // The number of matched rules.
      shared_ptr<int32_t> ruleCount_ {};
      // The list of matched detection models.
      shared_ptr<vector<Items::RuleList>> ruleList_ {};
      // The number of sensitive data entries.
      shared_ptr<int32_t> sensitiveCount_ {};
      // The file size.
      shared_ptr<int64_t> size_ {};
      // The array that consists of the number of rules matched at each sensitivity level, in the format "S1,S2,S3,S4,S5,S6,S7,S8,S9,S10", where S1 represents the number of rules matched at sensitivity level S1.
      shared_ptr<string> sx_ {};
      // The table name.
      shared_ptr<string> tableName_ {};
      // The task ID.
      shared_ptr<int64_t> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The user task number.
      shared_ptr<int64_t> taskNumber_ {};
      // The industry template ID.
      shared_ptr<int64_t> templateId_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->hasNext_ == nullptr && this->hasPrevious_ == nullptr && this->hitValues_ == nullptr
        && this->items_ == nullptr && this->nextCursor_ == nullptr && this->pageSize_ == nullptr && this->previousCursor_ == nullptr && this->requestId_ == nullptr
        && this->syncStatus_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataObjectsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDataObjectsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDataObjectsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline DescribeDataObjectsResponseBody& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // hasPrevious Field Functions 
    bool hasHasPrevious() const { return this->hasPrevious_ != nullptr;};
    void deleteHasPrevious() { this->hasPrevious_ = nullptr;};
    inline bool getHasPrevious() const { DARABONBA_PTR_GET_DEFAULT(hasPrevious_, false) };
    inline DescribeDataObjectsResponseBody& setHasPrevious(bool hasPrevious) { DARABONBA_PTR_SET_VALUE(hasPrevious_, hasPrevious) };


    // hitValues Field Functions 
    bool hasHitValues() const { return this->hitValues_ != nullptr;};
    void deleteHitValues() { this->hitValues_ = nullptr;};
    inline const vector<string> & getHitValues() const { DARABONBA_PTR_GET_CONST(hitValues_, vector<string>) };
    inline vector<string> getHitValues() { DARABONBA_PTR_GET(hitValues_, vector<string>) };
    inline DescribeDataObjectsResponseBody& setHitValues(const vector<string> & hitValues) { DARABONBA_PTR_SET_VALUE(hitValues_, hitValues) };
    inline DescribeDataObjectsResponseBody& setHitValues(vector<string> && hitValues) { DARABONBA_PTR_SET_RVALUE(hitValues_, hitValues) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataObjectsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataObjectsResponseBody::Items>) };
    inline vector<DescribeDataObjectsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDataObjectsResponseBody::Items>) };
    inline DescribeDataObjectsResponseBody& setItems(const vector<DescribeDataObjectsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataObjectsResponseBody& setItems(vector<DescribeDataObjectsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline string getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, "") };
    inline DescribeDataObjectsResponseBody& setNextCursor(string nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataObjectsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // previousCursor Field Functions 
    bool hasPreviousCursor() const { return this->previousCursor_ != nullptr;};
    void deletePreviousCursor() { this->previousCursor_ = nullptr;};
    inline string getPreviousCursor() const { DARABONBA_PTR_GET_DEFAULT(previousCursor_, "") };
    inline DescribeDataObjectsResponseBody& setPreviousCursor(string previousCursor) { DARABONBA_PTR_SET_VALUE(previousCursor_, previousCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataObjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline string getSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
    inline DescribeDataObjectsResponseBody& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataObjectsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the current page in a paged query. Settings for paging. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<bool> hasNext_ {};
    shared_ptr<bool> hasPrevious_ {};
    // The associate filter values used to return filtered values.
    shared_ptr<vector<string>> hitValues_ {};
    // The list of data objects.
    shared_ptr<vector<DescribeDataObjectsResponseBody::Items>> items_ {};
    shared_ptr<string> nextCursor_ {};
    // The maximum number of data asset instances to return per page in a paged query. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> previousCursor_ {};
    // The ID of the request. The ID is a unique identifier that Alibaba Cloud generates for the request and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> syncStatus_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
