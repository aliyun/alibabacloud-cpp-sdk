// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTUNREADCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTUNREADCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetReportUnReadCountRequestTenantContext.hpp>
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
    virtual bool empty() const override { this->request_ != nullptr
        && this->tenantContext_ != nullptr; };
    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline     const Darabonba::Json & request() const { DARABONBA_GET(request_) };
    Darabonba::Json & request() { DARABONBA_GET(request_) };
    inline GetReportUnReadCountRequest& setRequest(const Darabonba::Json & request) { DARABONBA_SET_VALUE(request_, request) };
    inline GetReportUnReadCountRequest& setRequest(Darabonba::Json & request) { DARABONBA_SET_RVALUE(request_, request) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetReportUnReadCountRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetReportUnReadCountRequestTenantContext) };
    inline GetReportUnReadCountRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetReportUnReadCountRequestTenantContext) };
    inline GetReportUnReadCountRequest& setTenantContext(const GetReportUnReadCountRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetReportUnReadCountRequest& setTenantContext(GetReportUnReadCountRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    Darabonba::Json request_ = nullptr;
    std::shared_ptr<GetReportUnReadCountRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
