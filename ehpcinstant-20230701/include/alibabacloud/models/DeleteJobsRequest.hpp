// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteJobsRequestJobSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DeleteJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpec_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpec_);
    };
    DeleteJobsRequest() = default ;
    DeleteJobsRequest(const DeleteJobsRequest &) = default ;
    DeleteJobsRequest(DeleteJobsRequest &&) = default ;
    DeleteJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobsRequest() = default ;
    DeleteJobsRequest& operator=(const DeleteJobsRequest &) = default ;
    DeleteJobsRequest& operator=(DeleteJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executorIds_ != nullptr
        && this->jobScheduler_ != nullptr && this->jobSpec_ != nullptr; };
    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & executorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> executorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline DeleteJobsRequest& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline DeleteJobsRequest& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // jobScheduler Field Functions 
    bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
    void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
    inline string jobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
    inline DeleteJobsRequest& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


    // jobSpec Field Functions 
    bool hasJobSpec() const { return this->jobSpec_ != nullptr;};
    void deleteJobSpec() { this->jobSpec_ = nullptr;};
    inline const vector<DeleteJobsRequestJobSpec> & jobSpec() const { DARABONBA_PTR_GET_CONST(jobSpec_, vector<DeleteJobsRequestJobSpec>) };
    inline vector<DeleteJobsRequestJobSpec> jobSpec() { DARABONBA_PTR_GET(jobSpec_, vector<DeleteJobsRequestJobSpec>) };
    inline DeleteJobsRequest& setJobSpec(const vector<DeleteJobsRequestJobSpec> & jobSpec) { DARABONBA_PTR_SET_VALUE(jobSpec_, jobSpec) };
    inline DeleteJobsRequest& setJobSpec(vector<DeleteJobsRequestJobSpec> && jobSpec) { DARABONBA_PTR_SET_RVALUE(jobSpec_, jobSpec) };


  protected:
    std::shared_ptr<vector<string>> executorIds_ = nullptr;
    std::shared_ptr<string> jobScheduler_ = nullptr;
    std::shared_ptr<vector<DeleteJobsRequestJobSpec>> jobSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
