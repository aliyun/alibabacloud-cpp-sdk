// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESTATUSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESTATUSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeviceStatusInfoRequestDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceStatusInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceStatusInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceStatusInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
    };
    GetDeviceStatusInfoRequest() = default ;
    GetDeviceStatusInfoRequest(const GetDeviceStatusInfoRequest &) = default ;
    GetDeviceStatusInfoRequest(GetDeviceStatusInfoRequest &&) = default ;
    GetDeviceStatusInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceStatusInfoRequest() = default ;
    GetDeviceStatusInfoRequest& operator=(const GetDeviceStatusInfoRequest &) = default ;
    GetDeviceStatusInfoRequest& operator=(GetDeviceStatusInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetDeviceStatusInfoRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetDeviceStatusInfoRequestDeviceInfo) };
    inline GetDeviceStatusInfoRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetDeviceStatusInfoRequestDeviceInfo) };
    inline GetDeviceStatusInfoRequest& setDeviceInfo(const GetDeviceStatusInfoRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetDeviceStatusInfoRequest& setDeviceInfo(GetDeviceStatusInfoRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetDeviceStatusInfoRequestDeviceInfo> deviceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
