// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBYDEVICEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBYDEVICEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserByDeviceIdRequestDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetUserByDeviceIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserByDeviceIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserByDeviceIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
    };
    GetUserByDeviceIdRequest() = default ;
    GetUserByDeviceIdRequest(const GetUserByDeviceIdRequest &) = default ;
    GetUserByDeviceIdRequest(GetUserByDeviceIdRequest &&) = default ;
    GetUserByDeviceIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserByDeviceIdRequest() = default ;
    GetUserByDeviceIdRequest& operator=(const GetUserByDeviceIdRequest &) = default ;
    GetUserByDeviceIdRequest& operator=(GetUserByDeviceIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetUserByDeviceIdRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetUserByDeviceIdRequestDeviceInfo) };
    inline GetUserByDeviceIdRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetUserByDeviceIdRequestDeviceInfo) };
    inline GetUserByDeviceIdRequest& setDeviceInfo(const GetUserByDeviceIdRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetUserByDeviceIdRequest& setDeviceInfo(GetUserByDeviceIdRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetUserByDeviceIdRequestDeviceInfo> deviceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
