// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNQUICKWRITINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNQUICKWRITINGREQUEST_HPP_
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
  class RunQuickWritingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunQuickWritingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunQuickWritingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunQuickWritingRequest() = default ;
    RunQuickWritingRequest(const RunQuickWritingRequest &) = default ;
    RunQuickWritingRequest(RunQuickWritingRequest &&) = default ;
    RunQuickWritingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunQuickWritingRequest() = default ;
    RunQuickWritingRequest& operator=(const RunQuickWritingRequest &) = default ;
    RunQuickWritingRequest& operator=(RunQuickWritingRequest &&) = default ;
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
        && this->prompt_ == nullptr && this->searchSources_ == nullptr && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<RunQuickWritingRequest::Articles> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<RunQuickWritingRequest::Articles>) };
    inline vector<RunQuickWritingRequest::Articles> getArticles() { DARABONBA_PTR_GET(articles_, vector<RunQuickWritingRequest::Articles>) };
    inline RunQuickWritingRequest& setArticles(const vector<RunQuickWritingRequest::Articles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunQuickWritingRequest& setArticles(vector<RunQuickWritingRequest::Articles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunQuickWritingRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<RunQuickWritingRequest::SearchSources> & getSearchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<RunQuickWritingRequest::SearchSources>) };
    inline vector<RunQuickWritingRequest::SearchSources> getSearchSources() { DARABONBA_PTR_GET(searchSources_, vector<RunQuickWritingRequest::SearchSources>) };
    inline RunQuickWritingRequest& setSearchSources(const vector<RunQuickWritingRequest::SearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline RunQuickWritingRequest& setSearchSources(vector<RunQuickWritingRequest::SearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunQuickWritingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunQuickWritingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<RunQuickWritingRequest::Articles>> articles_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    shared_ptr<vector<RunQuickWritingRequest::SearchSources>> searchSources_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
