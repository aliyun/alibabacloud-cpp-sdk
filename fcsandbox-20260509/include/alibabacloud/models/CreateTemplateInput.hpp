// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTemplateBuildConfig.hpp>
#include <alibabacloud/models/CreateTemplateRuntimeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateInput& obj) { 
      DARABONBA_PTR_TO_JSON(buildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(runtimeConfig, runtimeConfig_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(buildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
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
    virtual bool empty() const override { return this->buildConfig_ == nullptr
        && this->name_ == nullptr && this->runtimeConfig_ == nullptr && this->teamID_ == nullptr; };
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
    // The template build configuration.
    shared_ptr<CreateTemplateBuildConfig> buildConfig_ {};
    // The template name.
    shared_ptr<string> name_ {};
    // The template runtime configuration.
    shared_ptr<CreateTemplateRuntimeConfig> runtimeConfig_ {};
    // The unique identifier of the team.
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
