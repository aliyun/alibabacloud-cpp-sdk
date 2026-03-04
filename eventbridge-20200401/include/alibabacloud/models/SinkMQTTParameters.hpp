// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKMQTTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKMQTTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkMQTTParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkMQTTParameters& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mqtt5UserProperty, mqtt5UserProperty_);
      DARABONBA_PTR_TO_JSON(ParentTopic, parentTopic_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(SubTopic, subTopic_);
    };
    friend void from_json(const Darabonba::Json& j, SinkMQTTParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mqtt5UserProperty, mqtt5UserProperty_);
      DARABONBA_PTR_FROM_JSON(ParentTopic, parentTopic_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(SubTopic, subTopic_);
    };
    SinkMQTTParameters() = default ;
    SinkMQTTParameters(const SinkMQTTParameters &) = default ;
    SinkMQTTParameters(SinkMQTTParameters &&) = default ;
    SinkMQTTParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkMQTTParameters() = default ;
    SinkMQTTParameters& operator=(const SinkMQTTParameters &) = default ;
    SinkMQTTParameters& operator=(SinkMQTTParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubTopic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubTopic& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SubTopic& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SubTopic() = default ;
      SubTopic(const SubTopic &) = default ;
      SubTopic(SubTopic &&) = default ;
      SubTopic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubTopic() = default ;
      SubTopic& operator=(const SubTopic &) = default ;
      SubTopic& operator=(SubTopic &&) = default ;
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
      inline SubTopic& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline SubTopic& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SubTopic& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
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
      inline Payload& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Payload& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Payload& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class Mqtt5UserProperty : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Mqtt5UserProperty& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Mqtt5UserProperty& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Mqtt5UserProperty() = default ;
      Mqtt5UserProperty(const Mqtt5UserProperty &) = default ;
      Mqtt5UserProperty(Mqtt5UserProperty &&) = default ;
      Mqtt5UserProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Mqtt5UserProperty() = default ;
      Mqtt5UserProperty& operator=(const Mqtt5UserProperty &) = default ;
      Mqtt5UserProperty& operator=(Mqtt5UserProperty &&) = default ;
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
      inline Mqtt5UserProperty& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Mqtt5UserProperty& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Mqtt5UserProperty& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mqtt5UserProperty_ == nullptr && this->parentTopic_ == nullptr && this->payload_ == nullptr && this->subTopic_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SinkMQTTParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mqtt5UserProperty Field Functions 
    bool hasMqtt5UserProperty() const { return this->mqtt5UserProperty_ != nullptr;};
    void deleteMqtt5UserProperty() { this->mqtt5UserProperty_ = nullptr;};
    inline const SinkMQTTParameters::Mqtt5UserProperty & getMqtt5UserProperty() const { DARABONBA_PTR_GET_CONST(mqtt5UserProperty_, SinkMQTTParameters::Mqtt5UserProperty) };
    inline SinkMQTTParameters::Mqtt5UserProperty getMqtt5UserProperty() { DARABONBA_PTR_GET(mqtt5UserProperty_, SinkMQTTParameters::Mqtt5UserProperty) };
    inline SinkMQTTParameters& setMqtt5UserProperty(const SinkMQTTParameters::Mqtt5UserProperty & mqtt5UserProperty) { DARABONBA_PTR_SET_VALUE(mqtt5UserProperty_, mqtt5UserProperty) };
    inline SinkMQTTParameters& setMqtt5UserProperty(SinkMQTTParameters::Mqtt5UserProperty && mqtt5UserProperty) { DARABONBA_PTR_SET_RVALUE(mqtt5UserProperty_, mqtt5UserProperty) };


    // parentTopic Field Functions 
    bool hasParentTopic() const { return this->parentTopic_ != nullptr;};
    void deleteParentTopic() { this->parentTopic_ = nullptr;};
    inline string getParentTopic() const { DARABONBA_PTR_GET_DEFAULT(parentTopic_, "") };
    inline SinkMQTTParameters& setParentTopic(string parentTopic) { DARABONBA_PTR_SET_VALUE(parentTopic_, parentTopic) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const SinkMQTTParameters::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, SinkMQTTParameters::Payload) };
    inline SinkMQTTParameters::Payload getPayload() { DARABONBA_PTR_GET(payload_, SinkMQTTParameters::Payload) };
    inline SinkMQTTParameters& setPayload(const SinkMQTTParameters::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline SinkMQTTParameters& setPayload(SinkMQTTParameters::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // subTopic Field Functions 
    bool hasSubTopic() const { return this->subTopic_ != nullptr;};
    void deleteSubTopic() { this->subTopic_ = nullptr;};
    inline const SinkMQTTParameters::SubTopic & getSubTopic() const { DARABONBA_PTR_GET_CONST(subTopic_, SinkMQTTParameters::SubTopic) };
    inline SinkMQTTParameters::SubTopic getSubTopic() { DARABONBA_PTR_GET(subTopic_, SinkMQTTParameters::SubTopic) };
    inline SinkMQTTParameters& setSubTopic(const SinkMQTTParameters::SubTopic & subTopic) { DARABONBA_PTR_SET_VALUE(subTopic_, subTopic) };
    inline SinkMQTTParameters& setSubTopic(SinkMQTTParameters::SubTopic && subTopic) { DARABONBA_PTR_SET_RVALUE(subTopic_, subTopic) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<SinkMQTTParameters::Mqtt5UserProperty> mqtt5UserProperty_ {};
    shared_ptr<string> parentTopic_ {};
    shared_ptr<SinkMQTTParameters::Payload> payload_ {};
    shared_ptr<SinkMQTTParameters::SubTopic> subTopic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
