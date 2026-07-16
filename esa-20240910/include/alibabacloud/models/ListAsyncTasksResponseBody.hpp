// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListAsyncTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTasks, asyncTasks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTasks, asyncTasks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListAsyncTasksResponseBody() = default ;
    ListAsyncTasksResponseBody(const ListAsyncTasksResponseBody &) = default ;
    ListAsyncTasksResponseBody(ListAsyncTasksResponseBody &&) = default ;
    ListAsyncTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTasksResponseBody() = default ;
    ListAsyncTasksResponseBody& operator=(const ListAsyncTasksResponseBody &) = default ;
    ListAsyncTasksResponseBody& operator=(ListAsyncTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AsyncTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AsyncTasks& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
        DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AsyncTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
        DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AsyncTasks() = default ;
      AsyncTasks(const AsyncTasks &) = default ;
      AsyncTasks(AsyncTasks &&) = default ;
      AsyncTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AsyncTasks() = default ;
      AsyncTasks& operator=(const AsyncTasks &) = default ;
      AsyncTasks& operator=(AsyncTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr
        && this->taskDescription_ == nullptr && this->taskKey_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr && this->userId_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline AsyncTasks& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline AsyncTasks& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline AsyncTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline int64_t getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
      inline AsyncTasks& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline AsyncTasks& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline AsyncTasks& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // taskDescription Field Functions 
      bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
      void deleteTaskDescription() { this->taskDescription_ = nullptr;};
      inline const map<string, string> & getTaskDescription() const { DARABONBA_PTR_GET_CONST(taskDescription_, map<string, string>) };
      inline map<string, string> getTaskDescription() { DARABONBA_PTR_GET(taskDescription_, map<string, string>) };
      inline AsyncTasks& setTaskDescription(const map<string, string> & taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };
      inline AsyncTasks& setTaskDescription(map<string, string> && taskDescription) { DARABONBA_PTR_SET_RVALUE(taskDescription_, taskDescription) };


      // taskKey Field Functions 
      bool hasTaskKey() const { return this->taskKey_ != nullptr;};
      void deleteTaskKey() { this->taskKey_ = nullptr;};
      inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
      inline AsyncTasks& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline AsyncTasks& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline AsyncTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline AsyncTasks& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> resourceId_ {};
      shared_ptr<string> resourceName_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<map<string, string>> taskDescription_ {};
      shared_ptr<string> taskKey_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->asyncTasks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // asyncTasks Field Functions 
    bool hasAsyncTasks() const { return this->asyncTasks_ != nullptr;};
    void deleteAsyncTasks() { this->asyncTasks_ = nullptr;};
    inline const vector<ListAsyncTasksResponseBody::AsyncTasks> & getAsyncTasks() const { DARABONBA_PTR_GET_CONST(asyncTasks_, vector<ListAsyncTasksResponseBody::AsyncTasks>) };
    inline vector<ListAsyncTasksResponseBody::AsyncTasks> getAsyncTasks() { DARABONBA_PTR_GET(asyncTasks_, vector<ListAsyncTasksResponseBody::AsyncTasks>) };
    inline ListAsyncTasksResponseBody& setAsyncTasks(const vector<ListAsyncTasksResponseBody::AsyncTasks> & asyncTasks) { DARABONBA_PTR_SET_VALUE(asyncTasks_, asyncTasks) };
    inline ListAsyncTasksResponseBody& setAsyncTasks(vector<ListAsyncTasksResponseBody::AsyncTasks> && asyncTasks) { DARABONBA_PTR_SET_RVALUE(asyncTasks_, asyncTasks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAsyncTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAsyncTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAsyncTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAsyncTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListAsyncTasksResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<ListAsyncTasksResponseBody::AsyncTasks>> asyncTasks_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
