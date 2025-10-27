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
        && return this->namespaceSource_ == nullptr && return this->originalGroupId_ == nullptr && return this->originalNamespace_ == nullptr && return this->regionId_ == nullptr && return this->targetGroupId_ == nullptr
        && return this->targetNamespace_ == nullptr; };
    // jobIdListShrink Field Functions 
    bool hasJobIdListShrink() const { return this->jobIdListShrink_ != nullptr;};
    void deleteJobIdListShrink() { this->jobIdListShrink_ = nullptr;};
    inline string jobIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(jobIdListShrink_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setJobIdListShrink(string jobIdListShrink) { DARABONBA_PTR_SET_VALUE(jobIdListShrink_, jobIdListShrink) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string namespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // originalGroupId Field Functions 
    bool hasOriginalGroupId() const { return this->originalGroupId_ != nullptr;};
    void deleteOriginalGroupId() { this->originalGroupId_ = nullptr;};
    inline string originalGroupId() const { DARABONBA_PTR_GET_DEFAULT(originalGroupId_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setOriginalGroupId(string originalGroupId) { DARABONBA_PTR_SET_VALUE(originalGroupId_, originalGroupId) };


    // originalNamespace Field Functions 
    bool hasOriginalNamespace() const { return this->originalNamespace_ != nullptr;};
    void deleteOriginalNamespace() { this->originalNamespace_ = nullptr;};
    inline string originalNamespace() const { DARABONBA_PTR_GET_DEFAULT(originalNamespace_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setOriginalNamespace(string originalNamespace) { DARABONBA_PTR_SET_VALUE(originalNamespace_, originalNamespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetGroupId Field Functions 
    bool hasTargetGroupId() const { return this->targetGroupId_ != nullptr;};
    void deleteTargetGroupId() { this->targetGroupId_ = nullptr;};
    inline string targetGroupId() const { DARABONBA_PTR_GET_DEFAULT(targetGroupId_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setTargetGroupId(string targetGroupId) { DARABONBA_PTR_SET_VALUE(targetGroupId_, targetGroupId) };


    // targetNamespace Field Functions 
    bool hasTargetNamespace() const { return this->targetNamespace_ != nullptr;};
    void deleteTargetNamespace() { this->targetNamespace_ = nullptr;};
    inline string targetNamespace() const { DARABONBA_PTR_GET_DEFAULT(targetNamespace_, "") };
    inline ManageSchedulerxJobSyncShrinkRequest& setTargetNamespace(string targetNamespace) { DARABONBA_PTR_SET_VALUE(targetNamespace_, targetNamespace) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> jobIdListShrink_ = nullptr;
    std::shared_ptr<string> namespaceSource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalNamespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
