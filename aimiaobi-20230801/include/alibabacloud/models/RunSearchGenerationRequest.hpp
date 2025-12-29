// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUEST_HPP_
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
  class RunSearchGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentContext, agentContext_);
      DARABONBA_PTR_TO_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentContext, agentContext_);
      DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunSearchGenerationRequest() = default ;
    RunSearchGenerationRequest(const RunSearchGenerationRequest &) = default ;
    RunSearchGenerationRequest(RunSearchGenerationRequest &&) = default ;
    RunSearchGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequest() = default ;
    RunSearchGenerationRequest& operator=(const RunSearchGenerationRequest &) = default ;
    RunSearchGenerationRequest& operator=(RunSearchGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChatConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableThinking, enableThinking_);
        DARABONBA_PTR_TO_JSON(ExcludeGenerateOptions, excludeGenerateOptions_);
        DARABONBA_PTR_TO_JSON(GenerateLevel, generateLevel_);
        DARABONBA_PTR_TO_JSON(GenerateTechnology, generateTechnology_);
        DARABONBA_PTR_TO_JSON(ModelCustomPromptTemplate, modelCustomPromptTemplate_);
        DARABONBA_PTR_TO_JSON(ModelCustomVlPromptTemplate, modelCustomVlPromptTemplate_);
        DARABONBA_PTR_TO_JSON(SearchModels, searchModels_);
        DARABONBA_PTR_TO_JSON(SearchParam, searchParam_);
      };
      friend void from_json(const Darabonba::Json& j, ChatConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableThinking, enableThinking_);
        DARABONBA_PTR_FROM_JSON(ExcludeGenerateOptions, excludeGenerateOptions_);
        DARABONBA_PTR_FROM_JSON(GenerateLevel, generateLevel_);
        DARABONBA_PTR_FROM_JSON(GenerateTechnology, generateTechnology_);
        DARABONBA_PTR_FROM_JSON(ModelCustomPromptTemplate, modelCustomPromptTemplate_);
        DARABONBA_PTR_FROM_JSON(ModelCustomVlPromptTemplate, modelCustomVlPromptTemplate_);
        DARABONBA_PTR_FROM_JSON(SearchModels, searchModels_);
        DARABONBA_PTR_FROM_JSON(SearchParam, searchParam_);
      };
      ChatConfig() = default ;
      ChatConfig(const ChatConfig &) = default ;
      ChatConfig(ChatConfig &&) = default ;
      ChatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatConfig() = default ;
      ChatConfig& operator=(const ChatConfig &) = default ;
      ChatConfig& operator=(ChatConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SearchParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchParam& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(MultimodalSearchTypes, multimodalSearchTypes_);
          DARABONBA_PTR_TO_JSON(SearchAudioMinScore, searchAudioMinScore_);
          DARABONBA_PTR_TO_JSON(SearchImageMinScore, searchImageMinScore_);
          DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
          DARABONBA_PTR_TO_JSON(SearchTextMinScore, searchTextMinScore_);
          DARABONBA_PTR_TO_JSON(SearchVideoMinScore, searchVideoMinScore_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, SearchParam& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(MultimodalSearchTypes, multimodalSearchTypes_);
          DARABONBA_PTR_FROM_JSON(SearchAudioMinScore, searchAudioMinScore_);
          DARABONBA_PTR_FROM_JSON(SearchImageMinScore, searchImageMinScore_);
          DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
          DARABONBA_PTR_FROM_JSON(SearchTextMinScore, searchTextMinScore_);
          DARABONBA_PTR_FROM_JSON(SearchVideoMinScore, searchVideoMinScore_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        SearchParam() = default ;
        SearchParam(const SearchParam &) = default ;
        SearchParam(SearchParam &&) = default ;
        SearchParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchParam() = default ;
        SearchParam& operator=(const SearchParam &) = default ;
        SearchParam& operator=(SearchParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SearchSources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SearchSources& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
          };
          friend void from_json(const Darabonba::Json& j, SearchSources& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
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
        && this->datasetName_ == nullptr; };
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


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> datasetName_ {};
        };

        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->multimodalSearchTypes_ == nullptr && this->searchAudioMinScore_ == nullptr && this->searchImageMinScore_ == nullptr && this->searchSources_ == nullptr && this->searchTextMinScore_ == nullptr
        && this->searchVideoMinScore_ == nullptr && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SearchParam& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // multimodalSearchTypes Field Functions 
        bool hasMultimodalSearchTypes() const { return this->multimodalSearchTypes_ != nullptr;};
        void deleteMultimodalSearchTypes() { this->multimodalSearchTypes_ = nullptr;};
        inline const vector<string> & getMultimodalSearchTypes() const { DARABONBA_PTR_GET_CONST(multimodalSearchTypes_, vector<string>) };
        inline vector<string> getMultimodalSearchTypes() { DARABONBA_PTR_GET(multimodalSearchTypes_, vector<string>) };
        inline SearchParam& setMultimodalSearchTypes(const vector<string> & multimodalSearchTypes) { DARABONBA_PTR_SET_VALUE(multimodalSearchTypes_, multimodalSearchTypes) };
        inline SearchParam& setMultimodalSearchTypes(vector<string> && multimodalSearchTypes) { DARABONBA_PTR_SET_RVALUE(multimodalSearchTypes_, multimodalSearchTypes) };


        // searchAudioMinScore Field Functions 
        bool hasSearchAudioMinScore() const { return this->searchAudioMinScore_ != nullptr;};
        void deleteSearchAudioMinScore() { this->searchAudioMinScore_ = nullptr;};
        inline double getSearchAudioMinScore() const { DARABONBA_PTR_GET_DEFAULT(searchAudioMinScore_, 0.0) };
        inline SearchParam& setSearchAudioMinScore(double searchAudioMinScore) { DARABONBA_PTR_SET_VALUE(searchAudioMinScore_, searchAudioMinScore) };


        // searchImageMinScore Field Functions 
        bool hasSearchImageMinScore() const { return this->searchImageMinScore_ != nullptr;};
        void deleteSearchImageMinScore() { this->searchImageMinScore_ = nullptr;};
        inline double getSearchImageMinScore() const { DARABONBA_PTR_GET_DEFAULT(searchImageMinScore_, 0.0) };
        inline SearchParam& setSearchImageMinScore(double searchImageMinScore) { DARABONBA_PTR_SET_VALUE(searchImageMinScore_, searchImageMinScore) };


        // searchSources Field Functions 
        bool hasSearchSources() const { return this->searchSources_ != nullptr;};
        void deleteSearchSources() { this->searchSources_ = nullptr;};
        inline const vector<SearchParam::SearchSources> & getSearchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<SearchParam::SearchSources>) };
        inline vector<SearchParam::SearchSources> getSearchSources() { DARABONBA_PTR_GET(searchSources_, vector<SearchParam::SearchSources>) };
        inline SearchParam& setSearchSources(const vector<SearchParam::SearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
        inline SearchParam& setSearchSources(vector<SearchParam::SearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


        // searchTextMinScore Field Functions 
        bool hasSearchTextMinScore() const { return this->searchTextMinScore_ != nullptr;};
        void deleteSearchTextMinScore() { this->searchTextMinScore_ = nullptr;};
        inline double getSearchTextMinScore() const { DARABONBA_PTR_GET_DEFAULT(searchTextMinScore_, 0.0) };
        inline SearchParam& setSearchTextMinScore(double searchTextMinScore) { DARABONBA_PTR_SET_VALUE(searchTextMinScore_, searchTextMinScore) };


        // searchVideoMinScore Field Functions 
        bool hasSearchVideoMinScore() const { return this->searchVideoMinScore_ != nullptr;};
        void deleteSearchVideoMinScore() { this->searchVideoMinScore_ = nullptr;};
        inline double getSearchVideoMinScore() const { DARABONBA_PTR_GET_DEFAULT(searchVideoMinScore_, 0.0) };
        inline SearchParam& setSearchVideoMinScore(double searchVideoMinScore) { DARABONBA_PTR_SET_VALUE(searchVideoMinScore_, searchVideoMinScore) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline SearchParam& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<vector<string>> multimodalSearchTypes_ {};
        shared_ptr<double> searchAudioMinScore_ {};
        shared_ptr<double> searchImageMinScore_ {};
        shared_ptr<vector<SearchParam::SearchSources>> searchSources_ {};
        shared_ptr<double> searchTextMinScore_ {};
        shared_ptr<double> searchVideoMinScore_ {};
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->enableThinking_ == nullptr
        && this->excludeGenerateOptions_ == nullptr && this->generateLevel_ == nullptr && this->generateTechnology_ == nullptr && this->modelCustomPromptTemplate_ == nullptr && this->modelCustomVlPromptTemplate_ == nullptr
        && this->searchModels_ == nullptr && this->searchParam_ == nullptr; };
      // enableThinking Field Functions 
      bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
      void deleteEnableThinking() { this->enableThinking_ = nullptr;};
      inline bool getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
      inline ChatConfig& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


      // excludeGenerateOptions Field Functions 
      bool hasExcludeGenerateOptions() const { return this->excludeGenerateOptions_ != nullptr;};
      void deleteExcludeGenerateOptions() { this->excludeGenerateOptions_ = nullptr;};
      inline const vector<string> & getExcludeGenerateOptions() const { DARABONBA_PTR_GET_CONST(excludeGenerateOptions_, vector<string>) };
      inline vector<string> getExcludeGenerateOptions() { DARABONBA_PTR_GET(excludeGenerateOptions_, vector<string>) };
      inline ChatConfig& setExcludeGenerateOptions(const vector<string> & excludeGenerateOptions) { DARABONBA_PTR_SET_VALUE(excludeGenerateOptions_, excludeGenerateOptions) };
      inline ChatConfig& setExcludeGenerateOptions(vector<string> && excludeGenerateOptions) { DARABONBA_PTR_SET_RVALUE(excludeGenerateOptions_, excludeGenerateOptions) };


      // generateLevel Field Functions 
      bool hasGenerateLevel() const { return this->generateLevel_ != nullptr;};
      void deleteGenerateLevel() { this->generateLevel_ = nullptr;};
      inline string getGenerateLevel() const { DARABONBA_PTR_GET_DEFAULT(generateLevel_, "") };
      inline ChatConfig& setGenerateLevel(string generateLevel) { DARABONBA_PTR_SET_VALUE(generateLevel_, generateLevel) };


      // generateTechnology Field Functions 
      bool hasGenerateTechnology() const { return this->generateTechnology_ != nullptr;};
      void deleteGenerateTechnology() { this->generateTechnology_ = nullptr;};
      inline string getGenerateTechnology() const { DARABONBA_PTR_GET_DEFAULT(generateTechnology_, "") };
      inline ChatConfig& setGenerateTechnology(string generateTechnology) { DARABONBA_PTR_SET_VALUE(generateTechnology_, generateTechnology) };


      // modelCustomPromptTemplate Field Functions 
      bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
      void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
      inline string getModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
      inline ChatConfig& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


      // modelCustomVlPromptTemplate Field Functions 
      bool hasModelCustomVlPromptTemplate() const { return this->modelCustomVlPromptTemplate_ != nullptr;};
      void deleteModelCustomVlPromptTemplate() { this->modelCustomVlPromptTemplate_ = nullptr;};
      inline string getModelCustomVlPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomVlPromptTemplate_, "") };
      inline ChatConfig& setModelCustomVlPromptTemplate(string modelCustomVlPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomVlPromptTemplate_, modelCustomVlPromptTemplate) };


      // searchModels Field Functions 
      bool hasSearchModels() const { return this->searchModels_ != nullptr;};
      void deleteSearchModels() { this->searchModels_ = nullptr;};
      inline const vector<string> & getSearchModels() const { DARABONBA_PTR_GET_CONST(searchModels_, vector<string>) };
      inline vector<string> getSearchModels() { DARABONBA_PTR_GET(searchModels_, vector<string>) };
      inline ChatConfig& setSearchModels(const vector<string> & searchModels) { DARABONBA_PTR_SET_VALUE(searchModels_, searchModels) };
      inline ChatConfig& setSearchModels(vector<string> && searchModels) { DARABONBA_PTR_SET_RVALUE(searchModels_, searchModels) };


      // searchParam Field Functions 
      bool hasSearchParam() const { return this->searchParam_ != nullptr;};
      void deleteSearchParam() { this->searchParam_ = nullptr;};
      inline const ChatConfig::SearchParam & getSearchParam() const { DARABONBA_PTR_GET_CONST(searchParam_, ChatConfig::SearchParam) };
      inline ChatConfig::SearchParam getSearchParam() { DARABONBA_PTR_GET(searchParam_, ChatConfig::SearchParam) };
      inline ChatConfig& setSearchParam(const ChatConfig::SearchParam & searchParam) { DARABONBA_PTR_SET_VALUE(searchParam_, searchParam) };
      inline ChatConfig& setSearchParam(ChatConfig::SearchParam && searchParam) { DARABONBA_PTR_SET_RVALUE(searchParam_, searchParam) };


    protected:
      shared_ptr<bool> enableThinking_ {};
      shared_ptr<vector<string>> excludeGenerateOptions_ {};
      shared_ptr<string> generateLevel_ {};
      shared_ptr<string> generateTechnology_ {};
      shared_ptr<string> modelCustomPromptTemplate_ {};
      shared_ptr<string> modelCustomVlPromptTemplate_ {};
      shared_ptr<vector<string>> searchModels_ {};
      shared_ptr<ChatConfig::SearchParam> searchParam_ {};
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
          DARABONBA_PTR_TO_JSON(MultimodalMediaSelection, multimodalMediaSelection_);
          DARABONBA_PTR_TO_JSON(NextStep, nextStep_);
          DARABONBA_PTR_TO_JSON(SkipCurrentSupplement, skipCurrentSupplement_);
          DARABONBA_PTR_TO_JSON(SupplementDataType, supplementDataType_);
          DARABONBA_PTR_TO_JSON(SupplementEnable, supplementEnable_);
          DARABONBA_PTR_TO_JSON(UserBack, userBack_);
          DARABONBA_PTR_TO_JSON(UserBackKeywords, userBackKeywords_);
        };
        friend void from_json(const Darabonba::Json& j, BizContext& obj) { 
          DARABONBA_PTR_FROM_JSON(AskUser, askUser_);
          DARABONBA_PTR_FROM_JSON(AskUserKeywords, askUserKeywords_);
          DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
          DARABONBA_PTR_FROM_JSON(MultimodalMediaSelection, multimodalMediaSelection_);
          DARABONBA_PTR_FROM_JSON(NextStep, nextStep_);
          DARABONBA_PTR_FROM_JSON(SkipCurrentSupplement, skipCurrentSupplement_);
          DARABONBA_PTR_FROM_JSON(SupplementDataType, supplementDataType_);
          DARABONBA_PTR_FROM_JSON(SupplementEnable, supplementEnable_);
          DARABONBA_PTR_FROM_JSON(UserBack, userBack_);
          DARABONBA_PTR_FROM_JSON(UserBackKeywords, userBackKeywords_);
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
        class MultimodalMediaSelection : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MultimodalMediaSelection& obj) { 
            DARABONBA_PTR_TO_JSON(OriginalSessionId, originalSessionId_);
            DARABONBA_PTR_TO_JSON(SearchModel, searchModel_);
            DARABONBA_PTR_TO_JSON(SearchModelDataValue, searchModelDataValue_);
            DARABONBA_PTR_TO_JSON(SelectionType, selectionType_);
            DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
            DARABONBA_PTR_TO_JSON(TextSearchResult, textSearchResult_);
          };
          friend void from_json(const Darabonba::Json& j, MultimodalMediaSelection& obj) { 
            DARABONBA_PTR_FROM_JSON(OriginalSessionId, originalSessionId_);
            DARABONBA_PTR_FROM_JSON(SearchModel, searchModel_);
            DARABONBA_PTR_FROM_JSON(SearchModelDataValue, searchModelDataValue_);
            DARABONBA_PTR_FROM_JSON(SelectionType, selectionType_);
            DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
            DARABONBA_PTR_FROM_JSON(TextSearchResult, textSearchResult_);
          };
          MultimodalMediaSelection() = default ;
          MultimodalMediaSelection(const MultimodalMediaSelection &) = default ;
          MultimodalMediaSelection(MultimodalMediaSelection &&) = default ;
          MultimodalMediaSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MultimodalMediaSelection() = default ;
          MultimodalMediaSelection& operator=(const MultimodalMediaSelection &) = default ;
          MultimodalMediaSelection& operator=(MultimodalMediaSelection &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TextSearchResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TextSearchResult& obj) { 
              DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
            };
            friend void from_json(const Darabonba::Json& j, TextSearchResult& obj) { 
              DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
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
                DARABONBA_PTR_TO_JSON(Chunks, chunks_);
                DARABONBA_PTR_TO_JSON(Content, content_);
                DARABONBA_PTR_TO_JSON(DocId, docId_);
                DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
                DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
                DARABONBA_PTR_TO_JSON(Score, score_);
                DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
                DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
                DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
                DARABONBA_PTR_TO_JSON(Source, source_);
                DARABONBA_PTR_TO_JSON(Summary, summary_);
                DARABONBA_PTR_TO_JSON(Title, title_);
                DARABONBA_PTR_TO_JSON(Url, url_);
              };
              friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
                DARABONBA_PTR_FROM_JSON(Chunks, chunks_);
                DARABONBA_PTR_FROM_JSON(Content, content_);
                DARABONBA_PTR_FROM_JSON(DocId, docId_);
                DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
                DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
                DARABONBA_PTR_FROM_JSON(Score, score_);
                DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
                DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
                DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
                DARABONBA_PTR_FROM_JSON(Source, source_);
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
              virtual bool empty() const override { return this->chunks_ == nullptr
        && this->content_ == nullptr && this->docId_ == nullptr && this->docUuid_ == nullptr && this->pubTime_ == nullptr && this->score_ == nullptr
        && this->searchSource_ == nullptr && this->searchSourceName_ == nullptr && this->searchSourceType_ == nullptr && this->source_ == nullptr && this->summary_ == nullptr
        && this->title_ == nullptr && this->url_ == nullptr; };
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


              // source Field Functions 
              bool hasSource() const { return this->source_ != nullptr;};
              void deleteSource() { this->source_ = nullptr;};
              inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
              inline SearchResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


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
              shared_ptr<vector<string>> chunks_ {};
              shared_ptr<string> content_ {};
              shared_ptr<string> docId_ {};
              shared_ptr<string> docUuid_ {};
              shared_ptr<string> pubTime_ {};
              shared_ptr<float> score_ {};
              shared_ptr<string> searchSource_ {};
              shared_ptr<string> searchSourceName_ {};
              shared_ptr<string> searchSourceType_ {};
              shared_ptr<string> source_ {};
              shared_ptr<string> summary_ {};
              shared_ptr<string> title_ {};
              shared_ptr<string> url_ {};
            };

            virtual bool empty() const override { return this->searchResult_ == nullptr; };
            // searchResult Field Functions 
            bool hasSearchResult() const { return this->searchResult_ != nullptr;};
            void deleteSearchResult() { this->searchResult_ = nullptr;};
            inline const vector<TextSearchResult::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<TextSearchResult::SearchResult>) };
            inline vector<TextSearchResult::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<TextSearchResult::SearchResult>) };
            inline TextSearchResult& setSearchResult(const vector<TextSearchResult::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
            inline TextSearchResult& setSearchResult(vector<TextSearchResult::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


          protected:
            shared_ptr<vector<TextSearchResult::SearchResult>> searchResult_ {};
          };

          virtual bool empty() const override { return this->originalSessionId_ == nullptr
        && this->searchModel_ == nullptr && this->searchModelDataValue_ == nullptr && this->selectionType_ == nullptr && this->sessionId_ == nullptr && this->textSearchResult_ == nullptr; };
          // originalSessionId Field Functions 
          bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
          void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
          inline string getOriginalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
          inline MultimodalMediaSelection& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


          // searchModel Field Functions 
          bool hasSearchModel() const { return this->searchModel_ != nullptr;};
          void deleteSearchModel() { this->searchModel_ = nullptr;};
          inline string getSearchModel() const { DARABONBA_PTR_GET_DEFAULT(searchModel_, "") };
          inline MultimodalMediaSelection& setSearchModel(string searchModel) { DARABONBA_PTR_SET_VALUE(searchModel_, searchModel) };


          // searchModelDataValue Field Functions 
          bool hasSearchModelDataValue() const { return this->searchModelDataValue_ != nullptr;};
          void deleteSearchModelDataValue() { this->searchModelDataValue_ = nullptr;};
          inline string getSearchModelDataValue() const { DARABONBA_PTR_GET_DEFAULT(searchModelDataValue_, "") };
          inline MultimodalMediaSelection& setSearchModelDataValue(string searchModelDataValue) { DARABONBA_PTR_SET_VALUE(searchModelDataValue_, searchModelDataValue) };


          // selectionType Field Functions 
          bool hasSelectionType() const { return this->selectionType_ != nullptr;};
          void deleteSelectionType() { this->selectionType_ = nullptr;};
          inline string getSelectionType() const { DARABONBA_PTR_GET_DEFAULT(selectionType_, "") };
          inline MultimodalMediaSelection& setSelectionType(string selectionType) { DARABONBA_PTR_SET_VALUE(selectionType_, selectionType) };


          // sessionId Field Functions 
          bool hasSessionId() const { return this->sessionId_ != nullptr;};
          void deleteSessionId() { this->sessionId_ = nullptr;};
          inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
          inline MultimodalMediaSelection& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


          // textSearchResult Field Functions 
          bool hasTextSearchResult() const { return this->textSearchResult_ != nullptr;};
          void deleteTextSearchResult() { this->textSearchResult_ = nullptr;};
          inline const MultimodalMediaSelection::TextSearchResult & getTextSearchResult() const { DARABONBA_PTR_GET_CONST(textSearchResult_, MultimodalMediaSelection::TextSearchResult) };
          inline MultimodalMediaSelection::TextSearchResult getTextSearchResult() { DARABONBA_PTR_GET(textSearchResult_, MultimodalMediaSelection::TextSearchResult) };
          inline MultimodalMediaSelection& setTextSearchResult(const MultimodalMediaSelection::TextSearchResult & textSearchResult) { DARABONBA_PTR_SET_VALUE(textSearchResult_, textSearchResult) };
          inline MultimodalMediaSelection& setTextSearchResult(MultimodalMediaSelection::TextSearchResult && textSearchResult) { DARABONBA_PTR_SET_RVALUE(textSearchResult_, textSearchResult) };


        protected:
          shared_ptr<string> originalSessionId_ {};
          shared_ptr<string> searchModel_ {};
          shared_ptr<string> searchModelDataValue_ {};
          shared_ptr<string> selectionType_ {};
          shared_ptr<string> sessionId_ {};
          shared_ptr<MultimodalMediaSelection::TextSearchResult> textSearchResult_ {};
        };

        virtual bool empty() const override { return this->askUser_ == nullptr
        && this->askUserKeywords_ == nullptr && this->currentStep_ == nullptr && this->multimodalMediaSelection_ == nullptr && this->nextStep_ == nullptr && this->skipCurrentSupplement_ == nullptr
        && this->supplementDataType_ == nullptr && this->supplementEnable_ == nullptr && this->userBack_ == nullptr && this->userBackKeywords_ == nullptr; };
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


        // multimodalMediaSelection Field Functions 
        bool hasMultimodalMediaSelection() const { return this->multimodalMediaSelection_ != nullptr;};
        void deleteMultimodalMediaSelection() { this->multimodalMediaSelection_ = nullptr;};
        inline const BizContext::MultimodalMediaSelection & getMultimodalMediaSelection() const { DARABONBA_PTR_GET_CONST(multimodalMediaSelection_, BizContext::MultimodalMediaSelection) };
        inline BizContext::MultimodalMediaSelection getMultimodalMediaSelection() { DARABONBA_PTR_GET(multimodalMediaSelection_, BizContext::MultimodalMediaSelection) };
        inline BizContext& setMultimodalMediaSelection(const BizContext::MultimodalMediaSelection & multimodalMediaSelection) { DARABONBA_PTR_SET_VALUE(multimodalMediaSelection_, multimodalMediaSelection) };
        inline BizContext& setMultimodalMediaSelection(BizContext::MultimodalMediaSelection && multimodalMediaSelection) { DARABONBA_PTR_SET_RVALUE(multimodalMediaSelection_, multimodalMediaSelection) };


        // nextStep Field Functions 
        bool hasNextStep() const { return this->nextStep_ != nullptr;};
        void deleteNextStep() { this->nextStep_ = nullptr;};
        inline string getNextStep() const { DARABONBA_PTR_GET_DEFAULT(nextStep_, "") };
        inline BizContext& setNextStep(string nextStep) { DARABONBA_PTR_SET_VALUE(nextStep_, nextStep) };


        // skipCurrentSupplement Field Functions 
        bool hasSkipCurrentSupplement() const { return this->skipCurrentSupplement_ != nullptr;};
        void deleteSkipCurrentSupplement() { this->skipCurrentSupplement_ = nullptr;};
        inline bool getSkipCurrentSupplement() const { DARABONBA_PTR_GET_DEFAULT(skipCurrentSupplement_, false) };
        inline BizContext& setSkipCurrentSupplement(bool skipCurrentSupplement) { DARABONBA_PTR_SET_VALUE(skipCurrentSupplement_, skipCurrentSupplement) };


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


        // userBack Field Functions 
        bool hasUserBack() const { return this->userBack_ != nullptr;};
        void deleteUserBack() { this->userBack_ = nullptr;};
        inline string getUserBack() const { DARABONBA_PTR_GET_DEFAULT(userBack_, "") };
        inline BizContext& setUserBack(string userBack) { DARABONBA_PTR_SET_VALUE(userBack_, userBack) };


        // userBackKeywords Field Functions 
        bool hasUserBackKeywords() const { return this->userBackKeywords_ != nullptr;};
        void deleteUserBackKeywords() { this->userBackKeywords_ = nullptr;};
        inline const vector<string> & getUserBackKeywords() const { DARABONBA_PTR_GET_CONST(userBackKeywords_, vector<string>) };
        inline vector<string> getUserBackKeywords() { DARABONBA_PTR_GET(userBackKeywords_, vector<string>) };
        inline BizContext& setUserBackKeywords(const vector<string> & userBackKeywords) { DARABONBA_PTR_SET_VALUE(userBackKeywords_, userBackKeywords) };
        inline BizContext& setUserBackKeywords(vector<string> && userBackKeywords) { DARABONBA_PTR_SET_RVALUE(userBackKeywords_, userBackKeywords) };


      protected:
        shared_ptr<string> askUser_ {};
        shared_ptr<vector<string>> askUserKeywords_ {};
        shared_ptr<string> currentStep_ {};
        shared_ptr<BizContext::MultimodalMediaSelection> multimodalMediaSelection_ {};
        shared_ptr<string> nextStep_ {};
        shared_ptr<bool> skipCurrentSupplement_ {};
        shared_ptr<string> supplementDataType_ {};
        shared_ptr<bool> supplementEnable_ {};
        shared_ptr<string> userBack_ {};
        shared_ptr<vector<string>> userBackKeywords_ {};
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
        && this->chatConfig_ == nullptr && this->fileUrl_ == nullptr && this->modelId_ == nullptr && this->originalSessionId_ == nullptr && this->prompt_ == nullptr
        && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // agentContext Field Functions 
    bool hasAgentContext() const { return this->agentContext_ != nullptr;};
    void deleteAgentContext() { this->agentContext_ = nullptr;};
    inline const RunSearchGenerationRequest::AgentContext & getAgentContext() const { DARABONBA_PTR_GET_CONST(agentContext_, RunSearchGenerationRequest::AgentContext) };
    inline RunSearchGenerationRequest::AgentContext getAgentContext() { DARABONBA_PTR_GET(agentContext_, RunSearchGenerationRequest::AgentContext) };
    inline RunSearchGenerationRequest& setAgentContext(const RunSearchGenerationRequest::AgentContext & agentContext) { DARABONBA_PTR_SET_VALUE(agentContext_, agentContext) };
    inline RunSearchGenerationRequest& setAgentContext(RunSearchGenerationRequest::AgentContext && agentContext) { DARABONBA_PTR_SET_RVALUE(agentContext_, agentContext) };


    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline const RunSearchGenerationRequest::ChatConfig & getChatConfig() const { DARABONBA_PTR_GET_CONST(chatConfig_, RunSearchGenerationRequest::ChatConfig) };
    inline RunSearchGenerationRequest::ChatConfig getChatConfig() { DARABONBA_PTR_GET(chatConfig_, RunSearchGenerationRequest::ChatConfig) };
    inline RunSearchGenerationRequest& setChatConfig(const RunSearchGenerationRequest::ChatConfig & chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };
    inline RunSearchGenerationRequest& setChatConfig(RunSearchGenerationRequest::ChatConfig && chatConfig) { DARABONBA_PTR_SET_RVALUE(chatConfig_, chatConfig) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunSearchGenerationRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunSearchGenerationRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string getOriginalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline RunSearchGenerationRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunSearchGenerationRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunSearchGenerationRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunSearchGenerationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<RunSearchGenerationRequest::AgentContext> agentContext_ {};
    shared_ptr<RunSearchGenerationRequest::ChatConfig> chatConfig_ {};
    shared_ptr<string> fileUrl_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> originalSessionId_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
