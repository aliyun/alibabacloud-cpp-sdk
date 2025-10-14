// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIDINGASSISTANTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIDINGASSISTANTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlidingAssistantInfoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAlidingAssistantInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlidingAssistantInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlidingAssistantInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetAlidingAssistantInfoRequest() = default ;
    GetAlidingAssistantInfoRequest(const GetAlidingAssistantInfoRequest &) = default ;
    GetAlidingAssistantInfoRequest(GetAlidingAssistantInfoRequest &&) = default ;
    GetAlidingAssistantInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlidingAssistantInfoRequest() = default ;
    GetAlidingAssistantInfoRequest& operator=(const GetAlidingAssistantInfoRequest &) = default ;
    GetAlidingAssistantInfoRequest& operator=(GetAlidingAssistantInfoRequest &&) = default ;
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
    inline GetAlidingAssistantInfoRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetAlidingAssistantInfoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetAlidingAssistantInfoRequestTenantContext) };
    inline GetAlidingAssistantInfoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetAlidingAssistantInfoRequestTenantContext) };
    inline GetAlidingAssistantInfoRequest& setTenantContext(const GetAlidingAssistantInfoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetAlidingAssistantInfoRequest& setTenantContext(GetAlidingAssistantInfoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assistantId_ = nullptr;
    std::shared_ptr<GetAlidingAssistantInfoRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
