// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
    };
    GetUserIdRequest() = default ;
    GetUserIdRequest(const GetUserIdRequest &) = default ;
    GetUserIdRequest(GetUserIdRequest &&) = default ;
    GetUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdRequest() = default ;
    GetUserIdRequest& operator=(const GetUserIdRequest &) = default ;
    GetUserIdRequest& operator=(GetUserIdRequest &&) = default ;
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
        && this->unionId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetUserIdRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetUserIdRequest::TenantContext) };
    inline GetUserIdRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetUserIdRequest::TenantContext) };
    inline GetUserIdRequest& setTenantContext(const GetUserIdRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetUserIdRequest& setTenantContext(GetUserIdRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline GetUserIdRequest& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


  protected:
    shared_ptr<GetUserIdRequest::TenantContext> tenantContext_ {};
    // unionId
    shared_ptr<string> unionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
