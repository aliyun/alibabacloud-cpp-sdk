// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSNICONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSNICONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class SetSniConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSniConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultCertificate, defaultCertificate_);
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_TO_JSON(SniConfig, sniConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SetSniConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultCertificate, defaultCertificate_);
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_FROM_JSON(SniConfig, sniConfig_);
    };
    SetSniConfigRequest() = default ;
    SetSniConfigRequest(const SetSniConfigRequest &) = default ;
    SetSniConfigRequest(SetSniConfigRequest &&) = default ;
    SetSniConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSniConfigRequest() = default ;
    SetSniConfigRequest& operator=(const SetSniConfigRequest &) = default ;
    SetSniConfigRequest& operator=(SetSniConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultCertificate_ == nullptr
        && this->mqttInstanceId_ == nullptr && this->sniConfig_ == nullptr; };
    // defaultCertificate Field Functions 
    bool hasDefaultCertificate() const { return this->defaultCertificate_ != nullptr;};
    void deleteDefaultCertificate() { this->defaultCertificate_ = nullptr;};
    inline string getDefaultCertificate() const { DARABONBA_PTR_GET_DEFAULT(defaultCertificate_, "") };
    inline SetSniConfigRequest& setDefaultCertificate(string defaultCertificate) { DARABONBA_PTR_SET_VALUE(defaultCertificate_, defaultCertificate) };


    // mqttInstanceId Field Functions 
    bool hasMqttInstanceId() const { return this->mqttInstanceId_ != nullptr;};
    void deleteMqttInstanceId() { this->mqttInstanceId_ = nullptr;};
    inline string getMqttInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqttInstanceId_, "") };
    inline SetSniConfigRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


    // sniConfig Field Functions 
    bool hasSniConfig() const { return this->sniConfig_ != nullptr;};
    void deleteSniConfig() { this->sniConfig_ = nullptr;};
    inline string getSniConfig() const { DARABONBA_PTR_GET_DEFAULT(sniConfig_, "") };
    inline SetSniConfigRequest& setSniConfig(string sniConfig) { DARABONBA_PTR_SET_VALUE(sniConfig_, sniConfig) };


  protected:
    // The default certificate. This certificate is returned if no matching domain name is found in the server certificate list.
    // 
    // This parameter is required.
    shared_ptr<string> defaultCertificate_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
    // The Server Name Indication (SNI) configuration that maps domain names to certificates. Format: DomainName#CertificateID#Password(if any);DomainName#CertificateID#Password(if any)
    shared_ptr<string> sniConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
