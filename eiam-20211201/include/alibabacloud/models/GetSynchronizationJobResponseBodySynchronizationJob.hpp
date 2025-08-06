// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOB_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSynchronizationJobResponseBodySynchronizationJobResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetSynchronizationJobResponseBodySynchronizationJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSynchronizationJobResponseBodySynchronizationJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetSynchronizationJobResponseBodySynchronizationJob& obj) { 
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
    GetSynchronizationJobResponseBodySynchronizationJob() = default ;
    GetSynchronizationJobResponseBodySynchronizationJob(const GetSynchronizationJobResponseBodySynchronizationJob &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJob(GetSynchronizationJobResponseBodySynchronizationJob &&) = default ;
    GetSynchronizationJobResponseBodySynchronizationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSynchronizationJobResponseBodySynchronizationJob() = default ;
    GetSynchronizationJobResponseBodySynchronizationJob& operator=(const GetSynchronizationJobResponseBodySynchronizationJob &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJob& operator=(GetSynchronizationJobResponseBodySynchronizationJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->direction_ != nullptr
        && this->endTime_ != nullptr && this->result_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->synchronizationJobId_ != nullptr
        && this->targetId_ != nullptr && this->targetType_ != nullptr && this->triggerType_ != nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::GetSynchronizationJobResponseBodySynchronizationJobResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::GetSynchronizationJobResponseBodySynchronizationJobResult) };
    inline Models::GetSynchronizationJobResponseBodySynchronizationJobResult result() { DARABONBA_PTR_GET(result_, Models::GetSynchronizationJobResponseBodySynchronizationJobResult) };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setResult(const Models::GetSynchronizationJobResponseBodySynchronizationJobResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setResult(Models::GetSynchronizationJobResponseBodySynchronizationJobResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string synchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline GetSynchronizationJobResponseBodySynchronizationJob& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The direction of the synchronization job. Valid values:
    // 
    // *   ingress
    // *   egress
    std::shared_ptr<string> direction_ = nullptr;
    // The end time of the synchronization. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The result of the synchronization job.
    std::shared_ptr<Models::GetSynchronizationJobResponseBodySynchronizationJobResult> result_ = nullptr;
    // The start time of the synchronization. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the synchronization job. Valid values:
    // 
    // *   pending
    // *   running
    // *   failed
    // *   partial_success
    // *   success
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the synchronization job.
    std::shared_ptr<string> synchronizationJobId_ = nullptr;
    // The ID of the synchronization destination.
    std::shared_ptr<string> targetId_ = nullptr;
    // The type of the synchronization destination. Valid values:
    // 
    // *   identity_provider
    // *   application
    std::shared_ptr<string> targetType_ = nullptr;
    // The trigger type of the synchronization. Valid values:
    // 
    // *   auto
    // *   manual
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
