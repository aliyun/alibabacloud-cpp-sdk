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
          DARABONBA_PTR_TO_JSON(CategoryUuids, categoryUuids_);
          DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
          DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
          DARABONBA_PTR_TO_JSON(DocIds, docIds_);
          DARABONBA_PTR_TO_JSON(DocTypes, docTypes_);
          DARABONBA_PTR_TO_JSON(DocUuids, docUuids_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Extend1, extend1_);
          DARABONBA_PTR_TO_JSON(Extend2, extend2_);
          DARABONBA_PTR_TO_JSON(Extend3, extend3_);
          DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, SearchParam& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryUuids, categoryUuids_);
          DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
          DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
          DARABONBA_PTR_FROM_JSON(DocIds, docIds_);
          DARABONBA_PTR_FROM_JSON(DocTypes, docTypes_);
          DARABONBA_PTR_FROM_JSON(DocUuids, docUuids_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
          DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
          DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
          DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
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

        virtual bool empty() const override { return this->categoryUuids_ == nullptr
        && this->createTimeEnd_ == nullptr && this->createTimeStart_ == nullptr && this->docIds_ == nullptr && this->docTypes_ == nullptr && this->docUuids_ == nullptr
        && this->endTime_ == nullptr && this->extend1_ == nullptr && this->extend2_ == nullptr && this->extend3_ == nullptr && this->searchSources_ == nullptr
        && this->startTime_ == nullptr && this->tags_ == nullptr; };
        // categoryUuids Field Functions 
        bool hasCategoryUuids() const { return this->categoryUuids_ != nullptr;};
        void deleteCategoryUuids() { this->categoryUuids_ = nullptr;};
        inline const vector<string> & getCategoryUuids() const { DARABONBA_PTR_GET_CONST(categoryUuids_, vector<string>) };
        inline vector<string> getCategoryUuids() { DARABONBA_PTR_GET(categoryUuids_, vector<string>) };
        inline SearchParam& setCategoryUuids(const vector<string> & categoryUuids) { DARABONBA_PTR_SET_VALUE(categoryUuids_, categoryUuids) };
        inline SearchParam& setCategoryUuids(vector<string> && categoryUuids) { DARABONBA_PTR_SET_RVALUE(categoryUuids_, categoryUuids) };


        // createTimeEnd Field Functions 
        bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
        void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
        inline int64_t getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, 0L) };
        inline SearchParam& setCreateTimeEnd(int64_t createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


        // createTimeStart Field Functions 
        bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
        void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
        inline int64_t getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, 0L) };
        inline SearchParam& setCreateTimeStart(int64_t createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


        // docIds Field Functions 
        bool hasDocIds() const { return this->docIds_ != nullptr;};
        void deleteDocIds() { this->docIds_ = nullptr;};
        inline const vector<string> & getDocIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
        inline vector<string> getDocIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
        inline SearchParam& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
        inline SearchParam& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


        // docTypes Field Functions 
        bool hasDocTypes() const { return this->docTypes_ != nullptr;};
        void deleteDocTypes() { this->docTypes_ = nullptr;};
        inline const vector<string> & getDocTypes() const { DARABONBA_PTR_GET_CONST(docTypes_, vector<string>) };
        inline vector<string> getDocTypes() { DARABONBA_PTR_GET(docTypes_, vector<string>) };
        inline SearchParam& setDocTypes(const vector<string> & docTypes) { DARABONBA_PTR_SET_VALUE(docTypes_, docTypes) };
        inline SearchParam& setDocTypes(vector<string> && docTypes) { DARABONBA_PTR_SET_RVALUE(docTypes_, docTypes) };


        // docUuids Field Functions 
        bool hasDocUuids() const { return this->docUuids_ != nullptr;};
        void deleteDocUuids() { this->docUuids_ = nullptr;};
        inline const vector<string> & getDocUuids() const { DARABONBA_PTR_GET_CONST(docUuids_, vector<string>) };
        inline vector<string> getDocUuids() { DARABONBA_PTR_GET(docUuids_, vector<string>) };
        inline SearchParam& setDocUuids(const vector<string> & docUuids) { DARABONBA_PTR_SET_VALUE(docUuids_, docUuids) };
        inline SearchParam& setDocUuids(vector<string> && docUuids) { DARABONBA_PTR_SET_RVALUE(docUuids_, docUuids) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SearchParam& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // extend1 Field Functions 
        bool hasExtend1() const { return this->extend1_ != nullptr;};
        void deleteExtend1() { this->extend1_ = nullptr;};
        inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
        inline SearchParam& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


        // extend2 Field Functions 
        bool hasExtend2() const { return this->extend2_ != nullptr;};
        void deleteExtend2() { this->extend2_ = nullptr;};
        inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
        inline SearchParam& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


        // extend3 Field Functions 
        bool hasExtend3() const { return this->extend3_ != nullptr;};
        void deleteExtend3() { this->extend3_ = nullptr;};
        inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
        inline SearchParam& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


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
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline SearchParam& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline SearchParam& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline SearchParam& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<vector<string>> categoryUuids_ {};
        shared_ptr<int64_t> createTimeEnd_ {};
        shared_ptr<int64_t> createTimeStart_ {};
        shared_ptr<vector<string>> docIds_ {};
        shared_ptr<vector<string>> docTypes_ {};
        shared_ptr<vector<string>> docUuids_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> extend1_ {};
        shared_ptr<string> extend2_ {};
        shared_ptr<string> extend3_ {};
        shared_ptr<vector<SearchParam::SearchSources>> searchSources_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<vector<string>> tags_ {};
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
