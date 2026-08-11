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
    virtual bool empty() const override { return this->config_ == nullptr
        && this->coverUrl_ == nullptr && this->name_ == nullptr && this->previewMedia_ == nullptr && this->relatedMediaids_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline AddTemplateRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline AddTemplateRequest& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // previewMedia Field Functions 
    bool hasPreviewMedia() const { return this->previewMedia_ != nullptr;};
    void deletePreviewMedia() { this->previewMedia_ = nullptr;};
    inline string getPreviewMedia() const { DARABONBA_PTR_GET_DEFAULT(previewMedia_, "") };
    inline AddTemplateRequest& setPreviewMedia(string previewMedia) { DARABONBA_PTR_SET_VALUE(previewMedia_, previewMedia) };


    // relatedMediaids Field Functions 
    bool hasRelatedMediaids() const { return this->relatedMediaids_ != nullptr;};
    void deleteRelatedMediaids() { this->relatedMediaids_ = nullptr;};
    inline string getRelatedMediaids() const { DARABONBA_PTR_GET_DEFAULT(relatedMediaids_, "") };
    inline AddTemplateRequest& setRelatedMediaids(string relatedMediaids) { DARABONBA_PTR_SET_VALUE(relatedMediaids_, relatedMediaids) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddTemplateRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AddTemplateRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // - The standard template Config is an encapsulation based on the cloud editing Timeline. Custom template Config provides more flexibility. If you have special requirements, familiarize yourself with the Config structure and customize the template. For details, see [Standard template Config details](https://help.aliyun.com/document_detail/456193.html).
    // - For more template Config examples, see [Common standard template Config examples](https://help.aliyun.com/document_detail/451634.html).
    // - For one-click video production template Config configurations, see [One-click video production template configuration parameter description](https://help.aliyun.com/document_detail/2878274.html).
    shared_ptr<string> config_ {};
    // The template cover URL.
    shared_ptr<string> coverUrl_ {};
    // The custom template name.
    shared_ptr<string> name_ {};
    // The media asset ID of the template preview video.
    shared_ptr<string> previewMedia_ {};
    // The media assets associated with the template, used by the standard template editor.
    shared_ptr<string> relatedMediaids_ {};
    // The template creation source. Valid values:
    // - OpenAPI: created by using OpenAPI.
    // - AliyunConsole: created by using the Alibaba Cloud Management Console.
    // - WebSDK: created by using WebSDK.
    shared_ptr<string> source_ {};
    // The template status. Valid values:
    // - Available: normal.
    // - Created: created but not yet available.
    // - Uploading: uploading.
    // - Processing: advanced template is being analyzed.
    // - UploadFailed: upload failed.
    // - ProcessFailed: advanced template analysis failed.
    shared_ptr<string> status_ {};
    // The templatetype. Valid values:  
    // - Timeline (standard template): a template created based on the Timeline of a video clip node (multiple materials on multiple tracks are concatenated in sequence). This templatetype can be used to implement effects such as image-to-video conversion, photo albums, intros and outros, and default watermarks.
    // - VETemplate (advanced template): a template created based on Adobe After Effects (AE) effects. This templatetype can be used to implement advanced media effects with complex animations.
    // - BatchEditing (one-click video production template): supports configurations for sticker watermarks, background music, background images, narration subtitle styles, title subtitle styles, and output resolution parameters. These configurations are automatically applied when you commit a one-click video production node.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
