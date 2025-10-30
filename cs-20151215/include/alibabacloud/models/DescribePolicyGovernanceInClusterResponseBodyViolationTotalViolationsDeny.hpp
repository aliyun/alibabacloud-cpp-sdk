// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONTOTALVIOLATIONSDENY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONTOTALVIOLATIONSDENY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny& obj) { 
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(violations, violations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny& obj) { 
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(violations, violations_);
    };
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny(const DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny(DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny& operator=(const DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny& operator=(DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->severity_ == nullptr
        && return this->violations_ == nullptr; };
    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // violations Field Functions 
    bool hasViolations() const { return this->violations_ != nullptr;};
    void deleteViolations() { this->violations_ = nullptr;};
    inline string violations() const { DARABONBA_PTR_GET_DEFAULT(violations_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny& setViolations(string violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };


  protected:
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<string> violations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
