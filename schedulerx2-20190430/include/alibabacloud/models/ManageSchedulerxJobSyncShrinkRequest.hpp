// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGESCHEDULERXJOBSYNCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGESCHEDULERXJOBSYNCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ManageSchedulerxJobSyncShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageSchedulerxJobSyncShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIdList, jobIdListShrink_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(OriginalGroupId, originalGroupId_);
      DARABONBA_PTR_TO_JSON(OriginalNamespace, originalNamespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetGroupId, targetGroupId_);
      DARABONBA_PTR_TO_JSON(TargetNamespace, targetNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, ManageSchedulerxJobSyncShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIdList, jobIdListShrink_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(OriginalGroupId, originalGroupId_);
      DARABONBA_PTR_FROM_JSON(OriginalNamespace, originalNamespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetGroupId, targetGroupId_);
      DARABONBA_PTR_FROM_JSON(TargetNamespace, targetNamespace_);
    };
    ManageSchedulerxJobSyncShrinkRequest() = default ;
    ManageSchedulerxJobSyncShrinkRequest(const ManageSchedulerxJobSyncShrinkRequest &) = default ;
    ManageSchedulerxJobSyncShrinkRequest(ManageSchedulerxJobSyncShrinkRequest &&) = default ;
    ManageSchedulerxJobSyncShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageSchedulerxJobSyncShrinkRequest() = default ;
    ManageSchedulerxJobSyncShrinkRequest& operator=(const ManageSchedulerxJobSyncShrinkRequest &) = default ;
    ManageSchedulerxJobSyncShrinkRequest& operator=(ManageSchedulerxJobSyncShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIdListShrink_ == nullptr
        && this->namespaceSource_ == nullptr && this->originalGroupId_ == nullptr && this->originalNamespace_ == nullptr && this->regionId_ == nullptr && this->targetGroupId_ == nullptr
        && this->targetNamespace_ == nullptr; };
    // jobIdListShrink Field Functions 
    bool hasJobIdListShrink() const { return this->jobIdListShrink_ != nullptr;};
    void deleteJobIdListShrink() { this->jobIdListShrink_ = nullptr;};
    inline string getJobIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(jobIdListShrink_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setJobIdListShrink(string jobIdListShrink) { DARABONBA_PTR_SET_VALUE(jobIdListShrink_, jobIdListShrink) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string getNamespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // originalGroupId Field Functions 
    bool hasOriginalGroupId() const { return this->originalGroupId_ != nullptr;};
    void deleteOriginalGroupId() { this->originalGroupId_ = nullptr;};
    inline string getOriginalGroupId() const { DARABONBA_PTR_GET_DEFAULT(originalGroupId_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setOriginalGroupId(string originalGroupId) { DARABONBA_PTR_SET_VALUE(originalGroupId_, originalGroupId) };


    // originalNamespace Field Functions 
    bool hasOriginalNamespace() const { return this->originalNamespace_ != nullptr;};
    void deleteOriginalNamespace() { this->originalNamespace_ = nullptr;};
    inline string getOriginalNamespace() const { DARABONBA_PTR_GET_DEFAULT(originalNamespace_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setOriginalNamespace(string originalNamespace) { DARABONBA_PTR_SET_VALUE(originalNamespace_, originalNamespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetGroupId Field Functions 
    bool hasTargetGroupId() const { return this->targetGroupId_ != nullptr;};
    void deleteTargetGroupId() { this->targetGroupId_ = nullptr;};
    inline string getTargetGroupId() const { DARABONBA_PTR_GET_DEFAULT(targetGroupId_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setTargetGroupId(string targetGroupId) { DARABONBA_PTR_SET_VALUE(targetGroupId_, targetGroupId) };


    // targetNamespace Field Functions 
    bool hasTargetNamespace() const { return this->targetNamespace_ != nullptr;};
    void deleteTargetNamespace() { this->targetNamespace_ = nullptr;};
    inline string getTargetNamespace() const { DARABONBA_PTR_GET_DEFAULT(targetNamespace_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setTargetNamespace(string targetNamespace) { DARABONBA_PTR_SET_VALUE(targetNamespace_, targetNamespace) };


  protected:
    // The list of task IDs.
    // 
    // This parameter is required.
    shared_ptr<string> jobIdListShrink_ {};
    // The source of the namespace. Required only for specific third-party cases.
    shared_ptr<string> namespaceSource_ {};
    // The source application group to which the task belongs.
    // 
    // This parameter is required.
    shared_ptr<string> originalGroupId_ {};
    // The source namespace where the task resides.
    // 
    // This parameter is required.
    shared_ptr<string> originalNamespace_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the destination application group to which the task will be synchronized.
    // 
    // This parameter is required.
    shared_ptr<string> targetGroupId_ {};
    // The destination namespace to which the task will be synchronized.
    // 
    // This parameter is required.
    shared_ptr<string> targetNamespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
