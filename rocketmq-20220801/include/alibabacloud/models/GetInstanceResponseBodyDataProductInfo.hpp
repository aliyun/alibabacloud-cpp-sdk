// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAPRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAPRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyDataProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(capacityType, capacityType_);
      DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
      DARABONBA_PTR_TO_JSON(msgProcessSpec, msgProcessSpec_);
      DARABONBA_PTR_TO_JSON(provisionedCapacity, provisionedCapacity_);
      DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
      DARABONBA_PTR_TO_JSON(storageEncryption, storageEncryption_);
      DARABONBA_PTR_TO_JSON(storageSecretKey, storageSecretKey_);
      DARABONBA_PTR_TO_JSON(supportAutoScaling, supportAutoScaling_);
      DARABONBA_PTR_TO_JSON(traceOn, traceOn_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(autoScaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(capacityType, capacityType_);
      DARABONBA_PTR_FROM_JSON(messageRetentionTime, messageRetentionTime_);
      DARABONBA_PTR_FROM_JSON(msgProcessSpec, msgProcessSpec_);
      DARABONBA_PTR_FROM_JSON(provisionedCapacity, provisionedCapacity_);
      DARABONBA_PTR_FROM_JSON(sendReceiveRatio, sendReceiveRatio_);
      DARABONBA_PTR_FROM_JSON(storageEncryption, storageEncryption_);
      DARABONBA_PTR_FROM_JSON(storageSecretKey, storageSecretKey_);
      DARABONBA_PTR_FROM_JSON(supportAutoScaling, supportAutoScaling_);
      DARABONBA_PTR_FROM_JSON(traceOn, traceOn_);
    };
    GetInstanceResponseBodyDataProductInfo() = default ;
    GetInstanceResponseBodyDataProductInfo(const GetInstanceResponseBodyDataProductInfo &) = default ;
    GetInstanceResponseBodyDataProductInfo(GetInstanceResponseBodyDataProductInfo &&) = default ;
    GetInstanceResponseBodyDataProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataProductInfo() = default ;
    GetInstanceResponseBodyDataProductInfo& operator=(const GetInstanceResponseBodyDataProductInfo &) = default ;
    GetInstanceResponseBodyDataProductInfo& operator=(GetInstanceResponseBodyDataProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoScaling_ != nullptr
        && this->capacityType_ != nullptr && this->messageRetentionTime_ != nullptr && this->msgProcessSpec_ != nullptr && this->provisionedCapacity_ != nullptr && this->sendReceiveRatio_ != nullptr
        && this->storageEncryption_ != nullptr && this->storageSecretKey_ != nullptr && this->supportAutoScaling_ != nullptr && this->traceOn_ != nullptr; };
    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline bool autoScaling() const { DARABONBA_PTR_GET_DEFAULT(autoScaling_, false) };
    inline GetInstanceResponseBodyDataProductInfo& setAutoScaling(bool autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };


    // capacityType Field Functions 
    bool hasCapacityType() const { return this->capacityType_ != nullptr;};
    void deleteCapacityType() { this->capacityType_ = nullptr;};
    inline string capacityType() const { DARABONBA_PTR_GET_DEFAULT(capacityType_, "") };
    inline GetInstanceResponseBodyDataProductInfo& setCapacityType(string capacityType) { DARABONBA_PTR_SET_VALUE(capacityType_, capacityType) };


    // messageRetentionTime Field Functions 
    bool hasMessageRetentionTime() const { return this->messageRetentionTime_ != nullptr;};
    void deleteMessageRetentionTime() { this->messageRetentionTime_ = nullptr;};
    inline int32_t messageRetentionTime() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionTime_, 0) };
    inline GetInstanceResponseBodyDataProductInfo& setMessageRetentionTime(int32_t messageRetentionTime) { DARABONBA_PTR_SET_VALUE(messageRetentionTime_, messageRetentionTime) };


    // msgProcessSpec Field Functions 
    bool hasMsgProcessSpec() const { return this->msgProcessSpec_ != nullptr;};
    void deleteMsgProcessSpec() { this->msgProcessSpec_ = nullptr;};
    inline string msgProcessSpec() const { DARABONBA_PTR_GET_DEFAULT(msgProcessSpec_, "") };
    inline GetInstanceResponseBodyDataProductInfo& setMsgProcessSpec(string msgProcessSpec) { DARABONBA_PTR_SET_VALUE(msgProcessSpec_, msgProcessSpec) };


    // provisionedCapacity Field Functions 
    bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
    void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
    inline int64_t provisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0L) };
    inline GetInstanceResponseBodyDataProductInfo& setProvisionedCapacity(int64_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


    // sendReceiveRatio Field Functions 
    bool hasSendReceiveRatio() const { return this->sendReceiveRatio_ != nullptr;};
    void deleteSendReceiveRatio() { this->sendReceiveRatio_ = nullptr;};
    inline float sendReceiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sendReceiveRatio_, 0.0) };
    inline GetInstanceResponseBodyDataProductInfo& setSendReceiveRatio(float sendReceiveRatio) { DARABONBA_PTR_SET_VALUE(sendReceiveRatio_, sendReceiveRatio) };


    // storageEncryption Field Functions 
    bool hasStorageEncryption() const { return this->storageEncryption_ != nullptr;};
    void deleteStorageEncryption() { this->storageEncryption_ = nullptr;};
    inline bool storageEncryption() const { DARABONBA_PTR_GET_DEFAULT(storageEncryption_, false) };
    inline GetInstanceResponseBodyDataProductInfo& setStorageEncryption(bool storageEncryption) { DARABONBA_PTR_SET_VALUE(storageEncryption_, storageEncryption) };


    // storageSecretKey Field Functions 
    bool hasStorageSecretKey() const { return this->storageSecretKey_ != nullptr;};
    void deleteStorageSecretKey() { this->storageSecretKey_ = nullptr;};
    inline string storageSecretKey() const { DARABONBA_PTR_GET_DEFAULT(storageSecretKey_, "") };
    inline GetInstanceResponseBodyDataProductInfo& setStorageSecretKey(string storageSecretKey) { DARABONBA_PTR_SET_VALUE(storageSecretKey_, storageSecretKey) };


    // supportAutoScaling Field Functions 
    bool hasSupportAutoScaling() const { return this->supportAutoScaling_ != nullptr;};
    void deleteSupportAutoScaling() { this->supportAutoScaling_ = nullptr;};
    inline bool supportAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(supportAutoScaling_, false) };
    inline GetInstanceResponseBodyDataProductInfo& setSupportAutoScaling(bool supportAutoScaling) { DARABONBA_PTR_SET_VALUE(supportAutoScaling_, supportAutoScaling) };


    // traceOn Field Functions 
    bool hasTraceOn() const { return this->traceOn_ != nullptr;};
    void deleteTraceOn() { this->traceOn_ = nullptr;};
    inline bool traceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
    inline GetInstanceResponseBodyDataProductInfo& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


  protected:
    // Specifies whether to enable the elastic TPS feature for the instance.
    // 
    // Valid values:
    // 
    // *   true: enable
    // *   false: disable
    // 
    // This parameter is valid only when the supportAutoScaling parameter is set to enable.
    std::shared_ptr<bool> autoScaling_ = nullptr;
    std::shared_ptr<string> capacityType_ = nullptr;
    // The retention period of messages. Unit: hours.
    // 
    // For information about the valid values of this parameter, see the "Limits on resource quotas" section in [Usage limits](https://help.aliyun.com/document_detail/440347.html).
    // 
    // The storage of messages in ApsaraMQ for RocketMQ is serverless and scalable. You are charged for message storage based on your actual usage. You can change the retention period of messages to adjust storage capacity. For more information, see [Storage fee](https://help.aliyun.com/document_detail/427238.html).
    std::shared_ptr<int32_t> messageRetentionTime_ = nullptr;
    // The computing specification that is used to send and receive messages. For information about the upper limit of TPS, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
    std::shared_ptr<string> msgProcessSpec_ = nullptr;
    std::shared_ptr<int64_t> provisionedCapacity_ = nullptr;
    // The ratio between sent messages and received messages in the instance.
    std::shared_ptr<float> sendReceiveRatio_ = nullptr;
    // Indicates whether storage encryption is enabled.
    std::shared_ptr<bool> storageEncryption_ = nullptr;
    // The storage encryption key.
    std::shared_ptr<string> storageSecretKey_ = nullptr;
    // Specifies whether to enable the elastic TPS feature for the instance.
    // 
    // Valid values:
    // 
    // *   true: enable
    // *   false: disable
    // 
    // After you enable the elastic TPS feature for a ApsaraMQ for RocketMQ instance, you can use a specific amount of TPS that exceeds the specification limit. You are charged for the elastic TPS feature. For more information, see [Computing fee](https://help.aliyun.com/document_detail/427237.html).
    // 
    // > The elastic TPS feature is supported by only specific instance editions. For more information, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
    std::shared_ptr<bool> supportAutoScaling_ = nullptr;
    // Indicates whether the message trace feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is not in use. By default, the message trace feature is enabled for ApsaraMQ for RocketMQ instances, regardless of whether this parameter is configured.
    std::shared_ptr<bool> traceOn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
