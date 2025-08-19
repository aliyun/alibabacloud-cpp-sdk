// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYADDONS_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYADDONS_HPP_
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
  class ListAddonsResponseBodyAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBodyAddons& obj) { 
      DARABONBA_PTR_TO_JSON(architecture, architecture_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(config_schema, configSchema_);
      DARABONBA_PTR_TO_JSON(install_by_default, installByDefault_);
      DARABONBA_PTR_TO_JSON(managed, managed_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(supported_actions, supportedActions_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBodyAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(config_schema, configSchema_);
      DARABONBA_PTR_FROM_JSON(install_by_default, installByDefault_);
      DARABONBA_PTR_FROM_JSON(managed, managed_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(supported_actions, supportedActions_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListAddonsResponseBodyAddons() = default ;
    ListAddonsResponseBodyAddons(const ListAddonsResponseBodyAddons &) = default ;
    ListAddonsResponseBodyAddons(ListAddonsResponseBodyAddons &&) = default ;
    ListAddonsResponseBodyAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsResponseBodyAddons() = default ;
    ListAddonsResponseBodyAddons& operator=(const ListAddonsResponseBodyAddons &) = default ;
    ListAddonsResponseBodyAddons& operator=(ListAddonsResponseBodyAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->architecture_ != nullptr
        && this->category_ != nullptr && this->configSchema_ != nullptr && this->installByDefault_ != nullptr && this->managed_ != nullptr && this->name_ != nullptr
        && this->supportedActions_ != nullptr && this->version_ != nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline const vector<string> & architecture() const { DARABONBA_PTR_GET_CONST(architecture_, vector<string>) };
    inline vector<string> architecture() { DARABONBA_PTR_GET(architecture_, vector<string>) };
    inline ListAddonsResponseBodyAddons& setArchitecture(const vector<string> & architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };
    inline ListAddonsResponseBodyAddons& setArchitecture(vector<string> && architecture) { DARABONBA_PTR_SET_RVALUE(architecture_, architecture) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListAddonsResponseBodyAddons& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // configSchema Field Functions 
    bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
    void deleteConfigSchema() { this->configSchema_ = nullptr;};
    inline string configSchema() const { DARABONBA_PTR_GET_DEFAULT(configSchema_, "") };
    inline ListAddonsResponseBodyAddons& setConfigSchema(string configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };


    // installByDefault Field Functions 
    bool hasInstallByDefault() const { return this->installByDefault_ != nullptr;};
    void deleteInstallByDefault() { this->installByDefault_ = nullptr;};
    inline bool installByDefault() const { DARABONBA_PTR_GET_DEFAULT(installByDefault_, false) };
    inline ListAddonsResponseBodyAddons& setInstallByDefault(bool installByDefault) { DARABONBA_PTR_SET_VALUE(installByDefault_, installByDefault) };


    // managed Field Functions 
    bool hasManaged() const { return this->managed_ != nullptr;};
    void deleteManaged() { this->managed_ = nullptr;};
    inline bool managed() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
    inline ListAddonsResponseBodyAddons& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAddonsResponseBodyAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // supportedActions Field Functions 
    bool hasSupportedActions() const { return this->supportedActions_ != nullptr;};
    void deleteSupportedActions() { this->supportedActions_ = nullptr;};
    inline const vector<string> & supportedActions() const { DARABONBA_PTR_GET_CONST(supportedActions_, vector<string>) };
    inline vector<string> supportedActions() { DARABONBA_PTR_GET(supportedActions_, vector<string>) };
    inline ListAddonsResponseBodyAddons& setSupportedActions(const vector<string> & supportedActions) { DARABONBA_PTR_SET_VALUE(supportedActions_, supportedActions) };
    inline ListAddonsResponseBodyAddons& setSupportedActions(vector<string> && supportedActions) { DARABONBA_PTR_SET_RVALUE(supportedActions_, supportedActions) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAddonsResponseBodyAddons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Architectures supported by the component. Valid values:
    // 
    // *   amd64
    // *   arm64
    std::shared_ptr<vector<string>> architecture_ = nullptr;
    // The category of the component.
    std::shared_ptr<string> category_ = nullptr;
    // The schema of the custom parameters of the component.
    std::shared_ptr<string> configSchema_ = nullptr;
    // Indicates whether the component is automatically installed by default.
    std::shared_ptr<bool> installByDefault_ = nullptr;
    // Indicates whether the component is fully managed.
    std::shared_ptr<bool> managed_ = nullptr;
    // The component name.
    std::shared_ptr<string> name_ = nullptr;
    // Operations supported by the component. Valid values:
    // 
    // *   Install
    // *   Upgrade
    // *   Modify
    // *   Uninstall
    std::shared_ptr<vector<string>> supportedActions_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
