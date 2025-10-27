// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ExecuteJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckJobStatus, checkJobStatus_);
      DARABONBA_PTR_TO_JSON(DesignateType, designateType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceParameters, instanceParameters_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Worker, worker_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckJobStatus, checkJobStatus_);
      DARABONBA_PTR_FROM_JSON(DesignateType, designateType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceParameters, instanceParameters_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Worker, worker_);
    };
    ExecuteJobRequest() = default ;
    ExecuteJobRequest(const ExecuteJobRequest &) = default ;
    ExecuteJobRequest(ExecuteJobRequest &&) = default ;
    ExecuteJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteJobRequest() = default ;
    ExecuteJobRequest& operator=(const ExecuteJobRequest &) = default ;
    ExecuteJobRequest& operator=(ExecuteJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkJobStatus_ == nullptr
        && return this->designateType_ == nullptr && return this->groupId_ == nullptr && return this->instanceParameters_ == nullptr && return this->jobId_ == nullptr && return this->label_ == nullptr
        && return this->namespace_ == nullptr && return this->namespaceSource_ == nullptr && return this->regionId_ == nullptr && return this->worker_ == nullptr; };
    // checkJobStatus Field Functions 
    bool hasCheckJobStatus() const { return this->checkJobStatus_ != nullptr;};
    void deleteCheckJobStatus() { this->checkJobStatus_ = nullptr;};
    inline bool checkJobStatus() const { DARABONBA_PTR_GET_DEFAULT(checkJobStatus_, false) };
    inline ExecuteJobRequest& setCheckJobStatus(bool checkJobStatus) { DARABONBA_PTR_SET_VALUE(checkJobStatus_, checkJobStatus) };


    // designateType Field Functions 
    bool hasDesignateType() const { return this->designateType_ != nullptr;};
    void deleteDesignateType() { this->designateType_ = nullptr;};
    inline int32_t designateType() const { DARABONBA_PTR_GET_DEFAULT(designateType_, 0) };
    inline ExecuteJobRequest& setDesignateType(int32_t designateType) { DARABONBA_PTR_SET_VALUE(designateType_, designateType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ExecuteJobRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceParameters Field Functions 
    bool hasInstanceParameters() const { return this->instanceParameters_ != nullptr;};
    void deleteInstanceParameters() { this->instanceParameters_ = nullptr;};
    inline string instanceParameters() const { DARABONBA_PTR_GET_DEFAULT(instanceParameters_, "") };
    inline ExecuteJobRequest& setInstanceParameters(string instanceParameters) { DARABONBA_PTR_SET_VALUE(instanceParameters_, instanceParameters) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ExecuteJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ExecuteJobRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ExecuteJobRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string namespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline ExecuteJobRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExecuteJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // worker Field Functions 
    bool hasWorker() const { return this->worker_ != nullptr;};
    void deleteWorker() { this->worker_ = nullptr;};
    inline string worker() const { DARABONBA_PTR_GET_DEFAULT(worker_, "") };
    inline ExecuteJobRequest& setWorker(string worker) { DARABONBA_PTR_SET_VALUE(worker_, worker) };


  protected:
    // Specifies whether to check the job status. Valid values: -**true**: The job can be run only if the job is enabled. -**false**: The job can be run even if the job is disabled.
    std::shared_ptr<bool> checkJobStatus_ = nullptr;
    // The type of the designated machine. Valid values: -**1**: worker. -**2**: label.
    std::shared_ptr<int32_t> designateType_ = nullptr;
    // The application ID. You can obtain the application ID on the Application Management page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The parameters that are passed to trigger the job to run. The input value can be a random string. The parameters that are passed are obtained by calling the `context.getInstanceParameters()` class in the `processor` code. The parameters are different from custom parameters for creating jobs.
    std::shared_ptr<string> instanceParameters_ = nullptr;
    // The job ID. You can obtain the job ID on the Task Management page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The label of the worker.
    std::shared_ptr<string> label_ = nullptr;
    // The namespace ID. You can obtain the namespace ID on the Namespace page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The source of the namespace. This parameter is required only for a special third party.
    std::shared_ptr<string> namespaceSource_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The worker address of the application. To query the worker address, call the GetWokerList operation.
    std::shared_ptr<string> worker_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
