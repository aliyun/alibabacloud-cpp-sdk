// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMONTHRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMONTHRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryMonthRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMonthRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(Month, month_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMonthRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(Month, month_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    QueryMonthRecordRequest() = default ;
    QueryMonthRecordRequest(const QueryMonthRecordRequest &) = default ;
    QueryMonthRecordRequest(QueryMonthRecordRequest &&) = default ;
    QueryMonthRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMonthRecordRequest() = default ;
    QueryMonthRecordRequest& operator=(const QueryMonthRecordRequest &) = default ;
    QueryMonthRecordRequest& operator=(QueryMonthRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->month_ == nullptr && this->productKey_ == nullptr; };
    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryMonthRecordRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryMonthRecordRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryMonthRecordRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline string getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, "") };
    inline QueryMonthRecordRequest& setMonth(string month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryMonthRecordRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // The DeviceName of the IP camera. You can view the **DeviceName** on the **Devices** page in the IoT Platform console.>Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The IotId of the IP camera. The IotId is the unique identifier issued by IoT Platform for the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the IotId.>Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** is the unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID.
    // 
    // <props="china">You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console. If the instance has an ID, you must specify the ID. Otherwise, the call fails.
    // 
    // <props="china">
    // > If the public instance does not have an ID, see [How to obtain an instance ID](https://help.aliyun.com/document_detail/267533.html).
    // 
    // <props="intl">You do not need to specify this parameter.
    shared_ptr<string> iotInstanceId_ {};
    // The month to query, in the YYYYMM format.
    // 
    // This parameter is required.
    shared_ptr<string> month_ {};
    // The ProductKey of the product to which the IP camera belongs. You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query all products under the current account.>Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
