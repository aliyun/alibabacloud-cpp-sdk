// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEWATCHUSERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryLiveWatchUserListRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryLiveWatchUserListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveWatchUserListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveWatchUserListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryLiveWatchUserListRequest() = default ;
    QueryLiveWatchUserListRequest(const QueryLiveWatchUserListRequest &) = default ;
    QueryLiveWatchUserListRequest(QueryLiveWatchUserListRequest &&) = default ;
    QueryLiveWatchUserListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveWatchUserListRequest() = default ;
    QueryLiveWatchUserListRequest& operator=(const QueryLiveWatchUserListRequest &) = default ;
    QueryLiveWatchUserListRequest& operator=(QueryLiveWatchUserListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->tenantContext_ != nullptr; };
    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline QueryLiveWatchUserListRequest& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryLiveWatchUserListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryLiveWatchUserListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryLiveWatchUserListRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryLiveWatchUserListRequestTenantContext) };
    inline QueryLiveWatchUserListRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryLiveWatchUserListRequestTenantContext) };
    inline QueryLiveWatchUserListRequest& setTenantContext(const QueryLiveWatchUserListRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryLiveWatchUserListRequest& setTenantContext(QueryLiveWatchUserListRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> liveId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<QueryLiveWatchUserListRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
