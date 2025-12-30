// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    AddTemplateResponseBody() = default ;
    AddTemplateResponseBody(const AddTemplateResponseBody &) = default ;
    AddTemplateResponseBody(AddTemplateResponseBody &&) = default ;
    AddTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateResponseBody() = default ;
    AddTemplateResponseBody& operator=(const AddTemplateResponseBody &) = default ;
    AddTemplateResponseBody& operator=(AddTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(CreateSource, createSource_);
        DARABONBA_PTR_TO_JSON(ModifiedSource, modifiedSource_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PreviewMedia, previewMedia_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(CreateSource, createSource_);
        DARABONBA_PTR_FROM_JSON(ModifiedSource, modifiedSource_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PreviewMedia, previewMedia_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->config_ == nullptr
        && this->coverUrl_ == nullptr && this->createSource_ == nullptr && this->modifiedSource_ == nullptr && this->name_ == nullptr && this->previewMedia_ == nullptr
        && this->status_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Template& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline Template& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // createSource Field Functions 
      bool hasCreateSource() const { return this->createSource_ != nullptr;};
      void deleteCreateSource() { this->createSource_ = nullptr;};
      inline string getCreateSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
      inline Template& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


      // modifiedSource Field Functions 
      bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
      void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
      inline string getModifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
      inline Template& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // previewMedia Field Functions 
      bool hasPreviewMedia() const { return this->previewMedia_ != nullptr;};
      void deletePreviewMedia() { this->previewMedia_ = nullptr;};
      inline string getPreviewMedia() const { DARABONBA_PTR_GET_DEFAULT(previewMedia_, "") };
      inline Template& setPreviewMedia(string previewMedia) { DARABONBA_PTR_SET_VALUE(previewMedia_, previewMedia) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Template& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Template& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The template configurations.
      shared_ptr<string> config_ {};
      // The URL of the template thumbnail.
      shared_ptr<string> coverUrl_ {};
      // The source from which the template was created.
      // 
      // Valid values:
      // 
      // *   AliyunConsole
      // *   WebSDK
      // *   OpenAPI
      shared_ptr<string> createSource_ {};
      // The source from which the template was modified.
      // 
      // Valid values:
      // 
      // *   AliyunConsole
      // *   WebSDK
      // *   OpenAPI
      shared_ptr<string> modifiedSource_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The ID of the preview video.
      shared_ptr<string> previewMedia_ {};
      // The template state.
      // 
      // Valid values:
      // 
      // *   UploadFailed: Failed to upload the video.
      // *   ProcessFailed: Failed to process the advanced template.
      // *   Available: The template is available.
      // *   Uploading: The video is being uploaded.
      // *   Created: The template is created but not ready for use.
      // *   Processing: The advanced template is being processed.
      shared_ptr<string> status_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template type.
      // 
      // Valid values:
      // 
      // *   Timeline: regular template.
      // *   VETemplate: advanced template.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->template_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const AddTemplateResponseBody::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, AddTemplateResponseBody::Template) };
    inline AddTemplateResponseBody::Template getTemplate() { DARABONBA_PTR_GET(template_, AddTemplateResponseBody::Template) };
    inline AddTemplateResponseBody& setTemplate(const AddTemplateResponseBody::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline AddTemplateResponseBody& setTemplate(AddTemplateResponseBody::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The template information.
    shared_ptr<AddTemplateResponseBody::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
