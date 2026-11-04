// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEUSERGROUPANDDEVICEGROUPRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEUSERGROUPANDDEVICEGROUPRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class AddFaceUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceUserGroupAndDeviceGroupRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(Relation, relation_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceUserGroupAndDeviceGroupRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(Relation, relation_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    AddFaceUserGroupAndDeviceGroupRelationRequest() = default ;
    AddFaceUserGroupAndDeviceGroupRelationRequest(const AddFaceUserGroupAndDeviceGroupRelationRequest &) = default ;
    AddFaceUserGroupAndDeviceGroupRelationRequest(AddFaceUserGroupAndDeviceGroupRelationRequest &&) = default ;
    AddFaceUserGroupAndDeviceGroupRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceUserGroupAndDeviceGroupRelationRequest() = default ;
    AddFaceUserGroupAndDeviceGroupRelationRequest& operator=(const AddFaceUserGroupAndDeviceGroupRelationRequest &) = default ;
    AddFaceUserGroupAndDeviceGroupRelationRequest& operator=(AddFaceUserGroupAndDeviceGroupRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceGroupId_ == nullptr
        && this->iotInstanceId_ == nullptr && this->isolationId_ == nullptr && this->relation_ == nullptr && this->userGroupId_ == nullptr; };
    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline AddFaceUserGroupAndDeviceGroupRelationRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline AddFaceUserGroupAndDeviceGroupRelationRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline AddFaceUserGroupAndDeviceGroupRelationRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline AddFaceUserGroupAndDeviceGroupRelationRequest& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AddFaceUserGroupAndDeviceGroupRelationRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The device group ID.
    // 
    // This parameter is required.
    shared_ptr<string> deviceGroupId_ {};
    // The instance ID.
    shared_ptr<string> iotInstanceId_ {};
    // The isolation ID.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The face synchronization relationship.
    // 
    // This parameter is required.
    shared_ptr<string> relation_ {};
    // The user group ID.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
