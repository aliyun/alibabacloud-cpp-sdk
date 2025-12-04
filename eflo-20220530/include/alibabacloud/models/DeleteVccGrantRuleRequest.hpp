// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVCCGRANTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVCCGRANTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class DeleteVccGrantRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVccGrantRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(GrantRuleId, grantRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVccGrantRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(GrantRuleId, grantRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteVccGrantRuleRequest() = default ;
    DeleteVccGrantRuleRequest(const DeleteVccGrantRuleRequest &) = default ;
    DeleteVccGrantRuleRequest(DeleteVccGrantRuleRequest &&) = default ;
    DeleteVccGrantRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVccGrantRuleRequest() = default ;
    DeleteVccGrantRuleRequest& operator=(const DeleteVccGrantRuleRequest &) = default ;
    DeleteVccGrantRuleRequest& operator=(DeleteVccGrantRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erId_ == nullptr
        && return this->grantRuleId_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline DeleteVccGrantRuleRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // grantRuleId Field Functions 
    bool hasGrantRuleId() const { return this->grantRuleId_ != nullptr;};
    void deleteGrantRuleId() { this->grantRuleId_ = nullptr;};
    inline string grantRuleId() const { DARABONBA_PTR_GET_DEFAULT(grantRuleId_, "") };
    inline DeleteVccGrantRuleRequest& setGrantRuleId(string grantRuleId) { DARABONBA_PTR_SET_VALUE(grantRuleId_, grantRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteVccGrantRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteVccGrantRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Lingjun HUB ID
    std::shared_ptr<string> erId_ = nullptr;
    // Authorization Entry ID
    // 
    // This parameter is required.
    std::shared_ptr<string> grantRuleId_ = nullptr;
    // Network Instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
