// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAgentTaskResponseBodyDataJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAgentTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(jobs, jobs_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    GetAgentTaskResponseBodyData() = default ;
    GetAgentTaskResponseBodyData(const GetAgentTaskResponseBodyData &) = default ;
    GetAgentTaskResponseBodyData(GetAgentTaskResponseBodyData &&) = default ;
    GetAgentTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentTaskResponseBodyData() = default ;
    GetAgentTaskResponseBodyData& operator=(const GetAgentTaskResponseBodyData &) = default ;
    GetAgentTaskResponseBodyData& operator=(GetAgentTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobs_ != nullptr
        && this->taskId_ != nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<Models::GetAgentTaskResponseBodyDataJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Models::GetAgentTaskResponseBodyDataJobs>) };
    inline vector<Models::GetAgentTaskResponseBodyDataJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<Models::GetAgentTaskResponseBodyDataJobs>) };
    inline GetAgentTaskResponseBodyData& setJobs(const vector<Models::GetAgentTaskResponseBodyDataJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline GetAgentTaskResponseBodyData& setJobs(vector<Models::GetAgentTaskResponseBodyDataJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAgentTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<vector<Models::GetAgentTaskResponseBodyDataJobs>> jobs_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
