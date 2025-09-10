// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBENCHMARKTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBENCHMARKTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBenchmarkTaskResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListBenchmarkTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBenchmarkTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBenchmarkTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBenchmarkTaskResponseBody() = default ;
    ListBenchmarkTaskResponseBody(const ListBenchmarkTaskResponseBody &) = default ;
    ListBenchmarkTaskResponseBody(ListBenchmarkTaskResponseBody &&) = default ;
    ListBenchmarkTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBenchmarkTaskResponseBody() = default ;
    ListBenchmarkTaskResponseBody& operator=(const ListBenchmarkTaskResponseBody &) = default ;
    ListBenchmarkTaskResponseBody& operator=(ListBenchmarkTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->tasks_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBenchmarkTaskResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBenchmarkTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBenchmarkTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListBenchmarkTaskResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListBenchmarkTaskResponseBodyTasks>) };
    inline vector<ListBenchmarkTaskResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<ListBenchmarkTaskResponseBodyTasks>) };
    inline ListBenchmarkTaskResponseBody& setTasks(const vector<ListBenchmarkTaskResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListBenchmarkTaskResponseBody& setTasks(vector<ListBenchmarkTaskResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBenchmarkTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The stress testing tasks.
    std::shared_ptr<vector<ListBenchmarkTaskResponseBodyTasks>> tasks_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
