// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITPROHIBITEDDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITPROHIBITEDDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class EditProhibitedDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditProhibitedDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
      DARABONBA_PTR_TO_JSON(hvacDeviceConfigVOList, hvacDeviceConfigVOList_);
      DARABONBA_PTR_TO_JSON(systemId, systemId_);
    };
    friend void from_json(const Darabonba::Json& j, EditProhibitedDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
      DARABONBA_PTR_FROM_JSON(hvacDeviceConfigVOList, hvacDeviceConfigVOList_);
      DARABONBA_PTR_FROM_JSON(systemId, systemId_);
    };
    EditProhibitedDevicesRequest() = default ;
    EditProhibitedDevicesRequest(const EditProhibitedDevicesRequest &) = default ;
    EditProhibitedDevicesRequest(EditProhibitedDevicesRequest &&) = default ;
    EditProhibitedDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditProhibitedDevicesRequest() = default ;
    EditProhibitedDevicesRequest& operator=(const EditProhibitedDevicesRequest &) = default ;
    EditProhibitedDevicesRequest& operator=(EditProhibitedDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HvacDeviceConfigVOList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HvacDeviceConfigVOList& obj) { 
        DARABONBA_PTR_TO_JSON(buildingId, buildingId_);
        DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(deviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(fenceId, fenceId_);
        DARABONBA_PTR_TO_JSON(floorId, floorId_);
        DARABONBA_PTR_TO_JSON(isForbidden, isForbidden_);
        DARABONBA_PTR_TO_JSON(isUnfavorableArea, isUnfavorableArea_);
      };
      friend void from_json(const Darabonba::Json& j, HvacDeviceConfigVOList& obj) { 
        DARABONBA_PTR_FROM_JSON(buildingId, buildingId_);
        DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(deviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(fenceId, fenceId_);
        DARABONBA_PTR_FROM_JSON(floorId, floorId_);
        DARABONBA_PTR_FROM_JSON(isForbidden, isForbidden_);
        DARABONBA_PTR_FROM_JSON(isUnfavorableArea, isUnfavorableArea_);
      };
      HvacDeviceConfigVOList() = default ;
      HvacDeviceConfigVOList(const HvacDeviceConfigVOList &) = default ;
      HvacDeviceConfigVOList(HvacDeviceConfigVOList &&) = default ;
      HvacDeviceConfigVOList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HvacDeviceConfigVOList() = default ;
      HvacDeviceConfigVOList& operator=(const HvacDeviceConfigVOList &) = default ;
      HvacDeviceConfigVOList& operator=(HvacDeviceConfigVOList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buildingId_ == nullptr
        && this->deviceId_ == nullptr && this->deviceName_ == nullptr && this->deviceType_ == nullptr && this->fenceId_ == nullptr && this->floorId_ == nullptr
        && this->isForbidden_ == nullptr && this->isUnfavorableArea_ == nullptr; };
      // buildingId Field Functions 
      bool hasBuildingId() const { return this->buildingId_ != nullptr;};
      void deleteBuildingId() { this->buildingId_ = nullptr;};
      inline string getBuildingId() const { DARABONBA_PTR_GET_DEFAULT(buildingId_, "") };
      inline HvacDeviceConfigVOList& setBuildingId(string buildingId) { DARABONBA_PTR_SET_VALUE(buildingId_, buildingId) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline HvacDeviceConfigVOList& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline HvacDeviceConfigVOList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline HvacDeviceConfigVOList& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // fenceId Field Functions 
      bool hasFenceId() const { return this->fenceId_ != nullptr;};
      void deleteFenceId() { this->fenceId_ = nullptr;};
      inline string getFenceId() const { DARABONBA_PTR_GET_DEFAULT(fenceId_, "") };
      inline HvacDeviceConfigVOList& setFenceId(string fenceId) { DARABONBA_PTR_SET_VALUE(fenceId_, fenceId) };


      // floorId Field Functions 
      bool hasFloorId() const { return this->floorId_ != nullptr;};
      void deleteFloorId() { this->floorId_ = nullptr;};
      inline string getFloorId() const { DARABONBA_PTR_GET_DEFAULT(floorId_, "") };
      inline HvacDeviceConfigVOList& setFloorId(string floorId) { DARABONBA_PTR_SET_VALUE(floorId_, floorId) };


      // isForbidden Field Functions 
      bool hasIsForbidden() const { return this->isForbidden_ != nullptr;};
      void deleteIsForbidden() { this->isForbidden_ = nullptr;};
      inline int32_t getIsForbidden() const { DARABONBA_PTR_GET_DEFAULT(isForbidden_, 0) };
      inline HvacDeviceConfigVOList& setIsForbidden(int32_t isForbidden) { DARABONBA_PTR_SET_VALUE(isForbidden_, isForbidden) };


      // isUnfavorableArea Field Functions 
      bool hasIsUnfavorableArea() const { return this->isUnfavorableArea_ != nullptr;};
      void deleteIsUnfavorableArea() { this->isUnfavorableArea_ = nullptr;};
      inline int32_t getIsUnfavorableArea() const { DARABONBA_PTR_GET_DEFAULT(isUnfavorableArea_, 0) };
      inline HvacDeviceConfigVOList& setIsUnfavorableArea(int32_t isUnfavorableArea) { DARABONBA_PTR_SET_VALUE(isUnfavorableArea_, isUnfavorableArea) };


    protected:
      shared_ptr<string> buildingId_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> deviceName_ {};
      // This parameter is required.
      shared_ptr<string> deviceType_ {};
      shared_ptr<string> fenceId_ {};
      shared_ptr<string> floorId_ {};
      // This parameter is required.
      shared_ptr<int32_t> isForbidden_ {};
      shared_ptr<int32_t> isUnfavorableArea_ {};
    };

    virtual bool empty() const override { return this->factoryId_ == nullptr
        && this->hvacDeviceConfigVOList_ == nullptr && this->systemId_ == nullptr; };
    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string getFactoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline EditProhibitedDevicesRequest& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


    // hvacDeviceConfigVOList Field Functions 
    bool hasHvacDeviceConfigVOList() const { return this->hvacDeviceConfigVOList_ != nullptr;};
    void deleteHvacDeviceConfigVOList() { this->hvacDeviceConfigVOList_ = nullptr;};
    inline const vector<EditProhibitedDevicesRequest::HvacDeviceConfigVOList> & getHvacDeviceConfigVOList() const { DARABONBA_PTR_GET_CONST(hvacDeviceConfigVOList_, vector<EditProhibitedDevicesRequest::HvacDeviceConfigVOList>) };
    inline vector<EditProhibitedDevicesRequest::HvacDeviceConfigVOList> getHvacDeviceConfigVOList() { DARABONBA_PTR_GET(hvacDeviceConfigVOList_, vector<EditProhibitedDevicesRequest::HvacDeviceConfigVOList>) };
    inline EditProhibitedDevicesRequest& setHvacDeviceConfigVOList(const vector<EditProhibitedDevicesRequest::HvacDeviceConfigVOList> & hvacDeviceConfigVOList) { DARABONBA_PTR_SET_VALUE(hvacDeviceConfigVOList_, hvacDeviceConfigVOList) };
    inline EditProhibitedDevicesRequest& setHvacDeviceConfigVOList(vector<EditProhibitedDevicesRequest::HvacDeviceConfigVOList> && hvacDeviceConfigVOList) { DARABONBA_PTR_SET_RVALUE(hvacDeviceConfigVOList_, hvacDeviceConfigVOList) };


    // systemId Field Functions 
    bool hasSystemId() const { return this->systemId_ != nullptr;};
    void deleteSystemId() { this->systemId_ = nullptr;};
    inline string getSystemId() const { DARABONBA_PTR_GET_DEFAULT(systemId_, "") };
    inline EditProhibitedDevicesRequest& setSystemId(string systemId) { DARABONBA_PTR_SET_VALUE(systemId_, systemId) };


  protected:
    // This parameter is required.
    shared_ptr<string> factoryId_ {};
    // This parameter is required.
    shared_ptr<vector<EditProhibitedDevicesRequest::HvacDeviceConfigVOList>> hvacDeviceConfigVOList_ {};
    // This parameter is required.
    shared_ptr<string> systemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
