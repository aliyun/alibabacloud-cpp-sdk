// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARFACEDEVICEDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEARFACEDEVICEDBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class ClearFaceDeviceDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearFaceDeviceDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, ClearFaceDeviceDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    ClearFaceDeviceDBRequest() = default ;
    ClearFaceDeviceDBRequest(const ClearFaceDeviceDBRequest &) = default ;
    ClearFaceDeviceDBRequest(ClearFaceDeviceDBRequest &&) = default ;
    ClearFaceDeviceDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearFaceDeviceDBRequest() = default ;
    ClearFaceDeviceDBRequest& operator=(const ClearFaceDeviceDBRequest &) = default ;
    ClearFaceDeviceDBRequest& operator=(ClearFaceDeviceDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->iotInstanceId_ == nullptr && this->isolationId_ == nullptr && this->productKey_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline ClearFaceDeviceDBRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline ClearFaceDeviceDBRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline ClearFaceDeviceDBRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline ClearFaceDeviceDBRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // The name of the device corresponding to the V-series edge all-in-one machine. On the **Basic Information** tab of the **Host Details** page for the V-series edge all-in-one machine in the Edge Computing console, find the **Video Gateway** information and obtain the **DeviceName** value.
    // 
    // This parameter is required.
    shared_ptr<string> deviceName_ {};
    // The instance ID.
    // 
    // You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console. If an ID value exists, you must pass this ID value. Otherwise, the call fails.
    // 
    // > If a public instance does not have an ID value, see [How to obtain an instance ID](https://help.aliyun.com/document_detail/267533.html).
    shared_ptr<string> iotInstanceId_ {};
    // The business isolation ID.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The unique identifier of the product to which the device corresponding to the V-series edge all-in-one machine belongs. On the **Basic Information** tab of the **Host Details** page for the V-series edge all-in-one machine in the Edge Computing console, find the **Video Gateway** information and obtain the **ProductKey** value.
    // 
    // This parameter is required.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
