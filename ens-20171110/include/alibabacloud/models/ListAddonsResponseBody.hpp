// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODY_HPP_
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
  class ListAddonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAddonsResponseBody() = default ;
    ListAddonsResponseBody(const ListAddonsResponseBody &) = default ;
    ListAddonsResponseBody(ListAddonsResponseBody &&) = default ;
    ListAddonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsResponseBody() = default ;
    ListAddonsResponseBody& operator=(const ListAddonsResponseBody &) = default ;
    ListAddonsResponseBody& operator=(ListAddonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addons& obj) { 
        DARABONBA_PTR_TO_JSON(CleanupCloudResources, cleanupCloudResources_);
        DARABONBA_PTR_TO_JSON(ConfigSchema, configSchema_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Addons& obj) { 
        DARABONBA_PTR_FROM_JSON(CleanupCloudResources, cleanupCloudResources_);
        DARABONBA_PTR_FROM_JSON(ConfigSchema, configSchema_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
        // The application version.
        shared_ptr<string> appVersion_ {};
        // The version of the configuration file.
        shared_ptr<string> configVersion_ {};
        // The component name.
        shared_ptr<string> name_ {};
        // The custom configurations of the component.
        Darabonba::Json params_ {};
      };

      virtual bool empty() const override { return this->cleanupCloudResources_ == nullptr
        && this->configSchema_ == nullptr && this->name_ == nullptr && this->version_ == nullptr; };
      // cleanupCloudResources Field Functions 
      bool hasCleanupCloudResources() const { return this->cleanupCloudResources_ != nullptr;};
      void deleteCleanupCloudResources() { this->cleanupCloudResources_ = nullptr;};
      inline bool getCleanupCloudResources() const { DARABONBA_PTR_GET_DEFAULT(cleanupCloudResources_, false) };
      inline Addons& setCleanupCloudResources(bool cleanupCloudResources) { DARABONBA_PTR_SET_VALUE(cleanupCloudResources_, cleanupCloudResources) };


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


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Addons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Specifies whether to clear resources.
      shared_ptr<bool> cleanupCloudResources_ {};
      // The schema of the custom parameters of the component.
      shared_ptr<vector<Addons::ConfigSchema>> configSchema_ {};
      // The component name.
      shared_ptr<string> name_ {};
      // The component version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->addons_ == nullptr
        && this->requestId_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<ListAddonsResponseBody::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<ListAddonsResponseBody::Addons>) };
    inline vector<ListAddonsResponseBody::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<ListAddonsResponseBody::Addons>) };
    inline ListAddonsResponseBody& setAddons(const vector<ListAddonsResponseBody::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListAddonsResponseBody& setAddons(vector<ListAddonsResponseBody::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAddonsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of component information.
    shared_ptr<vector<ListAddonsResponseBody::Addons>> addons_ {};
    // Id of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
