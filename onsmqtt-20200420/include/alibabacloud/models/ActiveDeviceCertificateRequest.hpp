// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVEDEVICECERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVEDEVICECERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class ActiveDeviceCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveDeviceCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaSn, caSn_);
      DARABONBA_PTR_TO_JSON(DeviceSn, deviceSn_);
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveDeviceCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaSn, caSn_);
      DARABONBA_PTR_FROM_JSON(DeviceSn, deviceSn_);
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
    };
    ActiveDeviceCertificateRequest() = default ;
    ActiveDeviceCertificateRequest(const ActiveDeviceCertificateRequest &) = default ;
    ActiveDeviceCertificateRequest(ActiveDeviceCertificateRequest &&) = default ;
    ActiveDeviceCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveDeviceCertificateRequest() = default ;
    ActiveDeviceCertificateRequest& operator=(const ActiveDeviceCertificateRequest &) = default ;
    ActiveDeviceCertificateRequest& operator=(ActiveDeviceCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caSn_ == nullptr
        && this->deviceSn_ == nullptr && this->mqttInstanceId_ == nullptr; };
    // caSn Field Functions 
    bool hasCaSn() const { return this->caSn_ != nullptr;};
    void deleteCaSn() { this->caSn_ = nullptr;};
    inline string getCaSn() const { DARABONBA_PTR_GET_DEFAULT(caSn_, "") };
    inline ActiveDeviceCertificateRequest& setCaSn(string caSn) { DARABONBA_PTR_SET_VALUE(caSn_, caSn) };


    // deviceSn Field Functions 
    bool hasDeviceSn() const { return this->deviceSn_ != nullptr;};
    void deleteDeviceSn() { this->deviceSn_ = nullptr;};
    inline string getDeviceSn() const { DARABONBA_PTR_GET_DEFAULT(deviceSn_, "") };
    inline ActiveDeviceCertificateRequest& setDeviceSn(string deviceSn) { DARABONBA_PTR_SET_VALUE(deviceSn_, deviceSn) };


    // mqttInstanceId Field Functions 
    bool hasMqttInstanceId() const { return this->mqttInstanceId_ != nullptr;};
    void deleteMqttInstanceId() { this->mqttInstanceId_ = nullptr;};
    inline string getMqttInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqttInstanceId_, "") };
    inline ActiveDeviceCertificateRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


  protected:
    // The SN of the CA certificate to which the device certificate to be activated belongs. The SN uniquely identifies a CA certificate.
    // Valid values: up to 128 bytes.
    // 
    // This parameter is required.
    shared_ptr<string> caSn_ {};
    // The serial number (SN) of the device certificate to be activated. The SN uniquely identifies a device certificate.
    // 
    // This parameter is required.
    shared_ptr<string> deviceSn_ {};
    // The instance ID to which the device certificate is attached, which is the instance ID of MSMQ for MQTT.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
