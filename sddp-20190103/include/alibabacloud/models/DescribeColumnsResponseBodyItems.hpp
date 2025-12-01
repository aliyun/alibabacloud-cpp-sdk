// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeColumnsResponseBodyItemsModelTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeColumnsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MaskingStatus, maskingStatus_);
      DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OdpsRiskLevelName, odpsRiskLevelName_);
      DARABONBA_PTR_TO_JSON(OdpsRiskLevelValue, odpsRiskLevelValue_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RevisionId, revisionId_);
      DARABONBA_PTR_TO_JSON(RevisionStatus, revisionStatus_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SensLevelName, sensLevelName_);
      DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MaskingStatus, maskingStatus_);
      DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OdpsRiskLevelName, odpsRiskLevelName_);
      DARABONBA_PTR_FROM_JSON(OdpsRiskLevelValue, odpsRiskLevelValue_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RevisionId, revisionId_);
      DARABONBA_PTR_FROM_JSON(RevisionStatus, revisionStatus_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SensLevelName, sensLevelName_);
      DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeColumnsResponseBodyItems() = default ;
    DescribeColumnsResponseBodyItems(const DescribeColumnsResponseBodyItems &) = default ;
    DescribeColumnsResponseBodyItems(DescribeColumnsResponseBodyItems &&) = default ;
    DescribeColumnsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnsResponseBodyItems() = default ;
    DescribeColumnsResponseBodyItems& operator=(const DescribeColumnsResponseBodyItems &) = default ;
    DescribeColumnsResponseBodyItems& operator=(DescribeColumnsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->dataType_ == nullptr && return this->engineType_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->maskingStatus_ == nullptr && return this->modelTags_ == nullptr && return this->name_ == nullptr && return this->odpsRiskLevelName_ == nullptr && return this->odpsRiskLevelValue_ == nullptr
        && return this->productCode_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr && return this->revisionId_ == nullptr && return this->revisionStatus_ == nullptr
        && return this->riskLevelId_ == nullptr && return this->riskLevelName_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->sensLevelName_ == nullptr
        && return this->sensitive_ == nullptr && return this->tableId_ == nullptr && return this->tableName_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline DescribeColumnsResponseBodyItems& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeColumnsResponseBodyItems& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeColumnsResponseBodyItems& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeColumnsResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeColumnsResponseBodyItems& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeColumnsResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // maskingStatus Field Functions 
    bool hasMaskingStatus() const { return this->maskingStatus_ != nullptr;};
    void deleteMaskingStatus() { this->maskingStatus_ = nullptr;};
    inline int32_t maskingStatus() const { DARABONBA_PTR_GET_DEFAULT(maskingStatus_, 0) };
    inline DescribeColumnsResponseBodyItems& setMaskingStatus(int32_t maskingStatus) { DARABONBA_PTR_SET_VALUE(maskingStatus_, maskingStatus) };


    // modelTags Field Functions 
    bool hasModelTags() const { return this->modelTags_ != nullptr;};
    void deleteModelTags() { this->modelTags_ = nullptr;};
    inline const vector<Models::DescribeColumnsResponseBodyItemsModelTags> & modelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Models::DescribeColumnsResponseBodyItemsModelTags>) };
    inline vector<Models::DescribeColumnsResponseBodyItemsModelTags> modelTags() { DARABONBA_PTR_GET(modelTags_, vector<Models::DescribeColumnsResponseBodyItemsModelTags>) };
    inline DescribeColumnsResponseBodyItems& setModelTags(const vector<Models::DescribeColumnsResponseBodyItemsModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
    inline DescribeColumnsResponseBodyItems& setModelTags(vector<Models::DescribeColumnsResponseBodyItemsModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeColumnsResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // odpsRiskLevelName Field Functions 
    bool hasOdpsRiskLevelName() const { return this->odpsRiskLevelName_ != nullptr;};
    void deleteOdpsRiskLevelName() { this->odpsRiskLevelName_ = nullptr;};
    inline string odpsRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelName_, "") };
    inline DescribeColumnsResponseBodyItems& setOdpsRiskLevelName(string odpsRiskLevelName) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelName_, odpsRiskLevelName) };


    // odpsRiskLevelValue Field Functions 
    bool hasOdpsRiskLevelValue() const { return this->odpsRiskLevelValue_ != nullptr;};
    void deleteOdpsRiskLevelValue() { this->odpsRiskLevelValue_ = nullptr;};
    inline int32_t odpsRiskLevelValue() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelValue_, 0) };
    inline DescribeColumnsResponseBodyItems& setOdpsRiskLevelValue(int32_t odpsRiskLevelValue) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelValue_, odpsRiskLevelValue) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeColumnsResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeColumnsResponseBodyItems& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeColumnsResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // revisionId Field Functions 
    bool hasRevisionId() const { return this->revisionId_ != nullptr;};
    void deleteRevisionId() { this->revisionId_ = nullptr;};
    inline int64_t revisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, 0L) };
    inline DescribeColumnsResponseBodyItems& setRevisionId(int64_t revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


    // revisionStatus Field Functions 
    bool hasRevisionStatus() const { return this->revisionStatus_ != nullptr;};
    void deleteRevisionStatus() { this->revisionStatus_ = nullptr;};
    inline int64_t revisionStatus() const { DARABONBA_PTR_GET_DEFAULT(revisionStatus_, 0L) };
    inline DescribeColumnsResponseBodyItems& setRevisionStatus(int64_t revisionStatus) { DARABONBA_PTR_SET_VALUE(revisionStatus_, revisionStatus) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeColumnsResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeColumnsResponseBodyItems& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeColumnsResponseBodyItems& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeColumnsResponseBodyItems& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensLevelName Field Functions 
    bool hasSensLevelName() const { return this->sensLevelName_ != nullptr;};
    void deleteSensLevelName() { this->sensLevelName_ = nullptr;};
    inline string sensLevelName() const { DARABONBA_PTR_GET_DEFAULT(sensLevelName_, "") };
    inline DescribeColumnsResponseBodyItems& setSensLevelName(string sensLevelName) { DARABONBA_PTR_SET_VALUE(sensLevelName_, sensLevelName) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline DescribeColumnsResponseBodyItems& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline DescribeColumnsResponseBodyItems& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeColumnsResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The time when the data in the column of the table is created. Unit: milliseconds.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The type of data in the column of the table.
    std::shared_ptr<string> dataType_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> engineType_ = nullptr;
    // The ID of the column of the table.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the instance to which data in the column of the table belongs.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the instance to which data in the column of the table belongs.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The column encryption status. Valid values:
    // 
    // *   **-1**: unencrypted
    // *   **1**: encrypted
    // *   **2**: encryption failed
    std::shared_ptr<int32_t> maskingStatus_ = nullptr;
    // A list of tags for data that hits the recognition model.
    std::shared_ptr<vector<Models::DescribeColumnsResponseBodyItemsModelTags>> modelTags_ = nullptr;
    // The name of the column of the table.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the sensitivity level for asset. Valid values:
    // 
    // *   **N/A**: indicates that no sensitive data is detected.
    // *   **S1**: indicates the low sensitivity level.
    // *   **S2**: indicates the medium sensitivity level.
    // *   **S3**: indicates the high sensitivity level.
    // *   **S4**: indicates the highest sensitivity level.
    std::shared_ptr<string> odpsRiskLevelName_ = nullptr;
    // The ID of the sensitivity level of the asset. Valid values:
    // 
    // *   **1**: N/A
    // *   **2**: S1
    // *   **3**: S2
    // *   **4**: S3
    // *   **5**: S4
    std::shared_ptr<int32_t> odpsRiskLevelValue_ = nullptr;
    // The name of the service to which data in the column of the table belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the service to which the data object belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: Object Storage Service (OSS)
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore (OTS)
    // *   **5**: ApsaraDB RDS
    // *   **6**: self-managed database
    // *   **7**: PolarDB for Xscale (PolarDB-X)
    // *   **8**: PolarDB
    // *   **9**: AnalyticDB for PostgreSQL
    // *   **10**: ApsaraDB for OceanBase
    // *   **11**: ApsaraDB for MongoDB
    // *   **25**: ApsaraDB for Redis
    std::shared_ptr<int64_t> productId_ = nullptr;
    // The region in which the asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the revision record.
    std::shared_ptr<int64_t> revisionId_ = nullptr;
    // Indicates whether the column is revised. Valid values:
    // 
    // *   1: yes
    // *   0: no
    std::shared_ptr<int64_t> revisionStatus_ = nullptr;
    // The ID of the sensitivity level of data in the column of the table. Valid values:
    // 
    // *   **1**: N/A
    // *   **2**: S1
    // *   **3**: S2
    // *   **4**: S3
    // *   **5**: S4
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The name of the sensitivity level for data in the column of the table. Valid values:
    // 
    // *   **N/A**: indicates that no sensitive data is detected.
    // *   **S1**: indicates the low sensitivity level.
    // *   **S2**: indicates the medium sensitivity level.
    // *   **S3**: indicates the high sensitivity level.
    // *   **S4**: indicates the highest sensitivity level.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The ID of the sensitive data detection rule that data in the column of the table hits.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the sensitive data detection rule that data in the column of the table hits.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The name of the sensitivity level. Valid values:
    // 
    // *   **N/A**: indicates that no sensitive data is detected.
    // *   **S1**: indicates the low sensitivity level.
    // *   **S2**: indicates the medium sensitivity level.
    // *   **S3**: indicates the high sensitivity level.
    // *   **S4**: indicates the highest sensitivity level.
    std::shared_ptr<string> sensLevelName_ = nullptr;
    // Indicates whether the column contains sensitive data. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> sensitive_ = nullptr;
    // The ID of the table.
    std::shared_ptr<int64_t> tableId_ = nullptr;
    // The name of the table to which the revised column belongs.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
