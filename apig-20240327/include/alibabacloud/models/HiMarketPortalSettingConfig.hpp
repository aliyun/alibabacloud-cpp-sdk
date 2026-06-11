// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETPORTALSETTINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETPORTALSETTINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketPortalSettingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketPortalSettingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(autoApproveDevelopers, autoApproveDevelopers_);
      DARABONBA_PTR_TO_JSON(autoApproveSubscriptions, autoApproveSubscriptions_);
      DARABONBA_PTR_TO_JSON(builtinAuthEnabled, builtinAuthEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketPortalSettingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(autoApproveDevelopers, autoApproveDevelopers_);
      DARABONBA_PTR_FROM_JSON(autoApproveSubscriptions, autoApproveSubscriptions_);
      DARABONBA_PTR_FROM_JSON(builtinAuthEnabled, builtinAuthEnabled_);
    };
    HiMarketPortalSettingConfig() = default ;
    HiMarketPortalSettingConfig(const HiMarketPortalSettingConfig &) = default ;
    HiMarketPortalSettingConfig(HiMarketPortalSettingConfig &&) = default ;
    HiMarketPortalSettingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketPortalSettingConfig() = default ;
    HiMarketPortalSettingConfig& operator=(const HiMarketPortalSettingConfig &) = default ;
    HiMarketPortalSettingConfig& operator=(HiMarketPortalSettingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoApproveDevelopers_ == nullptr
        && this->autoApproveSubscriptions_ == nullptr && this->builtinAuthEnabled_ == nullptr; };
    // autoApproveDevelopers Field Functions 
    bool hasAutoApproveDevelopers() const { return this->autoApproveDevelopers_ != nullptr;};
    void deleteAutoApproveDevelopers() { this->autoApproveDevelopers_ = nullptr;};
    inline bool getAutoApproveDevelopers() const { DARABONBA_PTR_GET_DEFAULT(autoApproveDevelopers_, false) };
    inline HiMarketPortalSettingConfig& setAutoApproveDevelopers(bool autoApproveDevelopers) { DARABONBA_PTR_SET_VALUE(autoApproveDevelopers_, autoApproveDevelopers) };


    // autoApproveSubscriptions Field Functions 
    bool hasAutoApproveSubscriptions() const { return this->autoApproveSubscriptions_ != nullptr;};
    void deleteAutoApproveSubscriptions() { this->autoApproveSubscriptions_ = nullptr;};
    inline bool getAutoApproveSubscriptions() const { DARABONBA_PTR_GET_DEFAULT(autoApproveSubscriptions_, false) };
    inline HiMarketPortalSettingConfig& setAutoApproveSubscriptions(bool autoApproveSubscriptions) { DARABONBA_PTR_SET_VALUE(autoApproveSubscriptions_, autoApproveSubscriptions) };


    // builtinAuthEnabled Field Functions 
    bool hasBuiltinAuthEnabled() const { return this->builtinAuthEnabled_ != nullptr;};
    void deleteBuiltinAuthEnabled() { this->builtinAuthEnabled_ = nullptr;};
    inline bool getBuiltinAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(builtinAuthEnabled_, false) };
    inline HiMarketPortalSettingConfig& setBuiltinAuthEnabled(bool builtinAuthEnabled) { DARABONBA_PTR_SET_VALUE(builtinAuthEnabled_, builtinAuthEnabled) };


  protected:
    // Specifies whether to automatically approve new developer registrations. If set to `false`, you must manually approve each new developer.\\
    // \\
    // **Default**: `false`.\\
    // \\
    shared_ptr<bool> autoApproveDevelopers_ {};
    // Specifies whether to automatically approve new API subscriptions. If set to `false`, you must manually approve each new subscription.\\
    // \\
    // **Default**: `false`.\\
    // \\
    shared_ptr<bool> autoApproveSubscriptions_ {};
    // Specifies whether to enable built-in authentication. If set to `true`, users must sign in to access the portal.\\
    // \\
    // **Default**: `false`.\\
    // \\
    shared_ptr<bool> builtinAuthEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
