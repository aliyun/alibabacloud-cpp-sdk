// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPYTHONFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPYTHONFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class VerifyPythonFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPythonFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Syntax, syntax_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPythonFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Syntax, syntax_);
    };
    VerifyPythonFileResponseBody() = default ;
    VerifyPythonFileResponseBody(const VerifyPythonFileResponseBody &) = default ;
    VerifyPythonFileResponseBody(VerifyPythonFileResponseBody &&) = default ;
    VerifyPythonFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPythonFileResponseBody() = default ;
    VerifyPythonFileResponseBody& operator=(const VerifyPythonFileResponseBody &) = default ;
    VerifyPythonFileResponseBody& operator=(VerifyPythonFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Syntax : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Syntax& obj) { 
        DARABONBA_PTR_TO_JSON(EndColumn, endColumn_);
        DARABONBA_PTR_TO_JSON(EndLineNumber, endLineNumber_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(StartColumn, startColumn_);
        DARABONBA_PTR_TO_JSON(StartLineNumber, startLineNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Syntax& obj) { 
        DARABONBA_PTR_FROM_JSON(EndColumn, endColumn_);
        DARABONBA_PTR_FROM_JSON(EndLineNumber, endLineNumber_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(StartColumn, startColumn_);
        DARABONBA_PTR_FROM_JSON(StartLineNumber, startLineNumber_);
      };
      Syntax() = default ;
      Syntax(const Syntax &) = default ;
      Syntax(Syntax &&) = default ;
      Syntax(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Syntax() = default ;
      Syntax& operator=(const Syntax &) = default ;
      Syntax& operator=(Syntax &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endColumn_ == nullptr
        && this->endLineNumber_ == nullptr && this->message_ == nullptr && this->severity_ == nullptr && this->startColumn_ == nullptr && this->startLineNumber_ == nullptr; };
      // endColumn Field Functions 
      bool hasEndColumn() const { return this->endColumn_ != nullptr;};
      void deleteEndColumn() { this->endColumn_ = nullptr;};
      inline int32_t getEndColumn() const { DARABONBA_PTR_GET_DEFAULT(endColumn_, 0) };
      inline Syntax& setEndColumn(int32_t endColumn) { DARABONBA_PTR_SET_VALUE(endColumn_, endColumn) };


      // endLineNumber Field Functions 
      bool hasEndLineNumber() const { return this->endLineNumber_ != nullptr;};
      void deleteEndLineNumber() { this->endLineNumber_ = nullptr;};
      inline int32_t getEndLineNumber() const { DARABONBA_PTR_GET_DEFAULT(endLineNumber_, 0) };
      inline Syntax& setEndLineNumber(int32_t endLineNumber) { DARABONBA_PTR_SET_VALUE(endLineNumber_, endLineNumber) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Syntax& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline int32_t getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, 0) };
      inline Syntax& setSeverity(int32_t severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // startColumn Field Functions 
      bool hasStartColumn() const { return this->startColumn_ != nullptr;};
      void deleteStartColumn() { this->startColumn_ = nullptr;};
      inline int32_t getStartColumn() const { DARABONBA_PTR_GET_DEFAULT(startColumn_, 0) };
      inline Syntax& setStartColumn(int32_t startColumn) { DARABONBA_PTR_SET_VALUE(startColumn_, startColumn) };


      // startLineNumber Field Functions 
      bool hasStartLineNumber() const { return this->startLineNumber_ != nullptr;};
      void deleteStartLineNumber() { this->startLineNumber_ = nullptr;};
      inline int32_t getStartLineNumber() const { DARABONBA_PTR_GET_DEFAULT(startLineNumber_, 0) };
      inline Syntax& setStartLineNumber(int32_t startLineNumber) { DARABONBA_PTR_SET_VALUE(startLineNumber_, startLineNumber) };


    protected:
      // The number that indicates the end column of the error code.
      shared_ptr<int32_t> endColumn_ {};
      // The number that indicates the end line of the error code.
      shared_ptr<int32_t> endLineNumber_ {};
      // The error message for the error code.
      shared_ptr<string> message_ {};
      // The severity level of the error code. Valid values:
      // 
      // *   4: moderate
      // *   8: serious
      shared_ptr<int32_t> severity_ {};
      // The number that indicates the start column of the error code.
      shared_ptr<int32_t> startColumn_ {};
      // The number that indicates the start line of the error code.
      shared_ptr<int32_t> startLineNumber_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->syntax_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyPythonFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syntax Field Functions 
    bool hasSyntax() const { return this->syntax_ != nullptr;};
    void deleteSyntax() { this->syntax_ = nullptr;};
    inline const vector<VerifyPythonFileResponseBody::Syntax> & getSyntax() const { DARABONBA_PTR_GET_CONST(syntax_, vector<VerifyPythonFileResponseBody::Syntax>) };
    inline vector<VerifyPythonFileResponseBody::Syntax> getSyntax() { DARABONBA_PTR_GET(syntax_, vector<VerifyPythonFileResponseBody::Syntax>) };
    inline VerifyPythonFileResponseBody& setSyntax(const vector<VerifyPythonFileResponseBody::Syntax> & syntax) { DARABONBA_PTR_SET_VALUE(syntax_, syntax) };
    inline VerifyPythonFileResponseBody& setSyntax(vector<VerifyPythonFileResponseBody::Syntax> && syntax) { DARABONBA_PTR_SET_RVALUE(syntax_, syntax) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The verification result. If the parameter is left empty, the syntax of the code snippet is correct.
    shared_ptr<vector<VerifyPythonFileResponseBody::Syntax>> syntax_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
