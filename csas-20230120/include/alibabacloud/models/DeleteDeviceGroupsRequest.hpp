// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDEVICEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDEVICEGROUPSREQUEST_HPP_
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
  class DeleteDeviceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDeviceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroupIds, deviceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDeviceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroupIds, deviceGroupIds_);
    };
    DeleteDeviceGroupsRequest() = default ;
    DeleteDeviceGroupsRequest(const DeleteDeviceGroupsRequest &) = default ;
    DeleteDeviceGroupsRequest(DeleteDeviceGroupsRequest &&) = default ;
    DeleteDeviceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDeviceGroupsRequest() = default ;
    DeleteDeviceGroupsRequest& operator=(const DeleteDeviceGroupsRequest &) = default ;
    DeleteDeviceGroupsRequest& operator=(DeleteDeviceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceGroupIds_ == nullptr; };
    // deviceGroupIds Field Functions 
    bool hasDeviceGroupIds() const { return this->deviceGroupIds_ != nullptr;};
    void deleteDeviceGroupIds() { this->deviceGroupIds_ = nullptr;};
    inline const vector<string> & getDeviceGroupIds() const { DARABONBA_PTR_GET_CONST(deviceGroupIds_, vector<string>) };
    inline vector<string> getDeviceGroupIds() { DARABONBA_PTR_GET(deviceGroupIds_, vector<string>) };
    inline DeleteDeviceGroupsRequest& setDeviceGroupIds(const vector<string> & deviceGroupIds) { DARABONBA_PTR_SET_VALUE(deviceGroupIds_, deviceGroupIds) };
    inline DeleteDeviceGroupsRequest& setDeviceGroupIds(vector<string> && deviceGroupIds) { DARABONBA_PTR_SET_RVALUE(deviceGroupIds_, deviceGroupIds) };


  protected:
    // The collection of instance tag IDs to delete. Duplicate values are not allowed.
    shared_ptr<vector<string>> deviceGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
