// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPACCOUNTNAMESFORUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPACCOUNTNAMESFORUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostGroupAccountNamesForUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupAccountNamesForUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupAccountNamesForUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListHostGroupAccountNamesForUserGroupRequest() = default ;
    ListHostGroupAccountNamesForUserGroupRequest(const ListHostGroupAccountNamesForUserGroupRequest &) = default ;
    ListHostGroupAccountNamesForUserGroupRequest(ListHostGroupAccountNamesForUserGroupRequest &&) = default ;
    ListHostGroupAccountNamesForUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupAccountNamesForUserGroupRequest() = default ;
    ListHostGroupAccountNamesForUserGroupRequest& operator=(const ListHostGroupAccountNamesForUserGroupRequest &) = default ;
    ListHostGroupAccountNamesForUserGroupRequest& operator=(ListHostGroupAccountNamesForUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostGroupId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->userGroupId_ == nullptr; };
    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline ListHostGroupAccountNamesForUserGroupRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHostGroupAccountNamesForUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListHostGroupAccountNamesForUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListHostGroupAccountNamesForUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The ID of the host group.
    // 
    // > You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query the ID of the host group.
    // 
    // This parameter is required.
    shared_ptr<string> hostGroupId_ {};
    // The ID of the bastion host on which you want to query the host account names the user group is authorized to manage in a host group.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host on which you want to query the host account names the user group is authorized to manage in a host group.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user group.
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
