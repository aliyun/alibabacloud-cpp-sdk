// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBSREQUESTJOBSPEC_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBSREQUESTJOBSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteJobsRequestJobSpecTaskSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DeleteJobsRequestJobSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobsRequestJobSpec& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(TaskSpec, taskSpec_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobsRequestJobSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(TaskSpec, taskSpec_);
    };
    DeleteJobsRequestJobSpec() = default ;
    DeleteJobsRequestJobSpec(const DeleteJobsRequestJobSpec &) = default ;
    DeleteJobsRequestJobSpec(DeleteJobsRequestJobSpec &&) = default ;
    DeleteJobsRequestJobSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobsRequestJobSpec() = default ;
    DeleteJobsRequestJobSpec& operator=(const DeleteJobsRequestJobSpec &) = default ;
    DeleteJobsRequestJobSpec& operator=(DeleteJobsRequestJobSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->taskSpec_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DeleteJobsRequestJobSpec& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // taskSpec Field Functions 
    bool hasTaskSpec() const { return this->taskSpec_ != nullptr;};
    void deleteTaskSpec() { this->taskSpec_ = nullptr;};
    inline const vector<Models::DeleteJobsRequestJobSpecTaskSpec> & taskSpec() const { DARABONBA_PTR_GET_CONST(taskSpec_, vector<Models::DeleteJobsRequestJobSpecTaskSpec>) };
    inline vector<Models::DeleteJobsRequestJobSpecTaskSpec> taskSpec() { DARABONBA_PTR_GET(taskSpec_, vector<Models::DeleteJobsRequestJobSpecTaskSpec>) };
    inline DeleteJobsRequestJobSpec& setTaskSpec(const vector<Models::DeleteJobsRequestJobSpecTaskSpec> & taskSpec) { DARABONBA_PTR_SET_VALUE(taskSpec_, taskSpec) };
    inline DeleteJobsRequestJobSpec& setTaskSpec(vector<Models::DeleteJobsRequestJobSpecTaskSpec> && taskSpec) { DARABONBA_PTR_SET_RVALUE(taskSpec_, taskSpec) };


  protected:
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<vector<Models::DeleteJobsRequestJobSpecTaskSpec>> taskSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
