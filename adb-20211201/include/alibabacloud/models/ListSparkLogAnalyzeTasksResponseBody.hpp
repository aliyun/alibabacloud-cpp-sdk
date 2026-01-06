// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKLOGANALYZETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKLOGANALYZETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkAnalyzeLogTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListSparkLogAnalyzeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkLogAnalyzeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkLogAnalyzeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSparkLogAnalyzeTasksResponseBody() = default ;
    ListSparkLogAnalyzeTasksResponseBody(const ListSparkLogAnalyzeTasksResponseBody &) = default ;
    ListSparkLogAnalyzeTasksResponseBody(ListSparkLogAnalyzeTasksResponseBody &&) = default ;
    ListSparkLogAnalyzeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkLogAnalyzeTasksResponseBody() = default ;
    ListSparkLogAnalyzeTasksResponseBody& operator=(const ListSparkLogAnalyzeTasksResponseBody &) = default ;
    ListSparkLogAnalyzeTasksResponseBody& operator=(ListSparkLogAnalyzeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TaskList, taskList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->taskList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // taskList Field Functions 
      bool hasTaskList() const { return this->taskList_ != nullptr;};
      void deleteTaskList() { this->taskList_ = nullptr;};
      inline const vector<SparkAnalyzeLogTask> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<SparkAnalyzeLogTask>) };
      inline vector<SparkAnalyzeLogTask> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<SparkAnalyzeLogTask>) };
      inline Data& setTaskList(const vector<SparkAnalyzeLogTask> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
      inline Data& setTaskList(vector<SparkAnalyzeLogTask> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The queried Spark log analysis tasks.
      shared_ptr<vector<SparkAnalyzeLogTask>> taskList_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSparkLogAnalyzeTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSparkLogAnalyzeTasksResponseBody::Data) };
    inline ListSparkLogAnalyzeTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSparkLogAnalyzeTasksResponseBody::Data) };
    inline ListSparkLogAnalyzeTasksResponseBody& setData(const ListSparkLogAnalyzeTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSparkLogAnalyzeTasksResponseBody& setData(ListSparkLogAnalyzeTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSparkLogAnalyzeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListSparkLogAnalyzeTasksResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
