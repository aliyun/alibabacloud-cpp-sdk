// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENCEGROUPFILEDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCENCEGROUPFILEDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetScencegroupFileDownloadurlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScencegroupFileDownloadurlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadCode, downloadCode_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetScencegroupFileDownloadurlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadCode, downloadCode_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetScencegroupFileDownloadurlRequest() = default ;
    GetScencegroupFileDownloadurlRequest(const GetScencegroupFileDownloadurlRequest &) = default ;
    GetScencegroupFileDownloadurlRequest(GetScencegroupFileDownloadurlRequest &&) = default ;
    GetScencegroupFileDownloadurlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScencegroupFileDownloadurlRequest() = default ;
    GetScencegroupFileDownloadurlRequest& operator=(const GetScencegroupFileDownloadurlRequest &) = default ;
    GetScencegroupFileDownloadurlRequest& operator=(GetScencegroupFileDownloadurlRequest &&) = default ;
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

    virtual bool empty() const override { return this->downloadCode_ == nullptr
        && this->tenantContext_ == nullptr; };
    // downloadCode Field Functions 
    bool hasDownloadCode() const { return this->downloadCode_ != nullptr;};
    void deleteDownloadCode() { this->downloadCode_ = nullptr;};
    inline string getDownloadCode() const { DARABONBA_PTR_GET_DEFAULT(downloadCode_, "") };
    inline GetScencegroupFileDownloadurlRequest& setDownloadCode(string downloadCode) { DARABONBA_PTR_SET_VALUE(downloadCode_, downloadCode) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetScencegroupFileDownloadurlRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetScencegroupFileDownloadurlRequest::TenantContext) };
    inline GetScencegroupFileDownloadurlRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetScencegroupFileDownloadurlRequest::TenantContext) };
    inline GetScencegroupFileDownloadurlRequest& setTenantContext(const GetScencegroupFileDownloadurlRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetScencegroupFileDownloadurlRequest& setTenantContext(GetScencegroupFileDownloadurlRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> downloadCode_ {};
    shared_ptr<GetScencegroupFileDownloadurlRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
