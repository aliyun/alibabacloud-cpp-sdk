// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTTENANTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTTENANTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskRequestTenantContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskRequestTenantContext& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskRequestTenantContext& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateTodoTaskRequestTenantContext() = default ;
    CreateTodoTaskRequestTenantContext(const CreateTodoTaskRequestTenantContext &) = default ;
    CreateTodoTaskRequestTenantContext(CreateTodoTaskRequestTenantContext &&) = default ;
    CreateTodoTaskRequestTenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskRequestTenantContext() = default ;
    CreateTodoTaskRequestTenantContext& operator=(const CreateTodoTaskRequestTenantContext &) = default ;
    CreateTodoTaskRequestTenantContext& operator=(CreateTodoTaskRequestTenantContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateTodoTaskRequestTenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
