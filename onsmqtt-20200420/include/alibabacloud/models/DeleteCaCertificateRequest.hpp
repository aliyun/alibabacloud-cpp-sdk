// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DeleteCaCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCaCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCaCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    DeleteCaCertificateRequest() = default ;
    DeleteCaCertificateRequest(const DeleteCaCertificateRequest &) = default ;
    DeleteCaCertificateRequest(DeleteCaCertificateRequest &&) = default ;
    DeleteCaCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCaCertificateRequest() = default ;
    DeleteCaCertificateRequest& operator=(const DeleteCaCertificateRequest &) = default ;
    DeleteCaCertificateRequest& operator=(DeleteCaCertificateRequest &&) = default ;
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
    inline DeleteCaCertificateRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline DeleteCaCertificateRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The ID of the instance to which the CA certificate is bound, which is the instance ID of ApsaraMQ for MQTT.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
    // The serial number (SN) of the CA certificate to delete. The SN uniquely identifies a CA certificate. The value cannot exceed 128 bytes.
    // 
    // This parameter is required.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
