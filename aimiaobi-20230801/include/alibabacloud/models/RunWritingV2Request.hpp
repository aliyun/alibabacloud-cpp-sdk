// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WritingOutline.hpp>
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
    class Summarization : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summarization& obj) { 
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Summarization& obj) { 
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Summarization() = default ;
      Summarization(const Summarization &) = default ;
      Summarization(Summarization &&) = default ;
      Summarization(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summarization() = default ;
      Summarization& operator=(const Summarization &) = default ;
      Summarization& operator=(Summarization &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->event_ == nullptr
        && this->message_ == nullptr; };
      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline Summarization& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Summarization& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The name of the event.
      shared_ptr<string> event_ {};
      // The summary of the event.
      shared_ptr<string> message_ {};
    };

    class SearchSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchSources& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, SearchSources& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      SearchSources() = default ;
      SearchSources(const SearchSources &) = default ;
      SearchSources(SearchSources &&) = default ;
      SearchSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchSources() = default ;
      SearchSources& operator=(const SearchSources &) = default ;
      SearchSources& operator=(SearchSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->datasetName_ == nullptr && this->name_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline SearchSources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline SearchSources& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SearchSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The type of search source. Valid values: `SystemSearch` (built-in system search), `CustomSemanticSearch` (search of a custom semantic index), and `ThirdSearch` (search through a third-party API).
      shared_ptr<string> code_ {};
      // The unique identifier of the data source.
      shared_ptr<string> datasetName_ {};
      // The description of the search source. This parameter is deprecated and has no effect.
      shared_ptr<string> name_ {};
    };

    class Outlines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
        DARABONBA_PTR_TO_JSON(Articles, articles_);
        DARABONBA_PTR_TO_JSON(Outline, outline_);
      };
      friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
        DARABONBA_PTR_FROM_JSON(Articles, articles_);
        DARABONBA_PTR_FROM_JSON(Outline, outline_);
      };
      Outlines() = default ;
      Outlines(const Outlines &) = default ;
      Outlines(Outlines &&) = default ;
      Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Outlines() = default ;
      Outlines& operator=(const Outlines &) = default ;
      Outlines& operator=(Outlines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Articles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Articles& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Articles& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Articles() = default ;
        Articles(const Articles &) = default ;
        Articles(Articles &&) = default ;
        Articles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Articles() = default ;
        Articles& operator=(const Articles &) = default ;
        Articles& operator=(Articles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr && this->url_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Articles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Articles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Articles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The content of the article.
        shared_ptr<string> content_ {};
        // The title of the article.
        shared_ptr<string> title_ {};
        // The URL of the article.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->articles_ == nullptr
        && this->outline_ == nullptr; };
      // articles Field Functions 
      bool hasArticles() const { return this->articles_ != nullptr;};
      void deleteArticles() { this->articles_ = nullptr;};
      inline const vector<Outlines::Articles> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Outlines::Articles>) };
      inline vector<Outlines::Articles> getArticles() { DARABONBA_PTR_GET(articles_, vector<Outlines::Articles>) };
      inline Outlines& setArticles(const vector<Outlines::Articles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
      inline Outlines& setArticles(vector<Outlines::Articles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


      // outline Field Functions 
      bool hasOutline() const { return this->outline_ != nullptr;};
      void deleteOutline() { this->outline_ = nullptr;};
      inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
      inline Outlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


    protected:
      // A list of articles referenced by the outline.
      shared_ptr<vector<Outlines::Articles>> articles_ {};
      // The outline.
      shared_ptr<string> outline_ {};
    };

    class MiniDocs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MiniDocs& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Star, star_);
      };
      friend void from_json(const Darabonba::Json& j, MiniDocs& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Star, star_);
      };
      MiniDocs() = default ;
      MiniDocs(const MiniDocs &) = default ;
      MiniDocs(MiniDocs &&) = default ;
      MiniDocs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MiniDocs() = default ;
      MiniDocs& operator=(const MiniDocs &) = default ;
      MiniDocs& operator=(MiniDocs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->index_ == nullptr && this->star_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline MiniDocs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
      inline MiniDocs& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // star Field Functions 
      bool hasStar() const { return this->star_ != nullptr;};
      void deleteStar() { this->star_ = nullptr;};
      inline bool getStar() const { DARABONBA_PTR_GET_DEFAULT(star_, false) };
      inline MiniDocs& setStar(bool star) { DARABONBA_PTR_SET_VALUE(star_, star) };


    protected:
      // The content of the snippet.
      shared_ptr<string> content_ {};
      // The index of the article snippet in the referenced article.
      shared_ptr<string> index_ {};
      // Specifies whether to prioritize this snippet.
      shared_ptr<bool> star_ {};
    };

    class Articles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Articles& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Articles& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Articles() = default ;
      Articles(const Articles &) = default ;
      Articles(Articles &&) = default ;
      Articles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Articles() = default ;
      Articles& operator=(const Articles &) = default ;
      Articles& operator=(Articles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->pubTime_ == nullptr && this->searchSourceName_ == nullptr && this->source_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Articles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline Articles& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // searchSourceName Field Functions 
      bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
      void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
      inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
      inline Articles& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Articles& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Articles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Articles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The content of the article.
      shared_ptr<string> content_ {};
      // The publication time.
      shared_ptr<string> pubTime_ {};
      // The name of the search source.
      shared_ptr<string> searchSourceName_ {};
      // The source of the article.
      shared_ptr<string> source_ {};
      // The title of the article.
      shared_ptr<string> title_ {};
      // The URL of the article.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->articles_ == nullptr
        && this->distributeWriting_ == nullptr && this->gcNumberSize_ == nullptr && this->gcNumberSizeTag_ == nullptr && this->keywords_ == nullptr && this->language_ == nullptr
        && this->miniDocs_ == nullptr && this->outlineList_ == nullptr && this->outlines_ == nullptr && this->prompt_ == nullptr && this->promptMode_ == nullptr
        && this->searchSources_ == nullptr && this->sessionId_ == nullptr && this->sourceTraceMethod_ == nullptr && this->step_ == nullptr && this->summarization_ == nullptr
        && this->taskId_ == nullptr && this->useSearch_ == nullptr && this->workspaceId_ == nullptr && this->writingParams_ == nullptr && this->writingScene_ == nullptr
        && this->writingStyle_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<RunWritingV2Request::Articles> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<RunWritingV2Request::Articles>) };
    inline vector<RunWritingV2Request::Articles> getArticles() { DARABONBA_PTR_GET(articles_, vector<RunWritingV2Request::Articles>) };
    inline RunWritingV2Request& setArticles(const vector<RunWritingV2Request::Articles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunWritingV2Request& setArticles(vector<RunWritingV2Request::Articles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // distributeWriting Field Functions 
    bool hasDistributeWriting() const { return this->distributeWriting_ != nullptr;};
    void deleteDistributeWriting() { this->distributeWriting_ = nullptr;};
    inline bool getDistributeWriting() const { DARABONBA_PTR_GET_DEFAULT(distributeWriting_, false) };
    inline RunWritingV2Request& setDistributeWriting(bool distributeWriting) { DARABONBA_PTR_SET_VALUE(distributeWriting_, distributeWriting) };


    // gcNumberSize Field Functions 
    bool hasGcNumberSize() const { return this->gcNumberSize_ != nullptr;};
    void deleteGcNumberSize() { this->gcNumberSize_ = nullptr;};
    inline int32_t getGcNumberSize() const { DARABONBA_PTR_GET_DEFAULT(gcNumberSize_, 0) };
    inline RunWritingV2Request& setGcNumberSize(int32_t gcNumberSize) { DARABONBA_PTR_SET_VALUE(gcNumberSize_, gcNumberSize) };


    // gcNumberSizeTag Field Functions 
    bool hasGcNumberSizeTag() const { return this->gcNumberSizeTag_ != nullptr;};
    void deleteGcNumberSizeTag() { this->gcNumberSizeTag_ = nullptr;};
    inline string getGcNumberSizeTag() const { DARABONBA_PTR_GET_DEFAULT(gcNumberSizeTag_, "") };
    inline RunWritingV2Request& setGcNumberSizeTag(string gcNumberSizeTag) { DARABONBA_PTR_SET_VALUE(gcNumberSizeTag_, gcNumberSizeTag) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline RunWritingV2Request& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline RunWritingV2Request& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RunWritingV2Request& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // miniDocs Field Functions 
    bool hasMiniDocs() const { return this->miniDocs_ != nullptr;};
    void deleteMiniDocs() { this->miniDocs_ = nullptr;};
    inline const vector<RunWritingV2Request::MiniDocs> & getMiniDocs() const { DARABONBA_PTR_GET_CONST(miniDocs_, vector<RunWritingV2Request::MiniDocs>) };
    inline vector<RunWritingV2Request::MiniDocs> getMiniDocs() { DARABONBA_PTR_GET(miniDocs_, vector<RunWritingV2Request::MiniDocs>) };
    inline RunWritingV2Request& setMiniDocs(const vector<RunWritingV2Request::MiniDocs> & miniDocs) { DARABONBA_PTR_SET_VALUE(miniDocs_, miniDocs) };
    inline RunWritingV2Request& setMiniDocs(vector<RunWritingV2Request::MiniDocs> && miniDocs) { DARABONBA_PTR_SET_RVALUE(miniDocs_, miniDocs) };


    // outlineList Field Functions 
    bool hasOutlineList() const { return this->outlineList_ != nullptr;};
    void deleteOutlineList() { this->outlineList_ = nullptr;};
    inline const vector<WritingOutline> & getOutlineList() const { DARABONBA_PTR_GET_CONST(outlineList_, vector<WritingOutline>) };
    inline vector<WritingOutline> getOutlineList() { DARABONBA_PTR_GET(outlineList_, vector<WritingOutline>) };
    inline RunWritingV2Request& setOutlineList(const vector<WritingOutline> & outlineList) { DARABONBA_PTR_SET_VALUE(outlineList_, outlineList) };
    inline RunWritingV2Request& setOutlineList(vector<WritingOutline> && outlineList) { DARABONBA_PTR_SET_RVALUE(outlineList_, outlineList) };


    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<RunWritingV2Request::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<RunWritingV2Request::Outlines>) };
    inline vector<RunWritingV2Request::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<RunWritingV2Request::Outlines>) };
    inline RunWritingV2Request& setOutlines(const vector<RunWritingV2Request::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline RunWritingV2Request& setOutlines(vector<RunWritingV2Request::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunWritingV2Request& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptMode Field Functions 
    bool hasPromptMode() const { return this->promptMode_ != nullptr;};
    void deletePromptMode() { this->promptMode_ = nullptr;};
    inline string getPromptMode() const { DARABONBA_PTR_GET_DEFAULT(promptMode_, "") };
    inline RunWritingV2Request& setPromptMode(string promptMode) { DARABONBA_PTR_SET_VALUE(promptMode_, promptMode) };


    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<RunWritingV2Request::SearchSources> & getSearchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<RunWritingV2Request::SearchSources>) };
    inline vector<RunWritingV2Request::SearchSources> getSearchSources() { DARABONBA_PTR_GET(searchSources_, vector<RunWritingV2Request::SearchSources>) };
    inline RunWritingV2Request& setSearchSources(const vector<RunWritingV2Request::SearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline RunWritingV2Request& setSearchSources(vector<RunWritingV2Request::SearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunWritingV2Request& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sourceTraceMethod Field Functions 
    bool hasSourceTraceMethod() const { return this->sourceTraceMethod_ != nullptr;};
    void deleteSourceTraceMethod() { this->sourceTraceMethod_ = nullptr;};
    inline string getSourceTraceMethod() const { DARABONBA_PTR_GET_DEFAULT(sourceTraceMethod_, "") };
    inline RunWritingV2Request& setSourceTraceMethod(string sourceTraceMethod) { DARABONBA_PTR_SET_VALUE(sourceTraceMethod_, sourceTraceMethod) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline RunWritingV2Request& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // summarization Field Functions 
    bool hasSummarization() const { return this->summarization_ != nullptr;};
    void deleteSummarization() { this->summarization_ = nullptr;};
    inline const vector<RunWritingV2Request::Summarization> & getSummarization() const { DARABONBA_PTR_GET_CONST(summarization_, vector<RunWritingV2Request::Summarization>) };
    inline vector<RunWritingV2Request::Summarization> getSummarization() { DARABONBA_PTR_GET(summarization_, vector<RunWritingV2Request::Summarization>) };
    inline RunWritingV2Request& setSummarization(const vector<RunWritingV2Request::Summarization> & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
    inline RunWritingV2Request& setSummarization(vector<RunWritingV2Request::Summarization> && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunWritingV2Request& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool getUseSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunWritingV2Request& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunWritingV2Request& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingParams Field Functions 
    bool hasWritingParams() const { return this->writingParams_ != nullptr;};
    void deleteWritingParams() { this->writingParams_ = nullptr;};
    inline const map<string, string> & getWritingParams() const { DARABONBA_PTR_GET_CONST(writingParams_, map<string, string>) };
    inline map<string, string> getWritingParams() { DARABONBA_PTR_GET(writingParams_, map<string, string>) };
    inline RunWritingV2Request& setWritingParams(const map<string, string> & writingParams) { DARABONBA_PTR_SET_VALUE(writingParams_, writingParams) };
    inline RunWritingV2Request& setWritingParams(map<string, string> && writingParams) { DARABONBA_PTR_SET_RVALUE(writingParams_, writingParams) };


    // writingScene Field Functions 
    bool hasWritingScene() const { return this->writingScene_ != nullptr;};
    void deleteWritingScene() { this->writingScene_ = nullptr;};
    inline string getWritingScene() const { DARABONBA_PTR_GET_DEFAULT(writingScene_, "") };
    inline RunWritingV2Request& setWritingScene(string writingScene) { DARABONBA_PTR_SET_VALUE(writingScene_, writingScene) };


    // writingStyle Field Functions 
    bool hasWritingStyle() const { return this->writingStyle_ != nullptr;};
    void deleteWritingStyle() { this->writingStyle_ = nullptr;};
    inline string getWritingStyle() const { DARABONBA_PTR_GET_DEFAULT(writingStyle_, "") };
    inline RunWritingV2Request& setWritingStyle(string writingStyle) { DARABONBA_PTR_SET_VALUE(writingStyle_, writingStyle) };


  protected:
    // A list of articles to use as references. **Note:** When you provide this parameter, web search is disabled, overriding the `UseSearch` and `SearchSources` parameters.
    shared_ptr<vector<RunWritingV2Request::Articles>> articles_ {};
    // Specifies whether to enable step-by-step writing. For more information, see the `Step` parameter description.
    shared_ptr<bool> distributeWriting_ {};
    // The number of articles to write. If you request multiple articles, the system returns them concurrently, each with a unique session ID.
    shared_ptr<int32_t> gcNumberSize_ {};
    // A string that specifies the desired article length. Examples: "about 300 words", "about 600 words", "about 1,000 words", or "about 2,000 words".
    shared_ptr<string> gcNumberSizeTag_ {};
    // A list of keywords used for both search and writing.
    shared_ptr<vector<string>> keywords_ {};
    // The output language for the article.
    // 
    // - `en`: English
    // 
    // - `zh`: Chinese
    // 
    // - Other languages or specific style requirements can also be specified.
    shared_ptr<string> language_ {};
    // A list of article snippets.
    shared_ptr<vector<RunWritingV2Request::MiniDocs>> miniDocs_ {};
    // A list of outlines for step-by-step writing.
    shared_ptr<vector<WritingOutline>> outlineList_ {};
    // A list of outlines for step-by-step writing. This parameter is deprecated. Use `OutlineList` instead.
    shared_ptr<vector<RunWritingV2Request::Outlines>> outlines_ {};
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
    shared_ptr<vector<RunWritingV2Request::SearchSources>> searchSources_ {};
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
    shared_ptr<vector<RunWritingV2Request::Summarization>> summarization_ {};
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
    shared_ptr<map<string, string>> writingParams_ {};
    // The writing scene. Valid values: `government` (government affairs), `media`, `market` (marketing), `office`, and `custom`.
    shared_ptr<string> writingScene_ {};
    // The writing style. For a list of supported styles, see [ListWritingStyles](https://help.aliyun.com/document_detail/2922609.html).
    shared_ptr<string> writingStyle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
