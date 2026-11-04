// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYVISIONDEVICEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYVISIONDEVICEINFOREQUEST_HPP_
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
  class BatchQueryVisionDeviceInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryVisionDeviceInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceNameList, deviceNameList_);
      DARABONBA_PTR_TO_JSON(IotIdList, iotIdList_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryVisionDeviceInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceNameList, deviceNameList_);
      DARABONBA_PTR_FROM_JSON(IotIdList, iotIdList_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    BatchQueryVisionDeviceInfoRequest() = default ;
    BatchQueryVisionDeviceInfoRequest(const BatchQueryVisionDeviceInfoRequest &) = default ;
    BatchQueryVisionDeviceInfoRequest(BatchQueryVisionDeviceInfoRequest &&) = default ;
    BatchQueryVisionDeviceInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryVisionDeviceInfoRequest() = default ;
    BatchQueryVisionDeviceInfoRequest& operator=(const BatchQueryVisionDeviceInfoRequest &) = default ;
    BatchQueryVisionDeviceInfoRequest& operator=(BatchQueryVisionDeviceInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceNameList_ == nullptr
        && this->iotIdList_ == nullptr && this->iotInstanceId_ == nullptr && this->productKey_ == nullptr; };
    // deviceNameList Field Functions 
    bool hasDeviceNameList() const { return this->deviceNameList_ != nullptr;};
    void deleteDeviceNameList() { this->deviceNameList_ = nullptr;};
    inline const vector<string> & getDeviceNameList() const { DARABONBA_PTR_GET_CONST(deviceNameList_, vector<string>) };
    inline vector<string> getDeviceNameList() { DARABONBA_PTR_GET(deviceNameList_, vector<string>) };
    inline BatchQueryVisionDeviceInfoRequest& setDeviceNameList(const vector<string> & deviceNameList) { DARABONBA_PTR_SET_VALUE(deviceNameList_, deviceNameList) };
    inline BatchQueryVisionDeviceInfoRequest& setDeviceNameList(vector<string> && deviceNameList) { DARABONBA_PTR_SET_RVALUE(deviceNameList_, deviceNameList) };


    // iotIdList Field Functions 
    bool hasIotIdList() const { return this->iotIdList_ != nullptr;};
    void deleteIotIdList() { this->iotIdList_ = nullptr;};
    inline const vector<string> & getIotIdList() const { DARABONBA_PTR_GET_CONST(iotIdList_, vector<string>) };
    inline vector<string> getIotIdList() { DARABONBA_PTR_GET(iotIdList_, vector<string>) };
    inline BatchQueryVisionDeviceInfoRequest& setIotIdList(const vector<string> & iotIdList) { DARABONBA_PTR_SET_VALUE(iotIdList_, iotIdList) };
    inline BatchQueryVisionDeviceInfoRequest& setIotIdList(vector<string> && iotIdList) { DARABONBA_PTR_SET_RVALUE(iotIdList_, iotIdList) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline BatchQueryVisionDeviceInfoRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline BatchQueryVisionDeviceInfoRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    shared_ptr<vector<string>> deviceNameList_ {};
    shared_ptr<vector<string>> iotIdList_ {};
    // This parameter is required.
    shared_ptr<string> iotInstanceId_ {};
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
