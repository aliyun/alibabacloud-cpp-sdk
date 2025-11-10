// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTPRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTPRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateInstanceRequestProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
      DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
      DARABONBA_PTR_TO_JSON(traceOn, traceOn_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(autoScaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(messageRetentionTime, messageRetentionTime_);
      DARABONBA_PTR_FROM_JSON(sendReceiveRatio, sendReceiveRatio_);
      DARABONBA_PTR_FROM_JSON(traceOn, traceOn_);
    };
    UpdateInstanceRequestProductInfo() = default ;
    UpdateInstanceRequestProductInfo(const UpdateInstanceRequestProductInfo &) = default ;
    UpdateInstanceRequestProductInfo(UpdateInstanceRequestProductInfo &&) = default ;
    UpdateInstanceRequestProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestProductInfo() = default ;
    UpdateInstanceRequestProductInfo& operator=(const UpdateInstanceRequestProductInfo &) = default ;
    UpdateInstanceRequestProductInfo& operator=(UpdateInstanceRequestProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScaling_ == nullptr
        && return this->messageRetentionTime_ == nullptr && return this->sendReceiveRatio_ == nullptr && return this->traceOn_ == nullptr; };
    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline bool autoScaling() const { DARABONBA_PTR_GET_DEFAULT(autoScaling_, false) };
    inline UpdateInstanceRequestProductInfo& setAutoScaling(bool autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };


    // messageRetentionTime Field Functions 
    bool hasMessageRetentionTime() const { return this->messageRetentionTime_ != nullptr;};
    void deleteMessageRetentionTime() { this->messageRetentionTime_ = nullptr;};
    inline int32_t messageRetentionTime() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionTime_, 0) };
    inline UpdateInstanceRequestProductInfo& setMessageRetentionTime(int32_t messageRetentionTime) { DARABONBA_PTR_SET_VALUE(messageRetentionTime_, messageRetentionTime) };


    // sendReceiveRatio Field Functions 
    bool hasSendReceiveRatio() const { return this->sendReceiveRatio_ != nullptr;};
    void deleteSendReceiveRatio() { this->sendReceiveRatio_ = nullptr;};
    inline float sendReceiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sendReceiveRatio_, 0.0) };
    inline UpdateInstanceRequestProductInfo& setSendReceiveRatio(float sendReceiveRatio) { DARABONBA_PTR_SET_VALUE(sendReceiveRatio_, sendReceiveRatio) };


    // traceOn Field Functions 
    bool hasTraceOn() const { return this->traceOn_ != nullptr;};
    void deleteTraceOn() { this->traceOn_ = nullptr;};
    inline bool traceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
    inline UpdateInstanceRequestProductInfo& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


  protected:
    // Specifies whether to enable the elastic transactions per second (TPS) feature for the instance.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // After you enable the elastic TPS feature for an ApsaraMQ for RocketMQ instance, you can use a specific number of TPS that exceeds the specification limit. You are charged for using the elastic TPS feature. For more information, see [Computing fees](https://help.aliyun.com/document_detail/427237.html).
    // 
    // >  The elastic TPS feature is supported only by specific instance editions. For more information, see [Instance editions](https://help.aliyun.com/document_detail/444715.html).
    std::shared_ptr<bool> autoScaling_ = nullptr;
    // The retention period of messages. Unit: hours.
    // 
    // For information about the valid values of this parameter, see the "Limits on resource quotas" section of the [Limits](https://help.aliyun.com/document_detail/440347.html) topic.
    // 
    // ApsaraMQ for RocketMQ supports serverless scaling of message storage. You are charged storage fees based on your actual storage usage. You can change the retention period of messages to manage storage capacity. For more information, see [Storage fees](https://help.aliyun.com/document_detail/427238.html).
    std::shared_ptr<int32_t> messageRetentionTime_ = nullptr;
    // The ratio of the number of messages that you can send to the number of messages that you can receive on the instance.
    // 
    // Value values: 0.25 to 1.
    std::shared_ptr<float> sendReceiveRatio_ = nullptr;
    // Specifies whether to enable the message trace feature.
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
