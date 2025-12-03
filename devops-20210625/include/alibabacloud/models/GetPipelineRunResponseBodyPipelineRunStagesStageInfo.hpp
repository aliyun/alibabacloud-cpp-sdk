// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSTAGESSTAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSTAGESSTAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineRunResponseBodyPipelineRunStagesStageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBodyPipelineRunStagesStageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(jobs, jobs_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBodyPipelineRunStagesStageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetPipelineRunResponseBodyPipelineRunStagesStageInfo() = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfo(const GetPipelineRunResponseBodyPipelineRunStagesStageInfo &) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfo(GetPipelineRunResponseBodyPipelineRunStagesStageInfo &&) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfo() = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfo& operator=(const GetPipelineRunResponseBodyPipelineRunStagesStageInfo &) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfo& operator=(GetPipelineRunResponseBodyPipelineRunStagesStageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->jobs_ == nullptr && return this->name_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs>) };
    inline vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs>) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfo& setJobs(const vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfo& setJobs(vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs>> jobs_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
