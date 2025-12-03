// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODYPIPELINERUNSTAGESSTAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODYPIPELINERUNSTAGESSTAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfoJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(jobs, jobs_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo() = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo(const GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo &) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo(GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo &&) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo() = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& operator=(const GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo &) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& operator=(GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo &&) = default ;
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
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfoJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfoJobs>) };
    inline vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfoJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfoJobs>) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& setJobs(const vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfoJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& setJobs(vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfoJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStagesStageInfoJobs>> jobs_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
