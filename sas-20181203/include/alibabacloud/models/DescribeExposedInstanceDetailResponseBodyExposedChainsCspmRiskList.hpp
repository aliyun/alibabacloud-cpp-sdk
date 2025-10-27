// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODYEXPOSEDCHAINSCSPMRISKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODYEXPOSEDCHAINSCSPMRISKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetSubTypeName, assetSubTypeName_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AssetTypeName, assetTypeName_);
      DARABONBA_PTR_TO_JSON(CheckName, checkName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetSubTypeName, assetSubTypeName_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AssetTypeName, assetTypeName_);
      DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList() = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList(const DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList &) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList(DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList &&) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList() = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& operator=(const DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList &) = default ;
    DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& operator=(DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSubType_ == nullptr
        && return this->assetSubTypeName_ == nullptr && return this->assetType_ == nullptr && return this->assetTypeName_ == nullptr && return this->checkName_ == nullptr && return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->riskLevel_ == nullptr && return this->vendor_ == nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetSubTypeName Field Functions 
    bool hasAssetSubTypeName() const { return this->assetSubTypeName_ != nullptr;};
    void deleteAssetSubTypeName() { this->assetSubTypeName_ = nullptr;};
    inline string assetSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetSubTypeName_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setAssetSubTypeName(string assetSubTypeName) { DARABONBA_PTR_SET_VALUE(assetSubTypeName_, assetSubTypeName) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // assetTypeName Field Functions 
    bool hasAssetTypeName() const { return this->assetTypeName_ != nullptr;};
    void deleteAssetTypeName() { this->assetTypeName_ = nullptr;};
    inline string assetTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetTypeName_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setAssetTypeName(string assetTypeName) { DARABONBA_PTR_SET_VALUE(assetTypeName_, assetTypeName) };


    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string checkName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline DescribeExposedInstanceDetailResponseBodyExposedChainsCspmRiskList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The subtype of the cloud asset. Valid values:
    // 
    // *   **0**: Elastic Compute Service (ECS).
    // 
    //     *   **100**: instance.
    // 
    // *   **3**: ApsaraDB RDS.
    // 
    //     *   **0**: instance.
    // 
    // *   **4**: ApsaraDB for MongoDB (MongoDB).
    // 
    //     *   **0**: instance.
    // 
    // *   **5**: ApsaraDB for Redis (Redis).
    // 
    //     *   **0**: instance.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The subtype name of the cloud asset. Valid values:
    // 
    // *   **INSTANCE**: MongoDB instance, Apsara DB for RDS instance, and ApsaraDB for Redis instance.
    // *   **ECS_INSTANCE**: ECS instance.
    std::shared_ptr<string> assetSubTypeName_ = nullptr;
    // The instance type. Valid values:
    // 
    // *   0: an ECS instance.
    // *   3: an ApsaraDB RDS instance.
    // *   4: an ApsaraDB for MongoDB instance.
    // *   5: an ApsaraDB for Redis instance.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The name of the cloud asset type. Valid values:
    // 
    // *   **ECS**
    // *   **RDS**
    // *   **KVSTORE**
    // *   **MONGODB**
    std::shared_ptr<string> assetTypeName_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> checkName_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **HIGH**
    // *   **MEDIUM**
    // *   **LOW**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The type of the cloud asset by source. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud.
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
