// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDevicesRequest() = default ;
    DeleteDevicesRequest(const DeleteDevicesRequest &) = default ;
    DeleteDevicesRequest(DeleteDevicesRequest &&) = default ;
    DeleteDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDevicesRequest() = default ;
    DeleteDevicesRequest& operator=(const DeleteDevicesRequest &) = default ;
    DeleteDevicesRequest& operator=(DeleteDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientType_ == nullptr
        && return this->deviceIds_ == nullptr && return this->force_ == nullptr && return this->regionId_ == nullptr; };
    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline DeleteDevicesRequest& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // deviceIds Field Functions 
    bool hasDeviceIds() const { return this->deviceIds_ != nullptr;};
    void deleteDeviceIds() { this->deviceIds_ = nullptr;};
    inline const vector<string> & deviceIds() const { DARABONBA_PTR_GET_CONST(deviceIds_, vector<string>) };
    inline vector<string> deviceIds() { DARABONBA_PTR_GET(deviceIds_, vector<string>) };
    inline DeleteDevicesRequest& setDeviceIds(const vector<string> & deviceIds) { DARABONBA_PTR_SET_VALUE(deviceIds_, deviceIds) };
    inline DeleteDevicesRequest& setDeviceIds(vector<string> && deviceIds) { DARABONBA_PTR_SET_RVALUE(deviceIds_, deviceIds) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline int32_t force() const { DARABONBA_PTR_GET_DEFAULT(force_, 0) };
    inline DeleteDevicesRequest& setForce(int32_t force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDevicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The type of the client.
    // 
    // Valid values:
    // 
    // *   1: hardware client.
    // *   2: software client.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> clientType_ = nullptr;
    // The IDs of the devices. You can specify up to 200 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> deviceIds_ = nullptr;
    // Specifies whether to forcefully delete the device if the device is bound to a user.
    // 
    // Valid values:
    // 
    // *   0: do not forcefully delete the device.
    // *   1: forcefully delete the device.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> force_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by WUYING Workspace.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
