// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATTACKPATHWHITELISTREQUESTATTACKPATHASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATTACKPATHWHITELISTREQUESTATTACKPATHASSETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateAttackPathWhitelistRequestAttackPathAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAttackPathWhitelistRequestAttackPathAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAttackPathWhitelistRequestAttackPathAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    UpdateAttackPathWhitelistRequestAttackPathAssetList() = default ;
    UpdateAttackPathWhitelistRequestAttackPathAssetList(const UpdateAttackPathWhitelistRequestAttackPathAssetList &) = default ;
    UpdateAttackPathWhitelistRequestAttackPathAssetList(UpdateAttackPathWhitelistRequestAttackPathAssetList &&) = default ;
    UpdateAttackPathWhitelistRequestAttackPathAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAttackPathWhitelistRequestAttackPathAssetList() = default ;
    UpdateAttackPathWhitelistRequestAttackPathAssetList& operator=(const UpdateAttackPathWhitelistRequestAttackPathAssetList &) = default ;
    UpdateAttackPathWhitelistRequestAttackPathAssetList& operator=(UpdateAttackPathWhitelistRequestAttackPathAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetSubType_ != nullptr
        && this->assetType_ != nullptr && this->instanceId_ != nullptr && this->nodeType_ != nullptr && this->regionId_ != nullptr && this->vendor_ != nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline UpdateAttackPathWhitelistRequestAttackPathAssetList& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline UpdateAttackPathWhitelistRequestAttackPathAssetList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAttackPathWhitelistRequestAttackPathAssetList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline UpdateAttackPathWhitelistRequestAttackPathAssetList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAttackPathWhitelistRequestAttackPathAssetList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline UpdateAttackPathWhitelistRequestAttackPathAssetList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Subtype of the cloud product asset.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the subtype of the cloud product asset.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // Type of the cloud product asset.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the type of the cloud product asset.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // Cloud product asset instance ID.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the cloud product asset instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Node type, with values:
    // - **start**: Start point.
    // - **end**: End point.
    std::shared_ptr<string> nodeType_ = nullptr;
    // Region ID of the cloud product asset instance.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the region ID of the cloud product asset instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // Vendor of the cloud product asset.
    // 
    // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the vendor of the cloud product asset.
    std::shared_ptr<int32_t> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
