// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODETEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODETEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateLiveTranscodeTemplateShrinkRequest() = default ;
    UpdateLiveTranscodeTemplateShrinkRequest(const UpdateLiveTranscodeTemplateShrinkRequest &) = default ;
    UpdateLiveTranscodeTemplateShrinkRequest(UpdateLiveTranscodeTemplateShrinkRequest &&) = default ;
    UpdateLiveTranscodeTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeTemplateShrinkRequest() = default ;
    UpdateLiveTranscodeTemplateShrinkRequest& operator=(const UpdateLiveTranscodeTemplateShrinkRequest &) = default ;
    UpdateLiveTranscodeTemplateShrinkRequest& operator=(UpdateLiveTranscodeTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->templateConfigShrink_ == nullptr && this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveTranscodeTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateConfigShrink Field Functions 
    bool hasTemplateConfigShrink() const { return this->templateConfigShrink_ != nullptr;};
    void deleteTemplateConfigShrink() { this->templateConfigShrink_ = nullptr;};
    inline string getTemplateConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(templateConfigShrink_, "") };
    inline UpdateLiveTranscodeTemplateShrinkRequest& setTemplateConfigShrink(string templateConfigShrink) { DARABONBA_PTR_SET_VALUE(templateConfigShrink_, templateConfigShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateLiveTranscodeTemplateShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template name.
    shared_ptr<string> name_ {};
    // The configuration of the template.
    shared_ptr<string> templateConfigShrink_ {};
    // The template ID. To obtain the template ID, log on to the [Intelligent Media Services (IMS) console](https://ims.console.aliyun.com/summary), choose Real-time Media Processing > Template Management, and then click the Transcoding tab. Alternatively, find the ID from the response parameters of the [CreateLiveTranscodeTemplate](https://help.aliyun.com/document_detail/449217.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
