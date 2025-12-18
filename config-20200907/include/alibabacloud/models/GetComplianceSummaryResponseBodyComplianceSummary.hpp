// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCESUMMARYRESPONSEBODYCOMPLIANCESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCESUMMARYRESPONSEBODYCOMPLIANCESUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule.hpp>
#include <alibabacloud/models/GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetComplianceSummaryResponseBodyComplianceSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComplianceSummaryResponseBodyComplianceSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceSummaryByConfigRule, complianceSummaryByConfigRule_);
      DARABONBA_PTR_TO_JSON(ComplianceSummaryByResource, complianceSummaryByResource_);
    };
    friend void from_json(const Darabonba::Json& j, GetComplianceSummaryResponseBodyComplianceSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceSummaryByConfigRule, complianceSummaryByConfigRule_);
      DARABONBA_PTR_FROM_JSON(ComplianceSummaryByResource, complianceSummaryByResource_);
    };
    GetComplianceSummaryResponseBodyComplianceSummary() = default ;
    GetComplianceSummaryResponseBodyComplianceSummary(const GetComplianceSummaryResponseBodyComplianceSummary &) = default ;
    GetComplianceSummaryResponseBodyComplianceSummary(GetComplianceSummaryResponseBodyComplianceSummary &&) = default ;
    GetComplianceSummaryResponseBodyComplianceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComplianceSummaryResponseBodyComplianceSummary() = default ;
    GetComplianceSummaryResponseBodyComplianceSummary& operator=(const GetComplianceSummaryResponseBodyComplianceSummary &) = default ;
    GetComplianceSummaryResponseBodyComplianceSummary& operator=(GetComplianceSummaryResponseBodyComplianceSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceSummaryByConfigRule_ == nullptr
        && return this->complianceSummaryByResource_ == nullptr; };
    // complianceSummaryByConfigRule Field Functions 
    bool hasComplianceSummaryByConfigRule() const { return this->complianceSummaryByConfigRule_ != nullptr;};
    void deleteComplianceSummaryByConfigRule() { this->complianceSummaryByConfigRule_ = nullptr;};
    inline const Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule & complianceSummaryByConfigRule() const { DARABONBA_PTR_GET_CONST(complianceSummaryByConfigRule_, Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule) };
    inline Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule complianceSummaryByConfigRule() { DARABONBA_PTR_GET(complianceSummaryByConfigRule_, Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule) };
    inline GetComplianceSummaryResponseBodyComplianceSummary& setComplianceSummaryByConfigRule(const Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule & complianceSummaryByConfigRule) { DARABONBA_PTR_SET_VALUE(complianceSummaryByConfigRule_, complianceSummaryByConfigRule) };
    inline GetComplianceSummaryResponseBodyComplianceSummary& setComplianceSummaryByConfigRule(Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule && complianceSummaryByConfigRule) { DARABONBA_PTR_SET_RVALUE(complianceSummaryByConfigRule_, complianceSummaryByConfigRule) };


    // complianceSummaryByResource Field Functions 
    bool hasComplianceSummaryByResource() const { return this->complianceSummaryByResource_ != nullptr;};
    void deleteComplianceSummaryByResource() { this->complianceSummaryByResource_ = nullptr;};
    inline const Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource & complianceSummaryByResource() const { DARABONBA_PTR_GET_CONST(complianceSummaryByResource_, Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource) };
    inline Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource complianceSummaryByResource() { DARABONBA_PTR_GET(complianceSummaryByResource_, Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource) };
    inline GetComplianceSummaryResponseBodyComplianceSummary& setComplianceSummaryByResource(const Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource & complianceSummaryByResource) { DARABONBA_PTR_SET_VALUE(complianceSummaryByResource_, complianceSummaryByResource) };
    inline GetComplianceSummaryResponseBodyComplianceSummary& setComplianceSummaryByResource(Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource && complianceSummaryByResource) { DARABONBA_PTR_SET_RVALUE(complianceSummaryByResource_, complianceSummaryByResource) };


  protected:
    // The summary of compliance statistics from the rule dimension.
    std::shared_ptr<Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByConfigRule> complianceSummaryByConfigRule_ = nullptr;
    // The summary of compliance statistics from the resource dimension.
    std::shared_ptr<Models::GetComplianceSummaryResponseBodyComplianceSummaryComplianceSummaryByResource> complianceSummaryByResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
