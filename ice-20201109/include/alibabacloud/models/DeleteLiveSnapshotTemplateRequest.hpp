// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveSnapshotTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveSnapshotTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveSnapshotTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DeleteLiveSnapshotTemplateRequest() = default ;
    DeleteLiveSnapshotTemplateRequest(const DeleteLiveSnapshotTemplateRequest &) = default ;
    DeleteLiveSnapshotTemplateRequest(DeleteLiveSnapshotTemplateRequest &&) = default ;
    DeleteLiveSnapshotTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveSnapshotTemplateRequest() = default ;
    DeleteLiveSnapshotTemplateRequest& operator=(const DeleteLiveSnapshotTemplateRequest &) = default ;
    DeleteLiveSnapshotTemplateRequest& operator=(DeleteLiveSnapshotTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateId_ != nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DeleteLiveSnapshotTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
