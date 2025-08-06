// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSAIONSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSAIONSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConversaionSpaceRequestTenantContext.hpp>
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
    virtual bool empty() const override { this->openConversationId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string openConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline GetConversaionSpaceRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetConversaionSpaceRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetConversaionSpaceRequestTenantContext) };
    inline GetConversaionSpaceRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetConversaionSpaceRequestTenantContext) };
    inline GetConversaionSpaceRequest& setTenantContext(const GetConversaionSpaceRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetConversaionSpaceRequest& setTenantContext(GetConversaionSpaceRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> openConversationId_ = nullptr;
    std::shared_ptr<GetConversaionSpaceRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
