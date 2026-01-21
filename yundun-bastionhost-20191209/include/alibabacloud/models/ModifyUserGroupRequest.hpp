// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
    };
    ModifyUserGroupRequest() = default ;
    ModifyUserGroupRequest(const ModifyUserGroupRequest &) = default ;
    ModifyUserGroupRequest(ModifyUserGroupRequest &&) = default ;
    ModifyUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserGroupRequest() = default ;
    ModifyUserGroupRequest& operator=(const ModifyUserGroupRequest &) = default ;
    ModifyUserGroupRequest& operator=(ModifyUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->userGroupId_ == nullptr && this->userGroupName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyUserGroupRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ModifyUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline ModifyUserGroupRequest& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


  protected:
    // The new description of the user group. The description can be up to 500 characters in length.
    shared_ptr<string> comment_ {};
    // The ID of the bastion host in which you want to modify the information about the user group.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host in which you want to modify the information about the user group.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user group that you want to modify.
    // 
    // > You can call the [ListUserGroups](https://help.aliyun.com/document_detail/204509.html) operation to query the ID of the user group.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
    // The new name of the user group. This name can be up to 128 characters in length.
    shared_ptr<string> userGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
