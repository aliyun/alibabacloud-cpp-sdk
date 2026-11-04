// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERTMPDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERTMPDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class CreateRtmpDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRtmpDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(PullAuthKey, pullAuthKey_);
      DARABONBA_PTR_TO_JSON(PullKeyExpireTime, pullKeyExpireTime_);
      DARABONBA_PTR_TO_JSON(PushAuthKey, pushAuthKey_);
      DARABONBA_PTR_TO_JSON(PushKeyExpireTime, pushKeyExpireTime_);
      DARABONBA_PTR_TO_JSON(SubStreamName, subStreamName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRtmpDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(PullAuthKey, pullAuthKey_);
      DARABONBA_PTR_FROM_JSON(PullKeyExpireTime, pullKeyExpireTime_);
      DARABONBA_PTR_FROM_JSON(PushAuthKey, pushAuthKey_);
      DARABONBA_PTR_FROM_JSON(PushKeyExpireTime, pushKeyExpireTime_);
      DARABONBA_PTR_FROM_JSON(SubStreamName, subStreamName_);
    };
    CreateRtmpDeviceRequest() = default ;
    CreateRtmpDeviceRequest(const CreateRtmpDeviceRequest &) = default ;
    CreateRtmpDeviceRequest(CreateRtmpDeviceRequest &&) = default ;
    CreateRtmpDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRtmpDeviceRequest() = default ;
    CreateRtmpDeviceRequest& operator=(const CreateRtmpDeviceRequest &) = default ;
    CreateRtmpDeviceRequest& operator=(CreateRtmpDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->deviceName_ == nullptr && this->iotInstanceId_ == nullptr && this->productKey_ == nullptr && this->pullAuthKey_ == nullptr && this->pullKeyExpireTime_ == nullptr
        && this->pushAuthKey_ == nullptr && this->pushKeyExpireTime_ == nullptr && this->subStreamName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRtmpDeviceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline CreateRtmpDeviceRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline CreateRtmpDeviceRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline CreateRtmpDeviceRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // pullAuthKey Field Functions 
    bool hasPullAuthKey() const { return this->pullAuthKey_ != nullptr;};
    void deletePullAuthKey() { this->pullAuthKey_ = nullptr;};
    inline string getPullAuthKey() const { DARABONBA_PTR_GET_DEFAULT(pullAuthKey_, "") };
    inline CreateRtmpDeviceRequest& setPullAuthKey(string pullAuthKey) { DARABONBA_PTR_SET_VALUE(pullAuthKey_, pullAuthKey) };


    // pullKeyExpireTime Field Functions 
    bool hasPullKeyExpireTime() const { return this->pullKeyExpireTime_ != nullptr;};
    void deletePullKeyExpireTime() { this->pullKeyExpireTime_ = nullptr;};
    inline int32_t getPullKeyExpireTime() const { DARABONBA_PTR_GET_DEFAULT(pullKeyExpireTime_, 0) };
    inline CreateRtmpDeviceRequest& setPullKeyExpireTime(int32_t pullKeyExpireTime) { DARABONBA_PTR_SET_VALUE(pullKeyExpireTime_, pullKeyExpireTime) };


    // pushAuthKey Field Functions 
    bool hasPushAuthKey() const { return this->pushAuthKey_ != nullptr;};
    void deletePushAuthKey() { this->pushAuthKey_ = nullptr;};
    inline string getPushAuthKey() const { DARABONBA_PTR_GET_DEFAULT(pushAuthKey_, "") };
    inline CreateRtmpDeviceRequest& setPushAuthKey(string pushAuthKey) { DARABONBA_PTR_SET_VALUE(pushAuthKey_, pushAuthKey) };


    // pushKeyExpireTime Field Functions 
    bool hasPushKeyExpireTime() const { return this->pushKeyExpireTime_ != nullptr;};
    void deletePushKeyExpireTime() { this->pushKeyExpireTime_ = nullptr;};
    inline int32_t getPushKeyExpireTime() const { DARABONBA_PTR_GET_DEFAULT(pushKeyExpireTime_, 0) };
    inline CreateRtmpDeviceRequest& setPushKeyExpireTime(int32_t pushKeyExpireTime) { DARABONBA_PTR_SET_VALUE(pushKeyExpireTime_, pushKeyExpireTime) };


    // subStreamName Field Functions 
    bool hasSubStreamName() const { return this->subStreamName_ != nullptr;};
    void deleteSubStreamName() { this->subStreamName_ = nullptr;};
    inline string getSubStreamName() const { DARABONBA_PTR_GET_DEFAULT(subStreamName_, "") };
    inline CreateRtmpDeviceRequest& setSubStreamName(string subStreamName) { DARABONBA_PTR_SET_VALUE(subStreamName_, subStreamName) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> deviceName_ {};
    // This parameter is required.
    shared_ptr<string> iotInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> productKey_ {};
    shared_ptr<string> pullAuthKey_ {};
    shared_ptr<int32_t> pullKeyExpireTime_ {};
    shared_ptr<string> pushAuthKey_ {};
    shared_ptr<int32_t> pushKeyExpireTime_ {};
    shared_ptr<string> subStreamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
