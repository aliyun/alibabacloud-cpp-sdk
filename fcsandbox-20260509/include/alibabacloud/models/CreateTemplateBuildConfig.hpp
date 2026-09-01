// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEBUILDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEBUILDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTemplateCopyAction.hpp>
#include <alibabacloud/models/CreateTemplateEnvdInjectAction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateBuildConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateBuildConfig& obj) { 
      DARABONBA_PTR_TO_JSON(copy, copy_);
      DARABONBA_PTR_TO_JSON(envdInject, envdInject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateBuildConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(copy, copy_);
      DARABONBA_PTR_FROM_JSON(envdInject, envdInject_);
    };
    CreateTemplateBuildConfig() = default ;
    CreateTemplateBuildConfig(const CreateTemplateBuildConfig &) = default ;
    CreateTemplateBuildConfig(CreateTemplateBuildConfig &&) = default ;
    CreateTemplateBuildConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateBuildConfig() = default ;
    CreateTemplateBuildConfig& operator=(const CreateTemplateBuildConfig &) = default ;
    CreateTemplateBuildConfig& operator=(CreateTemplateBuildConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->copy_ == nullptr
        && this->envdInject_ == nullptr; };
    // copy Field Functions 
    bool hasCopy() const { return this->copy_ != nullptr;};
    void deleteCopy() { this->copy_ = nullptr;};
    inline const CreateTemplateCopyAction & getCopy() const { DARABONBA_PTR_GET_CONST(copy_, CreateTemplateCopyAction) };
    inline CreateTemplateCopyAction getCopy() { DARABONBA_PTR_GET(copy_, CreateTemplateCopyAction) };
    inline CreateTemplateBuildConfig& setCopy(const CreateTemplateCopyAction & copy) { DARABONBA_PTR_SET_VALUE(copy_, copy) };
    inline CreateTemplateBuildConfig& setCopy(CreateTemplateCopyAction && copy) { DARABONBA_PTR_SET_RVALUE(copy_, copy) };


    // envdInject Field Functions 
    bool hasEnvdInject() const { return this->envdInject_ != nullptr;};
    void deleteEnvdInject() { this->envdInject_ = nullptr;};
    inline const CreateTemplateEnvdInjectAction & getEnvdInject() const { DARABONBA_PTR_GET_CONST(envdInject_, CreateTemplateEnvdInjectAction) };
    inline CreateTemplateEnvdInjectAction getEnvdInject() { DARABONBA_PTR_GET(envdInject_, CreateTemplateEnvdInjectAction) };
    inline CreateTemplateBuildConfig& setEnvdInject(const CreateTemplateEnvdInjectAction & envdInject) { DARABONBA_PTR_SET_VALUE(envdInject_, envdInject) };
    inline CreateTemplateBuildConfig& setEnvdInject(CreateTemplateEnvdInjectAction && envdInject) { DARABONBA_PTR_SET_RVALUE(envdInject_, envdInject) };


  protected:
    // The image copy build action.
    shared_ptr<CreateTemplateCopyAction> copy_ {};
    // The envd injection build action.
    shared_ptr<CreateTemplateEnvdInjectAction> envdInject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
