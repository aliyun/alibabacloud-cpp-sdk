// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGBDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGBDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class UpdateGbDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGbDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGbDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    UpdateGbDeviceRequest() = default ;
    UpdateGbDeviceRequest(const UpdateGbDeviceRequest &) = default ;
    UpdateGbDeviceRequest(UpdateGbDeviceRequest &&) = default ;
    UpdateGbDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGbDeviceRequest() = default ;
    UpdateGbDeviceRequest& operator=(const UpdateGbDeviceRequest &) = default ;
    UpdateGbDeviceRequest& operator=(UpdateGbDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->deviceName_ == nullptr && this->gbId_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->password_ == nullptr
        && this->productKey_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateGbDeviceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline UpdateGbDeviceRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline UpdateGbDeviceRequest& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline UpdateGbDeviceRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline UpdateGbDeviceRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateGbDeviceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline UpdateGbDeviceRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> deviceName_ {};
    shared_ptr<string> gbId_ {};
    shared_ptr<string> iotId_ {};
    // This parameter is required.
    shared_ptr<string> iotInstanceId_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
