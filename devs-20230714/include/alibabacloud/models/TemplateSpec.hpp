// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATESPEC_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATESPEC_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/Devs20230714.hpp>
#include <alibabacloud/models/TemplateSpecSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateSpec& obj) { 
      DARABONBA_PTR_TO_JSON(author, author_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(license, license_);
      DARABONBA_PTR_TO_JSON(packageName, packageName_);
      DARABONBA_PTR_TO_JSON(readme, readme_);
      DARABONBA_PTR_TO_JSON(registryToken, registryToken_);
      DARABONBA_PTR_TO_JSON(services, services_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(author, author_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(license, license_);
      DARABONBA_PTR_FROM_JSON(packageName, packageName_);
      DARABONBA_PTR_FROM_JSON(readme, readme_);
      DARABONBA_PTR_FROM_JSON(registryToken, registryToken_);
      DARABONBA_PTR_FROM_JSON(services, services_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    TemplateSpec() = default ;
    TemplateSpec(const TemplateSpec &) = default ;
    TemplateSpec(TemplateSpec &&) = default ;
    TemplateSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateSpec() = default ;
    TemplateSpec& operator=(const TemplateSpec &) = default ;
    TemplateSpec& operator=(TemplateSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->author_ != nullptr
        && this->category_ != nullptr && this->license_ != nullptr && this->packageName_ != nullptr && this->readme_ != nullptr && this->registryToken_ != nullptr
        && this->services_ != nullptr && this->source_ != nullptr && this->variables_ != nullptr && this->version_ != nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline TemplateSpec& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline TemplateSpec& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string license() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline TemplateSpec& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline TemplateSpec& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // readme Field Functions 
    bool hasReadme() const { return this->readme_ != nullptr;};
    void deleteReadme() { this->readme_ = nullptr;};
    inline string readme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
    inline TemplateSpec& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


    // registryToken Field Functions 
    bool hasRegistryToken() const { return this->registryToken_ != nullptr;};
    void deleteRegistryToken() { this->registryToken_ = nullptr;};
    inline string registryToken() const { DARABONBA_PTR_GET_DEFAULT(registryToken_, "") };
    inline TemplateSpec& setRegistryToken(string registryToken) { DARABONBA_PTR_SET_VALUE(registryToken_, registryToken) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const map<string, TemplateServiceConfig> & services() const { DARABONBA_PTR_GET_CONST(services_, map<string, TemplateServiceConfig>) };
    inline map<string, TemplateServiceConfig> services() { DARABONBA_PTR_GET(services_, map<string, TemplateServiceConfig>) };
    inline TemplateSpec& setServices(const map<string, TemplateServiceConfig> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline TemplateSpec& setServices(map<string, TemplateServiceConfig> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const TemplateSpecSource & source() const { DARABONBA_PTR_GET_CONST(source_, TemplateSpecSource) };
    inline TemplateSpecSource source() { DARABONBA_PTR_GET(source_, TemplateSpecSource) };
    inline TemplateSpec& setSource(const TemplateSpecSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline TemplateSpec& setSource(TemplateSpecSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, TemplateParameterSchema> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, TemplateParameterSchema>) };
    inline map<string, TemplateParameterSchema> variables() { DARABONBA_PTR_GET(variables_, map<string, TemplateParameterSchema>) };
    inline TemplateSpec& setVariables(const map<string, TemplateParameterSchema> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline TemplateSpec& setVariables(map<string, TemplateParameterSchema> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline TemplateSpec& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> author_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> license_ = nullptr;
    std::shared_ptr<string> packageName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> readme_ = nullptr;
    std::shared_ptr<string> registryToken_ = nullptr;
    std::shared_ptr<map<string, TemplateServiceConfig>> services_ = nullptr;
    std::shared_ptr<TemplateSpecSource> source_ = nullptr;
    std::shared_ptr<map<string, TemplateParameterSchema>> variables_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
