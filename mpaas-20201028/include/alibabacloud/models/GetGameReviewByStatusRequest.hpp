// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGAMEREVIEWBYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGAMEREVIEWBYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetGameReviewByStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGameReviewByStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
      DARABONBA_PTR_TO_JSON(SortMode, sortMode_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGameReviewByStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
      DARABONBA_PTR_FROM_JSON(SortMode, sortMode_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetGameReviewByStatusRequest() = default ;
    GetGameReviewByStatusRequest(const GetGameReviewByStatusRequest &) = default ;
    GetGameReviewByStatusRequest(GetGameReviewByStatusRequest &&) = default ;
    GetGameReviewByStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGameReviewByStatusRequest() = default ;
    GetGameReviewByStatusRequest& operator=(const GetGameReviewByStatusRequest &) = default ;
    GetGameReviewByStatusRequest& operator=(GetGameReviewByStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->keyword_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->reviewStatus_ == nullptr && this->sortMode_ == nullptr
        && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetGameReviewByStatusRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetGameReviewByStatusRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetGameReviewByStatusRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetGameReviewByStatusRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reviewStatus Field Functions 
    bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
    void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
    inline string getReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, "") };
    inline GetGameReviewByStatusRequest& setReviewStatus(string reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


    // sortMode Field Functions 
    bool hasSortMode() const { return this->sortMode_ != nullptr;};
    void deleteSortMode() { this->sortMode_ = nullptr;};
    inline string getSortMode() const { DARABONBA_PTR_GET_DEFAULT(sortMode_, "") };
    inline GetGameReviewByStatusRequest& setSortMode(string sortMode) { DARABONBA_PTR_SET_VALUE(sortMode_, sortMode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetGameReviewByStatusRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetGameReviewByStatusRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> reviewStatus_ {};
    shared_ptr<string> sortMode_ {};
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
