// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATASHARDINGPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATASHARDINGPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobExecutionProgressResponseBodyDataShardingProgressStatusType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetJobExecutionProgressResponseBodyDataShardingProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobExecutionProgressResponseBodyDataShardingProgress& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusType, statusType_);
      DARABONBA_PTR_TO_JSON(WorkerAddr, workerAddr_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobExecutionProgressResponseBodyDataShardingProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusType, statusType_);
      DARABONBA_PTR_FROM_JSON(WorkerAddr, workerAddr_);
    };
    GetJobExecutionProgressResponseBodyDataShardingProgress() = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgress(const GetJobExecutionProgressResponseBodyDataShardingProgress &) = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgress(GetJobExecutionProgressResponseBodyDataShardingProgress &&) = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobExecutionProgressResponseBodyDataShardingProgress() = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgress& operator=(const GetJobExecutionProgressResponseBodyDataShardingProgress &) = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgress& operator=(GetJobExecutionProgressResponseBodyDataShardingProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->jobExecutionId_ == nullptr && return this->result_ == nullptr && return this->status_ == nullptr && return this->statusType_ == nullptr && return this->workerAddr_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetJobExecutionProgressResponseBodyDataShardingProgress& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string jobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline GetJobExecutionProgressResponseBodyDataShardingProgress& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetJobExecutionProgressResponseBodyDataShardingProgress& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetJobExecutionProgressResponseBodyDataShardingProgress& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusType Field Functions 
    bool hasStatusType() const { return this->statusType_ != nullptr;};
    void deleteStatusType() { this->statusType_ = nullptr;};
    inline const Models::GetJobExecutionProgressResponseBodyDataShardingProgressStatusType & statusType() const { DARABONBA_PTR_GET_CONST(statusType_, Models::GetJobExecutionProgressResponseBodyDataShardingProgressStatusType) };
    inline Models::GetJobExecutionProgressResponseBodyDataShardingProgressStatusType statusType() { DARABONBA_PTR_GET(statusType_, Models::GetJobExecutionProgressResponseBodyDataShardingProgressStatusType) };
    inline GetJobExecutionProgressResponseBodyDataShardingProgress& setStatusType(const Models::GetJobExecutionProgressResponseBodyDataShardingProgressStatusType & statusType) { DARABONBA_PTR_SET_VALUE(statusType_, statusType) };
    inline GetJobExecutionProgressResponseBodyDataShardingProgress& setStatusType(Models::GetJobExecutionProgressResponseBodyDataShardingProgressStatusType && statusType) { DARABONBA_PTR_SET_RVALUE(statusType_, statusType) };


    // workerAddr Field Functions 
    bool hasWorkerAddr() const { return this->workerAddr_ != nullptr;};
    void deleteWorkerAddr() { this->workerAddr_ = nullptr;};
    inline string workerAddr() const { DARABONBA_PTR_GET_DEFAULT(workerAddr_, "") };
    inline GetJobExecutionProgressResponseBodyDataShardingProgress& setWorkerAddr(string workerAddr) { DARABONBA_PTR_SET_VALUE(workerAddr_, workerAddr) };


  protected:
    // id
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> jobExecutionId_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<Models::GetJobExecutionProgressResponseBodyDataShardingProgressStatusType> statusType_ = nullptr;
    std::shared_ptr<string> workerAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
