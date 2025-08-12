// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSMODIFICATIONPROTECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSMODIFICATIONPROTECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig() = default ;
    ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig(const ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig(ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig() = default ;
    ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig& operator=(const ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig& operator=(ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig &&) = default ;
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
    inline ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the configuration read-only mode was enabled. The time is displayed in UTC in `yyyy-MM-ddTHH:mm:ssZ` format.
    std::shared_ptr<string> enabledTime_ = nullptr;
    // The reason why the configuration read-only mode is enabled. The reason must be 2 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The reason must start with a letter.
    // 
    // This parameter takes effect only if **Status** is set to **ConsoleProtection**.
    std::shared_ptr<string> reason_ = nullptr;
    // Indicates whether the configuration read-only mode is enabled. Valid values:
    // 
    // *   **NonProtection**: disabled. In this case, **Reason** is not returned. If **Reason** is set, the value is cleared.
    // *   **ConsoleProtection**: enabled. In this case, **Reason** is returned.
    // 
    // >  If you set this parameter to **ConsoleProtection**, you cannot use the NLB console to modify instance configurations. However, you can call API operations to modify instance configurations.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
