// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGBDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGBDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class CreateGbDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGbDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(MediaNetProtocol, mediaNetProtocol_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(SubProductKey, subProductKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGbDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(MediaNetProtocol, mediaNetProtocol_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(SubProductKey, subProductKey_);
    };
    CreateGbDeviceRequest() = default ;
    CreateGbDeviceRequest(const CreateGbDeviceRequest &) = default ;
    CreateGbDeviceRequest(CreateGbDeviceRequest &&) = default ;
    CreateGbDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGbDeviceRequest() = default ;
    CreateGbDeviceRequest& operator=(const CreateGbDeviceRequest &) = default ;
    CreateGbDeviceRequest& operator=(CreateGbDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->deviceName_ == nullptr && this->deviceType_ == nullptr && this->gbId_ == nullptr && this->iotInstanceId_ == nullptr && this->mediaNetProtocol_ == nullptr
        && this->password_ == nullptr && this->productKey_ == nullptr && this->subProductKey_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGbDeviceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline CreateGbDeviceRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline int32_t getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, 0) };
    inline CreateGbDeviceRequest& setDeviceType(int32_t deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline CreateGbDeviceRequest& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline CreateGbDeviceRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // mediaNetProtocol Field Functions 
    bool hasMediaNetProtocol() const { return this->mediaNetProtocol_ != nullptr;};
    void deleteMediaNetProtocol() { this->mediaNetProtocol_ = nullptr;};
    inline string getMediaNetProtocol() const { DARABONBA_PTR_GET_DEFAULT(mediaNetProtocol_, "") };
    inline CreateGbDeviceRequest& setMediaNetProtocol(string mediaNetProtocol) { DARABONBA_PTR_SET_VALUE(mediaNetProtocol_, mediaNetProtocol) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateGbDeviceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline CreateGbDeviceRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // subProductKey Field Functions 
    bool hasSubProductKey() const { return this->subProductKey_ != nullptr;};
    void deleteSubProductKey() { this->subProductKey_ = nullptr;};
    inline string getSubProductKey() const { DARABONBA_PTR_GET_DEFAULT(subProductKey_, "") };
    inline CreateGbDeviceRequest& setSubProductKey(string subProductKey) { DARABONBA_PTR_SET_VALUE(subProductKey_, subProductKey) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> deviceName_ {};
    shared_ptr<int32_t> deviceType_ {};
    // This parameter is required.
    shared_ptr<string> gbId_ {};
    // This parameter is required.
    shared_ptr<string> iotInstanceId_ {};
    shared_ptr<string> mediaNetProtocol_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> productKey_ {};
    shared_ptr<string> subProductKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
