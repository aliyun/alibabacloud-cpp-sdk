// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULESCOUNTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRULESCOUNTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRulesCountListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRulesCountListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetRulesCountListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetRulesCountListResponseBody() = default ;
    GetRulesCountListResponseBody(const GetRulesCountListResponseBody &) = default ;
    GetRulesCountListResponseBody(GetRulesCountListResponseBody &&) = default ;
    GetRulesCountListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRulesCountListResponseBody() = default ;
    GetRulesCountListResponseBody& operator=(const GetRulesCountListResponseBody &) = default ;
    GetRulesCountListResponseBody& operator=(GetRulesCountListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline const vector<string> & getMessage() const { DARABONBA_PTR_GET_CONST(message_, vector<string>) };
      inline vector<string> getMessage() { DARABONBA_PTR_GET(message_, vector<string>) };
      inline Messages& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
      inline Messages& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    protected:
      shared_ptr<vector<string>> message_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<string> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
      inline vector<string> getData() { DARABONBA_PTR_GET(data_, vector<string>) };
      inline Data& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<vector<string>> data_ {};
    };

    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->code_ == nullptr && this->count_ == nullptr && this->currentPage_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->messages_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline int32_t getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0) };
    inline GetRulesCountListResponseBody& setBusinessType(int32_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRulesCountListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetRulesCountListResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetRulesCountListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRulesCountListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRulesCountListResponseBody::Data) };
    inline GetRulesCountListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRulesCountListResponseBody::Data) };
    inline GetRulesCountListResponseBody& setData(const GetRulesCountListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRulesCountListResponseBody& setData(GetRulesCountListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRulesCountListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRulesCountListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const GetRulesCountListResponseBody::Messages & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, GetRulesCountListResponseBody::Messages) };
    inline GetRulesCountListResponseBody::Messages getMessages() { DARABONBA_PTR_GET(messages_, GetRulesCountListResponseBody::Messages) };
    inline GetRulesCountListResponseBody& setMessages(const GetRulesCountListResponseBody::Messages & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline GetRulesCountListResponseBody& setMessages(GetRulesCountListResponseBody::Messages && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetRulesCountListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetRulesCountListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRulesCountListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRulesCountListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetRulesCountListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> businessType_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<GetRulesCountListResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetRulesCountListResponseBody::Messages> messages_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
