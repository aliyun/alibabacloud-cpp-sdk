// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSAIONSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSAIONSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetConversaionSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConversaionSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetConversaionSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetConversaionSpaceRequest() = default ;
    GetConversaionSpaceRequest(const GetConversaionSpaceRequest &) = default ;
    GetConversaionSpaceRequest(GetConversaionSpaceRequest &&) = default ;
    GetConversaionSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConversaionSpaceRequest() = default ;
    GetConversaionSpaceRequest& operator=(const GetConversaionSpaceRequest &) = default ;
    GetConversaionSpaceRequest& operator=(GetConversaionSpaceRequest &&) = default ;
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

    virtual bool empty() const override { return this->openConversationId_ == nullptr
        && this->tenantContext_ == nullptr; };
    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline GetConversaionSpaceRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetConversaionSpaceRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetConversaionSpaceRequest::TenantContext) };
    inline GetConversaionSpaceRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetConversaionSpaceRequest::TenantContext) };
    inline GetConversaionSpaceRequest& setTenantContext(const GetConversaionSpaceRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetConversaionSpaceRequest& setTenantContext(GetConversaionSpaceRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> openConversationId_ {};
    shared_ptr<GetConversaionSpaceRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
