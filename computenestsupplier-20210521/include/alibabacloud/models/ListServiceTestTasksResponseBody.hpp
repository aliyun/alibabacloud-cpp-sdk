// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETESTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETESTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceTestTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTestTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceTestTasks, serviceTestTasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTestTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceTestTasks, serviceTestTasks_);
    };
    ListServiceTestTasksResponseBody() = default ;
    ListServiceTestTasksResponseBody(const ListServiceTestTasksResponseBody &) = default ;
    ListServiceTestTasksResponseBody(ListServiceTestTasksResponseBody &&) = default ;
    ListServiceTestTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTestTasksResponseBody() = default ;
    ListServiceTestTasksResponseBody& operator=(const ListServiceTestTasksResponseBody &) = default ;
    ListServiceTestTasksResponseBody& operator=(ListServiceTestTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceTestTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceTestTasks& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskRegionId, taskRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceTestTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskRegionId, taskRegionId_);
      };
      ServiceTestTasks() = default ;
      ServiceTestTasks(const ServiceTestTasks &) = default ;
      ServiceTestTasks(ServiceTestTasks &&) = default ;
      ServiceTestTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceTestTasks() = default ;
      ServiceTestTasks& operator=(const ServiceTestTasks &) = default ;
      ServiceTestTasks& operator=(ServiceTestTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskRegionId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ServiceTestTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceTestTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ServiceTestTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline ServiceTestTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskRegionId Field Functions 
      bool hasTaskRegionId() const { return this->taskRegionId_ != nullptr;};
      void deleteTaskRegionId() { this->taskRegionId_ = nullptr;};
      inline string getTaskRegionId() const { DARABONBA_PTR_GET_DEFAULT(taskRegionId_, "") };
      inline ServiceTestTasks& setTaskRegionId(string taskRegionId) { DARABONBA_PTR_SET_VALUE(taskRegionId_, taskRegionId) };


    protected:
      // The time when the task was created.
      shared_ptr<string> createTime_ {};
      // The execution status.
      shared_ptr<string> status_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The region where the task was executed.
      shared_ptr<string> taskRegionId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->serviceTestTasks_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListServiceTestTasksResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceTestTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceTestTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceTestTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceTestTasks Field Functions 
    bool hasServiceTestTasks() const { return this->serviceTestTasks_ != nullptr;};
    void deleteServiceTestTasks() { this->serviceTestTasks_ = nullptr;};
    inline const vector<ListServiceTestTasksResponseBody::ServiceTestTasks> & getServiceTestTasks() const { DARABONBA_PTR_GET_CONST(serviceTestTasks_, vector<ListServiceTestTasksResponseBody::ServiceTestTasks>) };
    inline vector<ListServiceTestTasksResponseBody::ServiceTestTasks> getServiceTestTasks() { DARABONBA_PTR_GET(serviceTestTasks_, vector<ListServiceTestTasksResponseBody::ServiceTestTasks>) };
    inline ListServiceTestTasksResponseBody& setServiceTestTasks(const vector<ListServiceTestTasksResponseBody::ServiceTestTasks> & serviceTestTasks) { DARABONBA_PTR_SET_VALUE(serviceTestTasks_, serviceTestTasks) };
    inline ListServiceTestTasksResponseBody& setServiceTestTasks(vector<ListServiceTestTasksResponseBody::ServiceTestTasks> && serviceTestTasks) { DARABONBA_PTR_SET_RVALUE(serviceTestTasks_, serviceTestTasks) };


  protected:
    // The number of tasks.
    shared_ptr<int32_t> count_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If this parameter is not returned, it indicates that no more results are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The collection of service test tasks.
    shared_ptr<vector<ListServiceTestTasksResponseBody::ServiceTestTasks>> serviceTestTasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
