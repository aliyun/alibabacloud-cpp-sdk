// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYTOTALVIOLATIONSDENY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYTOTALVIOLATIONSDENY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny& obj) { 
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(violations, violations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny& obj) { 
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(violations, violations_);
    };
    DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny() = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny(const DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny(DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny() = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny& operator=(const DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny& operator=(DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->severity_ != nullptr
        && this->violations_ != nullptr; };
    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // violations Field Functions 
    bool hasViolations() const { return this->violations_ != nullptr;};
    void deleteViolations() { this->violations_ = nullptr;};
    inline int64_t violations() const { DARABONBA_PTR_GET_DEFAULT(violations_, 0L) };
    inline DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny& setViolations(int64_t violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };


  protected:
    // The severity level of the policy.
    std::shared_ptr<string> severity_ = nullptr;
    // The number of blocking events that are triggered.
    std::shared_ptr<int64_t> violations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
