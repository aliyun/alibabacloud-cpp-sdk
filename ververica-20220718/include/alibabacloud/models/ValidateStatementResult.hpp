// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESTATEMENTRESULT_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESTATEMENTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ValidationErrorDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ValidateStatementResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateStatementResult& obj) { 
      DARABONBA_PTR_TO_JSON(errorDetails, errorDetails_);
      DARABONBA_PTR_TO_JSON(validationResult, validationResult_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateStatementResult& obj) { 
      DARABONBA_PTR_FROM_JSON(errorDetails, errorDetails_);
      DARABONBA_PTR_FROM_JSON(validationResult, validationResult_);
    };
    ValidateStatementResult() = default ;
    ValidateStatementResult(const ValidateStatementResult &) = default ;
    ValidateStatementResult(ValidateStatementResult &&) = default ;
    ValidateStatementResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateStatementResult() = default ;
    ValidateStatementResult& operator=(const ValidateStatementResult &) = default ;
    ValidateStatementResult& operator=(ValidateStatementResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorDetails_ == nullptr
        && return this->validationResult_ == nullptr; };
    // errorDetails Field Functions 
    bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
    void deleteErrorDetails() { this->errorDetails_ = nullptr;};
    inline const ValidationErrorDetails & errorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, ValidationErrorDetails) };
    inline ValidationErrorDetails errorDetails() { DARABONBA_PTR_GET(errorDetails_, ValidationErrorDetails) };
    inline ValidateStatementResult& setErrorDetails(const ValidationErrorDetails & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
    inline ValidateStatementResult& setErrorDetails(ValidationErrorDetails && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


    // validationResult Field Functions 
    bool hasValidationResult() const { return this->validationResult_ != nullptr;};
    void deleteValidationResult() { this->validationResult_ = nullptr;};
    inline string validationResult() const { DARABONBA_PTR_GET_DEFAULT(validationResult_, "") };
    inline ValidateStatementResult& setValidationResult(string validationResult) { DARABONBA_PTR_SET_VALUE(validationResult_, validationResult) };


  protected:
    std::shared_ptr<ValidationErrorDetails> errorDetails_ = nullptr;
    std::shared_ptr<string> validationResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
