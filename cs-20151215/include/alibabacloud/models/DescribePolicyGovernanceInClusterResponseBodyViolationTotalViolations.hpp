// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONTOTALVIOLATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYVIOLATIONTOTALVIOLATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny.hpp>
#include <alibabacloud/models/DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations& obj) { 
      DARABONBA_PTR_TO_JSON(deny, deny_);
      DARABONBA_PTR_TO_JSON(warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations& obj) { 
      DARABONBA_PTR_FROM_JSON(deny, deny_);
      DARABONBA_PTR_FROM_JSON(warn, warn_);
    };
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations(const DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations(DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations() = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations& operator=(const DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations& operator=(DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deny_ == nullptr
        && return this->warn_ == nullptr; };
    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline const vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny> & deny() const { DARABONBA_PTR_GET_CONST(deny_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny>) };
    inline vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny> deny() { DARABONBA_PTR_GET(deny_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny>) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations& setDeny(const vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny> & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations& setDeny(vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny> && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsWarn> & warn() const { DARABONBA_PTR_GET_CONST(warn_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsWarn>) };
    inline vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsWarn> warn() { DARABONBA_PTR_GET(warn_, vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsWarn>) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations& setWarn(const vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsWarn> & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolations& setWarn(vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsWarn> && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsDeny>> deny_ = nullptr;
    std::shared_ptr<vector<Models::DescribePolicyGovernanceInClusterResponseBodyViolationTotalViolationsWarn>> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
