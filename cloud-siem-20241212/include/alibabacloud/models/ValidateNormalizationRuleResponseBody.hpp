// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATENORMALIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATENORMALIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValidateNormalizationRuleResponseBodyValidateResult.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->validateResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateNormalizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // validateResult Field Functions 
    bool hasValidateResult() const { return this->validateResult_ != nullptr;};
    void deleteValidateResult() { this->validateResult_ = nullptr;};
    inline const vector<ValidateNormalizationRuleResponseBodyValidateResult> & validateResult() const { DARABONBA_PTR_GET_CONST(validateResult_, vector<ValidateNormalizationRuleResponseBodyValidateResult>) };
    inline vector<ValidateNormalizationRuleResponseBodyValidateResult> validateResult() { DARABONBA_PTR_GET(validateResult_, vector<ValidateNormalizationRuleResponseBodyValidateResult>) };
    inline ValidateNormalizationRuleResponseBody& setValidateResult(const vector<ValidateNormalizationRuleResponseBodyValidateResult> & validateResult) { DARABONBA_PTR_SET_VALUE(validateResult_, validateResult) };
    inline ValidateNormalizationRuleResponseBody& setValidateResult(vector<ValidateNormalizationRuleResponseBodyValidateResult> && validateResult) { DARABONBA_PTR_SET_RVALUE(validateResult_, validateResult) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ValidateNormalizationRuleResponseBodyValidateResult>> validateResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
