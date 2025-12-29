// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODY_HPP_
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
  class GetHotTopicBroadcastResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHotTopicBroadcastResponseBody() = default ;
    GetHotTopicBroadcastResponseBody(const GetHotTopicBroadcastResponseBody &) = default ;
    GetHotTopicBroadcastResponseBody(GetHotTopicBroadcastResponseBody &&) = default ;
    GetHotTopicBroadcastResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastResponseBody() = default ;
    GetHotTopicBroadcastResponseBody& operator=(const GetHotTopicBroadcastResponseBody &) = default ;
    GetHotTopicBroadcastResponseBody& operator=(GetHotTopicBroadcastResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalTokenInfo, totalTokenInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalTokenInfo, totalTokenInfo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TotalTokenInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalTokenInfo& obj) { 
          DARABONBA_PTR_TO_JSON(HotTopicCount, hotTopicCount_);
          DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
        };
        friend void from_json(const Darabonba::Json& j, TotalTokenInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(HotTopicCount, hotTopicCount_);
          DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
        };
        TotalTokenInfo() = default ;
        TotalTokenInfo(const TotalTokenInfo &) = default ;
        TotalTokenInfo(TotalTokenInfo &&) = default ;
        TotalTokenInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalTokenInfo() = default ;
        TotalTokenInfo& operator=(const TotalTokenInfo &) = default ;
        TotalTokenInfo& operator=(TotalTokenInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hotTopicCount_ == nullptr
        && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->wordCount_ == nullptr; };
        // hotTopicCount Field Functions 
        bool hasHotTopicCount() const { return this->hotTopicCount_ != nullptr;};
        void deleteHotTopicCount() { this->hotTopicCount_ = nullptr;};
        inline int32_t getHotTopicCount() const { DARABONBA_PTR_GET_DEFAULT(hotTopicCount_, 0) };
        inline TotalTokenInfo& setHotTopicCount(int32_t hotTopicCount) { DARABONBA_PTR_SET_VALUE(hotTopicCount_, hotTopicCount) };


        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
        inline TotalTokenInfo& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
        inline TotalTokenInfo& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // wordCount Field Functions 
        bool hasWordCount() const { return this->wordCount_ != nullptr;};
        void deleteWordCount() { this->wordCount_ = nullptr;};
        inline int32_t getWordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0) };
        inline TotalTokenInfo& setWordCount(int32_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


      protected:
        shared_ptr<int32_t> hotTopicCount_ {};
        shared_ptr<int32_t> inputTokens_ {};
        shared_ptr<int32_t> outputTokens_ {};
        shared_ptr<int32_t> wordCount_ {};
      };

      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CustomHotValue, customHotValue_);
          DARABONBA_PTR_TO_JSON(CustomTextSummary, customTextSummary_);
          DARABONBA_PTR_TO_JSON(HotTopic, hotTopic_);
          DARABONBA_PTR_TO_JSON(HotTopicVersion, hotTopicVersion_);
          DARABONBA_PTR_TO_JSON(HotValue, hotValue_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Images, images_);
          DARABONBA_PTR_TO_JSON(InputToken, inputToken_);
          DARABONBA_PTR_TO_JSON(Locations, locations_);
          DARABONBA_PTR_TO_JSON(News, news_);
          DARABONBA_PTR_TO_JSON(OutputToken, outputToken_);
          DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(TextSummary, textSummary_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CustomHotValue, customHotValue_);
          DARABONBA_PTR_FROM_JSON(CustomTextSummary, customTextSummary_);
          DARABONBA_PTR_FROM_JSON(HotTopic, hotTopic_);
          DARABONBA_PTR_FROM_JSON(HotTopicVersion, hotTopicVersion_);
          DARABONBA_PTR_FROM_JSON(HotValue, hotValue_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Images, images_);
          DARABONBA_PTR_FROM_JSON(InputToken, inputToken_);
          DARABONBA_PTR_FROM_JSON(Locations, locations_);
          DARABONBA_PTR_FROM_JSON(News, news_);
          DARABONBA_PTR_FROM_JSON(OutputToken, outputToken_);
          DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(TextSummary, textSummary_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Summary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Summary& obj) { 
            DARABONBA_PTR_TO_JSON(InputToken, inputToken_);
            DARABONBA_PTR_TO_JSON(OutputToken, outputToken_);
            DARABONBA_PTR_TO_JSON(Summaries, summaries_);
          };
          friend void from_json(const Darabonba::Json& j, Summary& obj) { 
            DARABONBA_PTR_FROM_JSON(InputToken, inputToken_);
            DARABONBA_PTR_FROM_JSON(OutputToken, outputToken_);
            DARABONBA_PTR_FROM_JSON(Summaries, summaries_);
          };
          Summary() = default ;
          Summary(const Summary &) = default ;
          Summary(Summary &&) = default ;
          Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Summary() = default ;
          Summary& operator=(const Summary &) = default ;
          Summary& operator=(Summary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Summaries : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Summaries& obj) { 
              DARABONBA_PTR_TO_JSON(Summary, summary_);
              DARABONBA_PTR_TO_JSON(Title, title_);
            };
            friend void from_json(const Darabonba::Json& j, Summaries& obj) { 
              DARABONBA_PTR_FROM_JSON(Summary, summary_);
              DARABONBA_PTR_FROM_JSON(Title, title_);
            };
            Summaries() = default ;
            Summaries(const Summaries &) = default ;
            Summaries(Summaries &&) = default ;
            Summaries(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Summaries() = default ;
            Summaries& operator=(const Summaries &) = default ;
            Summaries& operator=(Summaries &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->summary_ == nullptr
        && this->title_ == nullptr; };
            // summary Field Functions 
            bool hasSummary() const { return this->summary_ != nullptr;};
            void deleteSummary() { this->summary_ = nullptr;};
            inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
            inline Summaries& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline Summaries& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          protected:
            shared_ptr<string> summary_ {};
            shared_ptr<string> title_ {};
          };

          virtual bool empty() const override { return this->inputToken_ == nullptr
        && this->outputToken_ == nullptr && this->summaries_ == nullptr; };
          // inputToken Field Functions 
          bool hasInputToken() const { return this->inputToken_ != nullptr;};
          void deleteInputToken() { this->inputToken_ = nullptr;};
          inline int32_t getInputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0) };
          inline Summary& setInputToken(int32_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


          // outputToken Field Functions 
          bool hasOutputToken() const { return this->outputToken_ != nullptr;};
          void deleteOutputToken() { this->outputToken_ = nullptr;};
          inline int32_t getOutputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, 0) };
          inline Summary& setOutputToken(int32_t outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


          // summaries Field Functions 
          bool hasSummaries() const { return this->summaries_ != nullptr;};
          void deleteSummaries() { this->summaries_ = nullptr;};
          inline const vector<Summary::Summaries> & getSummaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Summary::Summaries>) };
          inline vector<Summary::Summaries> getSummaries() { DARABONBA_PTR_GET(summaries_, vector<Summary::Summaries>) };
          inline Summary& setSummaries(const vector<Summary::Summaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
          inline Summary& setSummaries(vector<Summary::Summaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


        protected:
          shared_ptr<int32_t> inputToken_ {};
          shared_ptr<int32_t> outputToken_ {};
          shared_ptr<vector<Summary::Summaries>> summaries_ {};
        };

        class News : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const News& obj) { 
            DARABONBA_PTR_TO_JSON(AnalysisCategory, analysisCategory_);
            DARABONBA_PTR_TO_JSON(AnalysisTopic, analysisTopic_);
            DARABONBA_PTR_TO_JSON(Author, author_);
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Comments, comments_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Domain, domain_);
            DARABONBA_PTR_TO_JSON(Dt, dt_);
            DARABONBA_PTR_TO_JSON(HotTopic, hotTopic_);
            DARABONBA_PTR_TO_JSON(ImgList, imgList_);
            DARABONBA_PTR_TO_JSON(Logo, logo_);
            DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Url, url_);
            DARABONBA_PTR_TO_JSON(Uuid, uuid_);
            DARABONBA_PTR_TO_JSON(Website, website_);
          };
          friend void from_json(const Darabonba::Json& j, News& obj) { 
            DARABONBA_PTR_FROM_JSON(AnalysisCategory, analysisCategory_);
            DARABONBA_PTR_FROM_JSON(AnalysisTopic, analysisTopic_);
            DARABONBA_PTR_FROM_JSON(Author, author_);
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Comments, comments_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Domain, domain_);
            DARABONBA_PTR_FROM_JSON(Dt, dt_);
            DARABONBA_PTR_FROM_JSON(HotTopic, hotTopic_);
            DARABONBA_PTR_FROM_JSON(ImgList, imgList_);
            DARABONBA_PTR_FROM_JSON(Logo, logo_);
            DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
            DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
            DARABONBA_PTR_FROM_JSON(Website, website_);
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
              DARABONBA_PTR_TO_JSON(Username, username_);
            };
            friend void from_json(const Darabonba::Json& j, Comments& obj) { 
              DARABONBA_PTR_FROM_JSON(Text, text_);
              DARABONBA_PTR_FROM_JSON(Username, username_);
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
            virtual bool empty() const override { return this->text_ == nullptr
        && this->username_ == nullptr; };
            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Comments& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // username Field Functions 
            bool hasUsername() const { return this->username_ != nullptr;};
            void deleteUsername() { this->username_ = nullptr;};
            inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
            inline Comments& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


          protected:
            shared_ptr<string> text_ {};
            shared_ptr<string> username_ {};
          };

          virtual bool empty() const override { return this->analysisCategory_ == nullptr
        && this->analysisTopic_ == nullptr && this->author_ == nullptr && this->category_ == nullptr && this->comments_ == nullptr && this->content_ == nullptr
        && this->createTime_ == nullptr && this->domain_ == nullptr && this->dt_ == nullptr && this->hotTopic_ == nullptr && this->imgList_ == nullptr
        && this->logo_ == nullptr && this->pubTime_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr
        && this->uuid_ == nullptr && this->website_ == nullptr; };
          // analysisCategory Field Functions 
          bool hasAnalysisCategory() const { return this->analysisCategory_ != nullptr;};
          void deleteAnalysisCategory() { this->analysisCategory_ = nullptr;};
          inline string getAnalysisCategory() const { DARABONBA_PTR_GET_DEFAULT(analysisCategory_, "") };
          inline News& setAnalysisCategory(string analysisCategory) { DARABONBA_PTR_SET_VALUE(analysisCategory_, analysisCategory) };


          // analysisTopic Field Functions 
          bool hasAnalysisTopic() const { return this->analysisTopic_ != nullptr;};
          void deleteAnalysisTopic() { this->analysisTopic_ = nullptr;};
          inline string getAnalysisTopic() const { DARABONBA_PTR_GET_DEFAULT(analysisTopic_, "") };
          inline News& setAnalysisTopic(string analysisTopic) { DARABONBA_PTR_SET_VALUE(analysisTopic_, analysisTopic) };


          // author Field Functions 
          bool hasAuthor() const { return this->author_ != nullptr;};
          void deleteAuthor() { this->author_ = nullptr;};
          inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
          inline News& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline const vector<string> & getCategory() const { DARABONBA_PTR_GET_CONST(category_, vector<string>) };
          inline vector<string> getCategory() { DARABONBA_PTR_GET(category_, vector<string>) };
          inline News& setCategory(const vector<string> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
          inline News& setCategory(vector<string> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


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


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline News& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // domain Field Functions 
          bool hasDomain() const { return this->domain_ != nullptr;};
          void deleteDomain() { this->domain_ = nullptr;};
          inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
          inline News& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


          // dt Field Functions 
          bool hasDt() const { return this->dt_ != nullptr;};
          void deleteDt() { this->dt_ = nullptr;};
          inline string getDt() const { DARABONBA_PTR_GET_DEFAULT(dt_, "") };
          inline News& setDt(string dt) { DARABONBA_PTR_SET_VALUE(dt_, dt) };


          // hotTopic Field Functions 
          bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
          void deleteHotTopic() { this->hotTopic_ = nullptr;};
          inline string getHotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
          inline News& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


          // imgList Field Functions 
          bool hasImgList() const { return this->imgList_ != nullptr;};
          void deleteImgList() { this->imgList_ = nullptr;};
          inline const vector<string> & getImgList() const { DARABONBA_PTR_GET_CONST(imgList_, vector<string>) };
          inline vector<string> getImgList() { DARABONBA_PTR_GET(imgList_, vector<string>) };
          inline News& setImgList(const vector<string> & imgList) { DARABONBA_PTR_SET_VALUE(imgList_, imgList) };
          inline News& setImgList(vector<string> && imgList) { DARABONBA_PTR_SET_RVALUE(imgList_, imgList) };


          // logo Field Functions 
          bool hasLogo() const { return this->logo_ != nullptr;};
          void deleteLogo() { this->logo_ = nullptr;};
          inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
          inline News& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


          // pubTime Field Functions 
          bool hasPubTime() const { return this->pubTime_ != nullptr;};
          void deletePubTime() { this->pubTime_ = nullptr;};
          inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
          inline News& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline News& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


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


          // uuid Field Functions 
          bool hasUuid() const { return this->uuid_ != nullptr;};
          void deleteUuid() { this->uuid_ = nullptr;};
          inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
          inline News& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


          // website Field Functions 
          bool hasWebsite() const { return this->website_ != nullptr;};
          void deleteWebsite() { this->website_ = nullptr;};
          inline string getWebsite() const { DARABONBA_PTR_GET_DEFAULT(website_, "") };
          inline News& setWebsite(string website) { DARABONBA_PTR_SET_VALUE(website_, website) };


        protected:
          shared_ptr<string> analysisCategory_ {};
          shared_ptr<string> analysisTopic_ {};
          shared_ptr<string> author_ {};
          shared_ptr<vector<string>> category_ {};
          shared_ptr<vector<News::Comments>> comments_ {};
          shared_ptr<string> content_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<string> domain_ {};
          shared_ptr<string> dt_ {};
          shared_ptr<string> hotTopic_ {};
          shared_ptr<vector<string>> imgList_ {};
          // logo
          shared_ptr<string> logo_ {};
          shared_ptr<string> pubTime_ {};
          shared_ptr<string> summary_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
          shared_ptr<string> uuid_ {};
          shared_ptr<string> website_ {};
        };

        class Images : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Images& obj) { 
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Images& obj) { 
            DARABONBA_PTR_FROM_JSON(Url, url_);
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

        virtual bool empty() const override { return this->category_ == nullptr
        && this->createTime_ == nullptr && this->customHotValue_ == nullptr && this->customTextSummary_ == nullptr && this->hotTopic_ == nullptr && this->hotTopicVersion_ == nullptr
        && this->hotValue_ == nullptr && this->id_ == nullptr && this->images_ == nullptr && this->inputToken_ == nullptr && this->locations_ == nullptr
        && this->news_ == nullptr && this->outputToken_ == nullptr && this->pubTime_ == nullptr && this->summary_ == nullptr && this->textSummary_ == nullptr
        && this->url_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DataItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DataItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // customHotValue Field Functions 
        bool hasCustomHotValue() const { return this->customHotValue_ != nullptr;};
        void deleteCustomHotValue() { this->customHotValue_ = nullptr;};
        inline double getCustomHotValue() const { DARABONBA_PTR_GET_DEFAULT(customHotValue_, 0.0) };
        inline DataItem& setCustomHotValue(double customHotValue) { DARABONBA_PTR_SET_VALUE(customHotValue_, customHotValue) };


        // customTextSummary Field Functions 
        bool hasCustomTextSummary() const { return this->customTextSummary_ != nullptr;};
        void deleteCustomTextSummary() { this->customTextSummary_ = nullptr;};
        inline string getCustomTextSummary() const { DARABONBA_PTR_GET_DEFAULT(customTextSummary_, "") };
        inline DataItem& setCustomTextSummary(string customTextSummary) { DARABONBA_PTR_SET_VALUE(customTextSummary_, customTextSummary) };


        // hotTopic Field Functions 
        bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
        void deleteHotTopic() { this->hotTopic_ = nullptr;};
        inline string getHotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
        inline DataItem& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


        // hotTopicVersion Field Functions 
        bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
        void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
        inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
        inline DataItem& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


        // hotValue Field Functions 
        bool hasHotValue() const { return this->hotValue_ != nullptr;};
        void deleteHotValue() { this->hotValue_ = nullptr;};
        inline double getHotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0.0) };
        inline DataItem& setHotValue(double hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // images Field Functions 
        bool hasImages() const { return this->images_ != nullptr;};
        void deleteImages() { this->images_ = nullptr;};
        inline const vector<DataItem::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<DataItem::Images>) };
        inline vector<DataItem::Images> getImages() { DARABONBA_PTR_GET(images_, vector<DataItem::Images>) };
        inline DataItem& setImages(const vector<DataItem::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
        inline DataItem& setImages(vector<DataItem::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


        // inputToken Field Functions 
        bool hasInputToken() const { return this->inputToken_ != nullptr;};
        void deleteInputToken() { this->inputToken_ = nullptr;};
        inline int32_t getInputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0) };
        inline DataItem& setInputToken(int32_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


        // locations Field Functions 
        bool hasLocations() const { return this->locations_ != nullptr;};
        void deleteLocations() { this->locations_ = nullptr;};
        inline const vector<string> & getLocations() const { DARABONBA_PTR_GET_CONST(locations_, vector<string>) };
        inline vector<string> getLocations() { DARABONBA_PTR_GET(locations_, vector<string>) };
        inline DataItem& setLocations(const vector<string> & locations) { DARABONBA_PTR_SET_VALUE(locations_, locations) };
        inline DataItem& setLocations(vector<string> && locations) { DARABONBA_PTR_SET_RVALUE(locations_, locations) };


        // news Field Functions 
        bool hasNews() const { return this->news_ != nullptr;};
        void deleteNews() { this->news_ = nullptr;};
        inline const vector<DataItem::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<DataItem::News>) };
        inline vector<DataItem::News> getNews() { DARABONBA_PTR_GET(news_, vector<DataItem::News>) };
        inline DataItem& setNews(const vector<DataItem::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
        inline DataItem& setNews(vector<DataItem::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


        // outputToken Field Functions 
        bool hasOutputToken() const { return this->outputToken_ != nullptr;};
        void deleteOutputToken() { this->outputToken_ = nullptr;};
        inline int32_t getOutputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, 0) };
        inline DataItem& setOutputToken(int32_t outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


        // pubTime Field Functions 
        bool hasPubTime() const { return this->pubTime_ != nullptr;};
        void deletePubTime() { this->pubTime_ = nullptr;};
        inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
        inline DataItem& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline const DataItem::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, DataItem::Summary) };
        inline DataItem::Summary getSummary() { DARABONBA_PTR_GET(summary_, DataItem::Summary) };
        inline DataItem& setSummary(const DataItem::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
        inline DataItem& setSummary(DataItem::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


        // textSummary Field Functions 
        bool hasTextSummary() const { return this->textSummary_ != nullptr;};
        void deleteTextSummary() { this->textSummary_ = nullptr;};
        inline string getTextSummary() const { DARABONBA_PTR_GET_DEFAULT(textSummary_, "") };
        inline DataItem& setTextSummary(string textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline DataItem& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<double> customHotValue_ {};
        shared_ptr<string> customTextSummary_ {};
        shared_ptr<string> hotTopic_ {};
        shared_ptr<string> hotTopicVersion_ {};
        shared_ptr<double> hotValue_ {};
        shared_ptr<string> id_ {};
        shared_ptr<vector<DataItem::Images>> images_ {};
        shared_ptr<int32_t> inputToken_ {};
        shared_ptr<vector<string>> locations_ {};
        shared_ptr<vector<DataItem::News>> news_ {};
        shared_ptr<int32_t> outputToken_ {};
        shared_ptr<string> pubTime_ {};
        shared_ptr<DataItem::Summary> summary_ {};
        shared_ptr<string> textSummary_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr && this->totalTokenInfo_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalTokenInfo Field Functions 
      bool hasTotalTokenInfo() const { return this->totalTokenInfo_ != nullptr;};
      void deleteTotalTokenInfo() { this->totalTokenInfo_ = nullptr;};
      inline const Data::TotalTokenInfo & getTotalTokenInfo() const { DARABONBA_PTR_GET_CONST(totalTokenInfo_, Data::TotalTokenInfo) };
      inline Data::TotalTokenInfo getTotalTokenInfo() { DARABONBA_PTR_GET(totalTokenInfo_, Data::TotalTokenInfo) };
      inline Data& setTotalTokenInfo(const Data::TotalTokenInfo & totalTokenInfo) { DARABONBA_PTR_SET_VALUE(totalTokenInfo_, totalTokenInfo) };
      inline Data& setTotalTokenInfo(Data::TotalTokenInfo && totalTokenInfo) { DARABONBA_PTR_SET_RVALUE(totalTokenInfo_, totalTokenInfo) };


    protected:
      shared_ptr<vector<Data::DataItem>> data_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<Data::TotalTokenInfo> totalTokenInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHotTopicBroadcastResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHotTopicBroadcastResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHotTopicBroadcastResponseBody::Data) };
    inline GetHotTopicBroadcastResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHotTopicBroadcastResponseBody::Data) };
    inline GetHotTopicBroadcastResponseBody& setData(const GetHotTopicBroadcastResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotTopicBroadcastResponseBody& setData(GetHotTopicBroadcastResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHotTopicBroadcastResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotTopicBroadcastResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotTopicBroadcastResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHotTopicBroadcastResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHotTopicBroadcastResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
