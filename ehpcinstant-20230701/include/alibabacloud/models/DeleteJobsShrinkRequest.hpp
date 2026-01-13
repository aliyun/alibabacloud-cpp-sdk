// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DeleteJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIdsShrink_);
      DARABONBA_PTR_TO_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIdsShrink_);
      DARABONBA_PTR_FROM_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpecShrink_);
    };
    DeleteJobsShrinkRequest() = default ;
    DeleteJobsShrinkRequest(const DeleteJobsShrinkRequest &) = default ;
    DeleteJobsShrinkRequest(DeleteJobsShrinkRequest &&) = default ;
    DeleteJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobsShrinkRequest() = default ;
    DeleteJobsShrinkRequest& operator=(const DeleteJobsShrinkRequest &) = default ;
    DeleteJobsShrinkRequest& operator=(DeleteJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executorIdsShrink_ == nullptr
        && this->jobScheduler_ == nullptr && this->jobSpecShrink_ == nullptr; };
    // executorIdsShrink Field Functions 
    bool hasExecutorIdsShrink() const { return this->executorIdsShrink_ != nullptr;};
    void deleteExecutorIdsShrink() { this->executorIdsShrink_ = nullptr;};
    inline string getExecutorIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(executorIdsShrink_, "") };
    inline DeleteJobsShrinkRequest& setExecutorIdsShrink(string executorIdsShrink) { DARABONBA_PTR_SET_VALUE(executorIdsShrink_, executorIdsShrink) };


    // jobScheduler Field Functions 
    bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
    void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
    inline string getJobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
    inline DeleteJobsShrinkRequest& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


    // jobSpecShrink Field Functions 
    bool hasJobSpecShrink() const { return this->jobSpecShrink_ != nullptr;};
    void deleteJobSpecShrink() { this->jobSpecShrink_ = nullptr;};
    inline string getJobSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(jobSpecShrink_, "") };
    inline DeleteJobsShrinkRequest& setJobSpecShrink(string jobSpecShrink) { DARABONBA_PTR_SET_VALUE(jobSpecShrink_, jobSpecShrink) };


  protected:
    // The list of executor IDs. A maximum of 100 IDs are supported.
    shared_ptr<string> executorIdsShrink_ {};
    // The type of the job scheduler.
    // 
    // *   HPC
    // *   K8S
    // 
    // Default value: HPC
    shared_ptr<string> jobScheduler_ {};
    // The information about the job to be deleted.
    shared_ptr<string> jobSpecShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
