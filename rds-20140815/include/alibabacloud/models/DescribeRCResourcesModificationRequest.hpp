// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCResourcesModificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCResourcesModificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Conditionss, conditionss_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(DestinationResource, destinationResource_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCResourcesModificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditionss, conditionss_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(DestinationResource, destinationResource_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCResourcesModificationRequest() = default ;
    DescribeRCResourcesModificationRequest(const DescribeRCResourcesModificationRequest &) = default ;
    DescribeRCResourcesModificationRequest(DescribeRCResourcesModificationRequest &&) = default ;
    DescribeRCResourcesModificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCResourcesModificationRequest() = default ;
    DescribeRCResourcesModificationRequest& operator=(const DescribeRCResourcesModificationRequest &) = default ;
    DescribeRCResourcesModificationRequest& operator=(DescribeRCResourcesModificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionss_ == nullptr
        && this->cores_ == nullptr && this->destinationResource_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr
        && this->operationType_ == nullptr && this->regionId_ == nullptr && this->zoneId_ == nullptr; };
    // conditionss Field Functions 
    bool hasConditionss() const { return this->conditionss_ != nullptr;};
    void deleteConditionss() { this->conditionss_ = nullptr;};
    inline const vector<string> & getConditionss() const { DARABONBA_PTR_GET_CONST(conditionss_, vector<string>) };
    inline vector<string> getConditionss() { DARABONBA_PTR_GET(conditionss_, vector<string>) };
    inline DescribeRCResourcesModificationRequest& setConditionss(const vector<string> & conditionss) { DARABONBA_PTR_SET_VALUE(conditionss_, conditionss) };
    inline DescribeRCResourcesModificationRequest& setConditionss(vector<string> && conditionss) { DARABONBA_PTR_SET_RVALUE(conditionss_, conditionss) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeRCResourcesModificationRequest& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // destinationResource Field Functions 
    bool hasDestinationResource() const { return this->destinationResource_ != nullptr;};
    void deleteDestinationResource() { this->destinationResource_ = nullptr;};
    inline string getDestinationResource() const { DARABONBA_PTR_GET_DEFAULT(destinationResource_, "") };
    inline DescribeRCResourcesModificationRequest& setDestinationResource(string destinationResource) { DARABONBA_PTR_SET_VALUE(destinationResource_, destinationResource) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCResourcesModificationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRCResourcesModificationRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeRCResourcesModificationRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeRCResourcesModificationRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCResourcesModificationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCResourcesModificationRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<vector<string>> conditionss_ {};
    shared_ptr<int32_t> cores_ {};
    // This parameter is required.
    shared_ptr<string> destinationResource_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<float> memory_ {};
    shared_ptr<string> operationType_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
