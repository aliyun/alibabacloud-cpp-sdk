// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODYPIPELINERUN_HPP_
#define ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODYPIPELINERUN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetReleaseStagePipelineRunResponseBodyPipelineRunSources.hpp>
#include <alibabacloud/models/GetReleaseStagePipelineRunResponseBodyPipelineRunStages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetReleaseStagePipelineRunResponseBodyPipelineRun : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReleaseStagePipelineRunResponseBodyPipelineRun& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(pipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(sources, sources_);
      DARABONBA_PTR_TO_JSON(stageGroup, stageGroup_);
      DARABONBA_PTR_TO_JSON(stages, stages_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(triggerMode, triggerMode_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetReleaseStagePipelineRunResponseBodyPipelineRun& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(pipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(sources, sources_);
      DARABONBA_PTR_FROM_JSON(stageGroup, stageGroup_);
      DARABONBA_PTR_FROM_JSON(stages, stages_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(triggerMode, triggerMode_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetReleaseStagePipelineRunResponseBodyPipelineRun() = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRun(const GetReleaseStagePipelineRunResponseBodyPipelineRun &) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRun(GetReleaseStagePipelineRunResponseBodyPipelineRun &&) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRun(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReleaseStagePipelineRunResponseBodyPipelineRun() = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRun& operator=(const GetReleaseStagePipelineRunResponseBodyPipelineRun &) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRun& operator=(GetReleaseStagePipelineRunResponseBodyPipelineRun &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->creatorAccountId_ == nullptr && return this->modifierAccountId_ == nullptr && return this->pipelineId_ == nullptr && return this->pipelineRunId_ == nullptr && return this->sources_ == nullptr
        && return this->stageGroup_ == nullptr && return this->stages_ == nullptr && return this->status_ == nullptr && return this->triggerMode_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // modifierAccountId Field Functions 
    bool hasModifierAccountId() const { return this->modifierAccountId_ != nullptr;};
    void deleteModifierAccountId() { this->modifierAccountId_ = nullptr;};
    inline string modifierAccountId() const { DARABONBA_PTR_GET_DEFAULT(modifierAccountId_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setModifierAccountId(string modifierAccountId) { DARABONBA_PTR_SET_VALUE(modifierAccountId_, modifierAccountId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline int64_t pipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, 0L) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setPipelineRunId(int64_t pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSources> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSources>) };
    inline vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSources> sources() { DARABONBA_PTR_GET(sources_, vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSources>) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setSources(const vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setSources(vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // stageGroup Field Functions 
    bool hasStageGroup() const { return this->stageGroup_ != nullptr;};
    void deleteStageGroup() { this->stageGroup_ = nullptr;};
    inline const vector<vector<string>> & stageGroup() const { DARABONBA_PTR_GET_CONST(stageGroup_, vector<vector<string>>) };
    inline vector<vector<string>> stageGroup() { DARABONBA_PTR_GET(stageGroup_, vector<vector<string>>) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setStageGroup(const vector<vector<string>> & stageGroup) { DARABONBA_PTR_SET_VALUE(stageGroup_, stageGroup) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setStageGroup(vector<vector<string>> && stageGroup) { DARABONBA_PTR_SET_RVALUE(stageGroup_, stageGroup) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline const vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStages> & stages() const { DARABONBA_PTR_GET_CONST(stages_, vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStages>) };
    inline vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStages> stages() { DARABONBA_PTR_GET(stages_, vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStages>) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setStages(const vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStages> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setStages(vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStages> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerMode Field Functions 
    bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
    void deleteTriggerMode() { this->triggerMode_ = nullptr;};
    inline int32_t triggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, 0) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setTriggerMode(int32_t triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<string> modifierAccountId_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
    std::shared_ptr<int64_t> pipelineRunId_ = nullptr;
    std::shared_ptr<vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunSources>> sources_ = nullptr;
    std::shared_ptr<vector<vector<string>>> stageGroup_ = nullptr;
    std::shared_ptr<vector<Models::GetReleaseStagePipelineRunResponseBodyPipelineRunStages>> stages_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> triggerMode_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
