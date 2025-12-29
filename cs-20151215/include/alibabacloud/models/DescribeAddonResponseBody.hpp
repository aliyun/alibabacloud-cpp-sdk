// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeAddonResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(architecture, architecture_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(config_schema, configSchema_);
      DARABONBA_PTR_TO_JSON(install_by_default, installByDefault_);
      DARABONBA_PTR_TO_JSON(managed, managed_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(newer_versions, newerVersions_);
      DARABONBA_PTR_TO_JSON(supported_actions, supportedActions_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(config_schema, configSchema_);
      DARABONBA_PTR_FROM_JSON(install_by_default, installByDefault_);
      DARABONBA_PTR_FROM_JSON(managed, managed_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(newer_versions, newerVersions_);
      DARABONBA_PTR_FROM_JSON(supported_actions, supportedActions_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeAddonResponseBody() = default ;
    DescribeAddonResponseBody(const DescribeAddonResponseBody &) = default ;
    DescribeAddonResponseBody(DescribeAddonResponseBody &&) = default ;
    DescribeAddonResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonResponseBody() = default ;
    DescribeAddonResponseBody& operator=(const DescribeAddonResponseBody &) = default ;
    DescribeAddonResponseBody& operator=(DescribeAddonResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NewerVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NewerVersions& obj) { 
        DARABONBA_PTR_TO_JSON(minimum_cluster_version, minimumClusterVersion_);
        DARABONBA_PTR_TO_JSON(upgradable, upgradable_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, NewerVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(minimum_cluster_version, minimumClusterVersion_);
        DARABONBA_PTR_FROM_JSON(upgradable, upgradable_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      NewerVersions() = default ;
      NewerVersions(const NewerVersions &) = default ;
      NewerVersions(NewerVersions &&) = default ;
      NewerVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NewerVersions() = default ;
      NewerVersions& operator=(const NewerVersions &) = default ;
      NewerVersions& operator=(NewerVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->minimumClusterVersion_ == nullptr
        && this->upgradable_ == nullptr && this->version_ == nullptr; };
      // minimumClusterVersion Field Functions 
      bool hasMinimumClusterVersion() const { return this->minimumClusterVersion_ != nullptr;};
      void deleteMinimumClusterVersion() { this->minimumClusterVersion_ = nullptr;};
      inline string getMinimumClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(minimumClusterVersion_, "") };
      inline NewerVersions& setMinimumClusterVersion(string minimumClusterVersion) { DARABONBA_PTR_SET_VALUE(minimumClusterVersion_, minimumClusterVersion) };


      // upgradable Field Functions 
      bool hasUpgradable() const { return this->upgradable_ != nullptr;};
      void deleteUpgradable() { this->upgradable_ = nullptr;};
      inline bool getUpgradable() const { DARABONBA_PTR_GET_DEFAULT(upgradable_, false) };
      inline NewerVersions& setUpgradable(bool upgradable) { DARABONBA_PTR_SET_VALUE(upgradable_, upgradable) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline NewerVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The minimum cluster version required by the component version.
      shared_ptr<string> minimumClusterVersion_ {};
      // Indicates whether the component can be updated to the version.
      // 
      // *   true: yes
      // *   false: no
      shared_ptr<bool> upgradable_ {};
      // The latest version number of the component.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->architecture_ == nullptr
        && this->category_ == nullptr && this->configSchema_ == nullptr && this->installByDefault_ == nullptr && this->managed_ == nullptr && this->name_ == nullptr
        && this->newerVersions_ == nullptr && this->supportedActions_ == nullptr && this->version_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline const vector<string> & getArchitecture() const { DARABONBA_PTR_GET_CONST(architecture_, vector<string>) };
    inline vector<string> getArchitecture() { DARABONBA_PTR_GET(architecture_, vector<string>) };
    inline DescribeAddonResponseBody& setArchitecture(const vector<string> & architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };
    inline DescribeAddonResponseBody& setArchitecture(vector<string> && architecture) { DARABONBA_PTR_SET_RVALUE(architecture_, architecture) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAddonResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // configSchema Field Functions 
    bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
    void deleteConfigSchema() { this->configSchema_ = nullptr;};
    inline string getConfigSchema() const { DARABONBA_PTR_GET_DEFAULT(configSchema_, "") };
    inline DescribeAddonResponseBody& setConfigSchema(string configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };


    // installByDefault Field Functions 
    bool hasInstallByDefault() const { return this->installByDefault_ != nullptr;};
    void deleteInstallByDefault() { this->installByDefault_ = nullptr;};
    inline bool getInstallByDefault() const { DARABONBA_PTR_GET_DEFAULT(installByDefault_, false) };
    inline DescribeAddonResponseBody& setInstallByDefault(bool installByDefault) { DARABONBA_PTR_SET_VALUE(installByDefault_, installByDefault) };


    // managed Field Functions 
    bool hasManaged() const { return this->managed_ != nullptr;};
    void deleteManaged() { this->managed_ = nullptr;};
    inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
    inline DescribeAddonResponseBody& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAddonResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newerVersions Field Functions 
    bool hasNewerVersions() const { return this->newerVersions_ != nullptr;};
    void deleteNewerVersions() { this->newerVersions_ = nullptr;};
    inline const vector<DescribeAddonResponseBody::NewerVersions> & getNewerVersions() const { DARABONBA_PTR_GET_CONST(newerVersions_, vector<DescribeAddonResponseBody::NewerVersions>) };
    inline vector<DescribeAddonResponseBody::NewerVersions> getNewerVersions() { DARABONBA_PTR_GET(newerVersions_, vector<DescribeAddonResponseBody::NewerVersions>) };
    inline DescribeAddonResponseBody& setNewerVersions(const vector<DescribeAddonResponseBody::NewerVersions> & newerVersions) { DARABONBA_PTR_SET_VALUE(newerVersions_, newerVersions) };
    inline DescribeAddonResponseBody& setNewerVersions(vector<DescribeAddonResponseBody::NewerVersions> && newerVersions) { DARABONBA_PTR_SET_RVALUE(newerVersions_, newerVersions) };


    // supportedActions Field Functions 
    bool hasSupportedActions() const { return this->supportedActions_ != nullptr;};
    void deleteSupportedActions() { this->supportedActions_ = nullptr;};
    inline const vector<string> & getSupportedActions() const { DARABONBA_PTR_GET_CONST(supportedActions_, vector<string>) };
    inline vector<string> getSupportedActions() { DARABONBA_PTR_GET(supportedActions_, vector<string>) };
    inline DescribeAddonResponseBody& setSupportedActions(const vector<string> & supportedActions) { DARABONBA_PTR_SET_VALUE(supportedActions_, supportedActions) };
    inline DescribeAddonResponseBody& setSupportedActions(vector<string> && supportedActions) { DARABONBA_PTR_SET_RVALUE(supportedActions_, supportedActions) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeAddonResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The CPU architecture supported by the component.
    shared_ptr<vector<string>> architecture_ {};
    // The category of the component.
    shared_ptr<string> category_ {};
    // The custom parameter schema of the component.
    shared_ptr<string> configSchema_ {};
    // Indicates whether the component is automatically installed by default.
    shared_ptr<bool> installByDefault_ {};
    // Indicates whether the component is fully managed.
    shared_ptr<bool> managed_ {};
    // The name of the component.
    shared_ptr<string> name_ {};
    // The latest version information of the component.
    shared_ptr<vector<DescribeAddonResponseBody::NewerVersions>> newerVersions_ {};
    // The operations supported by the component.
    shared_ptr<vector<string>> supportedActions_ {};
    // The version of the component.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
