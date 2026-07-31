// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KILLSEMANTICJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KILLSEMANTICJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class KillSemanticJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KillSemanticJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorJobId, executorJobId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
    };
    friend void from_json(const Darabonba::Json& j, KillSemanticJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorJobId, executorJobId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
    };
    KillSemanticJobRequest() = default ;
    KillSemanticJobRequest(const KillSemanticJobRequest &) = default ;
    KillSemanticJobRequest(KillSemanticJobRequest &&) = default ;
    KillSemanticJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KillSemanticJobRequest() = default ;
    KillSemanticJobRequest& operator=(const KillSemanticJobRequest &) = default ;
    KillSemanticJobRequest& operator=(KillSemanticJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executorJobId_ == nullptr
        && this->projectId_ == nullptr && this->retryTimes_ == nullptr; };
    // executorJobId Field Functions 
    bool hasExecutorJobId() const { return this->executorJobId_ != nullptr;};
    void deleteExecutorJobId() { this->executorJobId_ = nullptr;};
    inline string getExecutorJobId() const { DARABONBA_PTR_GET_DEFAULT(executorJobId_, "") };
    inline KillSemanticJobRequest& setExecutorJobId(string executorJobId) { DARABONBA_PTR_SET_VALUE(executorJobId_, executorJobId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline KillSemanticJobRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t getRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline KillSemanticJobRequest& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


  protected:
    // The executor job ID of the run to stop. Use the Data.ExecutorJobId value from the RunSemanticJob response or the ExecutorJobId value from a ListSemanticJobRuns record.
    // 
    // This parameter is required.
    shared_ptr<string> executorJobId_ {};
    // The ID of the DataWorks workspace to which the job belongs. Use the ProjectId value from the CreateSemanticJob response or a ListSemanticJobs list item.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The number of retries when sending the stop request to the executor. This parameter is optional. If specified, use a non-negative integer. After the call, confirm the final status by calling GetSemanticJobDetail.
    shared_ptr<int32_t> retryTimes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
