// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTUDPUSHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTUDPUSHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestUdPushConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestUdPushConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_TO_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestUdPushConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_FROM_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
    };
    CreateIdentityProviderRequestUdPushConfig() = default ;
    CreateIdentityProviderRequestUdPushConfig(const CreateIdentityProviderRequestUdPushConfig &) = default ;
    CreateIdentityProviderRequestUdPushConfig(CreateIdentityProviderRequestUdPushConfig &&) = default ;
    CreateIdentityProviderRequestUdPushConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestUdPushConfig() = default ;
    CreateIdentityProviderRequestUdPushConfig& operator=(const CreateIdentityProviderRequestUdPushConfig &) = default ;
    CreateIdentityProviderRequestUdPushConfig& operator=(CreateIdentityProviderRequestUdPushConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->incrementalCallbackStatus_ != nullptr
        && this->periodicSyncStatus_ != nullptr && this->udSyncScopeConfigs_ != nullptr; };
    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string incrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline CreateIdentityProviderRequestUdPushConfig& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // periodicSyncStatus Field Functions 
    bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
    void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
    inline string periodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
    inline CreateIdentityProviderRequestUdPushConfig& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


    // udSyncScopeConfigs Field Functions 
    bool hasUdSyncScopeConfigs() const { return this->udSyncScopeConfigs_ != nullptr;};
    void deleteUdSyncScopeConfigs() { this->udSyncScopeConfigs_ = nullptr;};
    inline const vector<Models::CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs> & udSyncScopeConfigs() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfigs_, vector<Models::CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs>) };
    inline vector<Models::CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs> udSyncScopeConfigs() { DARABONBA_PTR_GET(udSyncScopeConfigs_, vector<Models::CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs>) };
    inline CreateIdentityProviderRequestUdPushConfig& setUdSyncScopeConfigs(const vector<Models::CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs> & udSyncScopeConfigs) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };
    inline CreateIdentityProviderRequestUdPushConfig& setUdSyncScopeConfigs(vector<Models::CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs> && udSyncScopeConfigs) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };


  protected:
    // Incremental callback status. This field is reserved and currently not in use; please ignore it.
    std::shared_ptr<string> incrementalCallbackStatus_ = nullptr;
    // Periodic check status. This field is currently not in use, please ignore it.
    std::shared_ptr<string> periodicSyncStatus_ = nullptr;
    // Outbound synchronization configuration information.
    std::shared_ptr<vector<Models::CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs>> udSyncScopeConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
