// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCEKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCEKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSourceSourceKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSourceSourceKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(OffsetReset, offsetReset_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(ValueDataType, valueDataType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSourceSourceKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(OffsetReset, offsetReset_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ValueDataType, valueDataType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateEventStreamingRequestSourceSourceKafkaParameters() = default ;
    UpdateEventStreamingRequestSourceSourceKafkaParameters(const UpdateEventStreamingRequestSourceSourceKafkaParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceKafkaParameters(UpdateEventStreamingRequestSourceSourceKafkaParameters &&) = default ;
    UpdateEventStreamingRequestSourceSourceKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSourceSourceKafkaParameters() = default ;
    UpdateEventStreamingRequestSourceSourceKafkaParameters& operator=(const UpdateEventStreamingRequestSourceSourceKafkaParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceKafkaParameters& operator=(UpdateEventStreamingRequestSourceSourceKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerGroup_ != nullptr
        && this->instanceId_ != nullptr && this->network_ != nullptr && this->offsetReset_ != nullptr && this->regionId_ != nullptr && this->securityGroupId_ != nullptr
        && this->topic_ != nullptr && this->vSwitchIds_ != nullptr && this->valueDataType_ != nullptr && this->vpcId_ != nullptr; };
    // consumerGroup Field Functions 
    bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
    void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
    inline string consumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // offsetReset Field Functions 
    bool hasOffsetReset() const { return this->offsetReset_ != nullptr;};
    void deleteOffsetReset() { this->offsetReset_ = nullptr;};
    inline string offsetReset() const { DARABONBA_PTR_GET_DEFAULT(offsetReset_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setOffsetReset(string offsetReset) { DARABONBA_PTR_SET_VALUE(offsetReset_, offsetReset) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // valueDataType Field Functions 
    bool hasValueDataType() const { return this->valueDataType_ != nullptr;};
    void deleteValueDataType() { this->valueDataType_ = nullptr;};
    inline string valueDataType() const { DARABONBA_PTR_GET_DEFAULT(valueDataType_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setValueDataType(string valueDataType) { DARABONBA_PTR_SET_VALUE(valueDataType_, valueDataType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateEventStreamingRequestSourceSourceKafkaParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The group ID of the consumer that subscribes to the topic.
    std::shared_ptr<string> consumerGroup_ = nullptr;
    // The ID of the ApsaraMQ for Kafka instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The network setting. Default value: Default. The value PublicNetwork specifies a virtual private cloud (VPC).
    std::shared_ptr<string> network_ = nullptr;
    // The offset from which messages are consumed.
    std::shared_ptr<string> offsetReset_ = nullptr;
    // The ID of the region where the ApsaraMQ for Kafka instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the security group to which the ApsaraMQ for Kafka instance belongs.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the topic on the ApsaraMQ for Kafka instance.
    std::shared_ptr<string> topic_ = nullptr;
    // The ID of the vSwitch with which the ApsaraMQ for Kafka instance is associated.
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    // The encoding or decoding method. Valid values: Json, Text, and Binary. The value Json specifies that binary data is decoded into strings based on UTF-8 encoding and then parsed into the JSON format. The value Text specifies that binary data is decoded into strings based on UTF-8 encoding and then put into the payload. The value Binary specifies that binary data is encoded into strings based on Base64 encoding and then put into the payload.
    std::shared_ptr<string> valueDataType_ = nullptr;
    // The ID of the VPC to which the ApsaraMQ for Kafka instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
