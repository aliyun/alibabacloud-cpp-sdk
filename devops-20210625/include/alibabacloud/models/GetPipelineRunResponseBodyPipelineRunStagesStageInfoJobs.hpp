// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSTAGESSTAGEINFOJOBS_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSTAGESSTAGEINFOJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs() = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs(const GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs &) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs(GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs &&) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs() = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& operator=(const GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs &) = default ;
    GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& operator=(GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->endTime_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->params_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions>) };
    inline vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions>) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& setActions(const vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& setActions(vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions>> actions_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
