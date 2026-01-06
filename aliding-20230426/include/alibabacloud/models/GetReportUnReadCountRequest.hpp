// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTUNREADCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTUNREADCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportUnReadCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportUnReadCountRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportUnReadCountRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetReportUnReadCountRequest() = default ;
    GetReportUnReadCountRequest(const GetReportUnReadCountRequest &) = default ;
    GetReportUnReadCountRequest(GetReportUnReadCountRequest &&) = default ;
    GetReportUnReadCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportUnReadCountRequest() = default ;
    GetReportUnReadCountRequest& operator=(const GetReportUnReadCountRequest &) = default ;
    GetReportUnReadCountRequest& operator=(GetReportUnReadCountRequest &&) = default ;
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

    virtual bool empty() const override { return this->request_ == nullptr
        && this->tenantContext_ == nullptr; };
    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline     const Darabonba::Json & getRequest() const { DARABONBA_GET(request_) };
    Darabonba::Json & getRequest() { DARABONBA_GET(request_) };
    inline GetReportUnReadCountRequest& setRequest(const Darabonba::Json & request) { DARABONBA_SET_VALUE(request_, request) };
    inline GetReportUnReadCountRequest& setRequest(Darabonba::Json && request) { DARABONBA_SET_RVALUE(request_, request) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetReportUnReadCountRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetReportUnReadCountRequest::TenantContext) };
    inline GetReportUnReadCountRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetReportUnReadCountRequest::TenantContext) };
    inline GetReportUnReadCountRequest& setTenantContext(const GetReportUnReadCountRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetReportUnReadCountRequest& setTenantContext(GetReportUnReadCountRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    Darabonba::Json request_ {};
    shared_ptr<GetReportUnReadCountRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
