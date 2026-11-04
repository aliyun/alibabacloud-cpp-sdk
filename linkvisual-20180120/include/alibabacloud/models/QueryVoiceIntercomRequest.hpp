// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVOICEINTERCOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVOICEINTERCOMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryVoiceIntercomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVoiceIntercomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVoiceIntercomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
    };
    QueryVoiceIntercomRequest() = default ;
    QueryVoiceIntercomRequest(const QueryVoiceIntercomRequest &) = default ;
    QueryVoiceIntercomRequest(QueryVoiceIntercomRequest &&) = default ;
    QueryVoiceIntercomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVoiceIntercomRequest() = default ;
    QueryVoiceIntercomRequest& operator=(const QueryVoiceIntercomRequest &) = default ;
    QueryVoiceIntercomRequest& operator=(QueryVoiceIntercomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->productKey_ == nullptr && this->scheme_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryVoiceIntercomRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryVoiceIntercomRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryVoiceIntercomRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryVoiceIntercomRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline QueryVoiceIntercomRequest& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


  protected:
    // The DeviceName of the IPC device.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The device ID of the IPC device. The ID is issued by IoT Platform and is the unique identifier of the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation to query the ID.
    // 
    // >Notice:  As the unique identifier of the device, **IotId** has a one-to-one mapping with the combination of **ProductKey** and **DeviceName**. If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID. You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console.
    // 
    // >Notice: 
    // - If an **ID** value is available, you must specify the **ID**. Otherwise, the call fails.
    // - If the **Instance Overview** page or the **ID** value is not available, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // The **ProductKey** of the product to which the IPC device belongs.
    // You can view the information about all products under the current account on the **Products** page in the IoT Platform console or by calling the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // The connection protocol type for voice intercom. Valid values:
    // 
    // - **ws**: WebSocket. Call this operation to obtain the web voice call address when you implement the voice intercom feature on web clients. <props="china"><ph>For more information about how to implement the voice intercom feature between web clients and devices, see [Web voice intercom integration guide](https://help.aliyun.com/document_detail/2545966.html).</ph>
    // - **rtmp** (default): Real-Time Messaging Protocol (RTMP). Call this operation to obtain the corresponding voice call address when you implement the voice intercom feature by using players in Android and iOS applications. For more information about how to implement the voice intercom feature between Android and iOS applications and devices, see [Android voice intercom](https://help.aliyun.com/document_detail/260925.html) and [iOS voice intercom](https://help.aliyun.com/document_detail/253953.html).
    shared_ptr<string> scheme_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
