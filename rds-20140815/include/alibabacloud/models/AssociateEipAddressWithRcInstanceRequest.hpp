// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEEIPADDRESSWITHRCINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEEIPADDRESSWITHRCINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AssociateEipAddressWithRCInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateEipAddressWithRCInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateEipAddressWithRCInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AssociateEipAddressWithRCInstanceRequest() = default ;
    AssociateEipAddressWithRCInstanceRequest(const AssociateEipAddressWithRCInstanceRequest &) = default ;
    AssociateEipAddressWithRCInstanceRequest(AssociateEipAddressWithRCInstanceRequest &&) = default ;
    AssociateEipAddressWithRCInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateEipAddressWithRCInstanceRequest() = default ;
    AssociateEipAddressWithRCInstanceRequest& operator=(const AssociateEipAddressWithRCInstanceRequest &) = default ;
    AssociateEipAddressWithRCInstanceRequest& operator=(AssociateEipAddressWithRCInstanceRequest &&) = default ;
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
    inline AssociateEipAddressWithRCInstanceRequest& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssociateEipAddressWithRCInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateEipAddressWithRCInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The EIP ID.
    // 
    // >  If no EIP is available, create an EIP. For more information, see [Create an EIP](https://help.aliyun.com/document_detail/292841.html).
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
