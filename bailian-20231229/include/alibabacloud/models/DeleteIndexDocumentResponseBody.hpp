// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINDEXDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEINDEXDOCUMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteIndexDocumentResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteIndexDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIndexDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIndexDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteIndexDocumentResponseBody() = default ;
    DeleteIndexDocumentResponseBody(const DeleteIndexDocumentResponseBody &) = default ;
    DeleteIndexDocumentResponseBody(DeleteIndexDocumentResponseBody &&) = default ;
    DeleteIndexDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIndexDocumentResponseBody() = default ;
    DeleteIndexDocumentResponseBody& operator=(const DeleteIndexDocumentResponseBody &) = default ;
    DeleteIndexDocumentResponseBody& operator=(DeleteIndexDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteIndexDocumentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteIndexDocumentResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteIndexDocumentResponseBodyData) };
    inline DeleteIndexDocumentResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteIndexDocumentResponseBodyData) };
    inline DeleteIndexDocumentResponseBody& setData(const DeleteIndexDocumentResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteIndexDocumentResponseBody& setData(DeleteIndexDocumentResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteIndexDocumentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteIndexDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeleteIndexDocumentResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteIndexDocumentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // HTTP status code
    std::shared_ptr<string> code_ = nullptr;
    // The parameters returned by the operation.
    std::shared_ptr<DeleteIndexDocumentResponseBodyData> data_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status code.
    std::shared_ptr<string> status_ = nullptr;
    // Indications whether the API call is successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
