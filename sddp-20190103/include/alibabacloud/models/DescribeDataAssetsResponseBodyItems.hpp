// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAASSETSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAASSETSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataAssetsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAssetsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Acl, acl_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Labelsec, labelsec_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(OdpsRiskLevelName, odpsRiskLevelName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(Protection, protection_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
      DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_TO_JSON(SensitiveRatio, sensitiveRatio_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAssetsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Acl, acl_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Labelsec, labelsec_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(OdpsRiskLevelName, odpsRiskLevelName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(Protection, protection_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
      DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveRatio, sensitiveRatio_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataAssetsResponseBodyItems() = default ;
    DescribeDataAssetsResponseBodyItems(const DescribeDataAssetsResponseBodyItems &) = default ;
    DescribeDataAssetsResponseBodyItems(DescribeDataAssetsResponseBodyItems &&) = default ;
    DescribeDataAssetsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAssetsResponseBodyItems() = default ;
    DescribeDataAssetsResponseBodyItems& operator=(const DescribeDataAssetsResponseBodyItems &) = default ;
    DescribeDataAssetsResponseBodyItems& operator=(DescribeDataAssetsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && return this->creationTime_ == nullptr && return this->dataType_ == nullptr && return this->id_ == nullptr && return this->labelsec_ == nullptr && return this->name_ == nullptr
        && return this->objectKey_ == nullptr && return this->odpsRiskLevelName_ == nullptr && return this->owner_ == nullptr && return this->productCode_ == nullptr && return this->productId_ == nullptr
        && return this->protection_ == nullptr && return this->riskLevelId_ == nullptr && return this->riskLevelName_ == nullptr && return this->ruleName_ == nullptr && return this->sensitive_ == nullptr
        && return this->sensitiveCount_ == nullptr && return this->sensitiveRatio_ == nullptr && return this->totalCount_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string acl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline DescribeDataAssetsResponseBodyItems& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline DescribeDataAssetsResponseBodyItems& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeDataAssetsResponseBodyItems& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDataAssetsResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // labelsec Field Functions 
    bool hasLabelsec() const { return this->labelsec_ != nullptr;};
    void deleteLabelsec() { this->labelsec_ = nullptr;};
    inline bool labelsec() const { DARABONBA_PTR_GET_DEFAULT(labelsec_, false) };
    inline DescribeDataAssetsResponseBodyItems& setLabelsec(bool labelsec) { DARABONBA_PTR_SET_VALUE(labelsec_, labelsec) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataAssetsResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string objectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline DescribeDataAssetsResponseBodyItems& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // odpsRiskLevelName Field Functions 
    bool hasOdpsRiskLevelName() const { return this->odpsRiskLevelName_ != nullptr;};
    void deleteOdpsRiskLevelName() { this->odpsRiskLevelName_ = nullptr;};
    inline string odpsRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelName_, "") };
    inline DescribeDataAssetsResponseBodyItems& setOdpsRiskLevelName(string odpsRiskLevelName) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelName_, odpsRiskLevelName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeDataAssetsResponseBodyItems& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeDataAssetsResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DescribeDataAssetsResponseBodyItems& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // protection Field Functions 
    bool hasProtection() const { return this->protection_ != nullptr;};
    void deleteProtection() { this->protection_ = nullptr;};
    inline bool protection() const { DARABONBA_PTR_GET_DEFAULT(protection_, false) };
    inline DescribeDataAssetsResponseBodyItems& setProtection(bool protection) { DARABONBA_PTR_SET_VALUE(protection_, protection) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeDataAssetsResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeDataAssetsResponseBodyItems& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDataAssetsResponseBodyItems& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline DescribeDataAssetsResponseBodyItems& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


    // sensitiveCount Field Functions 
    bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
    void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
    inline int32_t sensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
    inline DescribeDataAssetsResponseBodyItems& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


    // sensitiveRatio Field Functions 
    bool hasSensitiveRatio() const { return this->sensitiveRatio_ != nullptr;};
    void deleteSensitiveRatio() { this->sensitiveRatio_ = nullptr;};
    inline string sensitiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sensitiveRatio_, "") };
    inline DescribeDataAssetsResponseBodyItems& setSensitiveRatio(string sensitiveRatio) { DARABONBA_PTR_SET_VALUE(sensitiveRatio_, sensitiveRatio) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataAssetsResponseBodyItems& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The access control list (ACL) that controls the access permissions on the OSS bucket.
    // 
    // > This parameter is returned only when you set the parameter **RangeId** to **21**.
    std::shared_ptr<string> acl_ = nullptr;
    // The time when the data asset was created. Unit: milliseconds.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The data type of the data asset.
    std::shared_ptr<string> dataType_ = nullptr;
    // The ID of the data asset.
    std::shared_ptr<string> id_ = nullptr;
    // The sensitivity tag of the data. The value is fixed as **0**. **0**, **1**, **2**, or **3** is returned for this parameter only when you set the parameter **RangeId** to **1**.
    // 
    // *   **0**: unclassified
    // *   **1**: confidential
    // *   **2**: sensitive
    // *   **3**: highly sensitive
    std::shared_ptr<bool> labelsec_ = nullptr;
    // The name of the data asset.
    std::shared_ptr<string> name_ = nullptr;
    // The key value of the OSS object.
    // 
    // > This parameter is returned only when you set the parameter **RangeId** to **22**.
    std::shared_ptr<string> objectKey_ = nullptr;
    // The sensitivity level of the MaxCompute data asset. Valid values:
    // 
    // *   **S1**: low sensitivity level
    // *   **S2**: medium sensitivity level
    // *   **S3**: high sensitivity level
    // *   **S4**: highest sensitivity level
    // 
    // > This parameter is returned only when you set the parameter **RangeId** to **1**.
    std::shared_ptr<string> odpsRiskLevelName_ = nullptr;
    // The account that owns the data asset.
    std::shared_ptr<string> owner_ = nullptr;
    // The name of the service to which the data asset belongs.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the service to which the data asset belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: OSS
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore
    // *   **5**: ApsaraDB RDS
    std::shared_ptr<string> productId_ = nullptr;
    // Indicates whether the data protection mechanism is enabled for the data asset. The value is fixed as **false**. **true** or **false** is returned for this parameter only when you set the parameter **RangeId** to **1**.
    // 
    // *   **false**: The data protection mechanism is disabled.
    // *   **true**: The data protection mechanism is enabled. Only data inbound is supported. Data outbound is not supported.
    std::shared_ptr<bool> protection_ = nullptr;
    // The sensitivity level of the data asset. A higher sensitivity level indicates that the identified data is more sensitive. Valid values:
    // 
    // *   **1**: No sensitive data is identified.
    // *   **2**: sensitive data at level 1.
    // *   **3**: sensitive data at level 2.
    // *   **3**: sensitive data at level 3.
    // *   **5**: sensitive data at level 4.
    // *   **6**: sensitive data at level 5.
    // *   **7**: sensitive data at level 6.
    // *   **8**: sensitive data at level 7.
    // *   **9**: sensitive data at level 8.
    // *   **10**: sensitive data at level 9.
    // *   **11**: sensitive data at level 10.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The name of the sensitivity level for the data asset.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The name of the sensitive data detection rule that the data asset hits.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Indicates whether the data asset contains sensitive data. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> sensitive_ = nullptr;
    // The total number of sensitive data assets. For example, the value can be the total number of sensitive MaxCompute projects, packages, or tables, the total number of sensitive ApsaraDB RDS databases or tables, or the total number of sensitive OSS buckets or objects.
    std::shared_ptr<int32_t> sensitiveCount_ = nullptr;
    // The percentage of sensitive data in all data assets.
    std::shared_ptr<string> sensitiveRatio_ = nullptr;
    // The total number of data assets. For example, the value can be the total number of MaxCompute projects, packages, or tables, the total number of ApsaraDB RDS databases or tables, or the total number of OSS buckets or objects.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
