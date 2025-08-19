// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONSWARN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONSWARN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyViolationsWarn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyViolationsWarn& obj) { 
      DARABONBA_PTR_TO_JSON(policyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(violations, violations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyViolationsWarn& obj) { 
      DARABONBA_PTR_FROM_JSON(policyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(violations, violations_);
    };
    DescribePolicyGovernanceInClusterResponseBodyViolationsWarn() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationsWarn(const DescribePolicyGovernanceInClusterResponseBodyViolationsWarn &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationsWarn(DescribePolicyGovernanceInClusterResponseBodyViolationsWarn &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationsWarn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyViolationsWarn() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationsWarn& operator=(const DescribePolicyGovernanceInClusterResponseBodyViolationsWarn &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationsWarn& operator=(DescribePolicyGovernanceInClusterResponseBodyViolationsWarn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyDescription_ != nullptr
        && this->policyName_ != nullptr && this->severity_ != nullptr && this->violations_ != nullptr; };
    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string policyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationsWarn& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationsWarn& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationsWarn& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // violations Field Functions 
    bool hasViolations() const { return this->violations_ != nullptr;};
    void deleteViolations() { this->violations_ = nullptr;};
    inline int64_t violations() const { DARABONBA_PTR_GET_DEFAULT(violations_, 0L) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationsWarn& setViolations(int64_t violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };


  protected:
    // The policy description.
    std::shared_ptr<string> policyDescription_ = nullptr;
    // The policy name.
    std::shared_ptr<string> policyName_ = nullptr;
    // The severity level of the policy.
    std::shared_ptr<string> severity_ = nullptr;
    // The total number of alerting events that are triggered by the policy.
    std::shared_ptr<int64_t> violations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
