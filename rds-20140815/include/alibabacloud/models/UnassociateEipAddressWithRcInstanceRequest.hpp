// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATEEIPADDRESSWITHRCINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATEEIPADDRESSWITHRCINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class UnassociateEipAddressWithRCInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnassociateEipAddressWithRCInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UnassociateEipAddressWithRCInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UnassociateEipAddressWithRCInstanceRequest() = default ;
    UnassociateEipAddressWithRCInstanceRequest(const UnassociateEipAddressWithRCInstanceRequest &) = default ;
    UnassociateEipAddressWithRCInstanceRequest(UnassociateEipAddressWithRCInstanceRequest &&) = default ;
    UnassociateEipAddressWithRCInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnassociateEipAddressWithRCInstanceRequest() = default ;
    UnassociateEipAddressWithRCInstanceRequest& operator=(const UnassociateEipAddressWithRCInstanceRequest &) = default ;
    UnassociateEipAddressWithRCInstanceRequest& operator=(UnassociateEipAddressWithRCInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline UnassociateEipAddressWithRCInstanceRequest& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UnassociateEipAddressWithRCInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnassociateEipAddressWithRCInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The EIP ID.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
