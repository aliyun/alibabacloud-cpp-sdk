// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIRTUALRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIRTUALRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateVirtualResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVirtualResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(VirtualResourceName, virtualResourceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVirtualResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceName, virtualResourceName_);
    };
    UpdateVirtualResourceRequest() = default ;
    UpdateVirtualResourceRequest(const UpdateVirtualResourceRequest &) = default ;
    UpdateVirtualResourceRequest(UpdateVirtualResourceRequest &&) = default ;
    UpdateVirtualResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVirtualResourceRequest() = default ;
    UpdateVirtualResourceRequest& operator=(const UpdateVirtualResourceRequest &) = default ;
    UpdateVirtualResourceRequest& operator=(UpdateVirtualResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->priority_ == nullptr && this->quotaId_ == nullptr && this->region_ == nullptr && this->resourceId_ == nullptr && this->spotPriceLimit_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Resources& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Resources& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // quotaId Field Functions 
      bool hasQuotaId() const { return this->quotaId_ != nullptr;};
      void deleteQuotaId() { this->quotaId_ = nullptr;};
      inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
      inline Resources& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Resources& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // spotPriceLimit Field Functions 
      bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
      void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
      inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
      inline Resources& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    protected:
      // The instance type of the public resource group.
      // 
      // >  You must specify one and only one of the InstanceType, ResourceId, and QuotaId parameters.
      shared_ptr<string> instanceType_ {};
      // The priority of resource scheduling. A greater number indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The ID of the Lingjun resource quota.
      // 
      // >  You must specify one and only one of the InstanceType, ResourceId, and QuotaId parameters.
      shared_ptr<string> quotaId_ {};
      // The region in which the resource resides.
      shared_ptr<string> region_ {};
      // The ID of the dedicated resource group. For information about how to obtain the ID of a dedicated resource group, see [ListResources](https://help.aliyun.com/document_detail/412133.html).
      // 
      // >  You must specify one and only one of the InstanceType, ResourceId, and QuotaId parameters.
      shared_ptr<string> resourceId_ {};
      // The maximum price of preemptible instances in a public resource group.
      // 
      // >  If you leave this parameter empty, preemptible instances are not used.
      shared_ptr<float> spotPriceLimit_ {};
    };

    virtual bool empty() const override { return this->disableSpotProtectionPeriod_ == nullptr
        && this->resources_ == nullptr && this->virtualResourceName_ == nullptr; };
    // disableSpotProtectionPeriod Field Functions 
    bool hasDisableSpotProtectionPeriod() const { return this->disableSpotProtectionPeriod_ != nullptr;};
    void deleteDisableSpotProtectionPeriod() { this->disableSpotProtectionPeriod_ = nullptr;};
    inline bool getDisableSpotProtectionPeriod() const { DARABONBA_PTR_GET_DEFAULT(disableSpotProtectionPeriod_, false) };
    inline UpdateVirtualResourceRequest& setDisableSpotProtectionPeriod(bool disableSpotProtectionPeriod) { DARABONBA_PTR_SET_VALUE(disableSpotProtectionPeriod_, disableSpotProtectionPeriod) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<UpdateVirtualResourceRequest::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<UpdateVirtualResourceRequest::Resources>) };
    inline vector<UpdateVirtualResourceRequest::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<UpdateVirtualResourceRequest::Resources>) };
    inline UpdateVirtualResourceRequest& setResources(const vector<UpdateVirtualResourceRequest::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline UpdateVirtualResourceRequest& setResources(vector<UpdateVirtualResourceRequest::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // virtualResourceName Field Functions 
    bool hasVirtualResourceName() const { return this->virtualResourceName_ != nullptr;};
    void deleteVirtualResourceName() { this->virtualResourceName_ = nullptr;};
    inline string getVirtualResourceName() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceName_, "") };
    inline UpdateVirtualResourceRequest& setVirtualResourceName(string virtualResourceName) { DARABONBA_PTR_SET_VALUE(virtualResourceName_, virtualResourceName) };


  protected:
    // Specifies whether to disable the retention period of preemptible instances.
    shared_ptr<bool> disableSpotProtectionPeriod_ {};
    // The resources in the virtual resource group.
    // 
    // >  If you specify this parameter, previous data is overwritten.
    shared_ptr<vector<UpdateVirtualResourceRequest::Resources>> resources_ {};
    // The new name of the virtual resource group.
    shared_ptr<string> virtualResourceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
