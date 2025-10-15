// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsResponseBodySynchronizationJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBodySynchronizationJobs& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBodySynchronizationJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    ListSynchronizationJobsResponseBodySynchronizationJobs() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobs(const ListSynchronizationJobsResponseBodySynchronizationJobs &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobs(ListSynchronizationJobsResponseBodySynchronizationJobs &&) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBodySynchronizationJobs() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobs& operator=(const ListSynchronizationJobsResponseBodySynchronizationJobs &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobs& operator=(ListSynchronizationJobsResponseBodySynchronizationJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->direction_ == nullptr && return this->endTime_ == nullptr && return this->result_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->synchronizationJobId_ == nullptr && return this->targetId_ == nullptr && return this->targetType_ == nullptr && return this->triggerType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResult) };
    inline Models::ListSynchronizationJobsResponseBodySynchronizationJobsResult result() { DARABONBA_PTR_GET(result_, Models::ListSynchronizationJobsResponseBodySynchronizationJobsResult) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setResult(const Models::ListSynchronizationJobsResponseBodySynchronizationJobsResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setResult(Models::ListSynchronizationJobsResponseBodySynchronizationJobsResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string synchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListSynchronizationJobsResponseBodySynchronizationJobs& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // 同步任务方向
    std::shared_ptr<string> direction_ = nullptr;
    // 同步结束时间
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // 同步任务结果
    std::shared_ptr<Models::ListSynchronizationJobsResponseBodySynchronizationJobsResult> result_ = nullptr;
    // 同步开始时间
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // 同步任务状态
    std::shared_ptr<string> status_ = nullptr;
    // 同步任务ID
    std::shared_ptr<string> synchronizationJobId_ = nullptr;
    // 同步目标ID
    std::shared_ptr<string> targetId_ = nullptr;
    // 同步目标类型
    std::shared_ptr<string> targetType_ = nullptr;
    // 同步触发类型
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
