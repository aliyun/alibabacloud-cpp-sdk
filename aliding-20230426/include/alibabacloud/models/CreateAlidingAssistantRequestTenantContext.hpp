// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALIDINGASSISTANTREQUESTTENANTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATEALIDINGASSISTANTREQUESTTENANTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateAlidingAssistantRequestTenantContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlidingAssistantRequestTenantContext& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlidingAssistantRequestTenantContext& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateAlidingAssistantRequestTenantContext() = default ;
    CreateAlidingAssistantRequestTenantContext(const CreateAlidingAssistantRequestTenantContext &) = default ;
    CreateAlidingAssistantRequestTenantContext(CreateAlidingAssistantRequestTenantContext &&) = default ;
    CreateAlidingAssistantRequestTenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlidingAssistantRequestTenantContext() = default ;
    CreateAlidingAssistantRequestTenantContext& operator=(const CreateAlidingAssistantRequestTenantContext &) = default ;
    CreateAlidingAssistantRequestTenantContext& operator=(CreateAlidingAssistantRequestTenantContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantId_ != nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateAlidingAssistantRequestTenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
