// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILV2RESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAOBJECTCOLUMNDETAILV2RESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataObjectColumnDetailV2ResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataObjectColumnDetailV2ResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDataObjectColumnDetailV2ResponseBodyItems& obj) { 
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
    DescribeDataObjectColumnDetailV2ResponseBodyItems() = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItems(const DescribeDataObjectColumnDetailV2ResponseBodyItems &) = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItems(DescribeDataObjectColumnDetailV2ResponseBodyItems &&) = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataObjectColumnDetailV2ResponseBodyItems() = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItems& operator=(const DescribeDataObjectColumnDetailV2ResponseBodyItems &) = default ;
    DescribeDataObjectColumnDetailV2ResponseBodyItems& operator=(DescribeDataObjectColumnDetailV2ResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categories_ != nullptr
        && this->columnComment_ != nullptr && this->columnName_ != nullptr && this->dataType_ != nullptr && this->engineType_ != nullptr && this->id_ != nullptr
        && this->instanceName_ != nullptr && this->maskingStatus_ != nullptr && this->modelTags_ != nullptr && this->primaryKey_ != nullptr && this->productId_ != nullptr
        && this->regionId_ != nullptr && this->riskLevelId_ != nullptr && this->riskLevelName_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr
        && this->tableName_ != nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // columnComment Field Functions 
    bool hasColumnComment() const { return this->columnComment_ != nullptr;};
    void deleteColumnComment() { this->columnComment_ = nullptr;};
    inline string columnComment() const { DARABONBA_PTR_GET_DEFAULT(columnComment_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setColumnComment(string columnComment) { DARABONBA_PTR_SET_VALUE(columnComment_, columnComment) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // maskingStatus Field Functions 
    bool hasMaskingStatus() const { return this->maskingStatus_ != nullptr;};
    void deleteMaskingStatus() { this->maskingStatus_ = nullptr;};
    inline int32_t maskingStatus() const { DARABONBA_PTR_GET_DEFAULT(maskingStatus_, 0) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setMaskingStatus(int32_t maskingStatus) { DARABONBA_PTR_SET_VALUE(maskingStatus_, maskingStatus) };


    // modelTags Field Functions 
    bool hasModelTags() const { return this->modelTags_ != nullptr;};
    void deleteModelTags() { this->modelTags_ = nullptr;};
    inline const vector<Models::DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags> & modelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Models::DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags>) };
    inline vector<Models::DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags> modelTags() { DARABONBA_PTR_GET(modelTags_, vector<Models::DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags>) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setModelTags(const vector<Models::DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setModelTags(vector<Models::DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline bool primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeDataObjectColumnDetailV2ResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // List of industry categories for sensitive data.
    std::shared_ptr<vector<string>> categories_ = nullptr;
    // Comment for the column.
    std::shared_ptr<string> columnComment_ = nullptr;
    // Column name.
    std::shared_ptr<string> columnName_ = nullptr;
    // Data type of the column.
    std::shared_ptr<string> dataType_ = nullptr;
    // Engine type. Values:
    // - **MySQL**
    // - **MariaDB**
    // - **Oracle**
    // - **PostgreSQL**
    // - **SQLServer**
    std::shared_ptr<string> engineType_ = nullptr;
    // Unique identifier ID of the data object.
    std::shared_ptr<string> id_ = nullptr;
    // Instance name of the data asset table.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Column encryption status. Values:
    // 
    // - **-1**: Not encrypted
    // 
    // - **1**: Encryption successful
    // 
    // - **2**: Encryption failed
    std::shared_ptr<int32_t> maskingStatus_ = nullptr;
    // List of data tags.
    std::shared_ptr<vector<Models::DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags>> modelTags_ = nullptr;
    // Whether the column is a primary key. Value explanation:
    // 
    // - **true**: Primary key.
    // - **false**: Not a primary key.
    std::shared_ptr<bool> primaryKey_ = nullptr;
    // ID corresponding to the product name of the data object. Values:
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
    std::shared_ptr<int64_t> productId_ = nullptr;
    // Region where the asset is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // Risk level ID. Values:
    // - **1**: N/A: No sensitive data detected.
    // - **2**: S1: Level 1 sensitive data.
    // - **3**: S2: Level 2 sensitive data.
    // - **4**: S3: Level 3 sensitive data.
    // - **5**: S4: Level 4 sensitive data.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // Risk level name. Values:
    // - **N/A**: No sensitive data was identified.
    // - **S1**: Level 1 sensitive data.
    // - **S2**: Level 2 sensitive data.
    // - **S3**: Level 3 sensitive data.
    // - **S4**: Level 4 sensitive data.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The ID of the matched recognition model.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the matched recognition model.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Table name.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
