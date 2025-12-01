// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTablesResponseBodyItemsRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeTablesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
      DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_TO_JSON(SensitiveRatio, sensitiveRatio_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
      DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveRatio, sensitiveRatio_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTablesResponseBodyItems() = default ;
    DescribeTablesResponseBodyItems(const DescribeTablesResponseBodyItems &) = default ;
    DescribeTablesResponseBodyItems(DescribeTablesResponseBodyItems &&) = default ;
    DescribeTablesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablesResponseBodyItems() = default ;
    DescribeTablesResponseBodyItems& operator=(const DescribeTablesResponseBodyItems &) = default ;
    DescribeTablesResponseBodyItems& operator=(DescribeTablesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->id_ == nullptr && return this->instanceDescription_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->name_ == nullptr
        && return this->owner_ == nullptr && return this->productCode_ == nullptr && return this->productId_ == nullptr && return this->riskLevelId_ == nullptr && return this->riskLevelName_ == nullptr
        && return this->ruleList_ == nullptr && return this->sensitive_ == nullptr && return this->sensitiveCount_ == nullptr && return this->sensitiveRatio_ == nullptr && return this->tenantName_ == nullptr
        && return this->totalCount_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline DescribeTablesResponseBodyItems& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeTablesResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline DescribeTablesResponseBodyItems& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeTablesResponseBodyItems& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeTablesResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTablesResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeTablesResponseBodyItems& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeTablesResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DescribeTablesResponseBodyItems& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeTablesResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeTablesResponseBodyItems& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::DescribeTablesResponseBodyItemsRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::DescribeTablesResponseBodyItemsRuleList>) };
    inline vector<Models::DescribeTablesResponseBodyItemsRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::DescribeTablesResponseBodyItemsRuleList>) };
    inline DescribeTablesResponseBodyItems& setRuleList(const vector<Models::DescribeTablesResponseBodyItemsRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeTablesResponseBodyItems& setRuleList(vector<Models::DescribeTablesResponseBodyItemsRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline DescribeTablesResponseBodyItems& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


    // sensitiveCount Field Functions 
    bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
    void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
    inline int32_t sensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
    inline DescribeTablesResponseBodyItems& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


    // sensitiveRatio Field Functions 
    bool hasSensitiveRatio() const { return this->sensitiveRatio_ != nullptr;};
    void deleteSensitiveRatio() { this->sensitiveRatio_ = nullptr;};
    inline string sensitiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sensitiveRatio_, "") };
    inline DescribeTablesResponseBodyItems& setSensitiveRatio(string sensitiveRatio) { DARABONBA_PTR_SET_VALUE(sensitiveRatio_, sensitiveRatio) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string tenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline DescribeTablesResponseBodyItems& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTablesResponseBodyItems& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The point in time when the table was created. Unit: milliseconds.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The ID of the table.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The description of the data asset.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // The ID of the data asset to which the table belongs.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the data asset to which the table belongs.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> name_ = nullptr;
    // The Alibaba Cloud account to which the table belongs.
    std::shared_ptr<string> owner_ = nullptr;
    // The name of the service to which the table belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**. For more information about the types of data assets from which DSC can scan for sensitive data, see [Supported data assets](https://help.aliyun.com/document_detail/212906.html).
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the service to which the table belongs.
    std::shared_ptr<string> productId_ = nullptr;
    // The sensitivity level of the table. Each sensitivity level ID corresponds to a sensitivity level name. Valid values:
    // 
    // *   **1**: N/A, which indicates that no sensitive data is detected.
    // *   **2**: S1, which indicates the low sensitivity level.
    // *   **3**: S2, which indicates the medium sensitivity level.
    // *   **4**: S3, which indicates the high sensitivity level.
    // *   **5**: S4, which indicates the highest sensitivity level.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The name of the sensitivity level for the table. Valid values:
    // 
    // *   **N/A**: indicates that no sensitive data is detected.
    // *   **S1**: indicates the low sensitivity level.
    // *   **S2**: indicates the medium sensitivity level.
    // *   **S3**: indicates the high sensitivity level.
    // *   **S4**: indicates the highest sensitivity level.
    std::shared_ptr<string> riskLevelName_ = nullptr;
    // The information about the sensitive data detection rules that are hit.
    std::shared_ptr<vector<Models::DescribeTablesResponseBodyItemsRuleList>> ruleList_ = nullptr;
    // Indicates whether the table contains sensitive fields. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> sensitive_ = nullptr;
    // The total number of sensitive fields in the table.
    std::shared_ptr<int32_t> sensitiveCount_ = nullptr;
    // The percentage of sensitive fields in the table.
    std::shared_ptr<string> sensitiveRatio_ = nullptr;
    // The name of the tenant.
    std::shared_ptr<string> tenantName_ = nullptr;
    // The total number of fields in the table.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
