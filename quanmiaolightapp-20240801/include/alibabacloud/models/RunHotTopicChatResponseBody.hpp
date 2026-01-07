// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODY_HPP_
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
  class RunHotTopicChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RunHotTopicChatResponseBody() = default ;
    RunHotTopicChatResponseBody(const RunHotTopicChatResponseBody &) = default ;
    RunHotTopicChatResponseBody(RunHotTopicChatResponseBody &&) = default ;
    RunHotTopicChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBody() = default ;
    RunHotTopicChatResponseBody& operator=(const RunHotTopicChatResponseBody &) = default ;
    RunHotTopicChatResponseBody& operator=(RunHotTopicChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(output, output_);
        DARABONBA_PTR_TO_JSON(usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(output, output_);
        DARABONBA_PTR_FROM_JSON(usage, usage_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
        };
        Usage() = default ;
        Usage(const Usage &) = default ;
        Usage(Usage &&) = default ;
        Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usage() = default ;
        Usage& operator=(const Usage &) = default ;
        Usage& operator=(Usage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
        inline Usage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
        inline Usage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
        inline Usage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      protected:
        shared_ptr<int64_t> inputTokens_ {};
        shared_ptr<int64_t> outputTokens_ {};
        shared_ptr<int64_t> totalTokens_ {};
      };

      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(articles, articles_);
          DARABONBA_PTR_TO_JSON(category, category_);
          DARABONBA_PTR_TO_JSON(hotTopicSummaries, hotTopicSummaries_);
          DARABONBA_PTR_TO_JSON(keyword, keyword_);
          DARABONBA_PTR_TO_JSON(location, location_);
          DARABONBA_PTR_TO_JSON(multimodalMedias, multimodalMedias_);
          DARABONBA_PTR_TO_JSON(recommendQueries, recommendQueries_);
          DARABONBA_PTR_TO_JSON(searchQuery, searchQuery_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(articles, articles_);
          DARABONBA_PTR_FROM_JSON(category, category_);
          DARABONBA_PTR_FROM_JSON(hotTopicSummaries, hotTopicSummaries_);
          DARABONBA_PTR_FROM_JSON(keyword, keyword_);
          DARABONBA_PTR_FROM_JSON(location, location_);
          DARABONBA_PTR_FROM_JSON(multimodalMedias, multimodalMedias_);
          DARABONBA_PTR_FROM_JSON(recommendQueries, recommendQueries_);
          DARABONBA_PTR_FROM_JSON(searchQuery, searchQuery_);
          DARABONBA_PTR_FROM_JSON(text, text_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MultimodalMedias : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MultimodalMedias& obj) { 
            DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
            DARABONBA_PTR_TO_JSON(mediaType, mediaType_);
            DARABONBA_PTR_TO_JSON(sortScore, sortScore_);
          };
          friend void from_json(const Darabonba::Json& j, MultimodalMedias& obj) { 
            DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
            DARABONBA_PTR_FROM_JSON(mediaType, mediaType_);
            DARABONBA_PTR_FROM_JSON(sortScore, sortScore_);
          };
          MultimodalMedias() = default ;
          MultimodalMedias(const MultimodalMedias &) = default ;
          MultimodalMedias(MultimodalMedias &&) = default ;
          MultimodalMedias(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MultimodalMedias() = default ;
          MultimodalMedias& operator=(const MultimodalMedias &) = default ;
          MultimodalMedias& operator=(MultimodalMedias &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fileUrl_ == nullptr
        && this->mediaType_ == nullptr && this->sortScore_ == nullptr; };
          // fileUrl Field Functions 
          bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
          void deleteFileUrl() { this->fileUrl_ = nullptr;};
          inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
          inline MultimodalMedias& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


          // mediaType Field Functions 
          bool hasMediaType() const { return this->mediaType_ != nullptr;};
          void deleteMediaType() { this->mediaType_ = nullptr;};
          inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
          inline MultimodalMedias& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


          // sortScore Field Functions 
          bool hasSortScore() const { return this->sortScore_ != nullptr;};
          void deleteSortScore() { this->sortScore_ = nullptr;};
          inline double getSortScore() const { DARABONBA_PTR_GET_DEFAULT(sortScore_, 0.0) };
          inline MultimodalMedias& setSortScore(double sortScore) { DARABONBA_PTR_SET_VALUE(sortScore_, sortScore) };


        protected:
          shared_ptr<string> fileUrl_ {};
          shared_ptr<string> mediaType_ {};
          shared_ptr<double> sortScore_ {};
        };

        class HotTopicSummaries : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HotTopicSummaries& obj) { 
            DARABONBA_PTR_TO_JSON(customHotValue, customHotValue_);
            DARABONBA_PTR_TO_JSON(customTextSummary, customTextSummary_);
            DARABONBA_PTR_TO_JSON(hotTopic, hotTopic_);
            DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
            DARABONBA_PTR_TO_JSON(hotValue, hotValue_);
            DARABONBA_PTR_TO_JSON(images, images_);
            DARABONBA_PTR_TO_JSON(news, news_);
            DARABONBA_PTR_TO_JSON(pubTime, pubTime_);
            DARABONBA_PTR_TO_JSON(textSummary, textSummary_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, HotTopicSummaries& obj) { 
            DARABONBA_PTR_FROM_JSON(customHotValue, customHotValue_);
            DARABONBA_PTR_FROM_JSON(customTextSummary, customTextSummary_);
            DARABONBA_PTR_FROM_JSON(hotTopic, hotTopic_);
            DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
            DARABONBA_PTR_FROM_JSON(hotValue, hotValue_);
            DARABONBA_PTR_FROM_JSON(images, images_);
            DARABONBA_PTR_FROM_JSON(news, news_);
            DARABONBA_PTR_FROM_JSON(pubTime, pubTime_);
            DARABONBA_PTR_FROM_JSON(textSummary, textSummary_);
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          HotTopicSummaries() = default ;
          HotTopicSummaries(const HotTopicSummaries &) = default ;
          HotTopicSummaries(HotTopicSummaries &&) = default ;
          HotTopicSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HotTopicSummaries() = default ;
          HotTopicSummaries& operator=(const HotTopicSummaries &) = default ;
          HotTopicSummaries& operator=(HotTopicSummaries &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class News : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const News& obj) { 
              DARABONBA_PTR_TO_JSON(title, title_);
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, News& obj) { 
              DARABONBA_PTR_FROM_JSON(title, title_);
              DARABONBA_PTR_FROM_JSON(url, url_);
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
            virtual bool empty() const override { return this->title_ == nullptr
        && this->url_ == nullptr; };
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
            shared_ptr<string> title_ {};
            shared_ptr<string> url_ {};
          };

          class Images : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Images& obj) { 
              DARABONBA_PTR_TO_JSON(url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Images& obj) { 
              DARABONBA_PTR_FROM_JSON(url, url_);
            };
            Images() = default ;
            Images(const Images &) = default ;
            Images(Images &&) = default ;
            Images(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Images() = default ;
            Images& operator=(const Images &) = default ;
            Images& operator=(Images &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->url_ == nullptr; };
            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Images& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->customHotValue_ == nullptr
        && this->customTextSummary_ == nullptr && this->hotTopic_ == nullptr && this->hotTopicVersion_ == nullptr && this->hotValue_ == nullptr && this->images_ == nullptr
        && this->news_ == nullptr && this->pubTime_ == nullptr && this->textSummary_ == nullptr && this->url_ == nullptr; };
          // customHotValue Field Functions 
          bool hasCustomHotValue() const { return this->customHotValue_ != nullptr;};
          void deleteCustomHotValue() { this->customHotValue_ = nullptr;};
          inline double getCustomHotValue() const { DARABONBA_PTR_GET_DEFAULT(customHotValue_, 0.0) };
          inline HotTopicSummaries& setCustomHotValue(double customHotValue) { DARABONBA_PTR_SET_VALUE(customHotValue_, customHotValue) };


          // customTextSummary Field Functions 
          bool hasCustomTextSummary() const { return this->customTextSummary_ != nullptr;};
          void deleteCustomTextSummary() { this->customTextSummary_ = nullptr;};
          inline string getCustomTextSummary() const { DARABONBA_PTR_GET_DEFAULT(customTextSummary_, "") };
          inline HotTopicSummaries& setCustomTextSummary(string customTextSummary) { DARABONBA_PTR_SET_VALUE(customTextSummary_, customTextSummary) };


          // hotTopic Field Functions 
          bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
          void deleteHotTopic() { this->hotTopic_ = nullptr;};
          inline string getHotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
          inline HotTopicSummaries& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


          // hotTopicVersion Field Functions 
          bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
          void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
          inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
          inline HotTopicSummaries& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


          // hotValue Field Functions 
          bool hasHotValue() const { return this->hotValue_ != nullptr;};
          void deleteHotValue() { this->hotValue_ = nullptr;};
          inline double getHotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0.0) };
          inline HotTopicSummaries& setHotValue(double hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


          // images Field Functions 
          bool hasImages() const { return this->images_ != nullptr;};
          void deleteImages() { this->images_ = nullptr;};
          inline const vector<HotTopicSummaries::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<HotTopicSummaries::Images>) };
          inline vector<HotTopicSummaries::Images> getImages() { DARABONBA_PTR_GET(images_, vector<HotTopicSummaries::Images>) };
          inline HotTopicSummaries& setImages(const vector<HotTopicSummaries::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
          inline HotTopicSummaries& setImages(vector<HotTopicSummaries::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


          // news Field Functions 
          bool hasNews() const { return this->news_ != nullptr;};
          void deleteNews() { this->news_ = nullptr;};
          inline const vector<HotTopicSummaries::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<HotTopicSummaries::News>) };
          inline vector<HotTopicSummaries::News> getNews() { DARABONBA_PTR_GET(news_, vector<HotTopicSummaries::News>) };
          inline HotTopicSummaries& setNews(const vector<HotTopicSummaries::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
          inline HotTopicSummaries& setNews(vector<HotTopicSummaries::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


          // pubTime Field Functions 
          bool hasPubTime() const { return this->pubTime_ != nullptr;};
          void deletePubTime() { this->pubTime_ = nullptr;};
          inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
          inline HotTopicSummaries& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


          // textSummary Field Functions 
          bool hasTextSummary() const { return this->textSummary_ != nullptr;};
          void deleteTextSummary() { this->textSummary_ = nullptr;};
          inline string getTextSummary() const { DARABONBA_PTR_GET_DEFAULT(textSummary_, "") };
          inline HotTopicSummaries& setTextSummary(string textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline HotTopicSummaries& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<double> customHotValue_ {};
          shared_ptr<string> customTextSummary_ {};
          shared_ptr<string> hotTopic_ {};
          shared_ptr<string> hotTopicVersion_ {};
          shared_ptr<double> hotValue_ {};
          shared_ptr<vector<HotTopicSummaries::Images>> images_ {};
          shared_ptr<vector<HotTopicSummaries::News>> news_ {};
          shared_ptr<string> pubTime_ {};
          shared_ptr<string> textSummary_ {};
          shared_ptr<string> url_ {};
        };

        class Articles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Articles& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(pubTime, pubTime_);
            DARABONBA_PTR_TO_JSON(score, score_);
            DARABONBA_PTR_TO_JSON(searchSourceName, searchSourceName_);
            DARABONBA_PTR_TO_JSON(select, select_);
            DARABONBA_PTR_TO_JSON(summary, summary_);
            DARABONBA_PTR_TO_JSON(title, title_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Articles& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(pubTime, pubTime_);
            DARABONBA_PTR_FROM_JSON(score, score_);
            DARABONBA_PTR_FROM_JSON(searchSourceName, searchSourceName_);
            DARABONBA_PTR_FROM_JSON(select, select_);
            DARABONBA_PTR_FROM_JSON(summary, summary_);
            DARABONBA_PTR_FROM_JSON(title, title_);
            DARABONBA_PTR_FROM_JSON(url, url_);
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
        && this->pubTime_ == nullptr && this->score_ == nullptr && this->searchSourceName_ == nullptr && this->select_ == nullptr && this->summary_ == nullptr
        && this->title_ == nullptr && this->url_ == nullptr; };
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


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline Articles& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // searchSourceName Field Functions 
          bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
          void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
          inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
          inline Articles& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


          // select Field Functions 
          bool hasSelect() const { return this->select_ != nullptr;};
          void deleteSelect() { this->select_ = nullptr;};
          inline bool getSelect() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
          inline Articles& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline Articles& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


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
          shared_ptr<string> pubTime_ {};
          shared_ptr<double> score_ {};
          shared_ptr<string> searchSourceName_ {};
          shared_ptr<bool> select_ {};
          shared_ptr<string> summary_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->articles_ == nullptr
        && this->category_ == nullptr && this->hotTopicSummaries_ == nullptr && this->keyword_ == nullptr && this->location_ == nullptr && this->multimodalMedias_ == nullptr
        && this->recommendQueries_ == nullptr && this->searchQuery_ == nullptr && this->text_ == nullptr; };
        // articles Field Functions 
        bool hasArticles() const { return this->articles_ != nullptr;};
        void deleteArticles() { this->articles_ = nullptr;};
        inline const vector<Output::Articles> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Output::Articles>) };
        inline vector<Output::Articles> getArticles() { DARABONBA_PTR_GET(articles_, vector<Output::Articles>) };
        inline Output& setArticles(const vector<Output::Articles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
        inline Output& setArticles(vector<Output::Articles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Output& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // hotTopicSummaries Field Functions 
        bool hasHotTopicSummaries() const { return this->hotTopicSummaries_ != nullptr;};
        void deleteHotTopicSummaries() { this->hotTopicSummaries_ = nullptr;};
        inline const vector<Output::HotTopicSummaries> & getHotTopicSummaries() const { DARABONBA_PTR_GET_CONST(hotTopicSummaries_, vector<Output::HotTopicSummaries>) };
        inline vector<Output::HotTopicSummaries> getHotTopicSummaries() { DARABONBA_PTR_GET(hotTopicSummaries_, vector<Output::HotTopicSummaries>) };
        inline Output& setHotTopicSummaries(const vector<Output::HotTopicSummaries> & hotTopicSummaries) { DARABONBA_PTR_SET_VALUE(hotTopicSummaries_, hotTopicSummaries) };
        inline Output& setHotTopicSummaries(vector<Output::HotTopicSummaries> && hotTopicSummaries) { DARABONBA_PTR_SET_RVALUE(hotTopicSummaries_, hotTopicSummaries) };


        // keyword Field Functions 
        bool hasKeyword() const { return this->keyword_ != nullptr;};
        void deleteKeyword() { this->keyword_ = nullptr;};
        inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
        inline Output& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline Output& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // multimodalMedias Field Functions 
        bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
        void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
        inline const vector<Output::MultimodalMedias> & getMultimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<Output::MultimodalMedias>) };
        inline vector<Output::MultimodalMedias> getMultimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<Output::MultimodalMedias>) };
        inline Output& setMultimodalMedias(const vector<Output::MultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
        inline Output& setMultimodalMedias(vector<Output::MultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


        // recommendQueries Field Functions 
        bool hasRecommendQueries() const { return this->recommendQueries_ != nullptr;};
        void deleteRecommendQueries() { this->recommendQueries_ = nullptr;};
        inline const vector<string> & getRecommendQueries() const { DARABONBA_PTR_GET_CONST(recommendQueries_, vector<string>) };
        inline vector<string> getRecommendQueries() { DARABONBA_PTR_GET(recommendQueries_, vector<string>) };
        inline Output& setRecommendQueries(const vector<string> & recommendQueries) { DARABONBA_PTR_SET_VALUE(recommendQueries_, recommendQueries) };
        inline Output& setRecommendQueries(vector<string> && recommendQueries) { DARABONBA_PTR_SET_RVALUE(recommendQueries_, recommendQueries) };


        // searchQuery Field Functions 
        bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
        void deleteSearchQuery() { this->searchQuery_ = nullptr;};
        inline string getSearchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
        inline Output& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Output& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<vector<Output::Articles>> articles_ {};
        shared_ptr<string> category_ {};
        shared_ptr<vector<Output::HotTopicSummaries>> hotTopicSummaries_ {};
        shared_ptr<string> keyword_ {};
        shared_ptr<string> location_ {};
        shared_ptr<vector<Output::MultimodalMedias>> multimodalMedias_ {};
        shared_ptr<vector<string>> recommendQueries_ {};
        shared_ptr<string> searchQuery_ {};
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->output_ == nullptr
        && this->usage_ == nullptr; };
      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const Payload::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Payload::Output) };
      inline Payload::Output getOutput() { DARABONBA_PTR_GET(output_, Payload::Output) };
      inline Payload& setOutput(const Payload::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline Payload& setOutput(Payload::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Payload::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Payload::Usage) };
      inline Payload::Usage getUsage() { DARABONBA_PTR_GET(usage_, Payload::Usage) };
      inline Payload& setUsage(const Payload::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Payload& setUsage(Payload::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<Payload::Output> output_ {};
      shared_ptr<Payload::Usage> usage_ {};
    };

    class Header : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Header& obj) { 
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(event, event_);
        DARABONBA_PTR_TO_JSON(eventInfo, eventInfo_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(traceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(event, event_);
        DARABONBA_PTR_FROM_JSON(eventInfo, eventInfo_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(traceId, traceId_);
      };
      Header() = default ;
      Header(const Header &) = default ;
      Header(Header &&) = default ;
      Header(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Header() = default ;
      Header& operator=(const Header &) = default ;
      Header& operator=(Header &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->eventInfo_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr
        && this->traceId_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Header& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Header& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline Header& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // eventInfo Field Functions 
      bool hasEventInfo() const { return this->eventInfo_ != nullptr;};
      void deleteEventInfo() { this->eventInfo_ = nullptr;};
      inline string getEventInfo() const { DARABONBA_PTR_GET_DEFAULT(eventInfo_, "") };
      inline Header& setEventInfo(string eventInfo) { DARABONBA_PTR_SET_VALUE(eventInfo_, eventInfo) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Header& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Header& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Header& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> event_ {};
      shared_ptr<string> eventInfo_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->header_ == nullptr
        && this->payload_ == nullptr && this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunHotTopicChatResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, RunHotTopicChatResponseBody::Header) };
    inline RunHotTopicChatResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, RunHotTopicChatResponseBody::Header) };
    inline RunHotTopicChatResponseBody& setHeader(const RunHotTopicChatResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunHotTopicChatResponseBody& setHeader(RunHotTopicChatResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunHotTopicChatResponseBody::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, RunHotTopicChatResponseBody::Payload) };
    inline RunHotTopicChatResponseBody::Payload getPayload() { DARABONBA_PTR_GET(payload_, RunHotTopicChatResponseBody::Payload) };
    inline RunHotTopicChatResponseBody& setPayload(const RunHotTopicChatResponseBody::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunHotTopicChatResponseBody& setPayload(RunHotTopicChatResponseBody::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunHotTopicChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RunHotTopicChatResponseBody::Header> header_ {};
    shared_ptr<RunHotTopicChatResponseBody::Payload> payload_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
