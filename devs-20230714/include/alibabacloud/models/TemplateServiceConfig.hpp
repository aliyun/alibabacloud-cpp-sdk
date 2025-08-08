// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATESERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATESERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(artifact, artifact_);
      DARABONBA_PTR_TO_JSON(build, build_);
      DARABONBA_PTR_TO_JSON(component, component_);
      DARABONBA_ANY_TO_JSON(props, props_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(artifact, artifact_);
      DARABONBA_PTR_FROM_JSON(build, build_);
      DARABONBA_PTR_FROM_JSON(component, component_);
      DARABONBA_ANY_FROM_JSON(props, props_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    TemplateServiceConfig() = default ;
    TemplateServiceConfig(const TemplateServiceConfig &) = default ;
    TemplateServiceConfig(TemplateServiceConfig &&) = default ;
    TemplateServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateServiceConfig() = default ;
    TemplateServiceConfig& operator=(const TemplateServiceConfig &) = default ;
    TemplateServiceConfig& operator=(TemplateServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifact_ != nullptr
        && this->build_ != nullptr && this->component_ != nullptr && this->props_ != nullptr && this->source_ != nullptr && this->type_ != nullptr
        && this->variables_ != nullptr; };
    // artifact Field Functions 
    bool hasArtifact() const { return this->artifact_ != nullptr;};
    void deleteArtifact() { this->artifact_ = nullptr;};
    inline const ArtifactMeta & artifact() const { DARABONBA_PTR_GET_CONST(artifact_, ArtifactMeta) };
    inline ArtifactMeta artifact() { DARABONBA_PTR_GET(artifact_, ArtifactMeta) };
    inline TemplateServiceConfig& setArtifact(const ArtifactMeta & artifact) { DARABONBA_PTR_SET_VALUE(artifact_, artifact) };
    inline TemplateServiceConfig& setArtifact(ArtifactMeta && artifact) { DARABONBA_PTR_SET_RVALUE(artifact_, artifact) };


    // build Field Functions 
    bool hasBuild() const { return this->build_ != nullptr;};
    void deleteBuild() { this->build_ = nullptr;};
    inline const BuildConfig & build() const { DARABONBA_PTR_GET_CONST(build_, BuildConfig) };
    inline BuildConfig build() { DARABONBA_PTR_GET(build_, BuildConfig) };
    inline TemplateServiceConfig& setBuild(const BuildConfig & build) { DARABONBA_PTR_SET_VALUE(build_, build) };
    inline TemplateServiceConfig& setBuild(BuildConfig && build) { DARABONBA_PTR_SET_RVALUE(build_, build) };


    // component Field Functions 
    bool hasComponent() const { return this->component_ != nullptr;};
    void deleteComponent() { this->component_ = nullptr;};
    inline string component() const { DARABONBA_PTR_GET_DEFAULT(component_, "") };
    inline TemplateServiceConfig& setComponent(string component) { DARABONBA_PTR_SET_VALUE(component_, component) };


    // props Field Functions 
    bool hasProps() const { return this->props_ != nullptr;};
    void deleteProps() { this->props_ = nullptr;};
    inline     const Darabonba::Json & props() const { DARABONBA_GET(props_) };
    Darabonba::Json & props() { DARABONBA_GET(props_) };
    inline TemplateServiceConfig& setProps(const Darabonba::Json & props) { DARABONBA_SET_VALUE(props_, props) };
    inline TemplateServiceConfig& setProps(Darabonba::Json & props) { DARABONBA_SET_RVALUE(props_, props) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const SourceConfig & source() const { DARABONBA_PTR_GET_CONST(source_, SourceConfig) };
    inline SourceConfig source() { DARABONBA_PTR_GET(source_, SourceConfig) };
    inline TemplateServiceConfig& setSource(const SourceConfig & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline TemplateServiceConfig& setSource(SourceConfig && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TemplateServiceConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, TemplateParameterSchema> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, TemplateParameterSchema>) };
    inline map<string, TemplateParameterSchema> variables() { DARABONBA_PTR_GET(variables_, map<string, TemplateParameterSchema>) };
    inline TemplateServiceConfig& setVariables(const map<string, TemplateParameterSchema> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline TemplateServiceConfig& setVariables(map<string, TemplateParameterSchema> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<ArtifactMeta> artifact_ = nullptr;
    std::shared_ptr<BuildConfig> build_ = nullptr;
    std::shared_ptr<string> component_ = nullptr;
    Darabonba::Json props_ = nullptr;
    std::shared_ptr<SourceConfig> source_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<map<string, TemplateParameterSchema>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
