// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLiveTranscodeTemplateRequestTemplateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateLiveTranscodeTemplateRequest() = default ;
    UpdateLiveTranscodeTemplateRequest(const UpdateLiveTranscodeTemplateRequest &) = default ;
    UpdateLiveTranscodeTemplateRequest(UpdateLiveTranscodeTemplateRequest &&) = default ;
    UpdateLiveTranscodeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeTemplateRequest() = default ;
    UpdateLiveTranscodeTemplateRequest& operator=(const UpdateLiveTranscodeTemplateRequest &) = default ;
    UpdateLiveTranscodeTemplateRequest& operator=(UpdateLiveTranscodeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->templateConfig_ == nullptr && return this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveTranscodeTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const UpdateLiveTranscodeTemplateRequestTemplateConfig & templateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, UpdateLiveTranscodeTemplateRequestTemplateConfig) };
    inline UpdateLiveTranscodeTemplateRequestTemplateConfig templateConfig() { DARABONBA_PTR_GET(templateConfig_, UpdateLiveTranscodeTemplateRequestTemplateConfig) };
    inline UpdateLiveTranscodeTemplateRequest& setTemplateConfig(const UpdateLiveTranscodeTemplateRequestTemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline UpdateLiveTranscodeTemplateRequest& setTemplateConfig(UpdateLiveTranscodeTemplateRequestTemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateLiveTranscodeTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template name.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration of the template.
    std::shared_ptr<UpdateLiveTranscodeTemplateRequestTemplateConfig> templateConfig_ = nullptr;
    // The template ID. To obtain the template ID, log on to the [Intelligent Media Services (IMS) console](https://ims.console.aliyun.com/summary), choose Real-time Media Processing > Template Management, and then click the Transcoding tab. Alternatively, find the ID from the response parameters of the [CreateLiveTranscodeTemplate](https://help.aliyun.com/document_detail/449217.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
