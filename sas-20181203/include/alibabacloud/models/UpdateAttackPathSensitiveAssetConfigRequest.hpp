// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateAttackPathSensitiveAssetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
    };
    UpdateAttackPathSensitiveAssetConfigRequest() = default ;
    UpdateAttackPathSensitiveAssetConfigRequest(const UpdateAttackPathSensitiveAssetConfigRequest &) = default ;
    UpdateAttackPathSensitiveAssetConfigRequest(UpdateAttackPathSensitiveAssetConfigRequest &&) = default ;
    UpdateAttackPathSensitiveAssetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAttackPathSensitiveAssetConfigRequest() = default ;
    UpdateAttackPathSensitiveAssetConfigRequest& operator=(const UpdateAttackPathSensitiveAssetConfigRequest &) = default ;
    UpdateAttackPathSensitiveAssetConfigRequest& operator=(UpdateAttackPathSensitiveAssetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackPathAssetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathAssetList& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathAssetList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      AttackPathAssetList() = default ;
      AttackPathAssetList(const AttackPathAssetList &) = default ;
      AttackPathAssetList(AttackPathAssetList &&) = default ;
      AttackPathAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathAssetList() = default ;
      AttackPathAssetList& operator=(const AttackPathAssetList &) = default ;
      AttackPathAssetList& operator=(AttackPathAssetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->vendor_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline AttackPathAssetList& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline AttackPathAssetList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AttackPathAssetList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AttackPathAssetList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline AttackPathAssetList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // Subtype of the cloud product asset.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the subtype of the cloud product asset.
      // 
      // This parameter is required.
      shared_ptr<int32_t> assetSubType_ {};
      // Type of the cloud product asset.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the type of the cloud product asset.
      // 
      // This parameter is required.
      shared_ptr<int32_t> assetType_ {};
      // Cloud product asset instance ID.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the cloud product asset instance ID.
      // 
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // Region ID of the cloud product asset instance.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the region ID of the cloud product asset instance.
      // 
      // This parameter is required.
      shared_ptr<string> regionId_ {};
      // Vendor of the cloud product asset.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the vendor of the cloud product asset.
      // 
      // This parameter is required.
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->attackPathAssetList_ == nullptr
        && this->attackPathSensitiveAssetConfigId_ == nullptr; };
    // attackPathAssetList Field Functions 
    bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
    void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
    inline const vector<UpdateAttackPathSensitiveAssetConfigRequest::AttackPathAssetList> & getAttackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<UpdateAttackPathSensitiveAssetConfigRequest::AttackPathAssetList>) };
    inline vector<UpdateAttackPathSensitiveAssetConfigRequest::AttackPathAssetList> getAttackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<UpdateAttackPathSensitiveAssetConfigRequest::AttackPathAssetList>) };
    inline UpdateAttackPathSensitiveAssetConfigRequest& setAttackPathAssetList(const vector<UpdateAttackPathSensitiveAssetConfigRequest::AttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
    inline UpdateAttackPathSensitiveAssetConfigRequest& setAttackPathAssetList(vector<UpdateAttackPathSensitiveAssetConfigRequest::AttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


    // attackPathSensitiveAssetConfigId Field Functions 
    bool hasAttackPathSensitiveAssetConfigId() const { return this->attackPathSensitiveAssetConfigId_ != nullptr;};
    void deleteAttackPathSensitiveAssetConfigId() { this->attackPathSensitiveAssetConfigId_ = nullptr;};
    inline string getAttackPathSensitiveAssetConfigId() const { DARABONBA_PTR_GET_DEFAULT(attackPathSensitiveAssetConfigId_, "") };
    inline UpdateAttackPathSensitiveAssetConfigRequest& setAttackPathSensitiveAssetConfigId(string attackPathSensitiveAssetConfigId) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfigId_, attackPathSensitiveAssetConfigId) };


  protected:
    // List of cloud product assets in the attack path.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateAttackPathSensitiveAssetConfigRequest::AttackPathAssetList>> attackPathAssetList_ {};
    // ID of the sensitive asset setting for the attack path.
    // 
    // This parameter is required.
    shared_ptr<string> attackPathSensitiveAssetConfigId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
