// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddTemplateResponseBodyTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateResponseBodyTemplate& obj) { 
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
    friend void from_json(const Darabonba::Json& j, AddTemplateResponseBodyTemplate& obj) { 
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
    AddTemplateResponseBodyTemplate() = default ;
    AddTemplateResponseBodyTemplate(const AddTemplateResponseBodyTemplate &) = default ;
    AddTemplateResponseBodyTemplate(AddTemplateResponseBodyTemplate &&) = default ;
    AddTemplateResponseBodyTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateResponseBodyTemplate() = default ;
    AddTemplateResponseBodyTemplate& operator=(const AddTemplateResponseBodyTemplate &) = default ;
    AddTemplateResponseBodyTemplate& operator=(AddTemplateResponseBodyTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->coverUrl_ == nullptr && return this->createSource_ == nullptr && return this->modifiedSource_ == nullptr && return this->name_ == nullptr && return this->previewMedia_ == nullptr
        && return this->status_ == nullptr && return this->templateId_ == nullptr && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline AddTemplateResponseBodyTemplate& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline AddTemplateResponseBodyTemplate& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // createSource Field Functions 
    bool hasCreateSource() const { return this->createSource_ != nullptr;};
    void deleteCreateSource() { this->createSource_ = nullptr;};
    inline string createSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
    inline AddTemplateResponseBodyTemplate& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


    // modifiedSource Field Functions 
    bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
    void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
    inline string modifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
    inline AddTemplateResponseBodyTemplate& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddTemplateResponseBodyTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // previewMedia Field Functions 
    bool hasPreviewMedia() const { return this->previewMedia_ != nullptr;};
    void deletePreviewMedia() { this->previewMedia_ = nullptr;};
    inline string previewMedia() const { DARABONBA_PTR_GET_DEFAULT(previewMedia_, "") };
    inline AddTemplateResponseBodyTemplate& setPreviewMedia(string previewMedia) { DARABONBA_PTR_SET_VALUE(previewMedia_, previewMedia) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AddTemplateResponseBodyTemplate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AddTemplateResponseBodyTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddTemplateResponseBodyTemplate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The template configurations.
    std::shared_ptr<string> config_ = nullptr;
    // The URL of the template thumbnail.
    std::shared_ptr<string> coverUrl_ = nullptr;
    // The source from which the template was created.
    // 
    // Valid values:
    // 
    // *   AliyunConsole
    // *   WebSDK
    // *   OpenAPI
    std::shared_ptr<string> createSource_ = nullptr;
    // The source from which the template was modified.
    // 
    // Valid values:
    // 
    // *   AliyunConsole
    // *   WebSDK
    // *   OpenAPI
    std::shared_ptr<string> modifiedSource_ = nullptr;
    // The template name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the preview video.
    std::shared_ptr<string> previewMedia_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template type.
    // 
    // Valid values:
    // 
    // *   Timeline: regular template.
    // *   VETemplate: advanced template.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
