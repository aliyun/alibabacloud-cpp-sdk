// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLETENANT_HPP_
#define ALIBABACLOUD_MODELS_SINGLETENANT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class SingleTenant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleTenant& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(UUID, UUID_);
    };
    friend void from_json(const Darabonba::Json& j, SingleTenant& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(UUID, UUID_);
    };
    SingleTenant() = default ;
    SingleTenant(const SingleTenant &) = default ;
    SingleTenant(SingleTenant &&) = default ;
    SingleTenant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleTenant() = default ;
    SingleTenant& operator=(const SingleTenant &) = default ;
    SingleTenant& operator=(SingleTenant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->status_ == nullptr && this->tenantId_ == nullptr && this->tenantName_ == nullptr && this->UUID_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SingleTenant& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SingleTenant& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SingleTenant& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline SingleTenant& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // UUID Field Functions 
    bool hasUUID() const { return this->UUID_ != nullptr;};
    void deleteUUID() { this->UUID_ = nullptr;};
    inline string getUUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
    inline SingleTenant& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


  protected:
    // Tenant description
    shared_ptr<string> description_ {};
    // Tenant status
    shared_ptr<string> status_ {};
    // Tenant ID
    shared_ptr<string> tenantId_ {};
    // Tenant name
    shared_ptr<string> tenantName_ {};
    // Tenant UUID
    shared_ptr<string> UUID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
