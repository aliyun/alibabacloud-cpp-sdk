// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PIPELINESPEC_HPP_
#define ALIBABACLOUD_MODELS_PIPELINESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class PipelineSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PipelineSpec& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(templateSpec, templateSpec_);
    };
    friend void from_json(const Darabonba::Json& j, PipelineSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(templateSpec, templateSpec_);
    };
    PipelineSpec() = default ;
    PipelineSpec(const PipelineSpec &) = default ;
    PipelineSpec(PipelineSpec &&) = default ;
    PipelineSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PipelineSpec() = default ;
    PipelineSpec& operator=(const PipelineSpec &) = default ;
    PipelineSpec& operator=(PipelineSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->templateName_ != nullptr && this->templateSpec_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Context & context() const { DARABONBA_PTR_GET_CONST(context_, Context) };
    inline Context context() { DARABONBA_PTR_GET(context_, Context) };
    inline PipelineSpec& setContext(const Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline PipelineSpec& setContext(Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline PipelineSpec& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateSpec Field Functions 
    bool hasTemplateSpec() const { return this->templateSpec_ != nullptr;};
    void deleteTemplateSpec() { this->templateSpec_ = nullptr;};
    inline const PipelineTemplateSpec & templateSpec() const { DARABONBA_PTR_GET_CONST(templateSpec_, PipelineTemplateSpec) };
    inline PipelineTemplateSpec templateSpec() { DARABONBA_PTR_GET(templateSpec_, PipelineTemplateSpec) };
    inline PipelineSpec& setTemplateSpec(const PipelineTemplateSpec & templateSpec) { DARABONBA_PTR_SET_VALUE(templateSpec_, templateSpec) };
    inline PipelineSpec& setTemplateSpec(PipelineTemplateSpec && templateSpec) { DARABONBA_PTR_SET_RVALUE(templateSpec_, templateSpec) };


  protected:
    std::shared_ptr<Context> context_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<PipelineTemplateSpec> templateSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
