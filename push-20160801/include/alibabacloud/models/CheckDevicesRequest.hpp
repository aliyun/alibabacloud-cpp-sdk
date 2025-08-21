// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CheckDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(DeviceIds, deviceIds_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(DeviceIds, deviceIds_);
    };
    CheckDevicesRequest() = default ;
    CheckDevicesRequest(const CheckDevicesRequest &) = default ;
    CheckDevicesRequest(CheckDevicesRequest &&) = default ;
    CheckDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDevicesRequest() = default ;
    CheckDevicesRequest& operator=(const CheckDevicesRequest &) = default ;
    CheckDevicesRequest& operator=(CheckDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->deviceIds_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline CheckDevicesRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // deviceIds Field Functions 
    bool hasDeviceIds() const { return this->deviceIds_ != nullptr;};
    void deleteDeviceIds() { this->deviceIds_ = nullptr;};
    inline string deviceIds() const { DARABONBA_PTR_GET_DEFAULT(deviceIds_, "") };
    inline CheckDevicesRequest& setDeviceIds(string deviceIds) { DARABONBA_PTR_SET_VALUE(deviceIds_, deviceIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
