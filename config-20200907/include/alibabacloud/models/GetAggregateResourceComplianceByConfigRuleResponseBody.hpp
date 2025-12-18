// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEBYCONFIGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceByConfigRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceByConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceByConfigRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateResourceComplianceByConfigRuleResponseBody() = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody(const GetAggregateResourceComplianceByConfigRuleResponseBody &) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody(GetAggregateResourceComplianceByConfigRuleResponseBody &&) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceByConfigRuleResponseBody() = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody& operator=(const GetAggregateResourceComplianceByConfigRuleResponseBody &) = default ;
    GetAggregateResourceComplianceByConfigRuleResponseBody& operator=(GetAggregateResourceComplianceByConfigRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // complianceResult Field Functions 
    bool hasComplianceResult() const { return this->complianceResult_ != nullptr;};
    void deleteComplianceResult() { this->complianceResult_ = nullptr;};
    inline const GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult & complianceResult() const { DARABONBA_PTR_GET_CONST(complianceResult_, GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult complianceResult() { DARABONBA_PTR_GET(complianceResult_, GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBody& setComplianceResult(const GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult & complianceResult) { DARABONBA_PTR_SET_VALUE(complianceResult_, complianceResult) };
    inline GetAggregateResourceComplianceByConfigRuleResponseBody& setComplianceResult(GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult && complianceResult) { DARABONBA_PTR_SET_RVALUE(complianceResult_, complianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceComplianceByConfigRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance result.
    std::shared_ptr<GetAggregateResourceComplianceByConfigRuleResponseBodyComplianceResult> complianceResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
