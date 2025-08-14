// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVERECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVERECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DeleteLiveRecordTemplateRequest() = default ;
    DeleteLiveRecordTemplateRequest(const DeleteLiveRecordTemplateRequest &) = default ;
    DeleteLiveRecordTemplateRequest(DeleteLiveRecordTemplateRequest &&) = default ;
    DeleteLiveRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveRecordTemplateRequest() = default ;
    DeleteLiveRecordTemplateRequest& operator=(const DeleteLiveRecordTemplateRequest &) = default ;
    DeleteLiveRecordTemplateRequest& operator=(DeleteLiveRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateId_ != nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DeleteLiveRecordTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the template to be deleted. To obtain the template ID, log on to the [Intelligent Media Services (IMS) console](https://ice.console.aliyun.com/live-processing/template/list/record), choose Real-time Media Processing > Template Management, and then click the Recording tab. Alternatively, find the ID from the response parameters of the [CreateLiveRecordTemplate](https://help.aliyun.com/document_detail/448213.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
