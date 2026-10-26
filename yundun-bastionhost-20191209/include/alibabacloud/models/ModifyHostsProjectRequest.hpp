// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTSPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTSPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostsProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostsProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostIds, hostIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetProjectId, targetProjectId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostsProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostIds, hostIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetProjectId, targetProjectId_);
    };
    ModifyHostsProjectRequest() = default ;
    ModifyHostsProjectRequest(const ModifyHostsProjectRequest &) = default ;
    ModifyHostsProjectRequest(ModifyHostsProjectRequest &&) = default ;
    ModifyHostsProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostsProjectRequest() = default ;
    ModifyHostsProjectRequest& operator=(const ModifyHostsProjectRequest &) = default ;
    ModifyHostsProjectRequest& operator=(ModifyHostsProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostIds_ == nullptr
        && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->targetProjectId_ == nullptr; };
    // hostIds Field Functions 
    bool hasHostIds() const { return this->hostIds_ != nullptr;};
    void deleteHostIds() { this->hostIds_ = nullptr;};
    inline string getHostIds() const { DARABONBA_PTR_GET_DEFAULT(hostIds_, "") };
    inline ModifyHostsProjectRequest& setHostIds(string hostIds) { DARABONBA_PTR_SET_VALUE(hostIds_, hostIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHostsProjectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ModifyHostsProjectRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHostsProjectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetProjectId Field Functions 
    bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
    void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
    inline int64_t getTargetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
    inline ModifyHostsProjectRequest& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


  protected:
    // The IDs of the hosts that you want to move. This parameter is a JSON-formatted string. You can specify up to 100 host IDs. Separate multiple host IDs with commas (,).
    // > You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> hostIds_ {};
    // The instance ID of the bastion host.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the project to which the hosts currently belong.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the target project to which you want to move the hosts.
    // > You can call the ListProjectsForProjectAuthorizationPrincipal operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> targetProjectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
