// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWNOTIFYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWNOTIFYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PreviewNotifyTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewNotifyTemplateRequest& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewNotifyTemplateRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(templates, templates_);
    };
    PreviewNotifyTemplateRequest() = default ;
    PreviewNotifyTemplateRequest(const PreviewNotifyTemplateRequest &) = default ;
    PreviewNotifyTemplateRequest(PreviewNotifyTemplateRequest &&) = default ;
    PreviewNotifyTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewNotifyTemplateRequest() = default ;
    PreviewNotifyTemplateRequest& operator=(const PreviewNotifyTemplateRequest &) = default ;
    PreviewNotifyTemplateRequest& operator=(PreviewNotifyTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(template, template_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->template_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Templates& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Templates& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    protected:
      // The template identifier. This identifier is defined by the frontend and returned as-is. Use semantic names such as title or content.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The template content string in Go template syntax.
      // 
      // This parameter is required.
      shared_ptr<string> template_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->templates_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline PreviewNotifyTemplateRequest& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline PreviewNotifyTemplateRequest& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<PreviewNotifyTemplateRequest::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<PreviewNotifyTemplateRequest::Templates>) };
    inline vector<PreviewNotifyTemplateRequest::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<PreviewNotifyTemplateRequest::Templates>) };
    inline PreviewNotifyTemplateRequest& setTemplates(const vector<PreviewNotifyTemplateRequest::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline PreviewNotifyTemplateRequest& setTemplates(vector<PreviewNotifyTemplateRequest::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The rendering context data in key-value pair format. This data source is used to populate Go template placeholders in the templates, such as {{.incident.title}}.
    Darabonba::Json data_ {};
    // The list of templates to be rendered. Each item includes a template identifier and the template content.
    // 
    // This parameter is required.
    shared_ptr<vector<PreviewNotifyTemplateRequest::Templates>> templates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
