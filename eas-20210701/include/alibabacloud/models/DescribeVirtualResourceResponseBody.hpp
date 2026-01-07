// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALRESOURCERESPONSEBODY_HPP_
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
  class DescribeVirtualResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(ServiceCount, serviceCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VirtualResourceId, virtualResourceId_);
      DARABONBA_PTR_TO_JSON(VirtualResourceName, virtualResourceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(ServiceCount, serviceCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceId, virtualResourceId_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceName, virtualResourceName_);
    };
    DescribeVirtualResourceResponseBody() = default ;
    DescribeVirtualResourceResponseBody(const DescribeVirtualResourceResponseBody &) = default ;
    DescribeVirtualResourceResponseBody(DescribeVirtualResourceResponseBody &&) = default ;
    DescribeVirtualResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualResourceResponseBody() = default ;
    DescribeVirtualResourceResponseBody& operator=(const DescribeVirtualResourceResponseBody &) = default ;
    DescribeVirtualResourceResponseBody& operator=(DescribeVirtualResourceResponseBody &&) = default ;
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
      shared_ptr<string> instanceType_ {};
      // The priority of resource scheduling. A greater number specifies a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The instance type of the public resource group.
      shared_ptr<string> quotaId_ {};
      // The region where the resource resides.
      shared_ptr<string> region_ {};
      // The ID of the dedicated resource group.
      shared_ptr<string> resourceId_ {};
      // The maximum price of preemptible instances in a public resource group.
      shared_ptr<float> spotPriceLimit_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->disableSpotProtectionPeriod_ == nullptr && this->features_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr && this->serviceCount_ == nullptr
        && this->updateTime_ == nullptr && this->virtualResourceId_ == nullptr && this->virtualResourceName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeVirtualResourceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // disableSpotProtectionPeriod Field Functions 
    bool hasDisableSpotProtectionPeriod() const { return this->disableSpotProtectionPeriod_ != nullptr;};
    void deleteDisableSpotProtectionPeriod() { this->disableSpotProtectionPeriod_ = nullptr;};
    inline bool getDisableSpotProtectionPeriod() const { DARABONBA_PTR_GET_DEFAULT(disableSpotProtectionPeriod_, false) };
    inline DescribeVirtualResourceResponseBody& setDisableSpotProtectionPeriod(bool disableSpotProtectionPeriod) { DARABONBA_PTR_SET_VALUE(disableSpotProtectionPeriod_, disableSpotProtectionPeriod) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<string> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
    inline vector<string> getFeatures() { DARABONBA_PTR_GET(features_, vector<string>) };
    inline DescribeVirtualResourceResponseBody& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline DescribeVirtualResourceResponseBody& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DescribeVirtualResourceResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DescribeVirtualResourceResponseBody::Resources>) };
    inline vector<DescribeVirtualResourceResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<DescribeVirtualResourceResponseBody::Resources>) };
    inline DescribeVirtualResourceResponseBody& setResources(const vector<DescribeVirtualResourceResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeVirtualResourceResponseBody& setResources(vector<DescribeVirtualResourceResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // serviceCount Field Functions 
    bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
    void deleteServiceCount() { this->serviceCount_ = nullptr;};
    inline int32_t getServiceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, 0) };
    inline DescribeVirtualResourceResponseBody& setServiceCount(int32_t serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeVirtualResourceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // virtualResourceId Field Functions 
    bool hasVirtualResourceId() const { return this->virtualResourceId_ != nullptr;};
    void deleteVirtualResourceId() { this->virtualResourceId_ = nullptr;};
    inline string getVirtualResourceId() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceId_, "") };
    inline DescribeVirtualResourceResponseBody& setVirtualResourceId(string virtualResourceId) { DARABONBA_PTR_SET_VALUE(virtualResourceId_, virtualResourceId) };


    // virtualResourceName Field Functions 
    bool hasVirtualResourceName() const { return this->virtualResourceName_ != nullptr;};
    void deleteVirtualResourceName() { this->virtualResourceName_ = nullptr;};
    inline string getVirtualResourceName() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceName_, "") };
    inline DescribeVirtualResourceResponseBody& setVirtualResourceName(string virtualResourceName) { DARABONBA_PTR_SET_VALUE(virtualResourceName_, virtualResourceName) };


  protected:
    // The time when the virtual resource group was created.
    shared_ptr<string> createTime_ {};
    // Indicates whether the retention period of preemptible instances was disabled.
    shared_ptr<bool> disableSpotProtectionPeriod_ {};
    shared_ptr<vector<string>> features_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of resources in the virtual resource group.
    shared_ptr<vector<DescribeVirtualResourceResponseBody::Resources>> resources_ {};
    // The number of deployed services.
    shared_ptr<int32_t> serviceCount_ {};
    // The time when the virtual resource group was last updated.
    shared_ptr<string> updateTime_ {};
    // The ID of the virtual resource group.
    shared_ptr<string> virtualResourceId_ {};
    // The name of the virtual resource group.
    shared_ptr<string> virtualResourceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
