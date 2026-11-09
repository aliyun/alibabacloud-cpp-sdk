// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVECACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVECACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class ActiveCaCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveCaCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveCaCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    ActiveCaCertificateRequest() = default ;
    ActiveCaCertificateRequest(const ActiveCaCertificateRequest &) = default ;
    ActiveCaCertificateRequest(ActiveCaCertificateRequest &&) = default ;
    ActiveCaCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveCaCertificateRequest() = default ;
    ActiveCaCertificateRequest& operator=(const ActiveCaCertificateRequest &) = default ;
    ActiveCaCertificateRequest& operator=(ActiveCaCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mqttInstanceId_ == nullptr
        && this->sn_ == nullptr; };
    // mqttInstanceId Field Functions 
    bool hasMqttInstanceId() const { return this->mqttInstanceId_ != nullptr;};
    void deleteMqttInstanceId() { this->mqttInstanceId_ = nullptr;};
    inline string getMqttInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqttInstanceId_, "") };
    inline ActiveCaCertificateRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ActiveCaCertificateRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The ID of the instance to which the CA certificate is bound, which is the instance ID of ApsaraMQ for MQTT.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
    // The serial number (SN) of the CA certificate to be activated. The SN uniquely identifies a CA certificate. The value can be up to 128 bytes in length.
    // 
    // This parameter is required.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
