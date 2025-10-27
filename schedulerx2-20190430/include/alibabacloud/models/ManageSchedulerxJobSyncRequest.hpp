// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGESCHEDULERXJOBSYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGESCHEDULERXJOBSYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ManageSchedulerxJobSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageSchedulerxJobSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIdList, jobIdList_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(OriginalGroupId, originalGroupId_);
      DARABONBA_PTR_TO_JSON(OriginalNamespace, originalNamespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetGroupId, targetGroupId_);
      DARABONBA_PTR_TO_JSON(TargetNamespace, targetNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, ManageSchedulerxJobSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIdList, jobIdList_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(OriginalGroupId, originalGroupId_);
      DARABONBA_PTR_FROM_JSON(OriginalNamespace, originalNamespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetGroupId, targetGroupId_);
      DARABONBA_PTR_FROM_JSON(TargetNamespace, targetNamespace_);
    };
    ManageSchedulerxJobSyncRequest() = default ;
    ManageSchedulerxJobSyncRequest(const ManageSchedulerxJobSyncRequest &) = default ;
    ManageSchedulerxJobSyncRequest(ManageSchedulerxJobSyncRequest &&) = default ;
    ManageSchedulerxJobSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageSchedulerxJobSyncRequest() = default ;
    ManageSchedulerxJobSyncRequest& operator=(const ManageSchedulerxJobSyncRequest &) = default ;
    ManageSchedulerxJobSyncRequest& operator=(ManageSchedulerxJobSyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIdList_ == nullptr
        && return this->namespaceSource_ == nullptr && return this->originalGroupId_ == nullptr && return this->originalNamespace_ == nullptr && return this->regionId_ == nullptr && return this->targetGroupId_ == nullptr
        && return this->targetNamespace_ == nullptr; };
    // jobIdList Field Functions 
    bool hasJobIdList() const { return this->jobIdList_ != nullptr;};
    void deleteJobIdList() { this->jobIdList_ = nullptr;};
    inline const vector<int64_t> & jobIdList() const { DARABONBA_PTR_GET_CONST(jobIdList_, vector<int64_t>) };
    inline vector<int64_t> jobIdList() { DARABONBA_PTR_GET(jobIdList_, vector<int64_t>) };
    inline ManageSchedulerxJobSyncRequest& setJobIdList(const vector<int64_t> & jobIdList) { DARABONBA_PTR_SET_VALUE(jobIdList_, jobIdList) };
    inline ManageSchedulerxJobSyncRequest& setJobIdList(vector<int64_t> && jobIdList) { DARABONBA_PTR_SET_RVALUE(jobIdList_, jobIdList) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string namespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline ManageSchedulerxJobSyncRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // originalGroupId Field Functions 
    bool hasOriginalGroupId() const { return this->originalGroupId_ != nullptr;};
    void deleteOriginalGroupId() { this->originalGroupId_ = nullptr;};
    inline string originalGroupId() const { DARABONBA_PTR_GET_DEFAULT(originalGroupId_, "") };
    inline ManageSchedulerxJobSyncRequest& setOriginalGroupId(string originalGroupId) { DARABONBA_PTR_SET_VALUE(originalGroupId_, originalGroupId) };


    // originalNamespace Field Functions 
    bool hasOriginalNamespace() const { return this->originalNamespace_ != nullptr;};
    void deleteOriginalNamespace() { this->originalNamespace_ = nullptr;};
    inline string originalNamespace() const { DARABONBA_PTR_GET_DEFAULT(originalNamespace_, "") };
    inline ManageSchedulerxJobSyncRequest& setOriginalNamespace(string originalNamespace) { DARABONBA_PTR_SET_VALUE(originalNamespace_, originalNamespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ManageSchedulerxJobSyncRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetGroupId Field Functions 
    bool hasTargetGroupId() const { return this->targetGroupId_ != nullptr;};
    void deleteTargetGroupId() { this->targetGroupId_ = nullptr;};
    inline string targetGroupId() const { DARABONBA_PTR_GET_DEFAULT(targetGroupId_, "") };
    inline ManageSchedulerxJobSyncRequest& setTargetGroupId(string targetGroupId) { DARABONBA_PTR_SET_VALUE(targetGroupId_, targetGroupId) };


    // targetNamespace Field Functions 
    bool hasTargetNamespace() const { return this->targetNamespace_ != nullptr;};
    void deleteTargetNamespace() { this->targetNamespace_ = nullptr;};
    inline string targetNamespace() const { DARABONBA_PTR_GET_DEFAULT(targetNamespace_, "") };
    inline ManageSchedulerxJobSyncRequest& setTargetNamespace(string targetNamespace) { DARABONBA_PTR_SET_VALUE(targetNamespace_, targetNamespace) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> jobIdList_ = nullptr;
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
