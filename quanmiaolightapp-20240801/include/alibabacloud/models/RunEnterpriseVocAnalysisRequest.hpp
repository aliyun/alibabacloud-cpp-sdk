// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunEnterpriseVocAnalysisRequestFilterTags.hpp>
#include <alibabacloud/models/RunEnterpriseVocAnalysisRequestTags.hpp>
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
    virtual bool empty() const override { this->akProxy_ != nullptr
        && this->apiKey_ != nullptr && this->content_ != nullptr && this->extraInfo_ != nullptr && this->filterTags_ != nullptr && this->modelId_ != nullptr
        && this->outputFormat_ != nullptr && this->sourceTrace_ != nullptr && this->tags_ != nullptr && this->taskDescription_ != nullptr; };
    // akProxy Field Functions 
    bool hasAkProxy() const { return this->akProxy_ != nullptr;};
    void deleteAkProxy() { this->akProxy_ = nullptr;};
    inline string akProxy() const { DARABONBA_PTR_GET_DEFAULT(akProxy_, "") };
    inline RunEnterpriseVocAnalysisRequest& setAkProxy(string akProxy) { DARABONBA_PTR_SET_VALUE(akProxy_, akProxy) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline RunEnterpriseVocAnalysisRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunEnterpriseVocAnalysisRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline RunEnterpriseVocAnalysisRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // filterTags Field Functions 
    bool hasFilterTags() const { return this->filterTags_ != nullptr;};
    void deleteFilterTags() { this->filterTags_ = nullptr;};
    inline const vector<RunEnterpriseVocAnalysisRequestFilterTags> & filterTags() const { DARABONBA_PTR_GET_CONST(filterTags_, vector<RunEnterpriseVocAnalysisRequestFilterTags>) };
    inline vector<RunEnterpriseVocAnalysisRequestFilterTags> filterTags() { DARABONBA_PTR_GET(filterTags_, vector<RunEnterpriseVocAnalysisRequestFilterTags>) };
    inline RunEnterpriseVocAnalysisRequest& setFilterTags(const vector<RunEnterpriseVocAnalysisRequestFilterTags> & filterTags) { DARABONBA_PTR_SET_VALUE(filterTags_, filterTags) };
    inline RunEnterpriseVocAnalysisRequest& setFilterTags(vector<RunEnterpriseVocAnalysisRequestFilterTags> && filterTags) { DARABONBA_PTR_SET_RVALUE(filterTags_, filterTags) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunEnterpriseVocAnalysisRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline RunEnterpriseVocAnalysisRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // sourceTrace Field Functions 
    bool hasSourceTrace() const { return this->sourceTrace_ != nullptr;};
    void deleteSourceTrace() { this->sourceTrace_ = nullptr;};
    inline bool sourceTrace() const { DARABONBA_PTR_GET_DEFAULT(sourceTrace_, false) };
    inline RunEnterpriseVocAnalysisRequest& setSourceTrace(bool sourceTrace) { DARABONBA_PTR_SET_VALUE(sourceTrace_, sourceTrace) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<RunEnterpriseVocAnalysisRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RunEnterpriseVocAnalysisRequestTags>) };
    inline vector<RunEnterpriseVocAnalysisRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<RunEnterpriseVocAnalysisRequestTags>) };
    inline RunEnterpriseVocAnalysisRequest& setTags(const vector<RunEnterpriseVocAnalysisRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RunEnterpriseVocAnalysisRequest& setTags(vector<RunEnterpriseVocAnalysisRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string taskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline RunEnterpriseVocAnalysisRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


  protected:
    std::shared_ptr<string> akProxy_ = nullptr;
    std::shared_ptr<string> apiKey_ = nullptr;
    // 需要进行VOC分析的文本内容（content、contents、url、fileKey 四选一。优先级从小到大）
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    // 过滤标签，用于筛选符合条件的内容。
    std::shared_ptr<vector<RunEnterpriseVocAnalysisRequestFilterTags>> filterTags_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    // 指定返回结果的格式，支持json或text
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<bool> sourceTrace_ = nullptr;
    // 业务标签体系，用于对文本内容进行分类和分析。
    std::shared_ptr<vector<RunEnterpriseVocAnalysisRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> taskDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
