// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKOPENSOURCERABBITMQPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKOPENSOURCERABBITMQPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersBody.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersMessageId.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersProperties.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersRoutingKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Exchange, exchange_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Exchange, exchange_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters(const GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters(GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->body_ != nullptr && this->endpoint_ != nullptr && this->exchange_ != nullptr && this->messageId_ != nullptr && this->networkType_ != nullptr
        && this->password_ != nullptr && this->properties_ != nullptr && this->queueName_ != nullptr && this->routingKey_ != nullptr && this->securityGroupId_ != nullptr
        && this->targetType_ != nullptr && this->username_ != nullptr && this->vSwitchIds_ != nullptr && this->virtualHostName_ != nullptr && this->vpcId_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersBody) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersBody body() { DARABONBA_PTR_GET(body_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersBody) };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setBody(const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setBody(Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // exchange Field Functions 
    bool hasExchange() const { return this->exchange_ != nullptr;};
    void deleteExchange() { this->exchange_ = nullptr;};
    inline string exchange() const { DARABONBA_PTR_GET_DEFAULT(exchange_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setExchange(string exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersMessageId & messageId() const { DARABONBA_PTR_GET_CONST(messageId_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersMessageId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersMessageId messageId() { DARABONBA_PTR_GET(messageId_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersMessageId) };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setMessageId(const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersMessageId & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setMessageId(Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersMessageId && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersProperties) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersProperties properties() { DARABONBA_PTR_GET(properties_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersProperties) };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setProperties(const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setProperties(Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersRoutingKey & routingKey() const { DARABONBA_PTR_GET_CONST(routingKey_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersRoutingKey) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersRoutingKey routingKey() { DARABONBA_PTR_GET(routingKey_, Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersRoutingKey) };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setRoutingKey(const Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersRoutingKey & routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setRoutingKey(Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersRoutingKey && routingKey) { DARABONBA_PTR_SET_RVALUE(routingKey_, routingKey) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline string virtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersBody> body_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> exchange_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersMessageId> messageId_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersProperties> properties_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkOpenSourceRabbitMQParametersRoutingKey> routingKey_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    std::shared_ptr<string> virtualHostName_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
