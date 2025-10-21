// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWordGroupResponseBodyWordGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListWordGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWordGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WordGroupInfoList, wordGroupInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWordGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WordGroupInfoList, wordGroupInfoList_);
    };
    ListWordGroupResponseBody() = default ;
    ListWordGroupResponseBody(const ListWordGroupResponseBody &) = default ;
    ListWordGroupResponseBody(ListWordGroupResponseBody &&) = default ;
    ListWordGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWordGroupResponseBody() = default ;
    ListWordGroupResponseBody& operator=(const ListWordGroupResponseBody &) = default ;
    ListWordGroupResponseBody& operator=(ListWordGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->totalCount_ == nullptr && return this->wordGroupInfoList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListWordGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListWordGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWordGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWordGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWordGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWordGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWordGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWordGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // wordGroupInfoList Field Functions 
    bool hasWordGroupInfoList() const { return this->wordGroupInfoList_ != nullptr;};
    void deleteWordGroupInfoList() { this->wordGroupInfoList_ = nullptr;};
    inline const vector<ListWordGroupResponseBodyWordGroupInfoList> & wordGroupInfoList() const { DARABONBA_PTR_GET_CONST(wordGroupInfoList_, vector<ListWordGroupResponseBodyWordGroupInfoList>) };
    inline vector<ListWordGroupResponseBodyWordGroupInfoList> wordGroupInfoList() { DARABONBA_PTR_GET(wordGroupInfoList_, vector<ListWordGroupResponseBodyWordGroupInfoList>) };
    inline ListWordGroupResponseBody& setWordGroupInfoList(const vector<ListWordGroupResponseBodyWordGroupInfoList> & wordGroupInfoList) { DARABONBA_PTR_SET_VALUE(wordGroupInfoList_, wordGroupInfoList) };
    inline ListWordGroupResponseBody& setWordGroupInfoList(vector<ListWordGroupResponseBodyWordGroupInfoList> && wordGroupInfoList) { DARABONBA_PTR_SET_RVALUE(wordGroupInfoList_, wordGroupInfoList) };


  protected:
    // Status code, 00000 indicates success; other values indicate failure.
    std::shared_ptr<string> code_ = nullptr;
    // HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // If an error occurs, returns the error message.
    std::shared_ptr<string> message_ = nullptr;
    // Page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size, the maximum number of results returned per page.
    // Maximum limit: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful: true means the call was successful; false means the call failed.
    std::shared_ptr<bool> success_ = nullptr;
    // Total count.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // List of keyword group objects.
    std::shared_ptr<vector<ListWordGroupResponseBodyWordGroupInfoList>> wordGroupInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
