// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCGRANTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVCCGRANTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccGrantRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccGrantRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(GrantRuleId, grantRuleId_);
      DARABONBA_PTR_TO_JSON(GrantTenantId, grantTenantId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccGrantRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(GrantRuleId, grantRuleId_);
      DARABONBA_PTR_FROM_JSON(GrantTenantId, grantTenantId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetVccGrantRuleRequest() = default ;
    GetVccGrantRuleRequest(const GetVccGrantRuleRequest &) = default ;
    GetVccGrantRuleRequest(GetVccGrantRuleRequest &&) = default ;
    GetVccGrantRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccGrantRuleRequest() = default ;
    GetVccGrantRuleRequest& operator=(const GetVccGrantRuleRequest &) = default ;
    GetVccGrantRuleRequest& operator=(GetVccGrantRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erId_ == nullptr
        && return this->grantRuleId_ == nullptr && return this->grantTenantId_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline GetVccGrantRuleRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // grantRuleId Field Functions 
    bool hasGrantRuleId() const { return this->grantRuleId_ != nullptr;};
    void deleteGrantRuleId() { this->grantRuleId_ = nullptr;};
    inline string grantRuleId() const { DARABONBA_PTR_GET_DEFAULT(grantRuleId_, "") };
    inline GetVccGrantRuleRequest& setGrantRuleId(string grantRuleId) { DARABONBA_PTR_SET_VALUE(grantRuleId_, grantRuleId) };


    // grantTenantId Field Functions 
    bool hasGrantTenantId() const { return this->grantTenantId_ != nullptr;};
    void deleteGrantTenantId() { this->grantTenantId_ = nullptr;};
    inline string grantTenantId() const { DARABONBA_PTR_GET_DEFAULT(grantTenantId_, "") };
    inline GetVccGrantRuleRequest& setGrantTenantId(string grantTenantId) { DARABONBA_PTR_SET_VALUE(grantTenantId_, grantTenantId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetVccGrantRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVccGrantRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Lingjun HUB Instance ID
    std::shared_ptr<string> erId_ = nullptr;
    // Authorized Resource Instance ID
    // 
    // This parameter is required.
    std::shared_ptr<string> grantRuleId_ = nullptr;
    // Authorized Tenant ID
    std::shared_ptr<string> grantTenantId_ = nullptr;
    // Authorized Instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region. This parameter is required.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
