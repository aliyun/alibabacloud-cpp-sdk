// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostAccountsToUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostAccountsToUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostAccountsToUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AttachHostAccountsToUserRequest() = default ;
    AttachHostAccountsToUserRequest(const AttachHostAccountsToUserRequest &) = default ;
    AttachHostAccountsToUserRequest(AttachHostAccountsToUserRequest &&) = default ;
    AttachHostAccountsToUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostAccountsToUserRequest() = default ;
    AttachHostAccountsToUserRequest& operator=(const AttachHostAccountsToUserRequest &) = default ;
    AttachHostAccountsToUserRequest& operator=(AttachHostAccountsToUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hosts_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline string getHosts() const { DARABONBA_PTR_GET_DEFAULT(hosts_, "") };
    inline AttachHostAccountsToUserRequest& setHosts(string hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachHostAccountsToUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachHostAccountsToUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AttachHostAccountsToUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The IDs of the hosts and host accounts that you want to authorize the user to manage. You can specify up to 10 host IDs and up to 10 host account IDs for each host. You can specify only host IDs. In this case, the user is authorized to manage only the specified hosts. For more information about this parameter, see the "Description of the Hosts parameter" section of this topic.
    // 
    // > You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query the ID of the host and the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to query the ID of the host account.
    // 
    // This parameter is required.
    shared_ptr<string> hosts_ {};
    // The ID of the bastion host for which you want to authorize the user to manage the hosts and host accounts.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host for which you want to authorize the user to manage the hosts and host accounts.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user that you want to authorize to manage the hosts and host accounts.
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
