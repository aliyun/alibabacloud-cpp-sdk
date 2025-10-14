// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNormalizationRuleResponseBodyNormalizationRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetNormalizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationRule, normalizationRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNormalizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationRule, normalizationRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNormalizationRuleResponseBody() = default ;
    GetNormalizationRuleResponseBody(const GetNormalizationRuleResponseBody &) = default ;
    GetNormalizationRuleResponseBody(GetNormalizationRuleResponseBody &&) = default ;
    GetNormalizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalizationRuleResponseBody() = default ;
    GetNormalizationRuleResponseBody& operator=(const GetNormalizationRuleResponseBody &) = default ;
    GetNormalizationRuleResponseBody& operator=(GetNormalizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationRule_ == nullptr
        && return this->requestId_ == nullptr; };
    // normalizationRule Field Functions 
    bool hasNormalizationRule() const { return this->normalizationRule_ != nullptr;};
    void deleteNormalizationRule() { this->normalizationRule_ = nullptr;};
    inline const GetNormalizationRuleResponseBodyNormalizationRule & normalizationRule() const { DARABONBA_PTR_GET_CONST(normalizationRule_, GetNormalizationRuleResponseBodyNormalizationRule) };
    inline GetNormalizationRuleResponseBodyNormalizationRule normalizationRule() { DARABONBA_PTR_GET(normalizationRule_, GetNormalizationRuleResponseBodyNormalizationRule) };
    inline GetNormalizationRuleResponseBody& setNormalizationRule(const GetNormalizationRuleResponseBodyNormalizationRule & normalizationRule) { DARABONBA_PTR_SET_VALUE(normalizationRule_, normalizationRule) };
    inline GetNormalizationRuleResponseBody& setNormalizationRule(GetNormalizationRuleResponseBodyNormalizationRule && normalizationRule) { DARABONBA_PTR_SET_RVALUE(normalizationRule_, normalizationRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNormalizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetNormalizationRuleResponseBodyNormalizationRule> normalizationRule_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
