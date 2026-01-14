// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSPACEUSERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSPACEUSERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorkspaceUserListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkspaceUserListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkspaceUserListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryWorkspaceUserListRequest() = default ;
    QueryWorkspaceUserListRequest(const QueryWorkspaceUserListRequest &) = default ;
    QueryWorkspaceUserListRequest(QueryWorkspaceUserListRequest &&) = default ;
    QueryWorkspaceUserListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkspaceUserListRequest() = default ;
    QueryWorkspaceUserListRequest& operator=(const QueryWorkspaceUserListRequest &) = default ;
    QueryWorkspaceUserListRequest& operator=(QueryWorkspaceUserListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->workspaceId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryWorkspaceUserListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryWorkspaceUserListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryWorkspaceUserListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryWorkspaceUserListRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Keyword for the username of the workspace member.
    shared_ptr<string> keyword_ {};
    // Current page number of the workspace member list:
    // 
    // - Starting value: 1
    // - Default value: 1
    shared_ptr<int32_t> pageNum_ {};
    // Number of rows per page in a paginated query:
    // 
    // - Default value: 10
    // - Maximum value: 1000
    shared_ptr<int32_t> pageSize_ {};
    // Workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
