// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATIONERRORDETAILS_HPP_
#define ALIBABACLOUD_MODELS_VALIDATIONERRORDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ValidationErrorDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidationErrorDetails& obj) { 
      DARABONBA_PTR_TO_JSON(columnNumber, columnNumber_);
      DARABONBA_PTR_TO_JSON(endColumnNumber, endColumnNumber_);
      DARABONBA_PTR_TO_JSON(endLineNumber, endLineNumber_);
      DARABONBA_PTR_TO_JSON(lineNumber, lineNumber_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ValidationErrorDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(columnNumber, columnNumber_);
      DARABONBA_PTR_FROM_JSON(endColumnNumber, endColumnNumber_);
      DARABONBA_PTR_FROM_JSON(endLineNumber, endLineNumber_);
      DARABONBA_PTR_FROM_JSON(lineNumber, lineNumber_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    ValidationErrorDetails() = default ;
    ValidationErrorDetails(const ValidationErrorDetails &) = default ;
    ValidationErrorDetails(ValidationErrorDetails &&) = default ;
    ValidationErrorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidationErrorDetails() = default ;
    ValidationErrorDetails& operator=(const ValidationErrorDetails &) = default ;
    ValidationErrorDetails& operator=(ValidationErrorDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnNumber_ == nullptr
        && return this->endColumnNumber_ == nullptr && return this->endLineNumber_ == nullptr && return this->lineNumber_ == nullptr && return this->message_ == nullptr; };
    // columnNumber Field Functions 
    bool hasColumnNumber() const { return this->columnNumber_ != nullptr;};
    void deleteColumnNumber() { this->columnNumber_ = nullptr;};
    inline string columnNumber() const { DARABONBA_PTR_GET_DEFAULT(columnNumber_, "") };
    inline ValidationErrorDetails& setColumnNumber(string columnNumber) { DARABONBA_PTR_SET_VALUE(columnNumber_, columnNumber) };


    // endColumnNumber Field Functions 
    bool hasEndColumnNumber() const { return this->endColumnNumber_ != nullptr;};
    void deleteEndColumnNumber() { this->endColumnNumber_ = nullptr;};
    inline string endColumnNumber() const { DARABONBA_PTR_GET_DEFAULT(endColumnNumber_, "") };
    inline ValidationErrorDetails& setEndColumnNumber(string endColumnNumber) { DARABONBA_PTR_SET_VALUE(endColumnNumber_, endColumnNumber) };


    // endLineNumber Field Functions 
    bool hasEndLineNumber() const { return this->endLineNumber_ != nullptr;};
    void deleteEndLineNumber() { this->endLineNumber_ = nullptr;};
    inline string endLineNumber() const { DARABONBA_PTR_GET_DEFAULT(endLineNumber_, "") };
    inline ValidationErrorDetails& setEndLineNumber(string endLineNumber) { DARABONBA_PTR_SET_VALUE(endLineNumber_, endLineNumber) };


    // lineNumber Field Functions 
    bool hasLineNumber() const { return this->lineNumber_ != nullptr;};
    void deleteLineNumber() { this->lineNumber_ = nullptr;};
    inline string lineNumber() const { DARABONBA_PTR_GET_DEFAULT(lineNumber_, "") };
    inline ValidationErrorDetails& setLineNumber(string lineNumber) { DARABONBA_PTR_SET_VALUE(lineNumber_, lineNumber) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ValidationErrorDetails& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> columnNumber_ = nullptr;
    std::shared_ptr<string> endColumnNumber_ = nullptr;
    std::shared_ptr<string> endLineNumber_ = nullptr;
    std::shared_ptr<string> lineNumber_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
