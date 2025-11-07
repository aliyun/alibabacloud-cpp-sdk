// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryVerifyInvokeSatisticResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyInvokeSatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyInvokeSatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyInvokeSatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    QueryVerifyInvokeSatisticResponseBody() = default ;
    QueryVerifyInvokeSatisticResponseBody(const QueryVerifyInvokeSatisticResponseBody &) = default ;
    QueryVerifyInvokeSatisticResponseBody(QueryVerifyInvokeSatisticResponseBody &&) = default ;
    QueryVerifyInvokeSatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyInvokeSatisticResponseBody() = default ;
    QueryVerifyInvokeSatisticResponseBody& operator=(const QueryVerifyInvokeSatisticResponseBody &) = default ;
    QueryVerifyInvokeSatisticResponseBody& operator=(QueryVerifyInvokeSatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->currentPage_ == nullptr && return this->items_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->totalCount_ == nullptr && return this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVerifyInvokeSatisticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryVerifyInvokeSatisticResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<QueryVerifyInvokeSatisticResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<QueryVerifyInvokeSatisticResponseBodyItems>) };
    inline vector<QueryVerifyInvokeSatisticResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<QueryVerifyInvokeSatisticResponseBodyItems>) };
    inline QueryVerifyInvokeSatisticResponseBody& setItems(const vector<QueryVerifyInvokeSatisticResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryVerifyInvokeSatisticResponseBody& setItems(vector<QueryVerifyInvokeSatisticResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryVerifyInvokeSatisticResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVerifyInvokeSatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryVerifyInvokeSatisticResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryVerifyInvokeSatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline QueryVerifyInvokeSatisticResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Response code, **200** indicates a successful response.
    std::shared_ptr<string> code_ = nullptr;
    // Current page number.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // List of returned data.
    std::shared_ptr<vector<QueryVerifyInvokeSatisticResponseBodyItems>> items_ = nullptr;
    // Number of items per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the response was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // Total count.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
