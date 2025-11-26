// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBEEBOTINTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBEEBOTINTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBeebotIntentResponseBodyIntents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListBeebotIntentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBeebotIntentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeebotRequestId, beebotRequestId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Intents, intents_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBeebotIntentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeebotRequestId, beebotRequestId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Intents, intents_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBeebotIntentResponseBody() = default ;
    ListBeebotIntentResponseBody(const ListBeebotIntentResponseBody &) = default ;
    ListBeebotIntentResponseBody(ListBeebotIntentResponseBody &&) = default ;
    ListBeebotIntentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBeebotIntentResponseBody() = default ;
    ListBeebotIntentResponseBody& operator=(const ListBeebotIntentResponseBody &) = default ;
    ListBeebotIntentResponseBody& operator=(ListBeebotIntentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beebotRequestId_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->intents_ == nullptr && return this->message_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // beebotRequestId Field Functions 
    bool hasBeebotRequestId() const { return this->beebotRequestId_ != nullptr;};
    void deleteBeebotRequestId() { this->beebotRequestId_ = nullptr;};
    inline string beebotRequestId() const { DARABONBA_PTR_GET_DEFAULT(beebotRequestId_, "") };
    inline ListBeebotIntentResponseBody& setBeebotRequestId(string beebotRequestId) { DARABONBA_PTR_SET_VALUE(beebotRequestId_, beebotRequestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBeebotIntentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBeebotIntentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // intents Field Functions 
    bool hasIntents() const { return this->intents_ != nullptr;};
    void deleteIntents() { this->intents_ = nullptr;};
    inline const vector<ListBeebotIntentResponseBodyIntents> & intents() const { DARABONBA_PTR_GET_CONST(intents_, vector<ListBeebotIntentResponseBodyIntents>) };
    inline vector<ListBeebotIntentResponseBodyIntents> intents() { DARABONBA_PTR_GET(intents_, vector<ListBeebotIntentResponseBodyIntents>) };
    inline ListBeebotIntentResponseBody& setIntents(const vector<ListBeebotIntentResponseBodyIntents> & intents) { DARABONBA_PTR_SET_VALUE(intents_, intents) };
    inline ListBeebotIntentResponseBody& setIntents(vector<ListBeebotIntentResponseBodyIntents> && intents) { DARABONBA_PTR_SET_RVALUE(intents_, intents) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBeebotIntentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBeebotIntentResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBeebotIntentResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBeebotIntentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBeebotIntentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBeebotIntentResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> beebotRequestId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<vector<ListBeebotIntentResponseBodyIntents>> intents_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
