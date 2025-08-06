// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTUDPUSHCONFIGUDSYNCSCOPECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTUDPUSHCONFIGUDSYNCSCOPECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(SourceScopes, sourceScopes_);
      DARABONBA_PTR_TO_JSON(TargetScope, targetScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceScopes, sourceScopes_);
      DARABONBA_PTR_FROM_JSON(TargetScope, targetScope_);
    };
    CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs() = default ;
    CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs(const CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs &) = default ;
    CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs(CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs &&) = default ;
    CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs() = default ;
    CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs& operator=(const CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs &) = default ;
    CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs& operator=(CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceScopes_ != nullptr
        && this->targetScope_ != nullptr; };
    // sourceScopes Field Functions 
    bool hasSourceScopes() const { return this->sourceScopes_ != nullptr;};
    void deleteSourceScopes() { this->sourceScopes_ = nullptr;};
    inline const vector<string> & sourceScopes() const { DARABONBA_PTR_GET_CONST(sourceScopes_, vector<string>) };
    inline vector<string> sourceScopes() { DARABONBA_PTR_GET(sourceScopes_, vector<string>) };
    inline CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs& setSourceScopes(const vector<string> & sourceScopes) { DARABONBA_PTR_SET_VALUE(sourceScopes_, sourceScopes) };
    inline CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs& setSourceScopes(vector<string> && sourceScopes) { DARABONBA_PTR_SET_RVALUE(sourceScopes_, sourceScopes) };


    // targetScope Field Functions 
    bool hasTargetScope() const { return this->targetScope_ != nullptr;};
    void deleteTargetScope() { this->targetScope_ = nullptr;};
    inline string targetScope() const { DARABONBA_PTR_GET_DEFAULT(targetScope_, "") };
    inline CreateIdentityProviderRequestUdPushConfigUdSyncScopeConfigs& setTargetScope(string targetScope) { DARABONBA_PTR_SET_VALUE(targetScope_, targetScope) };


  protected:
    // List of source nodes for synchronization.
    std::shared_ptr<vector<string>> sourceScopes_ = nullptr;
    // Target node for synchronization.
    std::shared_ptr<string> targetScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
