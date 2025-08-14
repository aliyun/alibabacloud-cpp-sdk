// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PreviewMedia, previewMedia_);
      DARABONBA_PTR_TO_JSON(RelatedMediaids, relatedMediaids_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PreviewMedia, previewMedia_);
      DARABONBA_PTR_FROM_JSON(RelatedMediaids, relatedMediaids_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddTemplateRequest() = default ;
    AddTemplateRequest(const AddTemplateRequest &) = default ;
    AddTemplateRequest(AddTemplateRequest &&) = default ;
    AddTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateRequest() = default ;
    AddTemplateRequest& operator=(const AddTemplateRequest &) = default ;
    AddTemplateRequest& operator=(AddTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->coverUrl_ != nullptr && this->name_ != nullptr && this->previewMedia_ != nullptr && this->relatedMediaids_ != nullptr && this->source_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline AddTemplateRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline AddTemplateRequest& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // previewMedia Field Functions 
    bool hasPreviewMedia() const { return this->previewMedia_ != nullptr;};
    void deletePreviewMedia() { this->previewMedia_ = nullptr;};
    inline string previewMedia() const { DARABONBA_PTR_GET_DEFAULT(previewMedia_, "") };
    inline AddTemplateRequest& setPreviewMedia(string previewMedia) { DARABONBA_PTR_SET_VALUE(previewMedia_, previewMedia) };


    // relatedMediaids Field Functions 
    bool hasRelatedMediaids() const { return this->relatedMediaids_ != nullptr;};
    void deleteRelatedMediaids() { this->relatedMediaids_ = nullptr;};
    inline string relatedMediaids() const { DARABONBA_PTR_GET_DEFAULT(relatedMediaids_, "") };
    inline AddTemplateRequest& setRelatedMediaids(string relatedMediaids) { DARABONBA_PTR_SET_VALUE(relatedMediaids_, relatedMediaids) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddTemplateRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AddTemplateRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    // The URL of the template thumbnail.
    std::shared_ptr<string> coverUrl_ = nullptr;
    // The name of the custom template.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the template preview video.
    std::shared_ptr<string> previewMedia_ = nullptr;
    // The IDs of the materials associated with the template for use by the regular template editor.
    std::shared_ptr<string> relatedMediaids_ = nullptr;
    // The source from which the template is created. Valid values:
    // 
    // *   OpenAPI
    // *   AliyunConsole
    // *   WebSDK
    // 
    // <!---->
    std::shared_ptr<string> source_ = nullptr;
    // The template state. Valid values:
    // 
    // *   Available: The template is available.
    // *   Created: The template is created but not ready for use.
    // *   Uploading: The video is being uploaded.
    // *   Processing: The advanced template is being processed.
    // *   UploadFailed: Failed to upload the video.
    // *   ProcessFailed: Failed to process the advanced template.
    // 
    // <!---->
    std::shared_ptr<string> status_ = nullptr;
    // The template type. Valid values:
    // 
    // *   Timeline: a regular template created based on the timeline of a video editing project, in which multiple materials are arranged in sequence across multiple layers. It can be used to convert text and images into videos, create photo albums, add opening and closing parts, and apply the default watermark.
    // *   VETemplate: an advanced template created using effects of Adobe After Effects (AE). It can be used to produce complex animations and advanced media effects.
    // 
    // <!---->
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
