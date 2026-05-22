// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYOPENDINGTALKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYOPENDINGTALKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserIdByOpenDingtalkIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByOpenDingtalkIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(openDingtalkId, openDingtalkId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByOpenDingtalkIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(openDingtalkId, openDingtalkId_);
    };
    GetUserIdByOpenDingtalkIdRequest() = default ;
    GetUserIdByOpenDingtalkIdRequest(const GetUserIdByOpenDingtalkIdRequest &) = default ;
    GetUserIdByOpenDingtalkIdRequest(GetUserIdByOpenDingtalkIdRequest &&) = default ;
    GetUserIdByOpenDingtalkIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByOpenDingtalkIdRequest() = default ;
    GetUserIdByOpenDingtalkIdRequest& operator=(const GetUserIdByOpenDingtalkIdRequest &) = default ;
    GetUserIdByOpenDingtalkIdRequest& operator=(GetUserIdByOpenDingtalkIdRequest &&) = default ;
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
        && this->openDingtalkId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetUserIdByOpenDingtalkIdRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetUserIdByOpenDingtalkIdRequest::TenantContext) };
    inline GetUserIdByOpenDingtalkIdRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetUserIdByOpenDingtalkIdRequest::TenantContext) };
    inline GetUserIdByOpenDingtalkIdRequest& setTenantContext(const GetUserIdByOpenDingtalkIdRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetUserIdByOpenDingtalkIdRequest& setTenantContext(GetUserIdByOpenDingtalkIdRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // openDingtalkId Field Functions 
    bool hasOpenDingtalkId() const { return this->openDingtalkId_ != nullptr;};
    void deleteOpenDingtalkId() { this->openDingtalkId_ = nullptr;};
    inline string getOpenDingtalkId() const { DARABONBA_PTR_GET_DEFAULT(openDingtalkId_, "") };
    inline GetUserIdByOpenDingtalkIdRequest& setOpenDingtalkId(string openDingtalkId) { DARABONBA_PTR_SET_VALUE(openDingtalkId_, openDingtalkId) };


  protected:
    shared_ptr<GetUserIdByOpenDingtalkIdRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> openDingtalkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
