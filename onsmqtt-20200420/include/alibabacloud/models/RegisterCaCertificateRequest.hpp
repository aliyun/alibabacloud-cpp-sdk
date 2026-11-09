// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class RegisterCaCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterCaCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaContent, caContent_);
      DARABONBA_PTR_TO_JSON(CaName, caName_);
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_TO_JSON(VerificationContent, verificationContent_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterCaCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaContent, caContent_);
      DARABONBA_PTR_FROM_JSON(CaName, caName_);
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_FROM_JSON(VerificationContent, verificationContent_);
    };
    RegisterCaCertificateRequest() = default ;
    RegisterCaCertificateRequest(const RegisterCaCertificateRequest &) = default ;
    RegisterCaCertificateRequest(RegisterCaCertificateRequest &&) = default ;
    RegisterCaCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterCaCertificateRequest() = default ;
    RegisterCaCertificateRequest& operator=(const RegisterCaCertificateRequest &) = default ;
    RegisterCaCertificateRequest& operator=(RegisterCaCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caContent_ == nullptr
        && this->caName_ == nullptr && this->mqttInstanceId_ == nullptr && this->verificationContent_ == nullptr; };
    // caContent Field Functions 
    bool hasCaContent() const { return this->caContent_ != nullptr;};
    void deleteCaContent() { this->caContent_ = nullptr;};
    inline string getCaContent() const { DARABONBA_PTR_GET_DEFAULT(caContent_, "") };
    inline RegisterCaCertificateRequest& setCaContent(string caContent) { DARABONBA_PTR_SET_VALUE(caContent_, caContent) };


    // caName Field Functions 
    bool hasCaName() const { return this->caName_ != nullptr;};
    void deleteCaName() { this->caName_ = nullptr;};
    inline string getCaName() const { DARABONBA_PTR_GET_DEFAULT(caName_, "") };
    inline RegisterCaCertificateRequest& setCaName(string caName) { DARABONBA_PTR_SET_VALUE(caName_, caName) };


    // mqttInstanceId Field Functions 
    bool hasMqttInstanceId() const { return this->mqttInstanceId_ != nullptr;};
    void deleteMqttInstanceId() { this->mqttInstanceId_ = nullptr;};
    inline string getMqttInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqttInstanceId_, "") };
    inline RegisterCaCertificateRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


    // verificationContent Field Functions 
    bool hasVerificationContent() const { return this->verificationContent_ != nullptr;};
    void deleteVerificationContent() { this->verificationContent_ = nullptr;};
    inline string getVerificationContent() const { DARABONBA_PTR_GET_DEFAULT(verificationContent_, "") };
    inline RegisterCaCertificateRequest& setVerificationContent(string verificationContent) { DARABONBA_PTR_SET_VALUE(verificationContent_, verificationContent) };


  protected:
    // The content of the CA certificate that you want to register with an ApsaraMQ for MQTT broker.
    // 
    // > In the example, 
    //  indicates a line feed.
    // 
    // This parameter is required.
    shared_ptr<string> caContent_ {};
    // The name of the CA certificate that you want to register with an ApsaraMQ for MQTT broker.
    // 
    // This parameter is required.
    shared_ptr<string> caName_ {};
    // The ID of the ApsaraMQ for MQTT instance to which you want to bind the CA certificate.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
    // The content of the validation certificate issued by the CA certificate that you want to register with an ApsaraMQ for MQTT broker. The validation certificate must be used together with the registration code of the CA certificate to verify the private key of the CA certificate.
    // 
    // > In the example, 
    //  indicates a line feed.
    // 
    // This parameter is required.
    shared_ptr<string> verificationContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
