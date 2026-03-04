// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKRABBITMQMSGSYNCPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKRABBITMQMSGSYNCPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkRabbitMQMsgSyncParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkRabbitMQMsgSyncParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Exchange, exchange_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxHops, maxHops_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, SinkRabbitMQMsgSyncParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Exchange, exchange_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxHops, maxHops_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    SinkRabbitMQMsgSyncParameters() = default ;
    SinkRabbitMQMsgSyncParameters(const SinkRabbitMQMsgSyncParameters &) = default ;
    SinkRabbitMQMsgSyncParameters(SinkRabbitMQMsgSyncParameters &&) = default ;
    SinkRabbitMQMsgSyncParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkRabbitMQMsgSyncParameters() = default ;
    SinkRabbitMQMsgSyncParameters& operator=(const SinkRabbitMQMsgSyncParameters &) = default ;
    SinkRabbitMQMsgSyncParameters& operator=(SinkRabbitMQMsgSyncParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoutingKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoutingKey& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RoutingKey& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RoutingKey() = default ;
      RoutingKey(const RoutingKey &) = default ;
      RoutingKey(RoutingKey &&) = default ;
      RoutingKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoutingKey() = default ;
      RoutingKey& operator=(const RoutingKey &) = default ;
      RoutingKey& operator=(RoutingKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline RoutingKey& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline RoutingKey& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline RoutingKey& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class Properties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Properties& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Properties& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Properties() = default ;
      Properties(const Properties &) = default ;
      Properties(Properties &&) = default ;
      Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Properties() = default ;
      Properties& operator=(const Properties &) = default ;
      Properties& operator=(Properties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline Properties& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Properties& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class MessageId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MessageId& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, MessageId& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      MessageId() = default ;
      MessageId(const MessageId &) = default ;
      MessageId(MessageId &&) = default ;
      MessageId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MessageId() = default ;
      MessageId& operator=(const MessageId &) = default ;
      MessageId& operator=(MessageId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline MessageId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline MessageId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline MessageId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class Exchange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Exchange& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Exchange& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Exchange() = default ;
      Exchange(const Exchange &) = default ;
      Exchange(Exchange &&) = default ;
      Exchange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Exchange() = default ;
      Exchange& operator=(const Exchange &) = default ;
      Exchange& operator=(Exchange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline Exchange& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Exchange& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Exchange& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->endpoint_ == nullptr && this->exchange_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->maxHops_ == nullptr
        && this->messageId_ == nullptr && this->networkType_ == nullptr && this->password_ == nullptr && this->properties_ == nullptr && this->routingKey_ == nullptr
        && this->securityGroupId_ == nullptr && this->username_ == nullptr && this->vSwitchIds_ == nullptr && this->virtualHostName_ == nullptr && this->vpcId_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SinkRabbitMQMsgSyncParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkRabbitMQMsgSyncParameters::Body) };
    inline SinkRabbitMQMsgSyncParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkRabbitMQMsgSyncParameters::Body) };
    inline SinkRabbitMQMsgSyncParameters& setBody(const SinkRabbitMQMsgSyncParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SinkRabbitMQMsgSyncParameters& setBody(SinkRabbitMQMsgSyncParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SinkRabbitMQMsgSyncParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // exchange Field Functions 
    bool hasExchange() const { return this->exchange_ != nullptr;};
    void deleteExchange() { this->exchange_ = nullptr;};
    inline const SinkRabbitMQMsgSyncParameters::Exchange & getExchange() const { DARABONBA_PTR_GET_CONST(exchange_, SinkRabbitMQMsgSyncParameters::Exchange) };
    inline SinkRabbitMQMsgSyncParameters::Exchange getExchange() { DARABONBA_PTR_GET(exchange_, SinkRabbitMQMsgSyncParameters::Exchange) };
    inline SinkRabbitMQMsgSyncParameters& setExchange(const SinkRabbitMQMsgSyncParameters::Exchange & exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };
    inline SinkRabbitMQMsgSyncParameters& setExchange(SinkRabbitMQMsgSyncParameters::Exchange && exchange) { DARABONBA_PTR_SET_RVALUE(exchange_, exchange) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SinkRabbitMQMsgSyncParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SinkRabbitMQMsgSyncParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxHops Field Functions 
    bool hasMaxHops() const { return this->maxHops_ != nullptr;};
    void deleteMaxHops() { this->maxHops_ = nullptr;};
    inline string getMaxHops() const { DARABONBA_PTR_GET_DEFAULT(maxHops_, "") };
    inline SinkRabbitMQMsgSyncParameters& setMaxHops(string maxHops) { DARABONBA_PTR_SET_VALUE(maxHops_, maxHops) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline const SinkRabbitMQMsgSyncParameters::MessageId & getMessageId() const { DARABONBA_PTR_GET_CONST(messageId_, SinkRabbitMQMsgSyncParameters::MessageId) };
    inline SinkRabbitMQMsgSyncParameters::MessageId getMessageId() { DARABONBA_PTR_GET(messageId_, SinkRabbitMQMsgSyncParameters::MessageId) };
    inline SinkRabbitMQMsgSyncParameters& setMessageId(const SinkRabbitMQMsgSyncParameters::MessageId & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
    inline SinkRabbitMQMsgSyncParameters& setMessageId(SinkRabbitMQMsgSyncParameters::MessageId && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline SinkRabbitMQMsgSyncParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline SinkRabbitMQMsgSyncParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const SinkRabbitMQMsgSyncParameters::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, SinkRabbitMQMsgSyncParameters::Properties) };
    inline SinkRabbitMQMsgSyncParameters::Properties getProperties() { DARABONBA_PTR_GET(properties_, SinkRabbitMQMsgSyncParameters::Properties) };
    inline SinkRabbitMQMsgSyncParameters& setProperties(const SinkRabbitMQMsgSyncParameters::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline SinkRabbitMQMsgSyncParameters& setProperties(SinkRabbitMQMsgSyncParameters::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // routingKey Field Functions 
    bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
    void deleteRoutingKey() { this->routingKey_ = nullptr;};
    inline const SinkRabbitMQMsgSyncParameters::RoutingKey & getRoutingKey() const { DARABONBA_PTR_GET_CONST(routingKey_, SinkRabbitMQMsgSyncParameters::RoutingKey) };
    inline SinkRabbitMQMsgSyncParameters::RoutingKey getRoutingKey() { DARABONBA_PTR_GET(routingKey_, SinkRabbitMQMsgSyncParameters::RoutingKey) };
    inline SinkRabbitMQMsgSyncParameters& setRoutingKey(const SinkRabbitMQMsgSyncParameters::RoutingKey & routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };
    inline SinkRabbitMQMsgSyncParameters& setRoutingKey(SinkRabbitMQMsgSyncParameters::RoutingKey && routingKey) { DARABONBA_PTR_SET_RVALUE(routingKey_, routingKey) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline SinkRabbitMQMsgSyncParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline SinkRabbitMQMsgSyncParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline SinkRabbitMQMsgSyncParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // virtualHostName Field Functions 
    bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
    void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
    inline string getVirtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
    inline SinkRabbitMQMsgSyncParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SinkRabbitMQMsgSyncParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<SinkRabbitMQMsgSyncParameters::Body> body_ {};
    shared_ptr<string> endpoint_ {};
    shared_ptr<SinkRabbitMQMsgSyncParameters::Exchange> exchange_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> maxHops_ {};
    shared_ptr<SinkRabbitMQMsgSyncParameters::MessageId> messageId_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<string> password_ {};
    shared_ptr<SinkRabbitMQMsgSyncParameters::Properties> properties_ {};
    shared_ptr<SinkRabbitMQMsgSyncParameters::RoutingKey> routingKey_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> username_ {};
    shared_ptr<string> vSwitchIds_ {};
    shared_ptr<string> virtualHostName_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
