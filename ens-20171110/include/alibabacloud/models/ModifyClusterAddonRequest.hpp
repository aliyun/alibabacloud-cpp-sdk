// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERADDONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERADDONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyClusterAddonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterAddonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addon, addon_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterAddonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addon, addon_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
    };
    ModifyClusterAddonRequest() = default ;
    ModifyClusterAddonRequest(const ModifyClusterAddonRequest &) = default ;
    ModifyClusterAddonRequest(ModifyClusterAddonRequest &&) = default ;
    ModifyClusterAddonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterAddonRequest() = default ;
    ModifyClusterAddonRequest& operator=(const ModifyClusterAddonRequest &) = default ;
    ModifyClusterAddonRequest& operator=(ModifyClusterAddonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addon : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addon& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigSchema, configSchema_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Addon& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigSchema, configSchema_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Addon() = default ;
      Addon(const Addon &) = default ;
      Addon(Addon &&) = default ;
      Addon(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addon() = default ;
      Addon& operator=(const Addon &) = default ;
      Addon& operator=(Addon &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigSchema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigSchema& obj) { 
          DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_TO_JSON(ConfigVersion, configVersion_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_ANY_TO_JSON(Params, params_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigSchema& obj) { 
          DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_FROM_JSON(ConfigVersion, configVersion_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_ANY_FROM_JSON(Params, params_);
        };
        ConfigSchema() = default ;
        ConfigSchema(const ConfigSchema &) = default ;
        ConfigSchema(ConfigSchema &&) = default ;
        ConfigSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigSchema() = default ;
        ConfigSchema& operator=(const ConfigSchema &) = default ;
        ConfigSchema& operator=(ConfigSchema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appVersion_ == nullptr
        && this->configVersion_ == nullptr && this->name_ == nullptr && this->params_ == nullptr; };
        // appVersion Field Functions 
        bool hasAppVersion() const { return this->appVersion_ != nullptr;};
        void deleteAppVersion() { this->appVersion_ = nullptr;};
        inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
        inline ConfigSchema& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


        // configVersion Field Functions 
        bool hasConfigVersion() const { return this->configVersion_ != nullptr;};
        void deleteConfigVersion() { this->configVersion_ = nullptr;};
        inline string getConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(configVersion_, "") };
        inline ConfigSchema& setConfigVersion(string configVersion) { DARABONBA_PTR_SET_VALUE(configVersion_, configVersion) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ConfigSchema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // params Field Functions 
        bool hasParams() const { return this->params_ != nullptr;};
        void deleteParams() { this->params_ = nullptr;};
        inline         const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
        Darabonba::Json & getParams() { DARABONBA_GET(params_) };
        inline ConfigSchema& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
        inline ConfigSchema& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


      protected:
        shared_ptr<string> appVersion_ {};
        shared_ptr<string> configVersion_ {};
        shared_ptr<string> name_ {};
        Darabonba::Json params_ {};
      };

      virtual bool empty() const override { return this->configSchema_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // configSchema Field Functions 
      bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
      void deleteConfigSchema() { this->configSchema_ = nullptr;};
      inline const vector<Addon::ConfigSchema> & getConfigSchema() const { DARABONBA_PTR_GET_CONST(configSchema_, vector<Addon::ConfigSchema>) };
      inline vector<Addon::ConfigSchema> getConfigSchema() { DARABONBA_PTR_GET(configSchema_, vector<Addon::ConfigSchema>) };
      inline Addon& setConfigSchema(const vector<Addon::ConfigSchema> & configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };
      inline Addon& setConfigSchema(vector<Addon::ConfigSchema> && configSchema) { DARABONBA_PTR_SET_RVALUE(configSchema_, configSchema) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addon& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Addon& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<Addon::ConfigSchema>> configSchema_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->addon_ == nullptr
        && this->clusterId_ == nullptr && this->componentName_ == nullptr; };
    // addon Field Functions 
    bool hasAddon() const { return this->addon_ != nullptr;};
    void deleteAddon() { this->addon_ = nullptr;};
    inline const ModifyClusterAddonRequest::Addon & getAddon() const { DARABONBA_PTR_GET_CONST(addon_, ModifyClusterAddonRequest::Addon) };
    inline ModifyClusterAddonRequest::Addon getAddon() { DARABONBA_PTR_GET(addon_, ModifyClusterAddonRequest::Addon) };
    inline ModifyClusterAddonRequest& setAddon(const ModifyClusterAddonRequest::Addon & addon) { DARABONBA_PTR_SET_VALUE(addon_, addon) };
    inline ModifyClusterAddonRequest& setAddon(ModifyClusterAddonRequest::Addon && addon) { DARABONBA_PTR_SET_RVALUE(addon_, addon) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyClusterAddonRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ModifyClusterAddonRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


  protected:
    shared_ptr<ModifyClusterAddonRequest::Addon> addon_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> componentName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
