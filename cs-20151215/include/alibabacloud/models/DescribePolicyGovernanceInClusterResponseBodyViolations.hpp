// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolationsDeny.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyViolations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyViolations& obj) { 
      DARABONBA_PTR_TO_JSON(deny, deny_);
      DARABONBA_PTR_TO_JSON(warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyViolations& obj) { 
      DARABONBA_PTR_FROM_JSON(deny, deny_);
      DARABONBA_PTR_FROM_JSON(warn, warn_);
    };
    DescribePolicyGovernanceInClusterResponseBodyViolations() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolations(const DescribePolicyGovernanceInClusterResponseBodyViolations &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolations(DescribePolicyGovernanceInClusterResponseBodyViolations &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyViolations() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolations& operator=(const DescribePolicyGovernanceInClusterResponseBodyViolations &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolations& operator=(DescribePolicyGovernanceInClusterResponseBodyViolations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deny_ != nullptr
        && this->warn_ != nullptr; };
    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline const Models::DescribePolicyGovernanceInClusterResponseBodyViolationsDeny & deny() const { DARABONBA_PTR_GET_CONST(deny_, Models::DescribePolicyGovernanceInClusterResponseBodyViolationsDeny) };
    inline Models::DescribePolicyGovernanceInClusterResponseBodyViolationsDeny deny() { DARABONBA_PTR_GET(deny_, Models::DescribePolicyGovernanceInClusterResponseBodyViolationsDeny) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolations& setDeny(const Models::DescribePolicyGovernanceInClusterResponseBodyViolationsDeny & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolations& setDeny(Models::DescribePolicyGovernanceInClusterResponseBodyViolationsDeny && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::DescribePolicyGovernanceInClusterResponseBodyViolationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::DescribePolicyGovernanceInClusterResponseBodyViolationsWarn) };
    inline Models::DescribePolicyGovernanceInClusterResponseBodyViolationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::DescribePolicyGovernanceInClusterResponseBodyViolationsWarn) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolations& setWarn(const Models::DescribePolicyGovernanceInClusterResponseBodyViolationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolations& setWarn(Models::DescribePolicyGovernanceInClusterResponseBodyViolationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    // Details about the blocking events that are triggered by each policy.
    std::shared_ptr<Models::DescribePolicyGovernanceInClusterResponseBodyViolationsDeny> deny_ = nullptr;
    // Details about the alerting events that are triggered by the policies of each severity level.
    std::shared_ptr<Models::DescribePolicyGovernanceInClusterResponseBodyViolationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
