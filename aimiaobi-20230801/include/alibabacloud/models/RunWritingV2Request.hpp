// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunWritingV2RequestArticles.hpp>
#include <alibabacloud/models/RunWritingV2RequestMiniDocs.hpp>
#include <alibabacloud/models/WritingOutline.hpp>
#include <alibabacloud/models/RunWritingV2RequestOutlines.hpp>
#include <alibabacloud/models/RunWritingV2RequestSearchSources.hpp>
#include <alibabacloud/models/RunWritingV2RequestSummarization.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_TO_JSON(GcNumberSize, gcNumberSize_);
      DARABONBA_PTR_TO_JSON(GcNumberSizeTag, gcNumberSizeTag_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MiniDocs, miniDocs_);
      DARABONBA_PTR_TO_JSON(OutlineList, outlineList_);
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SourceTraceMethod, sourceTraceMethod_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(Summarization, summarization_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UseSearch, useSearch_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingParams, writingParams_);
      DARABONBA_PTR_TO_JSON(WritingScene, writingScene_);
      DARABONBA_PTR_TO_JSON(WritingStyle, writingStyle_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_FROM_JSON(GcNumberSize, gcNumberSize_);
      DARABONBA_PTR_FROM_JSON(GcNumberSizeTag, gcNumberSizeTag_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MiniDocs, miniDocs_);
      DARABONBA_PTR_FROM_JSON(OutlineList, outlineList_);
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SourceTraceMethod, sourceTraceMethod_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(Summarization, summarization_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UseSearch, useSearch_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingParams, writingParams_);
      DARABONBA_PTR_FROM_JSON(WritingScene, writingScene_);
      DARABONBA_PTR_FROM_JSON(WritingStyle, writingStyle_);
    };
    RunWritingV2Request() = default ;
    RunWritingV2Request(const RunWritingV2Request &) = default ;
    RunWritingV2Request(RunWritingV2Request &&) = default ;
    RunWritingV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2Request() = default ;
    RunWritingV2Request& operator=(const RunWritingV2Request &) = default ;
    RunWritingV2Request& operator=(RunWritingV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->distributeWriting_ == nullptr && return this->gcNumberSize_ == nullptr && return this->gcNumberSizeTag_ == nullptr && return this->keywords_ == nullptr && return this->language_ == nullptr
        && return this->miniDocs_ == nullptr && return this->outlineList_ == nullptr && return this->outlines_ == nullptr && return this->prompt_ == nullptr && return this->promptMode_ == nullptr
        && return this->searchSources_ == nullptr && return this->sessionId_ == nullptr && return this->sourceTraceMethod_ == nullptr && return this->step_ == nullptr && return this->summarization_ == nullptr
        && return this->taskId_ == nullptr && return this->useSearch_ == nullptr && return this->workspaceId_ == nullptr && return this->writingParams_ == nullptr && return this->writingScene_ == nullptr
        && return this->writingStyle_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<RunWritingV2RequestArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<RunWritingV2RequestArticles>) };
    inline vector<RunWritingV2RequestArticles> articles() { DARABONBA_PTR_GET(articles_, vector<RunWritingV2RequestArticles>) };
    inline RunWritingV2Request& setArticles(const vector<RunWritingV2RequestArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunWritingV2Request& setArticles(vector<RunWritingV2RequestArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // distributeWriting Field Functions 
    bool hasDistributeWriting() const { return this->distributeWriting_ != nullptr;};
    void deleteDistributeWriting() { this->distributeWriting_ = nullptr;};
    inline bool distributeWriting() const { DARABONBA_PTR_GET_DEFAULT(distributeWriting_, false) };
    inline RunWritingV2Request& setDistributeWriting(bool distributeWriting) { DARABONBA_PTR_SET_VALUE(distributeWriting_, distributeWriting) };


    // gcNumberSize Field Functions 
    bool hasGcNumberSize() const { return this->gcNumberSize_ != nullptr;};
    void deleteGcNumberSize() { this->gcNumberSize_ = nullptr;};
    inline int32_t gcNumberSize() const { DARABONBA_PTR_GET_DEFAULT(gcNumberSize_, 0) };
    inline RunWritingV2Request& setGcNumberSize(int32_t gcNumberSize) { DARABONBA_PTR_SET_VALUE(gcNumberSize_, gcNumberSize) };


    // gcNumberSizeTag Field Functions 
    bool hasGcNumberSizeTag() const { return this->gcNumberSizeTag_ != nullptr;};
    void deleteGcNumberSizeTag() { this->gcNumberSizeTag_ = nullptr;};
    inline string gcNumberSizeTag() const { DARABONBA_PTR_GET_DEFAULT(gcNumberSizeTag_, "") };
    inline RunWritingV2Request& setGcNumberSizeTag(string gcNumberSizeTag) { DARABONBA_PTR_SET_VALUE(gcNumberSizeTag_, gcNumberSizeTag) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline RunWritingV2Request& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline RunWritingV2Request& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RunWritingV2Request& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // miniDocs Field Functions 
    bool hasMiniDocs() const { return this->miniDocs_ != nullptr;};
    void deleteMiniDocs() { this->miniDocs_ = nullptr;};
    inline const vector<RunWritingV2RequestMiniDocs> & miniDocs() const { DARABONBA_PTR_GET_CONST(miniDocs_, vector<RunWritingV2RequestMiniDocs>) };
    inline vector<RunWritingV2RequestMiniDocs> miniDocs() { DARABONBA_PTR_GET(miniDocs_, vector<RunWritingV2RequestMiniDocs>) };
    inline RunWritingV2Request& setMiniDocs(const vector<RunWritingV2RequestMiniDocs> & miniDocs) { DARABONBA_PTR_SET_VALUE(miniDocs_, miniDocs) };
    inline RunWritingV2Request& setMiniDocs(vector<RunWritingV2RequestMiniDocs> && miniDocs) { DARABONBA_PTR_SET_RVALUE(miniDocs_, miniDocs) };


    // outlineList Field Functions 
    bool hasOutlineList() const { return this->outlineList_ != nullptr;};
    void deleteOutlineList() { this->outlineList_ = nullptr;};
    inline const vector<WritingOutline> & outlineList() const { DARABONBA_PTR_GET_CONST(outlineList_, vector<WritingOutline>) };
    inline vector<WritingOutline> outlineList() { DARABONBA_PTR_GET(outlineList_, vector<WritingOutline>) };
    inline RunWritingV2Request& setOutlineList(const vector<WritingOutline> & outlineList) { DARABONBA_PTR_SET_VALUE(outlineList_, outlineList) };
    inline RunWritingV2Request& setOutlineList(vector<WritingOutline> && outlineList) { DARABONBA_PTR_SET_RVALUE(outlineList_, outlineList) };


    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<RunWritingV2RequestOutlines> & outlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<RunWritingV2RequestOutlines>) };
    inline vector<RunWritingV2RequestOutlines> outlines() { DARABONBA_PTR_GET(outlines_, vector<RunWritingV2RequestOutlines>) };
    inline RunWritingV2Request& setOutlines(const vector<RunWritingV2RequestOutlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline RunWritingV2Request& setOutlines(vector<RunWritingV2RequestOutlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunWritingV2Request& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptMode Field Functions 
    bool hasPromptMode() const { return this->promptMode_ != nullptr;};
    void deletePromptMode() { this->promptMode_ = nullptr;};
    inline string promptMode() const { DARABONBA_PTR_GET_DEFAULT(promptMode_, "") };
    inline RunWritingV2Request& setPromptMode(string promptMode) { DARABONBA_PTR_SET_VALUE(promptMode_, promptMode) };


    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<RunWritingV2RequestSearchSources> & searchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<RunWritingV2RequestSearchSources>) };
    inline vector<RunWritingV2RequestSearchSources> searchSources() { DARABONBA_PTR_GET(searchSources_, vector<RunWritingV2RequestSearchSources>) };
    inline RunWritingV2Request& setSearchSources(const vector<RunWritingV2RequestSearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline RunWritingV2Request& setSearchSources(vector<RunWritingV2RequestSearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunWritingV2Request& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sourceTraceMethod Field Functions 
    bool hasSourceTraceMethod() const { return this->sourceTraceMethod_ != nullptr;};
    void deleteSourceTraceMethod() { this->sourceTraceMethod_ = nullptr;};
    inline string sourceTraceMethod() const { DARABONBA_PTR_GET_DEFAULT(sourceTraceMethod_, "") };
    inline RunWritingV2Request& setSourceTraceMethod(string sourceTraceMethod) { DARABONBA_PTR_SET_VALUE(sourceTraceMethod_, sourceTraceMethod) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline RunWritingV2Request& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // summarization Field Functions 
    bool hasSummarization() const { return this->summarization_ != nullptr;};
    void deleteSummarization() { this->summarization_ = nullptr;};
    inline const vector<RunWritingV2RequestSummarization> & summarization() const { DARABONBA_PTR_GET_CONST(summarization_, vector<RunWritingV2RequestSummarization>) };
    inline vector<RunWritingV2RequestSummarization> summarization() { DARABONBA_PTR_GET(summarization_, vector<RunWritingV2RequestSummarization>) };
    inline RunWritingV2Request& setSummarization(const vector<RunWritingV2RequestSummarization> & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
    inline RunWritingV2Request& setSummarization(vector<RunWritingV2RequestSummarization> && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunWritingV2Request& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool useSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunWritingV2Request& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunWritingV2Request& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingParams Field Functions 
    bool hasWritingParams() const { return this->writingParams_ != nullptr;};
    void deleteWritingParams() { this->writingParams_ = nullptr;};
    inline const map<string, string> & writingParams() const { DARABONBA_PTR_GET_CONST(writingParams_, map<string, string>) };
    inline map<string, string> writingParams() { DARABONBA_PTR_GET(writingParams_, map<string, string>) };
    inline RunWritingV2Request& setWritingParams(const map<string, string> & writingParams) { DARABONBA_PTR_SET_VALUE(writingParams_, writingParams) };
    inline RunWritingV2Request& setWritingParams(map<string, string> && writingParams) { DARABONBA_PTR_SET_RVALUE(writingParams_, writingParams) };


    // writingScene Field Functions 
    bool hasWritingScene() const { return this->writingScene_ != nullptr;};
    void deleteWritingScene() { this->writingScene_ = nullptr;};
    inline string writingScene() const { DARABONBA_PTR_GET_DEFAULT(writingScene_, "") };
    inline RunWritingV2Request& setWritingScene(string writingScene) { DARABONBA_PTR_SET_VALUE(writingScene_, writingScene) };


    // writingStyle Field Functions 
    bool hasWritingStyle() const { return this->writingStyle_ != nullptr;};
    void deleteWritingStyle() { this->writingStyle_ = nullptr;};
    inline string writingStyle() const { DARABONBA_PTR_GET_DEFAULT(writingStyle_, "") };
    inline RunWritingV2Request& setWritingStyle(string writingStyle) { DARABONBA_PTR_SET_VALUE(writingStyle_, writingStyle) };


  protected:
    std::shared_ptr<vector<RunWritingV2RequestArticles>> articles_ = nullptr;
    std::shared_ptr<bool> distributeWriting_ = nullptr;
    std::shared_ptr<int32_t> gcNumberSize_ = nullptr;
    std::shared_ptr<string> gcNumberSizeTag_ = nullptr;
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<vector<RunWritingV2RequestMiniDocs>> miniDocs_ = nullptr;
    std::shared_ptr<vector<WritingOutline>> outlineList_ = nullptr;
    std::shared_ptr<vector<RunWritingV2RequestOutlines>> outlines_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> promptMode_ = nullptr;
    std::shared_ptr<vector<RunWritingV2RequestSearchSources>> searchSources_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> sourceTraceMethod_ = nullptr;
    std::shared_ptr<string> step_ = nullptr;
    std::shared_ptr<vector<RunWritingV2RequestSummarization>> summarization_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<bool> useSearch_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<map<string, string>> writingParams_ = nullptr;
    std::shared_ptr<string> writingScene_ = nullptr;
    std::shared_ptr<string> writingStyle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
