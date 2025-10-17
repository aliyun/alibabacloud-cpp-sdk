// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFaceRecordResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class QueryFaceRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    QueryFaceRecordResponseBody() = default ;
    QueryFaceRecordResponseBody(const QueryFaceRecordResponseBody &) = default ;
    QueryFaceRecordResponseBody(QueryFaceRecordResponseBody &&) = default ;
    QueryFaceRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceRecordResponseBody() = default ;
    QueryFaceRecordResponseBody& operator=(const QueryFaceRecordResponseBody &) = default ;
    QueryFaceRecordResponseBody& operator=(QueryFaceRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->currentPage_ == nullptr && return this->items_ == nullptr && return this->maxResults_ == nullptr && return this->message_ == nullptr && return this->nextToken_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFaceRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryFaceRecordResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<QueryFaceRecordResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<QueryFaceRecordResponseBodyItems>) };
    inline vector<QueryFaceRecordResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<QueryFaceRecordResponseBodyItems>) };
    inline QueryFaceRecordResponseBody& setItems(const vector<QueryFaceRecordResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryFaceRecordResponseBody& setItems(vector<QueryFaceRecordResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryFaceRecordResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryFaceRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryFaceRecordResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryFaceRecordResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFaceRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryFaceRecordResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline QueryFaceRecordResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Return code.
    std::shared_ptr<string> code_ = nullptr;
    // Current query page number.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // List of returned information.
    std::shared_ptr<vector<QueryFaceRecordResponseBodyItems>> items_ = nullptr;
    // Maximum number of data entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Return message.
    std::shared_ptr<string> message_ = nullptr;
    // Token for the next query start.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Number of items per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of records.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Total number of pages.
    std::shared_ptr<int32_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
