// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOTATASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOTATASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListOtaTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOtaTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOtaTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOtaTaskResponseBody() = default ;
    ListOtaTaskResponseBody(const ListOtaTaskResponseBody &) = default ;
    ListOtaTaskResponseBody(ListOtaTaskResponseBody &&) = default ;
    ListOtaTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOtaTaskResponseBody() = default ;
    ListOtaTaskResponseBody& operator=(const ListOtaTaskResponseBody &) = default ;
    ListOtaTaskResponseBody& operator=(ListOtaTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(OtaVersion, otaVersion_);
        DARABONBA_PTR_TO_JSON(TaskDisplayStatus, taskDisplayStatus_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(OtaVersion, otaVersion_);
        DARABONBA_PTR_FROM_JSON(TaskDisplayStatus, taskDisplayStatus_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->otaVersion_ == nullptr
        && this->taskDisplayStatus_ == nullptr && this->taskId_ == nullptr && this->taskStartTime_ == nullptr; };
      // otaVersion Field Functions 
      bool hasOtaVersion() const { return this->otaVersion_ != nullptr;};
      void deleteOtaVersion() { this->otaVersion_ = nullptr;};
      inline string getOtaVersion() const { DARABONBA_PTR_GET_DEFAULT(otaVersion_, "") };
      inline TaskList& setOtaVersion(string otaVersion) { DARABONBA_PTR_SET_VALUE(otaVersion_, otaVersion) };


      // taskDisplayStatus Field Functions 
      bool hasTaskDisplayStatus() const { return this->taskDisplayStatus_ != nullptr;};
      void deleteTaskDisplayStatus() { this->taskDisplayStatus_ = nullptr;};
      inline string getTaskDisplayStatus() const { DARABONBA_PTR_GET_DEFAULT(taskDisplayStatus_, "") };
      inline TaskList& setTaskDisplayStatus(string taskDisplayStatus) { DARABONBA_PTR_SET_VALUE(taskDisplayStatus_, taskDisplayStatus) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStartTime Field Functions 
      bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
      void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
      inline string getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, "") };
      inline TaskList& setTaskStartTime(string taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    protected:
      // The OTA version.
      shared_ptr<string> otaVersion_ {};
      // The task status.
      // 
      // Valid values:
      // 
      // *   FAILED
      // *   RUNNING
      // *   TERMINATED
      // *   PART_FINISHED
      // *   STANDBY
      // *   FINISHED
      shared_ptr<string> taskDisplayStatus_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The start time of the OTA update task. The time follows the ISO 8601 standard.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> taskStartTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->taskList_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOtaTaskResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOtaTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOtaTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<ListOtaTaskResponseBody::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<ListOtaTaskResponseBody::TaskList>) };
    inline vector<ListOtaTaskResponseBody::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<ListOtaTaskResponseBody::TaskList>) };
    inline ListOtaTaskResponseBody& setTaskList(const vector<ListOtaTaskResponseBody::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline ListOtaTaskResponseBody& setTaskList(vector<ListOtaTaskResponseBody::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOtaTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The OTA update tasks.
    shared_ptr<vector<ListOtaTaskResponseBody::TaskList>> taskList_ {};
    // The total number of OTA update tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
