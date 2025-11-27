// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExecutorsResponseBodyExecutors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Executors, executors_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Executors, executors_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExecutorsResponseBody() = default ;
    ListExecutorsResponseBody(const ListExecutorsResponseBody &) = default ;
    ListExecutorsResponseBody(ListExecutorsResponseBody &&) = default ;
    ListExecutorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsResponseBody() = default ;
    ListExecutorsResponseBody& operator=(const ListExecutorsResponseBody &) = default ;
    ListExecutorsResponseBody& operator=(ListExecutorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executors_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // executors Field Functions 
    bool hasExecutors() const { return this->executors_ != nullptr;};
    void deleteExecutors() { this->executors_ = nullptr;};
    inline const vector<ListExecutorsResponseBodyExecutors> & executors() const { DARABONBA_PTR_GET_CONST(executors_, vector<ListExecutorsResponseBodyExecutors>) };
    inline vector<ListExecutorsResponseBodyExecutors> executors() { DARABONBA_PTR_GET(executors_, vector<ListExecutorsResponseBodyExecutors>) };
    inline ListExecutorsResponseBody& setExecutors(const vector<ListExecutorsResponseBodyExecutors> & executors) { DARABONBA_PTR_SET_VALUE(executors_, executors) };
    inline ListExecutorsResponseBody& setExecutors(vector<ListExecutorsResponseBodyExecutors> && executors) { DARABONBA_PTR_SET_RVALUE(executors_, executors) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListExecutorsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Executor list.
    std::shared_ptr<vector<ListExecutorsResponseBodyExecutors>> executors_ = nullptr;
    // The current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
