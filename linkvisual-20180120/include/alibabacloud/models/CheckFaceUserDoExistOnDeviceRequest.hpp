// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKFACEUSERDOEXISTONDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKFACEUSERDOEXISTONDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class CheckFaceUserDoExistOnDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckFaceUserDoExistOnDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckFaceUserDoExistOnDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CheckFaceUserDoExistOnDeviceRequest() = default ;
    CheckFaceUserDoExistOnDeviceRequest(const CheckFaceUserDoExistOnDeviceRequest &) = default ;
    CheckFaceUserDoExistOnDeviceRequest(CheckFaceUserDoExistOnDeviceRequest &&) = default ;
    CheckFaceUserDoExistOnDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckFaceUserDoExistOnDeviceRequest() = default ;
    CheckFaceUserDoExistOnDeviceRequest& operator=(const CheckFaceUserDoExistOnDeviceRequest &) = default ;
    CheckFaceUserDoExistOnDeviceRequest& operator=(CheckFaceUserDoExistOnDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->iotInstanceId_ == nullptr && this->isolationId_ == nullptr && this->productKey_ == nullptr && this->userId_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline CheckFaceUserDoExistOnDeviceRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline CheckFaceUserDoExistOnDeviceRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline CheckFaceUserDoExistOnDeviceRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline CheckFaceUserDoExistOnDeviceRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CheckFaceUserDoExistOnDeviceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The device name.
    // 
    // This parameter is required.
    shared_ptr<string> deviceName_ {};
    // The isolation ID.
    shared_ptr<string> iotInstanceId_ {};
    // The isolation ID.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The ProductKey of the IoT Platform product.
    // 
    // This parameter is required.
    shared_ptr<string> productKey_ {};
    // The user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
