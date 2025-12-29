// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMSOURCETOPICANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMSOURCETOPICANALYSISREQUEST_HPP_
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
  class SubmitCustomSourceTopicAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomSourceTopicAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisTypes, analysisTypes_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(MaxTopicSize, maxTopicSize_);
      DARABONBA_PTR_TO_JSON(News, news_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomSourceTopicAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisTypes, analysisTypes_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(MaxTopicSize, maxTopicSize_);
      DARABONBA_PTR_FROM_JSON(News, news_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitCustomSourceTopicAnalysisRequest() = default ;
    SubmitCustomSourceTopicAnalysisRequest(const SubmitCustomSourceTopicAnalysisRequest &) = default ;
    SubmitCustomSourceTopicAnalysisRequest(SubmitCustomSourceTopicAnalysisRequest &&) = default ;
    SubmitCustomSourceTopicAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomSourceTopicAnalysisRequest() = default ;
    SubmitCustomSourceTopicAnalysisRequest& operator=(const SubmitCustomSourceTopicAnalysisRequest &) = default ;
    SubmitCustomSourceTopicAnalysisRequest& operator=(SubmitCustomSourceTopicAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class News : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const News& obj) { 
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, News& obj) { 
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      News() = default ;
      News(const News &) = default ;
      News(News &&) = default ;
      News(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~News() = default ;
      News& operator=(const News &) = default ;
      News& operator=(News &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Comments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Comments& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Comments& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        Comments() = default ;
        Comments(const Comments &) = default ;
        Comments(Comments &&) = default ;
        Comments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Comments() = default ;
        Comments& operator=(const Comments &) = default ;
        Comments& operator=(Comments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Comments& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->comments_ == nullptr
        && this->content_ == nullptr && this->pubTime_ == nullptr && this->source_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline const vector<News::Comments> & getComments() const { DARABONBA_PTR_GET_CONST(comments_, vector<News::Comments>) };
      inline vector<News::Comments> getComments() { DARABONBA_PTR_GET(comments_, vector<News::Comments>) };
      inline News& setComments(const vector<News::Comments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
      inline News& setComments(vector<News::Comments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline News& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline News& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline News& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline News& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline News& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<vector<News::Comments>> comments_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> pubTime_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->analysisTypes_ == nullptr
        && this->fileType_ == nullptr && this->fileUrl_ == nullptr && this->maxTopicSize_ == nullptr && this->news_ == nullptr && this->workspaceId_ == nullptr; };
    // analysisTypes Field Functions 
    bool hasAnalysisTypes() const { return this->analysisTypes_ != nullptr;};
    void deleteAnalysisTypes() { this->analysisTypes_ = nullptr;};
    inline const vector<string> & getAnalysisTypes() const { DARABONBA_PTR_GET_CONST(analysisTypes_, vector<string>) };
    inline vector<string> getAnalysisTypes() { DARABONBA_PTR_GET(analysisTypes_, vector<string>) };
    inline SubmitCustomSourceTopicAnalysisRequest& setAnalysisTypes(const vector<string> & analysisTypes) { DARABONBA_PTR_SET_VALUE(analysisTypes_, analysisTypes) };
    inline SubmitCustomSourceTopicAnalysisRequest& setAnalysisTypes(vector<string> && analysisTypes) { DARABONBA_PTR_SET_RVALUE(analysisTypes_, analysisTypes) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline SubmitCustomSourceTopicAnalysisRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitCustomSourceTopicAnalysisRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // maxTopicSize Field Functions 
    bool hasMaxTopicSize() const { return this->maxTopicSize_ != nullptr;};
    void deleteMaxTopicSize() { this->maxTopicSize_ = nullptr;};
    inline int32_t getMaxTopicSize() const { DARABONBA_PTR_GET_DEFAULT(maxTopicSize_, 0) };
    inline SubmitCustomSourceTopicAnalysisRequest& setMaxTopicSize(int32_t maxTopicSize) { DARABONBA_PTR_SET_VALUE(maxTopicSize_, maxTopicSize) };


    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<SubmitCustomSourceTopicAnalysisRequest::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<SubmitCustomSourceTopicAnalysisRequest::News>) };
    inline vector<SubmitCustomSourceTopicAnalysisRequest::News> getNews() { DARABONBA_PTR_GET(news_, vector<SubmitCustomSourceTopicAnalysisRequest::News>) };
    inline SubmitCustomSourceTopicAnalysisRequest& setNews(const vector<SubmitCustomSourceTopicAnalysisRequest::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline SubmitCustomSourceTopicAnalysisRequest& setNews(vector<SubmitCustomSourceTopicAnalysisRequest::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitCustomSourceTopicAnalysisRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<string>> analysisTypes_ {};
    shared_ptr<string> fileType_ {};
    shared_ptr<string> fileUrl_ {};
    shared_ptr<int32_t> maxTopicSize_ {};
    shared_ptr<vector<SubmitCustomSourceTopicAnalysisRequest::News>> news_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
