// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLIENTUNBINDDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLIENTUNBINDDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class ClientUnbindDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClientUnbindDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ClientUnbindDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ClientUnbindDeviceRequest() = default ;
    ClientUnbindDeviceRequest(const ClientUnbindDeviceRequest &) = default ;
    ClientUnbindDeviceRequest(ClientUnbindDeviceRequest &&) = default ;
    ClientUnbindDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClientUnbindDeviceRequest() = default ;
    ClientUnbindDeviceRequest& operator=(const ClientUnbindDeviceRequest &) = default ;
    ClientUnbindDeviceRequest& operator=(ClientUnbindDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceId_ != nullptr
        && this->tenantId_ != nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ClientUnbindDeviceRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ClientUnbindDeviceRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
