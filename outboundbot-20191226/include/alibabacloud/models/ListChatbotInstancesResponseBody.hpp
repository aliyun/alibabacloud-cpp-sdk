// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATBOTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATBOTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListChatbotInstancesResponseBodyBots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListChatbotInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatbotInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bots, bots_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatbotInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bots, bots_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChatbotInstancesResponseBody() = default ;
    ListChatbotInstancesResponseBody(const ListChatbotInstancesResponseBody &) = default ;
    ListChatbotInstancesResponseBody(ListChatbotInstancesResponseBody &&) = default ;
    ListChatbotInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatbotInstancesResponseBody() = default ;
    ListChatbotInstancesResponseBody& operator=(const ListChatbotInstancesResponseBody &) = default ;
    ListChatbotInstancesResponseBody& operator=(ListChatbotInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bots_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // bots Field Functions 
    bool hasBots() const { return this->bots_ != nullptr;};
    void deleteBots() { this->bots_ = nullptr;};
    inline const vector<ListChatbotInstancesResponseBodyBots> & bots() const { DARABONBA_PTR_GET_CONST(bots_, vector<ListChatbotInstancesResponseBodyBots>) };
    inline vector<ListChatbotInstancesResponseBodyBots> bots() { DARABONBA_PTR_GET(bots_, vector<ListChatbotInstancesResponseBodyBots>) };
    inline ListChatbotInstancesResponseBody& setBots(const vector<ListChatbotInstancesResponseBodyBots> & bots) { DARABONBA_PTR_SET_VALUE(bots_, bots) };
    inline ListChatbotInstancesResponseBody& setBots(vector<ListChatbotInstancesResponseBodyBots> && bots) { DARABONBA_PTR_SET_RVALUE(bots_, bots) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChatbotInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListChatbotInstancesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListChatbotInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListChatbotInstancesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListChatbotInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChatbotInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListChatbotInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListChatbotInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListChatbotInstancesResponseBodyBots>> bots_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
