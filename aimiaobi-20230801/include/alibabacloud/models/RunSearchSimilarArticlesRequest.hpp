// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESREQUEST_HPP_
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
  class RunSearchSimilarArticlesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunSearchSimilarArticlesRequest() = default ;
    RunSearchSimilarArticlesRequest(const RunSearchSimilarArticlesRequest &) = default ;
    RunSearchSimilarArticlesRequest(RunSearchSimilarArticlesRequest &&) = default ;
    RunSearchSimilarArticlesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesRequest() = default ;
    RunSearchSimilarArticlesRequest& operator=(const RunSearchSimilarArticlesRequest &) = default ;
    RunSearchSimilarArticlesRequest& operator=(RunSearchSimilarArticlesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChatConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SearchParam, searchParam_);
      };
      friend void from_json(const Darabonba::Json& j, ChatConfig& obj) { 
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
          DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
        };
        friend void from_json(const Darabonba::Json& j, SearchParam& obj) { 
          DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
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

        virtual bool empty() const override { return this->searchSources_ == nullptr; };
        // searchSources Field Functions 
        bool hasSearchSources() const { return this->searchSources_ != nullptr;};
        void deleteSearchSources() { this->searchSources_ = nullptr;};
        inline const vector<SearchParam::SearchSources> & getSearchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<SearchParam::SearchSources>) };
        inline vector<SearchParam::SearchSources> getSearchSources() { DARABONBA_PTR_GET(searchSources_, vector<SearchParam::SearchSources>) };
        inline SearchParam& setSearchSources(const vector<SearchParam::SearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
        inline SearchParam& setSearchSources(vector<SearchParam::SearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


      protected:
        shared_ptr<vector<SearchParam::SearchSources>> searchSources_ {};
      };

      virtual bool empty() const override { return this->searchParam_ == nullptr; };
      // searchParam Field Functions 
      bool hasSearchParam() const { return this->searchParam_ != nullptr;};
      void deleteSearchParam() { this->searchParam_ = nullptr;};
      inline const ChatConfig::SearchParam & getSearchParam() const { DARABONBA_PTR_GET_CONST(searchParam_, ChatConfig::SearchParam) };
      inline ChatConfig::SearchParam getSearchParam() { DARABONBA_PTR_GET(searchParam_, ChatConfig::SearchParam) };
      inline ChatConfig& setSearchParam(const ChatConfig::SearchParam & searchParam) { DARABONBA_PTR_SET_VALUE(searchParam_, searchParam) };
      inline ChatConfig& setSearchParam(ChatConfig::SearchParam && searchParam) { DARABONBA_PTR_SET_RVALUE(searchParam_, searchParam) };


    protected:
      shared_ptr<ChatConfig::SearchParam> searchParam_ {};
    };

    virtual bool empty() const override { return this->chatConfig_ == nullptr
        && this->docType_ == nullptr && this->title_ == nullptr && this->url_ == nullptr && this->workspaceId_ == nullptr; };
    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline const RunSearchSimilarArticlesRequest::ChatConfig & getChatConfig() const { DARABONBA_PTR_GET_CONST(chatConfig_, RunSearchSimilarArticlesRequest::ChatConfig) };
    inline RunSearchSimilarArticlesRequest::ChatConfig getChatConfig() { DARABONBA_PTR_GET(chatConfig_, RunSearchSimilarArticlesRequest::ChatConfig) };
    inline RunSearchSimilarArticlesRequest& setChatConfig(const RunSearchSimilarArticlesRequest::ChatConfig & chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };
    inline RunSearchSimilarArticlesRequest& setChatConfig(RunSearchSimilarArticlesRequest::ChatConfig && chatConfig) { DARABONBA_PTR_SET_RVALUE(chatConfig_, chatConfig) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline RunSearchSimilarArticlesRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunSearchSimilarArticlesRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunSearchSimilarArticlesRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunSearchSimilarArticlesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<RunSearchSimilarArticlesRequest::ChatConfig> chatConfig_ {};
    shared_ptr<string> docType_ {};
    shared_ptr<string> title_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
