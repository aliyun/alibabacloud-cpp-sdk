// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDRIVESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDRIVESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddDriveSpaceRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddDriveSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDriveSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddDriveSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    AddDriveSpaceRequest() = default ;
    AddDriveSpaceRequest(const AddDriveSpaceRequest &) = default ;
    AddDriveSpaceRequest(AddDriveSpaceRequest &&) = default ;
    AddDriveSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDriveSpaceRequest() = default ;
    AddDriveSpaceRequest& operator=(const AddDriveSpaceRequest &) = default ;
    AddDriveSpaceRequest& operator=(AddDriveSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->tenantContext_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddDriveSpaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddDriveSpaceRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddDriveSpaceRequestTenantContext) };
    inline AddDriveSpaceRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, AddDriveSpaceRequestTenantContext) };
    inline AddDriveSpaceRequest& setTenantContext(const AddDriveSpaceRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddDriveSpaceRequest& setTenantContext(AddDriveSpaceRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<AddDriveSpaceRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
