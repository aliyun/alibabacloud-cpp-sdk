// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
    };
    DeleteTemplateRequest() = default ;
    DeleteTemplateRequest(const DeleteTemplateRequest &) = default ;
    DeleteTemplateRequest(DeleteTemplateRequest &&) = default ;
    DeleteTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTemplateRequest() = default ;
    DeleteTemplateRequest& operator=(const DeleteTemplateRequest &) = default ;
    DeleteTemplateRequest& operator=(DeleteTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateIds_ == nullptr; };
    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline string getTemplateIds() const { DARABONBA_PTR_GET_DEFAULT(templateIds_, "") };
    inline DeleteTemplateRequest& setTemplateIds(string templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };


  protected:
    // The IDs of the templates that you want to delete. Separate multiple IDs with commas (,).
    shared_ptr<string> templateIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
