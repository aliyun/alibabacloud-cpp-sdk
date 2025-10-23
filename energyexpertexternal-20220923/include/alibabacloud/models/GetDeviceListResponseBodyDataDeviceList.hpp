// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICELISTRESPONSEBODYDATADEVICELIST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICELISTRESPONSEBODYDATADEVICELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeviceListResponseBodyDataDeviceListInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceListResponseBodyDataDeviceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceListResponseBodyDataDeviceList& obj) { 
      DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(firstTypeName, firstTypeName_);
      DARABONBA_PTR_TO_JSON(info, info_);
      DARABONBA_PTR_TO_JSON(parentDevice, parentDevice_);
      DARABONBA_PTR_TO_JSON(secondTypeName, secondTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceListResponseBodyDataDeviceList& obj) { 
      DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(firstTypeName, firstTypeName_);
      DARABONBA_PTR_FROM_JSON(info, info_);
      DARABONBA_PTR_FROM_JSON(parentDevice, parentDevice_);
      DARABONBA_PTR_FROM_JSON(secondTypeName, secondTypeName_);
    };
    GetDeviceListResponseBodyDataDeviceList() = default ;
    GetDeviceListResponseBodyDataDeviceList(const GetDeviceListResponseBodyDataDeviceList &) = default ;
    GetDeviceListResponseBodyDataDeviceList(GetDeviceListResponseBodyDataDeviceList &&) = default ;
    GetDeviceListResponseBodyDataDeviceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceListResponseBodyDataDeviceList() = default ;
    GetDeviceListResponseBodyDataDeviceList& operator=(const GetDeviceListResponseBodyDataDeviceList &) = default ;
    GetDeviceListResponseBodyDataDeviceList& operator=(GetDeviceListResponseBodyDataDeviceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && return this->deviceName_ == nullptr && return this->firstTypeName_ == nullptr && return this->info_ == nullptr && return this->parentDevice_ == nullptr && return this->secondTypeName_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetDeviceListResponseBodyDataDeviceList& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline GetDeviceListResponseBodyDataDeviceList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // firstTypeName Field Functions 
    bool hasFirstTypeName() const { return this->firstTypeName_ != nullptr;};
    void deleteFirstTypeName() { this->firstTypeName_ = nullptr;};
    inline string firstTypeName() const { DARABONBA_PTR_GET_DEFAULT(firstTypeName_, "") };
    inline GetDeviceListResponseBodyDataDeviceList& setFirstTypeName(string firstTypeName) { DARABONBA_PTR_SET_VALUE(firstTypeName_, firstTypeName) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::GetDeviceListResponseBodyDataDeviceListInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::GetDeviceListResponseBodyDataDeviceListInfo) };
    inline Models::GetDeviceListResponseBodyDataDeviceListInfo info() { DARABONBA_PTR_GET(info_, Models::GetDeviceListResponseBodyDataDeviceListInfo) };
    inline GetDeviceListResponseBodyDataDeviceList& setInfo(const Models::GetDeviceListResponseBodyDataDeviceListInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline GetDeviceListResponseBodyDataDeviceList& setInfo(Models::GetDeviceListResponseBodyDataDeviceListInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // parentDevice Field Functions 
    bool hasParentDevice() const { return this->parentDevice_ != nullptr;};
    void deleteParentDevice() { this->parentDevice_ = nullptr;};
    inline string parentDevice() const { DARABONBA_PTR_GET_DEFAULT(parentDevice_, "") };
    inline GetDeviceListResponseBodyDataDeviceList& setParentDevice(string parentDevice) { DARABONBA_PTR_SET_VALUE(parentDevice_, parentDevice) };


    // secondTypeName Field Functions 
    bool hasSecondTypeName() const { return this->secondTypeName_ != nullptr;};
    void deleteSecondTypeName() { this->secondTypeName_ = nullptr;};
    inline string secondTypeName() const { DARABONBA_PTR_GET_DEFAULT(secondTypeName_, "") };
    inline GetDeviceListResponseBodyDataDeviceList& setSecondTypeName(string secondTypeName) { DARABONBA_PTR_SET_VALUE(secondTypeName_, secondTypeName) };


  protected:
    // The device ID.
    std::shared_ptr<string> deviceId_ = nullptr;
    // The device name.
    std::shared_ptr<string> deviceName_ = nullptr;
    // The level 1 meter type.
    std::shared_ptr<string> firstTypeName_ = nullptr;
    // The device information.
    std::shared_ptr<Models::GetDeviceListResponseBodyDataDeviceListInfo> info_ = nullptr;
    // The ID of the parent device.
    std::shared_ptr<string> parentDevice_ = nullptr;
    // The level 2 meter type.
    std::shared_ptr<string> secondTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
