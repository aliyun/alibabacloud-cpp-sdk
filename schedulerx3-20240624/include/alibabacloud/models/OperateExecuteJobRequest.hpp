// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEEXECUTEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEEXECUTEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateExecuteJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateExecuteJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceParameters, instanceParameters_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Worker, worker_);
    };
    friend void from_json(const Darabonba::Json& j, OperateExecuteJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceParameters, instanceParameters_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Worker, worker_);
    };
    OperateExecuteJobRequest() = default ;
    OperateExecuteJobRequest(const OperateExecuteJobRequest &) = default ;
    OperateExecuteJobRequest(OperateExecuteJobRequest &&) = default ;
    OperateExecuteJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateExecuteJobRequest() = default ;
    OperateExecuteJobRequest& operator=(const OperateExecuteJobRequest &) = default ;
    OperateExecuteJobRequest& operator=(OperateExecuteJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->clusterId_ != nullptr && this->instanceParameters_ != nullptr && this->jobId_ != nullptr && this->label_ != nullptr && this->worker_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateExecuteJobRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateExecuteJobRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceParameters Field Functions 
    bool hasInstanceParameters() const { return this->instanceParameters_ != nullptr;};
    void deleteInstanceParameters() { this->instanceParameters_ = nullptr;};
    inline string instanceParameters() const { DARABONBA_PTR_GET_DEFAULT(instanceParameters_, "") };
    inline OperateExecuteJobRequest& setInstanceParameters(string instanceParameters) { DARABONBA_PTR_SET_VALUE(instanceParameters_, instanceParameters) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline OperateExecuteJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline OperateExecuteJobRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // worker Field Functions 
    bool hasWorker() const { return this->worker_ != nullptr;};
    void deleteWorker() { this->worker_ = nullptr;};
    inline string worker() const { DARABONBA_PTR_GET_DEFAULT(worker_, "") };
    inline OperateExecuteJobRequest& setWorker(string worker) { DARABONBA_PTR_SET_VALUE(worker_, worker) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> instanceParameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> worker_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
