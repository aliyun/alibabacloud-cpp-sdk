// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAEXTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAEXTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyDataExtConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataExtConfig& obj) { 
      DARABONBA_PTR_TO_JSON(aclType, aclType_);
      DARABONBA_PTR_TO_JSON(autoScaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(flowOutBandwidth, flowOutBandwidth_);
      DARABONBA_PTR_TO_JSON(flowOutType, flowOutType_);
      DARABONBA_PTR_TO_JSON(internetSpec, internetSpec_);
      DARABONBA_PTR_TO_JSON(messageRetentionTime, messageRetentionTime_);
      DARABONBA_PTR_TO_JSON(msgProcessSpec, msgProcessSpec_);
      DARABONBA_PTR_TO_JSON(sendReceiveRatio, sendReceiveRatio_);
      DARABONBA_PTR_TO_JSON(supportAutoScaling, supportAutoScaling_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataExtConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(aclType, aclType_);
      DARABONBA_PTR_FROM_JSON(autoScaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(flowOutBandwidth, flowOutBandwidth_);
      DARABONBA_PTR_FROM_JSON(flowOutType, flowOutType_);
      DARABONBA_PTR_FROM_JSON(internetSpec, internetSpec_);
      DARABONBA_PTR_FROM_JSON(messageRetentionTime, messageRetentionTime_);
      DARABONBA_PTR_FROM_JSON(msgProcessSpec, msgProcessSpec_);
      DARABONBA_PTR_FROM_JSON(sendReceiveRatio, sendReceiveRatio_);
      DARABONBA_PTR_FROM_JSON(supportAutoScaling, supportAutoScaling_);
    };
    GetInstanceResponseBodyDataExtConfig() = default ;
    GetInstanceResponseBodyDataExtConfig(const GetInstanceResponseBodyDataExtConfig &) = default ;
    GetInstanceResponseBodyDataExtConfig(GetInstanceResponseBodyDataExtConfig &&) = default ;
    GetInstanceResponseBodyDataExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataExtConfig() = default ;
    GetInstanceResponseBodyDataExtConfig& operator=(const GetInstanceResponseBodyDataExtConfig &) = default ;
    GetInstanceResponseBodyDataExtConfig& operator=(GetInstanceResponseBodyDataExtConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclType_ == nullptr
        && return this->autoScaling_ == nullptr && return this->flowOutBandwidth_ == nullptr && return this->flowOutType_ == nullptr && return this->internetSpec_ == nullptr && return this->messageRetentionTime_ == nullptr
        && return this->msgProcessSpec_ == nullptr && return this->sendReceiveRatio_ == nullptr && return this->supportAutoScaling_ == nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline GetInstanceResponseBodyDataExtConfig& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline bool autoScaling() const { DARABONBA_PTR_GET_DEFAULT(autoScaling_, false) };
    inline GetInstanceResponseBodyDataExtConfig& setAutoScaling(bool autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };


    // flowOutBandwidth Field Functions 
    bool hasFlowOutBandwidth() const { return this->flowOutBandwidth_ != nullptr;};
    void deleteFlowOutBandwidth() { this->flowOutBandwidth_ = nullptr;};
    inline int32_t flowOutBandwidth() const { DARABONBA_PTR_GET_DEFAULT(flowOutBandwidth_, 0) };
    inline GetInstanceResponseBodyDataExtConfig& setFlowOutBandwidth(int32_t flowOutBandwidth) { DARABONBA_PTR_SET_VALUE(flowOutBandwidth_, flowOutBandwidth) };


    // flowOutType Field Functions 
    bool hasFlowOutType() const { return this->flowOutType_ != nullptr;};
    void deleteFlowOutType() { this->flowOutType_ = nullptr;};
    inline string flowOutType() const { DARABONBA_PTR_GET_DEFAULT(flowOutType_, "") };
    inline GetInstanceResponseBodyDataExtConfig& setFlowOutType(string flowOutType) { DARABONBA_PTR_SET_VALUE(flowOutType_, flowOutType) };


    // internetSpec Field Functions 
    bool hasInternetSpec() const { return this->internetSpec_ != nullptr;};
    void deleteInternetSpec() { this->internetSpec_ = nullptr;};
    inline string internetSpec() const { DARABONBA_PTR_GET_DEFAULT(internetSpec_, "") };
    inline GetInstanceResponseBodyDataExtConfig& setInternetSpec(string internetSpec) { DARABONBA_PTR_SET_VALUE(internetSpec_, internetSpec) };


    // messageRetentionTime Field Functions 
    bool hasMessageRetentionTime() const { return this->messageRetentionTime_ != nullptr;};
    void deleteMessageRetentionTime() { this->messageRetentionTime_ = nullptr;};
    inline int32_t messageRetentionTime() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionTime_, 0) };
    inline GetInstanceResponseBodyDataExtConfig& setMessageRetentionTime(int32_t messageRetentionTime) { DARABONBA_PTR_SET_VALUE(messageRetentionTime_, messageRetentionTime) };


    // msgProcessSpec Field Functions 
    bool hasMsgProcessSpec() const { return this->msgProcessSpec_ != nullptr;};
    void deleteMsgProcessSpec() { this->msgProcessSpec_ = nullptr;};
    inline string msgProcessSpec() const { DARABONBA_PTR_GET_DEFAULT(msgProcessSpec_, "") };
    inline GetInstanceResponseBodyDataExtConfig& setMsgProcessSpec(string msgProcessSpec) { DARABONBA_PTR_SET_VALUE(msgProcessSpec_, msgProcessSpec) };


    // sendReceiveRatio Field Functions 
    bool hasSendReceiveRatio() const { return this->sendReceiveRatio_ != nullptr;};
    void deleteSendReceiveRatio() { this->sendReceiveRatio_ = nullptr;};
    inline float sendReceiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sendReceiveRatio_, 0.0) };
    inline GetInstanceResponseBodyDataExtConfig& setSendReceiveRatio(float sendReceiveRatio) { DARABONBA_PTR_SET_VALUE(sendReceiveRatio_, sendReceiveRatio) };


    // supportAutoScaling Field Functions 
    bool hasSupportAutoScaling() const { return this->supportAutoScaling_ != nullptr;};
    void deleteSupportAutoScaling() { this->supportAutoScaling_ = nullptr;};
    inline bool supportAutoScaling() const { DARABONBA_PTR_GET_DEFAULT(supportAutoScaling_, false) };
    inline GetInstanceResponseBodyDataExtConfig& setSupportAutoScaling(bool supportAutoScaling) { DARABONBA_PTR_SET_VALUE(supportAutoScaling_, supportAutoScaling) };


  protected:
    // The authentication type of the instance.
    // 
    // Valid value:
    // 
    // *   default: intelligent authentication
    std::shared_ptr<string> aclType_ = nullptr;
    // Specifies whether to enable the elastic TPS feature for the instance.
    // 
    // Valid values:
    // 
    // *   true: enable
    // *   false: disable
    // 
    // This parameter is valid only when the supportAutoScaling parameter is set to enable.
    std::shared_ptr<bool> autoScaling_ = nullptr;
    // The Internet bandwidth. Unit: MB/s.
    std::shared_ptr<int32_t> flowOutBandwidth_ = nullptr;
    // The metering method of Internet usage.
    // 
    // Valid values:
    // 
    // *   PayByTraffic: pay-by-traffic
    // *   paybybandwidth: pay-by-bandwidth
    // *   uninvolved: N/A
    std::shared_ptr<string> flowOutType_ = nullptr;
    // Indicates whether Internet access is enabled.
    // 
    // Valid values:
    // 
    // *   enable
    // *   disable
    // 
    // By default, you can access ApsaraMQ for RocketMQ instances in virtual private clouds (VPCs). If you enable the Internet access feature, you are charged for Internet outbound bandwidth. For more information, see [Internet access fees](https://help.aliyun.com/document_detail/427240.html).
    std::shared_ptr<string> internetSpec_ = nullptr;
    // The retention period of messages. Unit: hours.
    // 
    // For information about the valid values of this parameter, see the "Limits on resource quotas" section in [Usage limits](https://help.aliyun.com/document_detail/440347.html).
    // 
    // The storage of messages in ApsaraMQ for RocketMQ is serverless and scalable. You are charged for message storage based on your actual usage. You can change the retention period of messages to adjust storage capacity. For more information, see [Storage fee](https://help.aliyun.com/document_detail/427238.html).
    std::shared_ptr<int32_t> messageRetentionTime_ = nullptr;
    // The computing specification that is used to send and receive messages. For information about the upper limit of TPS, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
    std::shared_ptr<string> msgProcessSpec_ = nullptr;
    // The ratio between sent messages and received messages in the instance.
    std::shared_ptr<float> sendReceiveRatio_ = nullptr;
    // Specifies whether the elastic TPS feature is supported by the instance.
    // 
    // Valid values:
    // 
    // *   true: enable
    // *   false: disable
    // 
    // After you enable the elastic TPS feature for a ApsaraMQ for RocketMQ instance, you can use a specific amount of TPS that exceeds the specification limit. You are charged for the elastic TPS feature. For more information, see [Computing fee](https://help.aliyun.com/document_detail/427237.html).
    // 
    // > The elastic TPS feature is supported only by specific instance editions. For more information, see [Instance specifications](https://help.aliyun.com/document_detail/444715.html).
    std::shared_ptr<bool> supportAutoScaling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
