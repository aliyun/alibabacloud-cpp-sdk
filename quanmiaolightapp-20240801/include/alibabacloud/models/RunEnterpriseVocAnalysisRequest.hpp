// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISREQUEST_HPP_
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
  class RunEnterpriseVocAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEnterpriseVocAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(akProxy, akProxy_);
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(filterTags, filterTags_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(sourceTrace, sourceTrace_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
    };
    friend void from_json(const Darabonba::Json& j, RunEnterpriseVocAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(akProxy, akProxy_);
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(filterTags, filterTags_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(sourceTrace, sourceTrace_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
    };
    RunEnterpriseVocAnalysisRequest() = default ;
    RunEnterpriseVocAnalysisRequest(const RunEnterpriseVocAnalysisRequest &) = default ;
    RunEnterpriseVocAnalysisRequest(RunEnterpriseVocAnalysisRequest &&) = default ;
    RunEnterpriseVocAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEnterpriseVocAnalysisRequest() = default ;
    RunEnterpriseVocAnalysisRequest& operator=(const RunEnterpriseVocAnalysisRequest &) = default ;
    RunEnterpriseVocAnalysisRequest& operator=(RunEnterpriseVocAnalysisRequest &&) = default ;
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
      // 标签定义提示词
      shared_ptr<string> tagDefinePrompt_ {};
      // 标签名称
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
      // 标签定义提示词
      shared_ptr<string> tagDefinePrompt_ {};
      // 标签名称
      shared_ptr<string> tagName_ {};
    };

    virtual bool empty() const override { return this->akProxy_ == nullptr
        && this->apiKey_ == nullptr && this->content_ == nullptr && this->extraInfo_ == nullptr && this->filterTags_ == nullptr && this->modelId_ == nullptr
        && this->outputFormat_ == nullptr && this->sourceTrace_ == nullptr && this->tags_ == nullptr && this->taskDescription_ == nullptr; };
    // akProxy Field Functions 
    bool hasAkProxy() const { return this->akProxy_ != nullptr;};
    void deleteAkProxy() { this->akProxy_ = nullptr;};
    inline string getAkProxy() const { DARABONBA_PTR_GET_DEFAULT(akProxy_, "") };
    inline RunEnterpriseVocAnalysisRequest& setAkProxy(string akProxy) { DARABONBA_PTR_SET_VALUE(akProxy_, akProxy) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline RunEnterpriseVocAnalysisRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunEnterpriseVocAnalysisRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline RunEnterpriseVocAnalysisRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // filterTags Field Functions 
    bool hasFilterTags() const { return this->filterTags_ != nullptr;};
    void deleteFilterTags() { this->filterTags_ = nullptr;};
    inline const vector<RunEnterpriseVocAnalysisRequest::FilterTags> & getFilterTags() const { DARABONBA_PTR_GET_CONST(filterTags_, vector<RunEnterpriseVocAnalysisRequest::FilterTags>) };
    inline vector<RunEnterpriseVocAnalysisRequest::FilterTags> getFilterTags() { DARABONBA_PTR_GET(filterTags_, vector<RunEnterpriseVocAnalysisRequest::FilterTags>) };
    inline RunEnterpriseVocAnalysisRequest& setFilterTags(const vector<RunEnterpriseVocAnalysisRequest::FilterTags> & filterTags) { DARABONBA_PTR_SET_VALUE(filterTags_, filterTags) };
    inline RunEnterpriseVocAnalysisRequest& setFilterTags(vector<RunEnterpriseVocAnalysisRequest::FilterTags> && filterTags) { DARABONBA_PTR_SET_RVALUE(filterTags_, filterTags) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunEnterpriseVocAnalysisRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline RunEnterpriseVocAnalysisRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // sourceTrace Field Functions 
    bool hasSourceTrace() const { return this->sourceTrace_ != nullptr;};
    void deleteSourceTrace() { this->sourceTrace_ = nullptr;};
    inline bool getSourceTrace() const { DARABONBA_PTR_GET_DEFAULT(sourceTrace_, false) };
    inline RunEnterpriseVocAnalysisRequest& setSourceTrace(bool sourceTrace) { DARABONBA_PTR_SET_VALUE(sourceTrace_, sourceTrace) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<RunEnterpriseVocAnalysisRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RunEnterpriseVocAnalysisRequest::Tags>) };
    inline vector<RunEnterpriseVocAnalysisRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<RunEnterpriseVocAnalysisRequest::Tags>) };
    inline RunEnterpriseVocAnalysisRequest& setTags(const vector<RunEnterpriseVocAnalysisRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RunEnterpriseVocAnalysisRequest& setTags(vector<RunEnterpriseVocAnalysisRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline RunEnterpriseVocAnalysisRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


  protected:
    shared_ptr<string> akProxy_ {};
    shared_ptr<string> apiKey_ {};
    // 需要进行VOC分析的文本内容（content、contents、url、fileKey 四选一。优先级从小到大）
    shared_ptr<string> content_ {};
    shared_ptr<string> extraInfo_ {};
    // 过滤标签，用于筛选符合条件的内容。
    shared_ptr<vector<RunEnterpriseVocAnalysisRequest::FilterTags>> filterTags_ {};
    shared_ptr<string> modelId_ {};
    // 指定返回结果的格式，支持json或text
    shared_ptr<string> outputFormat_ {};
    shared_ptr<bool> sourceTrace_ {};
    // 业务标签体系，用于对文本内容进行分类和分析。
    shared_ptr<vector<RunEnterpriseVocAnalysisRequest::Tags>> tags_ {};
    shared_ptr<string> taskDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
