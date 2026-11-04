// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEDEVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEDEVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class AddFaceDeviceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceDeviceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroupName, deviceGroupName_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceDeviceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroupName, deviceGroupName_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
    };
    AddFaceDeviceGroupRequest() = default ;
    AddFaceDeviceGroupRequest(const AddFaceDeviceGroupRequest &) = default ;
    AddFaceDeviceGroupRequest(AddFaceDeviceGroupRequest &&) = default ;
    AddFaceDeviceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceDeviceGroupRequest() = default ;
    AddFaceDeviceGroupRequest& operator=(const AddFaceDeviceGroupRequest &) = default ;
    AddFaceDeviceGroupRequest& operator=(AddFaceDeviceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceGroupName_ == nullptr
        && this->isolationId_ == nullptr; };
    // deviceGroupName Field Functions 
    bool hasDeviceGroupName() const { return this->deviceGroupName_ != nullptr;};
    void deleteDeviceGroupName() { this->deviceGroupName_ = nullptr;};
    inline string getDeviceGroupName() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupName_, "") };
    inline AddFaceDeviceGroupRequest& setDeviceGroupName(string deviceGroupName) { DARABONBA_PTR_SET_VALUE(deviceGroupName_, deviceGroupName) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline AddFaceDeviceGroupRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


  protected:
    // The name of the device group. You can customize the value. The name can be up to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> deviceGroupName_ {};
    // The business isolation ID. It is used to isolate data between different business applications under the same Alibaba Cloud account. It supports uppercase and lowercase English letters and digits.
    // 
    // For example, if you have face recognition businesses in Region A and Region B, you can set different business isolation IDs to distinguish the face recognition businesses in Region A and Region B.
    // 
    // >Notice: 
    // Save the business isolation ID properly for use when you call other API operations in this business isolation zone.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
