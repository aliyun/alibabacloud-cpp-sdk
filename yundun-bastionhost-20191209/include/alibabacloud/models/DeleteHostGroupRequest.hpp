// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHOSTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHOSTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteHostGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHostGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHostGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteHostGroupRequest() = default ;
    DeleteHostGroupRequest(const DeleteHostGroupRequest &) = default ;
    DeleteHostGroupRequest(DeleteHostGroupRequest &&) = default ;
    DeleteHostGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHostGroupRequest() = default ;
    DeleteHostGroupRequest& operator=(const DeleteHostGroupRequest &) = default ;
    DeleteHostGroupRequest& operator=(DeleteHostGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostGroupId_ == nullptr
        && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline DeleteHostGroupRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteHostGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteHostGroupRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteHostGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the asset group to be deleted.
    // > You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> hostGroupId_ {};
    // The instance ID of the bastion host to which the asset group to be deleted belongs.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the bastion host to which the asset group to be deleted belongs.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
