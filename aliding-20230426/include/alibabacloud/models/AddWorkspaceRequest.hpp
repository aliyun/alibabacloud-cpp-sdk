// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddWorkspaceRequestOption.hpp>
#include <alibabacloud/models/AddWorkspaceRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    AddWorkspaceRequest() = default ;
    AddWorkspaceRequest(const AddWorkspaceRequest &) = default ;
    AddWorkspaceRequest(AddWorkspaceRequest &&) = default ;
    AddWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceRequest() = default ;
    AddWorkspaceRequest& operator=(const AddWorkspaceRequest &) = default ;
    AddWorkspaceRequest& operator=(AddWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->option_ == nullptr && return this->tenantContext_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddWorkspaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const AddWorkspaceRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, AddWorkspaceRequestOption) };
    inline AddWorkspaceRequestOption option() { DARABONBA_PTR_GET(option_, AddWorkspaceRequestOption) };
    inline AddWorkspaceRequest& setOption(const AddWorkspaceRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline AddWorkspaceRequest& setOption(AddWorkspaceRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddWorkspaceRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddWorkspaceRequestTenantContext) };
    inline AddWorkspaceRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, AddWorkspaceRequestTenantContext) };
    inline AddWorkspaceRequest& setTenantContext(const AddWorkspaceRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddWorkspaceRequest& setTenantContext(AddWorkspaceRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<AddWorkspaceRequestOption> option_ = nullptr;
    std::shared_ptr<AddWorkspaceRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
