// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDEVICESREQUEST_HPP_
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
  class AddDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddDevicesRequest() = default ;
    AddDevicesRequest(const AddDevicesRequest &) = default ;
    AddDevicesRequest(AddDevicesRequest &&) = default ;
    AddDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDevicesRequest() = default ;
    AddDevicesRequest& operator=(const AddDevicesRequest &) = default ;
    AddDevicesRequest& operator=(AddDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientType_ != nullptr
        && this->deviceIds_ != nullptr && this->regionId_ != nullptr; };
    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline AddDevicesRequest& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // deviceIds Field Functions 
    bool hasDeviceIds() const { return this->deviceIds_ != nullptr;};
    void deleteDeviceIds() { this->deviceIds_ = nullptr;};
    inline const vector<string> & deviceIds() const { DARABONBA_PTR_GET_CONST(deviceIds_, vector<string>) };
    inline vector<string> deviceIds() { DARABONBA_PTR_GET(deviceIds_, vector<string>) };
    inline AddDevicesRequest& setDeviceIds(const vector<string> & deviceIds) { DARABONBA_PTR_SET_VALUE(deviceIds_, deviceIds) };
    inline AddDevicesRequest& setDeviceIds(vector<string> && deviceIds) { DARABONBA_PTR_SET_RVALUE(deviceIds_, deviceIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddDevicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by WUYING Workspace.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
