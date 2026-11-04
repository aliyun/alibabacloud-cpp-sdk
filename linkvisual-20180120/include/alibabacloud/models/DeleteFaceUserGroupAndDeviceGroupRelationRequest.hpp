// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACEUSERGROUPANDDEVICEGROUPRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACEUSERGROUPANDDEVICEGROUPRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class DeleteFaceUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceUserGroupAndDeviceGroupRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlId, controlId_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceUserGroupAndDeviceGroupRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlId, controlId_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
    };
    DeleteFaceUserGroupAndDeviceGroupRelationRequest() = default ;
    DeleteFaceUserGroupAndDeviceGroupRelationRequest(const DeleteFaceUserGroupAndDeviceGroupRelationRequest &) = default ;
    DeleteFaceUserGroupAndDeviceGroupRelationRequest(DeleteFaceUserGroupAndDeviceGroupRelationRequest &&) = default ;
    DeleteFaceUserGroupAndDeviceGroupRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceUserGroupAndDeviceGroupRelationRequest() = default ;
    DeleteFaceUserGroupAndDeviceGroupRelationRequest& operator=(const DeleteFaceUserGroupAndDeviceGroupRelationRequest &) = default ;
    DeleteFaceUserGroupAndDeviceGroupRelationRequest& operator=(DeleteFaceUserGroupAndDeviceGroupRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlId_ == nullptr
        && this->isolationId_ == nullptr; };
    // controlId Field Functions 
    bool hasControlId() const { return this->controlId_ != nullptr;};
    void deleteControlId() { this->controlId_ = nullptr;};
    inline string getControlId() const { DARABONBA_PTR_GET_DEFAULT(controlId_, "") };
    inline DeleteFaceUserGroupAndDeviceGroupRelationRequest& setControlId(string controlId) { DARABONBA_PTR_SET_VALUE(controlId_, controlId) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline DeleteFaceUserGroupAndDeviceGroupRelationRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


  protected:
    // The control ID of the synchronization relationship between the user group and the device group. Set this parameter to the value of **ControlId** that you obtained and saved locally when you called the [AddFaceUserGroupAndDeviceGroupRelation](https://help.aliyun.com/document_detail/288342.html) operation to add the face synchronization relationship between the user group and the device group.
    // 
    // This parameter is required.
    shared_ptr<string> controlId_ {};
    // The business isolation ID, which is used to isolate data between different business applications under the same Alibaba Cloud account. Set this parameter to the same value of **IsolationId** that you specified when you called the [AddFaceUserGroupAndDeviceGroupRelation](https://help.aliyun.com/document_detail/288342.html) operation to add the face synchronization relationship between the user group and the device group.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
