// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEBUILDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEBUILDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicUpdateTemplateCopyAction.hpp>
#include <alibabacloud/models/PublicUpdateTemplateEnvdInjectAction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicUpdateTemplateBuildConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateBuildConfig& obj) { 
      DARABONBA_PTR_TO_JSON(copy, copy_);
      DARABONBA_PTR_TO_JSON(envdInject, envdInject_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateBuildConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(copy, copy_);
      DARABONBA_PTR_FROM_JSON(envdInject, envdInject_);
    };
    PublicUpdateTemplateBuildConfig() = default ;
    PublicUpdateTemplateBuildConfig(const PublicUpdateTemplateBuildConfig &) = default ;
    PublicUpdateTemplateBuildConfig(PublicUpdateTemplateBuildConfig &&) = default ;
    PublicUpdateTemplateBuildConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateBuildConfig() = default ;
    PublicUpdateTemplateBuildConfig& operator=(const PublicUpdateTemplateBuildConfig &) = default ;
    PublicUpdateTemplateBuildConfig& operator=(PublicUpdateTemplateBuildConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->copy_ == nullptr
        && this->envdInject_ == nullptr; };
    // copy Field Functions 
    bool hasCopy() const { return this->copy_ != nullptr;};
    void deleteCopy() { this->copy_ = nullptr;};
    inline const PublicUpdateTemplateCopyAction & getCopy() const { DARABONBA_PTR_GET_CONST(copy_, PublicUpdateTemplateCopyAction) };
    inline PublicUpdateTemplateCopyAction getCopy() { DARABONBA_PTR_GET(copy_, PublicUpdateTemplateCopyAction) };
    inline PublicUpdateTemplateBuildConfig& setCopy(const PublicUpdateTemplateCopyAction & copy) { DARABONBA_PTR_SET_VALUE(copy_, copy) };
    inline PublicUpdateTemplateBuildConfig& setCopy(PublicUpdateTemplateCopyAction && copy) { DARABONBA_PTR_SET_RVALUE(copy_, copy) };


    // envdInject Field Functions 
    bool hasEnvdInject() const { return this->envdInject_ != nullptr;};
    void deleteEnvdInject() { this->envdInject_ = nullptr;};
    inline const PublicUpdateTemplateEnvdInjectAction & getEnvdInject() const { DARABONBA_PTR_GET_CONST(envdInject_, PublicUpdateTemplateEnvdInjectAction) };
    inline PublicUpdateTemplateEnvdInjectAction getEnvdInject() { DARABONBA_PTR_GET(envdInject_, PublicUpdateTemplateEnvdInjectAction) };
    inline PublicUpdateTemplateBuildConfig& setEnvdInject(const PublicUpdateTemplateEnvdInjectAction & envdInject) { DARABONBA_PTR_SET_VALUE(envdInject_, envdInject) };
    inline PublicUpdateTemplateBuildConfig& setEnvdInject(PublicUpdateTemplateEnvdInjectAction && envdInject) { DARABONBA_PTR_SET_RVALUE(envdInject_, envdInject) };


  protected:
    // The image copy action configuration.
    shared_ptr<PublicUpdateTemplateCopyAction> copy_ {};
    // The envd injection action configuration.
    shared_ptr<PublicUpdateTemplateEnvdInjectAction> envdInject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
