// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATENORMALIZATIONRULERESPONSEBODYVALIDATERESULT_HPP_
#define ALIBABACLOUD_MODELS_VALIDATENORMALIZATIONRULERESPONSEBODYVALIDATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ValidateNormalizationRuleResponseBodyValidateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateNormalizationRuleResponseBodyValidateResult& obj) { 
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateNormalizationRuleResponseBodyValidateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ValidateNormalizationRuleResponseBodyValidateResult() = default ;
    ValidateNormalizationRuleResponseBodyValidateResult(const ValidateNormalizationRuleResponseBodyValidateResult &) = default ;
    ValidateNormalizationRuleResponseBodyValidateResult(ValidateNormalizationRuleResponseBodyValidateResult &&) = default ;
    ValidateNormalizationRuleResponseBodyValidateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateNormalizationRuleResponseBodyValidateResult() = default ;
    ValidateNormalizationRuleResponseBodyValidateResult& operator=(const ValidateNormalizationRuleResponseBodyValidateResult &) = default ;
    ValidateNormalizationRuleResponseBodyValidateResult& operator=(ValidateNormalizationRuleResponseBodyValidateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldValue_ == nullptr && return this->message_ == nullptr && return this->normalizationFieldName_ == nullptr && return this->normalizationFieldRequired_ == nullptr && return this->result_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline ValidateNormalizationRuleResponseBodyValidateResult& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline ValidateNormalizationRuleResponseBodyValidateResult& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ValidateNormalizationRuleResponseBodyValidateResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // normalizationFieldName Field Functions 
    bool hasNormalizationFieldName() const { return this->normalizationFieldName_ != nullptr;};
    void deleteNormalizationFieldName() { this->normalizationFieldName_ = nullptr;};
    inline string normalizationFieldName() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldName_, "") };
    inline ValidateNormalizationRuleResponseBodyValidateResult& setNormalizationFieldName(string normalizationFieldName) { DARABONBA_PTR_SET_VALUE(normalizationFieldName_, normalizationFieldName) };


    // normalizationFieldRequired Field Functions 
    bool hasNormalizationFieldRequired() const { return this->normalizationFieldRequired_ != nullptr;};
    void deleteNormalizationFieldRequired() { this->normalizationFieldRequired_ = nullptr;};
    inline bool normalizationFieldRequired() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldRequired_, false) };
    inline ValidateNormalizationRuleResponseBodyValidateResult& setNormalizationFieldRequired(bool normalizationFieldRequired) { DARABONBA_PTR_SET_VALUE(normalizationFieldRequired_, normalizationFieldRequired) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline ValidateNormalizationRuleResponseBodyValidateResult& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> fieldValue_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> normalizationFieldName_ = nullptr;
    std::shared_ptr<bool> normalizationFieldRequired_ = nullptr;
    std::shared_ptr<int32_t> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
