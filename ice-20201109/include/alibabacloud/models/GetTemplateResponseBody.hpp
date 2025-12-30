// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    GetTemplateResponseBody() = default ;
    GetTemplateResponseBody(const GetTemplateResponseBody &) = default ;
    GetTemplateResponseBody(GetTemplateResponseBody &&) = default ;
    GetTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateResponseBody() = default ;
    GetTemplateResponseBody& operator=(const GetTemplateResponseBody &) = default ;
    GetTemplateResponseBody& operator=(GetTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(ClipsParam, clipsParam_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_TO_JSON(CreateSource, createSource_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(ModifiedSource, modifiedSource_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PreviewMedia, previewMedia_);
        DARABONBA_PTR_TO_JSON(PreviewMediaStatus, previewMediaStatus_);
        DARABONBA_PTR_TO_JSON(RelatedMediaids, relatedMediaids_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(ClipsParam, clipsParam_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_FROM_JSON(CreateSource, createSource_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedSource, modifiedSource_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PreviewMedia, previewMedia_);
        DARABONBA_PTR_FROM_JSON(PreviewMediaStatus, previewMediaStatus_);
        DARABONBA_PTR_FROM_JSON(RelatedMediaids, relatedMediaids_);
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
      virtual bool empty() const override { return this->clipsParam_ == nullptr
        && this->config_ == nullptr && this->coverURL_ == nullptr && this->createSource_ == nullptr && this->creationTime_ == nullptr && this->modifiedSource_ == nullptr
        && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->previewMedia_ == nullptr && this->previewMediaStatus_ == nullptr && this->relatedMediaids_ == nullptr
        && this->status_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr; };
      // clipsParam Field Functions 
      bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
      void deleteClipsParam() { this->clipsParam_ = nullptr;};
      inline string getClipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
      inline Template& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Template& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline Template& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // createSource Field Functions 
      bool hasCreateSource() const { return this->createSource_ != nullptr;};
      void deleteCreateSource() { this->createSource_ = nullptr;};
      inline string getCreateSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
      inline Template& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Template& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // modifiedSource Field Functions 
      bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
      void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
      inline string getModifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
      inline Template& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Template& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


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


      // previewMediaStatus Field Functions 
      bool hasPreviewMediaStatus() const { return this->previewMediaStatus_ != nullptr;};
      void deletePreviewMediaStatus() { this->previewMediaStatus_ = nullptr;};
      inline string getPreviewMediaStatus() const { DARABONBA_PTR_GET_DEFAULT(previewMediaStatus_, "") };
      inline Template& setPreviewMediaStatus(string previewMediaStatus) { DARABONBA_PTR_SET_VALUE(previewMediaStatus_, previewMediaStatus) };


      // relatedMediaids Field Functions 
      bool hasRelatedMediaids() const { return this->relatedMediaids_ != nullptr;};
      void deleteRelatedMediaids() { this->relatedMediaids_ = nullptr;};
      inline string getRelatedMediaids() const { DARABONBA_PTR_GET_DEFAULT(relatedMediaids_, "") };
      inline Template& setRelatedMediaids(string relatedMediaids) { DARABONBA_PTR_SET_VALUE(relatedMediaids_, relatedMediaids) };


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
      // The clip parameters for submitting a video production job. You can replace mediaId and text with real values to submit a job. References:
      // 
      // *   [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html)
      // *   [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html)
      shared_ptr<string> clipsParam_ {};
      // The template configurations.
      // 
      // *   For more information about the configurations of a regular template, see [Config object of a regular template](https://help.aliyun.com/document_detail/456193.html).
      // *   For more information about the configurations of an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
      shared_ptr<string> config_ {};
      // The thumbnail URL.
      shared_ptr<string> coverURL_ {};
      // The source from which the template was created. Valid values:
      // 
      // *   AliyunConsole
      // *   OpenAPI
      // *   WebSDK
      shared_ptr<string> createSource_ {};
      // The time when the template was created.
      shared_ptr<string> creationTime_ {};
      // The source from which the template was modified. Valid values:
      // 
      // *   AliyunConsole
      // *   OpenAPI
      // *   WebSDK
      shared_ptr<string> modifiedSource_ {};
      // The time when the template was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The preview media asset.
      shared_ptr<string> previewMedia_ {};
      // The state of the preview media asset. Valid values:
      // 
      // *   Init: the initial state, which indicates that the source file is not ready.
      // *   Preparing: The source file is being prepared. For example, the file is being uploaded or edited.
      // *   PrepareFail: The source file failed to be prepared. For example, the information about the source file failed to be obtained.
      // *   Normal: The source file is ready.
      shared_ptr<string> previewMediaStatus_ {};
      // The IDs of the materials associated with the template for use by the regular template editor.
      shared_ptr<string> relatedMediaids_ {};
      // The template state. Valid values:
      // 
      // *   Available
      // *   Created
      // *   Uploading
      // *   Processing
      // *   UploadFailed
      // *   ProcessFailed
      shared_ptr<string> status_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template type. Valid values:
      // 
      // *   Timeline
      // *   VETemplate
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->template_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const GetTemplateResponseBody::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, GetTemplateResponseBody::Template) };
    inline GetTemplateResponseBody::Template getTemplate() { DARABONBA_PTR_GET(template_, GetTemplateResponseBody::Template) };
    inline GetTemplateResponseBody& setTemplate(const GetTemplateResponseBody::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline GetTemplateResponseBody& setTemplate(GetTemplateResponseBody::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The template information.
    shared_ptr<GetTemplateResponseBody::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
