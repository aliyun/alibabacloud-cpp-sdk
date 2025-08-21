// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICETAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICETAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceTagShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceTagShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceTagShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
    };
    GetDeviceTagShrinkRequest() = default ;
    GetDeviceTagShrinkRequest(const GetDeviceTagShrinkRequest &) = default ;
    GetDeviceTagShrinkRequest(GetDeviceTagShrinkRequest &&) = default ;
    GetDeviceTagShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceTagShrinkRequest() = default ;
    GetDeviceTagShrinkRequest& operator=(const GetDeviceTagShrinkRequest &) = default ;
    GetDeviceTagShrinkRequest& operator=(GetDeviceTagShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline GetDeviceTagShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
