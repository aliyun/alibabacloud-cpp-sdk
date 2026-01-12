// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOCATIONPAIIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOCATIONPAIIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ListLocationPaiImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLocationPaiImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Pages, pages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListLocationPaiImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Pages, pages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListLocationPaiImageResponseBody() = default ;
    ListLocationPaiImageResponseBody(const ListLocationPaiImageResponseBody &) = default ;
    ListLocationPaiImageResponseBody(ListLocationPaiImageResponseBody &&) = default ;
    ListLocationPaiImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLocationPaiImageResponseBody() = default ;
    ListLocationPaiImageResponseBody& operator=(const ListLocationPaiImageResponseBody &) = default ;
    ListLocationPaiImageResponseBody& operator=(ListLocationPaiImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->current_ == nullptr && this->data_ == nullptr && this->errorName_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr
        && this->pages_ == nullptr && this->requestId_ == nullptr && this->size_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLocationPaiImageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListLocationPaiImageResponseBody& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline ListLocationPaiImageResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline ListLocationPaiImageResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline ListLocationPaiImageResponseBody& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListLocationPaiImageResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLocationPaiImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline int32_t getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0) };
    inline ListLocationPaiImageResponseBody& setPages(int32_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLocationPaiImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListLocationPaiImageResponseBody& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLocationPaiImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListLocationPaiImageResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> current_ {};
    Darabonba::Json data_ {};
    shared_ptr<string> errorName_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pages_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
