// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUESRESPONSEBODY_HPP_
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
  class ListSearchTaskDialoguesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTaskDialoguesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTaskDialoguesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSearchTaskDialoguesResponseBody() = default ;
    ListSearchTaskDialoguesResponseBody(const ListSearchTaskDialoguesResponseBody &) = default ;
    ListSearchTaskDialoguesResponseBody(ListSearchTaskDialoguesResponseBody &&) = default ;
    ListSearchTaskDialoguesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTaskDialoguesResponseBody() = default ;
    ListSearchTaskDialoguesResponseBody& operator=(const ListSearchTaskDialoguesResponseBody &) = default ;
    ListSearchTaskDialoguesResponseBody& operator=(ListSearchTaskDialoguesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChatConfig, chatConfig_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DialogueType, dialogueType_);
        DARABONBA_PTR_TO_JSON(GoodText, goodText_);
        DARABONBA_PTR_TO_JSON(OriginSessionId, originSessionId_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(Rating, rating_);
        DARABONBA_PTR_TO_JSON(ResponseBodyStr, responseBodyStr_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfig_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DialogueType, dialogueType_);
        DARABONBA_PTR_FROM_JSON(GoodText, goodText_);
        DARABONBA_PTR_FROM_JSON(OriginSessionId, originSessionId_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(Rating, rating_);
        DARABONBA_PTR_FROM_JSON(ResponseBodyStr, responseBodyStr_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
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
      class ChatConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChatConfig& obj) { 
          DARABONBA_PTR_TO_JSON(DialogueType, dialogueType_);
          DARABONBA_PTR_TO_JSON(EndToEnd, endToEnd_);
          DARABONBA_PTR_TO_JSON(GenerateLevel, generateLevel_);
          DARABONBA_PTR_TO_JSON(GenerateTechnology, generateTechnology_);
          DARABONBA_PTR_TO_JSON(SearchModels, searchModels_);
          DARABONBA_PTR_TO_JSON(SearchParam, searchParam_);
        };
        friend void from_json(const Darabonba::Json& j, ChatConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(DialogueType, dialogueType_);
          DARABONBA_PTR_FROM_JSON(EndToEnd, endToEnd_);
          DARABONBA_PTR_FROM_JSON(GenerateLevel, generateLevel_);
          DARABONBA_PTR_FROM_JSON(GenerateTechnology, generateTechnology_);
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
            DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, SearchParam& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(MultimodalSearchTypes, multimodalSearchTypes_);
            DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
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
            shared_ptr<string> code_ {};
            shared_ptr<string> datasetName_ {};
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->multimodalSearchTypes_ == nullptr && this->searchSources_ == nullptr && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline SearchParam& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // multimodalSearchTypes Field Functions 
          bool hasMultimodalSearchTypes() const { return this->multimodalSearchTypes_ != nullptr;};
          void deleteMultimodalSearchTypes() { this->multimodalSearchTypes_ = nullptr;};
          inline const vector<string> & getMultimodalSearchTypes() const { DARABONBA_PTR_GET_CONST(multimodalSearchTypes_, vector<string>) };
          inline vector<string> getMultimodalSearchTypes() { DARABONBA_PTR_GET(multimodalSearchTypes_, vector<string>) };
          inline SearchParam& setMultimodalSearchTypes(const vector<string> & multimodalSearchTypes) { DARABONBA_PTR_SET_VALUE(multimodalSearchTypes_, multimodalSearchTypes) };
          inline SearchParam& setMultimodalSearchTypes(vector<string> && multimodalSearchTypes) { DARABONBA_PTR_SET_RVALUE(multimodalSearchTypes_, multimodalSearchTypes) };


          // searchSources Field Functions 
          bool hasSearchSources() const { return this->searchSources_ != nullptr;};
          void deleteSearchSources() { this->searchSources_ = nullptr;};
          inline const vector<SearchParam::SearchSources> & getSearchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<SearchParam::SearchSources>) };
          inline vector<SearchParam::SearchSources> getSearchSources() { DARABONBA_PTR_GET(searchSources_, vector<SearchParam::SearchSources>) };
          inline SearchParam& setSearchSources(const vector<SearchParam::SearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
          inline SearchParam& setSearchSources(vector<SearchParam::SearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline SearchParam& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<vector<string>> multimodalSearchTypes_ {};
          shared_ptr<vector<SearchParam::SearchSources>> searchSources_ {};
          shared_ptr<string> startTime_ {};
        };

        virtual bool empty() const override { return this->dialogueType_ == nullptr
        && this->endToEnd_ == nullptr && this->generateLevel_ == nullptr && this->generateTechnology_ == nullptr && this->searchModels_ == nullptr && this->searchParam_ == nullptr; };
        // dialogueType Field Functions 
        bool hasDialogueType() const { return this->dialogueType_ != nullptr;};
        void deleteDialogueType() { this->dialogueType_ = nullptr;};
        inline int32_t getDialogueType() const { DARABONBA_PTR_GET_DEFAULT(dialogueType_, 0) };
        inline ChatConfig& setDialogueType(int32_t dialogueType) { DARABONBA_PTR_SET_VALUE(dialogueType_, dialogueType) };


        // endToEnd Field Functions 
        bool hasEndToEnd() const { return this->endToEnd_ != nullptr;};
        void deleteEndToEnd() { this->endToEnd_ = nullptr;};
        inline bool getEndToEnd() const { DARABONBA_PTR_GET_DEFAULT(endToEnd_, false) };
        inline ChatConfig& setEndToEnd(bool endToEnd) { DARABONBA_PTR_SET_VALUE(endToEnd_, endToEnd) };


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
        shared_ptr<int32_t> dialogueType_ {};
        shared_ptr<bool> endToEnd_ {};
        shared_ptr<string> generateLevel_ {};
        shared_ptr<string> generateTechnology_ {};
        shared_ptr<vector<string>> searchModels_ {};
        shared_ptr<ChatConfig::SearchParam> searchParam_ {};
      };

      virtual bool empty() const override { return this->chatConfig_ == nullptr
        && this->createTime_ == nullptr && this->dialogueType_ == nullptr && this->goodText_ == nullptr && this->originSessionId_ == nullptr && this->prompt_ == nullptr
        && this->rating_ == nullptr && this->responseBodyStr_ == nullptr && this->sessionId_ == nullptr && this->tags_ == nullptr && this->taskId_ == nullptr
        && this->text_ == nullptr; };
      // chatConfig Field Functions 
      bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
      void deleteChatConfig() { this->chatConfig_ = nullptr;};
      inline const Data::ChatConfig & getChatConfig() const { DARABONBA_PTR_GET_CONST(chatConfig_, Data::ChatConfig) };
      inline Data::ChatConfig getChatConfig() { DARABONBA_PTR_GET(chatConfig_, Data::ChatConfig) };
      inline Data& setChatConfig(const Data::ChatConfig & chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };
      inline Data& setChatConfig(Data::ChatConfig && chatConfig) { DARABONBA_PTR_SET_RVALUE(chatConfig_, chatConfig) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dialogueType Field Functions 
      bool hasDialogueType() const { return this->dialogueType_ != nullptr;};
      void deleteDialogueType() { this->dialogueType_ = nullptr;};
      inline int32_t getDialogueType() const { DARABONBA_PTR_GET_DEFAULT(dialogueType_, 0) };
      inline Data& setDialogueType(int32_t dialogueType) { DARABONBA_PTR_SET_VALUE(dialogueType_, dialogueType) };


      // goodText Field Functions 
      bool hasGoodText() const { return this->goodText_ != nullptr;};
      void deleteGoodText() { this->goodText_ = nullptr;};
      inline string getGoodText() const { DARABONBA_PTR_GET_DEFAULT(goodText_, "") };
      inline Data& setGoodText(string goodText) { DARABONBA_PTR_SET_VALUE(goodText_, goodText) };


      // originSessionId Field Functions 
      bool hasOriginSessionId() const { return this->originSessionId_ != nullptr;};
      void deleteOriginSessionId() { this->originSessionId_ = nullptr;};
      inline string getOriginSessionId() const { DARABONBA_PTR_GET_DEFAULT(originSessionId_, "") };
      inline Data& setOriginSessionId(string originSessionId) { DARABONBA_PTR_SET_VALUE(originSessionId_, originSessionId) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline Data& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // rating Field Functions 
      bool hasRating() const { return this->rating_ != nullptr;};
      void deleteRating() { this->rating_ = nullptr;};
      inline string getRating() const { DARABONBA_PTR_GET_DEFAULT(rating_, "") };
      inline Data& setRating(string rating) { DARABONBA_PTR_SET_VALUE(rating_, rating) };


      // responseBodyStr Field Functions 
      bool hasResponseBodyStr() const { return this->responseBodyStr_ != nullptr;};
      void deleteResponseBodyStr() { this->responseBodyStr_ = nullptr;};
      inline string getResponseBodyStr() const { DARABONBA_PTR_GET_DEFAULT(responseBodyStr_, "") };
      inline Data& setResponseBodyStr(string responseBodyStr) { DARABONBA_PTR_SET_VALUE(responseBodyStr_, responseBodyStr) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Data& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Data& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      shared_ptr<Data::ChatConfig> chatConfig_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> dialogueType_ {};
      shared_ptr<string> goodText_ {};
      shared_ptr<string> originSessionId_ {};
      shared_ptr<string> prompt_ {};
      shared_ptr<string> rating_ {};
      shared_ptr<string> responseBodyStr_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<vector<string>> tags_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSearchTaskDialoguesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSearchTaskDialoguesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSearchTaskDialoguesResponseBody::Data>) };
    inline vector<ListSearchTaskDialoguesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSearchTaskDialoguesResponseBody::Data>) };
    inline ListSearchTaskDialoguesResponseBody& setData(const vector<ListSearchTaskDialoguesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSearchTaskDialoguesResponseBody& setData(vector<ListSearchTaskDialoguesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSearchTaskDialoguesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSearchTaskDialoguesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSearchTaskDialoguesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchTaskDialoguesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSearchTaskDialoguesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSearchTaskDialoguesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSearchTaskDialoguesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListSearchTaskDialoguesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
