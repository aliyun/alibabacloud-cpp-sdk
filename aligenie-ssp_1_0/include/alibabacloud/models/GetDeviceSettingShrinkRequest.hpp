// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESETTINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESETTINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceSettingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceSettingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(Keys, keysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceSettingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Keys, keysShrink_);
    };
    GetDeviceSettingShrinkRequest() = default ;
    GetDeviceSettingShrinkRequest(const GetDeviceSettingShrinkRequest &) = default ;
    GetDeviceSettingShrinkRequest(GetDeviceSettingShrinkRequest &&) = default ;
    GetDeviceSettingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceSettingShrinkRequest() = default ;
    GetDeviceSettingShrinkRequest& operator=(const GetDeviceSettingShrinkRequest &) = default ;
    GetDeviceSettingShrinkRequest& operator=(GetDeviceSettingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->keysShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline GetDeviceSettingShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // keysShrink Field Functions 
    bool hasKeysShrink() const { return this->keysShrink_ != nullptr;};
    void deleteKeysShrink() { this->keysShrink_ = nullptr;};
    inline string keysShrink() const { DARABONBA_PTR_GET_DEFAULT(keysShrink_, "") };
    inline GetDeviceSettingShrinkRequest& setKeysShrink(string keysShrink) { DARABONBA_PTR_SET_VALUE(keysShrink_, keysShrink) };


  protected:
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> keysShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
