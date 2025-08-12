// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYMODIFICATIONPROTECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYMODIFICATIONPROTECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBodyModificationProtectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig() = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig(const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig &) = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig(GetLoadBalancerAttributeResponseBodyModificationProtectionConfig &&) = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerAttributeResponseBodyModificationProtectionConfig() = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& operator=(const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig &) = default ;
    GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& operator=(GetLoadBalancerAttributeResponseBodyModificationProtectionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabledTime_ != nullptr
        && this->reason_ != nullptr && this->status_ != nullptr; };
    // enabledTime Field Functions 
    bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
    void deleteEnabledTime() { this->enabledTime_ = nullptr;};
    inline string enabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
    inline GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLoadBalancerAttributeResponseBodyModificationProtectionConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the modification protection feature was enabled. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> enabledTime_ = nullptr;
    // The reason why the configuration read-only mode is enabled. The value must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The value must start with a letter.
    // 
    // >  This parameter takes effect only if the **Status** parameter is set to **ConsoleProtection**.
    std::shared_ptr<string> reason_ = nullptr;
    // Specifies whether to enable the configuration read-only mode. Valid values:
    // 
    // *   **NonProtection**: does not enable the configuration read-only mode. You cannot set the **Reason** parameter. If the **Reason** parameter is set, the value is cleared.
    // *   **ConsoleProtection**: enables the configuration read-only mode. You can set the **Reason** parameter.
    // 
    // >  If you set this parameter to **ConsoleProtection**, you cannot use the NLB console to modify instance configurations. However, you can call API operations to modify instance configurations.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
