// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNSV2RESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNSV2RESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeColumnsV2ResponseBodyItemsModelTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeColumnsV2ResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnsV2ResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeColumnsV2ResponseBodyItems& obj) { 
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
    DescribeColumnsV2ResponseBodyItems() = default ;
    DescribeColumnsV2ResponseBodyItems(const DescribeColumnsV2ResponseBodyItems &) = default ;
    DescribeColumnsV2ResponseBodyItems(DescribeColumnsV2ResponseBodyItems &&) = default ;
    DescribeColumnsV2ResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnsV2ResponseBodyItems() = default ;
    DescribeColumnsV2ResponseBodyItems& operator=(const DescribeColumnsV2ResponseBodyItems &) = default ;
    DescribeColumnsV2ResponseBodyItems& operator=(DescribeColumnsV2ResponseBodyItems &&) = default ;
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
    inline DescribeColumnsV2ResponseBodyItems& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeColumnsV2ResponseBodyItems& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // maskingStatus Field Functions 
    bool hasMaskingStatus() const { return this->maskingStatus_ != nullptr;};
    void deleteMaskingStatus() { this->maskingStatus_ = nullptr;};
    inline int32_t maskingStatus() const { DARABONBA_PTR_GET_DEFAULT(maskingStatus_, 0) };
    inline DescribeColumnsV2ResponseBodyItems& setMaskingStatus(int32_t maskingStatus) { DARABONBA_PTR_SET_VALUE(maskingStatus_, maskingStatus) };


    // modelTags Field Functions 
    bool hasModelTags() const { return this->modelTags_ != nullptr;};
    void deleteModelTags() { this->modelTags_ = nullptr;};
    inline const vector<Models::DescribeColumnsV2ResponseBodyItemsModelTags> & modelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Models::DescribeColumnsV2ResponseBodyItemsModelTags>) };
    inline vector<Models::DescribeColumnsV2ResponseBodyItemsModelTags> modelTags() { DARABONBA_PTR_GET(modelTags_, vector<Models::DescribeColumnsV2ResponseBodyItemsModelTags>) };
    inline DescribeColumnsV2ResponseBodyItems& setModelTags(const vector<Models::DescribeColumnsV2ResponseBodyItemsModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
    inline DescribeColumnsV2ResponseBodyItems& setModelTags(vector<Models::DescribeColumnsV2ResponseBodyItemsModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // odpsRiskLevelName Field Functions 
    bool hasOdpsRiskLevelName() const { return this->odpsRiskLevelName_ != nullptr;};
    void deleteOdpsRiskLevelName() { this->odpsRiskLevelName_ = nullptr;};
    inline string odpsRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelName_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setOdpsRiskLevelName(string odpsRiskLevelName) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelName_, odpsRiskLevelName) };


    // odpsRiskLevelValue Field Functions 
    bool hasOdpsRiskLevelValue() const { return this->odpsRiskLevelValue_ != nullptr;};
    void deleteOdpsRiskLevelValue() { this->odpsRiskLevelValue_ = nullptr;};
    inline int32_t odpsRiskLevelValue() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelValue_, 0) };
    inline DescribeColumnsV2ResponseBodyItems& setOdpsRiskLevelValue(int32_t odpsRiskLevelValue) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelValue_, odpsRiskLevelValue) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeColumnsV2ResponseBodyItems& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // revisionId Field Functions 
    bool hasRevisionId() const { return this->revisionId_ != nullptr;};
    void deleteRevisionId() { this->revisionId_ = nullptr;};
    inline int64_t revisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, 0L) };
    inline DescribeColumnsV2ResponseBodyItems& setRevisionId(int64_t revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


    // revisionStatus Field Functions 
    bool hasRevisionStatus() const { return this->revisionStatus_ != nullptr;};
    void deleteRevisionStatus() { this->revisionStatus_ = nullptr;};
    inline int64_t revisionStatus() const { DARABONBA_PTR_GET_DEFAULT(revisionStatus_, 0L) };
    inline DescribeColumnsV2ResponseBodyItems& setRevisionStatus(int64_t revisionStatus) { DARABONBA_PTR_SET_VALUE(revisionStatus_, revisionStatus) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeColumnsV2ResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeColumnsV2ResponseBodyItems& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensLevelName Field Functions 
    bool hasSensLevelName() const { return this->sensLevelName_ != nullptr;};
    void deleteSensLevelName() { this->sensLevelName_ = nullptr;};
    inline string sensLevelName() const { DARABONBA_PTR_GET_DEFAULT(sensLevelName_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setSensLevelName(string sensLevelName) { DARABONBA_PTR_SET_VALUE(sensLevelName_, sensLevelName) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline DescribeColumnsV2ResponseBodyItems& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline DescribeColumnsV2ResponseBodyItems& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeColumnsV2ResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The creation time of the column data in the data asset table, in milliseconds.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The data type of the column data in the data asset table.
    std::shared_ptr<string> dataType_ = nullptr;
    // Engine type. Values:
    // - **MySQL**
    // - **MariaDB**
    // - **Oracle**
    // - **PostgreSQL**
    // - **SQLServer**
    std::shared_ptr<string> engineType_ = nullptr;
    // The unique identifier ID of the column in the data asset table.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the asset instance to which the column data in the data asset table belongs.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the asset instance to which the column data in the data asset table belongs.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Column encryption status. Values:
    // 
    // - **-1**: Not encrypted
    // 
    // - **1**: Encryption successful
    // 
    // - **2**: Encryption failed
    std::shared_ptr<int32_t> maskingStatus_ = nullptr;
    // Data tag list.
    std::shared_ptr<vector<Models::DescribeColumnsV2ResponseBodyItemsModelTags>> modelTags_ = nullptr;
    // The name of the column in the data asset table.
    std::shared_ptr<string> name_ = nullptr;
    // The risk level name of the asset. Values:
    // - **N/A**: No sensitive data detected.
    // - **S1**: Level 1 sensitive data.
    // - **S2**: Level 2 sensitive data.
    // - **S3**: Level 3 sensitive data.
    // - **S4**: Level 4 sensitive data.
    std::shared_ptr<string> odpsRiskLevelName_ = nullptr;
    // The risk level code of the asset. Values:
    // 
    // - **1**: N/A.
    // - **2**: S1.
    // - **3**: S2.
    // - **4**: S3.
    // - **5**: S4.
    // 
    // > A return value <= 1 represents N/A.
    std::shared_ptr<int32_t> odpsRiskLevelValue_ = nullptr;
    // The product name to which the column data in the data asset table belongs. Values: **MaxCompute, OSS, ADS, OTS, RDS**, etc.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID corresponding to the product name of the data asset. Values:
    // - **1**: MaxCompute
    // - **2**: OSS
    // - **3**: ADS
    // - **4**: OTS
    // - **5**: RDS
    // - **6**: SELF_DB
    std::shared_ptr<int64_t> productId_ = nullptr;
    // The region where the asset is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // Correction record ID.
    std::shared_ptr<int64_t> revisionId_ = nullptr;
    // Correction status. Values:
    // - 1: Corrected.
    // - 0: Not corrected.
    std::shared_ptr<int64_t> revisionStatus_ = nullptr;
    // The risk level ID of the column data in the data asset table. Values:
    // - **1**: N/A.
    // - **2**: S1.
    // - **3**: S2.
    // - **4**: S3.
    // - **5**: S4.
    // 
    // > A return value <= 1 represents N/A.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The risk level name of the column data in the data asset table. Values:
    // - **N/A**: No sensitive data detected.
    // - **S1**: Level 1 sensitive data.
    // - **S2**: Level 2 sensitive data.
    // - **S3**: Level 3 sensitive data.
    // - **S4**: Level 4 sensitive data.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The ID of the sensitive data recognition rule that the column data in the data asset table hits.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the sensitive data recognition rule that the column data in the data asset table hits.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The sensitivity level name. Values:
    // - **N/A**: No sensitive data detected.
    // - **S1**: Level 1 sensitive data.
    // - **S2**: Level 2 sensitive data.
    // - **S3**: Level 3 sensitive data.
    // - **S4**: Level 4 sensitive data.
    std::shared_ptr<string> sensLevelName_ = nullptr;
    // Whether the column data in the data asset table contains sensitive data. Values:
    // 
    // - true: The column data in the data asset table contains sensitive data.
    // - false: The column data in the data asset table does not contain sensitive data.
    std::shared_ptr<bool> sensitive_ = nullptr;
    // The ID of the asset table to which the column data in the data asset table belongs.
    std::shared_ptr<int64_t> tableId_ = nullptr;
    // The name of the table to which the target column for correction belongs.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
