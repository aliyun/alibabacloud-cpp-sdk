// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostGroupAccountsToUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostGroupAccountsToUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostGroupAccountsToUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroups, hostGroups_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AttachHostGroupAccountsToUserRequest() = default ;
    AttachHostGroupAccountsToUserRequest(const AttachHostGroupAccountsToUserRequest &) = default ;
    AttachHostGroupAccountsToUserRequest(AttachHostGroupAccountsToUserRequest &&) = default ;
    AttachHostGroupAccountsToUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostGroupAccountsToUserRequest() = default ;
    AttachHostGroupAccountsToUserRequest& operator=(const AttachHostGroupAccountsToUserRequest &) = default ;
    AttachHostGroupAccountsToUserRequest& operator=(AttachHostGroupAccountsToUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostGroups_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr; };
    // hostGroups Field Functions 
    bool hasHostGroups() const { return this->hostGroups_ != nullptr;};
    void deleteHostGroups() { this->hostGroups_ = nullptr;};
    inline string getHostGroups() const { DARABONBA_PTR_GET_DEFAULT(hostGroups_, "") };
    inline AttachHostGroupAccountsToUserRequest& setHostGroups(string hostGroups) { DARABONBA_PTR_SET_VALUE(hostGroups_, hostGroups) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachHostGroupAccountsToUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachHostGroupAccountsToUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AttachHostGroupAccountsToUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the host group and the name of the host account that you want to authorize the user to manage. You can specify up to 10 host group IDs and up to 10 host account names for each host group. You can specify only host group IDs. In this case, the user is authorized to manage only the specified host groups. For more information about this parameter, see the "Description of the HostGroups parameter" section of this topic.
    // 
    // > You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query the ID of the host group and the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to query the name of the host account.
    // 
    // This parameter is required.
    shared_ptr<string> hostGroups_ {};
    // The ID of the bastion host for which you want to authorize the user to manage the host groups and host accounts.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host for which you want to authorize the user to manage the host groups and host accounts.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user that you want to authorize to manage the host groups and host accounts.
    // 
    // > You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the ID of the user.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
