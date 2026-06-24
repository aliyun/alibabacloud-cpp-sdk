// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILV2RESPONSEBODY_HPP_
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
  class DescribeDataObjectColumnDetailV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectColumnDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectColumnDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataObjectColumnDetailV2ResponseBody() = default ;
    DescribeDataObjectColumnDetailV2ResponseBody(const DescribeDataObjectColumnDetailV2ResponseBody &) = default ;
    DescribeDataObjectColumnDetailV2ResponseBody(DescribeDataObjectColumnDetailV2ResponseBody &&) = default ;
    DescribeDataObjectColumnDetailV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectColumnDetailV2ResponseBody() = default ;
    DescribeDataObjectColumnDetailV2ResponseBody& operator=(const DescribeDataObjectColumnDetailV2ResponseBody &) = default ;
    DescribeDataObjectColumnDetailV2ResponseBody& operator=(DescribeDataObjectColumnDetailV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(ColumnComment, columnComment_);
        DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(EngineType, engineType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(MaskingStatus, maskingStatus_);
        DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(ColumnComment, columnComment_);
        DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(MaskingStatus, maskingStatus_);
        DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
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
        // The ID of the data tag. Valid values:
        // 
        // - **101**: Personal sensitive information
        // 
        // - **102**: Personal information
        // 
        // - **107**: General information
        shared_ptr<int64_t> id_ {};
        // The name of the data tag. Valid values:
        // 
        // - Personal sensitive information
        // 
        // - Personal information
        // 
        // - General information
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->categories_ == nullptr
        && this->columnComment_ == nullptr && this->columnName_ == nullptr && this->dataType_ == nullptr && this->engineType_ == nullptr && this->id_ == nullptr
        && this->instanceName_ == nullptr && this->maskingStatus_ == nullptr && this->modelTags_ == nullptr && this->primaryKey_ == nullptr && this->productId_ == nullptr
        && this->regionId_ == nullptr && this->riskLevelId_ == nullptr && this->riskLevelName_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->tableName_ == nullptr; };
      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
      inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
      inline Items& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline Items& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // columnComment Field Functions 
      bool hasColumnComment() const { return this->columnComment_ != nullptr;};
      void deleteColumnComment() { this->columnComment_ = nullptr;};
      inline string getColumnComment() const { DARABONBA_PTR_GET_DEFAULT(columnComment_, "") };
      inline Items& setColumnComment(string columnComment) { DARABONBA_PTR_SET_VALUE(columnComment_, columnComment) };


      // columnName Field Functions 
      bool hasColumnName() const { return this->columnName_ != nullptr;};
      void deleteColumnName() { this->columnName_ = nullptr;};
      inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
      inline Items& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Items& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Items& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Items& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // maskingStatus Field Functions 
      bool hasMaskingStatus() const { return this->maskingStatus_ != nullptr;};
      void deleteMaskingStatus() { this->maskingStatus_ = nullptr;};
      inline int32_t getMaskingStatus() const { DARABONBA_PTR_GET_DEFAULT(maskingStatus_, 0) };
      inline Items& setMaskingStatus(int32_t maskingStatus) { DARABONBA_PTR_SET_VALUE(maskingStatus_, maskingStatus) };


      // modelTags Field Functions 
      bool hasModelTags() const { return this->modelTags_ != nullptr;};
      void deleteModelTags() { this->modelTags_ = nullptr;};
      inline const vector<Items::ModelTags> & getModelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Items::ModelTags>) };
      inline vector<Items::ModelTags> getModelTags() { DARABONBA_PTR_GET(modelTags_, vector<Items::ModelTags>) };
      inline Items& setModelTags(const vector<Items::ModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
      inline Items& setModelTags(vector<Items::ModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


      // primaryKey Field Functions 
      bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
      void deletePrimaryKey() { this->primaryKey_ = nullptr;};
      inline bool getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
      inline Items& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


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


      // riskLevelId Field Functions 
      bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
      void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
      inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
      inline Items& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      // riskLevelName Field Functions 
      bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
      void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
      inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
      inline Items& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Items& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Items& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The list of industry-specific categories for the sensitive data.
      shared_ptr<vector<string>> categories_ {};
      // The comments on the column.
      shared_ptr<string> columnComment_ {};
      // The name of the column.
      shared_ptr<string> columnName_ {};
      // The data type of the column.
      shared_ptr<string> dataType_ {};
      // The engine type. Valid values:
      // 
      // - **MySQL**.
      // 
      // - **MariaDB**.
      // 
      // - **Oracle**.
      // 
      // - **PostgreSQL**.
      // 
      // - **SQLServer**.
      shared_ptr<string> engineType_ {};
      // The unique ID of the data object.
      shared_ptr<string> id_ {};
      // The name of the instance for the data asset table.
      shared_ptr<string> instanceName_ {};
      // The encryption status of the column. Valid values:
      // 
      // - **-1**: Not encrypted
      // 
      // - **1**: Encrypted
      // 
      // - **2**: Encryption failed
      shared_ptr<int32_t> maskingStatus_ {};
      // The list of data tags.
      shared_ptr<vector<Items::ModelTags>> modelTags_ {};
      // Indicates whether the column is a primary key. Valid values:
      // 
      // - **true**: The column is a primary key.
      // 
      // - **false**: The column is not a primary key.
      shared_ptr<bool> primaryKey_ {};
      // The ID of the product to which the data object belongs. Valid values:
      // 
      // - **1**: MaxCompute
      // 
      // - **2**: OSS
      // 
      // - **3**: ADB-MYSQL
      // 
      // - **4**: Tablestore
      // 
      // - **5**: RDS
      // 
      // - **6**: SELF_DB
      // 
      // - **7**: PolarDB-X
      // 
      // - **8**: PolarDB
      // 
      // - **9**: ADB-PG
      // 
      // - **10**: OceanBase
      // 
      // - **11**: MongoDB
      // 
      // - **25**: Redis
      shared_ptr<int64_t> productId_ {};
      // The region where the asset resides.
      shared_ptr<string> regionId_ {};
      // The ID of the sensitivity level. Valid values:
      // 
      // - **1**: N/A: No sensitive data is detected.
      // 
      // - **2**: S1: level-1 sensitive data.
      // 
      // - **3**: S2: level-2 sensitive data.
      // 
      // - **4**: S3: level-3 sensitive data.
      // 
      // - **5**: S4: level-4 sensitive data.
      shared_ptr<int64_t> riskLevelId_ {};
      // The name of the sensitivity level. Valid values:
      // 
      // - **N/A**: No sensitive data is detected.
      // 
      // - **S1**: level-1 sensitive data.
      // 
      // - **S2**: level-2 sensitive data.
      // 
      // - **S3**: level-3 sensitive data.
      // 
      // - **S4**: level-4 sensitive data.
      shared_ptr<string> riskLevelName_ {};
      // The ID of the hit detection model.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the hit detection model.
      shared_ptr<string> ruleName_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataObjectColumnDetailV2ResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataObjectColumnDetailV2ResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataObjectColumnDetailV2ResponseBody::Items>) };
    inline vector<DescribeDataObjectColumnDetailV2ResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDataObjectColumnDetailV2ResponseBody::Items>) };
    inline DescribeDataObjectColumnDetailV2ResponseBody& setItems(const vector<DescribeDataObjectColumnDetailV2ResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataObjectColumnDetailV2ResponseBody& setItems(vector<DescribeDataObjectColumnDetailV2ResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataObjectColumnDetailV2ResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataObjectColumnDetailV2ResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The list of detection results for the columns in the data table.
    shared_ptr<vector<DescribeDataObjectColumnDetailV2ResponseBody::Items>> items_ {};
    // The number of entries returned per page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
