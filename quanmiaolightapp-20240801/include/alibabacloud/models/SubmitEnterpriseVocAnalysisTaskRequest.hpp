// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitEnterpriseVocAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseVocAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(contents, contents_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(fileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(filterTags, filterTags_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(sourceTrace, sourceTrace_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseVocAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(contents, contents_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(fileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(filterTags, filterTags_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(sourceTrace, sourceTrace_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(url, url_);
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(tagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_TO_JSON(tagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_FROM_JSON(tagName, tagName_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagDefinePrompt_ == nullptr
        && this->tagName_ == nullptr; };
      // tagDefinePrompt Field Functions 
      bool hasTagDefinePrompt() const { return this->tagDefinePrompt_ != nullptr;};
      void deleteTagDefinePrompt() { this->tagDefinePrompt_ = nullptr;};
      inline string getTagDefinePrompt() const { DARABONBA_PTR_GET_DEFAULT(tagDefinePrompt_, "") };
      inline Tags& setTagDefinePrompt(string tagDefinePrompt) { DARABONBA_PTR_SET_VALUE(tagDefinePrompt_, tagDefinePrompt) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline Tags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    protected:
      shared_ptr<string> tagDefinePrompt_ {};
      shared_ptr<string> tagName_ {};
    };

    class FilterTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterTags& obj) { 
        DARABONBA_PTR_TO_JSON(tagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_TO_JSON(tagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, FilterTags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagDefinePrompt, tagDefinePrompt_);
        DARABONBA_PTR_FROM_JSON(tagName, tagName_);
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
        && this->tagName_ == nullptr; };
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


    protected:
      shared_ptr<string> tagDefinePrompt_ {};
      shared_ptr<string> tagName_ {};
    };

    class Contents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contents& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Contents& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(text, text_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->text_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Contents& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Contents& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->contents_ == nullptr && this->extraInfo_ == nullptr && this->fileKey_ == nullptr && this->filterTags_ == nullptr && this->modelId_ == nullptr
        && this->outputFormat_ == nullptr && this->sourceTrace_ == nullptr && this->tags_ == nullptr && this->taskDescription_ == nullptr && this->url_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContents(const vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContents(vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


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


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // sourceTrace Field Functions 
    bool hasSourceTrace() const { return this->sourceTrace_ != nullptr;};
    void deleteSourceTrace() { this->sourceTrace_ = nullptr;};
    inline bool getSourceTrace() const { DARABONBA_PTR_GET_DEFAULT(sourceTrace_, false) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setSourceTrace(bool sourceTrace) { DARABONBA_PTR_SET_VALUE(sourceTrace_, sourceTrace) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SubmitEnterpriseVocAnalysisTaskRequest::Tags>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<SubmitEnterpriseVocAnalysisTaskRequest::Tags>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setTags(const vector<SubmitEnterpriseVocAnalysisTaskRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setTags(vector<SubmitEnterpriseVocAnalysisTaskRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequest::Contents>> contents_ {};
    shared_ptr<string> extraInfo_ {};
    shared_ptr<string> fileKey_ {};
    shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequest::FilterTags>> filterTags_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> outputFormat_ {};
    shared_ptr<bool> sourceTrace_ {};
    shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequest::Tags>> tags_ {};
    shared_ptr<string> taskDescription_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
