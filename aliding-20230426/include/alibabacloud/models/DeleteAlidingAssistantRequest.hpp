// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALIDINGASSISTANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALIDINGASSISTANTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAlidingAssistantRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteAlidingAssistantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlidingAssistantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlidingAssistantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DeleteAlidingAssistantRequest() = default ;
    DeleteAlidingAssistantRequest(const DeleteAlidingAssistantRequest &) = default ;
    DeleteAlidingAssistantRequest(DeleteAlidingAssistantRequest &&) = default ;
    DeleteAlidingAssistantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlidingAssistantRequest() = default ;
    DeleteAlidingAssistantRequest& operator=(const DeleteAlidingAssistantRequest &) = default ;
    DeleteAlidingAssistantRequest& operator=(DeleteAlidingAssistantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistantId_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // assistantId Field Functions 
    bool hasAssistantId() const { return this->assistantId_ != nullptr;};
    void deleteAssistantId() { this->assistantId_ = nullptr;};
    inline string assistantId() const { DARABONBA_PTR_GET_DEFAULT(assistantId_, "") };
    inline DeleteAlidingAssistantRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteAlidingAssistantRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteAlidingAssistantRequestTenantContext) };
    inline DeleteAlidingAssistantRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteAlidingAssistantRequestTenantContext) };
    inline DeleteAlidingAssistantRequest& setTenantContext(const DeleteAlidingAssistantRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteAlidingAssistantRequest& setTenantContext(DeleteAlidingAssistantRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assistantId_ = nullptr;
    std::shared_ptr<DeleteAlidingAssistantRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
