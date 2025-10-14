// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEBYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEBYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNodeByUrlRequestOption.hpp>
#include <alibabacloud/models/GetNodeByUrlRequestTenantContext.hpp>
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
    virtual bool empty() const override { return this->option_ == nullptr
        && return this->tenantContext_ == nullptr && return this->url_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetNodeByUrlRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, GetNodeByUrlRequestOption) };
    inline GetNodeByUrlRequestOption option() { DARABONBA_PTR_GET(option_, GetNodeByUrlRequestOption) };
    inline GetNodeByUrlRequest& setOption(const GetNodeByUrlRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetNodeByUrlRequest& setOption(GetNodeByUrlRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetNodeByUrlRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetNodeByUrlRequestTenantContext) };
    inline GetNodeByUrlRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetNodeByUrlRequestTenantContext) };
    inline GetNodeByUrlRequest& setTenantContext(const GetNodeByUrlRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetNodeByUrlRequest& setTenantContext(GetNodeByUrlRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetNodeByUrlRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<GetNodeByUrlRequestOption> option_ = nullptr;
    std::shared_ptr<GetNodeByUrlRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
