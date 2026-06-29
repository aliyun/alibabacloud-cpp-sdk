// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class UpdateTenantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
    };
    UpdateTenantRequest() = default ;
    UpdateTenantRequest(const UpdateTenantRequest &) = default ;
    UpdateTenantRequest(UpdateTenantRequest &&) = default ;
    UpdateTenantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantRequest() = default ;
    UpdateTenantRequest& operator=(const UpdateTenantRequest &) = default ;
    UpdateTenantRequest& operator=(UpdateTenantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->tenantName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTenantRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline UpdateTenantRequest& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


  protected:
    // Tenant description.
    shared_ptr<string> description_ {};
    // Tenant name.
    shared_ptr<string> tenantName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
