// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKAPACHEKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKAPACHEKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersHeaders.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersKey.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersNetworkType.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersSecurityGroupId.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVSwitchIds.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersValue.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& obj) { 
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
    GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters(const GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters(GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters &&) = default ;
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
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setAcks(string acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };


    // bootstraps Field Functions 
    bool hasBootstraps() const { return this->bootstraps_ != nullptr;};
    void deleteBootstraps() { this->bootstraps_ = nullptr;};
    inline string bootstraps() const { DARABONBA_PTR_GET_DEFAULT(bootstraps_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setBootstraps(string bootstraps) { DARABONBA_PTR_SET_VALUE(bootstraps_, bootstraps) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersHeaders) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersHeaders headers() { DARABONBA_PTR_GET(headers_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersHeaders) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setHeaders(const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setHeaders(Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersKey & key() const { DARABONBA_PTR_GET_CONST(key_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersKey) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersKey key() { DARABONBA_PTR_GET(key_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersKey) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setKey(const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersKey & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setKey(Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersKey && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersNetworkType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersNetworkType) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setNetworkType(const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setNetworkType(Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // saslMechanism Field Functions 
    bool hasSaslMechanism() const { return this->saslMechanism_ != nullptr;};
    void deleteSaslMechanism() { this->saslMechanism_ = nullptr;};
    inline string saslMechanism() const { DARABONBA_PTR_GET_DEFAULT(saslMechanism_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setSaslMechanism(string saslMechanism) { DARABONBA_PTR_SET_VALUE(saslMechanism_, saslMechanism) };


    // saslPassword Field Functions 
    bool hasSaslPassword() const { return this->saslPassword_ != nullptr;};
    void deleteSaslPassword() { this->saslPassword_ = nullptr;};
    inline string saslPassword() const { DARABONBA_PTR_GET_DEFAULT(saslPassword_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setSaslPassword(string saslPassword) { DARABONBA_PTR_SET_VALUE(saslPassword_, saslPassword) };


    // saslUser Field Functions 
    bool hasSaslUser() const { return this->saslUser_ != nullptr;};
    void deleteSaslUser() { this->saslUser_ = nullptr;};
    inline string saslUser() const { DARABONBA_PTR_GET_DEFAULT(saslUser_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setSaslUser(string saslUser) { DARABONBA_PTR_SET_VALUE(saslUser_, saslUser) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersSecurityGroupId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersSecurityGroupId) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setSecurityGroupId(const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setSecurityGroupId(Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // securityProtocol Field Functions 
    bool hasSecurityProtocol() const { return this->securityProtocol_ != nullptr;};
    void deleteSecurityProtocol() { this->securityProtocol_ = nullptr;};
    inline string securityProtocol() const { DARABONBA_PTR_GET_DEFAULT(securityProtocol_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setSecurityProtocol(string securityProtocol) { DARABONBA_PTR_SET_VALUE(securityProtocol_, securityProtocol) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVSwitchIds) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVSwitchIds) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setVSwitchIds(const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setVSwitchIds(Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersValue) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersValue value() { DARABONBA_PTR_GET(value_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersValue) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setValue(const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setValue(Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVpcId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVpcId) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setVpcId(const Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParameters& setVpcId(Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> acks_ = nullptr;
    std::shared_ptr<string> bootstraps_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersHeaders> headers_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersKey> key_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersNetworkType> networkType_ = nullptr;
    std::shared_ptr<string> saslMechanism_ = nullptr;
    std::shared_ptr<string> saslPassword_ = nullptr;
    std::shared_ptr<string> saslUser_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<string> securityProtocol_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersValue> value_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkApacheKafkaParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
