// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEBYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEBYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodeByUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeByUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeByUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetNodeByUrlRequest() = default ;
    GetNodeByUrlRequest(const GetNodeByUrlRequest &) = default ;
    GetNodeByUrlRequest(GetNodeByUrlRequest &&) = default ;
    GetNodeByUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeByUrlRequest() = default ;
    GetNodeByUrlRequest& operator=(const GetNodeByUrlRequest &) = default ;
    GetNodeByUrlRequest& operator=(GetNodeByUrlRequest &&) = default ;
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

    class Option : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Option& obj) { 
        DARABONBA_PTR_TO_JSON(WithPermissionRole, withPermissionRole_);
        DARABONBA_PTR_TO_JSON(WithStatisticalInfo, withStatisticalInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(WithPermissionRole, withPermissionRole_);
        DARABONBA_PTR_FROM_JSON(WithStatisticalInfo, withStatisticalInfo_);
      };
      Option() = default ;
      Option(const Option &) = default ;
      Option(Option &&) = default ;
      Option(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Option() = default ;
      Option& operator=(const Option &) = default ;
      Option& operator=(Option &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->withPermissionRole_ == nullptr
        && this->withStatisticalInfo_ == nullptr; };
      // withPermissionRole Field Functions 
      bool hasWithPermissionRole() const { return this->withPermissionRole_ != nullptr;};
      void deleteWithPermissionRole() { this->withPermissionRole_ = nullptr;};
      inline bool getWithPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(withPermissionRole_, false) };
      inline Option& setWithPermissionRole(bool withPermissionRole) { DARABONBA_PTR_SET_VALUE(withPermissionRole_, withPermissionRole) };


      // withStatisticalInfo Field Functions 
      bool hasWithStatisticalInfo() const { return this->withStatisticalInfo_ != nullptr;};
      void deleteWithStatisticalInfo() { this->withStatisticalInfo_ = nullptr;};
      inline bool getWithStatisticalInfo() const { DARABONBA_PTR_GET_DEFAULT(withStatisticalInfo_, false) };
      inline Option& setWithStatisticalInfo(bool withStatisticalInfo) { DARABONBA_PTR_SET_VALUE(withStatisticalInfo_, withStatisticalInfo) };


    protected:
      shared_ptr<bool> withPermissionRole_ {};
      shared_ptr<bool> withStatisticalInfo_ {};
    };

    virtual bool empty() const override { return this->option_ == nullptr
        && this->tenantContext_ == nullptr && this->url_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetNodeByUrlRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, GetNodeByUrlRequest::Option) };
    inline GetNodeByUrlRequest::Option getOption() { DARABONBA_PTR_GET(option_, GetNodeByUrlRequest::Option) };
    inline GetNodeByUrlRequest& setOption(const GetNodeByUrlRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetNodeByUrlRequest& setOption(GetNodeByUrlRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetNodeByUrlRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetNodeByUrlRequest::TenantContext) };
    inline GetNodeByUrlRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetNodeByUrlRequest::TenantContext) };
    inline GetNodeByUrlRequest& setTenantContext(const GetNodeByUrlRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetNodeByUrlRequest& setTenantContext(GetNodeByUrlRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetNodeByUrlRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<GetNodeByUrlRequest::Option> option_ {};
    shared_ptr<GetNodeByUrlRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
