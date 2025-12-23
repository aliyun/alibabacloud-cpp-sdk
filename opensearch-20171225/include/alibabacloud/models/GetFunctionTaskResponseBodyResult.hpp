// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONTASKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONTASKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionTaskResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionTaskResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Generation, generation_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RunId, runId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionTaskResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Generation, generation_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetFunctionTaskResponseBodyResult() = default ;
    GetFunctionTaskResponseBodyResult(const GetFunctionTaskResponseBodyResult &) = default ;
    GetFunctionTaskResponseBodyResult(GetFunctionTaskResponseBodyResult &&) = default ;
    GetFunctionTaskResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionTaskResponseBodyResult() = default ;
    GetFunctionTaskResponseBodyResult& operator=(const GetFunctionTaskResponseBodyResult &) = default ;
    GetFunctionTaskResponseBodyResult& operator=(GetFunctionTaskResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->extendInfo_ == nullptr && return this->functionName_ == nullptr && return this->generation_ == nullptr && return this->progress_ == nullptr && return this->runId_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetFunctionTaskResponseBodyResult& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline GetFunctionTaskResponseBodyResult& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline GetFunctionTaskResponseBodyResult& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline string generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, "") };
    inline GetFunctionTaskResponseBodyResult& setGeneration(string generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline GetFunctionTaskResponseBodyResult& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string runId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline GetFunctionTaskResponseBodyResult& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetFunctionTaskResponseBodyResult& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFunctionTaskResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The timestamp that indicates the end time of the task. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The extended information, which is a JSON string.
    std::shared_ptr<string> extendInfo_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The number of iterations.
    std::shared_ptr<string> generation_ = nullptr;
    // The progress. 90 indicates 90%.
    std::shared_ptr<int64_t> progress_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> runId_ = nullptr;
    // The timestamp that indicates the start time of the task. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   success
    // *   failed
    // *   running
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
