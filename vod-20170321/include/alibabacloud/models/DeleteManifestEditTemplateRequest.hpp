// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMANIFESTEDITTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMANIFESTEDITTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteManifestEditTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteManifestEditTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteManifestEditTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DeleteManifestEditTemplateRequest() = default ;
    DeleteManifestEditTemplateRequest(const DeleteManifestEditTemplateRequest &) = default ;
    DeleteManifestEditTemplateRequest(DeleteManifestEditTemplateRequest &&) = default ;
    DeleteManifestEditTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteManifestEditTemplateRequest() = default ;
    DeleteManifestEditTemplateRequest& operator=(const DeleteManifestEditTemplateRequest &) = default ;
    DeleteManifestEditTemplateRequest& operator=(DeleteManifestEditTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateId_ == nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DeleteManifestEditTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the ManifestEdit template to be deleted. Only letters, digits, underscores (_), and hyphens (-) are supported.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
