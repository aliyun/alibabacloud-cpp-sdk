// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODYDEVICES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESRESPONSEBODYDEVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDevicesResponseBodyDevicesEndUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDevicesResponseBodyDevices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDevicesResponseBodyDevices& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(EndUserList, endUserList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDevicesResponseBodyDevices& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(EndUserList, endUserList_);
    };
    DescribeDevicesResponseBodyDevices() = default ;
    DescribeDevicesResponseBodyDevices(const DescribeDevicesResponseBodyDevices &) = default ;
    DescribeDevicesResponseBodyDevices(DescribeDevicesResponseBodyDevices &&) = default ;
    DescribeDevicesResponseBodyDevices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDevicesResponseBodyDevices() = default ;
    DescribeDevicesResponseBodyDevices& operator=(const DescribeDevicesResponseBodyDevices &) = default ;
    DescribeDevicesResponseBodyDevices& operator=(DescribeDevicesResponseBodyDevices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && return this->endUserList_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline DescribeDevicesResponseBodyDevices& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // endUserList Field Functions 
    bool hasEndUserList() const { return this->endUserList_ != nullptr;};
    void deleteEndUserList() { this->endUserList_ = nullptr;};
    inline const vector<Models::DescribeDevicesResponseBodyDevicesEndUserList> & endUserList() const { DARABONBA_PTR_GET_CONST(endUserList_, vector<Models::DescribeDevicesResponseBodyDevicesEndUserList>) };
    inline vector<Models::DescribeDevicesResponseBodyDevicesEndUserList> endUserList() { DARABONBA_PTR_GET(endUserList_, vector<Models::DescribeDevicesResponseBodyDevicesEndUserList>) };
    inline DescribeDevicesResponseBodyDevices& setEndUserList(const vector<Models::DescribeDevicesResponseBodyDevicesEndUserList> & endUserList) { DARABONBA_PTR_SET_VALUE(endUserList_, endUserList) };
    inline DescribeDevicesResponseBodyDevices& setEndUserList(vector<Models::DescribeDevicesResponseBodyDevicesEndUserList> && endUserList) { DARABONBA_PTR_SET_RVALUE(endUserList_, endUserList) };


  protected:
    // The ID of the device. The serial number (SN) of the hardware client or the UUID of the software client.
    std::shared_ptr<string> deviceId_ = nullptr;
    // The users who are bound to the device.
    std::shared_ptr<vector<Models::DescribeDevicesResponseBodyDevicesEndUserList>> endUserList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
