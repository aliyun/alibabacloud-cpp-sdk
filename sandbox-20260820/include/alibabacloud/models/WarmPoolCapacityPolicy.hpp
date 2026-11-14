// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WARMPOOLCAPACITYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_WARMPOOLCAPACITYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WarmPoolScheduledPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class WarmPoolCapacityPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WarmPoolCapacityPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(minReadySandboxes, minReadySandboxes_);
      DARABONBA_PTR_TO_JSON(scheduledPolicies, scheduledPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, WarmPoolCapacityPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(minReadySandboxes, minReadySandboxes_);
      DARABONBA_PTR_FROM_JSON(scheduledPolicies, scheduledPolicies_);
    };
    WarmPoolCapacityPolicy() = default ;
    WarmPoolCapacityPolicy(const WarmPoolCapacityPolicy &) = default ;
    WarmPoolCapacityPolicy(WarmPoolCapacityPolicy &&) = default ;
    WarmPoolCapacityPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WarmPoolCapacityPolicy() = default ;
    WarmPoolCapacityPolicy& operator=(const WarmPoolCapacityPolicy &) = default ;
    WarmPoolCapacityPolicy& operator=(WarmPoolCapacityPolicy &&) = default ;
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
    inline WarmPoolCapacityPolicy& setMinReadySandboxes(int64_t minReadySandboxes) { DARABONBA_PTR_SET_VALUE(minReadySandboxes_, minReadySandboxes) };


    // scheduledPolicies Field Functions 
    bool hasScheduledPolicies() const { return this->scheduledPolicies_ != nullptr;};
    void deleteScheduledPolicies() { this->scheduledPolicies_ = nullptr;};
    inline const vector<WarmPoolScheduledPolicy> & getScheduledPolicies() const { DARABONBA_PTR_GET_CONST(scheduledPolicies_, vector<WarmPoolScheduledPolicy>) };
    inline vector<WarmPoolScheduledPolicy> getScheduledPolicies() { DARABONBA_PTR_GET(scheduledPolicies_, vector<WarmPoolScheduledPolicy>) };
    inline WarmPoolCapacityPolicy& setScheduledPolicies(const vector<WarmPoolScheduledPolicy> & scheduledPolicies) { DARABONBA_PTR_SET_VALUE(scheduledPolicies_, scheduledPolicies) };
    inline WarmPoolCapacityPolicy& setScheduledPolicies(vector<WarmPoolScheduledPolicy> && scheduledPolicies) { DARABONBA_PTR_SET_RVALUE(scheduledPolicies_, scheduledPolicies) };


  protected:
    // The base target number of ready sandboxes. This parameter is required and can be set to 0.
    shared_ptr<int64_t> minReadySandboxes_ {};
    // The list of scheduled capacity rules. This parameter is optional.
    shared_ptr<vector<WarmPoolScheduledPolicy>> scheduledPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
