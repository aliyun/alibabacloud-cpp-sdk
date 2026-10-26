// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICDBTENANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICDBTENANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAgenticDBTenantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticDBTenantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticDBTenantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
    };
    CreateAgenticDBTenantRequest() = default ;
    CreateAgenticDBTenantRequest(const CreateAgenticDBTenantRequest &) = default ;
    CreateAgenticDBTenantRequest(CreateAgenticDBTenantRequest &&) = default ;
    CreateAgenticDBTenantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticDBTenantRequest() = default ;
    CreateAgenticDBTenantRequest& operator=(const CreateAgenticDBTenantRequest &) = default ;
    CreateAgenticDBTenantRequest& operator=(CreateAgenticDBTenantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->description_ == nullptr && this->regionId_ == nullptr && this->tenantName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAgenticDBTenantRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgenticDBTenantRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAgenticDBTenantRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline CreateAgenticDBTenantRequest& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


  protected:
    // The AgenticDB cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The description of the tenant. The description can be up to 256 characters in length.
    shared_ptr<string> description_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The name of the tenant. It must be 1 to 64 characters in length, start with a letter, and contain only letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> tenantName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
