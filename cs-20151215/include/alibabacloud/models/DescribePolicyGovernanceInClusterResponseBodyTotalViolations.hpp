// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYTOTALVIOLATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYTOTALVIOLATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyTotalViolationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyTotalViolations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyTotalViolations& obj) { 
      DARABONBA_PTR_TO_JSON(deny, deny_);
      DARABONBA_PTR_TO_JSON(warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyTotalViolations& obj) { 
      DARABONBA_PTR_FROM_JSON(deny, deny_);
      DARABONBA_PTR_FROM_JSON(warn, warn_);
    };
    DescribePolicyGovernanceInClusterResponseBodyTotalViolations() = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolations(const DescribePolicyGovernanceInClusterResponseBodyTotalViolations &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolations(DescribePolicyGovernanceInClusterResponseBodyTotalViolations &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyTotalViolations() = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolations& operator=(const DescribePolicyGovernanceInClusterResponseBodyTotalViolations &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyTotalViolations& operator=(DescribePolicyGovernanceInClusterResponseBodyTotalViolations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deny_ != nullptr
        && this->warn_ != nullptr; };
    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline const Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny & deny() const { DARABONBA_PTR_GET_CONST(deny_, Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny) };
    inline Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny deny() { DARABONBA_PTR_GET(deny_, Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny) };
    inline DescribePolicyGovernanceInClusterResponseBodyTotalViolations& setDeny(const Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
    inline DescribePolicyGovernanceInClusterResponseBodyTotalViolations& setDeny(Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsWarn) };
    inline Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsWarn) };
    inline DescribePolicyGovernanceInClusterResponseBodyTotalViolations& setWarn(const Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline DescribePolicyGovernanceInClusterResponseBodyTotalViolations& setWarn(Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    // Details about the blocking events that are triggered by the policies of each severity level.
    std::shared_ptr<Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsDeny> deny_ = nullptr;
    // Details about the alerting events that are triggered by the policies of each severity level.
    std::shared_ptr<Models::DescribePolicyGovernanceInClusterResponseBodyTotalViolationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
