// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskCheckResultResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRiskCheckResultResponseBody() = default ;
    DescribeRiskCheckResultResponseBody(const DescribeRiskCheckResultResponseBody &) = default ;
    DescribeRiskCheckResultResponseBody(DescribeRiskCheckResultResponseBody &&) = default ;
    DescribeRiskCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckResultResponseBody() = default ;
    DescribeRiskCheckResultResponseBody& operator=(const DescribeRiskCheckResultResponseBody &) = default ;
    DescribeRiskCheckResultResponseBody& operator=(DescribeRiskCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->currentPage_ == nullptr && return this->list_ == nullptr && return this->pageCount_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeRiskCheckResultResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRiskCheckResultResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeRiskCheckResultResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeRiskCheckResultResponseBodyList>) };
    inline vector<DescribeRiskCheckResultResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<DescribeRiskCheckResultResponseBodyList>) };
    inline DescribeRiskCheckResultResponseBody& setList(const vector<DescribeRiskCheckResultResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeRiskCheckResultResponseBody& setList(vector<DescribeRiskCheckResultResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int32_t pageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
    inline DescribeRiskCheckResultResponseBody& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRiskCheckResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRiskCheckResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The check items.
    std::shared_ptr<vector<DescribeRiskCheckResultResponseBodyList>> list_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> pageCount_ = nullptr;
    // The number of entries returned per page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
