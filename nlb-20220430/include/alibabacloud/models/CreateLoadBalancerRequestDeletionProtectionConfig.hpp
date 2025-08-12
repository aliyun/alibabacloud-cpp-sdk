// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUESTDELETIONPROTECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUESTDELETIONPROTECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class CreateLoadBalancerRequestDeletionProtectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequestDeletionProtectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequestDeletionProtectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    CreateLoadBalancerRequestDeletionProtectionConfig() = default ;
    CreateLoadBalancerRequestDeletionProtectionConfig(const CreateLoadBalancerRequestDeletionProtectionConfig &) = default ;
    CreateLoadBalancerRequestDeletionProtectionConfig(CreateLoadBalancerRequestDeletionProtectionConfig &&) = default ;
    CreateLoadBalancerRequestDeletionProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequestDeletionProtectionConfig() = default ;
    CreateLoadBalancerRequestDeletionProtectionConfig& operator=(const CreateLoadBalancerRequestDeletionProtectionConfig &) = default ;
    CreateLoadBalancerRequestDeletionProtectionConfig& operator=(CreateLoadBalancerRequestDeletionProtectionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->reason_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateLoadBalancerRequestDeletionProtectionConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateLoadBalancerRequestDeletionProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // Specifies whether to enable the deletion protection feature. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enabled_ = nullptr;
    // The reason why the deletion protection feature is enabled or disabled. The reason must be 2 to 128 characters in length, can contain letters, digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
