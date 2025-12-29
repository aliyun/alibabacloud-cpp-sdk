// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODY_HPP_
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
  class RunSearchGenerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunSearchGenerationResponseBody() = default ;
    RunSearchGenerationResponseBody(const RunSearchGenerationResponseBody &) = default ;
    RunSearchGenerationResponseBody(RunSearchGenerationResponseBody &&) = default ;
    RunSearchGenerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBody() = default ;
    RunSearchGenerationResponseBody& operator=(const RunSearchGenerationResponseBody &) = default ;
    RunSearchGenerationResponseBody& operator=(RunSearchGenerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
          DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
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
          DARABONBA_PTR_TO_JSON(AgentContext, agentContext_);
          DARABONBA_PTR_TO_JSON(Messages, messages_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentContext, agentContext_);
          DARABONBA_PTR_FROM_JSON(Messages, messages_);
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
        class Messages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Messages& obj) { 
            DARABONBA_PTR_TO_JSON(Clarifications, clarifications_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(NodeCode, nodeCode_);
            DARABONBA_PTR_TO_JSON(SearchQueries, searchQueries_);
            DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
            DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
          };
          friend void from_json(const Darabonba::Json& j, Messages& obj) { 
            DARABONBA_PTR_FROM_JSON(Clarifications, clarifications_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(NodeCode, nodeCode_);
            DARABONBA_PTR_FROM_JSON(SearchQueries, searchQueries_);
            DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
            DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
          };
          Messages() = default ;
          Messages(const Messages &) = default ;
          Messages(Messages &&) = default ;
          Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Messages() = default ;
          Messages& operator=(const Messages &) = default ;
          Messages& operator=(Messages &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SearchResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
              DARABONBA_PTR_TO_JSON(Audios, audios_);
              DARABONBA_PTR_TO_JSON(Images, images_);
              DARABONBA_PTR_TO_JSON(MultimodalSearchQuery, multimodalSearchQuery_);
              DARABONBA_PTR_TO_JSON(Texts, texts_);
              DARABONBA_PTR_TO_JSON(Videos, videos_);
            };
            friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
              DARABONBA_PTR_FROM_JSON(Audios, audios_);
              DARABONBA_PTR_FROM_JSON(Images, images_);
              DARABONBA_PTR_FROM_JSON(MultimodalSearchQuery, multimodalSearchQuery_);
              DARABONBA_PTR_FROM_JSON(Texts, texts_);
              DARABONBA_PTR_FROM_JSON(Videos, videos_);
            };
            SearchResult() = default ;
            SearchResult(const SearchResult &) = default ;
            SearchResult(SearchResult &&) = default ;
            SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SearchResult() = default ;
            SearchResult& operator=(const SearchResult &) = default ;
            SearchResult& operator=(SearchResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Videos : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Videos& obj) { 
                DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
              };
              friend void from_json(const Darabonba::Json& j, Videos& obj) { 
                DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
              };
              Videos() = default ;
              Videos(const Videos &) = default ;
              Videos(Videos &&) = default ;
              Videos(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Videos() = default ;
              Videos& operator=(const Videos &) = default ;
              Videos& operator=(Videos &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->mediaId_ == nullptr; };
              // mediaId Field Functions 
              bool hasMediaId() const { return this->mediaId_ != nullptr;};
              void deleteMediaId() { this->mediaId_ = nullptr;};
              inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
              inline Videos& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


            protected:
              shared_ptr<string> mediaId_ {};
            };

            class Texts : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Texts& obj) { 
                DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
              };
              friend void from_json(const Darabonba::Json& j, Texts& obj) { 
                DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
              };
              Texts() = default ;
              Texts(const Texts &) = default ;
              Texts(Texts &&) = default ;
              Texts(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Texts() = default ;
              Texts& operator=(const Texts &) = default ;
              Texts& operator=(Texts &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->docUuid_ == nullptr; };
              // docUuid Field Functions 
              bool hasDocUuid() const { return this->docUuid_ != nullptr;};
              void deleteDocUuid() { this->docUuid_ = nullptr;};
              inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
              inline Texts& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


            protected:
              shared_ptr<string> docUuid_ {};
            };

            class Images : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Images& obj) { 
                DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
              };
              friend void from_json(const Darabonba::Json& j, Images& obj) { 
                DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
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
              virtual bool empty() const override { return this->mediaId_ == nullptr; };
              // mediaId Field Functions 
              bool hasMediaId() const { return this->mediaId_ != nullptr;};
              void deleteMediaId() { this->mediaId_ = nullptr;};
              inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
              inline Images& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


            protected:
              shared_ptr<string> mediaId_ {};
            };

            class Audios : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Audios& obj) { 
                DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
              };
              friend void from_json(const Darabonba::Json& j, Audios& obj) { 
                DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
              };
              Audios() = default ;
              Audios(const Audios &) = default ;
              Audios(Audios &&) = default ;
              Audios(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Audios() = default ;
              Audios& operator=(const Audios &) = default ;
              Audios& operator=(Audios &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->mediaId_ == nullptr; };
              // mediaId Field Functions 
              bool hasMediaId() const { return this->mediaId_ != nullptr;};
              void deleteMediaId() { this->mediaId_ = nullptr;};
              inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
              inline Audios& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


            protected:
              shared_ptr<string> mediaId_ {};
            };

            virtual bool empty() const override { return this->audios_ == nullptr
        && this->images_ == nullptr && this->multimodalSearchQuery_ == nullptr && this->texts_ == nullptr && this->videos_ == nullptr; };
            // audios Field Functions 
            bool hasAudios() const { return this->audios_ != nullptr;};
            void deleteAudios() { this->audios_ = nullptr;};
            inline const vector<SearchResult::Audios> & getAudios() const { DARABONBA_PTR_GET_CONST(audios_, vector<SearchResult::Audios>) };
            inline vector<SearchResult::Audios> getAudios() { DARABONBA_PTR_GET(audios_, vector<SearchResult::Audios>) };
            inline SearchResult& setAudios(const vector<SearchResult::Audios> & audios) { DARABONBA_PTR_SET_VALUE(audios_, audios) };
            inline SearchResult& setAudios(vector<SearchResult::Audios> && audios) { DARABONBA_PTR_SET_RVALUE(audios_, audios) };


            // images Field Functions 
            bool hasImages() const { return this->images_ != nullptr;};
            void deleteImages() { this->images_ = nullptr;};
            inline const vector<SearchResult::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<SearchResult::Images>) };
            inline vector<SearchResult::Images> getImages() { DARABONBA_PTR_GET(images_, vector<SearchResult::Images>) };
            inline SearchResult& setImages(const vector<SearchResult::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
            inline SearchResult& setImages(vector<SearchResult::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


            // multimodalSearchQuery Field Functions 
            bool hasMultimodalSearchQuery() const { return this->multimodalSearchQuery_ != nullptr;};
            void deleteMultimodalSearchQuery() { this->multimodalSearchQuery_ = nullptr;};
            inline string getMultimodalSearchQuery() const { DARABONBA_PTR_GET_DEFAULT(multimodalSearchQuery_, "") };
            inline SearchResult& setMultimodalSearchQuery(string multimodalSearchQuery) { DARABONBA_PTR_SET_VALUE(multimodalSearchQuery_, multimodalSearchQuery) };


            // texts Field Functions 
            bool hasTexts() const { return this->texts_ != nullptr;};
            void deleteTexts() { this->texts_ = nullptr;};
            inline const vector<SearchResult::Texts> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<SearchResult::Texts>) };
            inline vector<SearchResult::Texts> getTexts() { DARABONBA_PTR_GET(texts_, vector<SearchResult::Texts>) };
            inline SearchResult& setTexts(const vector<SearchResult::Texts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
            inline SearchResult& setTexts(vector<SearchResult::Texts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


            // videos Field Functions 
            bool hasVideos() const { return this->videos_ != nullptr;};
            void deleteVideos() { this->videos_ = nullptr;};
            inline const vector<SearchResult::Videos> & getVideos() const { DARABONBA_PTR_GET_CONST(videos_, vector<SearchResult::Videos>) };
            inline vector<SearchResult::Videos> getVideos() { DARABONBA_PTR_GET(videos_, vector<SearchResult::Videos>) };
            inline SearchResult& setVideos(const vector<SearchResult::Videos> & videos) { DARABONBA_PTR_SET_VALUE(videos_, videos) };
            inline SearchResult& setVideos(vector<SearchResult::Videos> && videos) { DARABONBA_PTR_SET_RVALUE(videos_, videos) };


          protected:
            shared_ptr<vector<SearchResult::Audios>> audios_ {};
            shared_ptr<vector<SearchResult::Images>> images_ {};
            shared_ptr<string> multimodalSearchQuery_ {};
            shared_ptr<vector<SearchResult::Texts>> texts_ {};
            shared_ptr<vector<SearchResult::Videos>> videos_ {};
          };

          virtual bool empty() const override { return this->clarifications_ == nullptr
        && this->content_ == nullptr && this->generateFinished_ == nullptr && this->id_ == nullptr && this->nodeCode_ == nullptr && this->searchQueries_ == nullptr
        && this->searchQuery_ == nullptr && this->searchResult_ == nullptr; };
          // clarifications Field Functions 
          bool hasClarifications() const { return this->clarifications_ != nullptr;};
          void deleteClarifications() { this->clarifications_ = nullptr;};
          inline bool getClarifications() const { DARABONBA_PTR_GET_DEFAULT(clarifications_, false) };
          inline Messages& setClarifications(bool clarifications) { DARABONBA_PTR_SET_VALUE(clarifications_, clarifications) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // generateFinished Field Functions 
          bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
          void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
          inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
          inline Messages& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Messages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // nodeCode Field Functions 
          bool hasNodeCode() const { return this->nodeCode_ != nullptr;};
          void deleteNodeCode() { this->nodeCode_ = nullptr;};
          inline string getNodeCode() const { DARABONBA_PTR_GET_DEFAULT(nodeCode_, "") };
          inline Messages& setNodeCode(string nodeCode) { DARABONBA_PTR_SET_VALUE(nodeCode_, nodeCode) };


          // searchQueries Field Functions 
          bool hasSearchQueries() const { return this->searchQueries_ != nullptr;};
          void deleteSearchQueries() { this->searchQueries_ = nullptr;};
          inline const vector<string> & getSearchQueries() const { DARABONBA_PTR_GET_CONST(searchQueries_, vector<string>) };
          inline vector<string> getSearchQueries() { DARABONBA_PTR_GET(searchQueries_, vector<string>) };
          inline Messages& setSearchQueries(const vector<string> & searchQueries) { DARABONBA_PTR_SET_VALUE(searchQueries_, searchQueries) };
          inline Messages& setSearchQueries(vector<string> && searchQueries) { DARABONBA_PTR_SET_RVALUE(searchQueries_, searchQueries) };


          // searchQuery Field Functions 
          bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
          void deleteSearchQuery() { this->searchQuery_ = nullptr;};
          inline string getSearchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
          inline Messages& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


          // searchResult Field Functions 
          bool hasSearchResult() const { return this->searchResult_ != nullptr;};
          void deleteSearchResult() { this->searchResult_ = nullptr;};
          inline const vector<Messages::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<Messages::SearchResult>) };
          inline vector<Messages::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<Messages::SearchResult>) };
          inline Messages& setSearchResult(const vector<Messages::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
          inline Messages& setSearchResult(vector<Messages::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


        protected:
          shared_ptr<bool> clarifications_ {};
          shared_ptr<string> content_ {};
          shared_ptr<bool> generateFinished_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> nodeCode_ {};
          shared_ptr<vector<string>> searchQueries_ {};
          shared_ptr<string> searchQuery_ {};
          shared_ptr<vector<Messages::SearchResult>> searchResult_ {};
        };

        class AgentContext : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AgentContext& obj) { 
            DARABONBA_PTR_TO_JSON(BizContext, bizContext_);
          };
          friend void from_json(const Darabonba::Json& j, AgentContext& obj) { 
            DARABONBA_PTR_FROM_JSON(BizContext, bizContext_);
          };
          AgentContext() = default ;
          AgentContext(const AgentContext &) = default ;
          AgentContext(AgentContext &&) = default ;
          AgentContext(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AgentContext() = default ;
          AgentContext& operator=(const AgentContext &) = default ;
          AgentContext& operator=(AgentContext &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BizContext : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BizContext& obj) { 
              DARABONBA_PTR_TO_JSON(AskUser, askUser_);
              DARABONBA_PTR_TO_JSON(AskUserKeywords, askUserKeywords_);
              DARABONBA_PTR_TO_JSON(CurrentStep, currentStep_);
              DARABONBA_PTR_TO_JSON(GeneratedContent, generatedContent_);
              DARABONBA_PTR_TO_JSON(ModelId, modelId_);
              DARABONBA_PTR_TO_JSON(NextStep, nextStep_);
              DARABONBA_PTR_TO_JSON(RecommendSearchQueryList, recommendSearchQueryList_);
              DARABONBA_PTR_TO_JSON(SearchKeywords, searchKeywords_);
              DARABONBA_PTR_TO_JSON(SearchQueryList, searchQueryList_);
              DARABONBA_PTR_TO_JSON(SupplementDataType, supplementDataType_);
              DARABONBA_PTR_TO_JSON(SupplementEnable, supplementEnable_);
              DARABONBA_PTR_TO_JSON(TokenCalculate, tokenCalculate_);
            };
            friend void from_json(const Darabonba::Json& j, BizContext& obj) { 
              DARABONBA_PTR_FROM_JSON(AskUser, askUser_);
              DARABONBA_PTR_FROM_JSON(AskUserKeywords, askUserKeywords_);
              DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
              DARABONBA_PTR_FROM_JSON(GeneratedContent, generatedContent_);
              DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
              DARABONBA_PTR_FROM_JSON(NextStep, nextStep_);
              DARABONBA_PTR_FROM_JSON(RecommendSearchQueryList, recommendSearchQueryList_);
              DARABONBA_PTR_FROM_JSON(SearchKeywords, searchKeywords_);
              DARABONBA_PTR_FROM_JSON(SearchQueryList, searchQueryList_);
              DARABONBA_PTR_FROM_JSON(SupplementDataType, supplementDataType_);
              DARABONBA_PTR_FROM_JSON(SupplementEnable, supplementEnable_);
              DARABONBA_PTR_FROM_JSON(TokenCalculate, tokenCalculate_);
            };
            BizContext() = default ;
            BizContext(const BizContext &) = default ;
            BizContext(BizContext &&) = default ;
            BizContext(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BizContext() = default ;
            BizContext& operator=(const BizContext &) = default ;
            BizContext& operator=(BizContext &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TokenCalculate : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TokenCalculate& obj) { 
                DARABONBA_PTR_TO_JSON(FirstTokenTime, firstTokenTime_);
                DARABONBA_PTR_TO_JSON(OutputAvgTime, outputAvgTime_);
                DARABONBA_PTR_TO_JSON(SearchTime, searchTime_);
                DARABONBA_PTR_TO_JSON(Time, time_);
                DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
              };
              friend void from_json(const Darabonba::Json& j, TokenCalculate& obj) { 
                DARABONBA_PTR_FROM_JSON(FirstTokenTime, firstTokenTime_);
                DARABONBA_PTR_FROM_JSON(OutputAvgTime, outputAvgTime_);
                DARABONBA_PTR_FROM_JSON(SearchTime, searchTime_);
                DARABONBA_PTR_FROM_JSON(Time, time_);
                DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
              };
              TokenCalculate() = default ;
              TokenCalculate(const TokenCalculate &) = default ;
              TokenCalculate(TokenCalculate &&) = default ;
              TokenCalculate(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TokenCalculate() = default ;
              TokenCalculate& operator=(const TokenCalculate &) = default ;
              TokenCalculate& operator=(TokenCalculate &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->firstTokenTime_ == nullptr
        && this->outputAvgTime_ == nullptr && this->searchTime_ == nullptr && this->time_ == nullptr && this->totalTokens_ == nullptr; };
              // firstTokenTime Field Functions 
              bool hasFirstTokenTime() const { return this->firstTokenTime_ != nullptr;};
              void deleteFirstTokenTime() { this->firstTokenTime_ = nullptr;};
              inline float getFirstTokenTime() const { DARABONBA_PTR_GET_DEFAULT(firstTokenTime_, 0.0) };
              inline TokenCalculate& setFirstTokenTime(float firstTokenTime) { DARABONBA_PTR_SET_VALUE(firstTokenTime_, firstTokenTime) };


              // outputAvgTime Field Functions 
              bool hasOutputAvgTime() const { return this->outputAvgTime_ != nullptr;};
              void deleteOutputAvgTime() { this->outputAvgTime_ = nullptr;};
              inline float getOutputAvgTime() const { DARABONBA_PTR_GET_DEFAULT(outputAvgTime_, 0.0) };
              inline TokenCalculate& setOutputAvgTime(float outputAvgTime) { DARABONBA_PTR_SET_VALUE(outputAvgTime_, outputAvgTime) };


              // searchTime Field Functions 
              bool hasSearchTime() const { return this->searchTime_ != nullptr;};
              void deleteSearchTime() { this->searchTime_ = nullptr;};
              inline float getSearchTime() const { DARABONBA_PTR_GET_DEFAULT(searchTime_, 0.0) };
              inline TokenCalculate& setSearchTime(float searchTime) { DARABONBA_PTR_SET_VALUE(searchTime_, searchTime) };


              // time Field Functions 
              bool hasTime() const { return this->time_ != nullptr;};
              void deleteTime() { this->time_ = nullptr;};
              inline float getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0.0) };
              inline TokenCalculate& setTime(float time) { DARABONBA_PTR_SET_VALUE(time_, time) };


              // totalTokens Field Functions 
              bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
              void deleteTotalTokens() { this->totalTokens_ = nullptr;};
              inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
              inline TokenCalculate& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


            protected:
              shared_ptr<float> firstTokenTime_ {};
              shared_ptr<float> outputAvgTime_ {};
              shared_ptr<float> searchTime_ {};
              shared_ptr<float> time_ {};
              shared_ptr<int64_t> totalTokens_ {};
            };

            class GeneratedContent : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const GeneratedContent& obj) { 
                DARABONBA_PTR_TO_JSON(AudioSearchResult, audioSearchResult_);
                DARABONBA_PTR_TO_JSON(ClusterTopicResult, clusterTopicResult_);
                DARABONBA_PTR_TO_JSON(ExcerptResult, excerptResult_);
                DARABONBA_PTR_TO_JSON(ImageSearchResult, imageSearchResult_);
                DARABONBA_PTR_TO_JSON(NewsElementResult, newsElementResult_);
                DARABONBA_PTR_TO_JSON(TextGenerateResult, textGenerateResult_);
                DARABONBA_PTR_TO_JSON(TextSearchResult, textSearchResult_);
                DARABONBA_PTR_TO_JSON(TimelineResult, timelineResult_);
                DARABONBA_PTR_TO_JSON(VideoSearchResult, videoSearchResult_);
              };
              friend void from_json(const Darabonba::Json& j, GeneratedContent& obj) { 
                DARABONBA_PTR_FROM_JSON(AudioSearchResult, audioSearchResult_);
                DARABONBA_PTR_FROM_JSON(ClusterTopicResult, clusterTopicResult_);
                DARABONBA_PTR_FROM_JSON(ExcerptResult, excerptResult_);
                DARABONBA_PTR_FROM_JSON(ImageSearchResult, imageSearchResult_);
                DARABONBA_PTR_FROM_JSON(NewsElementResult, newsElementResult_);
                DARABONBA_PTR_FROM_JSON(TextGenerateResult, textGenerateResult_);
                DARABONBA_PTR_FROM_JSON(TextSearchResult, textSearchResult_);
                DARABONBA_PTR_FROM_JSON(TimelineResult, timelineResult_);
                DARABONBA_PTR_FROM_JSON(VideoSearchResult, videoSearchResult_);
              };
              GeneratedContent() = default ;
              GeneratedContent(const GeneratedContent &) = default ;
              GeneratedContent(GeneratedContent &&) = default ;
              GeneratedContent(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~GeneratedContent() = default ;
              GeneratedContent& operator=(const GeneratedContent &) = default ;
              GeneratedContent& operator=(GeneratedContent &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class VideoSearchResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const VideoSearchResult& obj) { 
                  DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                };
                friend void from_json(const Darabonba::Json& j, VideoSearchResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                };
                VideoSearchResult() = default ;
                VideoSearchResult(const VideoSearchResult &) = default ;
                VideoSearchResult(VideoSearchResult &&) = default ;
                VideoSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~VideoSearchResult() = default ;
                VideoSearchResult& operator=(const VideoSearchResult &) = default ;
                VideoSearchResult& operator=(VideoSearchResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SearchResult : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                    DARABONBA_PTR_TO_JSON(Article, article_);
                    DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
                    DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                    DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                    DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
                  };
                  friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                    DARABONBA_PTR_FROM_JSON(Article, article_);
                    DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
                    DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                    DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                    DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
                  };
                  SearchResult() = default ;
                  SearchResult(const SearchResult &) = default ;
                  SearchResult(SearchResult &&) = default ;
                  SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SearchResult() = default ;
                  SearchResult& operator=(const SearchResult &) = default ;
                  SearchResult& operator=(SearchResult &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class ClipInfos : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const ClipInfos& obj) { 
                      DARABONBA_PTR_TO_JSON(From, from_);
                      DARABONBA_PTR_TO_JSON(Score, score_);
                      DARABONBA_PTR_TO_JSON(Text, text_);
                      DARABONBA_PTR_TO_JSON(To, to_);
                      DARABONBA_PTR_TO_JSON(Type, type_);
                    };
                    friend void from_json(const Darabonba::Json& j, ClipInfos& obj) { 
                      DARABONBA_PTR_FROM_JSON(From, from_);
                      DARABONBA_PTR_FROM_JSON(Score, score_);
                      DARABONBA_PTR_FROM_JSON(Text, text_);
                      DARABONBA_PTR_FROM_JSON(To, to_);
                      DARABONBA_PTR_FROM_JSON(Type, type_);
                    };
                    ClipInfos() = default ;
                    ClipInfos(const ClipInfos &) = default ;
                    ClipInfos(ClipInfos &&) = default ;
                    ClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~ClipInfos() = default ;
                    ClipInfos& operator=(const ClipInfos &) = default ;
                    ClipInfos& operator=(ClipInfos &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->from_ == nullptr
        && this->score_ == nullptr && this->text_ == nullptr && this->to_ == nullptr && this->type_ == nullptr; };
                    // from Field Functions 
                    bool hasFrom() const { return this->from_ != nullptr;};
                    void deleteFrom() { this->from_ = nullptr;};
                    inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
                    inline ClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                    // score Field Functions 
                    bool hasScore() const { return this->score_ != nullptr;};
                    void deleteScore() { this->score_ = nullptr;};
                    inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                    inline ClipInfos& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                    // text Field Functions 
                    bool hasText() const { return this->text_ != nullptr;};
                    void deleteText() { this->text_ = nullptr;};
                    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
                    inline ClipInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


                    // to Field Functions 
                    bool hasTo() const { return this->to_ != nullptr;};
                    void deleteTo() { this->to_ = nullptr;};
                    inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
                    inline ClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                    // type Field Functions 
                    bool hasType() const { return this->type_ != nullptr;};
                    void deleteType() { this->type_ = nullptr;};
                    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                    inline ClipInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                  protected:
                    shared_ptr<double> from_ {};
                    shared_ptr<double> score_ {};
                    shared_ptr<string> text_ {};
                    shared_ptr<double> to_ {};
                    shared_ptr<string> type_ {};
                  };

                  class Article : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Article& obj) { 
                      DARABONBA_PTR_TO_JSON(DocId, docId_);
                      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                      DARABONBA_PTR_TO_JSON(Summary, summary_);
                      DARABONBA_PTR_TO_JSON(Title, title_);
                      DARABONBA_PTR_TO_JSON(Url, url_);
                    };
                    friend void from_json(const Darabonba::Json& j, Article& obj) { 
                      DARABONBA_PTR_FROM_JSON(DocId, docId_);
                      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                      DARABONBA_PTR_FROM_JSON(Summary, summary_);
                      DARABONBA_PTR_FROM_JSON(Title, title_);
                      DARABONBA_PTR_FROM_JSON(Url, url_);
                    };
                    Article() = default ;
                    Article(const Article &) = default ;
                    Article(Article &&) = default ;
                    Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Article() = default ;
                    Article& operator=(const Article &) = default ;
                    Article& operator=(Article &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                    // docId Field Functions 
                    bool hasDocId() const { return this->docId_ != nullptr;};
                    void deleteDocId() { this->docId_ = nullptr;};
                    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                    inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                    // docUuid Field Functions 
                    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                    void deleteDocUuid() { this->docUuid_ = nullptr;};
                    inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                    inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                    // searchSourceName Field Functions 
                    bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                    void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                    inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                    inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                    // summary Field Functions 
                    bool hasSummary() const { return this->summary_ != nullptr;};
                    void deleteSummary() { this->summary_ = nullptr;};
                    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                    inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                    // title Field Functions 
                    bool hasTitle() const { return this->title_ != nullptr;};
                    void deleteTitle() { this->title_ = nullptr;};
                    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                    inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                    // url Field Functions 
                    bool hasUrl() const { return this->url_ != nullptr;};
                    void deleteUrl() { this->url_ = nullptr;};
                    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                    inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                  protected:
                    shared_ptr<string> docId_ {};
                    shared_ptr<string> docUuid_ {};
                    shared_ptr<string> searchSourceName_ {};
                    shared_ptr<string> summary_ {};
                    shared_ptr<string> title_ {};
                    shared_ptr<string> url_ {};
                  };

                  virtual bool empty() const override { return this->article_ == nullptr
        && this->clipInfos_ == nullptr && this->fileUrl_ == nullptr && this->mediaId_ == nullptr && this->traceabilityId_ == nullptr; };
                  // article Field Functions 
                  bool hasArticle() const { return this->article_ != nullptr;};
                  void deleteArticle() { this->article_ = nullptr;};
                  inline const SearchResult::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, SearchResult::Article) };
                  inline SearchResult::Article getArticle() { DARABONBA_PTR_GET(article_, SearchResult::Article) };
                  inline SearchResult& setArticle(const SearchResult::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                  inline SearchResult& setArticle(SearchResult::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                  // clipInfos Field Functions 
                  bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
                  void deleteClipInfos() { this->clipInfos_ = nullptr;};
                  inline const vector<SearchResult::ClipInfos> & getClipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<SearchResult::ClipInfos>) };
                  inline vector<SearchResult::ClipInfos> getClipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<SearchResult::ClipInfos>) };
                  inline SearchResult& setClipInfos(const vector<SearchResult::ClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
                  inline SearchResult& setClipInfos(vector<SearchResult::ClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


                  // fileUrl Field Functions 
                  bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                  void deleteFileUrl() { this->fileUrl_ = nullptr;};
                  inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                  inline SearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                  // mediaId Field Functions 
                  bool hasMediaId() const { return this->mediaId_ != nullptr;};
                  void deleteMediaId() { this->mediaId_ = nullptr;};
                  inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                  inline SearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                  // traceabilityId Field Functions 
                  bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
                  void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
                  inline string getTraceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, "") };
                  inline SearchResult& setTraceabilityId(string traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


                protected:
                  shared_ptr<SearchResult::Article> article_ {};
                  shared_ptr<vector<SearchResult::ClipInfos>> clipInfos_ {};
                  shared_ptr<string> fileUrl_ {};
                  shared_ptr<string> mediaId_ {};
                  shared_ptr<string> traceabilityId_ {};
                };

                virtual bool empty() const override { return this->searchResult_ == nullptr; };
                // searchResult Field Functions 
                bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                void deleteSearchResult() { this->searchResult_ = nullptr;};
                inline const vector<VideoSearchResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<VideoSearchResult::SearchResult>) };
                inline vector<VideoSearchResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<VideoSearchResult::SearchResult>) };
                inline VideoSearchResult& setSearchResult(const vector<VideoSearchResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                inline VideoSearchResult& setSearchResult(vector<VideoSearchResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


              protected:
                shared_ptr<vector<VideoSearchResult::SearchResult>> searchResult_ {};
              };

              class TimelineResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TimelineResult& obj) { 
                  DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_TO_JSON(GenerateTraceability, generateTraceability_);
                  DARABONBA_PTR_TO_JSON(MultimodalSearchResultList, multimodalSearchResultList_);
                  DARABONBA_PTR_TO_JSON(ReasonTextGenerate, reasonTextGenerate_);
                  DARABONBA_PTR_TO_JSON(ReferenceList, referenceList_);
                  DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
                  DARABONBA_PTR_TO_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
                };
                friend void from_json(const Darabonba::Json& j, TimelineResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_FROM_JSON(GenerateTraceability, generateTraceability_);
                  DARABONBA_PTR_FROM_JSON(MultimodalSearchResultList, multimodalSearchResultList_);
                  DARABONBA_PTR_FROM_JSON(ReasonTextGenerate, reasonTextGenerate_);
                  DARABONBA_PTR_FROM_JSON(ReferenceList, referenceList_);
                  DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
                  DARABONBA_PTR_FROM_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
                };
                TimelineResult() = default ;
                TimelineResult(const TimelineResult &) = default ;
                TimelineResult(TimelineResult &&) = default ;
                TimelineResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TimelineResult() = default ;
                TimelineResult& operator=(const TimelineResult &) = default ;
                TimelineResult& operator=(TimelineResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class TextGenerateMultimodalMediaList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const TextGenerateMultimodalMediaList& obj) { 
                    DARABONBA_PTR_TO_JSON(End, end_);
                    DARABONBA_PTR_TO_JSON(MultimodalMediaList, multimodalMediaList_);
                    DARABONBA_PTR_TO_JSON(Start, start_);
                  };
                  friend void from_json(const Darabonba::Json& j, TextGenerateMultimodalMediaList& obj) { 
                    DARABONBA_PTR_FROM_JSON(End, end_);
                    DARABONBA_PTR_FROM_JSON(MultimodalMediaList, multimodalMediaList_);
                    DARABONBA_PTR_FROM_JSON(Start, start_);
                  };
                  TextGenerateMultimodalMediaList() = default ;
                  TextGenerateMultimodalMediaList(const TextGenerateMultimodalMediaList &) = default ;
                  TextGenerateMultimodalMediaList(TextGenerateMultimodalMediaList &&) = default ;
                  TextGenerateMultimodalMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~TextGenerateMultimodalMediaList() = default ;
                  TextGenerateMultimodalMediaList& operator=(const TextGenerateMultimodalMediaList &) = default ;
                  TextGenerateMultimodalMediaList& operator=(TextGenerateMultimodalMediaList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class MultimodalMediaList : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const MultimodalMediaList& obj) { 
                      DARABONBA_PTR_TO_JSON(Article, article_);
                      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                    };
                    friend void from_json(const Darabonba::Json& j, MultimodalMediaList& obj) { 
                      DARABONBA_PTR_FROM_JSON(Article, article_);
                      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
                    };
                    MultimodalMediaList() = default ;
                    MultimodalMediaList(const MultimodalMediaList &) = default ;
                    MultimodalMediaList(MultimodalMediaList &&) = default ;
                    MultimodalMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~MultimodalMediaList() = default ;
                    MultimodalMediaList& operator=(const MultimodalMediaList &) = default ;
                    MultimodalMediaList& operator=(MultimodalMediaList &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class Article : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const Article& obj) { 
                        DARABONBA_PTR_TO_JSON(DocId, docId_);
                        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_TO_JSON(Summary, summary_);
                        DARABONBA_PTR_TO_JSON(Title, title_);
                        DARABONBA_PTR_TO_JSON(Url, url_);
                      };
                      friend void from_json(const Darabonba::Json& j, Article& obj) { 
                        DARABONBA_PTR_FROM_JSON(DocId, docId_);
                        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_FROM_JSON(Summary, summary_);
                        DARABONBA_PTR_FROM_JSON(Title, title_);
                        DARABONBA_PTR_FROM_JSON(Url, url_);
                      };
                      Article() = default ;
                      Article(const Article &) = default ;
                      Article(Article &&) = default ;
                      Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~Article() = default ;
                      Article& operator=(const Article &) = default ;
                      Article& operator=(Article &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                      // docId Field Functions 
                      bool hasDocId() const { return this->docId_ != nullptr;};
                      void deleteDocId() { this->docId_ = nullptr;};
                      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                      inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                      // docUuid Field Functions 
                      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                      void deleteDocUuid() { this->docUuid_ = nullptr;};
                      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                      inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                      // searchSourceName Field Functions 
                      bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                      void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                      inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                      inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                      // summary Field Functions 
                      bool hasSummary() const { return this->summary_ != nullptr;};
                      void deleteSummary() { this->summary_ = nullptr;};
                      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                      inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                      // title Field Functions 
                      bool hasTitle() const { return this->title_ != nullptr;};
                      void deleteTitle() { this->title_ = nullptr;};
                      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                      inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                      // url Field Functions 
                      bool hasUrl() const { return this->url_ != nullptr;};
                      void deleteUrl() { this->url_ = nullptr;};
                      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                      inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                    protected:
                      shared_ptr<string> docId_ {};
                      shared_ptr<string> docUuid_ {};
                      shared_ptr<string> searchSourceName_ {};
                      shared_ptr<string> summary_ {};
                      shared_ptr<string> title_ {};
                      shared_ptr<string> url_ {};
                    };

                    virtual bool empty() const override { return this->article_ == nullptr
        && this->fileUrl_ == nullptr && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
                    // article Field Functions 
                    bool hasArticle() const { return this->article_ != nullptr;};
                    void deleteArticle() { this->article_ = nullptr;};
                    inline const MultimodalMediaList::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, MultimodalMediaList::Article) };
                    inline MultimodalMediaList::Article getArticle() { DARABONBA_PTR_GET(article_, MultimodalMediaList::Article) };
                    inline MultimodalMediaList& setArticle(const MultimodalMediaList::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                    inline MultimodalMediaList& setArticle(MultimodalMediaList::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                    // fileUrl Field Functions 
                    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                    void deleteFileUrl() { this->fileUrl_ = nullptr;};
                    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                    inline MultimodalMediaList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                    // mediaId Field Functions 
                    bool hasMediaId() const { return this->mediaId_ != nullptr;};
                    void deleteMediaId() { this->mediaId_ = nullptr;};
                    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                    inline MultimodalMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                    // mediaType Field Functions 
                    bool hasMediaType() const { return this->mediaType_ != nullptr;};
                    void deleteMediaType() { this->mediaType_ = nullptr;};
                    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                    inline MultimodalMediaList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                  protected:
                    shared_ptr<MultimodalMediaList::Article> article_ {};
                    shared_ptr<string> fileUrl_ {};
                    shared_ptr<string> mediaId_ {};
                    shared_ptr<string> mediaType_ {};
                  };

                  virtual bool empty() const override { return this->end_ == nullptr
        && this->multimodalMediaList_ == nullptr && this->start_ == nullptr; };
                  // end Field Functions 
                  bool hasEnd() const { return this->end_ != nullptr;};
                  void deleteEnd() { this->end_ = nullptr;};
                  inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
                  inline TextGenerateMultimodalMediaList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


                  // multimodalMediaList Field Functions 
                  bool hasMultimodalMediaList() const { return this->multimodalMediaList_ != nullptr;};
                  void deleteMultimodalMediaList() { this->multimodalMediaList_ = nullptr;};
                  inline const vector<TextGenerateMultimodalMediaList::MultimodalMediaList> & getMultimodalMediaList() const { DARABONBA_PTR_GET_CONST(multimodalMediaList_, vector<TextGenerateMultimodalMediaList::MultimodalMediaList>) };
                  inline vector<TextGenerateMultimodalMediaList::MultimodalMediaList> getMultimodalMediaList() { DARABONBA_PTR_GET(multimodalMediaList_, vector<TextGenerateMultimodalMediaList::MultimodalMediaList>) };
                  inline TextGenerateMultimodalMediaList& setMultimodalMediaList(const vector<TextGenerateMultimodalMediaList::MultimodalMediaList> & multimodalMediaList) { DARABONBA_PTR_SET_VALUE(multimodalMediaList_, multimodalMediaList) };
                  inline TextGenerateMultimodalMediaList& setMultimodalMediaList(vector<TextGenerateMultimodalMediaList::MultimodalMediaList> && multimodalMediaList) { DARABONBA_PTR_SET_RVALUE(multimodalMediaList_, multimodalMediaList) };


                  // start Field Functions 
                  bool hasStart() const { return this->start_ != nullptr;};
                  void deleteStart() { this->start_ = nullptr;};
                  inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
                  inline TextGenerateMultimodalMediaList& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


                protected:
                  shared_ptr<int32_t> end_ {};
                  shared_ptr<vector<TextGenerateMultimodalMediaList::MultimodalMediaList>> multimodalMediaList_ {};
                  shared_ptr<int32_t> start_ {};
                };

                class ReferenceList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const ReferenceList& obj) { 
                    DARABONBA_PTR_TO_JSON(Chunks, chunks_);
                    DARABONBA_PTR_TO_JSON(Content, content_);
                    DARABONBA_PTR_TO_JSON(DocId, docId_);
                    DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                    DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
                    DARABONBA_PTR_TO_JSON(Score, score_);
                    DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
                    DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                    DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
                    DARABONBA_PTR_TO_JSON(Select, select_);
                    DARABONBA_PTR_TO_JSON(Source, source_);
                    DARABONBA_PTR_TO_JSON(Summary, summary_);
                    DARABONBA_PTR_TO_JSON(Title, title_);
                    DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
                    DARABONBA_PTR_TO_JSON(Url, url_);
                  };
                  friend void from_json(const Darabonba::Json& j, ReferenceList& obj) { 
                    DARABONBA_PTR_FROM_JSON(Chunks, chunks_);
                    DARABONBA_PTR_FROM_JSON(Content, content_);
                    DARABONBA_PTR_FROM_JSON(DocId, docId_);
                    DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                    DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
                    DARABONBA_PTR_FROM_JSON(Score, score_);
                    DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
                    DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                    DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
                    DARABONBA_PTR_FROM_JSON(Select, select_);
                    DARABONBA_PTR_FROM_JSON(Source, source_);
                    DARABONBA_PTR_FROM_JSON(Summary, summary_);
                    DARABONBA_PTR_FROM_JSON(Title, title_);
                    DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
                    DARABONBA_PTR_FROM_JSON(Url, url_);
                  };
                  ReferenceList() = default ;
                  ReferenceList(const ReferenceList &) = default ;
                  ReferenceList(ReferenceList &&) = default ;
                  ReferenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~ReferenceList() = default ;
                  ReferenceList& operator=(const ReferenceList &) = default ;
                  ReferenceList& operator=(ReferenceList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->chunks_ == nullptr
        && this->content_ == nullptr && this->docId_ == nullptr && this->docUuid_ == nullptr && this->pubTime_ == nullptr && this->score_ == nullptr
        && this->searchSource_ == nullptr && this->searchSourceName_ == nullptr && this->searchSourceType_ == nullptr && this->select_ == nullptr && this->source_ == nullptr
        && this->summary_ == nullptr && this->title_ == nullptr && this->traceabilityId_ == nullptr && this->url_ == nullptr; };
                  // chunks Field Functions 
                  bool hasChunks() const { return this->chunks_ != nullptr;};
                  void deleteChunks() { this->chunks_ = nullptr;};
                  inline const vector<string> & getChunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<string>) };
                  inline vector<string> getChunks() { DARABONBA_PTR_GET(chunks_, vector<string>) };
                  inline ReferenceList& setChunks(const vector<string> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
                  inline ReferenceList& setChunks(vector<string> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


                  // content Field Functions 
                  bool hasContent() const { return this->content_ != nullptr;};
                  void deleteContent() { this->content_ = nullptr;};
                  inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                  inline ReferenceList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                  // docId Field Functions 
                  bool hasDocId() const { return this->docId_ != nullptr;};
                  void deleteDocId() { this->docId_ = nullptr;};
                  inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                  inline ReferenceList& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                  // docUuid Field Functions 
                  bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                  void deleteDocUuid() { this->docUuid_ = nullptr;};
                  inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                  inline ReferenceList& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                  // pubTime Field Functions 
                  bool hasPubTime() const { return this->pubTime_ != nullptr;};
                  void deletePubTime() { this->pubTime_ = nullptr;};
                  inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
                  inline ReferenceList& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


                  // score Field Functions 
                  bool hasScore() const { return this->score_ != nullptr;};
                  void deleteScore() { this->score_ = nullptr;};
                  inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                  inline ReferenceList& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                  // searchSource Field Functions 
                  bool hasSearchSource() const { return this->searchSource_ != nullptr;};
                  void deleteSearchSource() { this->searchSource_ = nullptr;};
                  inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
                  inline ReferenceList& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


                  // searchSourceName Field Functions 
                  bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                  void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                  inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                  inline ReferenceList& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                  // searchSourceType Field Functions 
                  bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
                  void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
                  inline string getSearchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
                  inline ReferenceList& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


                  // select Field Functions 
                  bool hasSelect() const { return this->select_ != nullptr;};
                  void deleteSelect() { this->select_ = nullptr;};
                  inline bool getSelect() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
                  inline ReferenceList& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


                  // source Field Functions 
                  bool hasSource() const { return this->source_ != nullptr;};
                  void deleteSource() { this->source_ = nullptr;};
                  inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
                  inline ReferenceList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


                  // summary Field Functions 
                  bool hasSummary() const { return this->summary_ != nullptr;};
                  void deleteSummary() { this->summary_ = nullptr;};
                  inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                  inline ReferenceList& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                  // title Field Functions 
                  bool hasTitle() const { return this->title_ != nullptr;};
                  void deleteTitle() { this->title_ = nullptr;};
                  inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                  inline ReferenceList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                  // traceabilityId Field Functions 
                  bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
                  void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
                  inline int32_t getTraceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, 0) };
                  inline ReferenceList& setTraceabilityId(int32_t traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


                  // url Field Functions 
                  bool hasUrl() const { return this->url_ != nullptr;};
                  void deleteUrl() { this->url_ = nullptr;};
                  inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                  inline ReferenceList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                protected:
                  shared_ptr<vector<string>> chunks_ {};
                  shared_ptr<string> content_ {};
                  shared_ptr<string> docId_ {};
                  shared_ptr<string> docUuid_ {};
                  shared_ptr<string> pubTime_ {};
                  shared_ptr<float> score_ {};
                  shared_ptr<string> searchSource_ {};
                  shared_ptr<string> searchSourceName_ {};
                  shared_ptr<string> searchSourceType_ {};
                  shared_ptr<bool> select_ {};
                  shared_ptr<string> source_ {};
                  shared_ptr<string> summary_ {};
                  shared_ptr<string> title_ {};
                  shared_ptr<int32_t> traceabilityId_ {};
                  shared_ptr<string> url_ {};
                };

                class MultimodalSearchResultList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const MultimodalSearchResultList& obj) { 
                    DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                    DARABONBA_PTR_TO_JSON(TimelineDateStr, timelineDateStr_);
                  };
                  friend void from_json(const Darabonba::Json& j, MultimodalSearchResultList& obj) { 
                    DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                    DARABONBA_PTR_FROM_JSON(TimelineDateStr, timelineDateStr_);
                  };
                  MultimodalSearchResultList() = default ;
                  MultimodalSearchResultList(const MultimodalSearchResultList &) = default ;
                  MultimodalSearchResultList(MultimodalSearchResultList &&) = default ;
                  MultimodalSearchResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~MultimodalSearchResultList() = default ;
                  MultimodalSearchResultList& operator=(const MultimodalSearchResultList &) = default ;
                  MultimodalSearchResultList& operator=(MultimodalSearchResultList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class SearchResult : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                      DARABONBA_PTR_TO_JSON(Article, article_);
                      DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
                      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                    };
                    friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                      DARABONBA_PTR_FROM_JSON(Article, article_);
                      DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
                      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
                    };
                    SearchResult() = default ;
                    SearchResult(const SearchResult &) = default ;
                    SearchResult(SearchResult &&) = default ;
                    SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~SearchResult() = default ;
                    SearchResult& operator=(const SearchResult &) = default ;
                    SearchResult& operator=(SearchResult &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class ClipInfos : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const ClipInfos& obj) { 
                        DARABONBA_PTR_TO_JSON(From, from_);
                        DARABONBA_PTR_TO_JSON(Score, score_);
                        DARABONBA_PTR_TO_JSON(Text, text_);
                        DARABONBA_PTR_TO_JSON(To, to_);
                        DARABONBA_PTR_TO_JSON(Type, type_);
                      };
                      friend void from_json(const Darabonba::Json& j, ClipInfos& obj) { 
                        DARABONBA_PTR_FROM_JSON(From, from_);
                        DARABONBA_PTR_FROM_JSON(Score, score_);
                        DARABONBA_PTR_FROM_JSON(Text, text_);
                        DARABONBA_PTR_FROM_JSON(To, to_);
                        DARABONBA_PTR_FROM_JSON(Type, type_);
                      };
                      ClipInfos() = default ;
                      ClipInfos(const ClipInfos &) = default ;
                      ClipInfos(ClipInfos &&) = default ;
                      ClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~ClipInfos() = default ;
                      ClipInfos& operator=(const ClipInfos &) = default ;
                      ClipInfos& operator=(ClipInfos &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->from_ == nullptr
        && this->score_ == nullptr && this->text_ == nullptr && this->to_ == nullptr && this->type_ == nullptr; };
                      // from Field Functions 
                      bool hasFrom() const { return this->from_ != nullptr;};
                      void deleteFrom() { this->from_ = nullptr;};
                      inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
                      inline ClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                      // score Field Functions 
                      bool hasScore() const { return this->score_ != nullptr;};
                      void deleteScore() { this->score_ = nullptr;};
                      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                      inline ClipInfos& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                      // text Field Functions 
                      bool hasText() const { return this->text_ != nullptr;};
                      void deleteText() { this->text_ = nullptr;};
                      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
                      inline ClipInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


                      // to Field Functions 
                      bool hasTo() const { return this->to_ != nullptr;};
                      void deleteTo() { this->to_ = nullptr;};
                      inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
                      inline ClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                      // type Field Functions 
                      bool hasType() const { return this->type_ != nullptr;};
                      void deleteType() { this->type_ = nullptr;};
                      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                      inline ClipInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                    protected:
                      shared_ptr<double> from_ {};
                      shared_ptr<double> score_ {};
                      shared_ptr<string> text_ {};
                      shared_ptr<double> to_ {};
                      shared_ptr<string> type_ {};
                    };

                    class Article : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const Article& obj) { 
                        DARABONBA_PTR_TO_JSON(DocId, docId_);
                        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_TO_JSON(Summary, summary_);
                        DARABONBA_PTR_TO_JSON(Title, title_);
                        DARABONBA_PTR_TO_JSON(Url, url_);
                      };
                      friend void from_json(const Darabonba::Json& j, Article& obj) { 
                        DARABONBA_PTR_FROM_JSON(DocId, docId_);
                        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_FROM_JSON(Summary, summary_);
                        DARABONBA_PTR_FROM_JSON(Title, title_);
                        DARABONBA_PTR_FROM_JSON(Url, url_);
                      };
                      Article() = default ;
                      Article(const Article &) = default ;
                      Article(Article &&) = default ;
                      Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~Article() = default ;
                      Article& operator=(const Article &) = default ;
                      Article& operator=(Article &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                      // docId Field Functions 
                      bool hasDocId() const { return this->docId_ != nullptr;};
                      void deleteDocId() { this->docId_ = nullptr;};
                      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                      inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                      // docUuid Field Functions 
                      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                      void deleteDocUuid() { this->docUuid_ = nullptr;};
                      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                      inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                      // searchSourceName Field Functions 
                      bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                      void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                      inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                      inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                      // summary Field Functions 
                      bool hasSummary() const { return this->summary_ != nullptr;};
                      void deleteSummary() { this->summary_ = nullptr;};
                      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                      inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                      // title Field Functions 
                      bool hasTitle() const { return this->title_ != nullptr;};
                      void deleteTitle() { this->title_ = nullptr;};
                      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                      inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                      // url Field Functions 
                      bool hasUrl() const { return this->url_ != nullptr;};
                      void deleteUrl() { this->url_ = nullptr;};
                      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                      inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                    protected:
                      shared_ptr<string> docId_ {};
                      shared_ptr<string> docUuid_ {};
                      shared_ptr<string> searchSourceName_ {};
                      shared_ptr<string> summary_ {};
                      shared_ptr<string> title_ {};
                      shared_ptr<string> url_ {};
                    };

                    virtual bool empty() const override { return this->article_ == nullptr
        && this->clipInfos_ == nullptr && this->fileUrl_ == nullptr && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
                    // article Field Functions 
                    bool hasArticle() const { return this->article_ != nullptr;};
                    void deleteArticle() { this->article_ = nullptr;};
                    inline const SearchResult::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, SearchResult::Article) };
                    inline SearchResult::Article getArticle() { DARABONBA_PTR_GET(article_, SearchResult::Article) };
                    inline SearchResult& setArticle(const SearchResult::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                    inline SearchResult& setArticle(SearchResult::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                    // clipInfos Field Functions 
                    bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
                    void deleteClipInfos() { this->clipInfos_ = nullptr;};
                    inline const vector<SearchResult::ClipInfos> & getClipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<SearchResult::ClipInfos>) };
                    inline vector<SearchResult::ClipInfos> getClipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<SearchResult::ClipInfos>) };
                    inline SearchResult& setClipInfos(const vector<SearchResult::ClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
                    inline SearchResult& setClipInfos(vector<SearchResult::ClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


                    // fileUrl Field Functions 
                    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                    void deleteFileUrl() { this->fileUrl_ = nullptr;};
                    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                    inline SearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                    // mediaId Field Functions 
                    bool hasMediaId() const { return this->mediaId_ != nullptr;};
                    void deleteMediaId() { this->mediaId_ = nullptr;};
                    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                    inline SearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                    // mediaType Field Functions 
                    bool hasMediaType() const { return this->mediaType_ != nullptr;};
                    void deleteMediaType() { this->mediaType_ = nullptr;};
                    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                    inline SearchResult& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                  protected:
                    shared_ptr<SearchResult::Article> article_ {};
                    shared_ptr<vector<SearchResult::ClipInfos>> clipInfos_ {};
                    shared_ptr<string> fileUrl_ {};
                    shared_ptr<string> mediaId_ {};
                    shared_ptr<string> mediaType_ {};
                  };

                  virtual bool empty() const override { return this->searchResult_ == nullptr
        && this->timelineDateStr_ == nullptr; };
                  // searchResult Field Functions 
                  bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                  void deleteSearchResult() { this->searchResult_ = nullptr;};
                  inline const vector<MultimodalSearchResultList::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<MultimodalSearchResultList::SearchResult>) };
                  inline vector<MultimodalSearchResultList::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<MultimodalSearchResultList::SearchResult>) };
                  inline MultimodalSearchResultList& setSearchResult(const vector<MultimodalSearchResultList::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                  inline MultimodalSearchResultList& setSearchResult(vector<MultimodalSearchResultList::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


                  // timelineDateStr Field Functions 
                  bool hasTimelineDateStr() const { return this->timelineDateStr_ != nullptr;};
                  void deleteTimelineDateStr() { this->timelineDateStr_ = nullptr;};
                  inline string getTimelineDateStr() const { DARABONBA_PTR_GET_DEFAULT(timelineDateStr_, "") };
                  inline MultimodalSearchResultList& setTimelineDateStr(string timelineDateStr) { DARABONBA_PTR_SET_VALUE(timelineDateStr_, timelineDateStr) };


                protected:
                  shared_ptr<vector<MultimodalSearchResultList::SearchResult>> searchResult_ {};
                  shared_ptr<string> timelineDateStr_ {};
                };

                class GenerateTraceability : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const GenerateTraceability& obj) { 
                    DARABONBA_PTR_TO_JSON(Coordinates, coordinates_);
                    DARABONBA_PTR_TO_JSON(Duplicate, duplicate_);
                  };
                  friend void from_json(const Darabonba::Json& j, GenerateTraceability& obj) { 
                    DARABONBA_PTR_FROM_JSON(Coordinates, coordinates_);
                    DARABONBA_PTR_FROM_JSON(Duplicate, duplicate_);
                  };
                  GenerateTraceability() = default ;
                  GenerateTraceability(const GenerateTraceability &) = default ;
                  GenerateTraceability(GenerateTraceability &&) = default ;
                  GenerateTraceability(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~GenerateTraceability() = default ;
                  GenerateTraceability& operator=(const GenerateTraceability &) = default ;
                  GenerateTraceability& operator=(GenerateTraceability &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class Coordinates : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Coordinates& obj) { 
                      DARABONBA_PTR_TO_JSON(GenerateCoordinate, generateCoordinate_);
                      DARABONBA_PTR_TO_JSON(NewsCoordinate, newsCoordinate_);
                    };
                    friend void from_json(const Darabonba::Json& j, Coordinates& obj) { 
                      DARABONBA_PTR_FROM_JSON(GenerateCoordinate, generateCoordinate_);
                      DARABONBA_PTR_FROM_JSON(NewsCoordinate, newsCoordinate_);
                    };
                    Coordinates() = default ;
                    Coordinates(const Coordinates &) = default ;
                    Coordinates(Coordinates &&) = default ;
                    Coordinates(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Coordinates() = default ;
                    Coordinates& operator=(const Coordinates &) = default ;
                    Coordinates& operator=(Coordinates &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class NewsCoordinate : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const NewsCoordinate& obj) { 
                        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                        DARABONBA_PTR_TO_JSON(X, x_);
                        DARABONBA_PTR_TO_JSON(Y, y_);
                        DARABONBA_PTR_TO_JSON(Z, z_);
                      };
                      friend void from_json(const Darabonba::Json& j, NewsCoordinate& obj) { 
                        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
                        DARABONBA_PTR_FROM_JSON(X, x_);
                        DARABONBA_PTR_FROM_JSON(Y, y_);
                        DARABONBA_PTR_FROM_JSON(Z, z_);
                      };
                      NewsCoordinate() = default ;
                      NewsCoordinate(const NewsCoordinate &) = default ;
                      NewsCoordinate(NewsCoordinate &&) = default ;
                      NewsCoordinate(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~NewsCoordinate() = default ;
                      NewsCoordinate& operator=(const NewsCoordinate &) = default ;
                      NewsCoordinate& operator=(NewsCoordinate &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->mediaType_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr && this->z_ == nullptr; };
                      // mediaType Field Functions 
                      bool hasMediaType() const { return this->mediaType_ != nullptr;};
                      void deleteMediaType() { this->mediaType_ = nullptr;};
                      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                      inline NewsCoordinate& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                      // x Field Functions 
                      bool hasX() const { return this->x_ != nullptr;};
                      void deleteX() { this->x_ = nullptr;};
                      inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
                      inline NewsCoordinate& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


                      // y Field Functions 
                      bool hasY() const { return this->y_ != nullptr;};
                      void deleteY() { this->y_ = nullptr;};
                      inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
                      inline NewsCoordinate& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


                      // z Field Functions 
                      bool hasZ() const { return this->z_ != nullptr;};
                      void deleteZ() { this->z_ = nullptr;};
                      inline int32_t getZ() const { DARABONBA_PTR_GET_DEFAULT(z_, 0) };
                      inline NewsCoordinate& setZ(int32_t z) { DARABONBA_PTR_SET_VALUE(z_, z) };


                    protected:
                      shared_ptr<string> mediaType_ {};
                      shared_ptr<int32_t> x_ {};
                      shared_ptr<int32_t> y_ {};
                      shared_ptr<int32_t> z_ {};
                    };

                    class GenerateCoordinate : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const GenerateCoordinate& obj) { 
                        DARABONBA_PTR_TO_JSON(X, x_);
                        DARABONBA_PTR_TO_JSON(Y, y_);
                        DARABONBA_PTR_TO_JSON(Z, z_);
                      };
                      friend void from_json(const Darabonba::Json& j, GenerateCoordinate& obj) { 
                        DARABONBA_PTR_FROM_JSON(X, x_);
                        DARABONBA_PTR_FROM_JSON(Y, y_);
                        DARABONBA_PTR_FROM_JSON(Z, z_);
                      };
                      GenerateCoordinate() = default ;
                      GenerateCoordinate(const GenerateCoordinate &) = default ;
                      GenerateCoordinate(GenerateCoordinate &&) = default ;
                      GenerateCoordinate(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~GenerateCoordinate() = default ;
                      GenerateCoordinate& operator=(const GenerateCoordinate &) = default ;
                      GenerateCoordinate& operator=(GenerateCoordinate &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr && this->z_ == nullptr; };
                      // x Field Functions 
                      bool hasX() const { return this->x_ != nullptr;};
                      void deleteX() { this->x_ = nullptr;};
                      inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
                      inline GenerateCoordinate& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


                      // y Field Functions 
                      bool hasY() const { return this->y_ != nullptr;};
                      void deleteY() { this->y_ = nullptr;};
                      inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
                      inline GenerateCoordinate& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


                      // z Field Functions 
                      bool hasZ() const { return this->z_ != nullptr;};
                      void deleteZ() { this->z_ = nullptr;};
                      inline int32_t getZ() const { DARABONBA_PTR_GET_DEFAULT(z_, 0) };
                      inline GenerateCoordinate& setZ(int32_t z) { DARABONBA_PTR_SET_VALUE(z_, z) };


                    protected:
                      shared_ptr<int32_t> x_ {};
                      shared_ptr<int32_t> y_ {};
                      shared_ptr<int32_t> z_ {};
                    };

                    virtual bool empty() const override { return this->generateCoordinate_ == nullptr
        && this->newsCoordinate_ == nullptr; };
                    // generateCoordinate Field Functions 
                    bool hasGenerateCoordinate() const { return this->generateCoordinate_ != nullptr;};
                    void deleteGenerateCoordinate() { this->generateCoordinate_ = nullptr;};
                    inline const Coordinates::GenerateCoordinate & getGenerateCoordinate() const { DARABONBA_PTR_GET_CONST(generateCoordinate_, Coordinates::GenerateCoordinate) };
                    inline Coordinates::GenerateCoordinate getGenerateCoordinate() { DARABONBA_PTR_GET(generateCoordinate_, Coordinates::GenerateCoordinate) };
                    inline Coordinates& setGenerateCoordinate(const Coordinates::GenerateCoordinate & generateCoordinate) { DARABONBA_PTR_SET_VALUE(generateCoordinate_, generateCoordinate) };
                    inline Coordinates& setGenerateCoordinate(Coordinates::GenerateCoordinate && generateCoordinate) { DARABONBA_PTR_SET_RVALUE(generateCoordinate_, generateCoordinate) };


                    // newsCoordinate Field Functions 
                    bool hasNewsCoordinate() const { return this->newsCoordinate_ != nullptr;};
                    void deleteNewsCoordinate() { this->newsCoordinate_ = nullptr;};
                    inline const Coordinates::NewsCoordinate & getNewsCoordinate() const { DARABONBA_PTR_GET_CONST(newsCoordinate_, Coordinates::NewsCoordinate) };
                    inline Coordinates::NewsCoordinate getNewsCoordinate() { DARABONBA_PTR_GET(newsCoordinate_, Coordinates::NewsCoordinate) };
                    inline Coordinates& setNewsCoordinate(const Coordinates::NewsCoordinate & newsCoordinate) { DARABONBA_PTR_SET_VALUE(newsCoordinate_, newsCoordinate) };
                    inline Coordinates& setNewsCoordinate(Coordinates::NewsCoordinate && newsCoordinate) { DARABONBA_PTR_SET_RVALUE(newsCoordinate_, newsCoordinate) };


                  protected:
                    shared_ptr<Coordinates::GenerateCoordinate> generateCoordinate_ {};
                    shared_ptr<Coordinates::NewsCoordinate> newsCoordinate_ {};
                  };

                  virtual bool empty() const override { return this->coordinates_ == nullptr
        && this->duplicate_ == nullptr; };
                  // coordinates Field Functions 
                  bool hasCoordinates() const { return this->coordinates_ != nullptr;};
                  void deleteCoordinates() { this->coordinates_ = nullptr;};
                  inline const vector<GenerateTraceability::Coordinates> & getCoordinates() const { DARABONBA_PTR_GET_CONST(coordinates_, vector<GenerateTraceability::Coordinates>) };
                  inline vector<GenerateTraceability::Coordinates> getCoordinates() { DARABONBA_PTR_GET(coordinates_, vector<GenerateTraceability::Coordinates>) };
                  inline GenerateTraceability& setCoordinates(const vector<GenerateTraceability::Coordinates> & coordinates) { DARABONBA_PTR_SET_VALUE(coordinates_, coordinates) };
                  inline GenerateTraceability& setCoordinates(vector<GenerateTraceability::Coordinates> && coordinates) { DARABONBA_PTR_SET_RVALUE(coordinates_, coordinates) };


                  // duplicate Field Functions 
                  bool hasDuplicate() const { return this->duplicate_ != nullptr;};
                  void deleteDuplicate() { this->duplicate_ = nullptr;};
                  inline double getDuplicate() const { DARABONBA_PTR_GET_DEFAULT(duplicate_, 0.0) };
                  inline GenerateTraceability& setDuplicate(double duplicate) { DARABONBA_PTR_SET_VALUE(duplicate_, duplicate) };


                protected:
                  shared_ptr<vector<GenerateTraceability::Coordinates>> coordinates_ {};
                  shared_ptr<double> duplicate_ {};
                };

                virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->generateTraceability_ == nullptr && this->multimodalSearchResultList_ == nullptr && this->reasonTextGenerate_ == nullptr && this->referenceList_ == nullptr && this->textGenerate_ == nullptr
        && this->textGenerateMultimodalMediaList_ == nullptr; };
                // generateFinished Field Functions 
                bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
                void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
                inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
                inline TimelineResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


                // generateTraceability Field Functions 
                bool hasGenerateTraceability() const { return this->generateTraceability_ != nullptr;};
                void deleteGenerateTraceability() { this->generateTraceability_ = nullptr;};
                inline const TimelineResult::GenerateTraceability & getGenerateTraceability() const { DARABONBA_PTR_GET_CONST(generateTraceability_, TimelineResult::GenerateTraceability) };
                inline TimelineResult::GenerateTraceability getGenerateTraceability() { DARABONBA_PTR_GET(generateTraceability_, TimelineResult::GenerateTraceability) };
                inline TimelineResult& setGenerateTraceability(const TimelineResult::GenerateTraceability & generateTraceability) { DARABONBA_PTR_SET_VALUE(generateTraceability_, generateTraceability) };
                inline TimelineResult& setGenerateTraceability(TimelineResult::GenerateTraceability && generateTraceability) { DARABONBA_PTR_SET_RVALUE(generateTraceability_, generateTraceability) };


                // multimodalSearchResultList Field Functions 
                bool hasMultimodalSearchResultList() const { return this->multimodalSearchResultList_ != nullptr;};
                void deleteMultimodalSearchResultList() { this->multimodalSearchResultList_ = nullptr;};
                inline const vector<TimelineResult::MultimodalSearchResultList> & getMultimodalSearchResultList() const { DARABONBA_PTR_GET_CONST(multimodalSearchResultList_, vector<TimelineResult::MultimodalSearchResultList>) };
                inline vector<TimelineResult::MultimodalSearchResultList> getMultimodalSearchResultList() { DARABONBA_PTR_GET(multimodalSearchResultList_, vector<TimelineResult::MultimodalSearchResultList>) };
                inline TimelineResult& setMultimodalSearchResultList(const vector<TimelineResult::MultimodalSearchResultList> & multimodalSearchResultList) { DARABONBA_PTR_SET_VALUE(multimodalSearchResultList_, multimodalSearchResultList) };
                inline TimelineResult& setMultimodalSearchResultList(vector<TimelineResult::MultimodalSearchResultList> && multimodalSearchResultList) { DARABONBA_PTR_SET_RVALUE(multimodalSearchResultList_, multimodalSearchResultList) };


                // reasonTextGenerate Field Functions 
                bool hasReasonTextGenerate() const { return this->reasonTextGenerate_ != nullptr;};
                void deleteReasonTextGenerate() { this->reasonTextGenerate_ = nullptr;};
                inline string getReasonTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(reasonTextGenerate_, "") };
                inline TimelineResult& setReasonTextGenerate(string reasonTextGenerate) { DARABONBA_PTR_SET_VALUE(reasonTextGenerate_, reasonTextGenerate) };


                // referenceList Field Functions 
                bool hasReferenceList() const { return this->referenceList_ != nullptr;};
                void deleteReferenceList() { this->referenceList_ = nullptr;};
                inline const vector<TimelineResult::ReferenceList> & getReferenceList() const { DARABONBA_PTR_GET_CONST(referenceList_, vector<TimelineResult::ReferenceList>) };
                inline vector<TimelineResult::ReferenceList> getReferenceList() { DARABONBA_PTR_GET(referenceList_, vector<TimelineResult::ReferenceList>) };
                inline TimelineResult& setReferenceList(const vector<TimelineResult::ReferenceList> & referenceList) { DARABONBA_PTR_SET_VALUE(referenceList_, referenceList) };
                inline TimelineResult& setReferenceList(vector<TimelineResult::ReferenceList> && referenceList) { DARABONBA_PTR_SET_RVALUE(referenceList_, referenceList) };


                // textGenerate Field Functions 
                bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
                void deleteTextGenerate() { this->textGenerate_ = nullptr;};
                inline string getTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
                inline TimelineResult& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


                // textGenerateMultimodalMediaList Field Functions 
                bool hasTextGenerateMultimodalMediaList() const { return this->textGenerateMultimodalMediaList_ != nullptr;};
                void deleteTextGenerateMultimodalMediaList() { this->textGenerateMultimodalMediaList_ = nullptr;};
                inline const vector<TimelineResult::TextGenerateMultimodalMediaList> & getTextGenerateMultimodalMediaList() const { DARABONBA_PTR_GET_CONST(textGenerateMultimodalMediaList_, vector<TimelineResult::TextGenerateMultimodalMediaList>) };
                inline vector<TimelineResult::TextGenerateMultimodalMediaList> getTextGenerateMultimodalMediaList() { DARABONBA_PTR_GET(textGenerateMultimodalMediaList_, vector<TimelineResult::TextGenerateMultimodalMediaList>) };
                inline TimelineResult& setTextGenerateMultimodalMediaList(const vector<TimelineResult::TextGenerateMultimodalMediaList> & textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_VALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };
                inline TimelineResult& setTextGenerateMultimodalMediaList(vector<TimelineResult::TextGenerateMultimodalMediaList> && textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_RVALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };


              protected:
                shared_ptr<bool> generateFinished_ {};
                shared_ptr<TimelineResult::GenerateTraceability> generateTraceability_ {};
                shared_ptr<vector<TimelineResult::MultimodalSearchResultList>> multimodalSearchResultList_ {};
                shared_ptr<string> reasonTextGenerate_ {};
                shared_ptr<vector<TimelineResult::ReferenceList>> referenceList_ {};
                shared_ptr<string> textGenerate_ {};
                shared_ptr<vector<TimelineResult::TextGenerateMultimodalMediaList>> textGenerateMultimodalMediaList_ {};
              };

              class TextSearchResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TextSearchResult& obj) { 
                  DARABONBA_PTR_TO_JSON(Current, current_);
                  DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                  DARABONBA_PTR_TO_JSON(Size, size_);
                  DARABONBA_PTR_TO_JSON(Total, total_);
                };
                friend void from_json(const Darabonba::Json& j, TextSearchResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(Current, current_);
                  DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                  DARABONBA_PTR_FROM_JSON(Size, size_);
                  DARABONBA_PTR_FROM_JSON(Total, total_);
                };
                TextSearchResult() = default ;
                TextSearchResult(const TextSearchResult &) = default ;
                TextSearchResult(TextSearchResult &&) = default ;
                TextSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TextSearchResult() = default ;
                TextSearchResult& operator=(const TextSearchResult &) = default ;
                TextSearchResult& operator=(TextSearchResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SearchResult : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                    DARABONBA_PTR_TO_JSON(Content, content_);
                    DARABONBA_PTR_TO_JSON(DocId, docId_);
                    DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                    DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
                    DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
                    DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                    DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
                    DARABONBA_PTR_TO_JSON(Summary, summary_);
                    DARABONBA_PTR_TO_JSON(Title, title_);
                    DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
                    DARABONBA_PTR_TO_JSON(Url, url_);
                  };
                  friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                    DARABONBA_PTR_FROM_JSON(Content, content_);
                    DARABONBA_PTR_FROM_JSON(DocId, docId_);
                    DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                    DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
                    DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
                    DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                    DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
                    DARABONBA_PTR_FROM_JSON(Summary, summary_);
                    DARABONBA_PTR_FROM_JSON(Title, title_);
                    DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
                    DARABONBA_PTR_FROM_JSON(Url, url_);
                  };
                  SearchResult() = default ;
                  SearchResult(const SearchResult &) = default ;
                  SearchResult(SearchResult &&) = default ;
                  SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SearchResult() = default ;
                  SearchResult& operator=(const SearchResult &) = default ;
                  SearchResult& operator=(SearchResult &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->content_ == nullptr
        && this->docId_ == nullptr && this->docUuid_ == nullptr && this->pubTime_ == nullptr && this->searchSource_ == nullptr && this->searchSourceName_ == nullptr
        && this->searchSourceType_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->traceabilityId_ == nullptr && this->url_ == nullptr; };
                  // content Field Functions 
                  bool hasContent() const { return this->content_ != nullptr;};
                  void deleteContent() { this->content_ = nullptr;};
                  inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                  inline SearchResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                  // docId Field Functions 
                  bool hasDocId() const { return this->docId_ != nullptr;};
                  void deleteDocId() { this->docId_ = nullptr;};
                  inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                  inline SearchResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                  // docUuid Field Functions 
                  bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                  void deleteDocUuid() { this->docUuid_ = nullptr;};
                  inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                  inline SearchResult& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                  // pubTime Field Functions 
                  bool hasPubTime() const { return this->pubTime_ != nullptr;};
                  void deletePubTime() { this->pubTime_ = nullptr;};
                  inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
                  inline SearchResult& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


                  // searchSource Field Functions 
                  bool hasSearchSource() const { return this->searchSource_ != nullptr;};
                  void deleteSearchSource() { this->searchSource_ = nullptr;};
                  inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
                  inline SearchResult& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


                  // searchSourceName Field Functions 
                  bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                  void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                  inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                  inline SearchResult& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                  // searchSourceType Field Functions 
                  bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
                  void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
                  inline string getSearchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
                  inline SearchResult& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


                  // summary Field Functions 
                  bool hasSummary() const { return this->summary_ != nullptr;};
                  void deleteSummary() { this->summary_ = nullptr;};
                  inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                  inline SearchResult& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                  // title Field Functions 
                  bool hasTitle() const { return this->title_ != nullptr;};
                  void deleteTitle() { this->title_ = nullptr;};
                  inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                  inline SearchResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                  // traceabilityId Field Functions 
                  bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
                  void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
                  inline string getTraceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, "") };
                  inline SearchResult& setTraceabilityId(string traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


                  // url Field Functions 
                  bool hasUrl() const { return this->url_ != nullptr;};
                  void deleteUrl() { this->url_ = nullptr;};
                  inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                  inline SearchResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                protected:
                  shared_ptr<string> content_ {};
                  shared_ptr<string> docId_ {};
                  shared_ptr<string> docUuid_ {};
                  shared_ptr<string> pubTime_ {};
                  shared_ptr<string> searchSource_ {};
                  shared_ptr<string> searchSourceName_ {};
                  shared_ptr<string> searchSourceType_ {};
                  shared_ptr<string> summary_ {};
                  shared_ptr<string> title_ {};
                  shared_ptr<string> traceabilityId_ {};
                  shared_ptr<string> url_ {};
                };

                virtual bool empty() const override { return this->current_ == nullptr
        && this->searchResult_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
                // current Field Functions 
                bool hasCurrent() const { return this->current_ != nullptr;};
                void deleteCurrent() { this->current_ = nullptr;};
                inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
                inline TextSearchResult& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


                // searchResult Field Functions 
                bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                void deleteSearchResult() { this->searchResult_ = nullptr;};
                inline const vector<TextSearchResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<TextSearchResult::SearchResult>) };
                inline vector<TextSearchResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<TextSearchResult::SearchResult>) };
                inline TextSearchResult& setSearchResult(const vector<TextSearchResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                inline TextSearchResult& setSearchResult(vector<TextSearchResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


                // size Field Functions 
                bool hasSize() const { return this->size_ != nullptr;};
                void deleteSize() { this->size_ = nullptr;};
                inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
                inline TextSearchResult& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


                // total Field Functions 
                bool hasTotal() const { return this->total_ != nullptr;};
                void deleteTotal() { this->total_ = nullptr;};
                inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
                inline TextSearchResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


              protected:
                shared_ptr<int32_t> current_ {};
                shared_ptr<vector<TextSearchResult::SearchResult>> searchResult_ {};
                shared_ptr<int32_t> size_ {};
                shared_ptr<int32_t> total_ {};
              };

              class TextGenerateResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TextGenerateResult& obj) { 
                  DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_TO_JSON(GenerateLevel, generateLevel_);
                  DARABONBA_PTR_TO_JSON(GenerateTraceability, generateTraceability_);
                  DARABONBA_PTR_TO_JSON(MultimodalSearchResultList, multimodalSearchResultList_);
                  DARABONBA_PTR_TO_JSON(ReasonTextGenerate, reasonTextGenerate_);
                  DARABONBA_PTR_TO_JSON(ReferenceList, referenceList_);
                  DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
                  DARABONBA_PTR_TO_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
                };
                friend void from_json(const Darabonba::Json& j, TextGenerateResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_FROM_JSON(GenerateLevel, generateLevel_);
                  DARABONBA_PTR_FROM_JSON(GenerateTraceability, generateTraceability_);
                  DARABONBA_PTR_FROM_JSON(MultimodalSearchResultList, multimodalSearchResultList_);
                  DARABONBA_PTR_FROM_JSON(ReasonTextGenerate, reasonTextGenerate_);
                  DARABONBA_PTR_FROM_JSON(ReferenceList, referenceList_);
                  DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
                  DARABONBA_PTR_FROM_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
                };
                TextGenerateResult() = default ;
                TextGenerateResult(const TextGenerateResult &) = default ;
                TextGenerateResult(TextGenerateResult &&) = default ;
                TextGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TextGenerateResult() = default ;
                TextGenerateResult& operator=(const TextGenerateResult &) = default ;
                TextGenerateResult& operator=(TextGenerateResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class TextGenerateMultimodalMediaList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const TextGenerateMultimodalMediaList& obj) { 
                    DARABONBA_PTR_TO_JSON(End, end_);
                    DARABONBA_PTR_TO_JSON(MultimodalMediaList, multimodalMediaList_);
                    DARABONBA_PTR_TO_JSON(Start, start_);
                  };
                  friend void from_json(const Darabonba::Json& j, TextGenerateMultimodalMediaList& obj) { 
                    DARABONBA_PTR_FROM_JSON(End, end_);
                    DARABONBA_PTR_FROM_JSON(MultimodalMediaList, multimodalMediaList_);
                    DARABONBA_PTR_FROM_JSON(Start, start_);
                  };
                  TextGenerateMultimodalMediaList() = default ;
                  TextGenerateMultimodalMediaList(const TextGenerateMultimodalMediaList &) = default ;
                  TextGenerateMultimodalMediaList(TextGenerateMultimodalMediaList &&) = default ;
                  TextGenerateMultimodalMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~TextGenerateMultimodalMediaList() = default ;
                  TextGenerateMultimodalMediaList& operator=(const TextGenerateMultimodalMediaList &) = default ;
                  TextGenerateMultimodalMediaList& operator=(TextGenerateMultimodalMediaList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class MultimodalMediaList : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const MultimodalMediaList& obj) { 
                      DARABONBA_PTR_TO_JSON(Article, article_);
                      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                    };
                    friend void from_json(const Darabonba::Json& j, MultimodalMediaList& obj) { 
                      DARABONBA_PTR_FROM_JSON(Article, article_);
                      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
                    };
                    MultimodalMediaList() = default ;
                    MultimodalMediaList(const MultimodalMediaList &) = default ;
                    MultimodalMediaList(MultimodalMediaList &&) = default ;
                    MultimodalMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~MultimodalMediaList() = default ;
                    MultimodalMediaList& operator=(const MultimodalMediaList &) = default ;
                    MultimodalMediaList& operator=(MultimodalMediaList &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class Article : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const Article& obj) { 
                        DARABONBA_PTR_TO_JSON(DocId, docId_);
                        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_TO_JSON(Summary, summary_);
                        DARABONBA_PTR_TO_JSON(Title, title_);
                        DARABONBA_PTR_TO_JSON(Url, url_);
                      };
                      friend void from_json(const Darabonba::Json& j, Article& obj) { 
                        DARABONBA_PTR_FROM_JSON(DocId, docId_);
                        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_FROM_JSON(Summary, summary_);
                        DARABONBA_PTR_FROM_JSON(Title, title_);
                        DARABONBA_PTR_FROM_JSON(Url, url_);
                      };
                      Article() = default ;
                      Article(const Article &) = default ;
                      Article(Article &&) = default ;
                      Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~Article() = default ;
                      Article& operator=(const Article &) = default ;
                      Article& operator=(Article &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                      // docId Field Functions 
                      bool hasDocId() const { return this->docId_ != nullptr;};
                      void deleteDocId() { this->docId_ = nullptr;};
                      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                      inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                      // docUuid Field Functions 
                      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                      void deleteDocUuid() { this->docUuid_ = nullptr;};
                      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                      inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                      // searchSourceName Field Functions 
                      bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                      void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                      inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                      inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                      // summary Field Functions 
                      bool hasSummary() const { return this->summary_ != nullptr;};
                      void deleteSummary() { this->summary_ = nullptr;};
                      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                      inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                      // title Field Functions 
                      bool hasTitle() const { return this->title_ != nullptr;};
                      void deleteTitle() { this->title_ = nullptr;};
                      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                      inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                      // url Field Functions 
                      bool hasUrl() const { return this->url_ != nullptr;};
                      void deleteUrl() { this->url_ = nullptr;};
                      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                      inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                    protected:
                      shared_ptr<string> docId_ {};
                      shared_ptr<string> docUuid_ {};
                      shared_ptr<string> searchSourceName_ {};
                      shared_ptr<string> summary_ {};
                      shared_ptr<string> title_ {};
                      shared_ptr<string> url_ {};
                    };

                    virtual bool empty() const override { return this->article_ == nullptr
        && this->fileUrl_ == nullptr && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
                    // article Field Functions 
                    bool hasArticle() const { return this->article_ != nullptr;};
                    void deleteArticle() { this->article_ = nullptr;};
                    inline const MultimodalMediaList::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, MultimodalMediaList::Article) };
                    inline MultimodalMediaList::Article getArticle() { DARABONBA_PTR_GET(article_, MultimodalMediaList::Article) };
                    inline MultimodalMediaList& setArticle(const MultimodalMediaList::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                    inline MultimodalMediaList& setArticle(MultimodalMediaList::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                    // fileUrl Field Functions 
                    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                    void deleteFileUrl() { this->fileUrl_ = nullptr;};
                    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                    inline MultimodalMediaList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                    // mediaId Field Functions 
                    bool hasMediaId() const { return this->mediaId_ != nullptr;};
                    void deleteMediaId() { this->mediaId_ = nullptr;};
                    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                    inline MultimodalMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                    // mediaType Field Functions 
                    bool hasMediaType() const { return this->mediaType_ != nullptr;};
                    void deleteMediaType() { this->mediaType_ = nullptr;};
                    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                    inline MultimodalMediaList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                  protected:
                    shared_ptr<MultimodalMediaList::Article> article_ {};
                    shared_ptr<string> fileUrl_ {};
                    shared_ptr<string> mediaId_ {};
                    shared_ptr<string> mediaType_ {};
                  };

                  virtual bool empty() const override { return this->end_ == nullptr
        && this->multimodalMediaList_ == nullptr && this->start_ == nullptr; };
                  // end Field Functions 
                  bool hasEnd() const { return this->end_ != nullptr;};
                  void deleteEnd() { this->end_ = nullptr;};
                  inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
                  inline TextGenerateMultimodalMediaList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


                  // multimodalMediaList Field Functions 
                  bool hasMultimodalMediaList() const { return this->multimodalMediaList_ != nullptr;};
                  void deleteMultimodalMediaList() { this->multimodalMediaList_ = nullptr;};
                  inline const vector<TextGenerateMultimodalMediaList::MultimodalMediaList> & getMultimodalMediaList() const { DARABONBA_PTR_GET_CONST(multimodalMediaList_, vector<TextGenerateMultimodalMediaList::MultimodalMediaList>) };
                  inline vector<TextGenerateMultimodalMediaList::MultimodalMediaList> getMultimodalMediaList() { DARABONBA_PTR_GET(multimodalMediaList_, vector<TextGenerateMultimodalMediaList::MultimodalMediaList>) };
                  inline TextGenerateMultimodalMediaList& setMultimodalMediaList(const vector<TextGenerateMultimodalMediaList::MultimodalMediaList> & multimodalMediaList) { DARABONBA_PTR_SET_VALUE(multimodalMediaList_, multimodalMediaList) };
                  inline TextGenerateMultimodalMediaList& setMultimodalMediaList(vector<TextGenerateMultimodalMediaList::MultimodalMediaList> && multimodalMediaList) { DARABONBA_PTR_SET_RVALUE(multimodalMediaList_, multimodalMediaList) };


                  // start Field Functions 
                  bool hasStart() const { return this->start_ != nullptr;};
                  void deleteStart() { this->start_ = nullptr;};
                  inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
                  inline TextGenerateMultimodalMediaList& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


                protected:
                  shared_ptr<int32_t> end_ {};
                  shared_ptr<vector<TextGenerateMultimodalMediaList::MultimodalMediaList>> multimodalMediaList_ {};
                  shared_ptr<int32_t> start_ {};
                };

                class ReferenceList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const ReferenceList& obj) { 
                    DARABONBA_PTR_TO_JSON(Chunks, chunks_);
                    DARABONBA_PTR_TO_JSON(Content, content_);
                    DARABONBA_PTR_TO_JSON(DocId, docId_);
                    DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                    DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
                    DARABONBA_PTR_TO_JSON(Score, score_);
                    DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
                    DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                    DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
                    DARABONBA_PTR_TO_JSON(Select, select_);
                    DARABONBA_PTR_TO_JSON(Source, source_);
                    DARABONBA_PTR_TO_JSON(Summary, summary_);
                    DARABONBA_PTR_TO_JSON(Title, title_);
                    DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
                    DARABONBA_PTR_TO_JSON(Url, url_);
                  };
                  friend void from_json(const Darabonba::Json& j, ReferenceList& obj) { 
                    DARABONBA_PTR_FROM_JSON(Chunks, chunks_);
                    DARABONBA_PTR_FROM_JSON(Content, content_);
                    DARABONBA_PTR_FROM_JSON(DocId, docId_);
                    DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                    DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
                    DARABONBA_PTR_FROM_JSON(Score, score_);
                    DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
                    DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                    DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
                    DARABONBA_PTR_FROM_JSON(Select, select_);
                    DARABONBA_PTR_FROM_JSON(Source, source_);
                    DARABONBA_PTR_FROM_JSON(Summary, summary_);
                    DARABONBA_PTR_FROM_JSON(Title, title_);
                    DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
                    DARABONBA_PTR_FROM_JSON(Url, url_);
                  };
                  ReferenceList() = default ;
                  ReferenceList(const ReferenceList &) = default ;
                  ReferenceList(ReferenceList &&) = default ;
                  ReferenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~ReferenceList() = default ;
                  ReferenceList& operator=(const ReferenceList &) = default ;
                  ReferenceList& operator=(ReferenceList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->chunks_ == nullptr
        && this->content_ == nullptr && this->docId_ == nullptr && this->docUuid_ == nullptr && this->pubTime_ == nullptr && this->score_ == nullptr
        && this->searchSource_ == nullptr && this->searchSourceName_ == nullptr && this->searchSourceType_ == nullptr && this->select_ == nullptr && this->source_ == nullptr
        && this->summary_ == nullptr && this->title_ == nullptr && this->traceabilityId_ == nullptr && this->url_ == nullptr; };
                  // chunks Field Functions 
                  bool hasChunks() const { return this->chunks_ != nullptr;};
                  void deleteChunks() { this->chunks_ = nullptr;};
                  inline const vector<string> & getChunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<string>) };
                  inline vector<string> getChunks() { DARABONBA_PTR_GET(chunks_, vector<string>) };
                  inline ReferenceList& setChunks(const vector<string> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
                  inline ReferenceList& setChunks(vector<string> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


                  // content Field Functions 
                  bool hasContent() const { return this->content_ != nullptr;};
                  void deleteContent() { this->content_ = nullptr;};
                  inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                  inline ReferenceList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                  // docId Field Functions 
                  bool hasDocId() const { return this->docId_ != nullptr;};
                  void deleteDocId() { this->docId_ = nullptr;};
                  inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                  inline ReferenceList& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                  // docUuid Field Functions 
                  bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                  void deleteDocUuid() { this->docUuid_ = nullptr;};
                  inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                  inline ReferenceList& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                  // pubTime Field Functions 
                  bool hasPubTime() const { return this->pubTime_ != nullptr;};
                  void deletePubTime() { this->pubTime_ = nullptr;};
                  inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
                  inline ReferenceList& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


                  // score Field Functions 
                  bool hasScore() const { return this->score_ != nullptr;};
                  void deleteScore() { this->score_ = nullptr;};
                  inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                  inline ReferenceList& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                  // searchSource Field Functions 
                  bool hasSearchSource() const { return this->searchSource_ != nullptr;};
                  void deleteSearchSource() { this->searchSource_ = nullptr;};
                  inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
                  inline ReferenceList& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


                  // searchSourceName Field Functions 
                  bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                  void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                  inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                  inline ReferenceList& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                  // searchSourceType Field Functions 
                  bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
                  void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
                  inline string getSearchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
                  inline ReferenceList& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


                  // select Field Functions 
                  bool hasSelect() const { return this->select_ != nullptr;};
                  void deleteSelect() { this->select_ = nullptr;};
                  inline bool getSelect() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
                  inline ReferenceList& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


                  // source Field Functions 
                  bool hasSource() const { return this->source_ != nullptr;};
                  void deleteSource() { this->source_ = nullptr;};
                  inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
                  inline ReferenceList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


                  // summary Field Functions 
                  bool hasSummary() const { return this->summary_ != nullptr;};
                  void deleteSummary() { this->summary_ = nullptr;};
                  inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                  inline ReferenceList& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                  // title Field Functions 
                  bool hasTitle() const { return this->title_ != nullptr;};
                  void deleteTitle() { this->title_ = nullptr;};
                  inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                  inline ReferenceList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                  // traceabilityId Field Functions 
                  bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
                  void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
                  inline int32_t getTraceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, 0) };
                  inline ReferenceList& setTraceabilityId(int32_t traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


                  // url Field Functions 
                  bool hasUrl() const { return this->url_ != nullptr;};
                  void deleteUrl() { this->url_ = nullptr;};
                  inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                  inline ReferenceList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                protected:
                  shared_ptr<vector<string>> chunks_ {};
                  shared_ptr<string> content_ {};
                  shared_ptr<string> docId_ {};
                  shared_ptr<string> docUuid_ {};
                  shared_ptr<string> pubTime_ {};
                  shared_ptr<float> score_ {};
                  shared_ptr<string> searchSource_ {};
                  shared_ptr<string> searchSourceName_ {};
                  shared_ptr<string> searchSourceType_ {};
                  shared_ptr<bool> select_ {};
                  shared_ptr<string> source_ {};
                  shared_ptr<string> summary_ {};
                  shared_ptr<string> title_ {};
                  shared_ptr<int32_t> traceabilityId_ {};
                  shared_ptr<string> url_ {};
                };

                class MultimodalSearchResultList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const MultimodalSearchResultList& obj) { 
                    DARABONBA_PTR_TO_JSON(Current, current_);
                    DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
                    DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                    DARABONBA_PTR_TO_JSON(SearchType, searchType_);
                    DARABONBA_PTR_TO_JSON(Size, size_);
                    DARABONBA_PTR_TO_JSON(TimelineDateStr, timelineDateStr_);
                    DARABONBA_PTR_TO_JSON(Total, total_);
                  };
                  friend void from_json(const Darabonba::Json& j, MultimodalSearchResultList& obj) { 
                    DARABONBA_PTR_FROM_JSON(Current, current_);
                    DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
                    DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                    DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
                    DARABONBA_PTR_FROM_JSON(Size, size_);
                    DARABONBA_PTR_FROM_JSON(TimelineDateStr, timelineDateStr_);
                    DARABONBA_PTR_FROM_JSON(Total, total_);
                  };
                  MultimodalSearchResultList() = default ;
                  MultimodalSearchResultList(const MultimodalSearchResultList &) = default ;
                  MultimodalSearchResultList(MultimodalSearchResultList &&) = default ;
                  MultimodalSearchResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~MultimodalSearchResultList() = default ;
                  MultimodalSearchResultList& operator=(const MultimodalSearchResultList &) = default ;
                  MultimodalSearchResultList& operator=(MultimodalSearchResultList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class SearchResult : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                      DARABONBA_PTR_TO_JSON(Article, article_);
                      DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
                      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                    };
                    friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                      DARABONBA_PTR_FROM_JSON(Article, article_);
                      DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
                      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
                    };
                    SearchResult() = default ;
                    SearchResult(const SearchResult &) = default ;
                    SearchResult(SearchResult &&) = default ;
                    SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~SearchResult() = default ;
                    SearchResult& operator=(const SearchResult &) = default ;
                    SearchResult& operator=(SearchResult &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class ClipInfos : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const ClipInfos& obj) { 
                        DARABONBA_PTR_TO_JSON(From, from_);
                        DARABONBA_PTR_TO_JSON(Score, score_);
                        DARABONBA_PTR_TO_JSON(Text, text_);
                        DARABONBA_PTR_TO_JSON(To, to_);
                        DARABONBA_PTR_TO_JSON(Type, type_);
                      };
                      friend void from_json(const Darabonba::Json& j, ClipInfos& obj) { 
                        DARABONBA_PTR_FROM_JSON(From, from_);
                        DARABONBA_PTR_FROM_JSON(Score, score_);
                        DARABONBA_PTR_FROM_JSON(Text, text_);
                        DARABONBA_PTR_FROM_JSON(To, to_);
                        DARABONBA_PTR_FROM_JSON(Type, type_);
                      };
                      ClipInfos() = default ;
                      ClipInfos(const ClipInfos &) = default ;
                      ClipInfos(ClipInfos &&) = default ;
                      ClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~ClipInfos() = default ;
                      ClipInfos& operator=(const ClipInfos &) = default ;
                      ClipInfos& operator=(ClipInfos &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->from_ == nullptr
        && this->score_ == nullptr && this->text_ == nullptr && this->to_ == nullptr && this->type_ == nullptr; };
                      // from Field Functions 
                      bool hasFrom() const { return this->from_ != nullptr;};
                      void deleteFrom() { this->from_ = nullptr;};
                      inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
                      inline ClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                      // score Field Functions 
                      bool hasScore() const { return this->score_ != nullptr;};
                      void deleteScore() { this->score_ = nullptr;};
                      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                      inline ClipInfos& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                      // text Field Functions 
                      bool hasText() const { return this->text_ != nullptr;};
                      void deleteText() { this->text_ = nullptr;};
                      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
                      inline ClipInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


                      // to Field Functions 
                      bool hasTo() const { return this->to_ != nullptr;};
                      void deleteTo() { this->to_ = nullptr;};
                      inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
                      inline ClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                      // type Field Functions 
                      bool hasType() const { return this->type_ != nullptr;};
                      void deleteType() { this->type_ = nullptr;};
                      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                      inline ClipInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                    protected:
                      shared_ptr<double> from_ {};
                      shared_ptr<double> score_ {};
                      shared_ptr<string> text_ {};
                      shared_ptr<double> to_ {};
                      shared_ptr<string> type_ {};
                    };

                    class Article : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const Article& obj) { 
                        DARABONBA_PTR_TO_JSON(DocId, docId_);
                        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_TO_JSON(Summary, summary_);
                        DARABONBA_PTR_TO_JSON(Title, title_);
                        DARABONBA_PTR_TO_JSON(Url, url_);
                      };
                      friend void from_json(const Darabonba::Json& j, Article& obj) { 
                        DARABONBA_PTR_FROM_JSON(DocId, docId_);
                        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_FROM_JSON(Summary, summary_);
                        DARABONBA_PTR_FROM_JSON(Title, title_);
                        DARABONBA_PTR_FROM_JSON(Url, url_);
                      };
                      Article() = default ;
                      Article(const Article &) = default ;
                      Article(Article &&) = default ;
                      Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~Article() = default ;
                      Article& operator=(const Article &) = default ;
                      Article& operator=(Article &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                      // docId Field Functions 
                      bool hasDocId() const { return this->docId_ != nullptr;};
                      void deleteDocId() { this->docId_ = nullptr;};
                      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                      inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                      // docUuid Field Functions 
                      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                      void deleteDocUuid() { this->docUuid_ = nullptr;};
                      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                      inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                      // searchSourceName Field Functions 
                      bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                      void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                      inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                      inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                      // summary Field Functions 
                      bool hasSummary() const { return this->summary_ != nullptr;};
                      void deleteSummary() { this->summary_ = nullptr;};
                      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                      inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                      // title Field Functions 
                      bool hasTitle() const { return this->title_ != nullptr;};
                      void deleteTitle() { this->title_ = nullptr;};
                      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                      inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                      // url Field Functions 
                      bool hasUrl() const { return this->url_ != nullptr;};
                      void deleteUrl() { this->url_ = nullptr;};
                      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                      inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                    protected:
                      shared_ptr<string> docId_ {};
                      shared_ptr<string> docUuid_ {};
                      shared_ptr<string> searchSourceName_ {};
                      shared_ptr<string> summary_ {};
                      shared_ptr<string> title_ {};
                      shared_ptr<string> url_ {};
                    };

                    virtual bool empty() const override { return this->article_ == nullptr
        && this->clipInfos_ == nullptr && this->fileUrl_ == nullptr && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
                    // article Field Functions 
                    bool hasArticle() const { return this->article_ != nullptr;};
                    void deleteArticle() { this->article_ = nullptr;};
                    inline const SearchResult::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, SearchResult::Article) };
                    inline SearchResult::Article getArticle() { DARABONBA_PTR_GET(article_, SearchResult::Article) };
                    inline SearchResult& setArticle(const SearchResult::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                    inline SearchResult& setArticle(SearchResult::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                    // clipInfos Field Functions 
                    bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
                    void deleteClipInfos() { this->clipInfos_ = nullptr;};
                    inline const vector<SearchResult::ClipInfos> & getClipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<SearchResult::ClipInfos>) };
                    inline vector<SearchResult::ClipInfos> getClipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<SearchResult::ClipInfos>) };
                    inline SearchResult& setClipInfos(const vector<SearchResult::ClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
                    inline SearchResult& setClipInfos(vector<SearchResult::ClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


                    // fileUrl Field Functions 
                    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                    void deleteFileUrl() { this->fileUrl_ = nullptr;};
                    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                    inline SearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                    // mediaId Field Functions 
                    bool hasMediaId() const { return this->mediaId_ != nullptr;};
                    void deleteMediaId() { this->mediaId_ = nullptr;};
                    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                    inline SearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                    // mediaType Field Functions 
                    bool hasMediaType() const { return this->mediaType_ != nullptr;};
                    void deleteMediaType() { this->mediaType_ = nullptr;};
                    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                    inline SearchResult& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                  protected:
                    shared_ptr<SearchResult::Article> article_ {};
                    shared_ptr<vector<SearchResult::ClipInfos>> clipInfos_ {};
                    shared_ptr<string> fileUrl_ {};
                    shared_ptr<string> mediaId_ {};
                    shared_ptr<string> mediaType_ {};
                  };

                  virtual bool empty() const override { return this->current_ == nullptr
        && this->searchQuery_ == nullptr && this->searchResult_ == nullptr && this->searchType_ == nullptr && this->size_ == nullptr && this->timelineDateStr_ == nullptr
        && this->total_ == nullptr; };
                  // current Field Functions 
                  bool hasCurrent() const { return this->current_ != nullptr;};
                  void deleteCurrent() { this->current_ = nullptr;};
                  inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
                  inline MultimodalSearchResultList& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


                  // searchQuery Field Functions 
                  bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
                  void deleteSearchQuery() { this->searchQuery_ = nullptr;};
                  inline string getSearchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
                  inline MultimodalSearchResultList& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


                  // searchResult Field Functions 
                  bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                  void deleteSearchResult() { this->searchResult_ = nullptr;};
                  inline const vector<MultimodalSearchResultList::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<MultimodalSearchResultList::SearchResult>) };
                  inline vector<MultimodalSearchResultList::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<MultimodalSearchResultList::SearchResult>) };
                  inline MultimodalSearchResultList& setSearchResult(const vector<MultimodalSearchResultList::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                  inline MultimodalSearchResultList& setSearchResult(vector<MultimodalSearchResultList::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


                  // searchType Field Functions 
                  bool hasSearchType() const { return this->searchType_ != nullptr;};
                  void deleteSearchType() { this->searchType_ = nullptr;};
                  inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
                  inline MultimodalSearchResultList& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


                  // size Field Functions 
                  bool hasSize() const { return this->size_ != nullptr;};
                  void deleteSize() { this->size_ = nullptr;};
                  inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
                  inline MultimodalSearchResultList& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


                  // timelineDateStr Field Functions 
                  bool hasTimelineDateStr() const { return this->timelineDateStr_ != nullptr;};
                  void deleteTimelineDateStr() { this->timelineDateStr_ = nullptr;};
                  inline string getTimelineDateStr() const { DARABONBA_PTR_GET_DEFAULT(timelineDateStr_, "") };
                  inline MultimodalSearchResultList& setTimelineDateStr(string timelineDateStr) { DARABONBA_PTR_SET_VALUE(timelineDateStr_, timelineDateStr) };


                  // total Field Functions 
                  bool hasTotal() const { return this->total_ != nullptr;};
                  void deleteTotal() { this->total_ = nullptr;};
                  inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
                  inline MultimodalSearchResultList& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


                protected:
                  shared_ptr<int32_t> current_ {};
                  shared_ptr<string> searchQuery_ {};
                  shared_ptr<vector<MultimodalSearchResultList::SearchResult>> searchResult_ {};
                  shared_ptr<string> searchType_ {};
                  shared_ptr<int32_t> size_ {};
                  shared_ptr<string> timelineDateStr_ {};
                  shared_ptr<int32_t> total_ {};
                };

                class GenerateTraceability : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const GenerateTraceability& obj) { 
                    DARABONBA_PTR_TO_JSON(Coordinates, coordinates_);
                    DARABONBA_PTR_TO_JSON(Duplicate, duplicate_);
                  };
                  friend void from_json(const Darabonba::Json& j, GenerateTraceability& obj) { 
                    DARABONBA_PTR_FROM_JSON(Coordinates, coordinates_);
                    DARABONBA_PTR_FROM_JSON(Duplicate, duplicate_);
                  };
                  GenerateTraceability() = default ;
                  GenerateTraceability(const GenerateTraceability &) = default ;
                  GenerateTraceability(GenerateTraceability &&) = default ;
                  GenerateTraceability(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~GenerateTraceability() = default ;
                  GenerateTraceability& operator=(const GenerateTraceability &) = default ;
                  GenerateTraceability& operator=(GenerateTraceability &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class Coordinates : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Coordinates& obj) { 
                      DARABONBA_PTR_TO_JSON(GenerateCoordinate, generateCoordinate_);
                      DARABONBA_PTR_TO_JSON(NewsCoordinate, newsCoordinate_);
                    };
                    friend void from_json(const Darabonba::Json& j, Coordinates& obj) { 
                      DARABONBA_PTR_FROM_JSON(GenerateCoordinate, generateCoordinate_);
                      DARABONBA_PTR_FROM_JSON(NewsCoordinate, newsCoordinate_);
                    };
                    Coordinates() = default ;
                    Coordinates(const Coordinates &) = default ;
                    Coordinates(Coordinates &&) = default ;
                    Coordinates(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Coordinates() = default ;
                    Coordinates& operator=(const Coordinates &) = default ;
                    Coordinates& operator=(Coordinates &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class NewsCoordinate : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const NewsCoordinate& obj) { 
                        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                        DARABONBA_PTR_TO_JSON(X, x_);
                        DARABONBA_PTR_TO_JSON(Y, y_);
                        DARABONBA_PTR_TO_JSON(Z, z_);
                      };
                      friend void from_json(const Darabonba::Json& j, NewsCoordinate& obj) { 
                        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
                        DARABONBA_PTR_FROM_JSON(X, x_);
                        DARABONBA_PTR_FROM_JSON(Y, y_);
                        DARABONBA_PTR_FROM_JSON(Z, z_);
                      };
                      NewsCoordinate() = default ;
                      NewsCoordinate(const NewsCoordinate &) = default ;
                      NewsCoordinate(NewsCoordinate &&) = default ;
                      NewsCoordinate(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~NewsCoordinate() = default ;
                      NewsCoordinate& operator=(const NewsCoordinate &) = default ;
                      NewsCoordinate& operator=(NewsCoordinate &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->mediaType_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr && this->z_ == nullptr; };
                      // mediaType Field Functions 
                      bool hasMediaType() const { return this->mediaType_ != nullptr;};
                      void deleteMediaType() { this->mediaType_ = nullptr;};
                      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                      inline NewsCoordinate& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                      // x Field Functions 
                      bool hasX() const { return this->x_ != nullptr;};
                      void deleteX() { this->x_ = nullptr;};
                      inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
                      inline NewsCoordinate& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


                      // y Field Functions 
                      bool hasY() const { return this->y_ != nullptr;};
                      void deleteY() { this->y_ = nullptr;};
                      inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
                      inline NewsCoordinate& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


                      // z Field Functions 
                      bool hasZ() const { return this->z_ != nullptr;};
                      void deleteZ() { this->z_ = nullptr;};
                      inline int32_t getZ() const { DARABONBA_PTR_GET_DEFAULT(z_, 0) };
                      inline NewsCoordinate& setZ(int32_t z) { DARABONBA_PTR_SET_VALUE(z_, z) };


                    protected:
                      shared_ptr<string> mediaType_ {};
                      shared_ptr<int32_t> x_ {};
                      shared_ptr<int32_t> y_ {};
                      shared_ptr<int32_t> z_ {};
                    };

                    class GenerateCoordinate : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const GenerateCoordinate& obj) { 
                        DARABONBA_PTR_TO_JSON(X, x_);
                        DARABONBA_PTR_TO_JSON(Y, y_);
                        DARABONBA_PTR_TO_JSON(Z, z_);
                      };
                      friend void from_json(const Darabonba::Json& j, GenerateCoordinate& obj) { 
                        DARABONBA_PTR_FROM_JSON(X, x_);
                        DARABONBA_PTR_FROM_JSON(Y, y_);
                        DARABONBA_PTR_FROM_JSON(Z, z_);
                      };
                      GenerateCoordinate() = default ;
                      GenerateCoordinate(const GenerateCoordinate &) = default ;
                      GenerateCoordinate(GenerateCoordinate &&) = default ;
                      GenerateCoordinate(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~GenerateCoordinate() = default ;
                      GenerateCoordinate& operator=(const GenerateCoordinate &) = default ;
                      GenerateCoordinate& operator=(GenerateCoordinate &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr && this->z_ == nullptr; };
                      // x Field Functions 
                      bool hasX() const { return this->x_ != nullptr;};
                      void deleteX() { this->x_ = nullptr;};
                      inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
                      inline GenerateCoordinate& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


                      // y Field Functions 
                      bool hasY() const { return this->y_ != nullptr;};
                      void deleteY() { this->y_ = nullptr;};
                      inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
                      inline GenerateCoordinate& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


                      // z Field Functions 
                      bool hasZ() const { return this->z_ != nullptr;};
                      void deleteZ() { this->z_ = nullptr;};
                      inline int32_t getZ() const { DARABONBA_PTR_GET_DEFAULT(z_, 0) };
                      inline GenerateCoordinate& setZ(int32_t z) { DARABONBA_PTR_SET_VALUE(z_, z) };


                    protected:
                      shared_ptr<int32_t> x_ {};
                      shared_ptr<int32_t> y_ {};
                      shared_ptr<int32_t> z_ {};
                    };

                    virtual bool empty() const override { return this->generateCoordinate_ == nullptr
        && this->newsCoordinate_ == nullptr; };
                    // generateCoordinate Field Functions 
                    bool hasGenerateCoordinate() const { return this->generateCoordinate_ != nullptr;};
                    void deleteGenerateCoordinate() { this->generateCoordinate_ = nullptr;};
                    inline const Coordinates::GenerateCoordinate & getGenerateCoordinate() const { DARABONBA_PTR_GET_CONST(generateCoordinate_, Coordinates::GenerateCoordinate) };
                    inline Coordinates::GenerateCoordinate getGenerateCoordinate() { DARABONBA_PTR_GET(generateCoordinate_, Coordinates::GenerateCoordinate) };
                    inline Coordinates& setGenerateCoordinate(const Coordinates::GenerateCoordinate & generateCoordinate) { DARABONBA_PTR_SET_VALUE(generateCoordinate_, generateCoordinate) };
                    inline Coordinates& setGenerateCoordinate(Coordinates::GenerateCoordinate && generateCoordinate) { DARABONBA_PTR_SET_RVALUE(generateCoordinate_, generateCoordinate) };


                    // newsCoordinate Field Functions 
                    bool hasNewsCoordinate() const { return this->newsCoordinate_ != nullptr;};
                    void deleteNewsCoordinate() { this->newsCoordinate_ = nullptr;};
                    inline const Coordinates::NewsCoordinate & getNewsCoordinate() const { DARABONBA_PTR_GET_CONST(newsCoordinate_, Coordinates::NewsCoordinate) };
                    inline Coordinates::NewsCoordinate getNewsCoordinate() { DARABONBA_PTR_GET(newsCoordinate_, Coordinates::NewsCoordinate) };
                    inline Coordinates& setNewsCoordinate(const Coordinates::NewsCoordinate & newsCoordinate) { DARABONBA_PTR_SET_VALUE(newsCoordinate_, newsCoordinate) };
                    inline Coordinates& setNewsCoordinate(Coordinates::NewsCoordinate && newsCoordinate) { DARABONBA_PTR_SET_RVALUE(newsCoordinate_, newsCoordinate) };


                  protected:
                    shared_ptr<Coordinates::GenerateCoordinate> generateCoordinate_ {};
                    shared_ptr<Coordinates::NewsCoordinate> newsCoordinate_ {};
                  };

                  virtual bool empty() const override { return this->coordinates_ == nullptr
        && this->duplicate_ == nullptr; };
                  // coordinates Field Functions 
                  bool hasCoordinates() const { return this->coordinates_ != nullptr;};
                  void deleteCoordinates() { this->coordinates_ = nullptr;};
                  inline const vector<GenerateTraceability::Coordinates> & getCoordinates() const { DARABONBA_PTR_GET_CONST(coordinates_, vector<GenerateTraceability::Coordinates>) };
                  inline vector<GenerateTraceability::Coordinates> getCoordinates() { DARABONBA_PTR_GET(coordinates_, vector<GenerateTraceability::Coordinates>) };
                  inline GenerateTraceability& setCoordinates(const vector<GenerateTraceability::Coordinates> & coordinates) { DARABONBA_PTR_SET_VALUE(coordinates_, coordinates) };
                  inline GenerateTraceability& setCoordinates(vector<GenerateTraceability::Coordinates> && coordinates) { DARABONBA_PTR_SET_RVALUE(coordinates_, coordinates) };


                  // duplicate Field Functions 
                  bool hasDuplicate() const { return this->duplicate_ != nullptr;};
                  void deleteDuplicate() { this->duplicate_ = nullptr;};
                  inline double getDuplicate() const { DARABONBA_PTR_GET_DEFAULT(duplicate_, 0.0) };
                  inline GenerateTraceability& setDuplicate(double duplicate) { DARABONBA_PTR_SET_VALUE(duplicate_, duplicate) };


                protected:
                  shared_ptr<vector<GenerateTraceability::Coordinates>> coordinates_ {};
                  shared_ptr<double> duplicate_ {};
                };

                virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->generateLevel_ == nullptr && this->generateTraceability_ == nullptr && this->multimodalSearchResultList_ == nullptr && this->reasonTextGenerate_ == nullptr && this->referenceList_ == nullptr
        && this->textGenerate_ == nullptr && this->textGenerateMultimodalMediaList_ == nullptr; };
                // generateFinished Field Functions 
                bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
                void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
                inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
                inline TextGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


                // generateLevel Field Functions 
                bool hasGenerateLevel() const { return this->generateLevel_ != nullptr;};
                void deleteGenerateLevel() { this->generateLevel_ = nullptr;};
                inline string getGenerateLevel() const { DARABONBA_PTR_GET_DEFAULT(generateLevel_, "") };
                inline TextGenerateResult& setGenerateLevel(string generateLevel) { DARABONBA_PTR_SET_VALUE(generateLevel_, generateLevel) };


                // generateTraceability Field Functions 
                bool hasGenerateTraceability() const { return this->generateTraceability_ != nullptr;};
                void deleteGenerateTraceability() { this->generateTraceability_ = nullptr;};
                inline const TextGenerateResult::GenerateTraceability & getGenerateTraceability() const { DARABONBA_PTR_GET_CONST(generateTraceability_, TextGenerateResult::GenerateTraceability) };
                inline TextGenerateResult::GenerateTraceability getGenerateTraceability() { DARABONBA_PTR_GET(generateTraceability_, TextGenerateResult::GenerateTraceability) };
                inline TextGenerateResult& setGenerateTraceability(const TextGenerateResult::GenerateTraceability & generateTraceability) { DARABONBA_PTR_SET_VALUE(generateTraceability_, generateTraceability) };
                inline TextGenerateResult& setGenerateTraceability(TextGenerateResult::GenerateTraceability && generateTraceability) { DARABONBA_PTR_SET_RVALUE(generateTraceability_, generateTraceability) };


                // multimodalSearchResultList Field Functions 
                bool hasMultimodalSearchResultList() const { return this->multimodalSearchResultList_ != nullptr;};
                void deleteMultimodalSearchResultList() { this->multimodalSearchResultList_ = nullptr;};
                inline const vector<TextGenerateResult::MultimodalSearchResultList> & getMultimodalSearchResultList() const { DARABONBA_PTR_GET_CONST(multimodalSearchResultList_, vector<TextGenerateResult::MultimodalSearchResultList>) };
                inline vector<TextGenerateResult::MultimodalSearchResultList> getMultimodalSearchResultList() { DARABONBA_PTR_GET(multimodalSearchResultList_, vector<TextGenerateResult::MultimodalSearchResultList>) };
                inline TextGenerateResult& setMultimodalSearchResultList(const vector<TextGenerateResult::MultimodalSearchResultList> & multimodalSearchResultList) { DARABONBA_PTR_SET_VALUE(multimodalSearchResultList_, multimodalSearchResultList) };
                inline TextGenerateResult& setMultimodalSearchResultList(vector<TextGenerateResult::MultimodalSearchResultList> && multimodalSearchResultList) { DARABONBA_PTR_SET_RVALUE(multimodalSearchResultList_, multimodalSearchResultList) };


                // reasonTextGenerate Field Functions 
                bool hasReasonTextGenerate() const { return this->reasonTextGenerate_ != nullptr;};
                void deleteReasonTextGenerate() { this->reasonTextGenerate_ = nullptr;};
                inline string getReasonTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(reasonTextGenerate_, "") };
                inline TextGenerateResult& setReasonTextGenerate(string reasonTextGenerate) { DARABONBA_PTR_SET_VALUE(reasonTextGenerate_, reasonTextGenerate) };


                // referenceList Field Functions 
                bool hasReferenceList() const { return this->referenceList_ != nullptr;};
                void deleteReferenceList() { this->referenceList_ = nullptr;};
                inline const vector<TextGenerateResult::ReferenceList> & getReferenceList() const { DARABONBA_PTR_GET_CONST(referenceList_, vector<TextGenerateResult::ReferenceList>) };
                inline vector<TextGenerateResult::ReferenceList> getReferenceList() { DARABONBA_PTR_GET(referenceList_, vector<TextGenerateResult::ReferenceList>) };
                inline TextGenerateResult& setReferenceList(const vector<TextGenerateResult::ReferenceList> & referenceList) { DARABONBA_PTR_SET_VALUE(referenceList_, referenceList) };
                inline TextGenerateResult& setReferenceList(vector<TextGenerateResult::ReferenceList> && referenceList) { DARABONBA_PTR_SET_RVALUE(referenceList_, referenceList) };


                // textGenerate Field Functions 
                bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
                void deleteTextGenerate() { this->textGenerate_ = nullptr;};
                inline string getTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
                inline TextGenerateResult& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


                // textGenerateMultimodalMediaList Field Functions 
                bool hasTextGenerateMultimodalMediaList() const { return this->textGenerateMultimodalMediaList_ != nullptr;};
                void deleteTextGenerateMultimodalMediaList() { this->textGenerateMultimodalMediaList_ = nullptr;};
                inline const vector<TextGenerateResult::TextGenerateMultimodalMediaList> & getTextGenerateMultimodalMediaList() const { DARABONBA_PTR_GET_CONST(textGenerateMultimodalMediaList_, vector<TextGenerateResult::TextGenerateMultimodalMediaList>) };
                inline vector<TextGenerateResult::TextGenerateMultimodalMediaList> getTextGenerateMultimodalMediaList() { DARABONBA_PTR_GET(textGenerateMultimodalMediaList_, vector<TextGenerateResult::TextGenerateMultimodalMediaList>) };
                inline TextGenerateResult& setTextGenerateMultimodalMediaList(const vector<TextGenerateResult::TextGenerateMultimodalMediaList> & textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_VALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };
                inline TextGenerateResult& setTextGenerateMultimodalMediaList(vector<TextGenerateResult::TextGenerateMultimodalMediaList> && textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_RVALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };


              protected:
                shared_ptr<bool> generateFinished_ {};
                shared_ptr<string> generateLevel_ {};
                shared_ptr<TextGenerateResult::GenerateTraceability> generateTraceability_ {};
                shared_ptr<vector<TextGenerateResult::MultimodalSearchResultList>> multimodalSearchResultList_ {};
                shared_ptr<string> reasonTextGenerate_ {};
                shared_ptr<vector<TextGenerateResult::ReferenceList>> referenceList_ {};
                shared_ptr<string> textGenerate_ {};
                shared_ptr<vector<TextGenerateResult::TextGenerateMultimodalMediaList>> textGenerateMultimodalMediaList_ {};
              };

              class NewsElementResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const NewsElementResult& obj) { 
                  DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_TO_JSON(NewsElementArticleList, newsElementArticleList_);
                  DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
                };
                friend void from_json(const Darabonba::Json& j, NewsElementResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_FROM_JSON(NewsElementArticleList, newsElementArticleList_);
                  DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
                };
                NewsElementResult() = default ;
                NewsElementResult(const NewsElementResult &) = default ;
                NewsElementResult(NewsElementResult &&) = default ;
                NewsElementResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~NewsElementResult() = default ;
                NewsElementResult& operator=(const NewsElementResult &) = default ;
                NewsElementResult& operator=(NewsElementResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class NewsElementArticleList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const NewsElementArticleList& obj) { 
                    DARABONBA_PTR_TO_JSON(Article, article_);
                    DARABONBA_PTR_TO_JSON(NewsElementList, newsElementList_);
                    DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
                  };
                  friend void from_json(const Darabonba::Json& j, NewsElementArticleList& obj) { 
                    DARABONBA_PTR_FROM_JSON(Article, article_);
                    DARABONBA_PTR_FROM_JSON(NewsElementList, newsElementList_);
                    DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
                  };
                  NewsElementArticleList() = default ;
                  NewsElementArticleList(const NewsElementArticleList &) = default ;
                  NewsElementArticleList(NewsElementArticleList &&) = default ;
                  NewsElementArticleList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~NewsElementArticleList() = default ;
                  NewsElementArticleList& operator=(const NewsElementArticleList &) = default ;
                  NewsElementArticleList& operator=(NewsElementArticleList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class NewsElementList : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const NewsElementList& obj) { 
                      DARABONBA_PTR_TO_JSON(Event, event_);
                      DARABONBA_PTR_TO_JSON(Location, location_);
                      DARABONBA_PTR_TO_JSON(People, people_);
                      DARABONBA_PTR_TO_JSON(Time, time_);
                    };
                    friend void from_json(const Darabonba::Json& j, NewsElementList& obj) { 
                      DARABONBA_PTR_FROM_JSON(Event, event_);
                      DARABONBA_PTR_FROM_JSON(Location, location_);
                      DARABONBA_PTR_FROM_JSON(People, people_);
                      DARABONBA_PTR_FROM_JSON(Time, time_);
                    };
                    NewsElementList() = default ;
                    NewsElementList(const NewsElementList &) = default ;
                    NewsElementList(NewsElementList &&) = default ;
                    NewsElementList(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~NewsElementList() = default ;
                    NewsElementList& operator=(const NewsElementList &) = default ;
                    NewsElementList& operator=(NewsElementList &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class Event : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const Event& obj) { 
                        DARABONBA_PTR_TO_JSON(CauseList, causeList_);
                        DARABONBA_PTR_TO_JSON(ProcessList, processList_);
                        DARABONBA_PTR_TO_JSON(ResultList, resultList_);
                      };
                      friend void from_json(const Darabonba::Json& j, Event& obj) { 
                        DARABONBA_PTR_FROM_JSON(CauseList, causeList_);
                        DARABONBA_PTR_FROM_JSON(ProcessList, processList_);
                        DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
                      };
                      Event() = default ;
                      Event(const Event &) = default ;
                      Event(Event &&) = default ;
                      Event(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~Event() = default ;
                      Event& operator=(const Event &) = default ;
                      Event& operator=(Event &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->causeList_ == nullptr
        && this->processList_ == nullptr && this->resultList_ == nullptr; };
                      // causeList Field Functions 
                      bool hasCauseList() const { return this->causeList_ != nullptr;};
                      void deleteCauseList() { this->causeList_ = nullptr;};
                      inline const vector<string> & getCauseList() const { DARABONBA_PTR_GET_CONST(causeList_, vector<string>) };
                      inline vector<string> getCauseList() { DARABONBA_PTR_GET(causeList_, vector<string>) };
                      inline Event& setCauseList(const vector<string> & causeList) { DARABONBA_PTR_SET_VALUE(causeList_, causeList) };
                      inline Event& setCauseList(vector<string> && causeList) { DARABONBA_PTR_SET_RVALUE(causeList_, causeList) };


                      // processList Field Functions 
                      bool hasProcessList() const { return this->processList_ != nullptr;};
                      void deleteProcessList() { this->processList_ = nullptr;};
                      inline const vector<string> & getProcessList() const { DARABONBA_PTR_GET_CONST(processList_, vector<string>) };
                      inline vector<string> getProcessList() { DARABONBA_PTR_GET(processList_, vector<string>) };
                      inline Event& setProcessList(const vector<string> & processList) { DARABONBA_PTR_SET_VALUE(processList_, processList) };
                      inline Event& setProcessList(vector<string> && processList) { DARABONBA_PTR_SET_RVALUE(processList_, processList) };


                      // resultList Field Functions 
                      bool hasResultList() const { return this->resultList_ != nullptr;};
                      void deleteResultList() { this->resultList_ = nullptr;};
                      inline const vector<string> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<string>) };
                      inline vector<string> getResultList() { DARABONBA_PTR_GET(resultList_, vector<string>) };
                      inline Event& setResultList(const vector<string> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
                      inline Event& setResultList(vector<string> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


                    protected:
                      shared_ptr<vector<string>> causeList_ {};
                      shared_ptr<vector<string>> processList_ {};
                      shared_ptr<vector<string>> resultList_ {};
                    };

                    virtual bool empty() const override { return this->event_ == nullptr
        && this->location_ == nullptr && this->people_ == nullptr && this->time_ == nullptr; };
                    // event Field Functions 
                    bool hasEvent() const { return this->event_ != nullptr;};
                    void deleteEvent() { this->event_ = nullptr;};
                    inline const NewsElementList::Event & getEvent() const { DARABONBA_PTR_GET_CONST(event_, NewsElementList::Event) };
                    inline NewsElementList::Event getEvent() { DARABONBA_PTR_GET(event_, NewsElementList::Event) };
                    inline NewsElementList& setEvent(const NewsElementList::Event & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
                    inline NewsElementList& setEvent(NewsElementList::Event && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


                    // location Field Functions 
                    bool hasLocation() const { return this->location_ != nullptr;};
                    void deleteLocation() { this->location_ = nullptr;};
                    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
                    inline NewsElementList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


                    // people Field Functions 
                    bool hasPeople() const { return this->people_ != nullptr;};
                    void deletePeople() { this->people_ = nullptr;};
                    inline string getPeople() const { DARABONBA_PTR_GET_DEFAULT(people_, "") };
                    inline NewsElementList& setPeople(string people) { DARABONBA_PTR_SET_VALUE(people_, people) };


                    // time Field Functions 
                    bool hasTime() const { return this->time_ != nullptr;};
                    void deleteTime() { this->time_ = nullptr;};
                    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
                    inline NewsElementList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


                  protected:
                    shared_ptr<NewsElementList::Event> event_ {};
                    shared_ptr<string> location_ {};
                    shared_ptr<string> people_ {};
                    shared_ptr<string> time_ {};
                  };

                  class Article : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Article& obj) { 
                      DARABONBA_PTR_TO_JSON(Content, content_);
                      DARABONBA_PTR_TO_JSON(DocId, docId_);
                      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
                      DARABONBA_PTR_TO_JSON(Score, score_);
                      DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
                      DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                      DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
                      DARABONBA_PTR_TO_JSON(Select, select_);
                      DARABONBA_PTR_TO_JSON(Summary, summary_);
                      DARABONBA_PTR_TO_JSON(Title, title_);
                      DARABONBA_PTR_TO_JSON(Url, url_);
                    };
                    friend void from_json(const Darabonba::Json& j, Article& obj) { 
                      DARABONBA_PTR_FROM_JSON(Content, content_);
                      DARABONBA_PTR_FROM_JSON(DocId, docId_);
                      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
                      DARABONBA_PTR_FROM_JSON(Score, score_);
                      DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
                      DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                      DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
                      DARABONBA_PTR_FROM_JSON(Select, select_);
                      DARABONBA_PTR_FROM_JSON(Summary, summary_);
                      DARABONBA_PTR_FROM_JSON(Title, title_);
                      DARABONBA_PTR_FROM_JSON(Url, url_);
                    };
                    Article() = default ;
                    Article(const Article &) = default ;
                    Article(Article &&) = default ;
                    Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Article() = default ;
                    Article& operator=(const Article &) = default ;
                    Article& operator=(Article &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->content_ == nullptr
        && this->docId_ == nullptr && this->docUuid_ == nullptr && this->pubTime_ == nullptr && this->score_ == nullptr && this->searchSource_ == nullptr
        && this->searchSourceName_ == nullptr && this->searchSourceType_ == nullptr && this->select_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr
        && this->url_ == nullptr; };
                    // content Field Functions 
                    bool hasContent() const { return this->content_ != nullptr;};
                    void deleteContent() { this->content_ = nullptr;};
                    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                    inline Article& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                    // docId Field Functions 
                    bool hasDocId() const { return this->docId_ != nullptr;};
                    void deleteDocId() { this->docId_ = nullptr;};
                    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                    inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                    // docUuid Field Functions 
                    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                    void deleteDocUuid() { this->docUuid_ = nullptr;};
                    inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                    inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                    // pubTime Field Functions 
                    bool hasPubTime() const { return this->pubTime_ != nullptr;};
                    void deletePubTime() { this->pubTime_ = nullptr;};
                    inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
                    inline Article& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


                    // score Field Functions 
                    bool hasScore() const { return this->score_ != nullptr;};
                    void deleteScore() { this->score_ = nullptr;};
                    inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                    inline Article& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                    // searchSource Field Functions 
                    bool hasSearchSource() const { return this->searchSource_ != nullptr;};
                    void deleteSearchSource() { this->searchSource_ = nullptr;};
                    inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
                    inline Article& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


                    // searchSourceName Field Functions 
                    bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                    void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                    inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                    inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                    // searchSourceType Field Functions 
                    bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
                    void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
                    inline string getSearchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
                    inline Article& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


                    // select Field Functions 
                    bool hasSelect() const { return this->select_ != nullptr;};
                    void deleteSelect() { this->select_ = nullptr;};
                    inline bool getSelect() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
                    inline Article& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


                    // summary Field Functions 
                    bool hasSummary() const { return this->summary_ != nullptr;};
                    void deleteSummary() { this->summary_ = nullptr;};
                    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                    inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                    // title Field Functions 
                    bool hasTitle() const { return this->title_ != nullptr;};
                    void deleteTitle() { this->title_ = nullptr;};
                    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                    inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                    // url Field Functions 
                    bool hasUrl() const { return this->url_ != nullptr;};
                    void deleteUrl() { this->url_ = nullptr;};
                    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                    inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                  protected:
                    shared_ptr<string> content_ {};
                    shared_ptr<string> docId_ {};
                    shared_ptr<string> docUuid_ {};
                    shared_ptr<string> pubTime_ {};
                    shared_ptr<float> score_ {};
                    shared_ptr<string> searchSource_ {};
                    shared_ptr<string> searchSourceName_ {};
                    shared_ptr<string> searchSourceType_ {};
                    shared_ptr<bool> select_ {};
                    shared_ptr<string> summary_ {};
                    shared_ptr<string> title_ {};
                    shared_ptr<string> url_ {};
                  };

                  virtual bool empty() const override { return this->article_ == nullptr
        && this->newsElementList_ == nullptr && this->textGenerate_ == nullptr; };
                  // article Field Functions 
                  bool hasArticle() const { return this->article_ != nullptr;};
                  void deleteArticle() { this->article_ = nullptr;};
                  inline const NewsElementArticleList::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, NewsElementArticleList::Article) };
                  inline NewsElementArticleList::Article getArticle() { DARABONBA_PTR_GET(article_, NewsElementArticleList::Article) };
                  inline NewsElementArticleList& setArticle(const NewsElementArticleList::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                  inline NewsElementArticleList& setArticle(NewsElementArticleList::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                  // newsElementList Field Functions 
                  bool hasNewsElementList() const { return this->newsElementList_ != nullptr;};
                  void deleteNewsElementList() { this->newsElementList_ = nullptr;};
                  inline const vector<NewsElementArticleList::NewsElementList> & getNewsElementList() const { DARABONBA_PTR_GET_CONST(newsElementList_, vector<NewsElementArticleList::NewsElementList>) };
                  inline vector<NewsElementArticleList::NewsElementList> getNewsElementList() { DARABONBA_PTR_GET(newsElementList_, vector<NewsElementArticleList::NewsElementList>) };
                  inline NewsElementArticleList& setNewsElementList(const vector<NewsElementArticleList::NewsElementList> & newsElementList) { DARABONBA_PTR_SET_VALUE(newsElementList_, newsElementList) };
                  inline NewsElementArticleList& setNewsElementList(vector<NewsElementArticleList::NewsElementList> && newsElementList) { DARABONBA_PTR_SET_RVALUE(newsElementList_, newsElementList) };


                  // textGenerate Field Functions 
                  bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
                  void deleteTextGenerate() { this->textGenerate_ = nullptr;};
                  inline string getTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
                  inline NewsElementArticleList& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


                protected:
                  shared_ptr<NewsElementArticleList::Article> article_ {};
                  shared_ptr<vector<NewsElementArticleList::NewsElementList>> newsElementList_ {};
                  shared_ptr<string> textGenerate_ {};
                };

                virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->newsElementArticleList_ == nullptr && this->textGenerate_ == nullptr; };
                // generateFinished Field Functions 
                bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
                void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
                inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
                inline NewsElementResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


                // newsElementArticleList Field Functions 
                bool hasNewsElementArticleList() const { return this->newsElementArticleList_ != nullptr;};
                void deleteNewsElementArticleList() { this->newsElementArticleList_ = nullptr;};
                inline const vector<NewsElementResult::NewsElementArticleList> & getNewsElementArticleList() const { DARABONBA_PTR_GET_CONST(newsElementArticleList_, vector<NewsElementResult::NewsElementArticleList>) };
                inline vector<NewsElementResult::NewsElementArticleList> getNewsElementArticleList() { DARABONBA_PTR_GET(newsElementArticleList_, vector<NewsElementResult::NewsElementArticleList>) };
                inline NewsElementResult& setNewsElementArticleList(const vector<NewsElementResult::NewsElementArticleList> & newsElementArticleList) { DARABONBA_PTR_SET_VALUE(newsElementArticleList_, newsElementArticleList) };
                inline NewsElementResult& setNewsElementArticleList(vector<NewsElementResult::NewsElementArticleList> && newsElementArticleList) { DARABONBA_PTR_SET_RVALUE(newsElementArticleList_, newsElementArticleList) };


                // textGenerate Field Functions 
                bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
                void deleteTextGenerate() { this->textGenerate_ = nullptr;};
                inline string getTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
                inline NewsElementResult& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


              protected:
                shared_ptr<bool> generateFinished_ {};
                shared_ptr<vector<NewsElementResult::NewsElementArticleList>> newsElementArticleList_ {};
                shared_ptr<string> textGenerate_ {};
              };

              class ImageSearchResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ImageSearchResult& obj) { 
                  DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                };
                friend void from_json(const Darabonba::Json& j, ImageSearchResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                };
                ImageSearchResult() = default ;
                ImageSearchResult(const ImageSearchResult &) = default ;
                ImageSearchResult(ImageSearchResult &&) = default ;
                ImageSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ImageSearchResult() = default ;
                ImageSearchResult& operator=(const ImageSearchResult &) = default ;
                ImageSearchResult& operator=(ImageSearchResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SearchResult : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                    DARABONBA_PTR_TO_JSON(Article, article_);
                    DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                    DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                    DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
                  };
                  friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                    DARABONBA_PTR_FROM_JSON(Article, article_);
                    DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                    DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                    DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
                  };
                  SearchResult() = default ;
                  SearchResult(const SearchResult &) = default ;
                  SearchResult(SearchResult &&) = default ;
                  SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SearchResult() = default ;
                  SearchResult& operator=(const SearchResult &) = default ;
                  SearchResult& operator=(SearchResult &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class Article : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Article& obj) { 
                      DARABONBA_PTR_TO_JSON(DocId, docId_);
                      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                      DARABONBA_PTR_TO_JSON(Summary, summary_);
                      DARABONBA_PTR_TO_JSON(Title, title_);
                      DARABONBA_PTR_TO_JSON(Url, url_);
                    };
                    friend void from_json(const Darabonba::Json& j, Article& obj) { 
                      DARABONBA_PTR_FROM_JSON(DocId, docId_);
                      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                      DARABONBA_PTR_FROM_JSON(Summary, summary_);
                      DARABONBA_PTR_FROM_JSON(Title, title_);
                      DARABONBA_PTR_FROM_JSON(Url, url_);
                    };
                    Article() = default ;
                    Article(const Article &) = default ;
                    Article(Article &&) = default ;
                    Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Article() = default ;
                    Article& operator=(const Article &) = default ;
                    Article& operator=(Article &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                    // docId Field Functions 
                    bool hasDocId() const { return this->docId_ != nullptr;};
                    void deleteDocId() { this->docId_ = nullptr;};
                    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                    inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                    // docUuid Field Functions 
                    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                    void deleteDocUuid() { this->docUuid_ = nullptr;};
                    inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                    inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                    // searchSourceName Field Functions 
                    bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                    void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                    inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                    inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                    // summary Field Functions 
                    bool hasSummary() const { return this->summary_ != nullptr;};
                    void deleteSummary() { this->summary_ = nullptr;};
                    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                    inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                    // title Field Functions 
                    bool hasTitle() const { return this->title_ != nullptr;};
                    void deleteTitle() { this->title_ = nullptr;};
                    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                    inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                    // url Field Functions 
                    bool hasUrl() const { return this->url_ != nullptr;};
                    void deleteUrl() { this->url_ = nullptr;};
                    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                    inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                  protected:
                    shared_ptr<string> docId_ {};
                    shared_ptr<string> docUuid_ {};
                    shared_ptr<string> searchSourceName_ {};
                    shared_ptr<string> summary_ {};
                    shared_ptr<string> title_ {};
                    shared_ptr<string> url_ {};
                  };

                  virtual bool empty() const override { return this->article_ == nullptr
        && this->fileUrl_ == nullptr && this->mediaId_ == nullptr && this->traceabilityId_ == nullptr; };
                  // article Field Functions 
                  bool hasArticle() const { return this->article_ != nullptr;};
                  void deleteArticle() { this->article_ = nullptr;};
                  inline const SearchResult::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, SearchResult::Article) };
                  inline SearchResult::Article getArticle() { DARABONBA_PTR_GET(article_, SearchResult::Article) };
                  inline SearchResult& setArticle(const SearchResult::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                  inline SearchResult& setArticle(SearchResult::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                  // fileUrl Field Functions 
                  bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                  void deleteFileUrl() { this->fileUrl_ = nullptr;};
                  inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                  inline SearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                  // mediaId Field Functions 
                  bool hasMediaId() const { return this->mediaId_ != nullptr;};
                  void deleteMediaId() { this->mediaId_ = nullptr;};
                  inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                  inline SearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                  // traceabilityId Field Functions 
                  bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
                  void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
                  inline string getTraceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, "") };
                  inline SearchResult& setTraceabilityId(string traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


                protected:
                  shared_ptr<SearchResult::Article> article_ {};
                  shared_ptr<string> fileUrl_ {};
                  shared_ptr<string> mediaId_ {};
                  shared_ptr<string> traceabilityId_ {};
                };

                virtual bool empty() const override { return this->searchResult_ == nullptr; };
                // searchResult Field Functions 
                bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                void deleteSearchResult() { this->searchResult_ = nullptr;};
                inline const vector<ImageSearchResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<ImageSearchResult::SearchResult>) };
                inline vector<ImageSearchResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<ImageSearchResult::SearchResult>) };
                inline ImageSearchResult& setSearchResult(const vector<ImageSearchResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                inline ImageSearchResult& setSearchResult(vector<ImageSearchResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


              protected:
                shared_ptr<vector<ImageSearchResult::SearchResult>> searchResult_ {};
              };

              class ExcerptResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExcerptResult& obj) { 
                  DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_TO_JSON(GenerateLevel, generateLevel_);
                  DARABONBA_PTR_TO_JSON(ReasonTextGenerate, reasonTextGenerate_);
                  DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                  DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
                };
                friend void from_json(const Darabonba::Json& j, ExcerptResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_FROM_JSON(GenerateLevel, generateLevel_);
                  DARABONBA_PTR_FROM_JSON(ReasonTextGenerate, reasonTextGenerate_);
                  DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                  DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
                };
                ExcerptResult() = default ;
                ExcerptResult(const ExcerptResult &) = default ;
                ExcerptResult(ExcerptResult &&) = default ;
                ExcerptResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ExcerptResult() = default ;
                ExcerptResult& operator=(const ExcerptResult &) = default ;
                ExcerptResult& operator=(ExcerptResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SearchResult : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                    DARABONBA_PTR_TO_JSON(Chunks, chunks_);
                    DARABONBA_PTR_TO_JSON(Content, content_);
                    DARABONBA_PTR_TO_JSON(DocId, docId_);
                    DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                    DARABONBA_PTR_TO_JSON(Excerpt, excerpt_);
                    DARABONBA_PTR_TO_JSON(MultimodalMedias, multimodalMedias_);
                    DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
                    DARABONBA_PTR_TO_JSON(Score, score_);
                    DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
                    DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                    DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
                    DARABONBA_PTR_TO_JSON(Select, select_);
                    DARABONBA_PTR_TO_JSON(Summary, summary_);
                    DARABONBA_PTR_TO_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
                    DARABONBA_PTR_TO_JSON(Title, title_);
                    DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
                    DARABONBA_PTR_TO_JSON(Url, url_);
                  };
                  friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                    DARABONBA_PTR_FROM_JSON(Chunks, chunks_);
                    DARABONBA_PTR_FROM_JSON(Content, content_);
                    DARABONBA_PTR_FROM_JSON(DocId, docId_);
                    DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                    DARABONBA_PTR_FROM_JSON(Excerpt, excerpt_);
                    DARABONBA_PTR_FROM_JSON(MultimodalMedias, multimodalMedias_);
                    DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
                    DARABONBA_PTR_FROM_JSON(Score, score_);
                    DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
                    DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                    DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
                    DARABONBA_PTR_FROM_JSON(Select, select_);
                    DARABONBA_PTR_FROM_JSON(Summary, summary_);
                    DARABONBA_PTR_FROM_JSON(TextGenerateMultimodalMediaList, textGenerateMultimodalMediaList_);
                    DARABONBA_PTR_FROM_JSON(Title, title_);
                    DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
                    DARABONBA_PTR_FROM_JSON(Url, url_);
                  };
                  SearchResult() = default ;
                  SearchResult(const SearchResult &) = default ;
                  SearchResult(SearchResult &&) = default ;
                  SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SearchResult() = default ;
                  SearchResult& operator=(const SearchResult &) = default ;
                  SearchResult& operator=(SearchResult &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class TextGenerateMultimodalMediaList : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const TextGenerateMultimodalMediaList& obj) { 
                      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_TO_JSON(End, end_);
                      DARABONBA_PTR_TO_JSON(MultimodalMediaList, multimodalMediaList_);
                      DARABONBA_PTR_TO_JSON(Start, start_);
                    };
                    friend void from_json(const Darabonba::Json& j, TextGenerateMultimodalMediaList& obj) { 
                      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_FROM_JSON(End, end_);
                      DARABONBA_PTR_FROM_JSON(MultimodalMediaList, multimodalMediaList_);
                      DARABONBA_PTR_FROM_JSON(Start, start_);
                    };
                    TextGenerateMultimodalMediaList() = default ;
                    TextGenerateMultimodalMediaList(const TextGenerateMultimodalMediaList &) = default ;
                    TextGenerateMultimodalMediaList(TextGenerateMultimodalMediaList &&) = default ;
                    TextGenerateMultimodalMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~TextGenerateMultimodalMediaList() = default ;
                    TextGenerateMultimodalMediaList& operator=(const TextGenerateMultimodalMediaList &) = default ;
                    TextGenerateMultimodalMediaList& operator=(TextGenerateMultimodalMediaList &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class MultimodalMediaList : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const MultimodalMediaList& obj) { 
                        DARABONBA_PTR_TO_JSON(Article, article_);
                        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                      };
                      friend void from_json(const Darabonba::Json& j, MultimodalMediaList& obj) { 
                        DARABONBA_PTR_FROM_JSON(Article, article_);
                        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
                      };
                      MultimodalMediaList() = default ;
                      MultimodalMediaList(const MultimodalMediaList &) = default ;
                      MultimodalMediaList(MultimodalMediaList &&) = default ;
                      MultimodalMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~MultimodalMediaList() = default ;
                      MultimodalMediaList& operator=(const MultimodalMediaList &) = default ;
                      MultimodalMediaList& operator=(MultimodalMediaList &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      class Article : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const Article& obj) { 
                          DARABONBA_PTR_TO_JSON(DocId, docId_);
                          DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                          DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                          DARABONBA_PTR_TO_JSON(Title, title_);
                          DARABONBA_PTR_TO_JSON(Url, url_);
                        };
                        friend void from_json(const Darabonba::Json& j, Article& obj) { 
                          DARABONBA_PTR_FROM_JSON(DocId, docId_);
                          DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                          DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                          DARABONBA_PTR_FROM_JSON(Title, title_);
                          DARABONBA_PTR_FROM_JSON(Url, url_);
                        };
                        Article() = default ;
                        Article(const Article &) = default ;
                        Article(Article &&) = default ;
                        Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~Article() = default ;
                        Article& operator=(const Article &) = default ;
                        Article& operator=(Article &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                        // docId Field Functions 
                        bool hasDocId() const { return this->docId_ != nullptr;};
                        void deleteDocId() { this->docId_ = nullptr;};
                        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                        inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                        // docUuid Field Functions 
                        bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                        void deleteDocUuid() { this->docUuid_ = nullptr;};
                        inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                        inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                        // searchSourceName Field Functions 
                        bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                        void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                        inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                        inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                        // title Field Functions 
                        bool hasTitle() const { return this->title_ != nullptr;};
                        void deleteTitle() { this->title_ = nullptr;};
                        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                        inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                        // url Field Functions 
                        bool hasUrl() const { return this->url_ != nullptr;};
                        void deleteUrl() { this->url_ = nullptr;};
                        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                        inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                      protected:
                        shared_ptr<string> docId_ {};
                        shared_ptr<string> docUuid_ {};
                        shared_ptr<string> searchSourceName_ {};
                        shared_ptr<string> title_ {};
                        shared_ptr<string> url_ {};
                      };

                      virtual bool empty() const override { return this->article_ == nullptr
        && this->fileUrl_ == nullptr && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
                      // article Field Functions 
                      bool hasArticle() const { return this->article_ != nullptr;};
                      void deleteArticle() { this->article_ = nullptr;};
                      inline const MultimodalMediaList::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, MultimodalMediaList::Article) };
                      inline MultimodalMediaList::Article getArticle() { DARABONBA_PTR_GET(article_, MultimodalMediaList::Article) };
                      inline MultimodalMediaList& setArticle(const MultimodalMediaList::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                      inline MultimodalMediaList& setArticle(MultimodalMediaList::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                      // fileUrl Field Functions 
                      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                      void deleteFileUrl() { this->fileUrl_ = nullptr;};
                      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                      inline MultimodalMediaList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                      // mediaId Field Functions 
                      bool hasMediaId() const { return this->mediaId_ != nullptr;};
                      void deleteMediaId() { this->mediaId_ = nullptr;};
                      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                      inline MultimodalMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                      // mediaType Field Functions 
                      bool hasMediaType() const { return this->mediaType_ != nullptr;};
                      void deleteMediaType() { this->mediaType_ = nullptr;};
                      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                      inline MultimodalMediaList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                    protected:
                      shared_ptr<MultimodalMediaList::Article> article_ {};
                      shared_ptr<string> fileUrl_ {};
                      shared_ptr<string> mediaId_ {};
                      shared_ptr<string> mediaType_ {};
                    };

                    virtual bool empty() const override { return this->docUuid_ == nullptr
        && this->end_ == nullptr && this->multimodalMediaList_ == nullptr && this->start_ == nullptr; };
                    // docUuid Field Functions 
                    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                    void deleteDocUuid() { this->docUuid_ = nullptr;};
                    inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                    inline TextGenerateMultimodalMediaList& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                    // end Field Functions 
                    bool hasEnd() const { return this->end_ != nullptr;};
                    void deleteEnd() { this->end_ = nullptr;};
                    inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
                    inline TextGenerateMultimodalMediaList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


                    // multimodalMediaList Field Functions 
                    bool hasMultimodalMediaList() const { return this->multimodalMediaList_ != nullptr;};
                    void deleteMultimodalMediaList() { this->multimodalMediaList_ = nullptr;};
                    inline const vector<TextGenerateMultimodalMediaList::MultimodalMediaList> & getMultimodalMediaList() const { DARABONBA_PTR_GET_CONST(multimodalMediaList_, vector<TextGenerateMultimodalMediaList::MultimodalMediaList>) };
                    inline vector<TextGenerateMultimodalMediaList::MultimodalMediaList> getMultimodalMediaList() { DARABONBA_PTR_GET(multimodalMediaList_, vector<TextGenerateMultimodalMediaList::MultimodalMediaList>) };
                    inline TextGenerateMultimodalMediaList& setMultimodalMediaList(const vector<TextGenerateMultimodalMediaList::MultimodalMediaList> & multimodalMediaList) { DARABONBA_PTR_SET_VALUE(multimodalMediaList_, multimodalMediaList) };
                    inline TextGenerateMultimodalMediaList& setMultimodalMediaList(vector<TextGenerateMultimodalMediaList::MultimodalMediaList> && multimodalMediaList) { DARABONBA_PTR_SET_RVALUE(multimodalMediaList_, multimodalMediaList) };


                    // start Field Functions 
                    bool hasStart() const { return this->start_ != nullptr;};
                    void deleteStart() { this->start_ = nullptr;};
                    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
                    inline TextGenerateMultimodalMediaList& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


                  protected:
                    shared_ptr<string> docUuid_ {};
                    shared_ptr<int32_t> end_ {};
                    shared_ptr<vector<TextGenerateMultimodalMediaList::MultimodalMediaList>> multimodalMediaList_ {};
                    shared_ptr<int32_t> start_ {};
                  };

                  class MultimodalMedias : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const MultimodalMedias& obj) { 
                      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                    };
                    friend void from_json(const Darabonba::Json& j, MultimodalMedias& obj) { 
                      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
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
        && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
                    // fileUrl Field Functions 
                    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                    void deleteFileUrl() { this->fileUrl_ = nullptr;};
                    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                    inline MultimodalMedias& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                    // mediaId Field Functions 
                    bool hasMediaId() const { return this->mediaId_ != nullptr;};
                    void deleteMediaId() { this->mediaId_ = nullptr;};
                    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                    inline MultimodalMedias& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                    // mediaType Field Functions 
                    bool hasMediaType() const { return this->mediaType_ != nullptr;};
                    void deleteMediaType() { this->mediaType_ = nullptr;};
                    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                    inline MultimodalMedias& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                  protected:
                    shared_ptr<string> fileUrl_ {};
                    shared_ptr<string> mediaId_ {};
                    shared_ptr<string> mediaType_ {};
                  };

                  virtual bool empty() const override { return this->chunks_ == nullptr
        && this->content_ == nullptr && this->docId_ == nullptr && this->docUuid_ == nullptr && this->excerpt_ == nullptr && this->multimodalMedias_ == nullptr
        && this->pubTime_ == nullptr && this->score_ == nullptr && this->searchSource_ == nullptr && this->searchSourceName_ == nullptr && this->searchSourceType_ == nullptr
        && this->select_ == nullptr && this->summary_ == nullptr && this->textGenerateMultimodalMediaList_ == nullptr && this->title_ == nullptr && this->traceabilityId_ == nullptr
        && this->url_ == nullptr; };
                  // chunks Field Functions 
                  bool hasChunks() const { return this->chunks_ != nullptr;};
                  void deleteChunks() { this->chunks_ = nullptr;};
                  inline const vector<string> & getChunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<string>) };
                  inline vector<string> getChunks() { DARABONBA_PTR_GET(chunks_, vector<string>) };
                  inline SearchResult& setChunks(const vector<string> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
                  inline SearchResult& setChunks(vector<string> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


                  // content Field Functions 
                  bool hasContent() const { return this->content_ != nullptr;};
                  void deleteContent() { this->content_ = nullptr;};
                  inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                  inline SearchResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                  // docId Field Functions 
                  bool hasDocId() const { return this->docId_ != nullptr;};
                  void deleteDocId() { this->docId_ = nullptr;};
                  inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                  inline SearchResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                  // docUuid Field Functions 
                  bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                  void deleteDocUuid() { this->docUuid_ = nullptr;};
                  inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                  inline SearchResult& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                  // excerpt Field Functions 
                  bool hasExcerpt() const { return this->excerpt_ != nullptr;};
                  void deleteExcerpt() { this->excerpt_ = nullptr;};
                  inline string getExcerpt() const { DARABONBA_PTR_GET_DEFAULT(excerpt_, "") };
                  inline SearchResult& setExcerpt(string excerpt) { DARABONBA_PTR_SET_VALUE(excerpt_, excerpt) };


                  // multimodalMedias Field Functions 
                  bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
                  void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
                  inline const vector<SearchResult::MultimodalMedias> & getMultimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<SearchResult::MultimodalMedias>) };
                  inline vector<SearchResult::MultimodalMedias> getMultimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<SearchResult::MultimodalMedias>) };
                  inline SearchResult& setMultimodalMedias(const vector<SearchResult::MultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
                  inline SearchResult& setMultimodalMedias(vector<SearchResult::MultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


                  // pubTime Field Functions 
                  bool hasPubTime() const { return this->pubTime_ != nullptr;};
                  void deletePubTime() { this->pubTime_ = nullptr;};
                  inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
                  inline SearchResult& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


                  // score Field Functions 
                  bool hasScore() const { return this->score_ != nullptr;};
                  void deleteScore() { this->score_ = nullptr;};
                  inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                  inline SearchResult& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                  // searchSource Field Functions 
                  bool hasSearchSource() const { return this->searchSource_ != nullptr;};
                  void deleteSearchSource() { this->searchSource_ = nullptr;};
                  inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
                  inline SearchResult& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


                  // searchSourceName Field Functions 
                  bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                  void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                  inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                  inline SearchResult& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                  // searchSourceType Field Functions 
                  bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
                  void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
                  inline string getSearchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
                  inline SearchResult& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


                  // select Field Functions 
                  bool hasSelect() const { return this->select_ != nullptr;};
                  void deleteSelect() { this->select_ = nullptr;};
                  inline bool getSelect() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
                  inline SearchResult& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


                  // summary Field Functions 
                  bool hasSummary() const { return this->summary_ != nullptr;};
                  void deleteSummary() { this->summary_ = nullptr;};
                  inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                  inline SearchResult& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                  // textGenerateMultimodalMediaList Field Functions 
                  bool hasTextGenerateMultimodalMediaList() const { return this->textGenerateMultimodalMediaList_ != nullptr;};
                  void deleteTextGenerateMultimodalMediaList() { this->textGenerateMultimodalMediaList_ = nullptr;};
                  inline const vector<SearchResult::TextGenerateMultimodalMediaList> & getTextGenerateMultimodalMediaList() const { DARABONBA_PTR_GET_CONST(textGenerateMultimodalMediaList_, vector<SearchResult::TextGenerateMultimodalMediaList>) };
                  inline vector<SearchResult::TextGenerateMultimodalMediaList> getTextGenerateMultimodalMediaList() { DARABONBA_PTR_GET(textGenerateMultimodalMediaList_, vector<SearchResult::TextGenerateMultimodalMediaList>) };
                  inline SearchResult& setTextGenerateMultimodalMediaList(const vector<SearchResult::TextGenerateMultimodalMediaList> & textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_VALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };
                  inline SearchResult& setTextGenerateMultimodalMediaList(vector<SearchResult::TextGenerateMultimodalMediaList> && textGenerateMultimodalMediaList) { DARABONBA_PTR_SET_RVALUE(textGenerateMultimodalMediaList_, textGenerateMultimodalMediaList) };


                  // title Field Functions 
                  bool hasTitle() const { return this->title_ != nullptr;};
                  void deleteTitle() { this->title_ = nullptr;};
                  inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                  inline SearchResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                  // traceabilityId Field Functions 
                  bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
                  void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
                  inline int32_t getTraceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, 0) };
                  inline SearchResult& setTraceabilityId(int32_t traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


                  // url Field Functions 
                  bool hasUrl() const { return this->url_ != nullptr;};
                  void deleteUrl() { this->url_ = nullptr;};
                  inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                  inline SearchResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                protected:
                  shared_ptr<vector<string>> chunks_ {};
                  shared_ptr<string> content_ {};
                  shared_ptr<string> docId_ {};
                  shared_ptr<string> docUuid_ {};
                  shared_ptr<string> excerpt_ {};
                  shared_ptr<vector<SearchResult::MultimodalMedias>> multimodalMedias_ {};
                  shared_ptr<string> pubTime_ {};
                  shared_ptr<float> score_ {};
                  shared_ptr<string> searchSource_ {};
                  shared_ptr<string> searchSourceName_ {};
                  shared_ptr<string> searchSourceType_ {};
                  shared_ptr<bool> select_ {};
                  shared_ptr<string> summary_ {};
                  shared_ptr<vector<SearchResult::TextGenerateMultimodalMediaList>> textGenerateMultimodalMediaList_ {};
                  shared_ptr<string> title_ {};
                  shared_ptr<int32_t> traceabilityId_ {};
                  shared_ptr<string> url_ {};
                };

                virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->generateLevel_ == nullptr && this->reasonTextGenerate_ == nullptr && this->searchResult_ == nullptr && this->textGenerate_ == nullptr; };
                // generateFinished Field Functions 
                bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
                void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
                inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
                inline ExcerptResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


                // generateLevel Field Functions 
                bool hasGenerateLevel() const { return this->generateLevel_ != nullptr;};
                void deleteGenerateLevel() { this->generateLevel_ = nullptr;};
                inline string getGenerateLevel() const { DARABONBA_PTR_GET_DEFAULT(generateLevel_, "") };
                inline ExcerptResult& setGenerateLevel(string generateLevel) { DARABONBA_PTR_SET_VALUE(generateLevel_, generateLevel) };


                // reasonTextGenerate Field Functions 
                bool hasReasonTextGenerate() const { return this->reasonTextGenerate_ != nullptr;};
                void deleteReasonTextGenerate() { this->reasonTextGenerate_ = nullptr;};
                inline string getReasonTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(reasonTextGenerate_, "") };
                inline ExcerptResult& setReasonTextGenerate(string reasonTextGenerate) { DARABONBA_PTR_SET_VALUE(reasonTextGenerate_, reasonTextGenerate) };


                // searchResult Field Functions 
                bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                void deleteSearchResult() { this->searchResult_ = nullptr;};
                inline const vector<ExcerptResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<ExcerptResult::SearchResult>) };
                inline vector<ExcerptResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<ExcerptResult::SearchResult>) };
                inline ExcerptResult& setSearchResult(const vector<ExcerptResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                inline ExcerptResult& setSearchResult(vector<ExcerptResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


                // textGenerate Field Functions 
                bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
                void deleteTextGenerate() { this->textGenerate_ = nullptr;};
                inline string getTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
                inline ExcerptResult& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


              protected:
                shared_ptr<bool> generateFinished_ {};
                shared_ptr<string> generateLevel_ {};
                shared_ptr<string> reasonTextGenerate_ {};
                shared_ptr<vector<ExcerptResult::SearchResult>> searchResult_ {};
                shared_ptr<string> textGenerate_ {};
              };

              class ClusterTopicResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ClusterTopicResult& obj) { 
                  DARABONBA_PTR_TO_JSON(ClusterTopics, clusterTopics_);
                  DARABONBA_PTR_TO_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
                };
                friend void from_json(const Darabonba::Json& j, ClusterTopicResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(ClusterTopics, clusterTopics_);
                  DARABONBA_PTR_FROM_JSON(GenerateFinished, generateFinished_);
                  DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
                };
                ClusterTopicResult() = default ;
                ClusterTopicResult(const ClusterTopicResult &) = default ;
                ClusterTopicResult(ClusterTopicResult &&) = default ;
                ClusterTopicResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ClusterTopicResult() = default ;
                ClusterTopicResult& operator=(const ClusterTopicResult &) = default ;
                ClusterTopicResult& operator=(ClusterTopicResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class ClusterTopics : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const ClusterTopics& obj) { 
                    DARABONBA_PTR_TO_JSON(AudioSearchResult, audioSearchResult_);
                    DARABONBA_PTR_TO_JSON(ImageSearchResult, imageSearchResult_);
                    DARABONBA_PTR_TO_JSON(TextSearchResult, textSearchResult_);
                    DARABONBA_PTR_TO_JSON(Topic, topic_);
                    DARABONBA_PTR_TO_JSON(VideoSearchResult, videoSearchResult_);
                  };
                  friend void from_json(const Darabonba::Json& j, ClusterTopics& obj) { 
                    DARABONBA_PTR_FROM_JSON(AudioSearchResult, audioSearchResult_);
                    DARABONBA_PTR_FROM_JSON(ImageSearchResult, imageSearchResult_);
                    DARABONBA_PTR_FROM_JSON(TextSearchResult, textSearchResult_);
                    DARABONBA_PTR_FROM_JSON(Topic, topic_);
                    DARABONBA_PTR_FROM_JSON(VideoSearchResult, videoSearchResult_);
                  };
                  ClusterTopics() = default ;
                  ClusterTopics(const ClusterTopics &) = default ;
                  ClusterTopics(ClusterTopics &&) = default ;
                  ClusterTopics(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~ClusterTopics() = default ;
                  ClusterTopics& operator=(const ClusterTopics &) = default ;
                  ClusterTopics& operator=(ClusterTopics &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class VideoSearchResult : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const VideoSearchResult& obj) { 
                      DARABONBA_PTR_TO_JSON(Current, current_);
                      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                      DARABONBA_PTR_TO_JSON(Size, size_);
                      DARABONBA_PTR_TO_JSON(Total, total_);
                    };
                    friend void from_json(const Darabonba::Json& j, VideoSearchResult& obj) { 
                      DARABONBA_PTR_FROM_JSON(Current, current_);
                      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                      DARABONBA_PTR_FROM_JSON(Size, size_);
                      DARABONBA_PTR_FROM_JSON(Total, total_);
                    };
                    VideoSearchResult() = default ;
                    VideoSearchResult(const VideoSearchResult &) = default ;
                    VideoSearchResult(VideoSearchResult &&) = default ;
                    VideoSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~VideoSearchResult() = default ;
                    VideoSearchResult& operator=(const VideoSearchResult &) = default ;
                    VideoSearchResult& operator=(VideoSearchResult &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class SearchResult : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                        DARABONBA_PTR_TO_JSON(Article, article_);
                        DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
                        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                      };
                      friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                        DARABONBA_PTR_FROM_JSON(Article, article_);
                        DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
                        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                      };
                      SearchResult() = default ;
                      SearchResult(const SearchResult &) = default ;
                      SearchResult(SearchResult &&) = default ;
                      SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~SearchResult() = default ;
                      SearchResult& operator=(const SearchResult &) = default ;
                      SearchResult& operator=(SearchResult &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      class ClipInfos : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const ClipInfos& obj) { 
                          DARABONBA_PTR_TO_JSON(From, from_);
                          DARABONBA_PTR_TO_JSON(Score, score_);
                          DARABONBA_PTR_TO_JSON(Text, text_);
                          DARABONBA_PTR_TO_JSON(To, to_);
                          DARABONBA_PTR_TO_JSON(Type, type_);
                        };
                        friend void from_json(const Darabonba::Json& j, ClipInfos& obj) { 
                          DARABONBA_PTR_FROM_JSON(From, from_);
                          DARABONBA_PTR_FROM_JSON(Score, score_);
                          DARABONBA_PTR_FROM_JSON(Text, text_);
                          DARABONBA_PTR_FROM_JSON(To, to_);
                          DARABONBA_PTR_FROM_JSON(Type, type_);
                        };
                        ClipInfos() = default ;
                        ClipInfos(const ClipInfos &) = default ;
                        ClipInfos(ClipInfos &&) = default ;
                        ClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~ClipInfos() = default ;
                        ClipInfos& operator=(const ClipInfos &) = default ;
                        ClipInfos& operator=(ClipInfos &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->from_ == nullptr
        && this->score_ == nullptr && this->text_ == nullptr && this->to_ == nullptr && this->type_ == nullptr; };
                        // from Field Functions 
                        bool hasFrom() const { return this->from_ != nullptr;};
                        void deleteFrom() { this->from_ = nullptr;};
                        inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
                        inline ClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                        // score Field Functions 
                        bool hasScore() const { return this->score_ != nullptr;};
                        void deleteScore() { this->score_ = nullptr;};
                        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                        inline ClipInfos& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                        // text Field Functions 
                        bool hasText() const { return this->text_ != nullptr;};
                        void deleteText() { this->text_ = nullptr;};
                        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
                        inline ClipInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


                        // to Field Functions 
                        bool hasTo() const { return this->to_ != nullptr;};
                        void deleteTo() { this->to_ = nullptr;};
                        inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
                        inline ClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                        // type Field Functions 
                        bool hasType() const { return this->type_ != nullptr;};
                        void deleteType() { this->type_ = nullptr;};
                        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                        inline ClipInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                      protected:
                        shared_ptr<double> from_ {};
                        shared_ptr<double> score_ {};
                        shared_ptr<string> text_ {};
                        shared_ptr<double> to_ {};
                        shared_ptr<string> type_ {};
                      };

                      class Article : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const Article& obj) { 
                          DARABONBA_PTR_TO_JSON(DocId, docId_);
                          DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                          DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                          DARABONBA_PTR_TO_JSON(Summary, summary_);
                          DARABONBA_PTR_TO_JSON(Title, title_);
                          DARABONBA_PTR_TO_JSON(Url, url_);
                        };
                        friend void from_json(const Darabonba::Json& j, Article& obj) { 
                          DARABONBA_PTR_FROM_JSON(DocId, docId_);
                          DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                          DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                          DARABONBA_PTR_FROM_JSON(Summary, summary_);
                          DARABONBA_PTR_FROM_JSON(Title, title_);
                          DARABONBA_PTR_FROM_JSON(Url, url_);
                        };
                        Article() = default ;
                        Article(const Article &) = default ;
                        Article(Article &&) = default ;
                        Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~Article() = default ;
                        Article& operator=(const Article &) = default ;
                        Article& operator=(Article &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                        // docId Field Functions 
                        bool hasDocId() const { return this->docId_ != nullptr;};
                        void deleteDocId() { this->docId_ = nullptr;};
                        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                        inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                        // docUuid Field Functions 
                        bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                        void deleteDocUuid() { this->docUuid_ = nullptr;};
                        inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                        inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                        // searchSourceName Field Functions 
                        bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                        void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                        inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                        inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                        // summary Field Functions 
                        bool hasSummary() const { return this->summary_ != nullptr;};
                        void deleteSummary() { this->summary_ = nullptr;};
                        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                        inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                        // title Field Functions 
                        bool hasTitle() const { return this->title_ != nullptr;};
                        void deleteTitle() { this->title_ = nullptr;};
                        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                        inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                        // url Field Functions 
                        bool hasUrl() const { return this->url_ != nullptr;};
                        void deleteUrl() { this->url_ = nullptr;};
                        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                        inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                      protected:
                        shared_ptr<string> docId_ {};
                        shared_ptr<string> docUuid_ {};
                        shared_ptr<string> searchSourceName_ {};
                        shared_ptr<string> summary_ {};
                        shared_ptr<string> title_ {};
                        shared_ptr<string> url_ {};
                      };

                      virtual bool empty() const override { return this->article_ == nullptr
        && this->clipInfos_ == nullptr && this->fileUrl_ == nullptr && this->mediaId_ == nullptr; };
                      // article Field Functions 
                      bool hasArticle() const { return this->article_ != nullptr;};
                      void deleteArticle() { this->article_ = nullptr;};
                      inline const SearchResult::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, SearchResult::Article) };
                      inline SearchResult::Article getArticle() { DARABONBA_PTR_GET(article_, SearchResult::Article) };
                      inline SearchResult& setArticle(const SearchResult::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                      inline SearchResult& setArticle(SearchResult::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                      // clipInfos Field Functions 
                      bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
                      void deleteClipInfos() { this->clipInfos_ = nullptr;};
                      inline const vector<SearchResult::ClipInfos> & getClipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<SearchResult::ClipInfos>) };
                      inline vector<SearchResult::ClipInfos> getClipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<SearchResult::ClipInfos>) };
                      inline SearchResult& setClipInfos(const vector<SearchResult::ClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
                      inline SearchResult& setClipInfos(vector<SearchResult::ClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


                      // fileUrl Field Functions 
                      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                      void deleteFileUrl() { this->fileUrl_ = nullptr;};
                      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                      inline SearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                      // mediaId Field Functions 
                      bool hasMediaId() const { return this->mediaId_ != nullptr;};
                      void deleteMediaId() { this->mediaId_ = nullptr;};
                      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                      inline SearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                    protected:
                      shared_ptr<SearchResult::Article> article_ {};
                      shared_ptr<vector<SearchResult::ClipInfos>> clipInfos_ {};
                      shared_ptr<string> fileUrl_ {};
                      shared_ptr<string> mediaId_ {};
                    };

                    virtual bool empty() const override { return this->current_ == nullptr
        && this->searchResult_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
                    // current Field Functions 
                    bool hasCurrent() const { return this->current_ != nullptr;};
                    void deleteCurrent() { this->current_ = nullptr;};
                    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
                    inline VideoSearchResult& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


                    // searchResult Field Functions 
                    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                    void deleteSearchResult() { this->searchResult_ = nullptr;};
                    inline const vector<VideoSearchResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<VideoSearchResult::SearchResult>) };
                    inline vector<VideoSearchResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<VideoSearchResult::SearchResult>) };
                    inline VideoSearchResult& setSearchResult(const vector<VideoSearchResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                    inline VideoSearchResult& setSearchResult(vector<VideoSearchResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


                    // size Field Functions 
                    bool hasSize() const { return this->size_ != nullptr;};
                    void deleteSize() { this->size_ = nullptr;};
                    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
                    inline VideoSearchResult& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


                    // total Field Functions 
                    bool hasTotal() const { return this->total_ != nullptr;};
                    void deleteTotal() { this->total_ = nullptr;};
                    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
                    inline VideoSearchResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


                  protected:
                    shared_ptr<int32_t> current_ {};
                    shared_ptr<vector<VideoSearchResult::SearchResult>> searchResult_ {};
                    shared_ptr<int32_t> size_ {};
                    shared_ptr<int32_t> total_ {};
                  };

                  class TextSearchResult : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const TextSearchResult& obj) { 
                      DARABONBA_PTR_TO_JSON(Current, current_);
                      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                      DARABONBA_PTR_TO_JSON(Size, size_);
                      DARABONBA_PTR_TO_JSON(Total, total_);
                    };
                    friend void from_json(const Darabonba::Json& j, TextSearchResult& obj) { 
                      DARABONBA_PTR_FROM_JSON(Current, current_);
                      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                      DARABONBA_PTR_FROM_JSON(Size, size_);
                      DARABONBA_PTR_FROM_JSON(Total, total_);
                    };
                    TextSearchResult() = default ;
                    TextSearchResult(const TextSearchResult &) = default ;
                    TextSearchResult(TextSearchResult &&) = default ;
                    TextSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~TextSearchResult() = default ;
                    TextSearchResult& operator=(const TextSearchResult &) = default ;
                    TextSearchResult& operator=(TextSearchResult &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class SearchResult : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                        DARABONBA_PTR_TO_JSON(DocId, docId_);
                        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_TO_JSON(MultimodalMedias, multimodalMedias_);
                        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
                        DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
                        DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
                        DARABONBA_PTR_TO_JSON(Summary, summary_);
                        DARABONBA_PTR_TO_JSON(Title, title_);
                        DARABONBA_PTR_TO_JSON(Url, url_);
                      };
                      friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                        DARABONBA_PTR_FROM_JSON(DocId, docId_);
                        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                        DARABONBA_PTR_FROM_JSON(MultimodalMedias, multimodalMedias_);
                        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
                        DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
                        DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                        DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
                        DARABONBA_PTR_FROM_JSON(Summary, summary_);
                        DARABONBA_PTR_FROM_JSON(Title, title_);
                        DARABONBA_PTR_FROM_JSON(Url, url_);
                      };
                      SearchResult() = default ;
                      SearchResult(const SearchResult &) = default ;
                      SearchResult(SearchResult &&) = default ;
                      SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~SearchResult() = default ;
                      SearchResult& operator=(const SearchResult &) = default ;
                      SearchResult& operator=(SearchResult &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      class MultimodalMedias : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const MultimodalMedias& obj) { 
                          DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
                        };
                        friend void from_json(const Darabonba::Json& j, MultimodalMedias& obj) { 
                          DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
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
        && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
                        // fileUrl Field Functions 
                        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                        void deleteFileUrl() { this->fileUrl_ = nullptr;};
                        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                        inline MultimodalMedias& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                        // mediaId Field Functions 
                        bool hasMediaId() const { return this->mediaId_ != nullptr;};
                        void deleteMediaId() { this->mediaId_ = nullptr;};
                        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                        inline MultimodalMedias& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                        // mediaType Field Functions 
                        bool hasMediaType() const { return this->mediaType_ != nullptr;};
                        void deleteMediaType() { this->mediaType_ = nullptr;};
                        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
                        inline MultimodalMedias& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


                      protected:
                        shared_ptr<string> fileUrl_ {};
                        shared_ptr<string> mediaId_ {};
                        shared_ptr<string> mediaType_ {};
                      };

                      virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->multimodalMedias_ == nullptr && this->pubTime_ == nullptr && this->searchSource_ == nullptr && this->searchSourceName_ == nullptr
        && this->searchSourceType_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                      // docId Field Functions 
                      bool hasDocId() const { return this->docId_ != nullptr;};
                      void deleteDocId() { this->docId_ = nullptr;};
                      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                      inline SearchResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                      // docUuid Field Functions 
                      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                      void deleteDocUuid() { this->docUuid_ = nullptr;};
                      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                      inline SearchResult& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                      // multimodalMedias Field Functions 
                      bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
                      void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
                      inline const vector<SearchResult::MultimodalMedias> & getMultimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<SearchResult::MultimodalMedias>) };
                      inline vector<SearchResult::MultimodalMedias> getMultimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<SearchResult::MultimodalMedias>) };
                      inline SearchResult& setMultimodalMedias(const vector<SearchResult::MultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
                      inline SearchResult& setMultimodalMedias(vector<SearchResult::MultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


                      // pubTime Field Functions 
                      bool hasPubTime() const { return this->pubTime_ != nullptr;};
                      void deletePubTime() { this->pubTime_ = nullptr;};
                      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
                      inline SearchResult& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


                      // searchSource Field Functions 
                      bool hasSearchSource() const { return this->searchSource_ != nullptr;};
                      void deleteSearchSource() { this->searchSource_ = nullptr;};
                      inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
                      inline SearchResult& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


                      // searchSourceName Field Functions 
                      bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                      void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                      inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                      inline SearchResult& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                      // searchSourceType Field Functions 
                      bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
                      void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
                      inline string getSearchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
                      inline SearchResult& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


                      // summary Field Functions 
                      bool hasSummary() const { return this->summary_ != nullptr;};
                      void deleteSummary() { this->summary_ = nullptr;};
                      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                      inline SearchResult& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                      // title Field Functions 
                      bool hasTitle() const { return this->title_ != nullptr;};
                      void deleteTitle() { this->title_ = nullptr;};
                      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                      inline SearchResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                      // url Field Functions 
                      bool hasUrl() const { return this->url_ != nullptr;};
                      void deleteUrl() { this->url_ = nullptr;};
                      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                      inline SearchResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                    protected:
                      shared_ptr<string> docId_ {};
                      shared_ptr<string> docUuid_ {};
                      shared_ptr<vector<SearchResult::MultimodalMedias>> multimodalMedias_ {};
                      shared_ptr<string> pubTime_ {};
                      shared_ptr<string> searchSource_ {};
                      shared_ptr<string> searchSourceName_ {};
                      shared_ptr<string> searchSourceType_ {};
                      shared_ptr<string> summary_ {};
                      shared_ptr<string> title_ {};
                      shared_ptr<string> url_ {};
                    };

                    virtual bool empty() const override { return this->current_ == nullptr
        && this->searchResult_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
                    // current Field Functions 
                    bool hasCurrent() const { return this->current_ != nullptr;};
                    void deleteCurrent() { this->current_ = nullptr;};
                    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
                    inline TextSearchResult& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


                    // searchResult Field Functions 
                    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                    void deleteSearchResult() { this->searchResult_ = nullptr;};
                    inline const vector<TextSearchResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<TextSearchResult::SearchResult>) };
                    inline vector<TextSearchResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<TextSearchResult::SearchResult>) };
                    inline TextSearchResult& setSearchResult(const vector<TextSearchResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                    inline TextSearchResult& setSearchResult(vector<TextSearchResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


                    // size Field Functions 
                    bool hasSize() const { return this->size_ != nullptr;};
                    void deleteSize() { this->size_ = nullptr;};
                    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
                    inline TextSearchResult& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


                    // total Field Functions 
                    bool hasTotal() const { return this->total_ != nullptr;};
                    void deleteTotal() { this->total_ = nullptr;};
                    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
                    inline TextSearchResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


                  protected:
                    shared_ptr<int32_t> current_ {};
                    shared_ptr<vector<TextSearchResult::SearchResult>> searchResult_ {};
                    shared_ptr<int32_t> size_ {};
                    shared_ptr<int32_t> total_ {};
                  };

                  class ImageSearchResult : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const ImageSearchResult& obj) { 
                      DARABONBA_PTR_TO_JSON(Current, current_);
                      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                      DARABONBA_PTR_TO_JSON(Size, size_);
                      DARABONBA_PTR_TO_JSON(Total, total_);
                    };
                    friend void from_json(const Darabonba::Json& j, ImageSearchResult& obj) { 
                      DARABONBA_PTR_FROM_JSON(Current, current_);
                      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                      DARABONBA_PTR_FROM_JSON(Size, size_);
                      DARABONBA_PTR_FROM_JSON(Total, total_);
                    };
                    ImageSearchResult() = default ;
                    ImageSearchResult(const ImageSearchResult &) = default ;
                    ImageSearchResult(ImageSearchResult &&) = default ;
                    ImageSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~ImageSearchResult() = default ;
                    ImageSearchResult& operator=(const ImageSearchResult &) = default ;
                    ImageSearchResult& operator=(ImageSearchResult &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class SearchResult : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                        DARABONBA_PTR_TO_JSON(Article, article_);
                        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                      };
                      friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                        DARABONBA_PTR_FROM_JSON(Article, article_);
                        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                      };
                      SearchResult() = default ;
                      SearchResult(const SearchResult &) = default ;
                      SearchResult(SearchResult &&) = default ;
                      SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~SearchResult() = default ;
                      SearchResult& operator=(const SearchResult &) = default ;
                      SearchResult& operator=(SearchResult &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      class Article : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const Article& obj) { 
                          DARABONBA_PTR_TO_JSON(DocId, docId_);
                          DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                          DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                          DARABONBA_PTR_TO_JSON(Summary, summary_);
                          DARABONBA_PTR_TO_JSON(Title, title_);
                          DARABONBA_PTR_TO_JSON(Url, url_);
                        };
                        friend void from_json(const Darabonba::Json& j, Article& obj) { 
                          DARABONBA_PTR_FROM_JSON(DocId, docId_);
                          DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                          DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                          DARABONBA_PTR_FROM_JSON(Summary, summary_);
                          DARABONBA_PTR_FROM_JSON(Title, title_);
                          DARABONBA_PTR_FROM_JSON(Url, url_);
                        };
                        Article() = default ;
                        Article(const Article &) = default ;
                        Article(Article &&) = default ;
                        Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~Article() = default ;
                        Article& operator=(const Article &) = default ;
                        Article& operator=(Article &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                        // docId Field Functions 
                        bool hasDocId() const { return this->docId_ != nullptr;};
                        void deleteDocId() { this->docId_ = nullptr;};
                        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                        inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                        // docUuid Field Functions 
                        bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                        void deleteDocUuid() { this->docUuid_ = nullptr;};
                        inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                        inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                        // searchSourceName Field Functions 
                        bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                        void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                        inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                        inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                        // summary Field Functions 
                        bool hasSummary() const { return this->summary_ != nullptr;};
                        void deleteSummary() { this->summary_ = nullptr;};
                        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                        inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                        // title Field Functions 
                        bool hasTitle() const { return this->title_ != nullptr;};
                        void deleteTitle() { this->title_ = nullptr;};
                        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                        inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                        // url Field Functions 
                        bool hasUrl() const { return this->url_ != nullptr;};
                        void deleteUrl() { this->url_ = nullptr;};
                        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                        inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                      protected:
                        shared_ptr<string> docId_ {};
                        shared_ptr<string> docUuid_ {};
                        shared_ptr<string> searchSourceName_ {};
                        shared_ptr<string> summary_ {};
                        shared_ptr<string> title_ {};
                        shared_ptr<string> url_ {};
                      };

                      virtual bool empty() const override { return this->article_ == nullptr
        && this->fileUrl_ == nullptr && this->mediaId_ == nullptr; };
                      // article Field Functions 
                      bool hasArticle() const { return this->article_ != nullptr;};
                      void deleteArticle() { this->article_ = nullptr;};
                      inline const SearchResult::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, SearchResult::Article) };
                      inline SearchResult::Article getArticle() { DARABONBA_PTR_GET(article_, SearchResult::Article) };
                      inline SearchResult& setArticle(const SearchResult::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                      inline SearchResult& setArticle(SearchResult::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                      // fileUrl Field Functions 
                      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                      void deleteFileUrl() { this->fileUrl_ = nullptr;};
                      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                      inline SearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                      // mediaId Field Functions 
                      bool hasMediaId() const { return this->mediaId_ != nullptr;};
                      void deleteMediaId() { this->mediaId_ = nullptr;};
                      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                      inline SearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                    protected:
                      shared_ptr<SearchResult::Article> article_ {};
                      shared_ptr<string> fileUrl_ {};
                      shared_ptr<string> mediaId_ {};
                    };

                    virtual bool empty() const override { return this->current_ == nullptr
        && this->searchResult_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
                    // current Field Functions 
                    bool hasCurrent() const { return this->current_ != nullptr;};
                    void deleteCurrent() { this->current_ = nullptr;};
                    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
                    inline ImageSearchResult& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


                    // searchResult Field Functions 
                    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                    void deleteSearchResult() { this->searchResult_ = nullptr;};
                    inline const vector<ImageSearchResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<ImageSearchResult::SearchResult>) };
                    inline vector<ImageSearchResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<ImageSearchResult::SearchResult>) };
                    inline ImageSearchResult& setSearchResult(const vector<ImageSearchResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                    inline ImageSearchResult& setSearchResult(vector<ImageSearchResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


                    // size Field Functions 
                    bool hasSize() const { return this->size_ != nullptr;};
                    void deleteSize() { this->size_ = nullptr;};
                    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
                    inline ImageSearchResult& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


                    // total Field Functions 
                    bool hasTotal() const { return this->total_ != nullptr;};
                    void deleteTotal() { this->total_ = nullptr;};
                    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
                    inline ImageSearchResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


                  protected:
                    shared_ptr<int32_t> current_ {};
                    shared_ptr<vector<ImageSearchResult::SearchResult>> searchResult_ {};
                    shared_ptr<int32_t> size_ {};
                    shared_ptr<int32_t> total_ {};
                  };

                  class AudioSearchResult : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const AudioSearchResult& obj) { 
                      DARABONBA_PTR_TO_JSON(Current, current_);
                      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                      DARABONBA_PTR_TO_JSON(Size, size_);
                      DARABONBA_PTR_TO_JSON(Total, total_);
                    };
                    friend void from_json(const Darabonba::Json& j, AudioSearchResult& obj) { 
                      DARABONBA_PTR_FROM_JSON(Current, current_);
                      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                      DARABONBA_PTR_FROM_JSON(Size, size_);
                      DARABONBA_PTR_FROM_JSON(Total, total_);
                    };
                    AudioSearchResult() = default ;
                    AudioSearchResult(const AudioSearchResult &) = default ;
                    AudioSearchResult(AudioSearchResult &&) = default ;
                    AudioSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~AudioSearchResult() = default ;
                    AudioSearchResult& operator=(const AudioSearchResult &) = default ;
                    AudioSearchResult& operator=(AudioSearchResult &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class SearchResult : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                        DARABONBA_PTR_TO_JSON(Article, article_);
                        DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
                        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                      };
                      friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                        DARABONBA_PTR_FROM_JSON(Article, article_);
                        DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
                        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                      };
                      SearchResult() = default ;
                      SearchResult(const SearchResult &) = default ;
                      SearchResult(SearchResult &&) = default ;
                      SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~SearchResult() = default ;
                      SearchResult& operator=(const SearchResult &) = default ;
                      SearchResult& operator=(SearchResult &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      class ClipInfos : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const ClipInfos& obj) { 
                          DARABONBA_PTR_TO_JSON(From, from_);
                          DARABONBA_PTR_TO_JSON(Score, score_);
                          DARABONBA_PTR_TO_JSON(Text, text_);
                          DARABONBA_PTR_TO_JSON(To, to_);
                          DARABONBA_PTR_TO_JSON(Type, type_);
                        };
                        friend void from_json(const Darabonba::Json& j, ClipInfos& obj) { 
                          DARABONBA_PTR_FROM_JSON(From, from_);
                          DARABONBA_PTR_FROM_JSON(Score, score_);
                          DARABONBA_PTR_FROM_JSON(Text, text_);
                          DARABONBA_PTR_FROM_JSON(To, to_);
                          DARABONBA_PTR_FROM_JSON(Type, type_);
                        };
                        ClipInfos() = default ;
                        ClipInfos(const ClipInfos &) = default ;
                        ClipInfos(ClipInfos &&) = default ;
                        ClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~ClipInfos() = default ;
                        ClipInfos& operator=(const ClipInfos &) = default ;
                        ClipInfos& operator=(ClipInfos &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->from_ == nullptr
        && this->score_ == nullptr && this->text_ == nullptr && this->to_ == nullptr && this->type_ == nullptr; };
                        // from Field Functions 
                        bool hasFrom() const { return this->from_ != nullptr;};
                        void deleteFrom() { this->from_ = nullptr;};
                        inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
                        inline ClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                        // score Field Functions 
                        bool hasScore() const { return this->score_ != nullptr;};
                        void deleteScore() { this->score_ = nullptr;};
                        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                        inline ClipInfos& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                        // text Field Functions 
                        bool hasText() const { return this->text_ != nullptr;};
                        void deleteText() { this->text_ = nullptr;};
                        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
                        inline ClipInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


                        // to Field Functions 
                        bool hasTo() const { return this->to_ != nullptr;};
                        void deleteTo() { this->to_ = nullptr;};
                        inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
                        inline ClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                        // type Field Functions 
                        bool hasType() const { return this->type_ != nullptr;};
                        void deleteType() { this->type_ = nullptr;};
                        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                        inline ClipInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                      protected:
                        shared_ptr<double> from_ {};
                        shared_ptr<double> score_ {};
                        shared_ptr<string> text_ {};
                        shared_ptr<double> to_ {};
                        shared_ptr<string> type_ {};
                      };

                      class Article : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const Article& obj) { 
                          DARABONBA_PTR_TO_JSON(DocId, docId_);
                          DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                          DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                          DARABONBA_PTR_TO_JSON(Summary, summary_);
                          DARABONBA_PTR_TO_JSON(Title, title_);
                          DARABONBA_PTR_TO_JSON(Url, url_);
                        };
                        friend void from_json(const Darabonba::Json& j, Article& obj) { 
                          DARABONBA_PTR_FROM_JSON(DocId, docId_);
                          DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                          DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                          DARABONBA_PTR_FROM_JSON(Summary, summary_);
                          DARABONBA_PTR_FROM_JSON(Title, title_);
                          DARABONBA_PTR_FROM_JSON(Url, url_);
                        };
                        Article() = default ;
                        Article(const Article &) = default ;
                        Article(Article &&) = default ;
                        Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~Article() = default ;
                        Article& operator=(const Article &) = default ;
                        Article& operator=(Article &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                        // docId Field Functions 
                        bool hasDocId() const { return this->docId_ != nullptr;};
                        void deleteDocId() { this->docId_ = nullptr;};
                        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                        inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                        // docUuid Field Functions 
                        bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                        void deleteDocUuid() { this->docUuid_ = nullptr;};
                        inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                        inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                        // searchSourceName Field Functions 
                        bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                        void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                        inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                        inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                        // summary Field Functions 
                        bool hasSummary() const { return this->summary_ != nullptr;};
                        void deleteSummary() { this->summary_ = nullptr;};
                        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                        inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                        // title Field Functions 
                        bool hasTitle() const { return this->title_ != nullptr;};
                        void deleteTitle() { this->title_ = nullptr;};
                        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                        inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                        // url Field Functions 
                        bool hasUrl() const { return this->url_ != nullptr;};
                        void deleteUrl() { this->url_ = nullptr;};
                        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                        inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                      protected:
                        shared_ptr<string> docId_ {};
                        shared_ptr<string> docUuid_ {};
                        shared_ptr<string> searchSourceName_ {};
                        shared_ptr<string> summary_ {};
                        shared_ptr<string> title_ {};
                        shared_ptr<string> url_ {};
                      };

                      virtual bool empty() const override { return this->article_ == nullptr
        && this->clipInfos_ == nullptr && this->fileUrl_ == nullptr && this->mediaId_ == nullptr; };
                      // article Field Functions 
                      bool hasArticle() const { return this->article_ != nullptr;};
                      void deleteArticle() { this->article_ = nullptr;};
                      inline const SearchResult::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, SearchResult::Article) };
                      inline SearchResult::Article getArticle() { DARABONBA_PTR_GET(article_, SearchResult::Article) };
                      inline SearchResult& setArticle(const SearchResult::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                      inline SearchResult& setArticle(SearchResult::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                      // clipInfos Field Functions 
                      bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
                      void deleteClipInfos() { this->clipInfos_ = nullptr;};
                      inline const vector<SearchResult::ClipInfos> & getClipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<SearchResult::ClipInfos>) };
                      inline vector<SearchResult::ClipInfos> getClipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<SearchResult::ClipInfos>) };
                      inline SearchResult& setClipInfos(const vector<SearchResult::ClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
                      inline SearchResult& setClipInfos(vector<SearchResult::ClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


                      // fileUrl Field Functions 
                      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                      void deleteFileUrl() { this->fileUrl_ = nullptr;};
                      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                      inline SearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                      // mediaId Field Functions 
                      bool hasMediaId() const { return this->mediaId_ != nullptr;};
                      void deleteMediaId() { this->mediaId_ = nullptr;};
                      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                      inline SearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                    protected:
                      shared_ptr<SearchResult::Article> article_ {};
                      shared_ptr<vector<SearchResult::ClipInfos>> clipInfos_ {};
                      shared_ptr<string> fileUrl_ {};
                      shared_ptr<string> mediaId_ {};
                    };

                    virtual bool empty() const override { return this->current_ == nullptr
        && this->searchResult_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
                    // current Field Functions 
                    bool hasCurrent() const { return this->current_ != nullptr;};
                    void deleteCurrent() { this->current_ = nullptr;};
                    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
                    inline AudioSearchResult& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


                    // searchResult Field Functions 
                    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                    void deleteSearchResult() { this->searchResult_ = nullptr;};
                    inline const AudioSearchResult::SearchResult & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, AudioSearchResult::SearchResult) };
                    inline AudioSearchResult::SearchResult getSearchResult() { DARABONBA_PTR_GET(searchResult_, AudioSearchResult::SearchResult) };
                    inline AudioSearchResult& setSearchResult(const AudioSearchResult::SearchResult & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                    inline AudioSearchResult& setSearchResult(AudioSearchResult::SearchResult && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


                    // size Field Functions 
                    bool hasSize() const { return this->size_ != nullptr;};
                    void deleteSize() { this->size_ = nullptr;};
                    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
                    inline AudioSearchResult& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


                    // total Field Functions 
                    bool hasTotal() const { return this->total_ != nullptr;};
                    void deleteTotal() { this->total_ = nullptr;};
                    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
                    inline AudioSearchResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


                  protected:
                    shared_ptr<int32_t> current_ {};
                    shared_ptr<AudioSearchResult::SearchResult> searchResult_ {};
                    shared_ptr<int32_t> size_ {};
                    shared_ptr<int32_t> total_ {};
                  };

                  virtual bool empty() const override { return this->audioSearchResult_ == nullptr
        && this->imageSearchResult_ == nullptr && this->textSearchResult_ == nullptr && this->topic_ == nullptr && this->videoSearchResult_ == nullptr; };
                  // audioSearchResult Field Functions 
                  bool hasAudioSearchResult() const { return this->audioSearchResult_ != nullptr;};
                  void deleteAudioSearchResult() { this->audioSearchResult_ = nullptr;};
                  inline const ClusterTopics::AudioSearchResult & getAudioSearchResult() const { DARABONBA_PTR_GET_CONST(audioSearchResult_, ClusterTopics::AudioSearchResult) };
                  inline ClusterTopics::AudioSearchResult getAudioSearchResult() { DARABONBA_PTR_GET(audioSearchResult_, ClusterTopics::AudioSearchResult) };
                  inline ClusterTopics& setAudioSearchResult(const ClusterTopics::AudioSearchResult & audioSearchResult) { DARABONBA_PTR_SET_VALUE(audioSearchResult_, audioSearchResult) };
                  inline ClusterTopics& setAudioSearchResult(ClusterTopics::AudioSearchResult && audioSearchResult) { DARABONBA_PTR_SET_RVALUE(audioSearchResult_, audioSearchResult) };


                  // imageSearchResult Field Functions 
                  bool hasImageSearchResult() const { return this->imageSearchResult_ != nullptr;};
                  void deleteImageSearchResult() { this->imageSearchResult_ = nullptr;};
                  inline const ClusterTopics::ImageSearchResult & getImageSearchResult() const { DARABONBA_PTR_GET_CONST(imageSearchResult_, ClusterTopics::ImageSearchResult) };
                  inline ClusterTopics::ImageSearchResult getImageSearchResult() { DARABONBA_PTR_GET(imageSearchResult_, ClusterTopics::ImageSearchResult) };
                  inline ClusterTopics& setImageSearchResult(const ClusterTopics::ImageSearchResult & imageSearchResult) { DARABONBA_PTR_SET_VALUE(imageSearchResult_, imageSearchResult) };
                  inline ClusterTopics& setImageSearchResult(ClusterTopics::ImageSearchResult && imageSearchResult) { DARABONBA_PTR_SET_RVALUE(imageSearchResult_, imageSearchResult) };


                  // textSearchResult Field Functions 
                  bool hasTextSearchResult() const { return this->textSearchResult_ != nullptr;};
                  void deleteTextSearchResult() { this->textSearchResult_ = nullptr;};
                  inline const ClusterTopics::TextSearchResult & getTextSearchResult() const { DARABONBA_PTR_GET_CONST(textSearchResult_, ClusterTopics::TextSearchResult) };
                  inline ClusterTopics::TextSearchResult getTextSearchResult() { DARABONBA_PTR_GET(textSearchResult_, ClusterTopics::TextSearchResult) };
                  inline ClusterTopics& setTextSearchResult(const ClusterTopics::TextSearchResult & textSearchResult) { DARABONBA_PTR_SET_VALUE(textSearchResult_, textSearchResult) };
                  inline ClusterTopics& setTextSearchResult(ClusterTopics::TextSearchResult && textSearchResult) { DARABONBA_PTR_SET_RVALUE(textSearchResult_, textSearchResult) };


                  // topic Field Functions 
                  bool hasTopic() const { return this->topic_ != nullptr;};
                  void deleteTopic() { this->topic_ = nullptr;};
                  inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
                  inline ClusterTopics& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


                  // videoSearchResult Field Functions 
                  bool hasVideoSearchResult() const { return this->videoSearchResult_ != nullptr;};
                  void deleteVideoSearchResult() { this->videoSearchResult_ = nullptr;};
                  inline const ClusterTopics::VideoSearchResult & getVideoSearchResult() const { DARABONBA_PTR_GET_CONST(videoSearchResult_, ClusterTopics::VideoSearchResult) };
                  inline ClusterTopics::VideoSearchResult getVideoSearchResult() { DARABONBA_PTR_GET(videoSearchResult_, ClusterTopics::VideoSearchResult) };
                  inline ClusterTopics& setVideoSearchResult(const ClusterTopics::VideoSearchResult & videoSearchResult) { DARABONBA_PTR_SET_VALUE(videoSearchResult_, videoSearchResult) };
                  inline ClusterTopics& setVideoSearchResult(ClusterTopics::VideoSearchResult && videoSearchResult) { DARABONBA_PTR_SET_RVALUE(videoSearchResult_, videoSearchResult) };


                protected:
                  shared_ptr<ClusterTopics::AudioSearchResult> audioSearchResult_ {};
                  shared_ptr<ClusterTopics::ImageSearchResult> imageSearchResult_ {};
                  shared_ptr<ClusterTopics::TextSearchResult> textSearchResult_ {};
                  shared_ptr<string> topic_ {};
                  shared_ptr<ClusterTopics::VideoSearchResult> videoSearchResult_ {};
                };

                virtual bool empty() const override { return this->clusterTopics_ == nullptr
        && this->generateFinished_ == nullptr && this->textGenerate_ == nullptr; };
                // clusterTopics Field Functions 
                bool hasClusterTopics() const { return this->clusterTopics_ != nullptr;};
                void deleteClusterTopics() { this->clusterTopics_ = nullptr;};
                inline const vector<ClusterTopicResult::ClusterTopics> & getClusterTopics() const { DARABONBA_PTR_GET_CONST(clusterTopics_, vector<ClusterTopicResult::ClusterTopics>) };
                inline vector<ClusterTopicResult::ClusterTopics> getClusterTopics() { DARABONBA_PTR_GET(clusterTopics_, vector<ClusterTopicResult::ClusterTopics>) };
                inline ClusterTopicResult& setClusterTopics(const vector<ClusterTopicResult::ClusterTopics> & clusterTopics) { DARABONBA_PTR_SET_VALUE(clusterTopics_, clusterTopics) };
                inline ClusterTopicResult& setClusterTopics(vector<ClusterTopicResult::ClusterTopics> && clusterTopics) { DARABONBA_PTR_SET_RVALUE(clusterTopics_, clusterTopics) };


                // generateFinished Field Functions 
                bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
                void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
                inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
                inline ClusterTopicResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


                // textGenerate Field Functions 
                bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
                void deleteTextGenerate() { this->textGenerate_ = nullptr;};
                inline string getTextGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
                inline ClusterTopicResult& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


              protected:
                shared_ptr<vector<ClusterTopicResult::ClusterTopics>> clusterTopics_ {};
                shared_ptr<bool> generateFinished_ {};
                shared_ptr<string> textGenerate_ {};
              };

              class AudioSearchResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const AudioSearchResult& obj) { 
                  DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
                };
                friend void from_json(const Darabonba::Json& j, AudioSearchResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
                };
                AudioSearchResult() = default ;
                AudioSearchResult(const AudioSearchResult &) = default ;
                AudioSearchResult(AudioSearchResult &&) = default ;
                AudioSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~AudioSearchResult() = default ;
                AudioSearchResult& operator=(const AudioSearchResult &) = default ;
                AudioSearchResult& operator=(AudioSearchResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SearchResult : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
                    DARABONBA_PTR_TO_JSON(Article, article_);
                    DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
                    DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
                    DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
                    DARABONBA_PTR_TO_JSON(TraceabilityId, traceabilityId_);
                  };
                  friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                    DARABONBA_PTR_FROM_JSON(Article, article_);
                    DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
                    DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
                    DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
                    DARABONBA_PTR_FROM_JSON(TraceabilityId, traceabilityId_);
                  };
                  SearchResult() = default ;
                  SearchResult(const SearchResult &) = default ;
                  SearchResult(SearchResult &&) = default ;
                  SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SearchResult() = default ;
                  SearchResult& operator=(const SearchResult &) = default ;
                  SearchResult& operator=(SearchResult &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class ClipInfos : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const ClipInfos& obj) { 
                      DARABONBA_PTR_TO_JSON(From, from_);
                      DARABONBA_PTR_TO_JSON(Score, score_);
                      DARABONBA_PTR_TO_JSON(Text, text_);
                      DARABONBA_PTR_TO_JSON(To, to_);
                      DARABONBA_PTR_TO_JSON(Type, type_);
                    };
                    friend void from_json(const Darabonba::Json& j, ClipInfos& obj) { 
                      DARABONBA_PTR_FROM_JSON(From, from_);
                      DARABONBA_PTR_FROM_JSON(Score, score_);
                      DARABONBA_PTR_FROM_JSON(Text, text_);
                      DARABONBA_PTR_FROM_JSON(To, to_);
                      DARABONBA_PTR_FROM_JSON(Type, type_);
                    };
                    ClipInfos() = default ;
                    ClipInfos(const ClipInfos &) = default ;
                    ClipInfos(ClipInfos &&) = default ;
                    ClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~ClipInfos() = default ;
                    ClipInfos& operator=(const ClipInfos &) = default ;
                    ClipInfos& operator=(ClipInfos &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->from_ == nullptr
        && this->score_ == nullptr && this->text_ == nullptr && this->to_ == nullptr && this->type_ == nullptr; };
                    // from Field Functions 
                    bool hasFrom() const { return this->from_ != nullptr;};
                    void deleteFrom() { this->from_ = nullptr;};
                    inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
                    inline ClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                    // score Field Functions 
                    bool hasScore() const { return this->score_ != nullptr;};
                    void deleteScore() { this->score_ = nullptr;};
                    inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
                    inline ClipInfos& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                    // text Field Functions 
                    bool hasText() const { return this->text_ != nullptr;};
                    void deleteText() { this->text_ = nullptr;};
                    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
                    inline ClipInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


                    // to Field Functions 
                    bool hasTo() const { return this->to_ != nullptr;};
                    void deleteTo() { this->to_ = nullptr;};
                    inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
                    inline ClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                    // type Field Functions 
                    bool hasType() const { return this->type_ != nullptr;};
                    void deleteType() { this->type_ = nullptr;};
                    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                    inline ClipInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                  protected:
                    shared_ptr<double> from_ {};
                    shared_ptr<double> score_ {};
                    shared_ptr<string> text_ {};
                    shared_ptr<double> to_ {};
                    shared_ptr<string> type_ {};
                  };

                  class Article : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Article& obj) { 
                      DARABONBA_PTR_TO_JSON(DocId, docId_);
                      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                      DARABONBA_PTR_TO_JSON(Summary, summary_);
                      DARABONBA_PTR_TO_JSON(Title, title_);
                      DARABONBA_PTR_TO_JSON(Url, url_);
                    };
                    friend void from_json(const Darabonba::Json& j, Article& obj) { 
                      DARABONBA_PTR_FROM_JSON(DocId, docId_);
                      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                      DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                      DARABONBA_PTR_FROM_JSON(Summary, summary_);
                      DARABONBA_PTR_FROM_JSON(Title, title_);
                      DARABONBA_PTR_FROM_JSON(Url, url_);
                    };
                    Article() = default ;
                    Article(const Article &) = default ;
                    Article(Article &&) = default ;
                    Article(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Article() = default ;
                    Article& operator=(const Article &) = default ;
                    Article& operator=(Article &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->searchSourceName_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
                    // docId Field Functions 
                    bool hasDocId() const { return this->docId_ != nullptr;};
                    void deleteDocId() { this->docId_ = nullptr;};
                    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
                    inline Article& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


                    // docUuid Field Functions 
                    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
                    void deleteDocUuid() { this->docUuid_ = nullptr;};
                    inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
                    inline Article& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


                    // searchSourceName Field Functions 
                    bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
                    void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
                    inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
                    inline Article& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


                    // summary Field Functions 
                    bool hasSummary() const { return this->summary_ != nullptr;};
                    void deleteSummary() { this->summary_ = nullptr;};
                    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
                    inline Article& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


                    // title Field Functions 
                    bool hasTitle() const { return this->title_ != nullptr;};
                    void deleteTitle() { this->title_ = nullptr;};
                    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                    inline Article& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


                    // url Field Functions 
                    bool hasUrl() const { return this->url_ != nullptr;};
                    void deleteUrl() { this->url_ = nullptr;};
                    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                    inline Article& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


                  protected:
                    shared_ptr<string> docId_ {};
                    shared_ptr<string> docUuid_ {};
                    shared_ptr<string> searchSourceName_ {};
                    shared_ptr<string> summary_ {};
                    shared_ptr<string> title_ {};
                    shared_ptr<string> url_ {};
                  };

                  virtual bool empty() const override { return this->article_ == nullptr
        && this->clipInfos_ == nullptr && this->fileUrl_ == nullptr && this->mediaId_ == nullptr && this->traceabilityId_ == nullptr; };
                  // article Field Functions 
                  bool hasArticle() const { return this->article_ != nullptr;};
                  void deleteArticle() { this->article_ = nullptr;};
                  inline const SearchResult::Article & getArticle() const { DARABONBA_PTR_GET_CONST(article_, SearchResult::Article) };
                  inline SearchResult::Article getArticle() { DARABONBA_PTR_GET(article_, SearchResult::Article) };
                  inline SearchResult& setArticle(const SearchResult::Article & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
                  inline SearchResult& setArticle(SearchResult::Article && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


                  // clipInfos Field Functions 
                  bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
                  void deleteClipInfos() { this->clipInfos_ = nullptr;};
                  inline const vector<SearchResult::ClipInfos> & getClipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<SearchResult::ClipInfos>) };
                  inline vector<SearchResult::ClipInfos> getClipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<SearchResult::ClipInfos>) };
                  inline SearchResult& setClipInfos(const vector<SearchResult::ClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
                  inline SearchResult& setClipInfos(vector<SearchResult::ClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


                  // fileUrl Field Functions 
                  bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
                  void deleteFileUrl() { this->fileUrl_ = nullptr;};
                  inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
                  inline SearchResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


                  // mediaId Field Functions 
                  bool hasMediaId() const { return this->mediaId_ != nullptr;};
                  void deleteMediaId() { this->mediaId_ = nullptr;};
                  inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
                  inline SearchResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


                  // traceabilityId Field Functions 
                  bool hasTraceabilityId() const { return this->traceabilityId_ != nullptr;};
                  void deleteTraceabilityId() { this->traceabilityId_ = nullptr;};
                  inline string getTraceabilityId() const { DARABONBA_PTR_GET_DEFAULT(traceabilityId_, "") };
                  inline SearchResult& setTraceabilityId(string traceabilityId) { DARABONBA_PTR_SET_VALUE(traceabilityId_, traceabilityId) };


                protected:
                  shared_ptr<SearchResult::Article> article_ {};
                  shared_ptr<vector<SearchResult::ClipInfos>> clipInfos_ {};
                  shared_ptr<string> fileUrl_ {};
                  shared_ptr<string> mediaId_ {};
                  shared_ptr<string> traceabilityId_ {};
                };

                virtual bool empty() const override { return this->searchResult_ == nullptr; };
                // searchResult Field Functions 
                bool hasSearchResult() const { return this->searchResult_ != nullptr;};
                void deleteSearchResult() { this->searchResult_ = nullptr;};
                inline const vector<AudioSearchResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<AudioSearchResult::SearchResult>) };
                inline vector<AudioSearchResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<AudioSearchResult::SearchResult>) };
                inline AudioSearchResult& setSearchResult(const vector<AudioSearchResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
                inline AudioSearchResult& setSearchResult(vector<AudioSearchResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


              protected:
                shared_ptr<vector<AudioSearchResult::SearchResult>> searchResult_ {};
              };

              virtual bool empty() const override { return this->audioSearchResult_ == nullptr
        && this->clusterTopicResult_ == nullptr && this->excerptResult_ == nullptr && this->imageSearchResult_ == nullptr && this->newsElementResult_ == nullptr && this->textGenerateResult_ == nullptr
        && this->textSearchResult_ == nullptr && this->timelineResult_ == nullptr && this->videoSearchResult_ == nullptr; };
              // audioSearchResult Field Functions 
              bool hasAudioSearchResult() const { return this->audioSearchResult_ != nullptr;};
              void deleteAudioSearchResult() { this->audioSearchResult_ = nullptr;};
              inline const GeneratedContent::AudioSearchResult & getAudioSearchResult() const { DARABONBA_PTR_GET_CONST(audioSearchResult_, GeneratedContent::AudioSearchResult) };
              inline GeneratedContent::AudioSearchResult getAudioSearchResult() { DARABONBA_PTR_GET(audioSearchResult_, GeneratedContent::AudioSearchResult) };
              inline GeneratedContent& setAudioSearchResult(const GeneratedContent::AudioSearchResult & audioSearchResult) { DARABONBA_PTR_SET_VALUE(audioSearchResult_, audioSearchResult) };
              inline GeneratedContent& setAudioSearchResult(GeneratedContent::AudioSearchResult && audioSearchResult) { DARABONBA_PTR_SET_RVALUE(audioSearchResult_, audioSearchResult) };


              // clusterTopicResult Field Functions 
              bool hasClusterTopicResult() const { return this->clusterTopicResult_ != nullptr;};
              void deleteClusterTopicResult() { this->clusterTopicResult_ = nullptr;};
              inline const GeneratedContent::ClusterTopicResult & getClusterTopicResult() const { DARABONBA_PTR_GET_CONST(clusterTopicResult_, GeneratedContent::ClusterTopicResult) };
              inline GeneratedContent::ClusterTopicResult getClusterTopicResult() { DARABONBA_PTR_GET(clusterTopicResult_, GeneratedContent::ClusterTopicResult) };
              inline GeneratedContent& setClusterTopicResult(const GeneratedContent::ClusterTopicResult & clusterTopicResult) { DARABONBA_PTR_SET_VALUE(clusterTopicResult_, clusterTopicResult) };
              inline GeneratedContent& setClusterTopicResult(GeneratedContent::ClusterTopicResult && clusterTopicResult) { DARABONBA_PTR_SET_RVALUE(clusterTopicResult_, clusterTopicResult) };


              // excerptResult Field Functions 
              bool hasExcerptResult() const { return this->excerptResult_ != nullptr;};
              void deleteExcerptResult() { this->excerptResult_ = nullptr;};
              inline const GeneratedContent::ExcerptResult & getExcerptResult() const { DARABONBA_PTR_GET_CONST(excerptResult_, GeneratedContent::ExcerptResult) };
              inline GeneratedContent::ExcerptResult getExcerptResult() { DARABONBA_PTR_GET(excerptResult_, GeneratedContent::ExcerptResult) };
              inline GeneratedContent& setExcerptResult(const GeneratedContent::ExcerptResult & excerptResult) { DARABONBA_PTR_SET_VALUE(excerptResult_, excerptResult) };
              inline GeneratedContent& setExcerptResult(GeneratedContent::ExcerptResult && excerptResult) { DARABONBA_PTR_SET_RVALUE(excerptResult_, excerptResult) };


              // imageSearchResult Field Functions 
              bool hasImageSearchResult() const { return this->imageSearchResult_ != nullptr;};
              void deleteImageSearchResult() { this->imageSearchResult_ = nullptr;};
              inline const GeneratedContent::ImageSearchResult & getImageSearchResult() const { DARABONBA_PTR_GET_CONST(imageSearchResult_, GeneratedContent::ImageSearchResult) };
              inline GeneratedContent::ImageSearchResult getImageSearchResult() { DARABONBA_PTR_GET(imageSearchResult_, GeneratedContent::ImageSearchResult) };
              inline GeneratedContent& setImageSearchResult(const GeneratedContent::ImageSearchResult & imageSearchResult) { DARABONBA_PTR_SET_VALUE(imageSearchResult_, imageSearchResult) };
              inline GeneratedContent& setImageSearchResult(GeneratedContent::ImageSearchResult && imageSearchResult) { DARABONBA_PTR_SET_RVALUE(imageSearchResult_, imageSearchResult) };


              // newsElementResult Field Functions 
              bool hasNewsElementResult() const { return this->newsElementResult_ != nullptr;};
              void deleteNewsElementResult() { this->newsElementResult_ = nullptr;};
              inline const GeneratedContent::NewsElementResult & getNewsElementResult() const { DARABONBA_PTR_GET_CONST(newsElementResult_, GeneratedContent::NewsElementResult) };
              inline GeneratedContent::NewsElementResult getNewsElementResult() { DARABONBA_PTR_GET(newsElementResult_, GeneratedContent::NewsElementResult) };
              inline GeneratedContent& setNewsElementResult(const GeneratedContent::NewsElementResult & newsElementResult) { DARABONBA_PTR_SET_VALUE(newsElementResult_, newsElementResult) };
              inline GeneratedContent& setNewsElementResult(GeneratedContent::NewsElementResult && newsElementResult) { DARABONBA_PTR_SET_RVALUE(newsElementResult_, newsElementResult) };


              // textGenerateResult Field Functions 
              bool hasTextGenerateResult() const { return this->textGenerateResult_ != nullptr;};
              void deleteTextGenerateResult() { this->textGenerateResult_ = nullptr;};
              inline const GeneratedContent::TextGenerateResult & getTextGenerateResult() const { DARABONBA_PTR_GET_CONST(textGenerateResult_, GeneratedContent::TextGenerateResult) };
              inline GeneratedContent::TextGenerateResult getTextGenerateResult() { DARABONBA_PTR_GET(textGenerateResult_, GeneratedContent::TextGenerateResult) };
              inline GeneratedContent& setTextGenerateResult(const GeneratedContent::TextGenerateResult & textGenerateResult) { DARABONBA_PTR_SET_VALUE(textGenerateResult_, textGenerateResult) };
              inline GeneratedContent& setTextGenerateResult(GeneratedContent::TextGenerateResult && textGenerateResult) { DARABONBA_PTR_SET_RVALUE(textGenerateResult_, textGenerateResult) };


              // textSearchResult Field Functions 
              bool hasTextSearchResult() const { return this->textSearchResult_ != nullptr;};
              void deleteTextSearchResult() { this->textSearchResult_ = nullptr;};
              inline const GeneratedContent::TextSearchResult & getTextSearchResult() const { DARABONBA_PTR_GET_CONST(textSearchResult_, GeneratedContent::TextSearchResult) };
              inline GeneratedContent::TextSearchResult getTextSearchResult() { DARABONBA_PTR_GET(textSearchResult_, GeneratedContent::TextSearchResult) };
              inline GeneratedContent& setTextSearchResult(const GeneratedContent::TextSearchResult & textSearchResult) { DARABONBA_PTR_SET_VALUE(textSearchResult_, textSearchResult) };
              inline GeneratedContent& setTextSearchResult(GeneratedContent::TextSearchResult && textSearchResult) { DARABONBA_PTR_SET_RVALUE(textSearchResult_, textSearchResult) };


              // timelineResult Field Functions 
              bool hasTimelineResult() const { return this->timelineResult_ != nullptr;};
              void deleteTimelineResult() { this->timelineResult_ = nullptr;};
              inline const GeneratedContent::TimelineResult & getTimelineResult() const { DARABONBA_PTR_GET_CONST(timelineResult_, GeneratedContent::TimelineResult) };
              inline GeneratedContent::TimelineResult getTimelineResult() { DARABONBA_PTR_GET(timelineResult_, GeneratedContent::TimelineResult) };
              inline GeneratedContent& setTimelineResult(const GeneratedContent::TimelineResult & timelineResult) { DARABONBA_PTR_SET_VALUE(timelineResult_, timelineResult) };
              inline GeneratedContent& setTimelineResult(GeneratedContent::TimelineResult && timelineResult) { DARABONBA_PTR_SET_RVALUE(timelineResult_, timelineResult) };


              // videoSearchResult Field Functions 
              bool hasVideoSearchResult() const { return this->videoSearchResult_ != nullptr;};
              void deleteVideoSearchResult() { this->videoSearchResult_ = nullptr;};
              inline const GeneratedContent::VideoSearchResult & getVideoSearchResult() const { DARABONBA_PTR_GET_CONST(videoSearchResult_, GeneratedContent::VideoSearchResult) };
              inline GeneratedContent::VideoSearchResult getVideoSearchResult() { DARABONBA_PTR_GET(videoSearchResult_, GeneratedContent::VideoSearchResult) };
              inline GeneratedContent& setVideoSearchResult(const GeneratedContent::VideoSearchResult & videoSearchResult) { DARABONBA_PTR_SET_VALUE(videoSearchResult_, videoSearchResult) };
              inline GeneratedContent& setVideoSearchResult(GeneratedContent::VideoSearchResult && videoSearchResult) { DARABONBA_PTR_SET_RVALUE(videoSearchResult_, videoSearchResult) };


            protected:
              shared_ptr<GeneratedContent::AudioSearchResult> audioSearchResult_ {};
              shared_ptr<GeneratedContent::ClusterTopicResult> clusterTopicResult_ {};
              shared_ptr<GeneratedContent::ExcerptResult> excerptResult_ {};
              shared_ptr<GeneratedContent::ImageSearchResult> imageSearchResult_ {};
              shared_ptr<GeneratedContent::NewsElementResult> newsElementResult_ {};
              shared_ptr<GeneratedContent::TextGenerateResult> textGenerateResult_ {};
              shared_ptr<GeneratedContent::TextSearchResult> textSearchResult_ {};
              shared_ptr<GeneratedContent::TimelineResult> timelineResult_ {};
              shared_ptr<GeneratedContent::VideoSearchResult> videoSearchResult_ {};
            };

            virtual bool empty() const override { return this->askUser_ == nullptr
        && this->askUserKeywords_ == nullptr && this->currentStep_ == nullptr && this->generatedContent_ == nullptr && this->modelId_ == nullptr && this->nextStep_ == nullptr
        && this->recommendSearchQueryList_ == nullptr && this->searchKeywords_ == nullptr && this->searchQueryList_ == nullptr && this->supplementDataType_ == nullptr && this->supplementEnable_ == nullptr
        && this->tokenCalculate_ == nullptr; };
            // askUser Field Functions 
            bool hasAskUser() const { return this->askUser_ != nullptr;};
            void deleteAskUser() { this->askUser_ = nullptr;};
            inline string getAskUser() const { DARABONBA_PTR_GET_DEFAULT(askUser_, "") };
            inline BizContext& setAskUser(string askUser) { DARABONBA_PTR_SET_VALUE(askUser_, askUser) };


            // askUserKeywords Field Functions 
            bool hasAskUserKeywords() const { return this->askUserKeywords_ != nullptr;};
            void deleteAskUserKeywords() { this->askUserKeywords_ = nullptr;};
            inline const vector<string> & getAskUserKeywords() const { DARABONBA_PTR_GET_CONST(askUserKeywords_, vector<string>) };
            inline vector<string> getAskUserKeywords() { DARABONBA_PTR_GET(askUserKeywords_, vector<string>) };
            inline BizContext& setAskUserKeywords(const vector<string> & askUserKeywords) { DARABONBA_PTR_SET_VALUE(askUserKeywords_, askUserKeywords) };
            inline BizContext& setAskUserKeywords(vector<string> && askUserKeywords) { DARABONBA_PTR_SET_RVALUE(askUserKeywords_, askUserKeywords) };


            // currentStep Field Functions 
            bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
            void deleteCurrentStep() { this->currentStep_ = nullptr;};
            inline string getCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, "") };
            inline BizContext& setCurrentStep(string currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


            // generatedContent Field Functions 
            bool hasGeneratedContent() const { return this->generatedContent_ != nullptr;};
            void deleteGeneratedContent() { this->generatedContent_ = nullptr;};
            inline const BizContext::GeneratedContent & getGeneratedContent() const { DARABONBA_PTR_GET_CONST(generatedContent_, BizContext::GeneratedContent) };
            inline BizContext::GeneratedContent getGeneratedContent() { DARABONBA_PTR_GET(generatedContent_, BizContext::GeneratedContent) };
            inline BizContext& setGeneratedContent(const BizContext::GeneratedContent & generatedContent) { DARABONBA_PTR_SET_VALUE(generatedContent_, generatedContent) };
            inline BizContext& setGeneratedContent(BizContext::GeneratedContent && generatedContent) { DARABONBA_PTR_SET_RVALUE(generatedContent_, generatedContent) };


            // modelId Field Functions 
            bool hasModelId() const { return this->modelId_ != nullptr;};
            void deleteModelId() { this->modelId_ = nullptr;};
            inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
            inline BizContext& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


            // nextStep Field Functions 
            bool hasNextStep() const { return this->nextStep_ != nullptr;};
            void deleteNextStep() { this->nextStep_ = nullptr;};
            inline string getNextStep() const { DARABONBA_PTR_GET_DEFAULT(nextStep_, "") };
            inline BizContext& setNextStep(string nextStep) { DARABONBA_PTR_SET_VALUE(nextStep_, nextStep) };


            // recommendSearchQueryList Field Functions 
            bool hasRecommendSearchQueryList() const { return this->recommendSearchQueryList_ != nullptr;};
            void deleteRecommendSearchQueryList() { this->recommendSearchQueryList_ = nullptr;};
            inline const vector<string> & getRecommendSearchQueryList() const { DARABONBA_PTR_GET_CONST(recommendSearchQueryList_, vector<string>) };
            inline vector<string> getRecommendSearchQueryList() { DARABONBA_PTR_GET(recommendSearchQueryList_, vector<string>) };
            inline BizContext& setRecommendSearchQueryList(const vector<string> & recommendSearchQueryList) { DARABONBA_PTR_SET_VALUE(recommendSearchQueryList_, recommendSearchQueryList) };
            inline BizContext& setRecommendSearchQueryList(vector<string> && recommendSearchQueryList) { DARABONBA_PTR_SET_RVALUE(recommendSearchQueryList_, recommendSearchQueryList) };


            // searchKeywords Field Functions 
            bool hasSearchKeywords() const { return this->searchKeywords_ != nullptr;};
            void deleteSearchKeywords() { this->searchKeywords_ = nullptr;};
            inline const vector<string> & getSearchKeywords() const { DARABONBA_PTR_GET_CONST(searchKeywords_, vector<string>) };
            inline vector<string> getSearchKeywords() { DARABONBA_PTR_GET(searchKeywords_, vector<string>) };
            inline BizContext& setSearchKeywords(const vector<string> & searchKeywords) { DARABONBA_PTR_SET_VALUE(searchKeywords_, searchKeywords) };
            inline BizContext& setSearchKeywords(vector<string> && searchKeywords) { DARABONBA_PTR_SET_RVALUE(searchKeywords_, searchKeywords) };


            // searchQueryList Field Functions 
            bool hasSearchQueryList() const { return this->searchQueryList_ != nullptr;};
            void deleteSearchQueryList() { this->searchQueryList_ = nullptr;};
            inline const vector<string> & getSearchQueryList() const { DARABONBA_PTR_GET_CONST(searchQueryList_, vector<string>) };
            inline vector<string> getSearchQueryList() { DARABONBA_PTR_GET(searchQueryList_, vector<string>) };
            inline BizContext& setSearchQueryList(const vector<string> & searchQueryList) { DARABONBA_PTR_SET_VALUE(searchQueryList_, searchQueryList) };
            inline BizContext& setSearchQueryList(vector<string> && searchQueryList) { DARABONBA_PTR_SET_RVALUE(searchQueryList_, searchQueryList) };


            // supplementDataType Field Functions 
            bool hasSupplementDataType() const { return this->supplementDataType_ != nullptr;};
            void deleteSupplementDataType() { this->supplementDataType_ = nullptr;};
            inline string getSupplementDataType() const { DARABONBA_PTR_GET_DEFAULT(supplementDataType_, "") };
            inline BizContext& setSupplementDataType(string supplementDataType) { DARABONBA_PTR_SET_VALUE(supplementDataType_, supplementDataType) };


            // supplementEnable Field Functions 
            bool hasSupplementEnable() const { return this->supplementEnable_ != nullptr;};
            void deleteSupplementEnable() { this->supplementEnable_ = nullptr;};
            inline bool getSupplementEnable() const { DARABONBA_PTR_GET_DEFAULT(supplementEnable_, false) };
            inline BizContext& setSupplementEnable(bool supplementEnable) { DARABONBA_PTR_SET_VALUE(supplementEnable_, supplementEnable) };


            // tokenCalculate Field Functions 
            bool hasTokenCalculate() const { return this->tokenCalculate_ != nullptr;};
            void deleteTokenCalculate() { this->tokenCalculate_ = nullptr;};
            inline const BizContext::TokenCalculate & getTokenCalculate() const { DARABONBA_PTR_GET_CONST(tokenCalculate_, BizContext::TokenCalculate) };
            inline BizContext::TokenCalculate getTokenCalculate() { DARABONBA_PTR_GET(tokenCalculate_, BizContext::TokenCalculate) };
            inline BizContext& setTokenCalculate(const BizContext::TokenCalculate & tokenCalculate) { DARABONBA_PTR_SET_VALUE(tokenCalculate_, tokenCalculate) };
            inline BizContext& setTokenCalculate(BizContext::TokenCalculate && tokenCalculate) { DARABONBA_PTR_SET_RVALUE(tokenCalculate_, tokenCalculate) };


          protected:
            shared_ptr<string> askUser_ {};
            shared_ptr<vector<string>> askUserKeywords_ {};
            shared_ptr<string> currentStep_ {};
            shared_ptr<BizContext::GeneratedContent> generatedContent_ {};
            shared_ptr<string> modelId_ {};
            shared_ptr<string> nextStep_ {};
            shared_ptr<vector<string>> recommendSearchQueryList_ {};
            shared_ptr<vector<string>> searchKeywords_ {};
            shared_ptr<vector<string>> searchQueryList_ {};
            shared_ptr<string> supplementDataType_ {};
            shared_ptr<bool> supplementEnable_ {};
            shared_ptr<BizContext::TokenCalculate> tokenCalculate_ {};
          };

          virtual bool empty() const override { return this->bizContext_ == nullptr; };
          // bizContext Field Functions 
          bool hasBizContext() const { return this->bizContext_ != nullptr;};
          void deleteBizContext() { this->bizContext_ = nullptr;};
          inline const AgentContext::BizContext & getBizContext() const { DARABONBA_PTR_GET_CONST(bizContext_, AgentContext::BizContext) };
          inline AgentContext::BizContext getBizContext() { DARABONBA_PTR_GET(bizContext_, AgentContext::BizContext) };
          inline AgentContext& setBizContext(const AgentContext::BizContext & bizContext) { DARABONBA_PTR_SET_VALUE(bizContext_, bizContext) };
          inline AgentContext& setBizContext(AgentContext::BizContext && bizContext) { DARABONBA_PTR_SET_RVALUE(bizContext_, bizContext) };


        protected:
          shared_ptr<AgentContext::BizContext> bizContext_ {};
        };

        virtual bool empty() const override { return this->agentContext_ == nullptr
        && this->messages_ == nullptr; };
        // agentContext Field Functions 
        bool hasAgentContext() const { return this->agentContext_ != nullptr;};
        void deleteAgentContext() { this->agentContext_ = nullptr;};
        inline const Output::AgentContext & getAgentContext() const { DARABONBA_PTR_GET_CONST(agentContext_, Output::AgentContext) };
        inline Output::AgentContext getAgentContext() { DARABONBA_PTR_GET(agentContext_, Output::AgentContext) };
        inline Output& setAgentContext(const Output::AgentContext & agentContext) { DARABONBA_PTR_SET_VALUE(agentContext_, agentContext) };
        inline Output& setAgentContext(Output::AgentContext && agentContext) { DARABONBA_PTR_SET_RVALUE(agentContext_, agentContext) };


        // messages Field Functions 
        bool hasMessages() const { return this->messages_ != nullptr;};
        void deleteMessages() { this->messages_ = nullptr;};
        inline const vector<Output::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Output::Messages>) };
        inline vector<Output::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Output::Messages>) };
        inline Output& setMessages(const vector<Output::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
        inline Output& setMessages(vector<Output::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      protected:
        shared_ptr<Output::AgentContext> agentContext_ {};
        shared_ptr<vector<Output::Messages>> messages_ {};
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
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(EventInfo, eventInfo_);
        DARABONBA_PTR_TO_JSON(OriginSessionId, originSessionId_);
        DARABONBA_PTR_TO_JSON(ResponseTime, responseTime_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(EventInfo, eventInfo_);
        DARABONBA_PTR_FROM_JSON(OriginSessionId, originSessionId_);
        DARABONBA_PTR_FROM_JSON(ResponseTime, responseTime_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
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
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->eventInfo_ == nullptr && this->originSessionId_ == nullptr && this->responseTime_ == nullptr
        && this->sessionId_ == nullptr && this->taskId_ == nullptr && this->traceId_ == nullptr; };
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


      // originSessionId Field Functions 
      bool hasOriginSessionId() const { return this->originSessionId_ != nullptr;};
      void deleteOriginSessionId() { this->originSessionId_ = nullptr;};
      inline string getOriginSessionId() const { DARABONBA_PTR_GET_DEFAULT(originSessionId_, "") };
      inline Header& setOriginSessionId(string originSessionId) { DARABONBA_PTR_SET_VALUE(originSessionId_, originSessionId) };


      // responseTime Field Functions 
      bool hasResponseTime() const { return this->responseTime_ != nullptr;};
      void deleteResponseTime() { this->responseTime_ = nullptr;};
      inline int64_t getResponseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0L) };
      inline Header& setResponseTime(int64_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


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
      shared_ptr<string> originSessionId_ {};
      shared_ptr<int64_t> responseTime_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->header_ == nullptr
        && this->payload_ == nullptr && this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunSearchGenerationResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, RunSearchGenerationResponseBody::Header) };
    inline RunSearchGenerationResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, RunSearchGenerationResponseBody::Header) };
    inline RunSearchGenerationResponseBody& setHeader(const RunSearchGenerationResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunSearchGenerationResponseBody& setHeader(RunSearchGenerationResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunSearchGenerationResponseBody::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, RunSearchGenerationResponseBody::Payload) };
    inline RunSearchGenerationResponseBody::Payload getPayload() { DARABONBA_PTR_GET(payload_, RunSearchGenerationResponseBody::Payload) };
    inline RunSearchGenerationResponseBody& setPayload(const RunSearchGenerationResponseBody::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunSearchGenerationResponseBody& setPayload(RunSearchGenerationResponseBody::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunSearchGenerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RunSearchGenerationResponseBody::Header> header_ {};
    shared_ptr<RunSearchGenerationResponseBody::Payload> payload_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
