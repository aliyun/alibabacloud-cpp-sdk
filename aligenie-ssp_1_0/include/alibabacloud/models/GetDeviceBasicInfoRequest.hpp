// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEBASICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEBASICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeviceBasicInfoRequestDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceBasicInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceBasicInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceBasicInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
    };
    GetDeviceBasicInfoRequest() = default ;
    GetDeviceBasicInfoRequest(const GetDeviceBasicInfoRequest &) = default ;
    GetDeviceBasicInfoRequest(GetDeviceBasicInfoRequest &&) = default ;
    GetDeviceBasicInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceBasicInfoRequest() = default ;
    GetDeviceBasicInfoRequest& operator=(const GetDeviceBasicInfoRequest &) = default ;
    GetDeviceBasicInfoRequest& operator=(GetDeviceBasicInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetDeviceBasicInfoRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetDeviceBasicInfoRequestDeviceInfo) };
    inline GetDeviceBasicInfoRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetDeviceBasicInfoRequestDeviceInfo) };
    inline GetDeviceBasicInfoRequest& setDeviceInfo(const GetDeviceBasicInfoRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetDeviceBasicInfoRequest& setDeviceInfo(GetDeviceBasicInfoRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetDeviceBasicInfoRequestDeviceInfo> deviceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
