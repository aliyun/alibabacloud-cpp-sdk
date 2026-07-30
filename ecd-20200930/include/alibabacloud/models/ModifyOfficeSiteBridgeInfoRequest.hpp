// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOFFICESITEBRIDGEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOFFICESITEBRIDGEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyOfficeSiteBridgeInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOfficeSiteBridgeInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_TO_JSON(BridgeLevel, bridgeLevel_);
      DARABONBA_PTR_TO_JSON(BridgeType, bridgeType_);
      DARABONBA_PTR_TO_JSON(EnableBridge, enableBridge_);
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOfficeSiteBridgeInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_FROM_JSON(BridgeLevel, bridgeLevel_);
      DARABONBA_PTR_FROM_JSON(BridgeType, bridgeType_);
      DARABONBA_PTR_FROM_JSON(EnableBridge, enableBridge_);
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyOfficeSiteBridgeInfoRequest() = default ;
    ModifyOfficeSiteBridgeInfoRequest(const ModifyOfficeSiteBridgeInfoRequest &) = default ;
    ModifyOfficeSiteBridgeInfoRequest(ModifyOfficeSiteBridgeInfoRequest &&) = default ;
    ModifyOfficeSiteBridgeInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOfficeSiteBridgeInfoRequest() = default ;
    ModifyOfficeSiteBridgeInfoRequest& operator=(const ModifyOfficeSiteBridgeInfoRequest &) = default ;
    ModifyOfficeSiteBridgeInfoRequest& operator=(ModifyOfficeSiteBridgeInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bridgeId_ == nullptr
        && this->bridgeLevel_ == nullptr && this->bridgeType_ == nullptr && this->enableBridge_ == nullptr && this->license_ == nullptr && this->officeSiteId_ == nullptr
        && this->regionId_ == nullptr; };
    // bridgeId Field Functions 
    bool hasBridgeId() const { return this->bridgeId_ != nullptr;};
    void deleteBridgeId() { this->bridgeId_ = nullptr;};
    inline string getBridgeId() const { DARABONBA_PTR_GET_DEFAULT(bridgeId_, "") };
    inline ModifyOfficeSiteBridgeInfoRequest& setBridgeId(string bridgeId) { DARABONBA_PTR_SET_VALUE(bridgeId_, bridgeId) };


    // bridgeLevel Field Functions 
    bool hasBridgeLevel() const { return this->bridgeLevel_ != nullptr;};
    void deleteBridgeLevel() { this->bridgeLevel_ = nullptr;};
    inline string getBridgeLevel() const { DARABONBA_PTR_GET_DEFAULT(bridgeLevel_, "") };
    inline ModifyOfficeSiteBridgeInfoRequest& setBridgeLevel(string bridgeLevel) { DARABONBA_PTR_SET_VALUE(bridgeLevel_, bridgeLevel) };


    // bridgeType Field Functions 
    bool hasBridgeType() const { return this->bridgeType_ != nullptr;};
    void deleteBridgeType() { this->bridgeType_ = nullptr;};
    inline string getBridgeType() const { DARABONBA_PTR_GET_DEFAULT(bridgeType_, "") };
    inline ModifyOfficeSiteBridgeInfoRequest& setBridgeType(string bridgeType) { DARABONBA_PTR_SET_VALUE(bridgeType_, bridgeType) };


    // enableBridge Field Functions 
    bool hasEnableBridge() const { return this->enableBridge_ != nullptr;};
    void deleteEnableBridge() { this->enableBridge_ = nullptr;};
    inline bool getEnableBridge() const { DARABONBA_PTR_GET_DEFAULT(enableBridge_, false) };
    inline ModifyOfficeSiteBridgeInfoRequest& setEnableBridge(bool enableBridge) { DARABONBA_PTR_SET_VALUE(enableBridge_, enableBridge) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string getLicense() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline ModifyOfficeSiteBridgeInfoRequest& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifyOfficeSiteBridgeInfoRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOfficeSiteBridgeInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The virtual bridge ID.
    shared_ptr<string> bridgeId_ {};
    // The virtual bridge specifications.
    shared_ptr<string> bridgeLevel_ {};
    // The third-party plugin type of the virtual bridge.
    shared_ptr<string> bridgeType_ {};
    // Specifies whether to enable the bridge.
    shared_ptr<bool> enableBridge_ {};
    // The activation code object.
    shared_ptr<string> license_ {};
    // The office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call [DescribeRegions](~~DescribeRegions~~) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
