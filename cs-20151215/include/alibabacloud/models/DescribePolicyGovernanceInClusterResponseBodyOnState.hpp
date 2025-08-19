// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYONSTATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYONSTATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyOnState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyOnState& obj) { 
      DARABONBA_PTR_TO_JSON(enabled_count, enabledCount_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyOnState& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled_count, enabledCount_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    DescribePolicyGovernanceInClusterResponseBodyOnState() = default ;
    DescribePolicyGovernanceInClusterResponseBodyOnState(const DescribePolicyGovernanceInClusterResponseBodyOnState &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyOnState(DescribePolicyGovernanceInClusterResponseBodyOnState &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyOnState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyOnState() = default ;
    DescribePolicyGovernanceInClusterResponseBodyOnState& operator=(const DescribePolicyGovernanceInClusterResponseBodyOnState &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyOnState& operator=(DescribePolicyGovernanceInClusterResponseBodyOnState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabledCount_ != nullptr
        && this->severity_ != nullptr && this->total_ != nullptr; };
    // enabledCount Field Functions 
    bool hasEnabledCount() const { return this->enabledCount_ != nullptr;};
    void deleteEnabledCount() { this->enabledCount_ = nullptr;};
    inline int32_t enabledCount() const { DARABONBA_PTR_GET_DEFAULT(enabledCount_, 0) };
    inline DescribePolicyGovernanceInClusterResponseBodyOnState& setEnabledCount(int32_t enabledCount) { DARABONBA_PTR_SET_VALUE(enabledCount_, enabledCount) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyOnState& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribePolicyGovernanceInClusterResponseBodyOnState& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The number of policies that are enabled.
    std::shared_ptr<int32_t> enabledCount_ = nullptr;
    // The severity level of the policy.
    std::shared_ptr<string> severity_ = nullptr;
    // The total number of policies of the severity level.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
