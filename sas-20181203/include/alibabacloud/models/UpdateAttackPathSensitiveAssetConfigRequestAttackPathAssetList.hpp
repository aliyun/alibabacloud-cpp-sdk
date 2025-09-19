// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATTACKPATHSENSITIVEASSETCONFIGREQUESTATTACKPATHASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATTACKPATHSENSITIVEASSETCONFIGREQUESTATTACKPATHASSETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList() = default ;
    UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList(const UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList &) = default ;
    UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList(UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList &&) = default ;
    UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList() = default ;
    UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& operator=(const UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList &) = default ;
    UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& operator=(UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetSubType_ != nullptr
        && this->assetType_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->vendor_ != nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Subtype of the cloud product asset.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the subtype of the cloud product asset.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // Type of the cloud product asset.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the type of the cloud product asset.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // Cloud product asset instance ID.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the cloud product asset instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Region ID of the cloud product asset instance.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the region ID of the cloud product asset instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Vendor of the cloud product asset.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the vendor of the cloud product asset.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
