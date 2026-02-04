// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMOTETOMASTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROMOTETOMASTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class PromoteToMasterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromoteToMasterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveDbInstanceId, slaveDbInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, PromoteToMasterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MasterDbInstanceId, masterDbInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveDbInstanceId, slaveDbInstanceId_);
    };
    PromoteToMasterRequest() = default ;
    PromoteToMasterRequest(const PromoteToMasterRequest &) = default ;
    PromoteToMasterRequest(PromoteToMasterRequest &&) = default ;
    PromoteToMasterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromoteToMasterRequest() = default ;
    PromoteToMasterRequest& operator=(const PromoteToMasterRequest &) = default ;
    PromoteToMasterRequest& operator=(PromoteToMasterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->masterDbInstanceId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->slaveDbInstanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PromoteToMasterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // masterDbInstanceId Field Functions 
    bool hasMasterDbInstanceId() const { return this->masterDbInstanceId_ != nullptr;};
    void deleteMasterDbInstanceId() { this->masterDbInstanceId_ = nullptr;};
    inline string getMasterDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterDbInstanceId_, "") };
    inline PromoteToMasterRequest& setMasterDbInstanceId(string masterDbInstanceId) { DARABONBA_PTR_SET_VALUE(masterDbInstanceId_, masterDbInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PromoteToMasterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline PromoteToMasterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDbInstanceId Field Functions 
    bool hasSlaveDbInstanceId() const { return this->slaveDbInstanceId_ != nullptr;};
    void deleteSlaveDbInstanceId() { this->slaveDbInstanceId_ = nullptr;};
    inline string getSlaveDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(slaveDbInstanceId_, "") };
    inline PromoteToMasterRequest& setSlaveDbInstanceId(string slaveDbInstanceId) { DARABONBA_PTR_SET_VALUE(slaveDbInstanceId_, slaveDbInstanceId) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> masterDbInstanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> slaveDbInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
