// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTUDPULLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTUDPULLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestUdPullConfigPeriodicSyncConfig.hpp>
#include <alibabacloud/models/CreateIdentityProviderRequestUdPullConfigUdSyncScopeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestUdPullConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestUdPullConfig& obj) { 
      DARABONBA_PTR_TO_JSON(GroupSyncStatus, groupSyncStatus_);
      DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncConfig, periodicSyncConfig_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_TO_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestUdPullConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupSyncStatus, groupSyncStatus_);
      DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncConfig, periodicSyncConfig_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_FROM_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
    };
    CreateIdentityProviderRequestUdPullConfig() = default ;
    CreateIdentityProviderRequestUdPullConfig(const CreateIdentityProviderRequestUdPullConfig &) = default ;
    CreateIdentityProviderRequestUdPullConfig(CreateIdentityProviderRequestUdPullConfig &&) = default ;
    CreateIdentityProviderRequestUdPullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestUdPullConfig() = default ;
    CreateIdentityProviderRequestUdPullConfig& operator=(const CreateIdentityProviderRequestUdPullConfig &) = default ;
    CreateIdentityProviderRequestUdPullConfig& operator=(CreateIdentityProviderRequestUdPullConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupSyncStatus_ == nullptr
        && return this->incrementalCallbackStatus_ == nullptr && return this->periodicSyncConfig_ == nullptr && return this->periodicSyncStatus_ == nullptr && return this->udSyncScopeConfig_ == nullptr; };
    // groupSyncStatus Field Functions 
    bool hasGroupSyncStatus() const { return this->groupSyncStatus_ != nullptr;};
    void deleteGroupSyncStatus() { this->groupSyncStatus_ = nullptr;};
    inline string groupSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(groupSyncStatus_, "") };
    inline CreateIdentityProviderRequestUdPullConfig& setGroupSyncStatus(string groupSyncStatus) { DARABONBA_PTR_SET_VALUE(groupSyncStatus_, groupSyncStatus) };


    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string incrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline CreateIdentityProviderRequestUdPullConfig& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // periodicSyncConfig Field Functions 
    bool hasPeriodicSyncConfig() const { return this->periodicSyncConfig_ != nullptr;};
    void deletePeriodicSyncConfig() { this->periodicSyncConfig_ = nullptr;};
    inline const Models::CreateIdentityProviderRequestUdPullConfigPeriodicSyncConfig & periodicSyncConfig() const { DARABONBA_PTR_GET_CONST(periodicSyncConfig_, Models::CreateIdentityProviderRequestUdPullConfigPeriodicSyncConfig) };
    inline Models::CreateIdentityProviderRequestUdPullConfigPeriodicSyncConfig periodicSyncConfig() { DARABONBA_PTR_GET(periodicSyncConfig_, Models::CreateIdentityProviderRequestUdPullConfigPeriodicSyncConfig) };
    inline CreateIdentityProviderRequestUdPullConfig& setPeriodicSyncConfig(const Models::CreateIdentityProviderRequestUdPullConfigPeriodicSyncConfig & periodicSyncConfig) { DARABONBA_PTR_SET_VALUE(periodicSyncConfig_, periodicSyncConfig) };
    inline CreateIdentityProviderRequestUdPullConfig& setPeriodicSyncConfig(Models::CreateIdentityProviderRequestUdPullConfigPeriodicSyncConfig && periodicSyncConfig) { DARABONBA_PTR_SET_RVALUE(periodicSyncConfig_, periodicSyncConfig) };


    // periodicSyncStatus Field Functions 
    bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
    void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
    inline string periodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
    inline CreateIdentityProviderRequestUdPullConfig& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


    // udSyncScopeConfig Field Functions 
    bool hasUdSyncScopeConfig() const { return this->udSyncScopeConfig_ != nullptr;};
    void deleteUdSyncScopeConfig() { this->udSyncScopeConfig_ = nullptr;};
    inline const Models::CreateIdentityProviderRequestUdPullConfigUdSyncScopeConfig & udSyncScopeConfig() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfig_, Models::CreateIdentityProviderRequestUdPullConfigUdSyncScopeConfig) };
    inline Models::CreateIdentityProviderRequestUdPullConfigUdSyncScopeConfig udSyncScopeConfig() { DARABONBA_PTR_GET(udSyncScopeConfig_, Models::CreateIdentityProviderRequestUdPullConfigUdSyncScopeConfig) };
    inline CreateIdentityProviderRequestUdPullConfig& setUdSyncScopeConfig(const Models::CreateIdentityProviderRequestUdPullConfigUdSyncScopeConfig & udSyncScopeConfig) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfig_, udSyncScopeConfig) };
    inline CreateIdentityProviderRequestUdPullConfig& setUdSyncScopeConfig(Models::CreateIdentityProviderRequestUdPullConfigUdSyncScopeConfig && udSyncScopeConfig) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfig_, udSyncScopeConfig) };


  protected:
    // Whether group synchronization is supported. The default value is disabled. Possible values:
    // 
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> groupSyncStatus_ = nullptr;
    // Incremental callback status, indicating whether to process incremental callback data from the IdP. Possible values:
    // 
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> incrementalCallbackStatus_ = nullptr;
    // Scheduled configuration verification.
    std::shared_ptr<Models::CreateIdentityProviderRequestUdPullConfigPeriodicSyncConfig> periodicSyncConfig_ = nullptr;
    // Periodic check status, indicating whether to periodically check the data differences between EIAM and the identity provider. Possible values:
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> periodicSyncStatus_ = nullptr;
    // Synchronization scope configuration information.
    std::shared_ptr<Models::CreateIdentityProviderRequestUdPullConfigUdSyncScopeConfig> udSyncScopeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
