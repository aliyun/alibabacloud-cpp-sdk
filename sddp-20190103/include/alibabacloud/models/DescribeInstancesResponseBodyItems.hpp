// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyItemsModelTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeInstancesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DepartName, departName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(Labelsec, labelsec_);
      DARABONBA_PTR_TO_JSON(LastFinishTime, lastFinishTime_);
      DARABONBA_PTR_TO_JSON(MemberAliUid, memberAliUid_);
      DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_TO_JSON(Name, name_);
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
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DepartName, departName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(Labelsec, labelsec_);
      DARABONBA_PTR_FROM_JSON(LastFinishTime, lastFinishTime_);
      DARABONBA_PTR_FROM_JSON(MemberAliUid, memberAliUid_);
      DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
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
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesResponseBodyItems() = default ;
    DescribeInstancesResponseBodyItems(const DescribeInstancesResponseBodyItems &) = default ;
    DescribeInstancesResponseBodyItems(DescribeInstancesResponseBodyItems &&) = default ;
    DescribeInstancesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyItems() = default ;
    DescribeInstancesResponseBodyItems& operator=(const DescribeInstancesResponseBodyItems &) = default ;
    DescribeInstancesResponseBodyItems& operator=(DescribeInstancesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->departName_ == nullptr && return this->id_ == nullptr && return this->instanceDescription_ == nullptr && return this->labelsec_ == nullptr && return this->lastFinishTime_ == nullptr
        && return this->memberAliUid_ == nullptr && return this->modelTags_ == nullptr && return this->name_ == nullptr && return this->odpsRiskLevelName_ == nullptr && return this->owner_ == nullptr
        && return this->productCode_ == nullptr && return this->productId_ == nullptr && return this->protection_ == nullptr && return this->riskLevelId_ == nullptr && return this->riskLevelName_ == nullptr
        && return this->ruleName_ == nullptr && return this->sensitive_ == nullptr && return this->sensitiveCount_ == nullptr && return this->tenantName_ == nullptr && return this->totalCount_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline DescribeInstancesResponseBodyItems& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline DescribeInstancesResponseBodyItems& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeInstancesResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline DescribeInstancesResponseBodyItems& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // labelsec Field Functions 
    bool hasLabelsec() const { return this->labelsec_ != nullptr;};
    void deleteLabelsec() { this->labelsec_ = nullptr;};
    inline bool labelsec() const { DARABONBA_PTR_GET_DEFAULT(labelsec_, false) };
    inline DescribeInstancesResponseBodyItems& setLabelsec(bool labelsec) { DARABONBA_PTR_SET_VALUE(labelsec_, labelsec) };


    // lastFinishTime Field Functions 
    bool hasLastFinishTime() const { return this->lastFinishTime_ != nullptr;};
    void deleteLastFinishTime() { this->lastFinishTime_ = nullptr;};
    inline int64_t lastFinishTime() const { DARABONBA_PTR_GET_DEFAULT(lastFinishTime_, 0L) };
    inline DescribeInstancesResponseBodyItems& setLastFinishTime(int64_t lastFinishTime) { DARABONBA_PTR_SET_VALUE(lastFinishTime_, lastFinishTime) };


    // memberAliUid Field Functions 
    bool hasMemberAliUid() const { return this->memberAliUid_ != nullptr;};
    void deleteMemberAliUid() { this->memberAliUid_ = nullptr;};
    inline string memberAliUid() const { DARABONBA_PTR_GET_DEFAULT(memberAliUid_, "") };
    inline DescribeInstancesResponseBodyItems& setMemberAliUid(string memberAliUid) { DARABONBA_PTR_SET_VALUE(memberAliUid_, memberAliUid) };


    // modelTags Field Functions 
    bool hasModelTags() const { return this->modelTags_ != nullptr;};
    void deleteModelTags() { this->modelTags_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyItemsModelTags> & modelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Models::DescribeInstancesResponseBodyItemsModelTags>) };
    inline vector<Models::DescribeInstancesResponseBodyItemsModelTags> modelTags() { DARABONBA_PTR_GET(modelTags_, vector<Models::DescribeInstancesResponseBodyItemsModelTags>) };
    inline DescribeInstancesResponseBodyItems& setModelTags(const vector<Models::DescribeInstancesResponseBodyItemsModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
    inline DescribeInstancesResponseBodyItems& setModelTags(vector<Models::DescribeInstancesResponseBodyItemsModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstancesResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // odpsRiskLevelName Field Functions 
    bool hasOdpsRiskLevelName() const { return this->odpsRiskLevelName_ != nullptr;};
    void deleteOdpsRiskLevelName() { this->odpsRiskLevelName_ = nullptr;};
    inline string odpsRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelName_, "") };
    inline DescribeInstancesResponseBodyItems& setOdpsRiskLevelName(string odpsRiskLevelName) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelName_, odpsRiskLevelName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeInstancesResponseBodyItems& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstancesResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DescribeInstancesResponseBodyItems& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // protection Field Functions 
    bool hasProtection() const { return this->protection_ != nullptr;};
    void deleteProtection() { this->protection_ = nullptr;};
    inline bool protection() const { DARABONBA_PTR_GET_DEFAULT(protection_, false) };
    inline DescribeInstancesResponseBodyItems& setProtection(bool protection) { DARABONBA_PTR_SET_VALUE(protection_, protection) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeInstancesResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // riskLevelName Field Functions 
    bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
    void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
    inline string riskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
    inline DescribeInstancesResponseBodyItems& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeInstancesResponseBodyItems& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline DescribeInstancesResponseBodyItems& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


    // sensitiveCount Field Functions 
    bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
    void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
    inline int32_t sensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
    inline DescribeInstancesResponseBodyItems& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string tenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline DescribeInstancesResponseBodyItems& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstancesResponseBodyItems& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the data asset was created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The name of the department to which the data asset belongs.
    std::shared_ptr<string> departName_ = nullptr;
    // The unique ID of the data asset in DSC.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The description of the data asset.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // The security status of the data asset. Valid values:
    // 
    // *   **true**: The data asset is secure.
    // *   **false**: The data asset is insecure.
    std::shared_ptr<bool> labelsec_ = nullptr;
    // The time when the data asset was last scanned. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> lastFinishTime_ = nullptr;
    // If the management account has opened multiple accounts and the asset belongs to other member accounts, this field displays the UID of the member accounts.
    std::shared_ptr<string> memberAliUid_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyItemsModelTags>> modelTags_ = nullptr;
    // The name of the data asset.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> odpsRiskLevelName_ = nullptr;
    // The Alibaba Cloud account to which the data asset belongs.
    std::shared_ptr<string> owner_ = nullptr;
    // The name of the service to which the data asset belongs, such as MaxCompute, OSS, and ApsaraDB RDS. For more information about the types of data assets that DSC can scan to detect sensitive data, see [Supported data assets](https://help.aliyun.com/document_detail/212906.html).
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the service to which the data asset belongs.
    std::shared_ptr<string> productId_ = nullptr;
    // The protection status of the data asset. Valid values:
    // 
    // *   **true**: The data asset is being protected.
    // *   **false**: The data asset is not protected.
    std::shared_ptr<bool> protection_ = nullptr;
    // The ID of the sensitivity level for the data asset. A higher sensitivity level ID indicates that the identified data is more sensitive.
    // 
    // *   **1**: No sensitive data is detected.
    // *   **2**: sensitive data at level 1.
    // *   **3**: sensitive data at level 2.
    // *   **4**: sensitive data at level 3.
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
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> sensitive_ = nullptr;
    // The number of sensitive data objects in the data asset. For example, if the data asset is an ApsaraDB RDS instance, the value indicates the number of sensitive tables in all databases of the instance.
    std::shared_ptr<int32_t> sensitiveCount_ = nullptr;
    // The name of the tenant.
    std::shared_ptr<string> tenantName_ = nullptr;
    // The total number of data objects in the data asset. For example, if the data asset is an ApsaraDB RDS instance, the value indicates the total number of tables in all databases of the instance.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
