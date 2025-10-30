// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolationViolations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyViolation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyViolation& obj) { 
      DARABONBA_PTR_TO_JSON(totalViolations, totalViolations_);
      DARABONBA_PTR_TO_JSON(violations, violations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyViolation& obj) { 
      DARABONBA_PTR_FROM_JSON(totalViolations, totalViolations_);
      DARABONBA_PTR_FROM_JSON(violations, violations_);
    };
    DescribePolicyGovernanceInClusterResponseBodyViolation() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolation(const DescribePolicyGovernanceInClusterResponseBodyViolation &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolation(DescribePolicyGovernanceInClusterResponseBodyViolation &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyViolation() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolation& operator=(const DescribePolicyGovernanceInClusterResponseBodyViolation &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolation& operator=(DescribePolicyGovernanceInClusterResponseBodyViolation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalViolations_ == nullptr
        && return this->violations_ == nullptr; };
    // totalViolations Field Functions 
    bool hasTotalViolations() const { return this->totalViolations_ != nullptr;};
    void deleteTotalViolations() { this->totalViolations_ = nullptr;};
    inline const Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations & totalViolations() const { DARABONBA_PTR_GET_CONST(totalViolations_, Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations) };
    inline Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations totalViolations() { DARABONBA_PTR_GET(totalViolations_, Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolation& setTotalViolations(const Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations & totalViolations) { DARABONBA_PTR_SET_VALUE(totalViolations_, totalViolations) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolation& setTotalViolations(Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations && totalViolations) { DARABONBA_PTR_SET_RVALUE(totalViolations_, totalViolations) };


    // violations Field Functions 
    bool hasViolations() const { return this->violations_ != nullptr;};
    void deleteViolations() { this->violations_ = nullptr;};
    inline const Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolations & violations() const { DARABONBA_PTR_GET_CONST(violations_, Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolations) };
    inline Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolations violations() { DARABONBA_PTR_GET(violations_, Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolations) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolation& setViolations(const Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolations & violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolation& setViolations(Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolations && violations) { DARABONBA_PTR_SET_RVALUE(violations_, violations) };


  protected:
    std::shared_ptr<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations> totalViolations_ = nullptr;
    std::shared_ptr<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolations> violations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
