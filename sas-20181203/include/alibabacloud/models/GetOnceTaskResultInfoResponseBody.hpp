// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCETASKRESULTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETONCETASKRESULTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOnceTaskResultInfoResponseBodyTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOnceTaskResultInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnceTaskResultInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CollectTime, collectTime_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnceTaskResultInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectTime, collectTime_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetOnceTaskResultInfoResponseBody() = default ;
    GetOnceTaskResultInfoResponseBody(const GetOnceTaskResultInfoResponseBody &) = default ;
    GetOnceTaskResultInfoResponseBody(GetOnceTaskResultInfoResponseBody &&) = default ;
    GetOnceTaskResultInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnceTaskResultInfoResponseBody() = default ;
    GetOnceTaskResultInfoResponseBody& operator=(const GetOnceTaskResultInfoResponseBody &) = default ;
    GetOnceTaskResultInfoResponseBody& operator=(GetOnceTaskResultInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectTime_ != nullptr
        && this->finishCount_ != nullptr && this->requestId_ != nullptr && this->taskId_ != nullptr && this->taskInfo_ != nullptr && this->totalCount_ != nullptr; };
    // collectTime Field Functions 
    bool hasCollectTime() const { return this->collectTime_ != nullptr;};
    void deleteCollectTime() { this->collectTime_ = nullptr;};
    inline int64_t collectTime() const { DARABONBA_PTR_GET_DEFAULT(collectTime_, 0L) };
    inline GetOnceTaskResultInfoResponseBody& setCollectTime(int64_t collectTime) { DARABONBA_PTR_SET_VALUE(collectTime_, collectTime) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int32_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
    inline GetOnceTaskResultInfoResponseBody& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOnceTaskResultInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetOnceTaskResultInfoResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const GetOnceTaskResultInfoResponseBodyTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, GetOnceTaskResultInfoResponseBodyTaskInfo) };
    inline GetOnceTaskResultInfoResponseBodyTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, GetOnceTaskResultInfoResponseBodyTaskInfo) };
    inline GetOnceTaskResultInfoResponseBody& setTaskInfo(const GetOnceTaskResultInfoResponseBodyTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline GetOnceTaskResultInfoResponseBody& setTaskInfo(GetOnceTaskResultInfoResponseBodyTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetOnceTaskResultInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The execution time of the task.
    std::shared_ptr<int64_t> collectTime_ = nullptr;
    // The number of tasks that were completed.
    std::shared_ptr<int32_t> finishCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the scan task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The information about the task.
    std::shared_ptr<GetOnceTaskResultInfoResponseBodyTaskInfo> taskInfo_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
