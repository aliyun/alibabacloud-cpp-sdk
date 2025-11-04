// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBodyTemplates& obj) { 
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
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBodyTemplates& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTemplatesResponseBodyTemplates() = default ;
    ListTemplatesResponseBodyTemplates(const ListTemplatesResponseBodyTemplates &) = default ;
    ListTemplatesResponseBodyTemplates(ListTemplatesResponseBodyTemplates &&) = default ;
    ListTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBodyTemplates() = default ;
    ListTemplatesResponseBodyTemplates& operator=(const ListTemplatesResponseBodyTemplates &) = default ;
    ListTemplatesResponseBodyTemplates& operator=(ListTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipsParam_ == nullptr
        && return this->config_ == nullptr && return this->coverURL_ == nullptr && return this->createSource_ == nullptr && return this->creationTime_ == nullptr && return this->modifiedSource_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->name_ == nullptr && return this->previewMedia_ == nullptr && return this->previewMediaStatus_ == nullptr && return this->status_ == nullptr
        && return this->templateId_ == nullptr && return this->type_ == nullptr; };
    // clipsParam Field Functions 
    bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
    void deleteClipsParam() { this->clipsParam_ = nullptr;};
    inline string clipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
    inline ListTemplatesResponseBodyTemplates& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListTemplatesResponseBodyTemplates& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline ListTemplatesResponseBodyTemplates& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // createSource Field Functions 
    bool hasCreateSource() const { return this->createSource_ != nullptr;};
    void deleteCreateSource() { this->createSource_ = nullptr;};
    inline string createSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
    inline ListTemplatesResponseBodyTemplates& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTemplatesResponseBodyTemplates& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // modifiedSource Field Functions 
    bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
    void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
    inline string modifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
    inline ListTemplatesResponseBodyTemplates& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListTemplatesResponseBodyTemplates& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTemplatesResponseBodyTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // previewMedia Field Functions 
    bool hasPreviewMedia() const { return this->previewMedia_ != nullptr;};
    void deletePreviewMedia() { this->previewMedia_ = nullptr;};
    inline string previewMedia() const { DARABONBA_PTR_GET_DEFAULT(previewMedia_, "") };
    inline ListTemplatesResponseBodyTemplates& setPreviewMedia(string previewMedia) { DARABONBA_PTR_SET_VALUE(previewMedia_, previewMedia) };


    // previewMediaStatus Field Functions 
    bool hasPreviewMediaStatus() const { return this->previewMediaStatus_ != nullptr;};
    void deletePreviewMediaStatus() { this->previewMediaStatus_ = nullptr;};
    inline string previewMediaStatus() const { DARABONBA_PTR_GET_DEFAULT(previewMediaStatus_, "") };
    inline ListTemplatesResponseBodyTemplates& setPreviewMediaStatus(string previewMediaStatus) { DARABONBA_PTR_SET_VALUE(previewMediaStatus_, previewMediaStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTemplatesResponseBodyTemplates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTemplatesResponseBodyTemplates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The clip parameters.
    std::shared_ptr<string> clipsParam_ = nullptr;
    // The template configurations.
    std::shared_ptr<string> config_ = nullptr;
    // The thumbnail URL.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The source from which the template was created.
    // 
    // Valid values:
    // 
    // *   AliyunConsole
    // *   WebSDK
    // *   OpenAPI
    std::shared_ptr<string> createSource_ = nullptr;
    // The time when the template was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The source from which the template was modified.
    // 
    // Valid values:
    // 
    // *   AliyunConsole
    // *   WebSDK
    // *   OpenAPI
    std::shared_ptr<string> modifiedSource_ = nullptr;
    // The time when the template was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The template name.
    std::shared_ptr<string> name_ = nullptr;
    // The preview media asset.
    std::shared_ptr<string> previewMedia_ = nullptr;
    // The state of the preview media asset.
    // 
    // Valid values:
    // 
    // *   PrepareFail
    // *   Init
    // *   Normal
    // *   Preparing
    std::shared_ptr<string> previewMediaStatus_ = nullptr;
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
