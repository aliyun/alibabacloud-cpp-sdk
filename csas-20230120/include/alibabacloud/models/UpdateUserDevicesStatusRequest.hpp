// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateUserDevicesStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserDevicesStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceAction, deviceAction_);
      DARABONBA_PTR_TO_JSON(DeviceTags, deviceTags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserDevicesStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceAction, deviceAction_);
      DARABONBA_PTR_FROM_JSON(DeviceTags, deviceTags_);
    };
    UpdateUserDevicesStatusRequest() = default ;
    UpdateUserDevicesStatusRequest(const UpdateUserDevicesStatusRequest &) = default ;
    UpdateUserDevicesStatusRequest(UpdateUserDevicesStatusRequest &&) = default ;
    UpdateUserDevicesStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserDevicesStatusRequest() = default ;
    UpdateUserDevicesStatusRequest& operator=(const UpdateUserDevicesStatusRequest &) = default ;
    UpdateUserDevicesStatusRequest& operator=(UpdateUserDevicesStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceAction_ == nullptr
        && return this->deviceTags_ == nullptr; };
    // deviceAction Field Functions 
    bool hasDeviceAction() const { return this->deviceAction_ != nullptr;};
    void deleteDeviceAction() { this->deviceAction_ = nullptr;};
    inline string deviceAction() const { DARABONBA_PTR_GET_DEFAULT(deviceAction_, "") };
    inline UpdateUserDevicesStatusRequest& setDeviceAction(string deviceAction) { DARABONBA_PTR_SET_VALUE(deviceAction_, deviceAction) };


    // deviceTags Field Functions 
    bool hasDeviceTags() const { return this->deviceTags_ != nullptr;};
    void deleteDeviceTags() { this->deviceTags_ = nullptr;};
    inline const vector<string> & deviceTags() const { DARABONBA_PTR_GET_CONST(deviceTags_, vector<string>) };
    inline vector<string> deviceTags() { DARABONBA_PTR_GET(deviceTags_, vector<string>) };
    inline UpdateUserDevicesStatusRequest& setDeviceTags(const vector<string> & deviceTags) { DARABONBA_PTR_SET_VALUE(deviceTags_, deviceTags) };
    inline UpdateUserDevicesStatusRequest& setDeviceTags(vector<string> && deviceTags) { DARABONBA_PTR_SET_RVALUE(deviceTags_, deviceTags) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceAction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> deviceTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
