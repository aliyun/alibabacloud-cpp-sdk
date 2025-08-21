// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEVICESETTINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEVICESETTINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class SetDeviceSettingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDeviceSettingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SetDeviceSettingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    SetDeviceSettingShrinkRequest() = default ;
    SetDeviceSettingShrinkRequest(const SetDeviceSettingShrinkRequest &) = default ;
    SetDeviceSettingShrinkRequest(SetDeviceSettingShrinkRequest &&) = default ;
    SetDeviceSettingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDeviceSettingShrinkRequest() = default ;
    SetDeviceSettingShrinkRequest& operator=(const SetDeviceSettingShrinkRequest &) = default ;
    SetDeviceSettingShrinkRequest& operator=(SetDeviceSettingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline SetDeviceSettingShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SetDeviceSettingShrinkRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline SetDeviceSettingShrinkRequest& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline SetDeviceSettingShrinkRequest& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
