// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class GetCaCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCaCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, GetCaCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    GetCaCertificateRequest() = default ;
    GetCaCertificateRequest(const GetCaCertificateRequest &) = default ;
    GetCaCertificateRequest(GetCaCertificateRequest &&) = default ;
    GetCaCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCaCertificateRequest() = default ;
    GetCaCertificateRequest& operator=(const GetCaCertificateRequest &) = default ;
    GetCaCertificateRequest& operator=(GetCaCertificateRequest &&) = default ;
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
    inline GetCaCertificateRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline GetCaCertificateRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The instance ID bound to the CA certificate, which is the instance ID of the MQTT version of the cloud message queue.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
    // The SN serial number of the CA certificate to be queried, used to uniquely identify a CA certificate.
    // 
    // This parameter is required.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
