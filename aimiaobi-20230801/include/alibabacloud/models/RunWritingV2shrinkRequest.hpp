// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articlesShrink_);
      DARABONBA_PTR_TO_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_TO_JSON(GcNumberSize, gcNumberSize_);
      DARABONBA_PTR_TO_JSON(GcNumberSizeTag, gcNumberSizeTag_);
      DARABONBA_PTR_TO_JSON(Keywords, keywordsShrink_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MiniDocs, miniDocsShrink_);
      DARABONBA_PTR_TO_JSON(Outlines, outlinesShrink_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSourcesShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(Summarization, summarizationShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UseSearch, useSearch_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingParams, writingParamsShrink_);
      DARABONBA_PTR_TO_JSON(WritingScene, writingScene_);
      DARABONBA_PTR_TO_JSON(WritingStyle, writingStyle_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articlesShrink_);
      DARABONBA_PTR_FROM_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_FROM_JSON(GcNumberSize, gcNumberSize_);
      DARABONBA_PTR_FROM_JSON(GcNumberSizeTag, gcNumberSizeTag_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywordsShrink_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MiniDocs, miniDocsShrink_);
      DARABONBA_PTR_FROM_JSON(Outlines, outlinesShrink_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSourcesShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(Summarization, summarizationShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UseSearch, useSearch_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingParams, writingParamsShrink_);
      DARABONBA_PTR_FROM_JSON(WritingScene, writingScene_);
      DARABONBA_PTR_FROM_JSON(WritingStyle, writingStyle_);
    };
    RunWritingV2ShrinkRequest() = default ;
    RunWritingV2ShrinkRequest(const RunWritingV2ShrinkRequest &) = default ;
    RunWritingV2ShrinkRequest(RunWritingV2ShrinkRequest &&) = default ;
    RunWritingV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2ShrinkRequest() = default ;
    RunWritingV2ShrinkRequest& operator=(const RunWritingV2ShrinkRequest &) = default ;
    RunWritingV2ShrinkRequest& operator=(RunWritingV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articlesShrink_ != nullptr
        && this->distributeWriting_ != nullptr && this->gcNumberSize_ != nullptr && this->gcNumberSizeTag_ != nullptr && this->keywordsShrink_ != nullptr && this->language_ != nullptr
        && this->miniDocsShrink_ != nullptr && this->outlinesShrink_ != nullptr && this->prompt_ != nullptr && this->promptMode_ != nullptr && this->searchSourcesShrink_ != nullptr
        && this->sessionId_ != nullptr && this->step_ != nullptr && this->summarizationShrink_ != nullptr && this->taskId_ != nullptr && this->useSearch_ != nullptr
        && this->workspaceId_ != nullptr && this->writingParamsShrink_ != nullptr && this->writingScene_ != nullptr && this->writingStyle_ != nullptr; };
    // articlesShrink Field Functions 
    bool hasArticlesShrink() const { return this->articlesShrink_ != nullptr;};
    void deleteArticlesShrink() { this->articlesShrink_ = nullptr;};
    inline string articlesShrink() const { DARABONBA_PTR_GET_DEFAULT(articlesShrink_, "") };
    inline RunWritingV2ShrinkRequest& setArticlesShrink(string articlesShrink) { DARABONBA_PTR_SET_VALUE(articlesShrink_, articlesShrink) };


    // distributeWriting Field Functions 
    bool hasDistributeWriting() const { return this->distributeWriting_ != nullptr;};
    void deleteDistributeWriting() { this->distributeWriting_ = nullptr;};
    inline bool distributeWriting() const { DARABONBA_PTR_GET_DEFAULT(distributeWriting_, false) };
    inline RunWritingV2ShrinkRequest& setDistributeWriting(bool distributeWriting) { DARABONBA_PTR_SET_VALUE(distributeWriting_, distributeWriting) };


    // gcNumberSize Field Functions 
    bool hasGcNumberSize() const { return this->gcNumberSize_ != nullptr;};
    void deleteGcNumberSize() { this->gcNumberSize_ = nullptr;};
    inline int32_t gcNumberSize() const { DARABONBA_PTR_GET_DEFAULT(gcNumberSize_, 0) };
    inline RunWritingV2ShrinkRequest& setGcNumberSize(int32_t gcNumberSize) { DARABONBA_PTR_SET_VALUE(gcNumberSize_, gcNumberSize) };


    // gcNumberSizeTag Field Functions 
    bool hasGcNumberSizeTag() const { return this->gcNumberSizeTag_ != nullptr;};
    void deleteGcNumberSizeTag() { this->gcNumberSizeTag_ = nullptr;};
    inline string gcNumberSizeTag() const { DARABONBA_PTR_GET_DEFAULT(gcNumberSizeTag_, "") };
    inline RunWritingV2ShrinkRequest& setGcNumberSizeTag(string gcNumberSizeTag) { DARABONBA_PTR_SET_VALUE(gcNumberSizeTag_, gcNumberSizeTag) };


    // keywordsShrink Field Functions 
    bool hasKeywordsShrink() const { return this->keywordsShrink_ != nullptr;};
    void deleteKeywordsShrink() { this->keywordsShrink_ = nullptr;};
    inline string keywordsShrink() const { DARABONBA_PTR_GET_DEFAULT(keywordsShrink_, "") };
    inline RunWritingV2ShrinkRequest& setKeywordsShrink(string keywordsShrink) { DARABONBA_PTR_SET_VALUE(keywordsShrink_, keywordsShrink) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RunWritingV2ShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // miniDocsShrink Field Functions 
    bool hasMiniDocsShrink() const { return this->miniDocsShrink_ != nullptr;};
    void deleteMiniDocsShrink() { this->miniDocsShrink_ = nullptr;};
    inline string miniDocsShrink() const { DARABONBA_PTR_GET_DEFAULT(miniDocsShrink_, "") };
    inline RunWritingV2ShrinkRequest& setMiniDocsShrink(string miniDocsShrink) { DARABONBA_PTR_SET_VALUE(miniDocsShrink_, miniDocsShrink) };


    // outlinesShrink Field Functions 
    bool hasOutlinesShrink() const { return this->outlinesShrink_ != nullptr;};
    void deleteOutlinesShrink() { this->outlinesShrink_ = nullptr;};
    inline string outlinesShrink() const { DARABONBA_PTR_GET_DEFAULT(outlinesShrink_, "") };
    inline RunWritingV2ShrinkRequest& setOutlinesShrink(string outlinesShrink) { DARABONBA_PTR_SET_VALUE(outlinesShrink_, outlinesShrink) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunWritingV2ShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptMode Field Functions 
    bool hasPromptMode() const { return this->promptMode_ != nullptr;};
    void deletePromptMode() { this->promptMode_ = nullptr;};
    inline string promptMode() const { DARABONBA_PTR_GET_DEFAULT(promptMode_, "") };
    inline RunWritingV2ShrinkRequest& setPromptMode(string promptMode) { DARABONBA_PTR_SET_VALUE(promptMode_, promptMode) };


    // searchSourcesShrink Field Functions 
    bool hasSearchSourcesShrink() const { return this->searchSourcesShrink_ != nullptr;};
    void deleteSearchSourcesShrink() { this->searchSourcesShrink_ = nullptr;};
    inline string searchSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(searchSourcesShrink_, "") };
    inline RunWritingV2ShrinkRequest& setSearchSourcesShrink(string searchSourcesShrink) { DARABONBA_PTR_SET_VALUE(searchSourcesShrink_, searchSourcesShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunWritingV2ShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline RunWritingV2ShrinkRequest& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // summarizationShrink Field Functions 
    bool hasSummarizationShrink() const { return this->summarizationShrink_ != nullptr;};
    void deleteSummarizationShrink() { this->summarizationShrink_ = nullptr;};
    inline string summarizationShrink() const { DARABONBA_PTR_GET_DEFAULT(summarizationShrink_, "") };
    inline RunWritingV2ShrinkRequest& setSummarizationShrink(string summarizationShrink) { DARABONBA_PTR_SET_VALUE(summarizationShrink_, summarizationShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunWritingV2ShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool useSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunWritingV2ShrinkRequest& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunWritingV2ShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingParamsShrink Field Functions 
    bool hasWritingParamsShrink() const { return this->writingParamsShrink_ != nullptr;};
    void deleteWritingParamsShrink() { this->writingParamsShrink_ = nullptr;};
    inline string writingParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(writingParamsShrink_, "") };
    inline RunWritingV2ShrinkRequest& setWritingParamsShrink(string writingParamsShrink) { DARABONBA_PTR_SET_VALUE(writingParamsShrink_, writingParamsShrink) };


    // writingScene Field Functions 
    bool hasWritingScene() const { return this->writingScene_ != nullptr;};
    void deleteWritingScene() { this->writingScene_ = nullptr;};
    inline string writingScene() const { DARABONBA_PTR_GET_DEFAULT(writingScene_, "") };
    inline RunWritingV2ShrinkRequest& setWritingScene(string writingScene) { DARABONBA_PTR_SET_VALUE(writingScene_, writingScene) };


    // writingStyle Field Functions 
    bool hasWritingStyle() const { return this->writingStyle_ != nullptr;};
    void deleteWritingStyle() { this->writingStyle_ = nullptr;};
    inline string writingStyle() const { DARABONBA_PTR_GET_DEFAULT(writingStyle_, "") };
    inline RunWritingV2ShrinkRequest& setWritingStyle(string writingStyle) { DARABONBA_PTR_SET_VALUE(writingStyle_, writingStyle) };


  protected:
    std::shared_ptr<string> articlesShrink_ = nullptr;
    std::shared_ptr<bool> distributeWriting_ = nullptr;
    std::shared_ptr<int32_t> gcNumberSize_ = nullptr;
    std::shared_ptr<string> gcNumberSizeTag_ = nullptr;
    std::shared_ptr<string> keywordsShrink_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> miniDocsShrink_ = nullptr;
    std::shared_ptr<string> outlinesShrink_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> promptMode_ = nullptr;
    std::shared_ptr<string> searchSourcesShrink_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> step_ = nullptr;
    std::shared_ptr<string> summarizationShrink_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<bool> useSearch_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> writingParamsShrink_ = nullptr;
    std::shared_ptr<string> writingScene_ = nullptr;
    std::shared_ptr<string> writingStyle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
