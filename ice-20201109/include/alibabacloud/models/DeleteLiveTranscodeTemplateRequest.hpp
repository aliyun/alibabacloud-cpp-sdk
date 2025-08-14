// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVETRANSCODETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVETRANSCODETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveTranscodeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DeleteLiveTranscodeTemplateRequest() = default ;
    DeleteLiveTranscodeTemplateRequest(const DeleteLiveTranscodeTemplateRequest &) = default ;
    DeleteLiveTranscodeTemplateRequest(DeleteLiveTranscodeTemplateRequest &&) = default ;
    DeleteLiveTranscodeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveTranscodeTemplateRequest() = default ;
    DeleteLiveTranscodeTemplateRequest& operator=(const DeleteLiveTranscodeTemplateRequest &) = default ;
    DeleteLiveTranscodeTemplateRequest& operator=(DeleteLiveTranscodeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateId_ != nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DeleteLiveTranscodeTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template ID. To obtain the template ID, log on to the [Intelligent Media Services (IMS) console](https://ice.console.aliyun.com/summary), choose Real-time Media Processing > Template Management, and then click the Transcoding tab. Alternatively, find the ID from the response parameters of the [CreateLiveTranscodeTemplate](https://help.aliyun.com/document_detail/449217.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
