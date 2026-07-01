// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPCORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPCORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateIpcOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpcOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Capability, capability_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpcOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Capability, capability_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
    };
    CreateIpcOrderRequest() = default ;
    CreateIpcOrderRequest(const CreateIpcOrderRequest &) = default ;
    CreateIpcOrderRequest(CreateIpcOrderRequest &&) = default ;
    CreateIpcOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpcOrderRequest() = default ;
    CreateIpcOrderRequest& operator=(const CreateIpcOrderRequest &) = default ;
    CreateIpcOrderRequest& operator=(CreateIpcOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capability_ == nullptr
        && this->deviceId_ == nullptr && this->period_ == nullptr; };
    // capability Field Functions 
    bool hasCapability() const { return this->capability_ != nullptr;};
    void deleteCapability() { this->capability_ = nullptr;};
    inline string getCapability() const { DARABONBA_PTR_GET_DEFAULT(capability_, "") };
    inline CreateIpcOrderRequest& setCapability(string capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline CreateIpcOrderRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateIpcOrderRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    // The capability. Valid values:
    // 
    // - understand: Image understanding. Supports the analysis of 300 images per day.
    // 
    // - understand-reid: Image understanding with person re-identification (ReID). Supports the analysis of 300 images per day.
    // 
    // - search: Search. Supports 75 searches per day.
    // 
    // - understand-search: Image understanding and search. Supports the analysis of 300 images and 75 searches per day.
    // 
    // - understand-reid-search: Image understanding with ReID and search. Supports the analysis of 300 images and 75 searches per day.
    shared_ptr<string> capability_ {};
    // The device ID.
    shared_ptr<string> deviceId_ {};
    // The subscription period. Valid values:
    // 
    // - month: A monthly subscription, calculated as 30 days.
    // 
    // - quarter: A quarterly subscription, calculated as 90 days.
    // 
    // - year: An annual subscription, calculated as 365 days.
    shared_ptr<string> period_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
