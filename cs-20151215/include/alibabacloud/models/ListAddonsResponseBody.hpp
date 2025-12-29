// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODY_HPP_
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
  class ListAddonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(addons, addons_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(addons, addons_);
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
        DARABONBA_PTR_TO_JSON(architecture, architecture_);
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(config_schema, configSchema_);
        DARABONBA_PTR_TO_JSON(install_by_default, installByDefault_);
        DARABONBA_PTR_TO_JSON(managed, managed_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(supported_actions, supportedActions_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Addons& obj) { 
        DARABONBA_PTR_FROM_JSON(architecture, architecture_);
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(config_schema, configSchema_);
        DARABONBA_PTR_FROM_JSON(install_by_default, installByDefault_);
        DARABONBA_PTR_FROM_JSON(managed, managed_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(supported_actions, supportedActions_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      virtual bool empty() const override { return this->architecture_ == nullptr
        && this->category_ == nullptr && this->configSchema_ == nullptr && this->installByDefault_ == nullptr && this->managed_ == nullptr && this->name_ == nullptr
        && this->supportedActions_ == nullptr && this->version_ == nullptr; };
      // architecture Field Functions 
      bool hasArchitecture() const { return this->architecture_ != nullptr;};
      void deleteArchitecture() { this->architecture_ = nullptr;};
      inline const vector<string> & getArchitecture() const { DARABONBA_PTR_GET_CONST(architecture_, vector<string>) };
      inline vector<string> getArchitecture() { DARABONBA_PTR_GET(architecture_, vector<string>) };
      inline Addons& setArchitecture(const vector<string> & architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };
      inline Addons& setArchitecture(vector<string> && architecture) { DARABONBA_PTR_SET_RVALUE(architecture_, architecture) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Addons& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // configSchema Field Functions 
      bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
      void deleteConfigSchema() { this->configSchema_ = nullptr;};
      inline string getConfigSchema() const { DARABONBA_PTR_GET_DEFAULT(configSchema_, "") };
      inline Addons& setConfigSchema(string configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };


      // installByDefault Field Functions 
      bool hasInstallByDefault() const { return this->installByDefault_ != nullptr;};
      void deleteInstallByDefault() { this->installByDefault_ = nullptr;};
      inline bool getInstallByDefault() const { DARABONBA_PTR_GET_DEFAULT(installByDefault_, false) };
      inline Addons& setInstallByDefault(bool installByDefault) { DARABONBA_PTR_SET_VALUE(installByDefault_, installByDefault) };


      // managed Field Functions 
      bool hasManaged() const { return this->managed_ != nullptr;};
      void deleteManaged() { this->managed_ = nullptr;};
      inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
      inline Addons& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // supportedActions Field Functions 
      bool hasSupportedActions() const { return this->supportedActions_ != nullptr;};
      void deleteSupportedActions() { this->supportedActions_ = nullptr;};
      inline const vector<string> & getSupportedActions() const { DARABONBA_PTR_GET_CONST(supportedActions_, vector<string>) };
      inline vector<string> getSupportedActions() { DARABONBA_PTR_GET(supportedActions_, vector<string>) };
      inline Addons& setSupportedActions(const vector<string> & supportedActions) { DARABONBA_PTR_SET_VALUE(supportedActions_, supportedActions) };
      inline Addons& setSupportedActions(vector<string> && supportedActions) { DARABONBA_PTR_SET_RVALUE(supportedActions_, supportedActions) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Addons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Architectures supported by the component. Valid values:
      // 
      // *   amd64
      // *   arm64
      shared_ptr<vector<string>> architecture_ {};
      // The category of the component.
      shared_ptr<string> category_ {};
      // The schema of the custom parameters of the component.
      shared_ptr<string> configSchema_ {};
      // Indicates whether the component is automatically installed by default.
      shared_ptr<bool> installByDefault_ {};
      // Indicates whether the component is fully managed.
      shared_ptr<bool> managed_ {};
      // The component name.
      shared_ptr<string> name_ {};
      // Operations supported by the component. Valid values:
      // 
      // *   Install
      // *   Upgrade
      // *   Modify
      // *   Uninstall
      shared_ptr<vector<string>> supportedActions_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->addons_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<ListAddonsResponseBody::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<ListAddonsResponseBody::Addons>) };
    inline vector<ListAddonsResponseBody::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<ListAddonsResponseBody::Addons>) };
    inline ListAddonsResponseBody& setAddons(const vector<ListAddonsResponseBody::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListAddonsResponseBody& setAddons(vector<ListAddonsResponseBody::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


  protected:
    // The list of available components.
    shared_ptr<vector<ListAddonsResponseBody::Addons>> addons_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
