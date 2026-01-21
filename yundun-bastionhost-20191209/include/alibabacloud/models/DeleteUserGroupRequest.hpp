// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    DeleteUserGroupRequest() = default ;
    DeleteUserGroupRequest(const DeleteUserGroupRequest &) = default ;
    DeleteUserGroupRequest(DeleteUserGroupRequest &&) = default ;
    DeleteUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserGroupRequest() = default ;
    DeleteUserGroupRequest& operator=(const DeleteUserGroupRequest &) = default ;
    DeleteUserGroupRequest& operator=(DeleteUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->userGroupId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DeleteUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The ID of the bastion host on which you want to delete the user group.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host on which you want to delete the user group.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user group that you want to delete.
    // 
    // > You can call the [ListUserGroups](https://help.aliyun.com/document_detail/204509.html) operation to query the ID of the user group.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
