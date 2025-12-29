// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitEnterpriseVocAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseVocAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ContentTags, contentTags_);
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(FilterTags, filterTags_);
      DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(PositiveSample, positiveSample_);
      DARABONBA_PTR_TO_JSON(PositiveSampleFileKey, positiveSampleFileKey_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseVocAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ContentTags, contentTags_);
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(FilterTags, filterTags_);
      DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(PositiveSample, positiveSample_);
      DARABONBA_PTR_FROM_JSON(PositiveSampleFileKey, positiveSampleFileKey_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitEnterpriseVocAnalysisTaskRequest() = default ;
    SubmitEnterpriseVocAnalysisTaskRequest(const SubmitEnterpriseVocAnalysisTaskRequest &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequest(SubmitEnterpriseVocAnalysisTaskRequest &&) = default ;
    SubmitEnterpriseVocAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEnterpriseVocAnalysisTaskRequest() = default ;
    SubmitEnterpriseVocAnalysisTaskRequest& operator=(const SubmitEnterpriseVocAnalysisTaskRequest &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequest& operator=(SubmitEnterpriseVocAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FilterTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterTags& obj) { 
        DARABONBA_PTR_TO_JSON(TagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
        DARABONBA_PTR_TO_JSON(TagType, tagType_);
        DARABONBA_PTR_TO_JSON(TagValueDefinePrompt, tagValueDefinePrompt_);
      };
      friend void from_json(const Darabonba::Json& j, FilterTags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        DARABONBA_PTR_FROM_JSON(TagType, tagType_);
        DARABONBA_PTR_FROM_JSON(TagValueDefinePrompt, tagValueDefinePrompt_);
      };
      FilterTags() = default ;
      FilterTags(const FilterTags &) = default ;
      FilterTags(FilterTags &&) = default ;
      FilterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterTags() = default ;
      FilterTags& operator=(const FilterTags &) = default ;
      FilterTags& operator=(FilterTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagDefinePrompt_ == nullptr
        && this->tagName_ == nullptr && this->tagType_ == nullptr && this->tagValueDefinePrompt_ == nullptr; };
      // tagDefinePrompt Field Functions 
      bool hasTagDefinePrompt() const { return this->tagDefinePrompt_ != nullptr;};
      void deleteTagDefinePrompt() { this->tagDefinePrompt_ = nullptr;};
      inline string getTagDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagDefinePrompt_, "") };
      inline FilterTags& setTagDefinePrompt(string tagDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagDefinePrompt_, tagDefinePrompt) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline FilterTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      // tagType Field Functions 
      bool hasTagType() const { return this->tagType_ != nullptr;};
      void deleteTagType() { this->tagType_ = nullptr;};
      inline string getTagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
      inline FilterTags& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


      // tagValueDefinePrompt Field Functions 
      bool hasTagValueDefinePrompt() const { return this->tagValueDefinePrompt_ != nullptr;};
      void deleteTagValueDefinePrompt() { this->tagValueDefinePrompt_ = nullptr;};
      inline string getTagValueDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagValueDefinePrompt_, "") };
      inline FilterTags& setTagValueDefinePrompt(string tagValueDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagValueDefinePrompt_, tagValueDefinePrompt) };


    protected:
      shared_ptr<string> tagDefinePrompt_ {};
      shared_ptr<string> tagName_ {};
      shared_ptr<string> tagType_ {};
      shared_ptr<string> tagValueDefinePrompt_ {};
    };

    class Contents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contents& obj) { 
        DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(Text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Contents& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
      };
      Contents() = default ;
      Contents(const Contents &) = default ;
      Contents(Contents &&) = default ;
      Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contents() = default ;
      Contents& operator=(const Contents &) = default ;
      Contents& operator=(Contents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extraInfo_ == nullptr
        && this->text_ == nullptr; };
      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
      inline Contents& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Contents& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      shared_ptr<string> extraInfo_ {};
      shared_ptr<string> text_ {};
    };

    class ContentTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContentTags& obj) { 
        DARABONBA_PTR_TO_JSON(TagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
        DARABONBA_PTR_TO_JSON(TagTaskType, tagTaskType_);
        DARABONBA_PTR_TO_JSON(TagValueDefinePrompt, tagValueDefinePrompt_);
      };
      friend void from_json(const Darabonba::Json& j, ContentTags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        DARABONBA_PTR_FROM_JSON(TagTaskType, tagTaskType_);
        DARABONBA_PTR_FROM_JSON(TagValueDefinePrompt, tagValueDefinePrompt_);
      };
      ContentTags() = default ;
      ContentTags(const ContentTags &) = default ;
      ContentTags(ContentTags &&) = default ;
      ContentTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContentTags() = default ;
      ContentTags& operator=(const ContentTags &) = default ;
      ContentTags& operator=(ContentTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagDefinePrompt_ == nullptr
        && this->tagName_ == nullptr && this->tagTaskType_ == nullptr && this->tagValueDefinePrompt_ == nullptr; };
      // tagDefinePrompt Field Functions 
      bool hasTagDefinePrompt() const { return this->tagDefinePrompt_ != nullptr;};
      void deleteTagDefinePrompt() { this->tagDefinePrompt_ = nullptr;};
      inline string getTagDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagDefinePrompt_, "") };
      inline ContentTags& setTagDefinePrompt(string tagDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagDefinePrompt_, tagDefinePrompt) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline ContentTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      // tagTaskType Field Functions 
      bool hasTagTaskType() const { return this->tagTaskType_ != nullptr;};
      void deleteTagTaskType() { this->tagTaskType_ = nullptr;};
      inline string getTagTaskType() const { DARABONBA_PTR_GET_DEFAULT(tagTaskType_, "") };
      inline ContentTags& setTagTaskType(string tagTaskType) { DARABONBA_PTR_SET_VALUE(tagTaskType_, tagTaskType) };


      // tagValueDefinePrompt Field Functions 
      bool hasTagValueDefinePrompt() const { return this->tagValueDefinePrompt_ != nullptr;};
      void deleteTagValueDefinePrompt() { this->tagValueDefinePrompt_ = nullptr;};
      inline string getTagValueDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagValueDefinePrompt_, "") };
      inline ContentTags& setTagValueDefinePrompt(string tagValueDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagValueDefinePrompt_, tagValueDefinePrompt) };


    protected:
      shared_ptr<string> tagDefinePrompt_ {};
      shared_ptr<string> tagName_ {};
      shared_ptr<string> tagTaskType_ {};
      shared_ptr<string> tagValueDefinePrompt_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->contentTags_ == nullptr && this->contents_ == nullptr && this->fileKey_ == nullptr && this->filterTags_ == nullptr && this->materialType_ == nullptr
        && this->modelId_ == nullptr && this->positiveSample_ == nullptr && this->positiveSampleFileKey_ == nullptr && this->taskType_ == nullptr && this->workspaceId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // contentTags Field Functions 
    bool hasContentTags() const { return this->contentTags_ != nullptr;};
    void deleteContentTags() { this->contentTags_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequest::ContentTags> & getContentTags() const { DARABONBA_PTR_GET_CONST(contentTags_, vector<SubmitEnterpriseVocAnalysisTaskRequest::ContentTags>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequest::ContentTags> getContentTags() { DARABONBA_PTR_GET(contentTags_, vector<SubmitEnterpriseVocAnalysisTaskRequest::ContentTags>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContentTags(const vector<SubmitEnterpriseVocAnalysisTaskRequest::ContentTags> & contentTags) { DARABONBA_PTR_SET_VALUE(contentTags_, contentTags) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContentTags(vector<SubmitEnterpriseVocAnalysisTaskRequest::ContentTags> && contentTags) { DARABONBA_PTR_SET_RVALUE(contentTags_, contentTags) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContents(const vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContents(vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // filterTags Field Functions 
    bool hasFilterTags() const { return this->filterTags_ != nullptr;};
    void deleteFilterTags() { this->filterTags_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequest::FilterTags> & getFilterTags() const { DARABONBA_PTR_GET_CONST(filterTags_, vector<SubmitEnterpriseVocAnalysisTaskRequest::FilterTags>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequest::FilterTags> getFilterTags() { DARABONBA_PTR_GET(filterTags_, vector<SubmitEnterpriseVocAnalysisTaskRequest::FilterTags>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFilterTags(const vector<SubmitEnterpriseVocAnalysisTaskRequest::FilterTags> & filterTags) { DARABONBA_PTR_SET_VALUE(filterTags_, filterTags) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFilterTags(vector<SubmitEnterpriseVocAnalysisTaskRequest::FilterTags> && filterTags) { DARABONBA_PTR_SET_RVALUE(filterTags_, filterTags) };


    // materialType Field Functions 
    bool hasMaterialType() const { return this->materialType_ != nullptr;};
    void deleteMaterialType() { this->materialType_ = nullptr;};
    inline string getMaterialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // positiveSample Field Functions 
    bool hasPositiveSample() const { return this->positiveSample_ != nullptr;};
    void deletePositiveSample() { this->positiveSample_ = nullptr;};
    inline string getPositiveSample() const { DARABONBA_PTR_GET_DEFAULT(positiveSample_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setPositiveSample(string positiveSample) { DARABONBA_PTR_SET_VALUE(positiveSample_, positiveSample) };


    // positiveSampleFileKey Field Functions 
    bool hasPositiveSampleFileKey() const { return this->positiveSampleFileKey_ != nullptr;};
    void deletePositiveSampleFileKey() { this->positiveSampleFileKey_ = nullptr;};
    inline string getPositiveSampleFileKey() const { DARABONBA_PTR_GET_DEFAULT(positiveSampleFileKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setPositiveSampleFileKey(string positiveSampleFileKey) { DARABONBA_PTR_SET_VALUE(positiveSampleFileKey_, positiveSampleFileKey) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> apiKey_ {};
    // This parameter is required.
    shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequest::ContentTags>> contentTags_ {};
    shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents>> contents_ {};
    shared_ptr<string> fileKey_ {};
    shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequest::FilterTags>> filterTags_ {};
    shared_ptr<string> materialType_ {};
    // This parameter is required.
    shared_ptr<string> modelId_ {};
    shared_ptr<string> positiveSample_ {};
    shared_ptr<string> positiveSampleFileKey_ {};
    shared_ptr<string> taskType_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
