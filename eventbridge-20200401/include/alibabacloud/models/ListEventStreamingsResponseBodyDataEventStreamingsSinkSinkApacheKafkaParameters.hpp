// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKAPACHEKAFKAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKAPACHEKAFKAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersKey.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersNetworkType.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersSecurityGroupId.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVSwitchIds.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersValue.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Acks, acks_);
      DARABONBA_PTR_TO_JSON(Bootstraps, bootstraps_);
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
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Acks, acks_);
      DARABONBA_PTR_FROM_JSON(Bootstraps, bootstraps_);
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
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acks_ != nullptr
        && this->bootstraps_ != nullptr && this->key_ != nullptr && this->networkType_ != nullptr && this->saslMechanism_ != nullptr && this->saslPassword_ != nullptr
        && this->saslUser_ != nullptr && this->securityGroupId_ != nullptr && this->securityProtocol_ != nullptr && this->topic_ != nullptr && this->vSwitchIds_ != nullptr
        && this->value_ != nullptr && this->vpcId_ != nullptr; };
    // acks Field Functions 
    bool hasAcks() const { return this->acks_ != nullptr;};
    void deleteAcks() { this->acks_ = nullptr;};
    inline string acks() const { DARABONBA_PTR_GET_DEFAULT(acks_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setAcks(string acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };


    // bootstraps Field Functions 
    bool hasBootstraps() const { return this->bootstraps_ != nullptr;};
    void deleteBootstraps() { this->bootstraps_ = nullptr;};
    inline string bootstraps() const { DARABONBA_PTR_GET_DEFAULT(bootstraps_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setBootstraps(string bootstraps) { DARABONBA_PTR_SET_VALUE(bootstraps_, bootstraps) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersKey & key() const { DARABONBA_PTR_GET_CONST(key_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersKey) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersKey key() { DARABONBA_PTR_GET(key_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersKey) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setKey(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersKey & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setKey(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersKey && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersNetworkType) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersNetworkType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setNetworkType(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setNetworkType(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // saslMechanism Field Functions 
    bool hasSaslMechanism() const { return this->saslMechanism_ != nullptr;};
    void deleteSaslMechanism() { this->saslMechanism_ = nullptr;};
    inline string saslMechanism() const { DARABONBA_PTR_GET_DEFAULT(saslMechanism_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setSaslMechanism(string saslMechanism) { DARABONBA_PTR_SET_VALUE(saslMechanism_, saslMechanism) };


    // saslPassword Field Functions 
    bool hasSaslPassword() const { return this->saslPassword_ != nullptr;};
    void deleteSaslPassword() { this->saslPassword_ = nullptr;};
    inline string saslPassword() const { DARABONBA_PTR_GET_DEFAULT(saslPassword_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setSaslPassword(string saslPassword) { DARABONBA_PTR_SET_VALUE(saslPassword_, saslPassword) };


    // saslUser Field Functions 
    bool hasSaslUser() const { return this->saslUser_ != nullptr;};
    void deleteSaslUser() { this->saslUser_ = nullptr;};
    inline string saslUser() const { DARABONBA_PTR_GET_DEFAULT(saslUser_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setSaslUser(string saslUser) { DARABONBA_PTR_SET_VALUE(saslUser_, saslUser) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersSecurityGroupId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersSecurityGroupId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setSecurityGroupId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setSecurityGroupId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // securityProtocol Field Functions 
    bool hasSecurityProtocol() const { return this->securityProtocol_ != nullptr;};
    void deleteSecurityProtocol() { this->securityProtocol_ = nullptr;};
    inline string securityProtocol() const { DARABONBA_PTR_GET_DEFAULT(securityProtocol_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setSecurityProtocol(string securityProtocol) { DARABONBA_PTR_SET_VALUE(securityProtocol_, securityProtocol) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVSwitchIds) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVSwitchIds) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setVSwitchIds(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setVSwitchIds(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersValue) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersValue value() { DARABONBA_PTR_GET(value_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersValue) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setValue(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setValue(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVpcId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVpcId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setVpcId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParameters& setVpcId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> acks_ = nullptr;
    std::shared_ptr<string> bootstraps_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersKey> key_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersNetworkType> networkType_ = nullptr;
    std::shared_ptr<string> saslMechanism_ = nullptr;
    std::shared_ptr<string> saslPassword_ = nullptr;
    std::shared_ptr<string> saslUser_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<string> securityProtocol_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersValue> value_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkApacheKafkaParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
