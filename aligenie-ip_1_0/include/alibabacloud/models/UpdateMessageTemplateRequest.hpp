// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESSAGETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESSAGETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateMessageTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMessageTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateDetail, templateDetail_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMessageTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateDetail, templateDetail_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    UpdateMessageTemplateRequest() = default ;
    UpdateMessageTemplateRequest(const UpdateMessageTemplateRequest &) = default ;
    UpdateMessageTemplateRequest(UpdateMessageTemplateRequest &&) = default ;
    UpdateMessageTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMessageTemplateRequest() = default ;
    UpdateMessageTemplateRequest& operator=(const UpdateMessageTemplateRequest &) = default ;
    UpdateMessageTemplateRequest& operator=(UpdateMessageTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateDetail_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr; };
    // templateDetail Field Functions 
    bool hasTemplateDetail() const { return this->templateDetail_ != nullptr;};
    void deleteTemplateDetail() { this->templateDetail_ = nullptr;};
    inline string getTemplateDetail() const { DARABONBA_PTR_GET_DEFAULT(templateDetail_, "") };
    inline UpdateMessageTemplateRequest& setTemplateDetail(string templateDetail) { DARABONBA_PTR_SET_VALUE(templateDetail_, templateDetail) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline UpdateMessageTemplateRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateMessageTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    shared_ptr<string> templateDetail_ {};
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
