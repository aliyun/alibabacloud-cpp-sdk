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
      DARABONBA_PTR_TO_JSON(OutlineList, outlineListShrink_);
      DARABONBA_PTR_TO_JSON(Outlines, outlinesShrink_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSourcesShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SourceTraceMethod, sourceTraceMethod_);
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
      DARABONBA_PTR_FROM_JSON(OutlineList, outlineListShrink_);
      DARABONBA_PTR_FROM_JSON(Outlines, outlinesShrink_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptMode, promptMode_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSourcesShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SourceTraceMethod, sourceTraceMethod_);
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
    virtual bool empty() const override { return this->articlesShrink_ == nullptr
        && this->distributeWriting_ == nullptr && this->gcNumberSize_ == nullptr && this->gcNumberSizeTag_ == nullptr && this->keywordsShrink_ == nullptr && this->language_ == nullptr
        && this->miniDocsShrink_ == nullptr && this->outlineListShrink_ == nullptr && this->outlinesShrink_ == nullptr && this->prompt_ == nullptr && this->promptMode_ == nullptr
        && this->searchSourcesShrink_ == nullptr && this->sessionId_ == nullptr && this->sourceTraceMethod_ == nullptr && this->step_ == nullptr && this->summarizationShrink_ == nullptr
        && this->taskId_ == nullptr && this->useSearch_ == nullptr && this->workspaceId_ == nullptr && this->writingParamsShrink_ == nullptr && this->writingScene_ == nullptr
        && this->writingStyle_ == nullptr; };
    // articlesShrink Field Functions 
    bool hasArticlesShrink() const { return this->articlesShrink_ != nullptr;};
    void deleteArticlesShrink() { this->articlesShrink_ = nullptr;};
    inline string getArticlesShrink() const { DARABONBA_PTR_GET_DEFAULT(articlesShrink_, "") };
    inline RunWritingV2ShrinkRequest& setArticlesShrink(string articlesShrink) { DARABONBA_PTR_SET_VALUE(articlesShrink_, articlesShrink) };


    // distributeWriting Field Functions 
    bool hasDistributeWriting() const { return this->distributeWriting_ != nullptr;};
    void deleteDistributeWriting() { this->distributeWriting_ = nullptr;};
    inline bool getDistributeWriting() const { DARABONBA_PTR_GET_DEFAULT(distributeWriting_, false) };
    inline RunWritingV2ShrinkRequest& setDistributeWriting(bool distributeWriting) { DARABONBA_PTR_SET_VALUE(distributeWriting_, distributeWriting) };


    // gcNumberSize Field Functions 
    bool hasGcNumberSize() const { return this->gcNumberSize_ != nullptr;};
    void deleteGcNumberSize() { this->gcNumberSize_ = nullptr;};
    inline int32_t getGcNumberSize() const { DARABONBA_PTR_GET_DEFAULT(gcNumberSize_, 0) };
    inline RunWritingV2ShrinkRequest& setGcNumberSize(int32_t gcNumberSize) { DARABONBA_PTR_SET_VALUE(gcNumberSize_, gcNumberSize) };


    // gcNumberSizeTag Field Functions 
    bool hasGcNumberSizeTag() const { return this->gcNumberSizeTag_ != nullptr;};
    void deleteGcNumberSizeTag() { this->gcNumberSizeTag_ = nullptr;};
    inline string getGcNumberSizeTag() const { DARABONBA_PTR_GET_DEFAULT(gcNumberSizeTag_, "") };
    inline RunWritingV2ShrinkRequest& setGcNumberSizeTag(string gcNumberSizeTag) { DARABONBA_PTR_SET_VALUE(gcNumberSizeTag_, gcNumberSizeTag) };


    // keywordsShrink Field Functions 
    bool hasKeywordsShrink() const { return this->keywordsShrink_ != nullptr;};
    void deleteKeywordsShrink() { this->keywordsShrink_ = nullptr;};
    inline string getKeywordsShrink() const { DARABONBA_PTR_GET_DEFAULT(keywordsShrink_, "") };
    inline RunWritingV2ShrinkRequest& setKeywordsShrink(string keywordsShrink) { DARABONBA_PTR_SET_VALUE(keywordsShrink_, keywordsShrink) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RunWritingV2ShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // miniDocsShrink Field Functions 
    bool hasMiniDocsShrink() const { return this->miniDocsShrink_ != nullptr;};
    void deleteMiniDocsShrink() { this->miniDocsShrink_ = nullptr;};
    inline string getMiniDocsShrink() const { DARABONBA_PTR_GET_DEFAULT(miniDocsShrink_, "") };
    inline RunWritingV2ShrinkRequest& setMiniDocsShrink(string miniDocsShrink) { DARABONBA_PTR_SET_VALUE(miniDocsShrink_, miniDocsShrink) };


    // outlineListShrink Field Functions 
    bool hasOutlineListShrink() const { return this->outlineListShrink_ != nullptr;};
    void deleteOutlineListShrink() { this->outlineListShrink_ = nullptr;};
    inline string getOutlineListShrink() const { DARABONBA_PTR_GET_DEFAULT(outlineListShrink_, "") };
    inline RunWritingV2ShrinkRequest& setOutlineListShrink(string outlineListShrink) { DARABONBA_PTR_SET_VALUE(outlineListShrink_, outlineListShrink) };


    // outlinesShrink Field Functions 
    bool hasOutlinesShrink() const { return this->outlinesShrink_ != nullptr;};
    void deleteOutlinesShrink() { this->outlinesShrink_ = nullptr;};
    inline string getOutlinesShrink() const { DARABONBA_PTR_GET_DEFAULT(outlinesShrink_, "") };
    inline RunWritingV2ShrinkRequest& setOutlinesShrink(string outlinesShrink) { DARABONBA_PTR_SET_VALUE(outlinesShrink_, outlinesShrink) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunWritingV2ShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptMode Field Functions 
    bool hasPromptMode() const { return this->promptMode_ != nullptr;};
    void deletePromptMode() { this->promptMode_ = nullptr;};
    inline string getPromptMode() const { DARABONBA_PTR_GET_DEFAULT(promptMode_, "") };
    inline RunWritingV2ShrinkRequest& setPromptMode(string promptMode) { DARABONBA_PTR_SET_VALUE(promptMode_, promptMode) };


    // searchSourcesShrink Field Functions 
    bool hasSearchSourcesShrink() const { return this->searchSourcesShrink_ != nullptr;};
    void deleteSearchSourcesShrink() { this->searchSourcesShrink_ = nullptr;};
    inline string getSearchSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(searchSourcesShrink_, "") };
    inline RunWritingV2ShrinkRequest& setSearchSourcesShrink(string searchSourcesShrink) { DARABONBA_PTR_SET_VALUE(searchSourcesShrink_, searchSourcesShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunWritingV2ShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sourceTraceMethod Field Functions 
    bool hasSourceTraceMethod() const { return this->sourceTraceMethod_ != nullptr;};
    void deleteSourceTraceMethod() { this->sourceTraceMethod_ = nullptr;};
    inline string getSourceTraceMethod() const { DARABONBA_PTR_GET_DEFAULT(sourceTraceMethod_, "") };
    inline RunWritingV2ShrinkRequest& setSourceTraceMethod(string sourceTraceMethod) { DARABONBA_PTR_SET_VALUE(sourceTraceMethod_, sourceTraceMethod) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline RunWritingV2ShrinkRequest& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // summarizationShrink Field Functions 
    bool hasSummarizationShrink() const { return this->summarizationShrink_ != nullptr;};
    void deleteSummarizationShrink() { this->summarizationShrink_ = nullptr;};
    inline string getSummarizationShrink() const { DARABONBA_PTR_GET_DEFAULT(summarizationShrink_, "") };
    inline RunWritingV2ShrinkRequest& setSummarizationShrink(string summarizationShrink) { DARABONBA_PTR_SET_VALUE(summarizationShrink_, summarizationShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunWritingV2ShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool getUseSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunWritingV2ShrinkRequest& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunWritingV2ShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingParamsShrink Field Functions 
    bool hasWritingParamsShrink() const { return this->writingParamsShrink_ != nullptr;};
    void deleteWritingParamsShrink() { this->writingParamsShrink_ = nullptr;};
    inline string getWritingParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(writingParamsShrink_, "") };
    inline RunWritingV2ShrinkRequest& setWritingParamsShrink(string writingParamsShrink) { DARABONBA_PTR_SET_VALUE(writingParamsShrink_, writingParamsShrink) };


    // writingScene Field Functions 
    bool hasWritingScene() const { return this->writingScene_ != nullptr;};
    void deleteWritingScene() { this->writingScene_ = nullptr;};
    inline string getWritingScene() const { DARABONBA_PTR_GET_DEFAULT(writingScene_, "") };
    inline RunWritingV2ShrinkRequest& setWritingScene(string writingScene) { DARABONBA_PTR_SET_VALUE(writingScene_, writingScene) };


    // writingStyle Field Functions 
    bool hasWritingStyle() const { return this->writingStyle_ != nullptr;};
    void deleteWritingStyle() { this->writingStyle_ = nullptr;};
    inline string getWritingStyle() const { DARABONBA_PTR_GET_DEFAULT(writingStyle_, "") };
    inline RunWritingV2ShrinkRequest& setWritingStyle(string writingStyle) { DARABONBA_PTR_SET_VALUE(writingStyle_, writingStyle) };


  protected:
    // A list of articles to use as references. **Note:** When you provide this parameter, web search is disabled, overriding the `UseSearch` and `SearchSources` parameters.
    shared_ptr<string> articlesShrink_ {};
    // Specifies whether to enable step-by-step writing. For more information, see the `Step` parameter description.
    shared_ptr<bool> distributeWriting_ {};
    // The number of articles to write. If you request multiple articles, the system returns them concurrently, each with a unique session ID.
    shared_ptr<int32_t> gcNumberSize_ {};
    // A string that specifies the desired article length. Examples: "about 300 words", "about 600 words", "about 1,000 words", or "about 2,000 words".
    shared_ptr<string> gcNumberSizeTag_ {};
    // A list of keywords used for both search and writing.
    shared_ptr<string> keywordsShrink_ {};
    // The output language for the article.
    // 
    // - `en`: English
    // 
    // - `zh`: Chinese
    // 
    // - Other languages or specific style requirements can also be specified.
    shared_ptr<string> language_ {};
    // A list of article snippets.
    shared_ptr<string> miniDocsShrink_ {};
    // A list of outlines for step-by-step writing.
    shared_ptr<string> outlineListShrink_ {};
    // A list of outlines for step-by-step writing. This parameter is deprecated. Use `OutlineList` instead.
    shared_ptr<string> outlinesShrink_ {};
    // The writing prompt. You must provide either `Prompt` or `WritingParams`. For more information, see the description of the `PromptMode` parameter.
    shared_ptr<string> prompt_ {};
    // The prompt mode. Valid values: `Template` (template mode) and `PE` (advanced PE mode).
    // 
    // 1. If this parameter is omitted, you must provide the `Prompt` parameter. We recommend that the prompt includes the topic, length, requirements, and prohibitions.
    // 
    // 2. If `PromptMode` is set to `Template`, you must provide `WritingParams`, which is a dictionary of string key-value pairs. For the required schema, see the `.Data.TemplateDefine[].Fields` field in the response of the [ListWritingStyles](https://help.aliyun.com/document_detail/2922609.html) operation.
    // 
    // 3. If `PromptMode` is set to `PE`, you must pass `WritingParams` with the following two fields:
    // 
    //    1. `topic`: Required. The topic to write about.
    // 
    //    2. `prompt`: Optional. Any additional custom prompts or writing requirements.
    shared_ptr<string> promptMode_ {};
    // A list of specified search sources to use.
    shared_ptr<string> searchSourcesShrink_ {};
    // The ID of a single-turn conversation. This parameter is deprecated and its use is discouraged.
    shared_ptr<string> sessionId_ {};
    // The source tracing method. Currently, only `modelSourceTrace` is supported. If set to `modelSourceTrace`, the model adds citation markers (for example, `[[1]]`) to the end of each cited snippet in the generated text. The citation index starts at 1.
    shared_ptr<string> sourceTraceMethod_ {};
    // The step for step-by-step writing. Valid values:
    // 
    // - `OutlineGenerate`: Outline generation
    // 
    // - `Writing`: Article writing
    // 
    // When `DistributeWriting` is `true`, the default flow for step-by-step writing is to first generate an outline and then write the content based on it.
    shared_ptr<string> step_ {};
    // A list of summarization objects, used for step-by-step writing.
    shared_ptr<string> summarizationShrink_ {};
    // The unique ID of the task. You can reuse the same task ID for a multi-turn conversation.
    // 
    // > The system automatically generates a `TaskId` if you do not specify one. Reusing the same `TaskId` for subsequent requests groups them into a single conversation.
    shared_ptr<string> taskId_ {};
    // Specifies whether to enable web search. If `true`, the system uses its built-in web search feature. Default: `false`.
    shared_ptr<bool> useSearch_ {};
    // The unique ID of the Model Studio workspace. For more information, see [Obtain a Workspace ID](https://help.aliyun.com/document_detail/2782167.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    // The parameters for template-based writing, provided as a dictionary of string key-value pairs. You must provide either `Prompt` or `WritingParams`. For more information, see the description of the `PromptMode` parameter.
    shared_ptr<string> writingParamsShrink_ {};
    // The writing scene. Valid values: `government` (government affairs), `media`, `market` (marketing), `office`, and `custom`.
    shared_ptr<string> writingScene_ {};
    // The writing style. For a list of supported styles, see [ListWritingStyles](https://help.aliyun.com/document_detail/2922609.html).
    shared_ptr<string> writingStyle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
