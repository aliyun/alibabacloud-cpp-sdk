// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCResourcesModificationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCResourcesModificationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Conditionss, conditionssShrink_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(DestinationResource, destinationResource_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCResourcesModificationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditionss, conditionssShrink_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(DestinationResource, destinationResource_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCResourcesModificationShrinkRequest() = default ;
    DescribeRCResourcesModificationShrinkRequest(const DescribeRCResourcesModificationShrinkRequest &) = default ;
    DescribeRCResourcesModificationShrinkRequest(DescribeRCResourcesModificationShrinkRequest &&) = default ;
    DescribeRCResourcesModificationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCResourcesModificationShrinkRequest() = default ;
    DescribeRCResourcesModificationShrinkRequest& operator=(const DescribeRCResourcesModificationShrinkRequest &) = default ;
    DescribeRCResourcesModificationShrinkRequest& operator=(DescribeRCResourcesModificationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionssShrink_ == nullptr
        && return this->cores_ == nullptr && return this->destinationResource_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->memory_ == nullptr
        && return this->operationType_ == nullptr && return this->regionId_ == nullptr && return this->zoneId_ == nullptr; };
    // conditionssShrink Field Functions 
    bool hasConditionssShrink() const { return this->conditionssShrink_ != nullptr;};
    void deleteConditionssShrink() { this->conditionssShrink_ = nullptr;};
    inline string conditionssShrink() const { DARABONBA_PTR_GET_DEFAULT(conditionssShrink_, "") };
    inline DescribeRCResourcesModificationShrinkRequest& setConditionssShrink(string conditionssShrink) { DARABONBA_PTR_SET_VALUE(conditionssShrink_, conditionssShrink) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeRCResourcesModificationShrinkRequest& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // destinationResource Field Functions 
    bool hasDestinationResource() const { return this->destinationResource_ != nullptr;};
    void deleteDestinationResource() { this->destinationResource_ = nullptr;};
    inline string destinationResource() const { DARABONBA_PTR_GET_DEFAULT(destinationResource_, "") };
    inline DescribeRCResourcesModificationShrinkRequest& setDestinationResource(string destinationResource) { DARABONBA_PTR_SET_VALUE(destinationResource_, destinationResource) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCResourcesModificationShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRCResourcesModificationShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeRCResourcesModificationShrinkRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeRCResourcesModificationShrinkRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCResourcesModificationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCResourcesModificationShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> conditionssShrink_ = nullptr;
    std::shared_ptr<int32_t> cores_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> destinationResource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<float> memory_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
