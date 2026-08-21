// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDEVICEGROUPMATCHDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDEVICEGROUPMATCHDEVICESREQUEST_HPP_
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
  class AddDeviceGroupMatchDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDeviceGroupMatchDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DevTags, devTags_);
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDeviceGroupMatchDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DevTags, devTags_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
    };
    AddDeviceGroupMatchDevicesRequest() = default ;
    AddDeviceGroupMatchDevicesRequest(const AddDeviceGroupMatchDevicesRequest &) = default ;
    AddDeviceGroupMatchDevicesRequest(AddDeviceGroupMatchDevicesRequest &&) = default ;
    AddDeviceGroupMatchDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDeviceGroupMatchDevicesRequest() = default ;
    AddDeviceGroupMatchDevicesRequest& operator=(const AddDeviceGroupMatchDevicesRequest &) = default ;
    AddDeviceGroupMatchDevicesRequest& operator=(AddDeviceGroupMatchDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devTags_ == nullptr
        && this->deviceGroupId_ == nullptr; };
    // devTags Field Functions 
    bool hasDevTags() const { return this->devTags_ != nullptr;};
    void deleteDevTags() { this->devTags_ = nullptr;};
    inline const vector<string> & getDevTags() const { DARABONBA_PTR_GET_CONST(devTags_, vector<string>) };
    inline vector<string> getDevTags() { DARABONBA_PTR_GET(devTags_, vector<string>) };
    inline AddDeviceGroupMatchDevicesRequest& setDevTags(const vector<string> & devTags) { DARABONBA_PTR_SET_VALUE(devTags_, devTags) };
    inline AddDeviceGroupMatchDevicesRequest& setDevTags(vector<string> && devTags) { DARABONBA_PTR_SET_RVALUE(devTags_, devTags) };


    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline AddDeviceGroupMatchDevicesRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


  protected:
    // The collection of terminal device IDs to add. At least one ID must be specified, and duplicate values are not allowed.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> devTags_ {};
    // The device label ID.
    // 
    // This parameter is required.
    shared_ptr<string> deviceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
