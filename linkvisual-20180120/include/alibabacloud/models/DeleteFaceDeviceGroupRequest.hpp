// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACEDEVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACEDEVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class DeleteFaceDeviceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceDeviceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceDeviceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
    };
    DeleteFaceDeviceGroupRequest() = default ;
    DeleteFaceDeviceGroupRequest(const DeleteFaceDeviceGroupRequest &) = default ;
    DeleteFaceDeviceGroupRequest(DeleteFaceDeviceGroupRequest &&) = default ;
    DeleteFaceDeviceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceDeviceGroupRequest() = default ;
    DeleteFaceDeviceGroupRequest& operator=(const DeleteFaceDeviceGroupRequest &) = default ;
    DeleteFaceDeviceGroupRequest& operator=(DeleteFaceDeviceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceGroupId_ == nullptr
        && this->isolationId_ == nullptr; };
    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline DeleteFaceDeviceGroupRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline DeleteFaceDeviceGroupRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


  protected:
    // The device group ID.
    // 
    // This parameter is required.
    shared_ptr<string> deviceGroupId_ {};
    // The isolation ID.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
