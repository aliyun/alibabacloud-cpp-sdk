// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERADDONSREQUEST_HPP_
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
  class UpgradeClusterAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    UpgradeClusterAddonsRequest() = default ;
    UpgradeClusterAddonsRequest(const UpgradeClusterAddonsRequest &) = default ;
    UpgradeClusterAddonsRequest(UpgradeClusterAddonsRequest &&) = default ;
    UpgradeClusterAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterAddonsRequest() = default ;
    UpgradeClusterAddonsRequest& operator=(const UpgradeClusterAddonsRequest &) = default ;
    UpgradeClusterAddonsRequest& operator=(UpgradeClusterAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addons& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigSchema, configSchema_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NextVersion, nextVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Addons& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigSchema, configSchema_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NextVersion, nextVersion_);
      };
      Addons() = default ;
      Addons(const Addons &) = default ;
      Addons(Addons &&) = default ;
      Addons(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addons() = default ;
      Addons& operator=(const Addons &) = default ;
      Addons& operator=(Addons &&) = default ;
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
        && this->name_ == nullptr && this->nextVersion_ == nullptr; };
      // configSchema Field Functions 
      bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
      void deleteConfigSchema() { this->configSchema_ = nullptr;};
      inline const vector<Addons::ConfigSchema> & getConfigSchema() const { DARABONBA_PTR_GET_CONST(configSchema_, vector<Addons::ConfigSchema>) };
      inline vector<Addons::ConfigSchema> getConfigSchema() { DARABONBA_PTR_GET(configSchema_, vector<Addons::ConfigSchema>) };
      inline Addons& setConfigSchema(const vector<Addons::ConfigSchema> & configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };
      inline Addons& setConfigSchema(vector<Addons::ConfigSchema> && configSchema) { DARABONBA_PTR_SET_RVALUE(configSchema_, configSchema) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nextVersion Field Functions 
      bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
      void deleteNextVersion() { this->nextVersion_ = nullptr;};
      inline string getNextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
      inline Addons& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    protected:
      shared_ptr<vector<Addons::ConfigSchema>> configSchema_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nextVersion_ {};
    };

    virtual bool empty() const override { return this->addons_ == nullptr
        && this->clusterId_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<UpgradeClusterAddonsRequest::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<UpgradeClusterAddonsRequest::Addons>) };
    inline vector<UpgradeClusterAddonsRequest::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<UpgradeClusterAddonsRequest::Addons>) };
    inline UpgradeClusterAddonsRequest& setAddons(const vector<UpgradeClusterAddonsRequest::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline UpgradeClusterAddonsRequest& setAddons(vector<UpgradeClusterAddonsRequest::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpgradeClusterAddonsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    shared_ptr<vector<UpgradeClusterAddonsRequest::Addons>> addons_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
