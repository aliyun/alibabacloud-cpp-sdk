// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERUNSRESPONSEBODYPIPELINERUNS_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERUNSRESPONSEBODYPIPELINERUNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListPipelineRunsResponseBodyPipelineRuns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRunsResponseBodyPipelineRuns& obj) { 
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(pipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(triggerMode, triggerMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRunsResponseBodyPipelineRuns& obj) { 
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(pipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(triggerMode, triggerMode_);
    };
    ListPipelineRunsResponseBodyPipelineRuns() = default ;
    ListPipelineRunsResponseBodyPipelineRuns(const ListPipelineRunsResponseBodyPipelineRuns &) = default ;
    ListPipelineRunsResponseBodyPipelineRuns(ListPipelineRunsResponseBodyPipelineRuns &&) = default ;
    ListPipelineRunsResponseBodyPipelineRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRunsResponseBodyPipelineRuns() = default ;
    ListPipelineRunsResponseBodyPipelineRuns& operator=(const ListPipelineRunsResponseBodyPipelineRuns &) = default ;
    ListPipelineRunsResponseBodyPipelineRuns& operator=(ListPipelineRunsResponseBodyPipelineRuns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorAccountId_ == nullptr
        && return this->endTime_ == nullptr && return this->pipelineId_ == nullptr && return this->pipelineRunId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->triggerMode_ == nullptr; };
    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline ListPipelineRunsResponseBodyPipelineRuns& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListPipelineRunsResponseBodyPipelineRuns& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline ListPipelineRunsResponseBodyPipelineRuns& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline int64_t pipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, 0L) };
    inline ListPipelineRunsResponseBodyPipelineRuns& setPipelineRunId(int64_t pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListPipelineRunsResponseBodyPipelineRuns& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPipelineRunsResponseBodyPipelineRuns& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerMode Field Functions 
    bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
    void deleteTriggerMode() { this->triggerMode_ = nullptr;};
    inline int64_t triggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, 0L) };
    inline ListPipelineRunsResponseBodyPipelineRuns& setTriggerMode(int64_t triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


  protected:
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
    std::shared_ptr<int64_t> pipelineRunId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> triggerMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
