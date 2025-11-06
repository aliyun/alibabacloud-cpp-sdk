// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODYLISTMAPPCENTERAPPRESULTMAPPCENTERAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODYLISTMAPPCENTERAPPRESULTMAPPCENTERAPPLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig.hpp>
#include <alibabacloud/models/ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidConfig, androidConfig_);
      DARABONBA_PTR_TO_JSON(AppDesc, appDesc_);
      DARABONBA_PTR_TO_JSON(AppIcon, appIcon_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IosConfig, iosConfig_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(MonitorJson, monitorJson_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidConfig, androidConfig_);
      DARABONBA_PTR_FROM_JSON(AppDesc, appDesc_);
      DARABONBA_PTR_FROM_JSON(AppIcon, appIcon_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IosConfig, iosConfig_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(MonitorJson, monitorJson_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList() = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList(const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList &) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList(ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList &&) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList() = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& operator=(const ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList &) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& operator=(ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidConfig_ == nullptr
        && return this->appDesc_ == nullptr && return this->appIcon_ == nullptr && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->appSecret_ == nullptr
        && return this->creator_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->iosConfig_ == nullptr
        && return this->modifier_ == nullptr && return this->monitorJson_ == nullptr && return this->status_ == nullptr && return this->tenantId_ == nullptr && return this->type_ == nullptr; };
    // androidConfig Field Functions 
    bool hasAndroidConfig() const { return this->androidConfig_ != nullptr;};
    void deleteAndroidConfig() { this->androidConfig_ = nullptr;};
    inline const Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig & androidConfig() const { DARABONBA_PTR_GET_CONST(androidConfig_, Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig) };
    inline Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig androidConfig() { DARABONBA_PTR_GET(androidConfig_, Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setAndroidConfig(const Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig & androidConfig) { DARABONBA_PTR_SET_VALUE(androidConfig_, androidConfig) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setAndroidConfig(Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig && androidConfig) { DARABONBA_PTR_SET_RVALUE(androidConfig_, androidConfig) };


    // appDesc Field Functions 
    bool hasAppDesc() const { return this->appDesc_ != nullptr;};
    void deleteAppDesc() { this->appDesc_ = nullptr;};
    inline string appDesc() const { DARABONBA_PTR_GET_DEFAULT(appDesc_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setAppDesc(string appDesc) { DARABONBA_PTR_SET_VALUE(appDesc_, appDesc) };


    // appIcon Field Functions 
    bool hasAppIcon() const { return this->appIcon_ != nullptr;};
    void deleteAppIcon() { this->appIcon_ = nullptr;};
    inline string appIcon() const { DARABONBA_PTR_GET_DEFAULT(appIcon_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setAppIcon(string appIcon) { DARABONBA_PTR_SET_VALUE(appIcon_, appIcon) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // iosConfig Field Functions 
    bool hasIosConfig() const { return this->iosConfig_ != nullptr;};
    void deleteIosConfig() { this->iosConfig_ = nullptr;};
    inline const Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig & iosConfig() const { DARABONBA_PTR_GET_CONST(iosConfig_, Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig) };
    inline Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig iosConfig() { DARABONBA_PTR_GET(iosConfig_, Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setIosConfig(const Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig & iosConfig) { DARABONBA_PTR_SET_VALUE(iosConfig_, iosConfig) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setIosConfig(Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig && iosConfig) { DARABONBA_PTR_SET_RVALUE(iosConfig_, iosConfig) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // monitorJson Field Functions 
    bool hasMonitorJson() const { return this->monitorJson_ != nullptr;};
    void deleteMonitorJson() { this->monitorJson_ = nullptr;};
    inline string monitorJson() const { DARABONBA_PTR_GET_DEFAULT(monitorJson_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setMonitorJson(string monitorJson) { DARABONBA_PTR_SET_VALUE(monitorJson_, monitorJson) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListAndroidConfig> androidConfig_ = nullptr;
    std::shared_ptr<string> appDesc_ = nullptr;
    std::shared_ptr<string> appIcon_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appSecret_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppListIosConfig> iosConfig_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> monitorJson_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<int64_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
