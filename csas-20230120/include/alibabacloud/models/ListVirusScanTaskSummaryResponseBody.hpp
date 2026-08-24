// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVirusScanTaskSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTaskSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTaskSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ListVirusScanTaskSummaryResponseBody() = default ;
    ListVirusScanTaskSummaryResponseBody(const ListVirusScanTaskSummaryResponseBody &) = default ;
    ListVirusScanTaskSummaryResponseBody(ListVirusScanTaskSummaryResponseBody &&) = default ;
    ListVirusScanTaskSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTaskSummaryResponseBody() = default ;
    ListVirusScanTaskSummaryResponseBody& operator=(const ListVirusScanTaskSummaryResponseBody &) = default ;
    ListVirusScanTaskSummaryResponseBody& operator=(ListVirusScanTaskSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(VirusFileCount, virusFileCount_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(VirusFileCount, virusFileCount_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->taskId_ == nullptr
        && this->virusFileCount_ == nullptr; };
      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // virusFileCount Field Functions 
      bool hasVirusFileCount() const { return this->virusFileCount_ != nullptr;};
      void deleteVirusFileCount() { this->virusFileCount_ = nullptr;};
      inline int64_t getVirusFileCount() const { DARABONBA_PTR_GET_DEFAULT(virusFileCount_, 0L) };
      inline Tasks& setVirusFileCount(int64_t virusFileCount) { DARABONBA_PTR_SET_VALUE(virusFileCount_, virusFileCount) };


    protected:
      shared_ptr<string> taskId_ {};
      shared_ptr<int64_t> virusFileCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tasks_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusScanTaskSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListVirusScanTaskSummaryResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListVirusScanTaskSummaryResponseBody::Tasks>) };
    inline vector<ListVirusScanTaskSummaryResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListVirusScanTaskSummaryResponseBody::Tasks>) };
    inline ListVirusScanTaskSummaryResponseBody& setTasks(const vector<ListVirusScanTaskSummaryResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListVirusScanTaskSummaryResponseBody& setTasks(vector<ListVirusScanTaskSummaryResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListVirusScanTaskSummaryResponseBody::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
