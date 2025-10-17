// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGADINSTANCEDBMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHGADINSTANCEDBMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DetachGadInstanceDbMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachGadInstanceDbMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveDbInstanceId, slaveDbInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachGadInstanceDbMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveDbInstanceId, slaveDbInstanceId_);
    };
    DetachGadInstanceDbMemberRequest() = default ;
    DetachGadInstanceDbMemberRequest(const DetachGadInstanceDbMemberRequest &) = default ;
    DetachGadInstanceDbMemberRequest(DetachGadInstanceDbMemberRequest &&) = default ;
    DetachGadInstanceDbMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachGadInstanceDbMemberRequest() = default ;
    DetachGadInstanceDbMemberRequest& operator=(const DetachGadInstanceDbMemberRequest &) = default ;
    DetachGadInstanceDbMemberRequest& operator=(DetachGadInstanceDbMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->slaveDbInstanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachGadInstanceDbMemberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DetachGadInstanceDbMemberRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachGadInstanceDbMemberRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DetachGadInstanceDbMemberRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDbInstanceId Field Functions 
    bool hasSlaveDbInstanceId() const { return this->slaveDbInstanceId_ != nullptr;};
    void deleteSlaveDbInstanceId() { this->slaveDbInstanceId_ = nullptr;};
    inline string slaveDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(slaveDbInstanceId_, "") };
    inline DetachGadInstanceDbMemberRequest& setSlaveDbInstanceId(string slaveDbInstanceId) { DARABONBA_PTR_SET_VALUE(slaveDbInstanceId_, slaveDbInstanceId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> slaveDbInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
