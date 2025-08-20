// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserDeviceResponseBodyDevice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetUserDeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserDeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserDeviceResponseBody() = default ;
    GetUserDeviceResponseBody(const GetUserDeviceResponseBody &) = default ;
    GetUserDeviceResponseBody(GetUserDeviceResponseBody &&) = default ;
    GetUserDeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDeviceResponseBody() = default ;
    GetUserDeviceResponseBody& operator=(const GetUserDeviceResponseBody &) = default ;
    GetUserDeviceResponseBody& operator=(GetUserDeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->device_ != nullptr
        && this->requestId_ != nullptr; };
    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline const GetUserDeviceResponseBodyDevice & device() const { DARABONBA_PTR_GET_CONST(device_, GetUserDeviceResponseBodyDevice) };
    inline GetUserDeviceResponseBodyDevice device() { DARABONBA_PTR_GET(device_, GetUserDeviceResponseBodyDevice) };
    inline GetUserDeviceResponseBody& setDevice(const GetUserDeviceResponseBodyDevice & device) { DARABONBA_PTR_SET_VALUE(device_, device) };
    inline GetUserDeviceResponseBody& setDevice(GetUserDeviceResponseBodyDevice && device) { DARABONBA_PTR_SET_RVALUE(device_, device) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserDeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetUserDeviceResponseBodyDevice> device_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
