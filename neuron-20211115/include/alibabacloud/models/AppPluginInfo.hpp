// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPPLUGININFO_HPP_
#define ALIBABACLOUD_MODELS_APPPLUGININFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MobiPluginConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AppPluginInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppPluginInfo& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(appVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(appVersionId, appVersionId_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(pluginKey, pluginKey_);
      DARABONBA_PTR_TO_JSON(pluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AppPluginInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(appVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(appVersionId, appVersionId_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(pluginKey, pluginKey_);
      DARABONBA_PTR_FROM_JSON(pluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AppPluginInfo() = default ;
    AppPluginInfo(const AppPluginInfo &) = default ;
    AppPluginInfo(AppPluginInfo &&) = default ;
    AppPluginInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppPluginInfo() = default ;
    AppPluginInfo& operator=(const AppPluginInfo &) = default ;
    AppPluginInfo& operator=(AppPluginInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersion_ == nullptr && this->appVersionId_ == nullptr && this->config_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->pluginKey_ == nullptr && this->pluginType_ == nullptr && this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline AppPluginInfo& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline AppPluginInfo& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // appVersionId Field Functions 
    bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
    void deleteAppVersionId() { this->appVersionId_ = nullptr;};
    inline int64_t getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, 0L) };
    inline AppPluginInfo& setAppVersionId(int64_t appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const MobiPluginConfig & getConfig() const { DARABONBA_PTR_GET_CONST(config_, MobiPluginConfig) };
    inline MobiPluginConfig getConfig() { DARABONBA_PTR_GET(config_, MobiPluginConfig) };
    inline AppPluginInfo& setConfig(const MobiPluginConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline AppPluginInfo& setConfig(MobiPluginConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AppPluginInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AppPluginInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AppPluginInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pluginKey Field Functions 
    bool hasPluginKey() const { return this->pluginKey_ != nullptr;};
    void deletePluginKey() { this->pluginKey_ = nullptr;};
    inline string getPluginKey() const { DARABONBA_PTR_GET_DEFAULT(pluginKey_, "") };
    inline AppPluginInfo& setPluginKey(string pluginKey) { DARABONBA_PTR_SET_VALUE(pluginKey_, pluginKey) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline AppPluginInfo& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AppPluginInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int64_t> appId_ {};
    shared_ptr<string> appVersion_ {};
    shared_ptr<int64_t> appVersionId_ {};
    shared_ptr<MobiPluginConfig> config_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> pluginKey_ {};
    shared_ptr<string> pluginType_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
