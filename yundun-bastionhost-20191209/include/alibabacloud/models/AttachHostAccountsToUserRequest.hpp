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
    // The IDs of the hosts and host accounts to be authorized for the user. You can specify up to 10 host IDs, and up to 9 host account IDs for each host. If you do not specify host account IDs, only the hosts are authorized for the user. For more information about the structure of this parameter, see the Hosts parameter structure description in the request parameters section.
    // > You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query host IDs and call the [ListHostAccounts](https://help.aliyun.com/document_detail/204372.html) operation to query host account IDs.
    // 
    // This parameter is required.
    shared_ptr<string> hosts_ {};
    // The instance ID of the Bastionhost instance to which the user to be granted authorization for hosts and host accounts belongs.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the Bastionhost instance where the user to be authorized for hosts and host accounts resides.
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user to whom you want to authorize hosts and host accounts.
    // > You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
