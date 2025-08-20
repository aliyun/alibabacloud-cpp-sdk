// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSHARINGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSHARINGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateUserDevicesSharingStatusResponseBodyDevices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateUserDevicesSharingStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserDevicesSharingStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserDevicesSharingStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateUserDevicesSharingStatusResponseBody() = default ;
    UpdateUserDevicesSharingStatusResponseBody(const UpdateUserDevicesSharingStatusResponseBody &) = default ;
    UpdateUserDevicesSharingStatusResponseBody(UpdateUserDevicesSharingStatusResponseBody &&) = default ;
    UpdateUserDevicesSharingStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserDevicesSharingStatusResponseBody() = default ;
    UpdateUserDevicesSharingStatusResponseBody& operator=(const UpdateUserDevicesSharingStatusResponseBody &) = default ;
    UpdateUserDevicesSharingStatusResponseBody& operator=(UpdateUserDevicesSharingStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->devices_ != nullptr
        && this->requestId_ != nullptr; };
    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<UpdateUserDevicesSharingStatusResponseBodyDevices> & devices() const { DARABONBA_PTR_GET_CONST(devices_, vector<UpdateUserDevicesSharingStatusResponseBodyDevices>) };
    inline vector<UpdateUserDevicesSharingStatusResponseBodyDevices> devices() { DARABONBA_PTR_GET(devices_, vector<UpdateUserDevicesSharingStatusResponseBodyDevices>) };
    inline UpdateUserDevicesSharingStatusResponseBody& setDevices(const vector<UpdateUserDevicesSharingStatusResponseBodyDevices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline UpdateUserDevicesSharingStatusResponseBody& setDevices(vector<UpdateUserDevicesSharingStatusResponseBodyDevices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserDevicesSharingStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<UpdateUserDevicesSharingStatusResponseBodyDevices>> devices_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
