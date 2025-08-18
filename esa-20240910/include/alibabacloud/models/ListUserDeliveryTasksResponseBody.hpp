// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDELIVERYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDELIVERYTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserDeliveryTasksResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserDeliveryTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDeliveryTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDeliveryTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserDeliveryTasksResponseBody() = default ;
    ListUserDeliveryTasksResponseBody(const ListUserDeliveryTasksResponseBody &) = default ;
    ListUserDeliveryTasksResponseBody(ListUserDeliveryTasksResponseBody &&) = default ;
    ListUserDeliveryTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDeliveryTasksResponseBody() = default ;
    ListUserDeliveryTasksResponseBody& operator=(const ListUserDeliveryTasksResponseBody &) = default ;
    ListUserDeliveryTasksResponseBody& operator=(ListUserDeliveryTasksResponseBody &&) = default ;
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
    inline ListUserDeliveryTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserDeliveryTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserDeliveryTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListUserDeliveryTasksResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListUserDeliveryTasksResponseBodyTasks>) };
    inline vector<ListUserDeliveryTasksResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<ListUserDeliveryTasksResponseBodyTasks>) };
    inline ListUserDeliveryTasksResponseBody& setTasks(const vector<ListUserDeliveryTasksResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListUserDeliveryTasksResponseBody& setTasks(vector<ListUserDeliveryTasksResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserDeliveryTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number returned.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The delivery tasks.
    std::shared_ptr<vector<ListUserDeliveryTasksResponseBodyTasks>> tasks_ = nullptr;
    // The total number of delivery tasks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
