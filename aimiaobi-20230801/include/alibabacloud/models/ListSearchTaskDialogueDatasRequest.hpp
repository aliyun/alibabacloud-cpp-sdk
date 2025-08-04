// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUEDATASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUEDATASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListSearchTaskDialogueDatasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTaskDialogueDatasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_TO_JSON(MultimodalSearchType, multimodalSearchType_);
      DARABONBA_PTR_TO_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SearchModel, searchModel_);
      DARABONBA_PTR_TO_JSON(SearchModelDataValue, searchModelDataValue_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTaskDialogueDatasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_FROM_JSON(MultimodalSearchType, multimodalSearchType_);
      DARABONBA_PTR_FROM_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SearchModel, searchModel_);
      DARABONBA_PTR_FROM_JSON(SearchModelDataValue, searchModelDataValue_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListSearchTaskDialogueDatasRequest() = default ;
    ListSearchTaskDialogueDatasRequest(const ListSearchTaskDialogueDatasRequest &) = default ;
    ListSearchTaskDialogueDatasRequest(ListSearchTaskDialogueDatasRequest &&) = default ;
    ListSearchTaskDialogueDatasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTaskDialogueDatasRequest() = default ;
    ListSearchTaskDialogueDatasRequest& operator=(const ListSearchTaskDialogueDatasRequest &) = default ;
    ListSearchTaskDialogueDatasRequest& operator=(ListSearchTaskDialogueDatasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->includeContent_ != nullptr
        && this->multimodalSearchType_ != nullptr && this->originalSessionId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->query_ != nullptr
        && this->searchModel_ != nullptr && this->searchModelDataValue_ != nullptr && this->sessionId_ != nullptr && this->taskId_ != nullptr && this->workspaceId_ != nullptr; };
    // includeContent Field Functions 
    bool hasIncludeContent() const { return this->includeContent_ != nullptr;};
    void deleteIncludeContent() { this->includeContent_ = nullptr;};
    inline bool includeContent() const { DARABONBA_PTR_GET_DEFAULT(includeContent_, false) };
    inline ListSearchTaskDialogueDatasRequest& setIncludeContent(bool includeContent) { DARABONBA_PTR_SET_VALUE(includeContent_, includeContent) };


    // multimodalSearchType Field Functions 
    bool hasMultimodalSearchType() const { return this->multimodalSearchType_ != nullptr;};
    void deleteMultimodalSearchType() { this->multimodalSearchType_ = nullptr;};
    inline string multimodalSearchType() const { DARABONBA_PTR_GET_DEFAULT(multimodalSearchType_, "") };
    inline ListSearchTaskDialogueDatasRequest& setMultimodalSearchType(string multimodalSearchType) { DARABONBA_PTR_SET_VALUE(multimodalSearchType_, multimodalSearchType) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string originalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline ListSearchTaskDialogueDatasRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSearchTaskDialogueDatasRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchTaskDialogueDatasRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListSearchTaskDialogueDatasRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // searchModel Field Functions 
    bool hasSearchModel() const { return this->searchModel_ != nullptr;};
    void deleteSearchModel() { this->searchModel_ = nullptr;};
    inline string searchModel() const { DARABONBA_PTR_GET_DEFAULT(searchModel_, "") };
    inline ListSearchTaskDialogueDatasRequest& setSearchModel(string searchModel) { DARABONBA_PTR_SET_VALUE(searchModel_, searchModel) };


    // searchModelDataValue Field Functions 
    bool hasSearchModelDataValue() const { return this->searchModelDataValue_ != nullptr;};
    void deleteSearchModelDataValue() { this->searchModelDataValue_ = nullptr;};
    inline string searchModelDataValue() const { DARABONBA_PTR_GET_DEFAULT(searchModelDataValue_, "") };
    inline ListSearchTaskDialogueDatasRequest& setSearchModelDataValue(string searchModelDataValue) { DARABONBA_PTR_SET_VALUE(searchModelDataValue_, searchModelDataValue) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListSearchTaskDialogueDatasRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListSearchTaskDialogueDatasRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListSearchTaskDialogueDatasRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<bool> includeContent_ = nullptr;
    std::shared_ptr<string> multimodalSearchType_ = nullptr;
    std::shared_ptr<string> originalSessionId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> searchModel_ = nullptr;
    std::shared_ptr<string> searchModelDataValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
