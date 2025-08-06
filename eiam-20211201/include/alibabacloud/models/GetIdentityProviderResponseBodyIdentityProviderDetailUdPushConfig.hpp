// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILUDPUSHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILUDPUSHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfigUdSyncScopeConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_TO_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_FROM_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig(const GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig(GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig& operator=(GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->incrementalCallbackStatus_ != nullptr
        && this->udSyncScopeConfigs_ != nullptr; };
    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string incrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // udSyncScopeConfigs Field Functions 
    bool hasUdSyncScopeConfigs() const { return this->udSyncScopeConfigs_ != nullptr;};
    void deleteUdSyncScopeConfigs() { this->udSyncScopeConfigs_ = nullptr;};
    inline const vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfigUdSyncScopeConfigs> & udSyncScopeConfigs() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfigs_, vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfigUdSyncScopeConfigs>) };
    inline vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfigUdSyncScopeConfigs> udSyncScopeConfigs() { DARABONBA_PTR_GET(udSyncScopeConfigs_, vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfigUdSyncScopeConfigs>) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig& setUdSyncScopeConfigs(const vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfigUdSyncScopeConfigs> & udSyncScopeConfigs) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfig& setUdSyncScopeConfigs(vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfigUdSyncScopeConfigs> && udSyncScopeConfigs) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };


  protected:
    // Incremental callback status: Whether to process incremental callback data from the IdP.
    std::shared_ptr<string> incrementalCallbackStatus_ = nullptr;
    // Outbound synchronization configuration Information.
    std::shared_ptr<vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailUdPushConfigUdSyncScopeConfigs>> udSyncScopeConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
