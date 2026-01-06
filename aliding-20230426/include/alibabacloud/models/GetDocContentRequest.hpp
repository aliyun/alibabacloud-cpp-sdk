// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDocContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(userToken, userToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(userToken, userToken_);
    };
    GetDocContentRequest() = default ;
    GetDocContentRequest(const GetDocContentRequest &) = default ;
    GetDocContentRequest(GetDocContentRequest &&) = default ;
    GetDocContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocContentRequest() = default ;
    GetDocContentRequest& operator=(const GetDocContentRequest &) = default ;
    GetDocContentRequest& operator=(GetDocContentRequest &&) = default ;
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

    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && this->targetFormat_ == nullptr && this->tenantContext_ == nullptr && this->userToken_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetDocContentRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // targetFormat Field Functions 
    bool hasTargetFormat() const { return this->targetFormat_ != nullptr;};
    void deleteTargetFormat() { this->targetFormat_ = nullptr;};
    inline string getTargetFormat() const { DARABONBA_PTR_GET_DEFAULT(targetFormat_, "") };
    inline GetDocContentRequest& setTargetFormat(string targetFormat) { DARABONBA_PTR_SET_VALUE(targetFormat_, targetFormat) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetDocContentRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetDocContentRequest::TenantContext) };
    inline GetDocContentRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetDocContentRequest::TenantContext) };
    inline GetDocContentRequest& setTenantContext(const GetDocContentRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetDocContentRequest& setTenantContext(GetDocContentRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // userToken Field Functions 
    bool hasUserToken() const { return this->userToken_ != nullptr;};
    void deleteUserToken() { this->userToken_ = nullptr;};
    inline string getUserToken() const { DARABONBA_PTR_GET_DEFAULT(userToken_, "") };
    inline GetDocContentRequest& setUserToken(string userToken) { DARABONBA_PTR_SET_VALUE(userToken_, userToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> dentryUuid_ {};
    shared_ptr<string> targetFormat_ {};
    shared_ptr<GetDocContentRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> userToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
