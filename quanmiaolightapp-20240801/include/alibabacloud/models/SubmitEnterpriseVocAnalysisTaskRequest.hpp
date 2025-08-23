// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitEnterpriseVocAnalysisTaskRequestContents.hpp>
#include <alibabacloud/models/SubmitEnterpriseVocAnalysisTaskRequestFilterTags.hpp>
#include <alibabacloud/models/SubmitEnterpriseVocAnalysisTaskRequestTags.hpp>
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
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->contents_ != nullptr && this->extraInfo_ != nullptr && this->fileKey_ != nullptr && this->filterTags_ != nullptr && this->modelId_ != nullptr
        && this->outputFormat_ != nullptr && this->sourceTrace_ != nullptr && this->tags_ != nullptr && this->taskDescription_ != nullptr && this->url_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequestContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<SubmitEnterpriseVocAnalysisTaskRequestContents>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequestContents> contents() { DARABONBA_PTR_GET(contents_, vector<SubmitEnterpriseVocAnalysisTaskRequestContents>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContents(const vector<SubmitEnterpriseVocAnalysisTaskRequestContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContents(vector<SubmitEnterpriseVocAnalysisTaskRequestContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // filterTags Field Functions 
    bool hasFilterTags() const { return this->filterTags_ != nullptr;};
    void deleteFilterTags() { this->filterTags_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> & filterTags() const { DARABONBA_PTR_GET_CONST(filterTags_, vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> filterTags() { DARABONBA_PTR_GET(filterTags_, vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFilterTags(const vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> & filterTags) { DARABONBA_PTR_SET_VALUE(filterTags_, filterTags) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFilterTags(vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> && filterTags) { DARABONBA_PTR_SET_RVALUE(filterTags_, filterTags) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // sourceTrace Field Functions 
    bool hasSourceTrace() const { return this->sourceTrace_ != nullptr;};
    void deleteSourceTrace() { this->sourceTrace_ = nullptr;};
    inline bool sourceTrace() const { DARABONBA_PTR_GET_DEFAULT(sourceTrace_, false) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setSourceTrace(bool sourceTrace) { DARABONBA_PTR_SET_VALUE(sourceTrace_, sourceTrace) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SubmitEnterpriseVocAnalysisTaskRequestTags>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<SubmitEnterpriseVocAnalysisTaskRequestTags>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setTags(const vector<SubmitEnterpriseVocAnalysisTaskRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setTags(vector<SubmitEnterpriseVocAnalysisTaskRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string taskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestContents>> contents_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>> filterTags_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<bool> sourceTrace_ = nullptr;
    std::shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> taskDescription_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
