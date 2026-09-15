// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicUpdateTemplateBuildConfig.hpp>
#include <alibabacloud/models/PublicUpdateTemplateRuntimeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicUpdateTemplateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateInput& obj) { 
      DARABONBA_PTR_TO_JSON(buildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(runtimeConfig, runtimeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(buildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(runtimeConfig, runtimeConfig_);
    };
    PublicUpdateTemplateInput() = default ;
    PublicUpdateTemplateInput(const PublicUpdateTemplateInput &) = default ;
    PublicUpdateTemplateInput(PublicUpdateTemplateInput &&) = default ;
    PublicUpdateTemplateInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateInput() = default ;
    PublicUpdateTemplateInput& operator=(const PublicUpdateTemplateInput &) = default ;
    PublicUpdateTemplateInput& operator=(PublicUpdateTemplateInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildConfig_ == nullptr
        && this->runtimeConfig_ == nullptr; };
    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const PublicUpdateTemplateBuildConfig & getBuildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, PublicUpdateTemplateBuildConfig) };
    inline PublicUpdateTemplateBuildConfig getBuildConfig() { DARABONBA_PTR_GET(buildConfig_, PublicUpdateTemplateBuildConfig) };
    inline PublicUpdateTemplateInput& setBuildConfig(const PublicUpdateTemplateBuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline PublicUpdateTemplateInput& setBuildConfig(PublicUpdateTemplateBuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // runtimeConfig Field Functions 
    bool hasRuntimeConfig() const { return this->runtimeConfig_ != nullptr;};
    void deleteRuntimeConfig() { this->runtimeConfig_ = nullptr;};
    inline const PublicUpdateTemplateRuntimeConfig & getRuntimeConfig() const { DARABONBA_PTR_GET_CONST(runtimeConfig_, PublicUpdateTemplateRuntimeConfig) };
    inline PublicUpdateTemplateRuntimeConfig getRuntimeConfig() { DARABONBA_PTR_GET(runtimeConfig_, PublicUpdateTemplateRuntimeConfig) };
    inline PublicUpdateTemplateInput& setRuntimeConfig(const PublicUpdateTemplateRuntimeConfig & runtimeConfig) { DARABONBA_PTR_SET_VALUE(runtimeConfig_, runtimeConfig) };
    inline PublicUpdateTemplateInput& setRuntimeConfig(PublicUpdateTemplateRuntimeConfig && runtimeConfig) { DARABONBA_PTR_SET_RVALUE(runtimeConfig_, runtimeConfig) };


  protected:
    // The build configuration.
    shared_ptr<PublicUpdateTemplateBuildConfig> buildConfig_ {};
    // The runtime configuration.
    shared_ptr<PublicUpdateTemplateRuntimeConfig> runtimeConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
