// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCESUMMARYRESPONSEBODYCOMPLIANCESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCESUMMARYRESPONSEBODYCOMPLIANCESUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule.hpp>
#include <alibabacloud/models/GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateComplianceSummaryResponseBodyComplianceSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateComplianceSummaryResponseBodyComplianceSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceSummaryByConfigRule, complianceSummaryByConfigRule_);
      DARABONBA_PTR_TO_JSON(ComplianceSummaryByResource, complianceSummaryByResource_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateComplianceSummaryResponseBodyComplianceSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceSummaryByConfigRule, complianceSummaryByConfigRule_);
      DARABONBA_PTR_FROM_JSON(ComplianceSummaryByResource, complianceSummaryByResource_);
    };
    GetAggregateComplianceSummaryResponseBodyComplianceSummary() = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummary(const GetAggregateComplianceSummaryResponseBodyComplianceSummary &) = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummary(GetAggregateComplianceSummaryResponseBodyComplianceSummary &&) = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateComplianceSummaryResponseBodyComplianceSummary() = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummary& operator=(const GetAggregateComplianceSummaryResponseBodyComplianceSummary &) = default ;
    GetAggregateComplianceSummaryResponseBodyComplianceSummary& operator=(GetAggregateComplianceSummaryResponseBodyComplianceSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceSummaryByConfigRule_ == nullptr
        && return this->complianceSummaryByResource_ == nullptr; };
    // complianceSummaryByConfigRule Field Functions 
    bool hasComplianceSummaryByConfigRule() const { return this->complianceSummaryByConfigRule_ != nullptr;};
    void deleteComplianceSummaryByConfigRule() { this->complianceSummaryByConfigRule_ = nullptr;};
    inline const Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule & complianceSummaryByConfigRule() const { DARABONBA_PTR_GET_CONST(complianceSummaryByConfigRule_, Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule) };
    inline Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule complianceSummaryByConfigRule() { DARABONBA_PTR_GET(complianceSummaryByConfigRule_, Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummary& setComplianceSummaryByConfigRule(const Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule & complianceSummaryByConfigRule) { DARABONBA_PTR_SET_VALUE(complianceSummaryByConfigRule_, complianceSummaryByConfigRule) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummary& setComplianceSummaryByConfigRule(Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule && complianceSummaryByConfigRule) { DARABONBA_PTR_SET_RVALUE(complianceSummaryByConfigRule_, complianceSummaryByConfigRule) };


    // complianceSummaryByResource Field Functions 
    bool hasComplianceSummaryByResource() const { return this->complianceSummaryByResource_ != nullptr;};
    void deleteComplianceSummaryByResource() { this->complianceSummaryByResource_ = nullptr;};
    inline const Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource & complianceSummaryByResource() const { DARABONBA_PTR_GET_CONST(complianceSummaryByResource_, Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource) };
    inline Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource complianceSummaryByResource() { DARABONBA_PTR_GET(complianceSummaryByResource_, Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummary& setComplianceSummaryByResource(const Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource & complianceSummaryByResource) { DARABONBA_PTR_SET_VALUE(complianceSummaryByResource_, complianceSummaryByResource) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummary& setComplianceSummaryByResource(Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource && complianceSummaryByResource) { DARABONBA_PTR_SET_RVALUE(complianceSummaryByResource_, complianceSummaryByResource) };


  protected:
    // The summary of compliance statistics from the rule dimension.
    std::shared_ptr<Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule> complianceSummaryByConfigRule_ = nullptr;
    // The summary of compliance statistics from the resource dimension.
    std::shared_ptr<Models::GetAggregateComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource> complianceSummaryByResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
