// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSQLCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSQLCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class CheckSqlContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSqlContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSqlContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckSqlContentResponseBody() = default ;
    CheckSqlContentResponseBody(const CheckSqlContentResponseBody &) = default ;
    CheckSqlContentResponseBody(CheckSqlContentResponseBody &&) = default ;
    CheckSqlContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSqlContentResponseBody() = default ;
    CheckSqlContentResponseBody& operator=(const CheckSqlContentResponseBody &) = default ;
    CheckSqlContentResponseBody& operator=(CheckSqlContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorList, errorList_);
        DARABONBA_PTR_TO_JSON(Valid, valid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorList, errorList_);
        DARABONBA_PTR_FROM_JSON(Valid, valid_);
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
      class ErrorList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorList& obj) { 
          DARABONBA_PTR_TO_JSON(CodeSnippet, codeSnippet_);
          DARABONBA_PTR_TO_JSON(ColumnNumber, columnNumber_);
          DARABONBA_PTR_TO_JSON(EndColumnNumber, endColumnNumber_);
          DARABONBA_PTR_TO_JSON(EndLineNumber, endLineNumber_);
          DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
          DARABONBA_PTR_TO_JSON(LineNumber, lineNumber_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorList& obj) { 
          DARABONBA_PTR_FROM_JSON(CodeSnippet, codeSnippet_);
          DARABONBA_PTR_FROM_JSON(ColumnNumber, columnNumber_);
          DARABONBA_PTR_FROM_JSON(EndColumnNumber, endColumnNumber_);
          DARABONBA_PTR_FROM_JSON(EndLineNumber, endLineNumber_);
          DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
          DARABONBA_PTR_FROM_JSON(LineNumber, lineNumber_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        ErrorList() = default ;
        ErrorList(const ErrorList &) = default ;
        ErrorList(ErrorList &&) = default ;
        ErrorList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorList() = default ;
        ErrorList& operator=(const ErrorList &) = default ;
        ErrorList& operator=(ErrorList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->codeSnippet_ == nullptr
        && this->columnNumber_ == nullptr && this->endColumnNumber_ == nullptr && this->endLineNumber_ == nullptr && this->errorType_ == nullptr && this->lineNumber_ == nullptr
        && this->message_ == nullptr; };
        // codeSnippet Field Functions 
        bool hasCodeSnippet() const { return this->codeSnippet_ != nullptr;};
        void deleteCodeSnippet() { this->codeSnippet_ = nullptr;};
        inline string getCodeSnippet() const { DARABONBA_PTR_GET_DEFAULT(codeSnippet_, "") };
        inline ErrorList& setCodeSnippet(string codeSnippet) { DARABONBA_PTR_SET_VALUE(codeSnippet_, codeSnippet) };


        // columnNumber Field Functions 
        bool hasColumnNumber() const { return this->columnNumber_ != nullptr;};
        void deleteColumnNumber() { this->columnNumber_ = nullptr;};
        inline int32_t getColumnNumber() const { DARABONBA_PTR_GET_DEFAULT(columnNumber_, 0) };
        inline ErrorList& setColumnNumber(int32_t columnNumber) { DARABONBA_PTR_SET_VALUE(columnNumber_, columnNumber) };


        // endColumnNumber Field Functions 
        bool hasEndColumnNumber() const { return this->endColumnNumber_ != nullptr;};
        void deleteEndColumnNumber() { this->endColumnNumber_ = nullptr;};
        inline int32_t getEndColumnNumber() const { DARABONBA_PTR_GET_DEFAULT(endColumnNumber_, 0) };
        inline ErrorList& setEndColumnNumber(int32_t endColumnNumber) { DARABONBA_PTR_SET_VALUE(endColumnNumber_, endColumnNumber) };


        // endLineNumber Field Functions 
        bool hasEndLineNumber() const { return this->endLineNumber_ != nullptr;};
        void deleteEndLineNumber() { this->endLineNumber_ = nullptr;};
        inline int32_t getEndLineNumber() const { DARABONBA_PTR_GET_DEFAULT(endLineNumber_, 0) };
        inline ErrorList& setEndLineNumber(int32_t endLineNumber) { DARABONBA_PTR_SET_VALUE(endLineNumber_, endLineNumber) };


        // errorType Field Functions 
        bool hasErrorType() const { return this->errorType_ != nullptr;};
        void deleteErrorType() { this->errorType_ = nullptr;};
        inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
        inline ErrorList& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


        // lineNumber Field Functions 
        bool hasLineNumber() const { return this->lineNumber_ != nullptr;};
        void deleteLineNumber() { this->lineNumber_ = nullptr;};
        inline int32_t getLineNumber() const { DARABONBA_PTR_GET_DEFAULT(lineNumber_, 0) };
        inline ErrorList& setLineNumber(int32_t lineNumber) { DARABONBA_PTR_SET_VALUE(lineNumber_, lineNumber) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ErrorList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        shared_ptr<string> codeSnippet_ {};
        shared_ptr<int32_t> columnNumber_ {};
        shared_ptr<int32_t> endColumnNumber_ {};
        shared_ptr<int32_t> endLineNumber_ {};
        shared_ptr<string> errorType_ {};
        shared_ptr<int32_t> lineNumber_ {};
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->errorList_ == nullptr
        && this->valid_ == nullptr; };
      // errorList Field Functions 
      bool hasErrorList() const { return this->errorList_ != nullptr;};
      void deleteErrorList() { this->errorList_ = nullptr;};
      inline const vector<Data::ErrorList> & getErrorList() const { DARABONBA_PTR_GET_CONST(errorList_, vector<Data::ErrorList>) };
      inline vector<Data::ErrorList> getErrorList() { DARABONBA_PTR_GET(errorList_, vector<Data::ErrorList>) };
      inline Data& setErrorList(const vector<Data::ErrorList> & errorList) { DARABONBA_PTR_SET_VALUE(errorList_, errorList) };
      inline Data& setErrorList(vector<Data::ErrorList> && errorList) { DARABONBA_PTR_SET_RVALUE(errorList_, errorList) };


      // valid Field Functions 
      bool hasValid() const { return this->valid_ != nullptr;};
      void deleteValid() { this->valid_ = nullptr;};
      inline bool getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
      inline Data& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


    protected:
      shared_ptr<vector<Data::ErrorList>> errorList_ {};
      shared_ptr<bool> valid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline CheckSqlContentResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CheckSqlContentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CheckSqlContentResponseBody::Data) };
    inline CheckSqlContentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CheckSqlContentResponseBody::Data) };
    inline CheckSqlContentResponseBody& setData(const CheckSqlContentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CheckSqlContentResponseBody& setData(CheckSqlContentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckSqlContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckSqlContentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<CheckSqlContentResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
