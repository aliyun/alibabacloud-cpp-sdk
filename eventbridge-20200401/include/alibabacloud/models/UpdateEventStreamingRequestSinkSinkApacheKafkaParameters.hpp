// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKAPACHEKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKAPACHEKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheKafkaParametersHeaders.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheKafkaParametersKey.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheKafkaParametersNetworkType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheKafkaParametersSecurityGroupId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVSwitchIds.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheKafkaParametersValue.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkApacheKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Acks, acks_);
      DARABONBA_PTR_TO_JSON(Bootstraps, bootstraps_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(SaslMechanism, saslMechanism_);
      DARABONBA_PTR_TO_JSON(SaslPassword, saslPassword_);
      DARABONBA_PTR_TO_JSON(SaslUser, saslUser_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityProtocol, securityProtocol_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Acks, acks_);
      DARABONBA_PTR_FROM_JSON(Bootstraps, bootstraps_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(SaslMechanism, saslMechanism_);
      DARABONBA_PTR_FROM_JSON(SaslPassword, saslPassword_);
      DARABONBA_PTR_FROM_JSON(SaslUser, saslUser_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtocol, securityProtocol_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateEventStreamingRequestSinkSinkApacheKafkaParameters() = default ;
    UpdateEventStreamingRequestSinkSinkApacheKafkaParameters(const UpdateEventStreamingRequestSinkSinkApacheKafkaParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkApacheKafkaParameters(UpdateEventStreamingRequestSinkSinkApacheKafkaParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkApacheKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkApacheKafkaParameters() = default ;
    UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& operator=(const UpdateEventStreamingRequestSinkSinkApacheKafkaParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& operator=(UpdateEventStreamingRequestSinkSinkApacheKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acks_ != nullptr
        && this->bootstraps_ != nullptr && this->headers_ != nullptr && this->key_ != nullptr && this->networkType_ != nullptr && this->saslMechanism_ != nullptr
        && this->saslPassword_ != nullptr && this->saslUser_ != nullptr && this->securityGroupId_ != nullptr && this->securityProtocol_ != nullptr && this->topic_ != nullptr
        && this->vSwitchIds_ != nullptr && this->value_ != nullptr && this->vpcId_ != nullptr; };
    // acks Field Functions 
    bool hasAcks() const { return this->acks_ != nullptr;};
    void deleteAcks() { this->acks_ = nullptr;};
    inline string acks() const { DARABONBA_PTR_GET_DEFAULT(acks_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setAcks(string acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };


    // bootstraps Field Functions 
    bool hasBootstraps() const { return this->bootstraps_ != nullptr;};
    void deleteBootstraps() { this->bootstraps_ = nullptr;};
    inline string bootstraps() const { DARABONBA_PTR_GET_DEFAULT(bootstraps_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setBootstraps(string bootstraps) { DARABONBA_PTR_SET_VALUE(bootstraps_, bootstraps) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersHeaders) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersHeaders headers() { DARABONBA_PTR_GET(headers_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersHeaders) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setHeaders(const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setHeaders(Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersKey & key() const { DARABONBA_PTR_GET_CONST(key_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersKey) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersKey key() { DARABONBA_PTR_GET(key_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersKey) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setKey(const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersKey & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setKey(Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersKey && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersNetworkType) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersNetworkType) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setNetworkType(const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setNetworkType(Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // saslMechanism Field Functions 
    bool hasSaslMechanism() const { return this->saslMechanism_ != nullptr;};
    void deleteSaslMechanism() { this->saslMechanism_ = nullptr;};
    inline string saslMechanism() const { DARABONBA_PTR_GET_DEFAULT(saslMechanism_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setSaslMechanism(string saslMechanism) { DARABONBA_PTR_SET_VALUE(saslMechanism_, saslMechanism) };


    // saslPassword Field Functions 
    bool hasSaslPassword() const { return this->saslPassword_ != nullptr;};
    void deleteSaslPassword() { this->saslPassword_ = nullptr;};
    inline string saslPassword() const { DARABONBA_PTR_GET_DEFAULT(saslPassword_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setSaslPassword(string saslPassword) { DARABONBA_PTR_SET_VALUE(saslPassword_, saslPassword) };


    // saslUser Field Functions 
    bool hasSaslUser() const { return this->saslUser_ != nullptr;};
    void deleteSaslUser() { this->saslUser_ = nullptr;};
    inline string saslUser() const { DARABONBA_PTR_GET_DEFAULT(saslUser_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setSaslUser(string saslUser) { DARABONBA_PTR_SET_VALUE(saslUser_, saslUser) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersSecurityGroupId) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersSecurityGroupId) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setSecurityGroupId(const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setSecurityGroupId(Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // securityProtocol Field Functions 
    bool hasSecurityProtocol() const { return this->securityProtocol_ != nullptr;};
    void deleteSecurityProtocol() { this->securityProtocol_ = nullptr;};
    inline string securityProtocol() const { DARABONBA_PTR_GET_DEFAULT(securityProtocol_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setSecurityProtocol(string securityProtocol) { DARABONBA_PTR_SET_VALUE(securityProtocol_, securityProtocol) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVSwitchIds) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVSwitchIds) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setVSwitchIds(const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setVSwitchIds(Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersValue) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersValue value() { DARABONBA_PTR_GET(value_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersValue) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setValue(const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setValue(Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVpcId) };
    inline Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVpcId) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setVpcId(const Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline UpdateEventStreamingRequestSinkSinkApacheKafkaParameters& setVpcId(Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> acks_ = nullptr;
    std::shared_ptr<string> bootstraps_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersHeaders> headers_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersKey> key_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersNetworkType> networkType_ = nullptr;
    std::shared_ptr<string> saslMechanism_ = nullptr;
    std::shared_ptr<string> saslPassword_ = nullptr;
    std::shared_ptr<string> saslUser_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<string> securityProtocol_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersValue> value_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkApacheKafkaParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
