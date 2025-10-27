// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODYATTACKPATHEVENTDSTASSET_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODYATTACKPATHEVENTDSTASSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset() = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset(const GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset &) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset(GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset &&) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset() = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& operator=(const GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset &) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& operator=(GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSubType_ == nullptr
        && return this->assetType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->regionId_ == nullptr && return this->sensitiveAssetFlag_ == nullptr
        && return this->vendor_ == nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sensitiveAssetFlag Field Functions 
    bool hasSensitiveAssetFlag() const { return this->sensitiveAssetFlag_ != nullptr;};
    void deleteSensitiveAssetFlag() { this->sensitiveAssetFlag_ = nullptr;};
    inline int32_t sensitiveAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(sensitiveAssetFlag_, 0) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& setSensitiveAssetFlag(int32_t sensitiveAssetFlag) { DARABONBA_PTR_SET_VALUE(sensitiveAssetFlag_, sensitiveAssetFlag) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Subtype of the cloud product asset.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // Type of the cloud product asset.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // ID of the cloud product asset instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // ID of the region where the cloud product asset instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // Sensitive asset flag. Values:
    // - **0**: Non-sensitive asset.
    // - **1**: Sensitive asset.
    std::shared_ptr<int32_t> sensitiveAssetFlag_ = nullptr;
    // Vendor of the cloud product asset.
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
