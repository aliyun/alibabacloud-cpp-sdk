// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostGroupAccountsToUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostGroupAccountsToUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostGroupAccountsToUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    AttachHostGroupAccountsToUserGroupRequest() = default ;
    AttachHostGroupAccountsToUserGroupRequest(const AttachHostGroupAccountsToUserGroupRequest &) = default ;
    AttachHostGroupAccountsToUserGroupRequest(AttachHostGroupAccountsToUserGroupRequest &&) = default ;
    AttachHostGroupAccountsToUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostGroupAccountsToUserGroupRequest() = default ;
    AttachHostGroupAccountsToUserGroupRequest& operator=(const AttachHostGroupAccountsToUserGroupRequest &) = default ;
    AttachHostGroupAccountsToUserGroupRequest& operator=(AttachHostGroupAccountsToUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostGroups_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->userGroupId_ == nullptr; };
    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline string getHostGroups() const { DARABONBA_PTR_GET_DEFAULT(hostGroups_, "") };
    inline AttachHostGroupAccountsToUserGroupRequest& setHostGroups(string hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachHostGroupAccountsToUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachHostGroupAccountsToUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AttachHostGroupAccountsToUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The IDs of the host groups and the names of the host accounts to which you want to grant the user group access. You can specify up to 10 host group IDs and up to 10 host account names for each host group. If you do not specify host account names, the user group is granted access only to the host groups. For more information about the structure of this parameter, see the HostGroups parameter structure description in the Request parameters section.
    // > You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query host group IDs and call the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to query host account names.
    // 
    // This parameter is required.
    shared_ptr<string> hostGroups_ {};
    // The ID of the Bastionhost instance where the user group resides. The user group is to be authorized to access host groups and host accounts.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies the region ID of the Bastionhost instance that manages the user group to which you want to grant permissions on host groups and host accounts.
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user group to which you want to grant permissions on host groups and host accounts.
    // > You can call the [ListUserGroups](https://help.aliyun.com/document_detail/204509.html) operation to query the user group ID.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
