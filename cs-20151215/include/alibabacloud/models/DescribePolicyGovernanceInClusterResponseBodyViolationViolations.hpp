// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONVIOLATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONVIOLATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolationViolationsDeny.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolationViolationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyViolationViolations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyViolationViolations& obj) { 
      DARABONBA_PTR_TO_JSON(deny, deny_);
      DARABONBA_PTR_TO_JSON(warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyViolationViolations& obj) { 
      DARABONBA_PTR_FROM_JSON(deny, deny_);
      DARABONBA_PTR_FROM_JSON(warn, warn_);
    };
    DescribePolicyGovernanceInClusterResponseBodyViolationViolations() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationViolations(const DescribePolicyGovernanceInClusterResponseBodyViolationViolations &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationViolations(DescribePolicyGovernanceInClusterResponseBodyViolationViolations &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationViolations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyViolationViolations() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationViolations& operator=(const DescribePolicyGovernanceInClusterResponseBodyViolationViolations &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationViolations& operator=(DescribePolicyGovernanceInClusterResponseBodyViolationViolations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deny_ == nullptr
        && return this->warn_ == nullptr; };
    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline const vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsDeny> & deny() const { DARABONBA_PTR_GET_CONST(deny_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsDeny>) };
    inline vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsDeny> deny() { DARABONBA_PTR_GET(deny_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsDeny>) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationViolations& setDeny(const vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsDeny> & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationViolations& setDeny(vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsDeny> && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsWarn> & warn() const { DARABONBA_PTR_GET_CONST(warn_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsWarn>) };
    inline vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsWarn> warn() { DARABONBA_PTR_GET(warn_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsWarn>) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationViolations& setWarn(const vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsWarn> & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationViolations& setWarn(vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsWarn> && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsDeny>> deny_ = nullptr;
    std::shared_ptr<vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationViolationsWarn>> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
