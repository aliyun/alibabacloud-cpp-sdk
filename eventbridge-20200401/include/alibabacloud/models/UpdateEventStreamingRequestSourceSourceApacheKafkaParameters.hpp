// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCEAPACHEKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCEAPACHEKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSourceSourceApacheKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Bootstraps, bootstraps_);
      DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OffsetReset, offsetReset_);
      DARABONBA_PTR_TO_JSON(SaslMechanism, saslMechanism_);
      DARABONBA_PTR_TO_JSON(SaslPassword, saslPassword_);
      DARABONBA_PTR_TO_JSON(SaslUser, saslUser_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityProtocol, securityProtocol_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(ValueDataType, valueDataType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Bootstraps, bootstraps_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OffsetReset, offsetReset_);
      DARABONBA_PTR_FROM_JSON(SaslMechanism, saslMechanism_);
      DARABONBA_PTR_FROM_JSON(SaslPassword, saslPassword_);
      DARABONBA_PTR_FROM_JSON(SaslUser, saslUser_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtocol, securityProtocol_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ValueDataType, valueDataType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateEventStreamingRequestSourceSourceApacheKafkaParameters() = default ;
    UpdateEventStreamingRequestSourceSourceApacheKafkaParameters(const UpdateEventStreamingRequestSourceSourceApacheKafkaParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceApacheKafkaParameters(UpdateEventStreamingRequestSourceSourceApacheKafkaParameters &&) = default ;
    UpdateEventStreamingRequestSourceSourceApacheKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSourceSourceApacheKafkaParameters() = default ;
    UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& operator=(const UpdateEventStreamingRequestSourceSourceApacheKafkaParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& operator=(UpdateEventStreamingRequestSourceSourceApacheKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bootstraps_ != nullptr
        && this->consumerGroup_ != nullptr && this->networkType_ != nullptr && this->offsetReset_ != nullptr && this->saslMechanism_ != nullptr && this->saslPassword_ != nullptr
        && this->saslUser_ != nullptr && this->securityGroupId_ != nullptr && this->securityProtocol_ != nullptr && this->topic_ != nullptr && this->vSwitchIds_ != nullptr
        && this->valueDataType_ != nullptr && this->vpcId_ != nullptr; };
    // bootstraps Field Functions 
    bool hasBootstraps() const { return this->bootstraps_ != nullptr;};
    void deleteBootstraps() { this->bootstraps_ = nullptr;};
    inline string bootstraps() const { DARABONBA_PTR_GET_DEFAULT(bootstraps_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setBootstraps(string bootstraps) { DARABONBA_PTR_SET_VALUE(bootstraps_, bootstraps) };


    // consumerGroup Field Functions 
    bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
    void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
    inline string consumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // offsetReset Field Functions 
    bool hasOffsetReset() const { return this->offsetReset_ != nullptr;};
    void deleteOffsetReset() { this->offsetReset_ = nullptr;};
    inline string offsetReset() const { DARABONBA_PTR_GET_DEFAULT(offsetReset_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setOffsetReset(string offsetReset) { DARABONBA_PTR_SET_VALUE(offsetReset_, offsetReset) };


    // saslMechanism Field Functions 
    bool hasSaslMechanism() const { return this->saslMechanism_ != nullptr;};
    void deleteSaslMechanism() { this->saslMechanism_ = nullptr;};
    inline string saslMechanism() const { DARABONBA_PTR_GET_DEFAULT(saslMechanism_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setSaslMechanism(string saslMechanism) { DARABONBA_PTR_SET_VALUE(saslMechanism_, saslMechanism) };


    // saslPassword Field Functions 
    bool hasSaslPassword() const { return this->saslPassword_ != nullptr;};
    void deleteSaslPassword() { this->saslPassword_ = nullptr;};
    inline string saslPassword() const { DARABONBA_PTR_GET_DEFAULT(saslPassword_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setSaslPassword(string saslPassword) { DARABONBA_PTR_SET_VALUE(saslPassword_, saslPassword) };


    // saslUser Field Functions 
    bool hasSaslUser() const { return this->saslUser_ != nullptr;};
    void deleteSaslUser() { this->saslUser_ = nullptr;};
    inline string saslUser() const { DARABONBA_PTR_GET_DEFAULT(saslUser_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setSaslUser(string saslUser) { DARABONBA_PTR_SET_VALUE(saslUser_, saslUser) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityProtocol Field Functions 
    bool hasSecurityProtocol() const { return this->securityProtocol_ != nullptr;};
    void deleteSecurityProtocol() { this->securityProtocol_ = nullptr;};
    inline string securityProtocol() const { DARABONBA_PTR_GET_DEFAULT(securityProtocol_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setSecurityProtocol(string securityProtocol) { DARABONBA_PTR_SET_VALUE(securityProtocol_, securityProtocol) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // valueDataType Field Functions 
    bool hasValueDataType() const { return this->valueDataType_ != nullptr;};
    void deleteValueDataType() { this->valueDataType_ = nullptr;};
    inline string valueDataType() const { DARABONBA_PTR_GET_DEFAULT(valueDataType_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setValueDataType(string valueDataType) { DARABONBA_PTR_SET_VALUE(valueDataType_, valueDataType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateEventStreamingRequestSourceSourceApacheKafkaParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> bootstraps_ = nullptr;
    std::shared_ptr<string> consumerGroup_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> offsetReset_ = nullptr;
    std::shared_ptr<string> saslMechanism_ = nullptr;
    std::shared_ptr<string> saslPassword_ = nullptr;
    std::shared_ptr<string> saslUser_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> securityProtocol_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    std::shared_ptr<string> valueDataType_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
