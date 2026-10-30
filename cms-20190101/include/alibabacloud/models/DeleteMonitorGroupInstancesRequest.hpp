// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMONITORGROUPINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMONITORGROUPINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMonitorGroupInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMonitorGroupInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMonitorGroupInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteMonitorGroupInstancesRequest() = default ;
    DeleteMonitorGroupInstancesRequest(const DeleteMonitorGroupInstancesRequest &) = default ;
    DeleteMonitorGroupInstancesRequest(DeleteMonitorGroupInstancesRequest &&) = default ;
    DeleteMonitorGroupInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMonitorGroupInstancesRequest() = default ;
    DeleteMonitorGroupInstancesRequest& operator=(const DeleteMonitorGroupInstancesRequest &) = default ;
    DeleteMonitorGroupInstancesRequest& operator=(DeleteMonitorGroupInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->dryRun_ == nullptr && this->groupId_ == nullptr && this->instanceIdList_ == nullptr && this->regionId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DeleteMonitorGroupInstancesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteMonitorGroupInstancesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DeleteMonitorGroupInstancesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline string getInstanceIdList() const { DARABONBA_PTR_GET_DEFAULT(instanceIdList_, "") };
    inline DeleteMonitorGroupInstancesRequest& setInstanceIdList(string instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMonitorGroupInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The abbreviation of the cloud service name.
    // 
    // > For more information about how to obtain the abbreviation of a cloud service name, see the `metricCategory` field in the `Labels` response parameter of the [DescribeProjectMeta](https://help.aliyun.com/document_detail/114916.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // - **true**: performs a dry run. The system checks the required parameters, request format, and service limits, but does not delete the instances. If the request fails the check, an error is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a normal request. If the request passes the check, the instances are deleted.
    shared_ptr<bool> dryRun_ {};
    // The ID of the application group.
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    // The IDs of the instances to be deleted. Separate multiple instance IDs with commas (,). You can delete up to 20 instances at a time.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdList_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
