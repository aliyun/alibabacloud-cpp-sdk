// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGANIZATIONWORKSPACELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGANIZATIONWORKSPACELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryOrganizationWorkspaceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrganizationWorkspaceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrganizationWorkspaceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryOrganizationWorkspaceListRequest() = default ;
    QueryOrganizationWorkspaceListRequest(const QueryOrganizationWorkspaceListRequest &) = default ;
    QueryOrganizationWorkspaceListRequest(QueryOrganizationWorkspaceListRequest &&) = default ;
    QueryOrganizationWorkspaceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrganizationWorkspaceListRequest() = default ;
    QueryOrganizationWorkspaceListRequest& operator=(const QueryOrganizationWorkspaceListRequest &) = default ;
    QueryOrganizationWorkspaceListRequest& operator=(QueryOrganizationWorkspaceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->userId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryOrganizationWorkspaceListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryOrganizationWorkspaceListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryOrganizationWorkspaceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryOrganizationWorkspaceListRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Keyword for the workspace name.
    std::shared_ptr<string> keyword_ = nullptr;
    // Current page number of the workspace list:
    // 
    // - Starting value: 1
    // - Default value: 1
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // Number of rows per page in a paginated query:
    // 
    // - Default value: 10
    // - Maximum value: 1000
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // User ID in Quick BI.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
