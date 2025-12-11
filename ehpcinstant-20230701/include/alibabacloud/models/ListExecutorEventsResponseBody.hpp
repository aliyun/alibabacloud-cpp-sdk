// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExecutorEventsResponseBodyExecutorEventList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorEventList, executorEventList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorEventList, executorEventList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExecutorEventsResponseBody() = default ;
    ListExecutorEventsResponseBody(const ListExecutorEventsResponseBody &) = default ;
    ListExecutorEventsResponseBody(ListExecutorEventsResponseBody &&) = default ;
    ListExecutorEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorEventsResponseBody() = default ;
    ListExecutorEventsResponseBody& operator=(const ListExecutorEventsResponseBody &) = default ;
    ListExecutorEventsResponseBody& operator=(ListExecutorEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executorEventList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // executorEventList Field Functions 
    bool hasExecutorEventList() const { return this->executorEventList_ != nullptr;};
    void deleteExecutorEventList() { this->executorEventList_ = nullptr;};
    inline const vector<ListExecutorEventsResponseBodyExecutorEventList> & executorEventList() const { DARABONBA_PTR_GET_CONST(executorEventList_, vector<ListExecutorEventsResponseBodyExecutorEventList>) };
    inline vector<ListExecutorEventsResponseBodyExecutorEventList> executorEventList() { DARABONBA_PTR_GET(executorEventList_, vector<ListExecutorEventsResponseBodyExecutorEventList>) };
    inline ListExecutorEventsResponseBody& setExecutorEventList(const vector<ListExecutorEventsResponseBodyExecutorEventList> & executorEventList) { DARABONBA_PTR_SET_VALUE(executorEventList_, executorEventList) };
    inline ListExecutorEventsResponseBody& setExecutorEventList(vector<ListExecutorEventsResponseBodyExecutorEventList> && executorEventList) { DARABONBA_PTR_SET_RVALUE(executorEventList_, executorEventList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorEventsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutorEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListExecutorEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListExecutorEventsResponseBodyExecutorEventList>> executorEventList_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
