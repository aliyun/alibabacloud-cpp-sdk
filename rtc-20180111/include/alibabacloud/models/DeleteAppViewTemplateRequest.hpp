// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPVIEWTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPVIEWTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DeleteAppViewTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppViewTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppViewTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DeleteAppViewTemplateRequest() = default ;
    DeleteAppViewTemplateRequest(const DeleteAppViewTemplateRequest &) = default ;
    DeleteAppViewTemplateRequest(DeleteAppViewTemplateRequest &&) = default ;
    DeleteAppViewTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppViewTemplateRequest() = default ;
    DeleteAppViewTemplateRequest& operator=(const DeleteAppViewTemplateRequest &) = default ;
    DeleteAppViewTemplateRequest& operator=(DeleteAppViewTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->templateId_ == nullptr; };
      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // This parameter is required.
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->template_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteAppViewTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const DeleteAppViewTemplateRequest::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, DeleteAppViewTemplateRequest::Template) };
    inline DeleteAppViewTemplateRequest::Template getTemplate() { DARABONBA_PTR_GET(template_, DeleteAppViewTemplateRequest::Template) };
    inline DeleteAppViewTemplateRequest& setTemplate(const DeleteAppViewTemplateRequest::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DeleteAppViewTemplateRequest& setTemplate(DeleteAppViewTemplateRequest::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<DeleteAppViewTemplateRequest::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
