// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSDELETIONPROTECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSDELETIONPROTECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
    };
    ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig() = default ;
    ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig(const ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig(ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig() = default ;
    ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig& operator=(const ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig& operator=(ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->enabledTime_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // enabledTime Field Functions 
    bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
    void deleteEnabledTime() { this->enabledTime_ = nullptr;};
    inline string enabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


  protected:
    // Indicates whether deletion protection is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enabled_ = nullptr;
    // The time when deletion protection is enabled.
    std::shared_ptr<string> enabledTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
