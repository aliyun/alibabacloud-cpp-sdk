// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READYFORSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READYFORSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ReadyForServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadyForServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ReadyForServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ReadyForServiceRequest() = default ;
    ReadyForServiceRequest(const ReadyForServiceRequest &) = default ;
    ReadyForServiceRequest(ReadyForServiceRequest &&) = default ;
    ReadyForServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadyForServiceRequest() = default ;
    ReadyForServiceRequest& operator=(const ReadyForServiceRequest &) = default ;
    ReadyForServiceRequest& operator=(ReadyForServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->instanceId_ == nullptr && this->outboundScenario_ == nullptr && this->userId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ReadyForServiceRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReadyForServiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundScenario Field Functions 
    bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
    void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
    inline bool getOutboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
    inline ReadyForServiceRequest& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ReadyForServiceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> deviceId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> outboundScenario_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
