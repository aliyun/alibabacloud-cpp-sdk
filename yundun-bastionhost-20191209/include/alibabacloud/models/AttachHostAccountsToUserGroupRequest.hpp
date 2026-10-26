// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostAccountsToUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostAccountsToUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostAccountsToUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    AttachHostAccountsToUserGroupRequest() = default ;
    AttachHostAccountsToUserGroupRequest(const AttachHostAccountsToUserGroupRequest &) = default ;
    AttachHostAccountsToUserGroupRequest(AttachHostAccountsToUserGroupRequest &&) = default ;
    AttachHostAccountsToUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostAccountsToUserGroupRequest() = default ;
    AttachHostAccountsToUserGroupRequest& operator=(const AttachHostAccountsToUserGroupRequest &) = default ;
    AttachHostAccountsToUserGroupRequest& operator=(AttachHostAccountsToUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hosts_ == nullptr
        && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->userGroupId_ == nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline string getHosts() const { DARABONBA_PTR_GET_DEFAULT(hosts_, "") };
    inline AttachHostAccountsToUserGroupRequest& setHosts(string hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachHostAccountsToUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AttachHostAccountsToUserGroupRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachHostAccountsToUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AttachHostAccountsToUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The host IDs and host account IDs that you want to authorize the user group to manage. You can specify up to 10 host IDs, and each host supports up to 10 host account IDs. You do not need to specify host account IDs. If you do not specify host account IDs, only the hosts are authorized for the user group. For the specific structure of this parameter, see the Hosts parameter structure description under the request parameters list.
    // > You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query host IDs and call the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to query host account IDs.
    // 
    // This parameter is required.
    shared_ptr<string> hosts_ {};
    // The instance ID of the bastion host where the user group that you want to grant authorization resides.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the bastion host where the user group that you want to authorize resides.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user group that you want to authorize to manage hosts and host accounts.
    // > You can call the [ListUserGroups](https://help.aliyun.com/document_detail/204509.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
