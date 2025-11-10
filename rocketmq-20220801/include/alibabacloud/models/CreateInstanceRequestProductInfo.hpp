// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTPRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTPRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateInstanceRequestProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(capacityType, capacityType_);
      DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
      DARABONBA_PTR_TO_JSON(msgProcessSpec, msgProcessSpec_);
      DARABONBA_PTR_TO_JSON(provisionedCapacity, provisionedCapacity_);
      DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
      DARABONBA_PTR_TO_JSON(storageEncryption, storageEncryption_);
      DARABONBA_PTR_TO_JSON(storageSecretKey, storageSecretKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(autoScaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(capacityType, capacityType_);
      DARABONBA_PTR_FROM_JSON(messageRetentionTime, messageRetentionTime_);
      DARABONBA_PTR_FROM_JSON(msgProcessSpec, msgProcessSpec_);
      DARABONBA_PTR_FROM_JSON(provisionedCapacity, provisionedCapacity_);
      DARABONBA_PTR_FROM_JSON(sendReceiveRatio, sendReceiveRatio_);
      DARABONBA_PTR_FROM_JSON(storageEncryption, storageEncryption_);
      DARABONBA_PTR_FROM_JSON(storageSecretKey, storageSecretKey_);
    };
    CreateInstanceRequestProductInfo() = default ;
    CreateInstanceRequestProductInfo(const CreateInstanceRequestProductInfo &) = default ;
    CreateInstanceRequestProductInfo(CreateInstanceRequestProductInfo &&) = default ;
    CreateInstanceRequestProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestProductInfo() = default ;
    CreateInstanceRequestProductInfo& operator=(const CreateInstanceRequestProductInfo &) = default ;
    CreateInstanceRequestProductInfo& operator=(CreateInstanceRequestProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScaling_ == nullptr
        && return this->capacityType_ == nullptr && return this->messageRetentionTime_ == nullptr && return this->msgProcessSpec_ == nullptr && return this->provisionedCapacity_ == nullptr && return this->sendReceiveRatio_ == nullptr
        && return this->storageEncryption_ == nullptr && return this->storageSecretKey_ == nullptr; };
    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline bool autoScaling() const { DARABONBA_PTR_GET_DEFAULT(autoScaling_, false) };
    inline CreateInstanceRequestProductInfo& setAutoScaling(bool autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };


    // capacityType Field Functions 
    bool hasCapacityType() const { return this->capacityType_ != nullptr;};
    void deleteCapacityType() { this->capacityType_ = nullptr;};
    inline string capacityType() const { DARABONBA_PTR_GET_DEFAULT(capacityType_, "") };
    inline CreateInstanceRequestProductInfo& setCapacityType(string capacityType) { DARABONBA_PTR_SET_VALUE(capacityType_, capacityType) };


    // messageRetentionTime Field Functions 
    bool hasMessageRetentionTime() const { return this->messageRetentionTime_ != nullptr;};
    void deleteMessageRetentionTime() { this->messageRetentionTime_ = nullptr;};
    inline int32_t messageRetentionTime() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionTime_, 0) };
    inline CreateInstanceRequestProductInfo& setMessageRetentionTime(int32_t messageRetentionTime) { DARABONBA_PTR_SET_VALUE(messageRetentionTime_, messageRetentionTime) };


    // msgProcessSpec Field Functions 
    bool hasMsgProcessSpec() const { return this->msgProcessSpec_ != nullptr;};
    void deleteMsgProcessSpec() { this->msgProcessSpec_ = nullptr;};
    inline string msgProcessSpec() const { DARABONBA_PTR_GET_DEFAULT(msgProcessSpec_, "") };
    inline CreateInstanceRequestProductInfo& setMsgProcessSpec(string msgProcessSpec) { DARABONBA_PTR_SET_VALUE(msgProcessSpec_, msgProcessSpec) };


    // provisionedCapacity Field Functions 
    bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
    void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
    inline int64_t provisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0L) };
    inline CreateInstanceRequestProductInfo& setProvisionedCapacity(int64_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


    // sendReceiveRatio Field Functions 
    bool hasSendReceiveRatio() const { return this->sendReceiveRatio_ != nullptr;};
    void deleteSendReceiveRatio() { this->sendReceiveRatio_ = nullptr;};
    inline float sendReceiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sendReceiveRatio_, 0.0) };
    inline CreateInstanceRequestProductInfo& setSendReceiveRatio(float sendReceiveRatio) { DARABONBA_PTR_SET_VALUE(sendReceiveRatio_, sendReceiveRatio) };


    // storageEncryption Field Functions 
    bool hasStorageEncryption() const { return this->storageEncryption_ != nullptr;};
    void deleteStorageEncryption() { this->storageEncryption_ = nullptr;};
    inline bool storageEncryption() const { DARABONBA_PTR_GET_DEFAULT(storageEncryption_, false) };
    inline CreateInstanceRequestProductInfo& setStorageEncryption(bool storageEncryption) { DARABONBA_PTR_SET_VALUE(storageEncryption_, storageEncryption) };


    // storageSecretKey Field Functions 
    bool hasStorageSecretKey() const { return this->storageSecretKey_ != nullptr;};
    void deleteStorageSecretKey() { this->storageSecretKey_ = nullptr;};
    inline string storageSecretKey() const { DARABONBA_PTR_GET_DEFAULT(storageSecretKey_, "") };
    inline CreateInstanceRequestProductInfo& setStorageSecretKey(string storageSecretKey) { DARABONBA_PTR_SET_VALUE(storageSecretKey_, storageSecretKey) };


  protected:
    // Specifies whether to enable the elastic TPS feature for the instance.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // After you enable the elastic TPS feature for an ApsaraMQ for RocketMQ instance, you can use a specific amount of TPS that exceeds the specification limit. You are charged for the elastic TPS feature. For more information, see [Computing fees](https://help.aliyun.com/document_detail/427237.html).
    // 
    // >  The elastic TPS feature is supported only by instances of specific editions. For more information, see [Instance editions](https://help.aliyun.com/document_detail/444715.html).
    std::shared_ptr<bool> autoScaling_ = nullptr;
    std::shared_ptr<string> capacityType_ = nullptr;
    // The retention period of messages. Unit: hours.
    // 
    // For information about the valid values of this parameter, see the "Limits on resource quotas" section of the [Limits](https://help.aliyun.com/document_detail/440347.html) topic.
    // 
    // ApsaraMQ for RocketMQ supports serverless scaling of message storage. You are charged storage fees based on your actual storage usage. You can change the retention period of messages to manage storage capacity. For more information, see [Storage fees](https://help.aliyun.com/document_detail/427238.html).
    std::shared_ptr<int32_t> messageRetentionTime_ = nullptr;
    // The computing specification that specifies the messaging transactions per second (TPS) of the instance. For more information, see [Instance editions](https://help.aliyun.com/document_detail/444715.html).
    std::shared_ptr<string> msgProcessSpec_ = nullptr;
    std::shared_ptr<int64_t> provisionedCapacity_ = nullptr;
    // The ratio of the message sending TPS to the messaging TPS of the instance.
    // 
    // For example, if the maximum messaging TPS of an instance is 1,000 and the ratio of the message sending TPS to the messaging TPS of the instance is 0.8, the maximum message sending TPS of the instance is 800 and the maximum message receiving TPS is 200.
    // 
    // Valid values: 0 to 1. Default value: 0.5.
    std::shared_ptr<float> sendReceiveRatio_ = nullptr;
    // Specifies whether to enable the encryption at rest feature.
    std::shared_ptr<bool> storageEncryption_ = nullptr;
    // The key for encryption at rest.
    std::shared_ptr<string> storageSecretKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
