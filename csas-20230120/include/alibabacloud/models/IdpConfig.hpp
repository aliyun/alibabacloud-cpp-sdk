// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IdpAttrMapConfig.hpp>
#include <alibabacloud/models/IdpConnectConfig.hpp>
#include <alibabacloud/models/IdpDingtalkSubConfig.hpp>
#include <alibabacloud/models/IdpFeishuSubConfig.hpp>
#include <alibabacloud/models/IdpIdaas2SubConfig.hpp>
#include <alibabacloud/models/IdpLdapSubConfig.hpp>
#include <alibabacloud/models/IdpLoginConfig.hpp>
#include <alibabacloud/models/IdpSyncConfig.hpp>
#include <alibabacloud/models/IdpWeixin2SubConfig.hpp>
#include <alibabacloud/models/OpenStructIdpWuyingSubConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AttrMapConfig, attrMapConfig_);
      DARABONBA_PTR_TO_JSON(ConnectConfig, connectConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DingtalkConfig, dingtalkConfig_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FeishuConfig, feishuConfig_);
      DARABONBA_PTR_TO_JSON(IdaasConfig, idaasConfig_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(LastSyncTimeUnix, lastSyncTimeUnix_);
      DARABONBA_PTR_TO_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_TO_JSON(LoginConfig, loginConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SyncConfig, syncConfig_);
      DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WeixinConfig, weixinConfig_);
      DARABONBA_PTR_TO_JSON(WuyingConfig, wuyingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, IdpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AttrMapConfig, attrMapConfig_);
      DARABONBA_PTR_FROM_JSON(ConnectConfig, connectConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DingtalkConfig, dingtalkConfig_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FeishuConfig, feishuConfig_);
      DARABONBA_PTR_FROM_JSON(IdaasConfig, idaasConfig_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(LastSyncTimeUnix, lastSyncTimeUnix_);
      DARABONBA_PTR_FROM_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_FROM_JSON(LoginConfig, loginConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SyncConfig, syncConfig_);
      DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WeixinConfig, weixinConfig_);
      DARABONBA_PTR_FROM_JSON(WuyingConfig, wuyingConfig_);
    };
    IdpConfig() = default ;
    IdpConfig(const IdpConfig &) = default ;
    IdpConfig(IdpConfig &&) = default ;
    IdpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpConfig() = default ;
    IdpConfig& operator=(const IdpConfig &) = default ;
    IdpConfig& operator=(IdpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attrMapConfig_ != nullptr
        && this->connectConfig_ != nullptr && this->description_ != nullptr && this->dingtalkConfig_ != nullptr && this->enabled_ != nullptr && this->feishuConfig_ != nullptr
        && this->idaasConfig_ != nullptr && this->idpConfigId_ != nullptr && this->lastSyncTimeUnix_ != nullptr && this->ldapConfig_ != nullptr && this->loginConfig_ != nullptr
        && this->name_ != nullptr && this->syncConfig_ != nullptr && this->syncStatus_ != nullptr && this->type_ != nullptr && this->weixinConfig_ != nullptr
        && this->wuyingConfig_ != nullptr; };
    // attrMapConfig Field Functions 
    bool hasAttrMapConfig() const { return this->attrMapConfig_ != nullptr;};
    void deleteAttrMapConfig() { this->attrMapConfig_ = nullptr;};
    inline const IdpAttrMapConfig & attrMapConfig() const { DARABONBA_PTR_GET_CONST(attrMapConfig_, IdpAttrMapConfig) };
    inline IdpAttrMapConfig attrMapConfig() { DARABONBA_PTR_GET(attrMapConfig_, IdpAttrMapConfig) };
    inline IdpConfig& setAttrMapConfig(const IdpAttrMapConfig & attrMapConfig) { DARABONBA_PTR_SET_VALUE(attrMapConfig_, attrMapConfig) };
    inline IdpConfig& setAttrMapConfig(IdpAttrMapConfig && attrMapConfig) { DARABONBA_PTR_SET_RVALUE(attrMapConfig_, attrMapConfig) };


    // connectConfig Field Functions 
    bool hasConnectConfig() const { return this->connectConfig_ != nullptr;};
    void deleteConnectConfig() { this->connectConfig_ = nullptr;};
    inline const IdpConnectConfig & connectConfig() const { DARABONBA_PTR_GET_CONST(connectConfig_, IdpConnectConfig) };
    inline IdpConnectConfig connectConfig() { DARABONBA_PTR_GET(connectConfig_, IdpConnectConfig) };
    inline IdpConfig& setConnectConfig(const IdpConnectConfig & connectConfig) { DARABONBA_PTR_SET_VALUE(connectConfig_, connectConfig) };
    inline IdpConfig& setConnectConfig(IdpConnectConfig && connectConfig) { DARABONBA_PTR_SET_RVALUE(connectConfig_, connectConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IdpConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dingtalkConfig Field Functions 
    bool hasDingtalkConfig() const { return this->dingtalkConfig_ != nullptr;};
    void deleteDingtalkConfig() { this->dingtalkConfig_ = nullptr;};
    inline const IdpDingtalkSubConfig & dingtalkConfig() const { DARABONBA_PTR_GET_CONST(dingtalkConfig_, IdpDingtalkSubConfig) };
    inline IdpDingtalkSubConfig dingtalkConfig() { DARABONBA_PTR_GET(dingtalkConfig_, IdpDingtalkSubConfig) };
    inline IdpConfig& setDingtalkConfig(const IdpDingtalkSubConfig & dingtalkConfig) { DARABONBA_PTR_SET_VALUE(dingtalkConfig_, dingtalkConfig) };
    inline IdpConfig& setDingtalkConfig(IdpDingtalkSubConfig && dingtalkConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkConfig_, dingtalkConfig) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline IdpConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // feishuConfig Field Functions 
    bool hasFeishuConfig() const { return this->feishuConfig_ != nullptr;};
    void deleteFeishuConfig() { this->feishuConfig_ = nullptr;};
    inline const IdpFeishuSubConfig & feishuConfig() const { DARABONBA_PTR_GET_CONST(feishuConfig_, IdpFeishuSubConfig) };
    inline IdpFeishuSubConfig feishuConfig() { DARABONBA_PTR_GET(feishuConfig_, IdpFeishuSubConfig) };
    inline IdpConfig& setFeishuConfig(const IdpFeishuSubConfig & feishuConfig) { DARABONBA_PTR_SET_VALUE(feishuConfig_, feishuConfig) };
    inline IdpConfig& setFeishuConfig(IdpFeishuSubConfig && feishuConfig) { DARABONBA_PTR_SET_RVALUE(feishuConfig_, feishuConfig) };


    // idaasConfig Field Functions 
    bool hasIdaasConfig() const { return this->idaasConfig_ != nullptr;};
    void deleteIdaasConfig() { this->idaasConfig_ = nullptr;};
    inline const IdpIdaas2SubConfig & idaasConfig() const { DARABONBA_PTR_GET_CONST(idaasConfig_, IdpIdaas2SubConfig) };
    inline IdpIdaas2SubConfig idaasConfig() { DARABONBA_PTR_GET(idaasConfig_, IdpIdaas2SubConfig) };
    inline IdpConfig& setIdaasConfig(const IdpIdaas2SubConfig & idaasConfig) { DARABONBA_PTR_SET_VALUE(idaasConfig_, idaasConfig) };
    inline IdpConfig& setIdaasConfig(IdpIdaas2SubConfig && idaasConfig) { DARABONBA_PTR_SET_RVALUE(idaasConfig_, idaasConfig) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline IdpConfig& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // lastSyncTimeUnix Field Functions 
    bool hasLastSyncTimeUnix() const { return this->lastSyncTimeUnix_ != nullptr;};
    void deleteLastSyncTimeUnix() { this->lastSyncTimeUnix_ = nullptr;};
    inline int64_t lastSyncTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(lastSyncTimeUnix_, 0L) };
    inline IdpConfig& setLastSyncTimeUnix(int64_t lastSyncTimeUnix) { DARABONBA_PTR_SET_VALUE(lastSyncTimeUnix_, lastSyncTimeUnix) };


    // ldapConfig Field Functions 
    bool hasLdapConfig() const { return this->ldapConfig_ != nullptr;};
    void deleteLdapConfig() { this->ldapConfig_ = nullptr;};
    inline const IdpLdapSubConfig & ldapConfig() const { DARABONBA_PTR_GET_CONST(ldapConfig_, IdpLdapSubConfig) };
    inline IdpLdapSubConfig ldapConfig() { DARABONBA_PTR_GET(ldapConfig_, IdpLdapSubConfig) };
    inline IdpConfig& setLdapConfig(const IdpLdapSubConfig & ldapConfig) { DARABONBA_PTR_SET_VALUE(ldapConfig_, ldapConfig) };
    inline IdpConfig& setLdapConfig(IdpLdapSubConfig && ldapConfig) { DARABONBA_PTR_SET_RVALUE(ldapConfig_, ldapConfig) };


    // loginConfig Field Functions 
    bool hasLoginConfig() const { return this->loginConfig_ != nullptr;};
    void deleteLoginConfig() { this->loginConfig_ = nullptr;};
    inline const IdpLoginConfig & loginConfig() const { DARABONBA_PTR_GET_CONST(loginConfig_, IdpLoginConfig) };
    inline IdpLoginConfig loginConfig() { DARABONBA_PTR_GET(loginConfig_, IdpLoginConfig) };
    inline IdpConfig& setLoginConfig(const IdpLoginConfig & loginConfig) { DARABONBA_PTR_SET_VALUE(loginConfig_, loginConfig) };
    inline IdpConfig& setLoginConfig(IdpLoginConfig && loginConfig) { DARABONBA_PTR_SET_RVALUE(loginConfig_, loginConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IdpConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // syncConfig Field Functions 
    bool hasSyncConfig() const { return this->syncConfig_ != nullptr;};
    void deleteSyncConfig() { this->syncConfig_ = nullptr;};
    inline const IdpSyncConfig & syncConfig() const { DARABONBA_PTR_GET_CONST(syncConfig_, IdpSyncConfig) };
    inline IdpSyncConfig syncConfig() { DARABONBA_PTR_GET(syncConfig_, IdpSyncConfig) };
    inline IdpConfig& setSyncConfig(const IdpSyncConfig & syncConfig) { DARABONBA_PTR_SET_VALUE(syncConfig_, syncConfig) };
    inline IdpConfig& setSyncConfig(IdpSyncConfig && syncConfig) { DARABONBA_PTR_SET_RVALUE(syncConfig_, syncConfig) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline string syncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
    inline IdpConfig& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IdpConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weixinConfig Field Functions 
    bool hasWeixinConfig() const { return this->weixinConfig_ != nullptr;};
    void deleteWeixinConfig() { this->weixinConfig_ = nullptr;};
    inline const IdpWeixin2SubConfig & weixinConfig() const { DARABONBA_PTR_GET_CONST(weixinConfig_, IdpWeixin2SubConfig) };
    inline IdpWeixin2SubConfig weixinConfig() { DARABONBA_PTR_GET(weixinConfig_, IdpWeixin2SubConfig) };
    inline IdpConfig& setWeixinConfig(const IdpWeixin2SubConfig & weixinConfig) { DARABONBA_PTR_SET_VALUE(weixinConfig_, weixinConfig) };
    inline IdpConfig& setWeixinConfig(IdpWeixin2SubConfig && weixinConfig) { DARABONBA_PTR_SET_RVALUE(weixinConfig_, weixinConfig) };


    // wuyingConfig Field Functions 
    bool hasWuyingConfig() const { return this->wuyingConfig_ != nullptr;};
    void deleteWuyingConfig() { this->wuyingConfig_ = nullptr;};
    inline const OpenStructIdpWuyingSubConfig & wuyingConfig() const { DARABONBA_PTR_GET_CONST(wuyingConfig_, OpenStructIdpWuyingSubConfig) };
    inline OpenStructIdpWuyingSubConfig wuyingConfig() { DARABONBA_PTR_GET(wuyingConfig_, OpenStructIdpWuyingSubConfig) };
    inline IdpConfig& setWuyingConfig(const OpenStructIdpWuyingSubConfig & wuyingConfig) { DARABONBA_PTR_SET_VALUE(wuyingConfig_, wuyingConfig) };
    inline IdpConfig& setWuyingConfig(OpenStructIdpWuyingSubConfig && wuyingConfig) { DARABONBA_PTR_SET_RVALUE(wuyingConfig_, wuyingConfig) };


  protected:
    std::shared_ptr<IdpAttrMapConfig> attrMapConfig_ = nullptr;
    std::shared_ptr<IdpConnectConfig> connectConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<IdpDingtalkSubConfig> dingtalkConfig_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<IdpFeishuSubConfig> feishuConfig_ = nullptr;
    std::shared_ptr<IdpIdaas2SubConfig> idaasConfig_ = nullptr;
    std::shared_ptr<string> idpConfigId_ = nullptr;
    std::shared_ptr<int64_t> lastSyncTimeUnix_ = nullptr;
    std::shared_ptr<IdpLdapSubConfig> ldapConfig_ = nullptr;
    std::shared_ptr<IdpLoginConfig> loginConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<IdpSyncConfig> syncConfig_ = nullptr;
    std::shared_ptr<string> syncStatus_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<IdpWeixin2SubConfig> weixinConfig_ = nullptr;
    std::shared_ptr<OpenStructIdpWuyingSubConfig> wuyingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
