// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ds, ds_);
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ds, ds_);
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
    };
    GetDeviceInfoRequest() = default ;
    GetDeviceInfoRequest(const GetDeviceInfoRequest &) = default ;
    GetDeviceInfoRequest(GetDeviceInfoRequest &&) = default ;
    GetDeviceInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceInfoRequest() = default ;
    GetDeviceInfoRequest& operator=(const GetDeviceInfoRequest &) = default ;
    GetDeviceInfoRequest& operator=(GetDeviceInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->ds_ == nullptr && this->factoryId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetDeviceInfoRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // ds Field Functions 
    bool hasDs() const { return this->ds_ != nullptr;};
    void deleteDs() { this->ds_ = nullptr;};
    inline string getDs() const { DARABONBA_PTR_GET_DEFAULT(ds_, "") };
    inline GetDeviceInfoRequest& setDs(string ds) { DARABONBA_PTR_SET_VALUE(ds_, ds) };


    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string getFactoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline GetDeviceInfoRequest& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


  protected:
    // The ID of the device.
    // 
    // This parameter is required.
    shared_ptr<string> deviceId_ {};
    // The time string in the YYYY-mm-dd format.
    // 
    // This parameter is required.
    shared_ptr<string> ds_ {};
    // The ID of the site.
    // 
    // This parameter is required.
    shared_ptr<string> factoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
