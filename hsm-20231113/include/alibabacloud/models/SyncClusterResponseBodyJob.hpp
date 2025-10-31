// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCCLUSTERRESPONSEBODYJOB_HPP_
#define ALIBABACLOUD_MODELS_SYNCCLUSTERRESPONSEBODYJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class SyncClusterResponseBodyJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncClusterResponseBodyJob& obj) { 
      DARABONBA_PTR_TO_JSON(Completed, completed_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SyncClusterResponseBodyJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Completed, completed_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SyncClusterResponseBodyJob() = default ;
    SyncClusterResponseBodyJob(const SyncClusterResponseBodyJob &) = default ;
    SyncClusterResponseBodyJob(SyncClusterResponseBodyJob &&) = default ;
    SyncClusterResponseBodyJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncClusterResponseBodyJob() = default ;
    SyncClusterResponseBodyJob& operator=(const SyncClusterResponseBodyJob &) = default ;
    SyncClusterResponseBodyJob& operator=(SyncClusterResponseBodyJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completed_ == nullptr
        && return this->createTime_ == nullptr && return this->error_ == nullptr && return this->jobId_ == nullptr && return this->progress_ == nullptr && return this->response_ == nullptr
        && return this->status_ == nullptr && return this->type_ == nullptr; };
    // completed Field Functions 
    bool hasCompleted() const { return this->completed_ != nullptr;};
    void deleteCompleted() { this->completed_ = nullptr;};
    inline bool completed() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
    inline SyncClusterResponseBodyJob& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SyncClusterResponseBodyJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline SyncClusterResponseBodyJob& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SyncClusterResponseBodyJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline SyncClusterResponseBodyJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline string response() const { DARABONBA_PTR_GET_DEFAULT(response_, "") };
    inline SyncClusterResponseBodyJob& setResponse(string response) { DARABONBA_PTR_SET_VALUE(response_, response) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SyncClusterResponseBodyJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SyncClusterResponseBodyJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the task is complete. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> completed_ = nullptr;
    // The time when the task was created. Unit: milliseconds. The value is a UNIX timestamp.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error message returned if the task fails.
    std::shared_ptr<string> error_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The progress of the task. Unit: percent (%).
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The response returned after the task succeeds.
    std::shared_ptr<string> response_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   success
    // *   running
    // *   cancel
    // *   fail
    std::shared_ptr<string> status_ = nullptr;
    // The operation type. Valid values:
    // 
    // *   create
    // *   cancel
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
