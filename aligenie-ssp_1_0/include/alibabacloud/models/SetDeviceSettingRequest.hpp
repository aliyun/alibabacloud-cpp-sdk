// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEVICESETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEVICESETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetDeviceSettingRequestDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class SetDeviceSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDeviceSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SetDeviceSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    SetDeviceSettingRequest() = default ;
    SetDeviceSettingRequest(const SetDeviceSettingRequest &) = default ;
    SetDeviceSettingRequest(SetDeviceSettingRequest &&) = default ;
    SetDeviceSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDeviceSettingRequest() = default ;
    SetDeviceSettingRequest& operator=(const SetDeviceSettingRequest &) = default ;
    SetDeviceSettingRequest& operator=(SetDeviceSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const SetDeviceSettingRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, SetDeviceSettingRequestDeviceInfo) };
    inline SetDeviceSettingRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, SetDeviceSettingRequestDeviceInfo) };
    inline SetDeviceSettingRequest& setDeviceInfo(const SetDeviceSettingRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline SetDeviceSettingRequest& setDeviceInfo(SetDeviceSettingRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SetDeviceSettingRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline SetDeviceSettingRequest& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline SetDeviceSettingRequest& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<SetDeviceSettingRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
