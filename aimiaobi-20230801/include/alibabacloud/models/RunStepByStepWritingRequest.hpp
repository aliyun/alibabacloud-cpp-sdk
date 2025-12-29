// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGREQUEST_HPP_
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
  class RunStepByStepWritingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WritingConfig, writingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WritingConfig, writingConfig_);
    };
    RunStepByStepWritingRequest() = default ;
    RunStepByStepWritingRequest(const RunStepByStepWritingRequest &) = default ;
    RunStepByStepWritingRequest(RunStepByStepWritingRequest &&) = default ;
    RunStepByStepWritingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingRequest() = default ;
    RunStepByStepWritingRequest& operator=(const RunStepByStepWritingRequest &) = default ;
    RunStepByStepWritingRequest& operator=(RunStepByStepWritingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WritingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WritingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(PromptTag, promptTag_);
        DARABONBA_PTR_TO_JSON(Scene, scene_);
        DARABONBA_PTR_TO_JSON(Step, step_);
        DARABONBA_PTR_TO_JSON(SummaryReturnType, summaryReturnType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UseSearch, useSearch_);
      };
      friend void from_json(const Darabonba::Json& j, WritingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(PromptTag, promptTag_);
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
        DARABONBA_PTR_FROM_JSON(Step, step_);
        DARABONBA_PTR_FROM_JSON(SummaryReturnType, summaryReturnType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UseSearch, useSearch_);
      };
      WritingConfig() = default ;
      WritingConfig(const WritingConfig &) = default ;
      WritingConfig(WritingConfig &&) = default ;
      WritingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WritingConfig() = default ;
      WritingConfig& operator=(const WritingConfig &) = default ;
      WritingConfig& operator=(WritingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Keyword, keyword_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
        virtual bool empty() const override { return this->keyword_ == nullptr
        && this->tag_ == nullptr; };
        // keyword Field Functions 
        bool hasKeyword() const { return this->keyword_ != nullptr;};
        void deleteKeyword() { this->keyword_ = nullptr;};
        inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
        inline Tags& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Tags& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      protected:
        shared_ptr<string> keyword_ {};
        shared_ptr<string> tag_ {};
      };

      class PromptTag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PromptTag& obj) { 
          DARABONBA_PTR_TO_JSON(NecessaryTips, necessaryTips_);
          DARABONBA_PTR_TO_JSON(Position, position_);
          DARABONBA_PTR_TO_JSON(ReverseWords, reverseWords_);
          DARABONBA_PTR_TO_JSON(Theme, theme_);
        };
        friend void from_json(const Darabonba::Json& j, PromptTag& obj) { 
          DARABONBA_PTR_FROM_JSON(NecessaryTips, necessaryTips_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
          DARABONBA_PTR_FROM_JSON(ReverseWords, reverseWords_);
          DARABONBA_PTR_FROM_JSON(Theme, theme_);
        };
        PromptTag() = default ;
        PromptTag(const PromptTag &) = default ;
        PromptTag(PromptTag &&) = default ;
        PromptTag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PromptTag() = default ;
        PromptTag& operator=(const PromptTag &) = default ;
        PromptTag& operator=(PromptTag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->necessaryTips_ == nullptr
        && this->position_ == nullptr && this->reverseWords_ == nullptr && this->theme_ == nullptr; };
        // necessaryTips Field Functions 
        bool hasNecessaryTips() const { return this->necessaryTips_ != nullptr;};
        void deleteNecessaryTips() { this->necessaryTips_ = nullptr;};
        inline string getNecessaryTips() const { DARABONBA_PTR_GET_DEFAULT(necessaryTips_, "") };
        inline PromptTag& setNecessaryTips(string necessaryTips) { DARABONBA_PTR_SET_VALUE(necessaryTips_, necessaryTips) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
        inline PromptTag& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        // reverseWords Field Functions 
        bool hasReverseWords() const { return this->reverseWords_ != nullptr;};
        void deleteReverseWords() { this->reverseWords_ = nullptr;};
        inline string getReverseWords() const { DARABONBA_PTR_GET_DEFAULT(reverseWords_, "") };
        inline PromptTag& setReverseWords(string reverseWords) { DARABONBA_PTR_SET_VALUE(reverseWords_, reverseWords) };


        // theme Field Functions 
        bool hasTheme() const { return this->theme_ != nullptr;};
        void deleteTheme() { this->theme_ = nullptr;};
        inline string getTheme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
        inline PromptTag& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


      protected:
        shared_ptr<string> necessaryTips_ {};
        shared_ptr<string> position_ {};
        shared_ptr<string> reverseWords_ {};
        shared_ptr<string> theme_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr
        && this->keywords_ == nullptr && this->promptTag_ == nullptr && this->scene_ == nullptr && this->step_ == nullptr && this->summaryReturnType_ == nullptr
        && this->tags_ == nullptr && this->useSearch_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline WritingConfig& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
      inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
      inline WritingConfig& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
      inline WritingConfig& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


      // promptTag Field Functions 
      bool hasPromptTag() const { return this->promptTag_ != nullptr;};
      void deletePromptTag() { this->promptTag_ = nullptr;};
      inline const WritingConfig::PromptTag & getPromptTag() const { DARABONBA_PTR_GET_CONST(promptTag_, WritingConfig::PromptTag) };
      inline WritingConfig::PromptTag getPromptTag() { DARABONBA_PTR_GET(promptTag_, WritingConfig::PromptTag) };
      inline WritingConfig& setPromptTag(const WritingConfig::PromptTag & promptTag) { DARABONBA_PTR_SET_VALUE(promptTag_, promptTag) };
      inline WritingConfig& setPromptTag(WritingConfig::PromptTag && promptTag) { DARABONBA_PTR_SET_RVALUE(promptTag_, promptTag) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline WritingConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // step Field Functions 
      bool hasStep() const { return this->step_ != nullptr;};
      void deleteStep() { this->step_ = nullptr;};
      inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
      inline WritingConfig& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      // summaryReturnType Field Functions 
      bool hasSummaryReturnType() const { return this->summaryReturnType_ != nullptr;};
      void deleteSummaryReturnType() { this->summaryReturnType_ = nullptr;};
      inline string getSummaryReturnType() const { DARABONBA_PTR_GET_DEFAULT(summaryReturnType_, "") };
      inline WritingConfig& setSummaryReturnType(string summaryReturnType) { DARABONBA_PTR_SET_VALUE(summaryReturnType_, summaryReturnType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<WritingConfig::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<WritingConfig::Tags>) };
      inline vector<WritingConfig::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<WritingConfig::Tags>) };
      inline WritingConfig& setTags(const vector<WritingConfig::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline WritingConfig& setTags(vector<WritingConfig::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // useSearch Field Functions 
      bool hasUseSearch() const { return this->useSearch_ != nullptr;};
      void deleteUseSearch() { this->useSearch_ = nullptr;};
      inline bool getUseSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
      inline WritingConfig& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<vector<string>> keywords_ {};
      shared_ptr<WritingConfig::PromptTag> promptTag_ {};
      shared_ptr<string> scene_ {};
      shared_ptr<string> step_ {};
      shared_ptr<string> summaryReturnType_ {};
      shared_ptr<vector<WritingConfig::Tags>> tags_ {};
      shared_ptr<bool> useSearch_ {};
    };

    class ReferenceData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReferenceData& obj) { 
        DARABONBA_PTR_TO_JSON(Articles, articles_);
        DARABONBA_PTR_TO_JSON(MiniDoc, miniDoc_);
        DARABONBA_PTR_TO_JSON(Outlines, outlines_);
        DARABONBA_PTR_TO_JSON(Summarization, summarization_);
      };
      friend void from_json(const Darabonba::Json& j, ReferenceData& obj) { 
        DARABONBA_PTR_FROM_JSON(Articles, articles_);
        DARABONBA_PTR_FROM_JSON(MiniDoc, miniDoc_);
        DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
        DARABONBA_PTR_FROM_JSON(Summarization, summarization_);
      };
      ReferenceData() = default ;
      ReferenceData(const ReferenceData &) = default ;
      ReferenceData(ReferenceData &&) = default ;
      ReferenceData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReferenceData() = default ;
      ReferenceData& operator=(const ReferenceData &) = default ;
      ReferenceData& operator=(ReferenceData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          shared_ptr<string> content_ {};
          shared_ptr<string> title_ {};
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
        shared_ptr<vector<Outlines::Articles>> articles_ {};
        shared_ptr<string> outline_ {};
      };

      class Articles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Articles& obj) { 
          DARABONBA_PTR_TO_JSON(Author, author_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(DocId, docId_);
          DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
          DARABONBA_PTR_TO_JSON(MediaUrl, mediaUrl_);
          DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Articles& obj) { 
          DARABONBA_PTR_FROM_JSON(Author, author_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(DocId, docId_);
          DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
          DARABONBA_PTR_FROM_JSON(MediaUrl, mediaUrl_);
          DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
        virtual bool empty() const override { return this->author_ == nullptr
        && this->content_ == nullptr && this->docId_ == nullptr && this->docUuid_ == nullptr && this->mediaUrl_ == nullptr && this->pubTime_ == nullptr
        && this->source_ == nullptr && this->summary_ == nullptr && this->tag_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
        // author Field Functions 
        bool hasAuthor() const { return this->author_ != nullptr;};
        void deleteAuthor() { this->author_ = nullptr;};
        inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
        inline Articles& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Articles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline Articles& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // docUuid Field Functions 
        bool hasDocUuid() const { return this->docUuid_ != nullptr;};
        void deleteDocUuid() { this->docUuid_ = nullptr;};
        inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
        inline Articles& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


        // mediaUrl Field Functions 
        bool hasMediaUrl() const { return this->mediaUrl_ != nullptr;};
        void deleteMediaUrl() { this->mediaUrl_ = nullptr;};
        inline string getMediaUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaUrl_, "") };
        inline Articles& setMediaUrl(string mediaUrl) { DARABONBA_PTR_SET_VALUE(mediaUrl_, mediaUrl) };


        // pubTime Field Functions 
        bool hasPubTime() const { return this->pubTime_ != nullptr;};
        void deletePubTime() { this->pubTime_ = nullptr;};
        inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
        inline Articles& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Articles& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Articles& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Articles& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


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
        shared_ptr<string> author_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> docId_ {};
        shared_ptr<string> docUuid_ {};
        shared_ptr<string> mediaUrl_ {};
        shared_ptr<string> pubTime_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<string> tag_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->articles_ == nullptr
        && this->miniDoc_ == nullptr && this->outlines_ == nullptr && this->summarization_ == nullptr; };
      // articles Field Functions 
      bool hasArticles() const { return this->articles_ != nullptr;};
      void deleteArticles() { this->articles_ = nullptr;};
      inline const vector<ReferenceData::Articles> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<ReferenceData::Articles>) };
      inline vector<ReferenceData::Articles> getArticles() { DARABONBA_PTR_GET(articles_, vector<ReferenceData::Articles>) };
      inline ReferenceData& setArticles(const vector<ReferenceData::Articles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
      inline ReferenceData& setArticles(vector<ReferenceData::Articles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


      // miniDoc Field Functions 
      bool hasMiniDoc() const { return this->miniDoc_ != nullptr;};
      void deleteMiniDoc() { this->miniDoc_ = nullptr;};
      inline const vector<string> & getMiniDoc() const { DARABONBA_PTR_GET_CONST(miniDoc_, vector<string>) };
      inline vector<string> getMiniDoc() { DARABONBA_PTR_GET(miniDoc_, vector<string>) };
      inline ReferenceData& setMiniDoc(const vector<string> & miniDoc) { DARABONBA_PTR_SET_VALUE(miniDoc_, miniDoc) };
      inline ReferenceData& setMiniDoc(vector<string> && miniDoc) { DARABONBA_PTR_SET_RVALUE(miniDoc_, miniDoc) };


      // outlines Field Functions 
      bool hasOutlines() const { return this->outlines_ != nullptr;};
      void deleteOutlines() { this->outlines_ = nullptr;};
      inline const vector<ReferenceData::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<ReferenceData::Outlines>) };
      inline vector<ReferenceData::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<ReferenceData::Outlines>) };
      inline ReferenceData& setOutlines(const vector<ReferenceData::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
      inline ReferenceData& setOutlines(vector<ReferenceData::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


      // summarization Field Functions 
      bool hasSummarization() const { return this->summarization_ != nullptr;};
      void deleteSummarization() { this->summarization_ = nullptr;};
      inline const vector<string> & getSummarization() const { DARABONBA_PTR_GET_CONST(summarization_, vector<string>) };
      inline vector<string> getSummarization() { DARABONBA_PTR_GET(summarization_, vector<string>) };
      inline ReferenceData& setSummarization(const vector<string> & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
      inline ReferenceData& setSummarization(vector<string> && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


    protected:
      shared_ptr<vector<ReferenceData::Articles>> articles_ {};
      shared_ptr<vector<string>> miniDoc_ {};
      shared_ptr<vector<ReferenceData::Outlines>> outlines_ {};
      shared_ptr<vector<string>> summarization_ {};
    };

    virtual bool empty() const override { return this->originSessionId_ == nullptr
        && this->prompt_ == nullptr && this->referenceData_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr && this->workspaceId_ == nullptr
        && this->writingConfig_ == nullptr; };
    // originSessionId Field Functions 
    bool hasOriginSessionId() const { return this->originSessionId_ != nullptr;};
    void deleteOriginSessionId() { this->originSessionId_ = nullptr;};
    inline string getOriginSessionId() const { DARABONBA_PTR_GET_DEFAULT(originSessionId_, "") };
    inline RunStepByStepWritingRequest& setOriginSessionId(string originSessionId) { DARABONBA_PTR_SET_VALUE(originSessionId_, originSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunStepByStepWritingRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // referenceData Field Functions 
    bool hasReferenceData() const { return this->referenceData_ != nullptr;};
    void deleteReferenceData() { this->referenceData_ = nullptr;};
    inline const RunStepByStepWritingRequest::ReferenceData & getReferenceData() const { DARABONBA_PTR_GET_CONST(referenceData_, RunStepByStepWritingRequest::ReferenceData) };
    inline RunStepByStepWritingRequest::ReferenceData getReferenceData() { DARABONBA_PTR_GET(referenceData_, RunStepByStepWritingRequest::ReferenceData) };
    inline RunStepByStepWritingRequest& setReferenceData(const RunStepByStepWritingRequest::ReferenceData & referenceData) { DARABONBA_PTR_SET_VALUE(referenceData_, referenceData) };
    inline RunStepByStepWritingRequest& setReferenceData(RunStepByStepWritingRequest::ReferenceData && referenceData) { DARABONBA_PTR_SET_RVALUE(referenceData_, referenceData) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunStepByStepWritingRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunStepByStepWritingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunStepByStepWritingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // writingConfig Field Functions 
    bool hasWritingConfig() const { return this->writingConfig_ != nullptr;};
    void deleteWritingConfig() { this->writingConfig_ = nullptr;};
    inline const RunStepByStepWritingRequest::WritingConfig & getWritingConfig() const { DARABONBA_PTR_GET_CONST(writingConfig_, RunStepByStepWritingRequest::WritingConfig) };
    inline RunStepByStepWritingRequest::WritingConfig getWritingConfig() { DARABONBA_PTR_GET(writingConfig_, RunStepByStepWritingRequest::WritingConfig) };
    inline RunStepByStepWritingRequest& setWritingConfig(const RunStepByStepWritingRequest::WritingConfig & writingConfig) { DARABONBA_PTR_SET_VALUE(writingConfig_, writingConfig) };
    inline RunStepByStepWritingRequest& setWritingConfig(RunStepByStepWritingRequest::WritingConfig && writingConfig) { DARABONBA_PTR_SET_RVALUE(writingConfig_, writingConfig) };


  protected:
    shared_ptr<string> originSessionId_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    shared_ptr<RunStepByStepWritingRequest::ReferenceData> referenceData_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
    shared_ptr<RunStepByStepWritingRequest::WritingConfig> writingConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
