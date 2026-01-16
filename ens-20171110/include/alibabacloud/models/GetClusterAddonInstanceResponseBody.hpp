// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERADDONINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERADDONINSTANCERESPONSEBODY_HPP_
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
  class GetClusterAddonInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterAddonInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CleanupCloudResources, cleanupCloudResources_);
      DARABONBA_PTR_TO_JSON(ConfigSchema, configSchema_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterAddonInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CleanupCloudResources, cleanupCloudResources_);
      DARABONBA_PTR_FROM_JSON(ConfigSchema, configSchema_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetClusterAddonInstanceResponseBody() = default ;
    GetClusterAddonInstanceResponseBody(const GetClusterAddonInstanceResponseBody &) = default ;
    GetClusterAddonInstanceResponseBody(GetClusterAddonInstanceResponseBody &&) = default ;
    GetClusterAddonInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterAddonInstanceResponseBody() = default ;
    GetClusterAddonInstanceResponseBody& operator=(const GetClusterAddonInstanceResponseBody &) = default ;
    GetClusterAddonInstanceResponseBody& operator=(GetClusterAddonInstanceResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Params, params_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigSchema& obj) { 
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(ConfigVersion, configVersion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
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
      inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
      inline ConfigSchema& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    protected:
      shared_ptr<string> appVersion_ {};
      shared_ptr<string> configVersion_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> params_ {};
    };

    virtual bool empty() const override { return this->cleanupCloudResources_ == nullptr
        && this->configSchema_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
    // cleanupCloudResources Field Functions 
    bool hasCleanupCloudResources() const { return this->cleanupCloudResources_ != nullptr;};
    void deleteCleanupCloudResources() { this->cleanupCloudResources_ = nullptr;};
    inline bool getCleanupCloudResources() const { DARABONBA_PTR_GET_DEFAULT(cleanupCloudResources_, false) };
    inline GetClusterAddonInstanceResponseBody& setCleanupCloudResources(bool cleanupCloudResources) { DARABONBA_PTR_SET_VALUE(cleanupCloudResources_, cleanupCloudResources) };


    // configSchema Field Functions 
    bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
    void deleteConfigSchema() { this->configSchema_ = nullptr;};
    inline const vector<GetClusterAddonInstanceResponseBody::ConfigSchema> & getConfigSchema() const { DARABONBA_PTR_GET_CONST(configSchema_, vector<GetClusterAddonInstanceResponseBody::ConfigSchema>) };
    inline vector<GetClusterAddonInstanceResponseBody::ConfigSchema> getConfigSchema() { DARABONBA_PTR_GET(configSchema_, vector<GetClusterAddonInstanceResponseBody::ConfigSchema>) };
    inline GetClusterAddonInstanceResponseBody& setConfigSchema(const vector<GetClusterAddonInstanceResponseBody::ConfigSchema> & configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };
    inline GetClusterAddonInstanceResponseBody& setConfigSchema(vector<GetClusterAddonInstanceResponseBody::ConfigSchema> && configSchema) { DARABONBA_PTR_SET_RVALUE(configSchema_, configSchema) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetClusterAddonInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterAddonInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClusterAddonInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetClusterAddonInstanceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<bool> cleanupCloudResources_ {};
    shared_ptr<vector<GetClusterAddonInstanceResponseBody::ConfigSchema>> configSchema_ {};
    shared_ptr<string> name_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
