// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSASYNCTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMMSASYNCTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsAsyncTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsAsyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(objectId, objectId_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(running, running_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsAsyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(objectId, objectId_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(running, running_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetMmsAsyncTaskResponseBodyData() = default ;
    GetMmsAsyncTaskResponseBodyData(const GetMmsAsyncTaskResponseBodyData &) = default ;
    GetMmsAsyncTaskResponseBodyData(GetMmsAsyncTaskResponseBodyData &&) = default ;
    GetMmsAsyncTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsAsyncTaskResponseBodyData() = default ;
    GetMmsAsyncTaskResponseBodyData& operator=(const GetMmsAsyncTaskResponseBodyData &) = default ;
    GetMmsAsyncTaskResponseBodyData& operator=(GetMmsAsyncTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->endTime_ != nullptr && this->errorMsg_ != nullptr && this->id_ != nullptr && this->objectId_ != nullptr && this->progress_ != nullptr
        && this->result_ != nullptr && this->running_ != nullptr && this->sourceId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMmsAsyncTaskResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetMmsAsyncTaskResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetMmsAsyncTaskResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMmsAsyncTaskResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline int64_t objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, 0L) };
    inline GetMmsAsyncTaskResponseBodyData& setObjectId(int64_t objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline GetMmsAsyncTaskResponseBodyData& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetMmsAsyncTaskResponseBodyData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline bool running() const { DARABONBA_PTR_GET_DEFAULT(running_, false) };
    inline GetMmsAsyncTaskResponseBodyData& setRunning(bool running) { DARABONBA_PTR_SET_VALUE(running_, running) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline GetMmsAsyncTaskResponseBodyData& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMmsAsyncTaskResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMmsAsyncTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetMmsAsyncTaskResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> objectId_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<bool> running_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
