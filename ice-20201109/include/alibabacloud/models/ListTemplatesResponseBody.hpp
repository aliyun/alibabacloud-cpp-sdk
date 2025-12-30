// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTemplatesResponseBody() = default ;
    ListTemplatesResponseBody(const ListTemplatesResponseBody &) = default ;
    ListTemplatesResponseBody(ListTemplatesResponseBody &&) = default ;
    ListTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBody() = default ;
    ListTemplatesResponseBody& operator=(const ListTemplatesResponseBody &) = default ;
    ListTemplatesResponseBody& operator=(ListTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
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
      virtual bool empty() const override { return this->clipsParam_ == nullptr
        && this->config_ == nullptr && this->coverURL_ == nullptr && this->createSource_ == nullptr && this->creationTime_ == nullptr && this->modifiedSource_ == nullptr
        && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->previewMedia_ == nullptr && this->previewMediaStatus_ == nullptr && this->status_ == nullptr
        && this->templateId_ == nullptr && this->type_ == nullptr; };
      // clipsParam Field Functions 
      bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
      void deleteClipsParam() { this->clipsParam_ = nullptr;};
      inline string getClipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
      inline Templates& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Templates& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline Templates& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // createSource Field Functions 
      bool hasCreateSource() const { return this->createSource_ != nullptr;};
      void deleteCreateSource() { this->createSource_ = nullptr;};
      inline string getCreateSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
      inline Templates& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Templates& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // modifiedSource Field Functions 
      bool hasModifiedSource() const { return this->modifiedSource_ != nullptr;};
      void deleteModifiedSource() { this->modifiedSource_ = nullptr;};
      inline string getModifiedSource() const { DARABONBA_PTR_GET_DEFAULT(modifiedSource_, "") };
      inline Templates& setModifiedSource(string modifiedSource) { DARABONBA_PTR_SET_VALUE(modifiedSource_, modifiedSource) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Templates& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Templates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // previewMedia Field Functions 
      bool hasPreviewMedia() const { return this->previewMedia_ != nullptr;};
      void deletePreviewMedia() { this->previewMedia_ = nullptr;};
      inline string getPreviewMedia() const { DARABONBA_PTR_GET_DEFAULT(previewMedia_, "") };
      inline Templates& setPreviewMedia(string previewMedia) { DARABONBA_PTR_SET_VALUE(previewMedia_, previewMedia) };


      // previewMediaStatus Field Functions 
      bool hasPreviewMediaStatus() const { return this->previewMediaStatus_ != nullptr;};
      void deletePreviewMediaStatus() { this->previewMediaStatus_ = nullptr;};
      inline string getPreviewMediaStatus() const { DARABONBA_PTR_GET_DEFAULT(previewMediaStatus_, "") };
      inline Templates& setPreviewMediaStatus(string previewMediaStatus) { DARABONBA_PTR_SET_VALUE(previewMediaStatus_, previewMediaStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Templates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Templates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Templates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The clip parameters.
      shared_ptr<string> clipsParam_ {};
      // The template configurations.
      shared_ptr<string> config_ {};
      // The thumbnail URL.
      shared_ptr<string> coverURL_ {};
      // The source from which the template was created.
      // 
      // Valid values:
      // 
      // *   AliyunConsole
      // *   WebSDK
      // *   OpenAPI
      shared_ptr<string> createSource_ {};
      // The time when the template was created.
      shared_ptr<string> creationTime_ {};
      // The source from which the template was modified.
      // 
      // Valid values:
      // 
      // *   AliyunConsole
      // *   WebSDK
      // *   OpenAPI
      shared_ptr<string> modifiedSource_ {};
      // The time when the template was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The preview media asset.
      shared_ptr<string> previewMedia_ {};
      // The state of the preview media asset.
      // 
      // Valid values:
      // 
      // *   PrepareFail
      // *   Init
      // *   Normal
      // *   Preparing
      shared_ptr<string> previewMediaStatus_ {};
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
        && this->templates_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<ListTemplatesResponseBody::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<ListTemplatesResponseBody::Templates>) };
    inline vector<ListTemplatesResponseBody::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<ListTemplatesResponseBody::Templates>) };
    inline ListTemplatesResponseBody& setTemplates(const vector<ListTemplatesResponseBody::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline ListTemplatesResponseBody& setTemplates(vector<ListTemplatesResponseBody::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried templates.
    shared_ptr<vector<ListTemplatesResponseBody::Templates>> templates_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
