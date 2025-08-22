// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODYDATAFEATURE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODYDATAFEATURE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvironmentFeatureResponseBodyDataFeature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvironmentFeatureResponseBodyDataFeature& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(Managed, managed_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvironmentFeatureResponseBodyDataFeature& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(Managed, managed_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeEnvironmentFeatureResponseBodyDataFeature() = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeature(const DescribeEnvironmentFeatureResponseBodyDataFeature &) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeature(DescribeEnvironmentFeatureResponseBodyDataFeature &&) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvironmentFeatureResponseBodyDataFeature() = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeature& operator=(const DescribeEnvironmentFeatureResponseBodyDataFeature &) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeature& operator=(DescribeEnvironmentFeatureResponseBodyDataFeature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->config_ != nullptr && this->description_ != nullptr && this->environmentId_ != nullptr && this->icon_ != nullptr && this->language_ != nullptr
        && this->latestVersion_ != nullptr && this->managed_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->version_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> config() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // managed Field Functions 
    bool hasManaged() const { return this->managed_ != nullptr;};
    void deleteManaged() { this->managed_ = nullptr;};
    inline bool managed() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeature& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The alias of the feature.
    std::shared_ptr<string> alias_ = nullptr;
    // The configuration of the feature.
    std::shared_ptr<map<string, string>> config_ = nullptr;
    // The description of the feature.
    std::shared_ptr<string> description_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The URL of the icon.
    std::shared_ptr<string> icon_ = nullptr;
    // The language.
    std::shared_ptr<string> language_ = nullptr;
    // The latest version number.
    std::shared_ptr<string> latestVersion_ = nullptr;
    // Indicates whether the component is fully managed.
    std::shared_ptr<bool> managed_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> name_ = nullptr;
    // The installation status of the agent.
    // 
    // *   Installing: The agent is being installed.
    // *   Success: The agent is installed.
    // *   Failed: The agent failed to be installed.
    // *   UnInstall: The agent is uninstalled or has not been installed.
    // *   Uninstalling: The agent is being uninstalled.
    // *   UnInstallFailed: The agent failed to be uninstalled.
    std::shared_ptr<string> status_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
