// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICECERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICECERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class GetDeviceCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaSn, caSn_);
      DARABONBA_PTR_TO_JSON(DeviceSn, deviceSn_);
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaSn, caSn_);
      DARABONBA_PTR_FROM_JSON(DeviceSn, deviceSn_);
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
    };
    GetDeviceCertificateRequest() = default ;
    GetDeviceCertificateRequest(const GetDeviceCertificateRequest &) = default ;
    GetDeviceCertificateRequest(GetDeviceCertificateRequest &&) = default ;
    GetDeviceCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceCertificateRequest() = default ;
    GetDeviceCertificateRequest& operator=(const GetDeviceCertificateRequest &) = default ;
    GetDeviceCertificateRequest& operator=(GetDeviceCertificateRequest &&) = default ;
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
    inline GetDeviceCertificateRequest& setCaSn(string caSn) { DARABONBA_PTR_SET_VALUE(caSn_, caSn) };


    // deviceSn Field Functions 
    bool hasDeviceSn() const { return this->deviceSn_ != nullptr;};
    void deleteDeviceSn() { this->deviceSn_ = nullptr;};
    inline string getDeviceSn() const { DARABONBA_PTR_GET_DEFAULT(deviceSn_, "") };
    inline GetDeviceCertificateRequest& setDeviceSn(string deviceSn) { DARABONBA_PTR_SET_VALUE(deviceSn_, deviceSn) };


    // mqttInstanceId Field Functions 
    bool hasMqttInstanceId() const { return this->mqttInstanceId_ != nullptr;};
    void deleteMqttInstanceId() { this->mqttInstanceId_ = nullptr;};
    inline string getMqttInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqttInstanceId_, "") };
    inline GetDeviceCertificateRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


  protected:
    // The SN serial number of the CA certificate to which the device certificate to be queried belongs, used to uniquely identify a CA certificate. Value range: no more than 128 bytes.
    // 
    // This parameter is required.
    shared_ptr<string> caSn_ {};
    // The SN serial number of the device certificate to be queried, used to uniquely identify a device certificate. Value range: no more than 128 bytes.
    // 
    // This parameter is required.
    shared_ptr<string> deviceSn_ {};
    // The instance ID to which the device certificate is bound, i.e., the instance ID of the Cloud Message Queue MQTT version.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
