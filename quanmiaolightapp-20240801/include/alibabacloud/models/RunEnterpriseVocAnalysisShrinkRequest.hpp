// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEnterpriseVocAnalysisShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEnterpriseVocAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(akProxy, akProxy_);
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(filterTags, filterTagsShrink_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(sourceTrace, sourceTrace_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
    };
    friend void from_json(const Darabonba::Json& j, RunEnterpriseVocAnalysisShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(akProxy, akProxy_);
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(filterTags, filterTagsShrink_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(sourceTrace, sourceTrace_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
    };
    RunEnterpriseVocAnalysisShrinkRequest() = default ;
    RunEnterpriseVocAnalysisShrinkRequest(const RunEnterpriseVocAnalysisShrinkRequest &) = default ;
    RunEnterpriseVocAnalysisShrinkRequest(RunEnterpriseVocAnalysisShrinkRequest &&) = default ;
    RunEnterpriseVocAnalysisShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEnterpriseVocAnalysisShrinkRequest() = default ;
    RunEnterpriseVocAnalysisShrinkRequest& operator=(const RunEnterpriseVocAnalysisShrinkRequest &) = default ;
    RunEnterpriseVocAnalysisShrinkRequest& operator=(RunEnterpriseVocAnalysisShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->akProxy_ == nullptr
        && return this->apiKey_ == nullptr && return this->content_ == nullptr && return this->extraInfo_ == nullptr && return this->filterTagsShrink_ == nullptr && return this->modelId_ == nullptr
        && return this->outputFormat_ == nullptr && return this->sourceTrace_ == nullptr && return this->tagsShrink_ == nullptr && return this->taskDescription_ == nullptr; };
    // akProxy Field Functions 
    bool hasAkProxy() const { return this->akProxy_ != nullptr;};
    void deleteAkProxy() { this->akProxy_ = nullptr;};
    inline string akProxy() const { DARABONBA_PTR_GET_DEFAULT(akProxy_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setAkProxy(string akProxy) { DARABONBA_PTR_SET_VALUE(akProxy_, akProxy) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // filterTagsShrink Field Functions 
    bool hasFilterTagsShrink() const { return this->filterTagsShrink_ != nullptr;};
    void deleteFilterTagsShrink() { this->filterTagsShrink_ = nullptr;};
    inline string filterTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(filterTagsShrink_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setFilterTagsShrink(string filterTagsShrink) { DARABONBA_PTR_SET_VALUE(filterTagsShrink_, filterTagsShrink) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // sourceTrace Field Functions 
    bool hasSourceTrace() const { return this->sourceTrace_ != nullptr;};
    void deleteSourceTrace() { this->sourceTrace_ = nullptr;};
    inline bool sourceTrace() const { DARABONBA_PTR_GET_DEFAULT(sourceTrace_, false) };
    inline RunEnterpriseVocAnalysisShrinkRequest& setSourceTrace(bool sourceTrace) { DARABONBA_PTR_SET_VALUE(sourceTrace_, sourceTrace) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string taskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline RunEnterpriseVocAnalysisShrinkRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


  protected:
    std::shared_ptr<string> akProxy_ = nullptr;
    std::shared_ptr<string> apiKey_ = nullptr;
    // 需要进行VOC分析的文本内容（content、contents、url、fileKey 四选一。优先级从小到大）
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    // 过滤标签，用于筛选符合条件的内容。
    std::shared_ptr<string> filterTagsShrink_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    // 指定返回结果的格式，支持json或text
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<bool> sourceTrace_ = nullptr;
    // 业务标签体系，用于对文本内容进行分类和分析。
    std::shared_ptr<string> tagsShrink_ = nullptr;
    std::shared_ptr<string> taskDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
