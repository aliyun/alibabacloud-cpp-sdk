// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYDELETIONPROTECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYDELETIONPROTECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig() = default ;
    GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig(const GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig &) = default ;
    GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig(GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig &&) = default ;
    GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig() = default ;
    GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig& operator=(const GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig &) = default ;
    GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig& operator=(GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->enabledTime_ != nullptr && this->reason_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // enabledTime Field Functions 
    bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
    void deleteEnabledTime() { this->enabledTime_ = nullptr;};
    inline string enabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
    inline GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // Specifies whether to enable deletion protection. Valid values:
    // 
    // *   **true**: yes
    // *   **false** (default): no
    std::shared_ptr<bool> enabled_ = nullptr;
    // The time when the deletion protection feature was enabled. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> enabledTime_ = nullptr;
    // The reason why the deletion protection feature is enabled or disabled. The value must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The value must start with a letter.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
