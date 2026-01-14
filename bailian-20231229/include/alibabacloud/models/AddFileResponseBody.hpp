// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddFileResponseBody() = default ;
    AddFileResponseBody(const AddFileResponseBody &) = default ;
    AddFileResponseBody(AddFileResponseBody &&) = default ;
    AddFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFileResponseBody() = default ;
    AddFileResponseBody& operator=(const AddFileResponseBody &) = default ;
    AddFileResponseBody& operator=(AddFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Parser, parser_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Parser, parser_);
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
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->parser_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // parser Field Functions 
      bool hasParser() const { return this->parser_ != nullptr;};
      void deleteParser() { this->parser_ = nullptr;};
      inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
      inline Data& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    protected:
      // The primary key ID of the document. We recommend that you store the ID because it is required for all subsequent API operations related to this document.
      shared_ptr<string> fileId_ {};
      // The parser that is used to parse the document. Valid value:
      // 
      // *   DASHSCOPE_DOCMIND: Intelligent document parsing by Alibaba Cloud.
      shared_ptr<string> parser_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddFileResponseBody::Data) };
    inline AddFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddFileResponseBody::Data) };
    inline AddFileResponseBody& setData(const AddFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddFileResponseBody& setData(AddFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AddFileResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline AddFileResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data fields.
    shared_ptr<AddFileResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The HTTP status code.
    shared_ptr<string> status_ {};
    // Indications whether the call is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
