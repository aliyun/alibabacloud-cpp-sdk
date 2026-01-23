// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTSUBSCRIPTIONTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTSUBSCRIPTIONTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactSubscriptionTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactSubscriptionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskResults, taskResults_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactSubscriptionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskResults, taskResults_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetArtifactSubscriptionTaskResultResponseBody() = default ;
    GetArtifactSubscriptionTaskResultResponseBody(const GetArtifactSubscriptionTaskResultResponseBody &) = default ;
    GetArtifactSubscriptionTaskResultResponseBody(GetArtifactSubscriptionTaskResultResponseBody &&) = default ;
    GetArtifactSubscriptionTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactSubscriptionTaskResultResponseBody() = default ;
    GetArtifactSubscriptionTaskResultResponseBody& operator=(const GetArtifactSubscriptionTaskResultResponseBody &) = default ;
    GetArtifactSubscriptionTaskResultResponseBody& operator=(GetArtifactSubscriptionTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskResults& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskResults& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskResults() = default ;
      TaskResults(const TaskResults &) = default ;
      TaskResults(TaskResults &&) = default ;
      TaskResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskResults() = default ;
      TaskResults& operator=(const TaskResults &) = default ;
      TaskResults& operator=(TaskResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->namespaceName_ == nullptr && this->repoName_ == nullptr && this->result_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->taskId_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline TaskResults& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TaskResults& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline TaskResults& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline TaskResults& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline TaskResults& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline TaskResults& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline TaskResults& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskResults& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The end time of the subscription task.
      shared_ptr<int64_t> endTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The name of the namespace.
      shared_ptr<string> namespaceName_ {};
      // The name of the repository.
      shared_ptr<string> repoName_ {};
      // The result of the task.
      shared_ptr<string> result_ {};
      // The start time of the subscription task.
      shared_ptr<int64_t> startTime_ {};
      // The status of the task.
      shared_ptr<string> status_ {};
      // The image tag.
      shared_ptr<string> tag_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->taskResults_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactSubscriptionTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactSubscriptionTaskResultResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetArtifactSubscriptionTaskResultResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetArtifactSubscriptionTaskResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactSubscriptionTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskResults Field Functions 
    bool hasTaskResults() const { return this->taskResults_ != nullptr;};
    void deleteTaskResults() { this->taskResults_ = nullptr;};
    inline const vector<GetArtifactSubscriptionTaskResultResponseBody::TaskResults> & getTaskResults() const { DARABONBA_PTR_GET_CONST(taskResults_, vector<GetArtifactSubscriptionTaskResultResponseBody::TaskResults>) };
    inline vector<GetArtifactSubscriptionTaskResultResponseBody::TaskResults> getTaskResults() { DARABONBA_PTR_GET(taskResults_, vector<GetArtifactSubscriptionTaskResultResponseBody::TaskResults>) };
    inline GetArtifactSubscriptionTaskResultResponseBody& setTaskResults(const vector<GetArtifactSubscriptionTaskResultResponseBody::TaskResults> & taskResults) { DARABONBA_PTR_SET_VALUE(taskResults_, taskResults) };
    inline GetArtifactSubscriptionTaskResultResponseBody& setTaskResults(vector<GetArtifactSubscriptionTaskResultResponseBody::TaskResults> && taskResults) { DARABONBA_PTR_SET_RVALUE(taskResults_, taskResults) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetArtifactSubscriptionTaskResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result of the artifact subscription task.
    shared_ptr<vector<GetArtifactSubscriptionTaskResultResponseBody::TaskResults>> taskResults_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
