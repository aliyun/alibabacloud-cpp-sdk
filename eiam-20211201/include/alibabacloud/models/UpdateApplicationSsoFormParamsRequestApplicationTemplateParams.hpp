// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSSOFORMPARAMSREQUESTAPPLICATIONTEMPLATEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSSOFORMPARAMSREQUESTAPPLICATIONTEMPLATEPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateApplicationSsoFormParamsRequestApplicationTemplateParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationSsoFormParamsRequestApplicationTemplateParams& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateParamName, templateParamName_);
      DARABONBA_PTR_TO_JSON(TemplateParamValue, templateParamValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationSsoFormParamsRequestApplicationTemplateParams& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateParamName, templateParamName_);
      DARABONBA_PTR_FROM_JSON(TemplateParamValue, templateParamValue_);
    };
    UpdateApplicationSsoFormParamsRequestApplicationTemplateParams() = default ;
    UpdateApplicationSsoFormParamsRequestApplicationTemplateParams(const UpdateApplicationSsoFormParamsRequestApplicationTemplateParams &) = default ;
    UpdateApplicationSsoFormParamsRequestApplicationTemplateParams(UpdateApplicationSsoFormParamsRequestApplicationTemplateParams &&) = default ;
    UpdateApplicationSsoFormParamsRequestApplicationTemplateParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationSsoFormParamsRequestApplicationTemplateParams() = default ;
    UpdateApplicationSsoFormParamsRequestApplicationTemplateParams& operator=(const UpdateApplicationSsoFormParamsRequestApplicationTemplateParams &) = default ;
    UpdateApplicationSsoFormParamsRequestApplicationTemplateParams& operator=(UpdateApplicationSsoFormParamsRequestApplicationTemplateParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateParamName_ == nullptr
        && return this->templateParamValue_ == nullptr; };
    // templateParamName Field Functions 
    bool hasTemplateParamName() const { return this->templateParamName_ != nullptr;};
    void deleteTemplateParamName() { this->templateParamName_ = nullptr;};
    inline string templateParamName() const { DARABONBA_PTR_GET_DEFAULT(templateParamName_, "") };
    inline UpdateApplicationSsoFormParamsRequestApplicationTemplateParams& setTemplateParamName(string templateParamName) { DARABONBA_PTR_SET_VALUE(templateParamName_, templateParamName) };


    // templateParamValue Field Functions 
    bool hasTemplateParamValue() const { return this->templateParamValue_ != nullptr;};
    void deleteTemplateParamValue() { this->templateParamValue_ = nullptr;};
    inline string templateParamValue() const { DARABONBA_PTR_GET_DEFAULT(templateParamValue_, "") };
    inline UpdateApplicationSsoFormParamsRequestApplicationTemplateParams& setTemplateParamValue(string templateParamValue) { DARABONBA_PTR_SET_VALUE(templateParamValue_, templateParamValue) };


  protected:
    // 应用模板创建参数具体名称
    std::shared_ptr<string> templateParamName_ = nullptr;
    // 应用模板创建参数真实的取值
    std::shared_ptr<string> templateParamValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
