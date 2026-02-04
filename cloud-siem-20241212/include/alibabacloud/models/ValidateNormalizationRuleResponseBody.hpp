// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATENORMALIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATENORMALIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ValidateNormalizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateNormalizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ValidateResult, validateResult_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateNormalizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ValidateResult, validateResult_);
    };
    ValidateNormalizationRuleResponseBody() = default ;
    ValidateNormalizationRuleResponseBody(const ValidateNormalizationRuleResponseBody &) = default ;
    ValidateNormalizationRuleResponseBody(ValidateNormalizationRuleResponseBody &&) = default ;
    ValidateNormalizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateNormalizationRuleResponseBody() = default ;
    ValidateNormalizationRuleResponseBody& operator=(const ValidateNormalizationRuleResponseBody &) = default ;
    ValidateNormalizationRuleResponseBody& operator=(ValidateNormalizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ValidateResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ValidateResult& obj) { 
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_TO_JSON(LogFieldName, logFieldName_);
        DARABONBA_PTR_TO_JSON(LogFieldValue, logFieldValue_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldValidationReason, normalizationFieldValidationReason_);
        DARABONBA_PTR_TO_JSON(NormalizationFieldValidationStatus, normalizationFieldValidationStatus_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, ValidateResult& obj) { 
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_FROM_JSON(LogFieldName, logFieldName_);
        DARABONBA_PTR_FROM_JSON(LogFieldValue, logFieldValue_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldFrom, normalizationFieldFrom_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldRequired, normalizationFieldRequired_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldValidationReason, normalizationFieldValidationReason_);
        DARABONBA_PTR_FROM_JSON(NormalizationFieldValidationStatus, normalizationFieldValidationStatus_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      ValidateResult() = default ;
      ValidateResult(const ValidateResult &) = default ;
      ValidateResult(ValidateResult &&) = default ;
      ValidateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ValidateResult() = default ;
      ValidateResult& operator=(const ValidateResult &) = default ;
      ValidateResult& operator=(ValidateResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldValue_ == nullptr && this->logFieldName_ == nullptr && this->logFieldValue_ == nullptr && this->message_ == nullptr && this->normalizationFieldFrom_ == nullptr
        && this->normalizationFieldName_ == nullptr && this->normalizationFieldRequired_ == nullptr && this->normalizationFieldReserved_ == nullptr && this->normalizationFieldType_ == nullptr && this->normalizationFieldValidationReason_ == nullptr
        && this->normalizationFieldValidationStatus_ == nullptr && this->result_ == nullptr; };
      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline ValidateResult& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline ValidateResult& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      // logFieldName Field Functions 
      bool hasLogFieldName() const { return this->logFieldName_ != nullptr;};
      void deleteLogFieldName() { this->logFieldName_ = nullptr;};
      inline string getLogFieldName() const { DARABONBA_PTR_GET_DEFAULT(logFieldName_, "") };
      inline ValidateResult& setLogFieldName(string logFieldName) { DARABONBA_PTR_SET_VALUE(logFieldName_, logFieldName) };


      // logFieldValue Field Functions 
      bool hasLogFieldValue() const { return this->logFieldValue_ != nullptr;};
      void deleteLogFieldValue() { this->logFieldValue_ = nullptr;};
      inline string getLogFieldValue() const { DARABONBA_PTR_GET_DEFAULT(logFieldValue_, "") };
      inline ValidateResult& setLogFieldValue(string logFieldValue) { DARABONBA_PTR_SET_VALUE(logFieldValue_, logFieldValue) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ValidateResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // normalizationFieldFrom Field Functions 
      bool hasNormalizationFieldFrom() const { return this->normalizationFieldFrom_ != nullptr;};
      void deleteNormalizationFieldFrom() { this->normalizationFieldFrom_ = nullptr;};
      inline string getNormalizationFieldFrom() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldFrom_, "") };
      inline ValidateResult& setNormalizationFieldFrom(string normalizationFieldFrom) { DARABONBA_PTR_SET_VALUE(normalizationFieldFrom_, normalizationFieldFrom) };


      // normalizationFieldName Field Functions 
      bool hasNormalizationFieldName() const { return this->normalizationFieldName_ != nullptr;};
      void deleteNormalizationFieldName() { this->normalizationFieldName_ = nullptr;};
      inline string getNormalizationFieldName() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldName_, "") };
      inline ValidateResult& setNormalizationFieldName(string normalizationFieldName) { DARABONBA_PTR_SET_VALUE(normalizationFieldName_, normalizationFieldName) };


      // normalizationFieldRequired Field Functions 
      bool hasNormalizationFieldRequired() const { return this->normalizationFieldRequired_ != nullptr;};
      void deleteNormalizationFieldRequired() { this->normalizationFieldRequired_ = nullptr;};
      inline bool getNormalizationFieldRequired() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldRequired_, false) };
      inline ValidateResult& setNormalizationFieldRequired(bool normalizationFieldRequired) { DARABONBA_PTR_SET_VALUE(normalizationFieldRequired_, normalizationFieldRequired) };


      // normalizationFieldReserved Field Functions 
      bool hasNormalizationFieldReserved() const { return this->normalizationFieldReserved_ != nullptr;};
      void deleteNormalizationFieldReserved() { this->normalizationFieldReserved_ = nullptr;};
      inline bool getNormalizationFieldReserved() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldReserved_, false) };
      inline ValidateResult& setNormalizationFieldReserved(bool normalizationFieldReserved) { DARABONBA_PTR_SET_VALUE(normalizationFieldReserved_, normalizationFieldReserved) };


      // normalizationFieldType Field Functions 
      bool hasNormalizationFieldType() const { return this->normalizationFieldType_ != nullptr;};
      void deleteNormalizationFieldType() { this->normalizationFieldType_ = nullptr;};
      inline string getNormalizationFieldType() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldType_, "") };
      inline ValidateResult& setNormalizationFieldType(string normalizationFieldType) { DARABONBA_PTR_SET_VALUE(normalizationFieldType_, normalizationFieldType) };


      // normalizationFieldValidationReason Field Functions 
      bool hasNormalizationFieldValidationReason() const { return this->normalizationFieldValidationReason_ != nullptr;};
      void deleteNormalizationFieldValidationReason() { this->normalizationFieldValidationReason_ = nullptr;};
      inline string getNormalizationFieldValidationReason() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldValidationReason_, "") };
      inline ValidateResult& setNormalizationFieldValidationReason(string normalizationFieldValidationReason) { DARABONBA_PTR_SET_VALUE(normalizationFieldValidationReason_, normalizationFieldValidationReason) };


      // normalizationFieldValidationStatus Field Functions 
      bool hasNormalizationFieldValidationStatus() const { return this->normalizationFieldValidationStatus_ != nullptr;};
      void deleteNormalizationFieldValidationStatus() { this->normalizationFieldValidationStatus_ = nullptr;};
      inline string getNormalizationFieldValidationStatus() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldValidationStatus_, "") };
      inline ValidateResult& setNormalizationFieldValidationStatus(string normalizationFieldValidationStatus) { DARABONBA_PTR_SET_VALUE(normalizationFieldValidationStatus_, normalizationFieldValidationStatus) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline int32_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
      inline ValidateResult& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    protected:
      shared_ptr<string> fieldName_ {};
      shared_ptr<string> fieldValue_ {};
      shared_ptr<string> logFieldName_ {};
      shared_ptr<string> logFieldValue_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> normalizationFieldFrom_ {};
      shared_ptr<string> normalizationFieldName_ {};
      shared_ptr<bool> normalizationFieldRequired_ {};
      shared_ptr<bool> normalizationFieldReserved_ {};
      shared_ptr<string> normalizationFieldType_ {};
      shared_ptr<string> normalizationFieldValidationReason_ {};
      shared_ptr<string> normalizationFieldValidationStatus_ {};
      shared_ptr<int32_t> result_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->validateResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateNormalizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // validateResult Field Functions 
    bool hasValidateResult() const { return this->validateResult_ != nullptr;};
    void deleteValidateResult() { this->validateResult_ = nullptr;};
    inline const vector<ValidateNormalizationRuleResponseBody::ValidateResult> & getValidateResult() const { DARABONBA_PTR_GET_CONST(validateResult_, vector<ValidateNormalizationRuleResponseBody::ValidateResult>) };
    inline vector<ValidateNormalizationRuleResponseBody::ValidateResult> getValidateResult() { DARABONBA_PTR_GET(validateResult_, vector<ValidateNormalizationRuleResponseBody::ValidateResult>) };
    inline ValidateNormalizationRuleResponseBody& setValidateResult(const vector<ValidateNormalizationRuleResponseBody::ValidateResult> & validateResult) { DARABONBA_PTR_SET_VALUE(validateResult_, validateResult) };
    inline ValidateNormalizationRuleResponseBody& setValidateResult(vector<ValidateNormalizationRuleResponseBody::ValidateResult> && validateResult) { DARABONBA_PTR_SET_RVALUE(validateResult_, validateResult) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ValidateNormalizationRuleResponseBody::ValidateResult>> validateResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
