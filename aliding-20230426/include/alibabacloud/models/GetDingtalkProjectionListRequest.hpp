// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKPROJECTIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKPROJECTIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkProjectionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkProjectionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(projectorWorkNo, projectorWorkNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkProjectionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(projectorWorkNo, projectorWorkNo_);
    };
    GetDingtalkProjectionListRequest() = default ;
    GetDingtalkProjectionListRequest(const GetDingtalkProjectionListRequest &) = default ;
    GetDingtalkProjectionListRequest(GetDingtalkProjectionListRequest &&) = default ;
    GetDingtalkProjectionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkProjectionListRequest() = default ;
    GetDingtalkProjectionListRequest& operator=(const GetDingtalkProjectionListRequest &) = default ;
    GetDingtalkProjectionListRequest& operator=(GetDingtalkProjectionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && this->code_ == nullptr && this->currentPage_ == nullptr && this->orgId_ == nullptr && this->pageSize_ == nullptr && this->projectorWorkNo_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetDingtalkProjectionListRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetDingtalkProjectionListRequest::TenantContext) };
    inline GetDingtalkProjectionListRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetDingtalkProjectionListRequest::TenantContext) };
    inline GetDingtalkProjectionListRequest& setTenantContext(const GetDingtalkProjectionListRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetDingtalkProjectionListRequest& setTenantContext(GetDingtalkProjectionListRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDingtalkProjectionListRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetDingtalkProjectionListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline GetDingtalkProjectionListRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetDingtalkProjectionListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectorWorkNo Field Functions 
    bool hasProjectorWorkNo() const { return this->projectorWorkNo_ != nullptr;};
    void deleteProjectorWorkNo() { this->projectorWorkNo_ = nullptr;};
    inline string getProjectorWorkNo() const { DARABONBA_PTR_GET_DEFAULT(projectorWorkNo_, "") };
    inline GetDingtalkProjectionListRequest& setProjectorWorkNo(string projectorWorkNo) { DARABONBA_PTR_SET_VALUE(projectorWorkNo_, projectorWorkNo) };


  protected:
    shared_ptr<GetDingtalkProjectionListRequest::TenantContext> tenantContext_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int64_t> orgId_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> projectorWorkNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
