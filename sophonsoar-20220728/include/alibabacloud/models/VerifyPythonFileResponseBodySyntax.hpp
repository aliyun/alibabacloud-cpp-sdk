// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPYTHONFILERESPONSEBODYSYNTAX_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPYTHONFILERESPONSEBODYSYNTAX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class VerifyPythonFileResponseBodySyntax : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPythonFileResponseBodySyntax& obj) { 
      DARABONBA_PTR_TO_JSON(EndColumn, endColumn_);
      DARABONBA_PTR_TO_JSON(EndLineNumber, endLineNumber_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(StartColumn, startColumn_);
      DARABONBA_PTR_TO_JSON(StartLineNumber, startLineNumber_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPythonFileResponseBodySyntax& obj) { 
      DARABONBA_PTR_FROM_JSON(EndColumn, endColumn_);
      DARABONBA_PTR_FROM_JSON(EndLineNumber, endLineNumber_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(StartColumn, startColumn_);
      DARABONBA_PTR_FROM_JSON(StartLineNumber, startLineNumber_);
    };
    VerifyPythonFileResponseBodySyntax() = default ;
    VerifyPythonFileResponseBodySyntax(const VerifyPythonFileResponseBodySyntax &) = default ;
    VerifyPythonFileResponseBodySyntax(VerifyPythonFileResponseBodySyntax &&) = default ;
    VerifyPythonFileResponseBodySyntax(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPythonFileResponseBodySyntax() = default ;
    VerifyPythonFileResponseBodySyntax& operator=(const VerifyPythonFileResponseBodySyntax &) = default ;
    VerifyPythonFileResponseBodySyntax& operator=(VerifyPythonFileResponseBodySyntax &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endColumn_ == nullptr
        && return this->endLineNumber_ == nullptr && return this->message_ == nullptr && return this->severity_ == nullptr && return this->startColumn_ == nullptr && return this->startLineNumber_ == nullptr; };
    // endColumn Field Functions 
    bool hasEndColumn() const { return this->endColumn_ != nullptr;};
    void deleteEndColumn() { this->endColumn_ = nullptr;};
    inline int32_t endColumn() const { DARABONBA_PTR_GET_DEFAULT(endColumn_, 0) };
    inline VerifyPythonFileResponseBodySyntax& setEndColumn(int32_t endColumn) { DARABONBA_PTR_SET_VALUE(endColumn_, endColumn) };


    // endLineNumber Field Functions 
    bool hasEndLineNumber() const { return this->endLineNumber_ != nullptr;};
    void deleteEndLineNumber() { this->endLineNumber_ = nullptr;};
    inline int32_t endLineNumber() const { DARABONBA_PTR_GET_DEFAULT(endLineNumber_, 0) };
    inline VerifyPythonFileResponseBodySyntax& setEndLineNumber(int32_t endLineNumber) { DARABONBA_PTR_SET_VALUE(endLineNumber_, endLineNumber) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyPythonFileResponseBodySyntax& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline int32_t severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, 0) };
    inline VerifyPythonFileResponseBodySyntax& setSeverity(int32_t severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startColumn Field Functions 
    bool hasStartColumn() const { return this->startColumn_ != nullptr;};
    void deleteStartColumn() { this->startColumn_ = nullptr;};
    inline int32_t startColumn() const { DARABONBA_PTR_GET_DEFAULT(startColumn_, 0) };
    inline VerifyPythonFileResponseBodySyntax& setStartColumn(int32_t startColumn) { DARABONBA_PTR_SET_VALUE(startColumn_, startColumn) };


    // startLineNumber Field Functions 
    bool hasStartLineNumber() const { return this->startLineNumber_ != nullptr;};
    void deleteStartLineNumber() { this->startLineNumber_ = nullptr;};
    inline int32_t startLineNumber() const { DARABONBA_PTR_GET_DEFAULT(startLineNumber_, 0) };
    inline VerifyPythonFileResponseBodySyntax& setStartLineNumber(int32_t startLineNumber) { DARABONBA_PTR_SET_VALUE(startLineNumber_, startLineNumber) };


  protected:
    // The number that indicates the end column of the error code.
    std::shared_ptr<int32_t> endColumn_ = nullptr;
    // The number that indicates the end line of the error code.
    std::shared_ptr<int32_t> endLineNumber_ = nullptr;
    // The error message for the error code.
    std::shared_ptr<string> message_ = nullptr;
    // The severity level of the error code. Valid values:
    // 
    // *   4: moderate
    // *   8: serious
    std::shared_ptr<int32_t> severity_ = nullptr;
    // The number that indicates the start column of the error code.
    std::shared_ptr<int32_t> startColumn_ = nullptr;
    // The number that indicates the start line of the error code.
    std::shared_ptr<int32_t> startLineNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
