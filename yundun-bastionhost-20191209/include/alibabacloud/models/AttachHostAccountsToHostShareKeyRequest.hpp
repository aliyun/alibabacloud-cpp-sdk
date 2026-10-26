// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOHOSTSHAREKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOHOSTSHAREKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostAccountsToHostShareKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostAccountsToHostShareKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountIds, hostAccountIds_);
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostAccountsToHostShareKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountIds, hostAccountIds_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachHostAccountsToHostShareKeyRequest() = default ;
    AttachHostAccountsToHostShareKeyRequest(const AttachHostAccountsToHostShareKeyRequest &) = default ;
    AttachHostAccountsToHostShareKeyRequest(AttachHostAccountsToHostShareKeyRequest &&) = default ;
    AttachHostAccountsToHostShareKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostAccountsToHostShareKeyRequest() = default ;
    AttachHostAccountsToHostShareKeyRequest& operator=(const AttachHostAccountsToHostShareKeyRequest &) = default ;
    AttachHostAccountsToHostShareKeyRequest& operator=(AttachHostAccountsToHostShareKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountIds_ == nullptr
        && this->hostShareKeyId_ == nullptr && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // hostAccountIds Field Functions 
    bool hasHostAccountIds() const { return this->hostAccountIds_ != nullptr;};
    void deleteHostAccountIds() { this->hostAccountIds_ = nullptr;};
    inline string getHostAccountIds() const { DARABONBA_PTR_GET_DEFAULT(hostAccountIds_, "") };
    inline AttachHostAccountsToHostShareKeyRequest& setHostAccountIds(string hostAccountIds) { DARABONBA_PTR_SET_VALUE(hostAccountIds_, hostAccountIds) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline AttachHostAccountsToHostShareKeyRequest& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachHostAccountsToHostShareKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AttachHostAccountsToHostShareKeyRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachHostAccountsToHostShareKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of host account IDs.
    // > This parameter is required. You can call the [ListHostAccounts](https://help.aliyun.com/document_detail/462937.html) operation to obtain this parameter.
    shared_ptr<string> hostAccountIds_ {};
    // The ID of the host shared key.
    // > This parameter is required. You can call the [ListHostShareKeys](https://help.aliyun.com/document_detail/462973.html) operation to obtain this parameter.
    shared_ptr<string> hostShareKeyId_ {};
    // The instance ID of the bastion host. You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the bastion host. For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
