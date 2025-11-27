// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSEXECUTORSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSEXECUTORSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksExecutorStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksExecutorStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayId, arrayId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksExecutorStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayId, arrayId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
    };
    GetJobResponseBodyJobInfoTasksExecutorStatus() = default ;
    GetJobResponseBodyJobInfoTasksExecutorStatus(const GetJobResponseBodyJobInfoTasksExecutorStatus &) = default ;
    GetJobResponseBodyJobInfoTasksExecutorStatus(GetJobResponseBodyJobInfoTasksExecutorStatus &&) = default ;
    GetJobResponseBodyJobInfoTasksExecutorStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksExecutorStatus() = default ;
    GetJobResponseBodyJobInfoTasksExecutorStatus& operator=(const GetJobResponseBodyJobInfoTasksExecutorStatus &) = default ;
    GetJobResponseBodyJobInfoTasksExecutorStatus& operator=(GetJobResponseBodyJobInfoTasksExecutorStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrayId_ == nullptr
        && return this->createTime_ == nullptr && return this->endTime_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->statusReason_ == nullptr; };
    // arrayId Field Functions 
    bool hasArrayId() const { return this->arrayId_ != nullptr;};
    void deleteArrayId() { this->arrayId_ = nullptr;};
    inline int32_t arrayId() const { DARABONBA_PTR_GET_DEFAULT(arrayId_, 0) };
    inline GetJobResponseBodyJobInfoTasksExecutorStatus& setArrayId(int32_t arrayId) { DARABONBA_PTR_SET_VALUE(arrayId_, arrayId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobResponseBodyJobInfoTasksExecutorStatus& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetJobResponseBodyJobInfoTasksExecutorStatus& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobResponseBodyJobInfoTasksExecutorStatus& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobResponseBodyJobInfoTasksExecutorStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetJobResponseBodyJobInfoTasksExecutorStatus& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


  protected:
    // Sub-job ID
    std::shared_ptr<int32_t> arrayId_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The end time of the scaling plan job.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of the scaling plan job.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the job.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the stack instance is in the OUTDATED state.
    std::shared_ptr<string> statusReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
