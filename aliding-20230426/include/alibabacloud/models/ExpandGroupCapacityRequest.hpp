// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPANDGROUPCAPACITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPANDGROUPCAPACITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExpandGroupCapacityRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ExpandGroupCapacityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExpandGroupCapacityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ExpandGroupCapacityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ExpandGroupCapacityRequest() = default ;
    ExpandGroupCapacityRequest(const ExpandGroupCapacityRequest &) = default ;
    ExpandGroupCapacityRequest(ExpandGroupCapacityRequest &&) = default ;
    ExpandGroupCapacityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExpandGroupCapacityRequest() = default ;
    ExpandGroupCapacityRequest& operator=(const ExpandGroupCapacityRequest &) = default ;
    ExpandGroupCapacityRequest& operator=(ExpandGroupCapacityRequest &&) = default ;
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
    inline ExpandGroupCapacityRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ExpandGroupCapacityRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ExpandGroupCapacityRequestTenantContext) };
    inline ExpandGroupCapacityRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, ExpandGroupCapacityRequestTenantContext) };
    inline ExpandGroupCapacityRequest& setTenantContext(const ExpandGroupCapacityRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ExpandGroupCapacityRequest& setTenantContext(ExpandGroupCapacityRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> openConversationId_ = nullptr;
    std::shared_ptr<ExpandGroupCapacityRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
