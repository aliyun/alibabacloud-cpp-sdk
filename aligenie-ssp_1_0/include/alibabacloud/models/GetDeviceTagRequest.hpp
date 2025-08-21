// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeviceTagRequestDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
    };
    GetDeviceTagRequest() = default ;
    GetDeviceTagRequest(const GetDeviceTagRequest &) = default ;
    GetDeviceTagRequest(GetDeviceTagRequest &&) = default ;
    GetDeviceTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceTagRequest() = default ;
    GetDeviceTagRequest& operator=(const GetDeviceTagRequest &) = default ;
    GetDeviceTagRequest& operator=(GetDeviceTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetDeviceTagRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetDeviceTagRequestDeviceInfo) };
    inline GetDeviceTagRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetDeviceTagRequestDeviceInfo) };
    inline GetDeviceTagRequest& setDeviceInfo(const GetDeviceTagRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetDeviceTagRequest& setDeviceInfo(GetDeviceTagRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetDeviceTagRequestDeviceInfo> deviceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
