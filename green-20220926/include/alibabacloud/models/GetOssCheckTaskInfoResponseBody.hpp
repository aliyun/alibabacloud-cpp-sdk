// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKTASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKTASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOssCheckTaskInfoResponseBodyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Buckets, buckets_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FinishNum, finishNum_);
      DARABONBA_PTR_TO_JSON(IsInc, isInc_);
      DARABONBA_PTR_TO_JSON(LastExecuteDate, lastExecuteDate_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(NextExecuteDate, nextExecuteDate_);
      DARABONBA_PTR_TO_JSON(ObjectNum, objectNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchNum, searchNum_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FinishNum, finishNum_);
      DARABONBA_PTR_FROM_JSON(IsInc, isInc_);
      DARABONBA_PTR_FROM_JSON(LastExecuteDate, lastExecuteDate_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(NextExecuteDate, nextExecuteDate_);
      DARABONBA_PTR_FROM_JSON(ObjectNum, objectNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchNum, searchNum_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetOssCheckTaskInfoResponseBody() = default ;
    GetOssCheckTaskInfoResponseBody(const GetOssCheckTaskInfoResponseBody &) = default ;
    GetOssCheckTaskInfoResponseBody(GetOssCheckTaskInfoResponseBody &&) = default ;
    GetOssCheckTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckTaskInfoResponseBody() = default ;
    GetOssCheckTaskInfoResponseBody& operator=(const GetOssCheckTaskInfoResponseBody &) = default ;
    GetOssCheckTaskInfoResponseBody& operator=(GetOssCheckTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buckets_ == nullptr
        && return this->config_ == nullptr && return this->endTime_ == nullptr && return this->finishNum_ == nullptr && return this->isInc_ == nullptr && return this->lastExecuteDate_ == nullptr
        && return this->mediaType_ == nullptr && return this->nextExecuteDate_ == nullptr && return this->objectNum_ == nullptr && return this->requestId_ == nullptr && return this->searchNum_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskType_ == nullptr; };
    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline string buckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
    inline GetOssCheckTaskInfoResponseBody& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const GetOssCheckTaskInfoResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, GetOssCheckTaskInfoResponseBodyConfig) };
    inline GetOssCheckTaskInfoResponseBodyConfig config() { DARABONBA_PTR_GET(config_, GetOssCheckTaskInfoResponseBodyConfig) };
    inline GetOssCheckTaskInfoResponseBody& setConfig(const GetOssCheckTaskInfoResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetOssCheckTaskInfoResponseBody& setConfig(GetOssCheckTaskInfoResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetOssCheckTaskInfoResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finishNum Field Functions 
    bool hasFinishNum() const { return this->finishNum_ != nullptr;};
    void deleteFinishNum() { this->finishNum_ = nullptr;};
    inline int64_t finishNum() const { DARABONBA_PTR_GET_DEFAULT(finishNum_, 0L) };
    inline GetOssCheckTaskInfoResponseBody& setFinishNum(int64_t finishNum) { DARABONBA_PTR_SET_VALUE(finishNum_, finishNum) };


    // isInc Field Functions 
    bool hasIsInc() const { return this->isInc_ != nullptr;};
    void deleteIsInc() { this->isInc_ = nullptr;};
    inline bool isInc() const { DARABONBA_PTR_GET_DEFAULT(isInc_, false) };
    inline GetOssCheckTaskInfoResponseBody& setIsInc(bool isInc) { DARABONBA_PTR_SET_VALUE(isInc_, isInc) };


    // lastExecuteDate Field Functions 
    bool hasLastExecuteDate() const { return this->lastExecuteDate_ != nullptr;};
    void deleteLastExecuteDate() { this->lastExecuteDate_ = nullptr;};
    inline string lastExecuteDate() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteDate_, "") };
    inline GetOssCheckTaskInfoResponseBody& setLastExecuteDate(string lastExecuteDate) { DARABONBA_PTR_SET_VALUE(lastExecuteDate_, lastExecuteDate) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline int32_t mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
    inline GetOssCheckTaskInfoResponseBody& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // nextExecuteDate Field Functions 
    bool hasNextExecuteDate() const { return this->nextExecuteDate_ != nullptr;};
    void deleteNextExecuteDate() { this->nextExecuteDate_ = nullptr;};
    inline string nextExecuteDate() const { DARABONBA_PTR_GET_DEFAULT(nextExecuteDate_, "") };
    inline GetOssCheckTaskInfoResponseBody& setNextExecuteDate(string nextExecuteDate) { DARABONBA_PTR_SET_VALUE(nextExecuteDate_, nextExecuteDate) };


    // objectNum Field Functions 
    bool hasObjectNum() const { return this->objectNum_ != nullptr;};
    void deleteObjectNum() { this->objectNum_ = nullptr;};
    inline int64_t objectNum() const { DARABONBA_PTR_GET_DEFAULT(objectNum_, 0L) };
    inline GetOssCheckTaskInfoResponseBody& setObjectNum(int64_t objectNum) { DARABONBA_PTR_SET_VALUE(objectNum_, objectNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssCheckTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchNum Field Functions 
    bool hasSearchNum() const { return this->searchNum_ != nullptr;};
    void deleteSearchNum() { this->searchNum_ = nullptr;};
    inline int64_t searchNum() const { DARABONBA_PTR_GET_DEFAULT(searchNum_, 0L) };
    inline GetOssCheckTaskInfoResponseBody& setSearchNum(int64_t searchNum) { DARABONBA_PTR_SET_VALUE(searchNum_, searchNum) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetOssCheckTaskInfoResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetOssCheckTaskInfoResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetOssCheckTaskInfoResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetOssCheckTaskInfoResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetOssCheckTaskInfoResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<string> buckets_ = nullptr;
    std::shared_ptr<GetOssCheckTaskInfoResponseBodyConfig> config_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> finishNum_ = nullptr;
    std::shared_ptr<bool> isInc_ = nullptr;
    std::shared_ptr<string> lastExecuteDate_ = nullptr;
    std::shared_ptr<int32_t> mediaType_ = nullptr;
    std::shared_ptr<string> nextExecuteDate_ = nullptr;
    std::shared_ptr<int64_t> objectNum_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> searchNum_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
