// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLSTATEMENTVALIDATIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_SQLSTATEMENTVALIDATIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ErrorDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SqlStatementValidationResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlStatementValidationResult& obj) { 
      DARABONBA_PTR_TO_JSON(errorDetails, errorDetails_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(validationResult, validationResult_);
    };
    friend void from_json(const Darabonba::Json& j, SqlStatementValidationResult& obj) { 
      DARABONBA_PTR_FROM_JSON(errorDetails, errorDetails_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(validationResult, validationResult_);
    };
    SqlStatementValidationResult() = default ;
    SqlStatementValidationResult(const SqlStatementValidationResult &) = default ;
    SqlStatementValidationResult(SqlStatementValidationResult &&) = default ;
    SqlStatementValidationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlStatementValidationResult() = default ;
    SqlStatementValidationResult& operator=(const SqlStatementValidationResult &) = default ;
    SqlStatementValidationResult& operator=(SqlStatementValidationResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorDetails_ == nullptr
        && return this->message_ == nullptr && return this->success_ == nullptr && return this->validationResult_ == nullptr; };
    // errorDetails Field Functions 
    bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
    void deleteErrorDetails() { this->errorDetails_ = nullptr;};
    inline const ErrorDetails & errorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, ErrorDetails) };
    inline ErrorDetails errorDetails() { DARABONBA_PTR_GET(errorDetails_, ErrorDetails) };
    inline SqlStatementValidationResult& setErrorDetails(const ErrorDetails & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
    inline SqlStatementValidationResult& setErrorDetails(ErrorDetails && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SqlStatementValidationResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SqlStatementValidationResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // validationResult Field Functions 
    bool hasValidationResult() const { return this->validationResult_ != nullptr;};
    void deleteValidationResult() { this->validationResult_ = nullptr;};
    inline string validationResult() const { DARABONBA_PTR_GET_DEFAULT(validationResult_, "") };
    inline SqlStatementValidationResult& setValidationResult(string validationResult) { DARABONBA_PTR_SET_VALUE(validationResult_, validationResult) };


  protected:
    std::shared_ptr<ErrorDetails> errorDetails_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> validationResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
