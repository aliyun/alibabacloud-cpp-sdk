// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDEVICESRESPONSEBODYDEVICECHECKINFOS_HPP_
#define ALIBABACLOUD_MODELS_CHECKDEVICESRESPONSEBODYDEVICECHECKINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CheckDevicesResponseBodyDeviceCheckInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDevicesResponseBodyDeviceCheckInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceCheckInfo, deviceCheckInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDevicesResponseBodyDeviceCheckInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceCheckInfo, deviceCheckInfo_);
    };
    CheckDevicesResponseBodyDeviceCheckInfos() = default ;
    CheckDevicesResponseBodyDeviceCheckInfos(const CheckDevicesResponseBodyDeviceCheckInfos &) = default ;
    CheckDevicesResponseBodyDeviceCheckInfos(CheckDevicesResponseBodyDeviceCheckInfos &&) = default ;
    CheckDevicesResponseBodyDeviceCheckInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDevicesResponseBodyDeviceCheckInfos() = default ;
    CheckDevicesResponseBodyDeviceCheckInfos& operator=(const CheckDevicesResponseBodyDeviceCheckInfos &) = default ;
    CheckDevicesResponseBodyDeviceCheckInfos& operator=(CheckDevicesResponseBodyDeviceCheckInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceCheckInfo_ != nullptr; };
    // deviceCheckInfo Field Functions 
    bool hasDeviceCheckInfo() const { return this->deviceCheckInfo_ != nullptr;};
    void deleteDeviceCheckInfo() { this->deviceCheckInfo_ = nullptr;};
    inline const vector<Models::CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo> & deviceCheckInfo() const { DARABONBA_PTR_GET_CONST(deviceCheckInfo_, vector<Models::CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo>) };
    inline vector<Models::CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo> deviceCheckInfo() { DARABONBA_PTR_GET(deviceCheckInfo_, vector<Models::CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo>) };
    inline CheckDevicesResponseBodyDeviceCheckInfos& setDeviceCheckInfo(const vector<Models::CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo> & deviceCheckInfo) { DARABONBA_PTR_SET_VALUE(deviceCheckInfo_, deviceCheckInfo) };
    inline CheckDevicesResponseBodyDeviceCheckInfos& setDeviceCheckInfo(vector<Models::CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo> && deviceCheckInfo) { DARABONBA_PTR_SET_RVALUE(deviceCheckInfo_, deviceCheckInfo) };


  protected:
    std::shared_ptr<vector<Models::CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo>> deviceCheckInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
