// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTERCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTERCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class GetRegisterCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegisterCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegisterCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
    };
    GetRegisterCodeRequest() = default ;
    GetRegisterCodeRequest(const GetRegisterCodeRequest &) = default ;
    GetRegisterCodeRequest(GetRegisterCodeRequest &&) = default ;
    GetRegisterCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegisterCodeRequest() = default ;
    GetRegisterCodeRequest& operator=(const GetRegisterCodeRequest &) = default ;
    GetRegisterCodeRequest& operator=(GetRegisterCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mqttInstanceId_ == nullptr; };
    // mqttInstanceId Field Functions 
    bool hasMqttInstanceId() const { return this->mqttInstanceId_ != nullptr;};
    void deleteMqttInstanceId() { this->mqttInstanceId_ = nullptr;};
    inline string getMqttInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqttInstanceId_, "") };
    inline GetRegisterCodeRequest& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


  protected:
    // The ID of the ApsaraMQ for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> mqttInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
