// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERDEVICEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERDEVICEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class TransferDeviceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferDeviceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceNameList, deviceNameList_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferDeviceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceNameList, deviceNameList_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
    };
    TransferDeviceInstanceRequest() = default ;
    TransferDeviceInstanceRequest(const TransferDeviceInstanceRequest &) = default ;
    TransferDeviceInstanceRequest(TransferDeviceInstanceRequest &&) = default ;
    TransferDeviceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferDeviceInstanceRequest() = default ;
    TransferDeviceInstanceRequest& operator=(const TransferDeviceInstanceRequest &) = default ;
    TransferDeviceInstanceRequest& operator=(TransferDeviceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceNameList_ == nullptr
        && this->productKey_ == nullptr && this->sourceInstanceId_ == nullptr && this->targetInstanceId_ == nullptr; };
    // deviceNameList Field Functions 
    bool hasDeviceNameList() const { return this->deviceNameList_ != nullptr;};
    void deleteDeviceNameList() { this->deviceNameList_ = nullptr;};
    inline const vector<string> & getDeviceNameList() const { DARABONBA_PTR_GET_CONST(deviceNameList_, vector<string>) };
    inline vector<string> getDeviceNameList() { DARABONBA_PTR_GET(deviceNameList_, vector<string>) };
    inline TransferDeviceInstanceRequest& setDeviceNameList(const vector<string> & deviceNameList) { DARABONBA_PTR_SET_VALUE(deviceNameList_, deviceNameList) };
    inline TransferDeviceInstanceRequest& setDeviceNameList(vector<string> && deviceNameList) { DARABONBA_PTR_SET_RVALUE(deviceNameList_, deviceNameList) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline TransferDeviceInstanceRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline TransferDeviceInstanceRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline TransferDeviceInstanceRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


  protected:
    // The list of names of the devices to be transferred. You can specify up to 100 device names.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> deviceNameList_ {};
    // The ProductKey of the product to which the devices belong. IoT Platform generates this unique identifier when the product is created.
    // 
    // This parameter is required.
    shared_ptr<string> productKey_ {};
    // The ID of the source instance to which the devices belong:
    // 
    // - Public instance ID: iotx-oxssharez200.
    //     > Only the China (Shanghai) region is supported. Enterprise instance ID is iotx-oxssharez200.
    // 
    // - Enterprise Edition instance ID: Log on to the IoT Platform console. On the **Instance Overview** page, click Enterprise instance name. On the **Instance Details** page, view the **Instance ID** in the **Basic Information** section.
    shared_ptr<string> sourceInstanceId_ {};
    // The ID of the target instance to which the devices are transferred. Only Enterprise Edition instances are supported as target instances.
    // 
    // You can log on to the IoT Platform console. On the **Instance Overview** page, click the instance name. On the **Instance Details** page, view the **Instance ID** in the **Basic Information** section.
    // 
    // This parameter is required.
    shared_ptr<string> targetInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
