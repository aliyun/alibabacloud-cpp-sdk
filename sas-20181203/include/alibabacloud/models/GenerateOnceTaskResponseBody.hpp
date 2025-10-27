// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEONCETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEONCETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GenerateOnceTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanCreate, canCreate_);
      DARABONBA_PTR_TO_JSON(CollectTime, collectTime_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(LastTask, lastTask_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanCreate, canCreate_);
      DARABONBA_PTR_FROM_JSON(CollectTime, collectTime_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(LastTask, lastTask_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GenerateOnceTaskResponseBody() = default ;
    GenerateOnceTaskResponseBody(const GenerateOnceTaskResponseBody &) = default ;
    GenerateOnceTaskResponseBody(GenerateOnceTaskResponseBody &&) = default ;
    GenerateOnceTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOnceTaskResponseBody() = default ;
    GenerateOnceTaskResponseBody& operator=(const GenerateOnceTaskResponseBody &) = default ;
    GenerateOnceTaskResponseBody& operator=(GenerateOnceTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canCreate_ == nullptr
        && return this->collectTime_ == nullptr && return this->finishCount_ == nullptr && return this->lastTask_ == nullptr && return this->requestId_ == nullptr && return this->taskId_ == nullptr
        && return this->totalCount_ == nullptr; };
    // canCreate Field Functions 
    bool hasCanCreate() const { return this->canCreate_ != nullptr;};
    void deleteCanCreate() { this->canCreate_ = nullptr;};
    inline bool canCreate() const { DARABONBA_PTR_GET_DEFAULT(canCreate_, false) };
    inline GenerateOnceTaskResponseBody& setCanCreate(bool canCreate) { DARABONBA_PTR_SET_VALUE(canCreate_, canCreate) };


    // collectTime Field Functions 
    bool hasCollectTime() const { return this->collectTime_ != nullptr;};
    void deleteCollectTime() { this->collectTime_ = nullptr;};
    inline int64_t collectTime() const { DARABONBA_PTR_GET_DEFAULT(collectTime_, 0L) };
    inline GenerateOnceTaskResponseBody& setCollectTime(int64_t collectTime) { DARABONBA_PTR_SET_VALUE(collectTime_, collectTime) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int32_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
    inline GenerateOnceTaskResponseBody& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // lastTask Field Functions 
    bool hasLastTask() const { return this->lastTask_ != nullptr;};
    void deleteLastTask() { this->lastTask_ = nullptr;};
    inline string lastTask() const { DARABONBA_PTR_GET_DEFAULT(lastTask_, "") };
    inline GenerateOnceTaskResponseBody& setLastTask(string lastTask) { DARABONBA_PTR_SET_VALUE(lastTask_, lastTask) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateOnceTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GenerateOnceTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GenerateOnceTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates whether you can create more scan tasks. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // > By default, a maximum of 10 scan tasks can be running at the same time. If 10 image scan tasks are running, you cannot create a scan task by calling this operation. You must wait for at least one of the 10 existing scan tasks to complete before you can create a scan task.
    std::shared_ptr<bool> canCreate_ = nullptr;
    // The collection time.
    std::shared_ptr<int64_t> collectTime_ = nullptr;
    // The number of scan tasks that are complete.
    std::shared_ptr<int32_t> finishCount_ = nullptr;
    // The ID of the last scan task.
    std::shared_ptr<string> lastTask_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the scan task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The total number of scan tasks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
