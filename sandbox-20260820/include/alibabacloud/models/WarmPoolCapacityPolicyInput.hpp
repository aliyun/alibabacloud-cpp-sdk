// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WARMPOOLCAPACITYPOLICYINPUT_HPP_
#define ALIBABACLOUD_MODELS_WARMPOOLCAPACITYPOLICYINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WarmPoolScheduledPolicyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class WarmPoolCapacityPolicyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WarmPoolCapacityPolicyInput& obj) { 
      DARABONBA_PTR_TO_JSON(minReadySandboxes, minReadySandboxes_);
      DARABONBA_PTR_TO_JSON(scheduledPolicies, scheduledPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, WarmPoolCapacityPolicyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(minReadySandboxes, minReadySandboxes_);
      DARABONBA_PTR_FROM_JSON(scheduledPolicies, scheduledPolicies_);
    };
    WarmPoolCapacityPolicyInput() = default ;
    WarmPoolCapacityPolicyInput(const WarmPoolCapacityPolicyInput &) = default ;
    WarmPoolCapacityPolicyInput(WarmPoolCapacityPolicyInput &&) = default ;
    WarmPoolCapacityPolicyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WarmPoolCapacityPolicyInput() = default ;
    WarmPoolCapacityPolicyInput& operator=(const WarmPoolCapacityPolicyInput &) = default ;
    WarmPoolCapacityPolicyInput& operator=(WarmPoolCapacityPolicyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minReadySandboxes_ == nullptr
        && this->scheduledPolicies_ == nullptr; };
    // minReadySandboxes Field Functions 
    bool hasMinReadySandboxes() const { return this->minReadySandboxes_ != nullptr;};
    void deleteMinReadySandboxes() { this->minReadySandboxes_ = nullptr;};
    inline int64_t getMinReadySandboxes() const { DARABONBA_PTR_GET_DEFAULT(minReadySandboxes_, 0L) };
    inline WarmPoolCapacityPolicyInput& setMinReadySandboxes(int64_t minReadySandboxes) { DARABONBA_PTR_SET_VALUE(minReadySandboxes_, minReadySandboxes) };


    // scheduledPolicies Field Functions 
    bool hasScheduledPolicies() const { return this->scheduledPolicies_ != nullptr;};
    void deleteScheduledPolicies() { this->scheduledPolicies_ = nullptr;};
    inline const vector<WarmPoolScheduledPolicyInput> & getScheduledPolicies() const { DARABONBA_PTR_GET_CONST(scheduledPolicies_, vector<WarmPoolScheduledPolicyInput>) };
    inline vector<WarmPoolScheduledPolicyInput> getScheduledPolicies() { DARABONBA_PTR_GET(scheduledPolicies_, vector<WarmPoolScheduledPolicyInput>) };
    inline WarmPoolCapacityPolicyInput& setScheduledPolicies(const vector<WarmPoolScheduledPolicyInput> & scheduledPolicies) { DARABONBA_PTR_SET_VALUE(scheduledPolicies_, scheduledPolicies) };
    inline WarmPoolCapacityPolicyInput& setScheduledPolicies(vector<WarmPoolScheduledPolicyInput> && scheduledPolicies) { DARABONBA_PTR_SET_RVALUE(scheduledPolicies_, scheduledPolicies) };


  protected:
    // The base target number of ready sandboxes, which is required and can be set to 0.
    // 
    // This parameter is required.
    shared_ptr<int64_t> minReadySandboxes_ {};
    // The list of scheduled capacity rules, which is optional.
    shared_ptr<vector<WarmPoolScheduledPolicyInput>> scheduledPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
