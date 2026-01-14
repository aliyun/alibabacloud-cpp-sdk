// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTVIEWREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTVIEWREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListRecentViewReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentViewReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentViewReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRecentViewReportsResponseBody() = default ;
    ListRecentViewReportsResponseBody(const ListRecentViewReportsResponseBody &) = default ;
    ListRecentViewReportsResponseBody(ListRecentViewReportsResponseBody &&) = default ;
    ListRecentViewReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentViewReportsResponseBody() = default ;
    ListRecentViewReportsResponseBody& operator=(const ListRecentViewReportsResponseBody &) = default ;
    ListRecentViewReportsResponseBody& operator=(ListRecentViewReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Attention, attention_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Attention, attention_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Favorite, favorite_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(HasEditAuth, hasEditAuth_);
          DARABONBA_PTR_TO_JSON(HasViewAuth, hasViewAuth_);
          DARABONBA_PTR_TO_JSON(LatestViewTime, latestViewTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(OwnerNum, ownerNum_);
          DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_TO_JSON(TreeId, treeId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(ViewCount, viewCount_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Favorite, favorite_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(HasEditAuth, hasEditAuth_);
          DARABONBA_PTR_FROM_JSON(HasViewAuth, hasViewAuth_);
          DARABONBA_PTR_FROM_JSON(LatestViewTime, latestViewTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(OwnerNum, ownerNum_);
          DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_FROM_JSON(TreeId, treeId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(ViewCount, viewCount_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
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
        virtual bool empty() const override { return this->favorite_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hasEditAuth_ == nullptr && this->hasViewAuth_ == nullptr && this->latestViewTime_ == nullptr
        && this->name_ == nullptr && this->ownerName_ == nullptr && this->ownerNum_ == nullptr && this->publishStatus_ == nullptr && this->treeId_ == nullptr
        && this->type_ == nullptr && this->viewCount_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
        // favorite Field Functions 
        bool hasFavorite() const { return this->favorite_ != nullptr;};
        void deleteFavorite() { this->favorite_ = nullptr;};
        inline bool getFavorite() const { DARABONBA_PTR_GET_DEFAULT(favorite_, false) };
        inline Data& setFavorite(bool favorite) { DARABONBA_PTR_SET_VALUE(favorite_, favorite) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // hasEditAuth Field Functions 
        bool hasHasEditAuth() const { return this->hasEditAuth_ != nullptr;};
        void deleteHasEditAuth() { this->hasEditAuth_ = nullptr;};
        inline bool getHasEditAuth() const { DARABONBA_PTR_GET_DEFAULT(hasEditAuth_, false) };
        inline Data& setHasEditAuth(bool hasEditAuth) { DARABONBA_PTR_SET_VALUE(hasEditAuth_, hasEditAuth) };


        // hasViewAuth Field Functions 
        bool hasHasViewAuth() const { return this->hasViewAuth_ != nullptr;};
        void deleteHasViewAuth() { this->hasViewAuth_ = nullptr;};
        inline bool getHasViewAuth() const { DARABONBA_PTR_GET_DEFAULT(hasViewAuth_, false) };
        inline Data& setHasViewAuth(bool hasViewAuth) { DARABONBA_PTR_SET_VALUE(hasViewAuth_, hasViewAuth) };


        // latestViewTime Field Functions 
        bool hasLatestViewTime() const { return this->latestViewTime_ != nullptr;};
        void deleteLatestViewTime() { this->latestViewTime_ = nullptr;};
        inline string getLatestViewTime() const { DARABONBA_PTR_GET_DEFAULT(latestViewTime_, "") };
        inline Data& setLatestViewTime(string latestViewTime) { DARABONBA_PTR_SET_VALUE(latestViewTime_, latestViewTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline Data& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // ownerNum Field Functions 
        bool hasOwnerNum() const { return this->ownerNum_ != nullptr;};
        void deleteOwnerNum() { this->ownerNum_ = nullptr;};
        inline string getOwnerNum() const { DARABONBA_PTR_GET_DEFAULT(ownerNum_, "") };
        inline Data& setOwnerNum(string ownerNum) { DARABONBA_PTR_SET_VALUE(ownerNum_, ownerNum) };


        // publishStatus Field Functions 
        bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
        void deletePublishStatus() { this->publishStatus_ = nullptr;};
        inline int32_t getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, 0) };
        inline Data& setPublishStatus(int32_t publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


        // treeId Field Functions 
        bool hasTreeId() const { return this->treeId_ != nullptr;};
        void deleteTreeId() { this->treeId_ = nullptr;};
        inline string getTreeId() const { DARABONBA_PTR_GET_DEFAULT(treeId_, "") };
        inline Data& setTreeId(string treeId) { DARABONBA_PTR_SET_VALUE(treeId_, treeId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // viewCount Field Functions 
        bool hasViewCount() const { return this->viewCount_ != nullptr;};
        void deleteViewCount() { this->viewCount_ = nullptr;};
        inline int64_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0L) };
        inline Data& setViewCount(int64_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        // workspaceName Field Functions 
        bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
        void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
        inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
        inline Data& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      protected:
        // Queries whether the user has collected the work.
        shared_ptr<bool> favorite_ {};
        // The timestamp when the work was created.
        shared_ptr<string> gmtCreate_ {};
        // The timestamp when the work was modified.
        shared_ptr<string> gmtModified_ {};
        // The query user has the editing rights of the work.
        shared_ptr<bool> hasEditAuth_ {};
        // The query user has the permission to view the work.
        shared_ptr<bool> hasViewAuth_ {};
        // The timestamp when the work was last accessed.
        shared_ptr<string> latestViewTime_ {};
        // The name of the work.
        shared_ptr<string> name_ {};
        // The Alibaba Cloud account name of the work owner.
        shared_ptr<string> ownerName_ {};
        // The UserID of the work owner.
        shared_ptr<string> ownerNum_ {};
        // The publication status of the work. Valid values:
        // 
        // *   0: unpublished
        // *   1: published
        // *   2: modified and saved but not published.
        // *   3: unpublished
        shared_ptr<int32_t> publishStatus_ {};
        // The ID of the work.
        shared_ptr<string> treeId_ {};
        // The type of the work. Valid values:
        // 
        // *   DATAPRODUCT: BI portal
        // *   PAGE: Dashboard
        // *   REPORT: workbook
        shared_ptr<string> type_ {};
        // The number of times the work was accessed.
        shared_ptr<int64_t> viewCount_ {};
        // The ID of the workspace to which the work belongs.
        shared_ptr<string> workspaceId_ {};
        // The name of the workspace to which the work belongs.
        shared_ptr<string> workspaceName_ {};
      };

      virtual bool empty() const override { return this->attention_ == nullptr
        && this->data_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalNum_ == nullptr && this->totalPages_ == nullptr; };
      // attention Field Functions 
      bool hasAttention() const { return this->attention_ != nullptr;};
      void deleteAttention() { this->attention_ = nullptr;};
      inline string getAttention() const { DARABONBA_PTR_GET_DEFAULT(attention_, "") };
      inline Result& setAttention(string attention) { DARABONBA_PTR_SET_VALUE(attention_, attention) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Result& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Result& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Result& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // Attention
      shared_ptr<string> attention_ {};
      // The list of queried works.
      shared_ptr<vector<Result::Data>> data_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned per page.
      // 
      // *   Default value: 10.
      // *   Maximum of 100 articles
      shared_ptr<int32_t> pageSize_ {};
      // The total number of rows in the table.
      shared_ptr<int32_t> totalNum_ {};
      // The total number of pages returned.
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentViewReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListRecentViewReportsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListRecentViewReportsResponseBody::Result) };
    inline ListRecentViewReportsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListRecentViewReportsResponseBody::Result) };
    inline ListRecentViewReportsResponseBody& setResult(const ListRecentViewReportsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListRecentViewReportsResponseBody& setResult(ListRecentViewReportsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRecentViewReportsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The query results are returned.
    shared_ptr<ListRecentViewReportsResponseBody::Result> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
