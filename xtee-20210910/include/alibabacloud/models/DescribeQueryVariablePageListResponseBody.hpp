// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUERYVARIABLEPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUERYVARIABLEPAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeQueryVariablePageListResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeQueryVariablePageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQueryVariablePageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQueryVariablePageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeQueryVariablePageListResponseBody() = default ;
    DescribeQueryVariablePageListResponseBody(const DescribeQueryVariablePageListResponseBody &) = default ;
    DescribeQueryVariablePageListResponseBody(DescribeQueryVariablePageListResponseBody &&) = default ;
    DescribeQueryVariablePageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQueryVariablePageListResponseBody() = default ;
    DescribeQueryVariablePageListResponseBody& operator=(const DescribeQueryVariablePageListResponseBody &) = default ;
    DescribeQueryVariablePageListResponseBody& operator=(DescribeQueryVariablePageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->resultObject_ == nullptr && return this->totalItem_ == nullptr && return this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQueryVariablePageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeQueryVariablePageListResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeQueryVariablePageListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeQueryVariablePageListResponseBodyResultObject> & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeQueryVariablePageListResponseBodyResultObject>) };
    inline vector<DescribeQueryVariablePageListResponseBodyResultObject> resultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeQueryVariablePageListResponseBodyResultObject>) };
    inline DescribeQueryVariablePageListResponseBody& setResultObject(const vector<DescribeQueryVariablePageListResponseBodyResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeQueryVariablePageListResponseBody& setResultObject(vector<DescribeQueryVariablePageListResponseBodyResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int64_t totalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0L) };
    inline DescribeQueryVariablePageListResponseBody& setTotalItem(int64_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeQueryVariablePageListResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Pagination parameter, current page.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // Page size, default value is 10
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Return object
    std::shared_ptr<vector<DescribeQueryVariablePageListResponseBodyResultObject>> resultObject_ = nullptr;
    // Total items
    std::shared_ptr<int64_t> totalItem_ = nullptr;
    // Total pages
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
