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
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
        DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ObjectFileCategory, objectFileCategory_);
        DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
        DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ObjectFileCategory, objectFileCategory_);
        DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
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
          DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
          DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
          DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
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
        && this->riskLevelName_ == nullptr && this->ruleCount_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr; };
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


      protected:
        // Risk level ID for sensitive data identification rules. Values:
        // - **1**: N/A: No sensitive data identified.
        // - **2**: S1: Level 1 sensitive data.
        // - **3**: S2: Level 2 sensitive data.
        // - **4**: S3: Level 3 sensitive data.
        // - **5**: S4: Level 4 sensitive data.
        shared_ptr<int64_t> riskLevelId_ {};
        // Risk level name for the data asset table. Values:
        // - **N/A**: No sensitive data identified.
        // - **S1**: Level 1 sensitive data.
        // - **S2**: Level 2 sensitive data.
        // - **S3**: Level 3 sensitive data.
        // - **S4**: Level 4 sensitive data.
        shared_ptr<string> riskLevelName_ {};
        // Number of matched identification models.
        shared_ptr<int32_t> ruleCount_ {};
        // Identification model ID.
        shared_ptr<int64_t> ruleId_ {};
        // Identification model name.
        shared_ptr<string> ruleName_ {};
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
        // Data tag ID. Values:
        // - **101**: Personal sensitive information.
        // - **102**: Personal information.
        // - **107**: General information.
        shared_ptr<int64_t> id_ {};
        // Data tag name. Values:
        // - **Personal sensitive information.**
        // - **Personal information.**
        // - **General information.**
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->categories_ == nullptr
        && this->id_ == nullptr && this->instanceDescription_ == nullptr && this->instanceId_ == nullptr && this->lastModifiedTime_ == nullptr && this->lastScanTime_ == nullptr
        && this->memberAccount_ == nullptr && this->modelTags_ == nullptr && this->name_ == nullptr && this->objectFileCategory_ == nullptr && this->objectType_ == nullptr
        && this->path_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->regionId_ == nullptr && this->regionName_ == nullptr
        && this->ruleList_ == nullptr && this->sensitiveCount_ == nullptr && this->templateId_ == nullptr; };
      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
      inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
      inline Items& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline Items& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


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


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Items& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // List of industry categories for the sensitive data.
      shared_ptr<vector<string>> categories_ {};
      // The unique identifier ID of the data object.
      shared_ptr<string> id_ {};
      // The instance description of the data object.
      shared_ptr<string> instanceDescription_ {};
      // Data asset instance ID.
      shared_ptr<string> instanceId_ {};
      // Latest file modification time, in milliseconds.
      shared_ptr<int64_t> lastModifiedTime_ {};
      // The timestamp of the last scan, in milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // Member account ID.
      shared_ptr<int64_t> memberAccount_ {};
      // List of data tags.
      shared_ptr<vector<Items::ModelTags>> modelTags_ {};
      // The name of the data object.
      shared_ptr<string> name_ {};
      // File category name.
      shared_ptr<string> objectFileCategory_ {};
      // The type of the data object.
      shared_ptr<string> objectType_ {};
      // The path of the data object.
      shared_ptr<string> path_ {};
      // The product name that the data object belongs to. Values:
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
      // The ID corresponding to the product name that the data object belongs to. Values:
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
      // The region ID to which the OSS storage object belongs.
      shared_ptr<string> regionId_ {};
      // Region name.
      shared_ptr<string> regionName_ {};
      // List of matched identification models.
      shared_ptr<vector<Items::RuleList>> ruleList_ {};
      // Number of sensitive data items.
      shared_ptr<int32_t> sensitiveCount_ {};
      // Industry template ID
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataObjectsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataObjectsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataObjectsResponseBody::Items>) };
    inline vector<DescribeDataObjectsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDataObjectsResponseBody::Items>) };
    inline DescribeDataObjectsResponseBody& setItems(const vector<DescribeDataObjectsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataObjectsResponseBody& setItems(vector<DescribeDataObjectsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataObjectsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataObjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataObjectsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // When performing a paginated query, set the current page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // List of data objects.
    shared_ptr<vector<DescribeDataObjectsResponseBody::Items>> items_ {};
    // When performing a paginated query, this sets the maximum number of data asset instances to display per page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of this call request is a unique identifier generated by Alibaba Cloud for the request, which can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // The total number of query results.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
