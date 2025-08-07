// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyData.hpp>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSchemeTaskConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSchemeTaskConfigResponseBody() = default ;
    ListSchemeTaskConfigResponseBody(const ListSchemeTaskConfigResponseBody &) = default ;
    ListSchemeTaskConfigResponseBody(ListSchemeTaskConfigResponseBody &&) = default ;
    ListSchemeTaskConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBody() = default ;
    ListSchemeTaskConfigResponseBody& operator=(const ListSchemeTaskConfigResponseBody &) = default ;
    ListSchemeTaskConfigResponseBody& operator=(ListSchemeTaskConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->count_ != nullptr && this->currentPage_ != nullptr && this->data_ != nullptr && this->httpStatusCode_ != nullptr && this->lastDataId_ != nullptr
        && this->message_ != nullptr && this->messages_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->resultCountId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSchemeTaskConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListSchemeTaskConfigResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSchemeTaskConfigResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSchemeTaskConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListSchemeTaskConfigResponseBodyData) };
    inline ListSchemeTaskConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, ListSchemeTaskConfigResponseBodyData) };
    inline ListSchemeTaskConfigResponseBody& setData(const ListSchemeTaskConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSchemeTaskConfigResponseBody& setData(ListSchemeTaskConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSchemeTaskConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // lastDataId Field Functions 
    bool hasLastDataId() const { return this->lastDataId_ != nullptr;};
    void deleteLastDataId() { this->lastDataId_ = nullptr;};
    inline string lastDataId() const { DARABONBA_PTR_GET_DEFAULT(lastDataId_, "") };
    inline ListSchemeTaskConfigResponseBody& setLastDataId(string lastDataId) { DARABONBA_PTR_SET_VALUE(lastDataId_, lastDataId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSchemeTaskConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const ListSchemeTaskConfigResponseBodyMessages & messages() const { DARABONBA_PTR_GET_CONST(messages_, ListSchemeTaskConfigResponseBodyMessages) };
    inline ListSchemeTaskConfigResponseBodyMessages messages() { DARABONBA_PTR_GET(messages_, ListSchemeTaskConfigResponseBodyMessages) };
    inline ListSchemeTaskConfigResponseBody& setMessages(const ListSchemeTaskConfigResponseBodyMessages & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ListSchemeTaskConfigResponseBody& setMessages(ListSchemeTaskConfigResponseBodyMessages && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSchemeTaskConfigResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSchemeTaskConfigResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSchemeTaskConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCountId Field Functions 
    bool hasResultCountId() const { return this->resultCountId_ != nullptr;};
    void deleteResultCountId() { this->resultCountId_ = nullptr;};
    inline string resultCountId() const { DARABONBA_PTR_GET_DEFAULT(resultCountId_, "") };
    inline ListSchemeTaskConfigResponseBody& setResultCountId(string resultCountId) { DARABONBA_PTR_SET_VALUE(resultCountId_, resultCountId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSchemeTaskConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<ListSchemeTaskConfigResponseBodyData> data_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> lastDataId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<ListSchemeTaskConfigResponseBodyMessages> messages_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCountId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
