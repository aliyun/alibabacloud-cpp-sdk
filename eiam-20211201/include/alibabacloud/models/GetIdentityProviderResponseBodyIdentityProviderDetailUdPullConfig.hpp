// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILUDPULLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILUDPULLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfigUdSyncScopeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig& obj) { 
      DARABONBA_PTR_TO_JSON(GroupSyncStatus, groupSyncStatus_);
      DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_TO_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupSyncStatus, groupSyncStatus_);
      DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_FROM_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig(const GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig(GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig& operator=(GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupSyncStatus_ != nullptr
        && this->incrementalCallbackStatus_ != nullptr && this->udSyncScopeConfig_ != nullptr; };
    // groupSyncStatus Field Functions 
    bool hasGroupSyncStatus() const { return this->groupSyncStatus_ != nullptr;};
    void deleteGroupSyncStatus() { this->groupSyncStatus_ = nullptr;};
    inline string groupSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(groupSyncStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig& setGroupSyncStatus(string groupSyncStatus) { DARABONBA_PTR_SET_VALUE(groupSyncStatus_, groupSyncStatus) };


    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string incrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // udSyncScopeConfig Field Functions 
    bool hasUdSyncScopeConfig() const { return this->udSyncScopeConfig_ != nullptr;};
    void deleteUdSyncScopeConfig() { this->udSyncScopeConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfigUdSyncScopeConfig & udSyncScopeConfig() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfigUdSyncScopeConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfigUdSyncScopeConfig udSyncScopeConfig() { DARABONBA_PTR_GET(udSyncScopeConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfigUdSyncScopeConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig& setUdSyncScopeConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfigUdSyncScopeConfig & udSyncScopeConfig) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfig_, udSyncScopeConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfig& setUdSyncScopeConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfigUdSyncScopeConfig && udSyncScopeConfig) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfig_, udSyncScopeConfig) };


  protected:
    // Whether to enable group synchronization. Possible values:
    // 
    // Disabled: disabled
    // 
    // Enabled: enabled
    std::shared_ptr<string> groupSyncStatus_ = nullptr;
    // Incremental callback status: Whether to process incremental callback data from the IdP.
    std::shared_ptr<string> incrementalCallbackStatus_ = nullptr;
    // Inbound synchronization configuration Information.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPullConfigUdSyncScopeConfig> udSyncScopeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
