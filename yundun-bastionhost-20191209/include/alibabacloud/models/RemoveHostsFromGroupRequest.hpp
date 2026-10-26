// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEHOSTSFROMGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEHOSTSFROMGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class RemoveHostsFromGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveHostsFromGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(HostIds, hostIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveHostsFromGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(HostIds, hostIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RemoveHostsFromGroupRequest() = default ;
    RemoveHostsFromGroupRequest(const RemoveHostsFromGroupRequest &) = default ;
    RemoveHostsFromGroupRequest(RemoveHostsFromGroupRequest &&) = default ;
    RemoveHostsFromGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveHostsFromGroupRequest() = default ;
    RemoveHostsFromGroupRequest& operator=(const RemoveHostsFromGroupRequest &) = default ;
    RemoveHostsFromGroupRequest& operator=(RemoveHostsFromGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostGroupId_ == nullptr
        && this->hostIds_ == nullptr && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline RemoveHostsFromGroupRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // hostIds Field Functions 
    bool hasHostIds() const { return this->hostIds_ != nullptr;};
    void deleteHostIds() { this->hostIds_ = nullptr;};
    inline string getHostIds() const { DARABONBA_PTR_GET_DEFAULT(hostIds_, "") };
    inline RemoveHostsFromGroupRequest& setHostIds(string hostIds) { DARABONBA_PTR_SET_VALUE(hostIds_, hostIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveHostsFromGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline RemoveHostsFromGroupRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveHostsFromGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the host group from which you want to remove hosts.
    // > You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query the host group ID.
    // 
    // This parameter is required.
    shared_ptr<string> hostGroupId_ {};
    // The IDs of the hosts that you want to remove. The value is a JSON string. You can specify up to 100 host IDs.
    // > You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query the host IDs.
    // 
    // This parameter is required.
    shared_ptr<string> hostIds_ {};
    // The ID of the Bastionhost instance to which the host group from which you want to remove hosts belongs.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance to which the host group from which you want to remove hosts belongs.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
