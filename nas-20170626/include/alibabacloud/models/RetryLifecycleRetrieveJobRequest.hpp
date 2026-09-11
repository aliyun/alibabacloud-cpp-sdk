// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYLIFECYCLERETRIEVEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYLIFECYCLERETRIEVEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class RetryLifecycleRetrieveJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryLifecycleRetrieveJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryLifecycleRetrieveJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    RetryLifecycleRetrieveJobRequest() = default ;
    RetryLifecycleRetrieveJobRequest(const RetryLifecycleRetrieveJobRequest &) = default ;
    RetryLifecycleRetrieveJobRequest(RetryLifecycleRetrieveJobRequest &&) = default ;
    RetryLifecycleRetrieveJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryLifecycleRetrieveJobRequest() = default ;
    RetryLifecycleRetrieveJobRequest& operator=(const RetryLifecycleRetrieveJobRequest &) = default ;
    RetryLifecycleRetrieveJobRequest& operator=(RetryLifecycleRetrieveJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline RetryLifecycleRetrieveJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The data retrieval task ID.
    // 
    // **Scenarios**
    // 
    // Call this operation to retry a data retrieval task that has entered the `failed` state. Common causes for a task to enter the `failed` state include:
    // - A backend error occurred during data retrieval from the InfrequentAccess or Archive storage tier.
    // - The data retrieval request timed out.
    // - A temporary storage tier failure or network exception occurred.
    // 
    // **Before you begin**
    // 
    // Before calling this operation, call [ListLifecycleRetrieveJobs](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-listlifecycleretrievejobs) to query the task list, confirm that the target task is in the `failed` state, and obtain the JobId of the task you want to retry.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
