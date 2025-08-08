// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELTASK_HPP_
#define ALIBABACLOUD_MODELS_MODELTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelTask& obj) { 
      DARABONBA_PTR_TO_JSON(currentBytes, currentBytes_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMsg, errMsg_);
      DARABONBA_ANY_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(finished, finished_);
      DARABONBA_PTR_TO_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_ANY_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(speed, speed_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(totalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModelTask& obj) { 
      DARABONBA_PTR_FROM_JSON(currentBytes, currentBytes_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMsg, errMsg_);
      DARABONBA_ANY_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(finished, finished_);
      DARABONBA_PTR_FROM_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_ANY_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(speed, speed_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(totalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ModelTask() = default ;
    ModelTask(const ModelTask &) = default ;
    ModelTask(ModelTask &&) = default ;
    ModelTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelTask() = default ;
    ModelTask& operator=(const ModelTask &) = default ;
    ModelTask& operator=(ModelTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentBytes_ != nullptr
        && this->errCode_ != nullptr && this->errMsg_ != nullptr && this->extra_ != nullptr && this->fileSize_ != nullptr && this->finishTime_ != nullptr
        && this->finished_ != nullptr && this->finishedTime_ != nullptr && this->id_ != nullptr && this->params_ != nullptr && this->result_ != nullptr
        && this->speed_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->taskType_ != nullptr
        && this->total_ != nullptr && this->totalBytes_ != nullptr && this->updateTime_ != nullptr; };
    // currentBytes Field Functions 
    bool hasCurrentBytes() const { return this->currentBytes_ != nullptr;};
    void deleteCurrentBytes() { this->currentBytes_ = nullptr;};
    inline string currentBytes() const { DARABONBA_PTR_GET_DEFAULT(currentBytes_, "") };
    inline ModelTask& setCurrentBytes(string currentBytes) { DARABONBA_PTR_SET_VALUE(currentBytes_, currentBytes) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelTask& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline ModelTask& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & extra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & extra() { DARABONBA_GET(extra_) };
    inline ModelTask& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline ModelTask& setExtra(Darabonba::Json & extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline double fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0.0) };
    inline ModelTask& setFileSize(double fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline double finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0.0) };
    inline ModelTask& setFinishTime(double finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline ModelTask& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline double finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0.0) };
    inline ModelTask& setFinishedTime(double finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModelTask& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ModelTask& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & result() const { DARABONBA_GET(result_) };
    Darabonba::Json & result() { DARABONBA_GET(result_) };
    inline ModelTask& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline ModelTask& setResult(Darabonba::Json & result) { DARABONBA_SET_RVALUE(result_, result) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline ModelTask& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline ModelTask& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModelTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModelTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ModelTask& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline float total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
    inline ModelTask& setTotal(float total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline string totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
    inline ModelTask& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline double updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0.0) };
    inline ModelTask& setUpdateTime(double updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> currentBytes_ = nullptr;
    std::shared_ptr<string> errCode_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    Darabonba::Json extra_ = nullptr;
    std::shared_ptr<double> fileSize_ = nullptr;
    std::shared_ptr<double> finishTime_ = nullptr;
    std::shared_ptr<bool> finished_ = nullptr;
    std::shared_ptr<double> finishedTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    Darabonba::Json result_ = nullptr;
    std::shared_ptr<string> speed_ = nullptr;
    std::shared_ptr<double> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<float> total_ = nullptr;
    std::shared_ptr<string> totalBytes_ = nullptr;
    std::shared_ptr<double> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
