// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateUserDevicesStatusResponseBodyDevices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateUserDevicesStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserDevicesStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserDevicesStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateUserDevicesStatusResponseBody() = default ;
    UpdateUserDevicesStatusResponseBody(const UpdateUserDevicesStatusResponseBody &) = default ;
    UpdateUserDevicesStatusResponseBody(UpdateUserDevicesStatusResponseBody &&) = default ;
    UpdateUserDevicesStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserDevicesStatusResponseBody() = default ;
    UpdateUserDevicesStatusResponseBody& operator=(const UpdateUserDevicesStatusResponseBody &) = default ;
    UpdateUserDevicesStatusResponseBody& operator=(UpdateUserDevicesStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devices_ == nullptr
        && return this->requestId_ == nullptr; };
    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<UpdateUserDevicesStatusResponseBodyDevices> & devices() const { DARABONBA_PTR_GET_CONST(devices_, vector<UpdateUserDevicesStatusResponseBodyDevices>) };
    inline vector<UpdateUserDevicesStatusResponseBodyDevices> devices() { DARABONBA_PTR_GET(devices_, vector<UpdateUserDevicesStatusResponseBodyDevices>) };
    inline UpdateUserDevicesStatusResponseBody& setDevices(const vector<UpdateUserDevicesStatusResponseBodyDevices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline UpdateUserDevicesStatusResponseBody& setDevices(vector<UpdateUserDevicesStatusResponseBodyDevices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserDevicesStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<UpdateUserDevicesStatusResponseBodyDevices>> devices_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
