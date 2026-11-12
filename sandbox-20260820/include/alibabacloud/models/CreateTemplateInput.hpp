// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTemplateBuildConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateTemplateRuntimeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class CreateTemplateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateInput& obj) { 
      DARABONBA_PTR_TO_JSON(buildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceTags, resourceTags_);
      DARABONBA_PTR_TO_JSON(runtimeConfig, runtimeConfig_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(buildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceTags, resourceTags_);
      DARABONBA_PTR_FROM_JSON(runtimeConfig, runtimeConfig_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
    };
    CreateTemplateInput() = default ;
    CreateTemplateInput(const CreateTemplateInput &) = default ;
    CreateTemplateInput(CreateTemplateInput &&) = default ;
    CreateTemplateInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateInput() = default ;
    CreateTemplateInput& operator=(const CreateTemplateInput &) = default ;
    CreateTemplateInput& operator=(CreateTemplateInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      ResourceTags() = default ;
      ResourceTags(const ResourceTags &) = default ;
      ResourceTags(ResourceTags &&) = default ;
      ResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTags() = default ;
      ResourceTags& operator=(const ResourceTags &) = default ;
      ResourceTags& operator=(ResourceTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ResourceTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ResourceTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->buildConfig_ == nullptr
        && this->name_ == nullptr && this->resourceTags_ == nullptr && this->runtimeConfig_ == nullptr && this->teamID_ == nullptr; };
    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const CreateTemplateBuildConfig & getBuildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, CreateTemplateBuildConfig) };
    inline CreateTemplateBuildConfig getBuildConfig() { DARABONBA_PTR_GET(buildConfig_, CreateTemplateBuildConfig) };
    inline CreateTemplateInput& setBuildConfig(const CreateTemplateBuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline CreateTemplateInput& setBuildConfig(CreateTemplateBuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTemplateInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline const vector<CreateTemplateInput::ResourceTags> & getResourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, vector<CreateTemplateInput::ResourceTags>) };
    inline vector<CreateTemplateInput::ResourceTags> getResourceTags() { DARABONBA_PTR_GET(resourceTags_, vector<CreateTemplateInput::ResourceTags>) };
    inline CreateTemplateInput& setResourceTags(const vector<CreateTemplateInput::ResourceTags> & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
    inline CreateTemplateInput& setResourceTags(vector<CreateTemplateInput::ResourceTags> && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline const CreateTemplateRuntimeConfig & getRuntimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, CreateTemplateRuntimeConfig) };
    inline CreateTemplateRuntimeConfig getRuntimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, CreateTemplateRuntimeConfig) };
    inline CreateTemplateInput& setRuntimeConfig(const CreateTemplateRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
    inline CreateTemplateInput& setRuntimeConfig(CreateTemplateRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline CreateTemplateInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    // The build configuration of the template. This configuration specifies the build process in action-based blocks. If this parameter is not specified, the service automatically derives the configuration based on the source image. Public runtime images are used directly without building. For other images, the copy and envdInject actions are automatically executed.
    shared_ptr<CreateTemplateBuildConfig> buildConfig_ {};
    // The name of the template. The name must be unique within the same team.
    shared_ptr<string> name_ {};
    // The resource tags.
    shared_ptr<vector<CreateTemplateInput::ResourceTags>> resourceTags_ {};
    // The runtime configuration of the template. This configuration determines the specifications and environment of the sandbox instances created from the template.
    shared_ptr<CreateTemplateRuntimeConfig> runtimeConfig_ {};
    // The ID of the team to which the template belongs. The ID is in UUID format. If this parameter is not specified, the default team of the current account is used.
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
