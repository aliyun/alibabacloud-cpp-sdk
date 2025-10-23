// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITPROHIBITEDDEVICESREQUESTHVACDEVICECONFIGVOLIST_HPP_
#define ALIBABACLOUD_MODELS_EDITPROHIBITEDDEVICESREQUESTHVACDEVICECONFIGVOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class EditProhibitedDevicesRequestHvacDeviceConfigVOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditProhibitedDevicesRequestHvacDeviceConfigVOList& obj) { 
      DARABONBA_PTR_TO_JSON(buildingId, buildingId_);
      DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(deviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(fenceId, fenceId_);
      DARABONBA_PTR_TO_JSON(floorId, floorId_);
      DARABONBA_PTR_TO_JSON(isForbidden, isForbidden_);
      DARABONBA_PTR_TO_JSON(isUnfavorableArea, isUnfavorableArea_);
    };
    friend void from_json(const Darabonba::Json& j, EditProhibitedDevicesRequestHvacDeviceConfigVOList& obj) { 
      DARABONBA_PTR_FROM_JSON(buildingId, buildingId_);
      DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(deviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(fenceId, fenceId_);
      DARABONBA_PTR_FROM_JSON(floorId, floorId_);
      DARABONBA_PTR_FROM_JSON(isForbidden, isForbidden_);
      DARABONBA_PTR_FROM_JSON(isUnfavorableArea, isUnfavorableArea_);
    };
    EditProhibitedDevicesRequestHvacDeviceConfigVOList() = default ;
    EditProhibitedDevicesRequestHvacDeviceConfigVOList(const EditProhibitedDevicesRequestHvacDeviceConfigVOList &) = default ;
    EditProhibitedDevicesRequestHvacDeviceConfigVOList(EditProhibitedDevicesRequestHvacDeviceConfigVOList &&) = default ;
    EditProhibitedDevicesRequestHvacDeviceConfigVOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditProhibitedDevicesRequestHvacDeviceConfigVOList() = default ;
    EditProhibitedDevicesRequestHvacDeviceConfigVOList& operator=(const EditProhibitedDevicesRequestHvacDeviceConfigVOList &) = default ;
    EditProhibitedDevicesRequestHvacDeviceConfigVOList& operator=(EditProhibitedDevicesRequestHvacDeviceConfigVOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildingId_ == nullptr
        && return this->deviceId_ == nullptr && return this->deviceName_ == nullptr && return this->deviceType_ == nullptr && return this->fenceId_ == nullptr && return this->floorId_ == nullptr
        && return this->isForbidden_ == nullptr && return this->isUnfavorableArea_ == nullptr; };
    // buildingId Field Functions 
    bool hasBuildingId() const { return this->buildingId_ != nullptr;};
    void deleteBuildingId() { this->buildingId_ = nullptr;};
    inline string buildingId() const { DARABONBA_PTR_GET_DEFAULT(buildingId_, "") };
    inline EditProhibitedDevicesRequestHvacDeviceConfigVOList& setBuildingId(string buildingId) { DARABONBA_PTR_SET_VALUE(buildingId_, buildingId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline EditProhibitedDevicesRequestHvacDeviceConfigVOList& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline EditProhibitedDevicesRequestHvacDeviceConfigVOList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline EditProhibitedDevicesRequestHvacDeviceConfigVOList& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // fenceId Field Functions 
    bool hasFenceId() const { return this->fenceId_ != nullptr;};
    void deleteFenceId() { this->fenceId_ = nullptr;};
    inline string fenceId() const { DARABONBA_PTR_GET_DEFAULT(fenceId_, "") };
    inline EditProhibitedDevicesRequestHvacDeviceConfigVOList& setFenceId(string fenceId) { DARABONBA_PTR_SET_VALUE(fenceId_, fenceId) };


    // floorId Field Functions 
    bool hasFloorId() const { return this->floorId_ != nullptr;};
    void deleteFloorId() { this->floorId_ = nullptr;};
    inline string floorId() const { DARABONBA_PTR_GET_DEFAULT(floorId_, "") };
    inline EditProhibitedDevicesRequestHvacDeviceConfigVOList& setFloorId(string floorId) { DARABONBA_PTR_SET_VALUE(floorId_, floorId) };


    // isForbidden Field Functions 
    bool hasIsForbidden() const { return this->isForbidden_ != nullptr;};
    void deleteIsForbidden() { this->isForbidden_ = nullptr;};
    inline int32_t isForbidden() const { DARABONBA_PTR_GET_DEFAULT(isForbidden_, 0) };
    inline EditProhibitedDevicesRequestHvacDeviceConfigVOList& setIsForbidden(int32_t isForbidden) { DARABONBA_PTR_SET_VALUE(isForbidden_, isForbidden) };


    // isUnfavorableArea Field Functions 
    bool hasIsUnfavorableArea() const { return this->isUnfavorableArea_ != nullptr;};
    void deleteIsUnfavorableArea() { this->isUnfavorableArea_ = nullptr;};
    inline int32_t isUnfavorableArea() const { DARABONBA_PTR_GET_DEFAULT(isUnfavorableArea_, 0) };
    inline EditProhibitedDevicesRequestHvacDeviceConfigVOList& setIsUnfavorableArea(int32_t isUnfavorableArea) { DARABONBA_PTR_SET_VALUE(isUnfavorableArea_, isUnfavorableArea) };


  protected:
    std::shared_ptr<string> buildingId_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> fenceId_ = nullptr;
    std::shared_ptr<string> floorId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> isForbidden_ = nullptr;
    std::shared_ptr<int32_t> isUnfavorableArea_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
