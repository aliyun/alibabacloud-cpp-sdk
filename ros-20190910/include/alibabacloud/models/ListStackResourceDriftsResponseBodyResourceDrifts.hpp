// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKRESOURCEDRIFTSRESPONSEBODYRESOURCEDRIFTS_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKRESOURCEDRIFTSRESPONSEBODYRESOURCEDRIFTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListStackResourceDriftsResponseBodyResourceDriftsModuleInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackResourceDriftsResponseBodyResourceDrifts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackResourceDriftsResponseBodyResourceDrifts& obj) { 
      DARABONBA_PTR_TO_JSON(ActualProperties, actualProperties_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(ExpectedProperties, expectedProperties_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(ModuleInfo, moduleInfo_);
      DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_TO_JSON(PropertyDifferences, propertyDifferences_);
      DARABONBA_PTR_TO_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackResourceDriftsResponseBodyResourceDrifts& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualProperties, actualProperties_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(ExpectedProperties, expectedProperties_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(ModuleInfo, moduleInfo_);
      DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_FROM_JSON(PropertyDifferences, propertyDifferences_);
      DARABONBA_PTR_FROM_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    ListStackResourceDriftsResponseBodyResourceDrifts() = default ;
    ListStackResourceDriftsResponseBodyResourceDrifts(const ListStackResourceDriftsResponseBodyResourceDrifts &) = default ;
    ListStackResourceDriftsResponseBodyResourceDrifts(ListStackResourceDriftsResponseBodyResourceDrifts &&) = default ;
    ListStackResourceDriftsResponseBodyResourceDrifts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackResourceDriftsResponseBodyResourceDrifts() = default ;
    ListStackResourceDriftsResponseBodyResourceDrifts& operator=(const ListStackResourceDriftsResponseBodyResourceDrifts &) = default ;
    ListStackResourceDriftsResponseBodyResourceDrifts& operator=(ListStackResourceDriftsResponseBodyResourceDrifts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualProperties_ != nullptr
        && this->driftDetectionTime_ != nullptr && this->expectedProperties_ != nullptr && this->logicalResourceId_ != nullptr && this->moduleInfo_ != nullptr && this->physicalResourceId_ != nullptr
        && this->propertyDifferences_ != nullptr && this->resourceDriftStatus_ != nullptr && this->resourceType_ != nullptr && this->stackId_ != nullptr; };
    // actualProperties Field Functions 
    bool hasActualProperties() const { return this->actualProperties_ != nullptr;};
    void deleteActualProperties() { this->actualProperties_ = nullptr;};
    inline string actualProperties() const { DARABONBA_PTR_GET_DEFAULT(actualProperties_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setActualProperties(string actualProperties) { DARABONBA_PTR_SET_VALUE(actualProperties_, actualProperties) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // expectedProperties Field Functions 
    bool hasExpectedProperties() const { return this->expectedProperties_ != nullptr;};
    void deleteExpectedProperties() { this->expectedProperties_ = nullptr;};
    inline string expectedProperties() const { DARABONBA_PTR_GET_DEFAULT(expectedProperties_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setExpectedProperties(string expectedProperties) { DARABONBA_PTR_SET_VALUE(expectedProperties_, expectedProperties) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string logicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // moduleInfo Field Functions 
    bool hasModuleInfo() const { return this->moduleInfo_ != nullptr;};
    void deleteModuleInfo() { this->moduleInfo_ = nullptr;};
    inline const Models::ListStackResourceDriftsResponseBodyResourceDriftsModuleInfo & moduleInfo() const { DARABONBA_PTR_GET_CONST(moduleInfo_, Models::ListStackResourceDriftsResponseBodyResourceDriftsModuleInfo) };
    inline Models::ListStackResourceDriftsResponseBodyResourceDriftsModuleInfo moduleInfo() { DARABONBA_PTR_GET(moduleInfo_, Models::ListStackResourceDriftsResponseBodyResourceDriftsModuleInfo) };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setModuleInfo(const Models::ListStackResourceDriftsResponseBodyResourceDriftsModuleInfo & moduleInfo) { DARABONBA_PTR_SET_VALUE(moduleInfo_, moduleInfo) };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setModuleInfo(Models::ListStackResourceDriftsResponseBodyResourceDriftsModuleInfo && moduleInfo) { DARABONBA_PTR_SET_RVALUE(moduleInfo_, moduleInfo) };


    // physicalResourceId Field Functions 
    bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
    void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
    inline string physicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


    // propertyDifferences Field Functions 
    bool hasPropertyDifferences() const { return this->propertyDifferences_ != nullptr;};
    void deletePropertyDifferences() { this->propertyDifferences_ = nullptr;};
    inline const vector<Models::ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences> & propertyDifferences() const { DARABONBA_PTR_GET_CONST(propertyDifferences_, vector<Models::ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences>) };
    inline vector<Models::ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences> propertyDifferences() { DARABONBA_PTR_GET(propertyDifferences_, vector<Models::ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences>) };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setPropertyDifferences(const vector<Models::ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences> & propertyDifferences) { DARABONBA_PTR_SET_VALUE(propertyDifferences_, propertyDifferences) };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setPropertyDifferences(vector<Models::ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences> && propertyDifferences) { DARABONBA_PTR_SET_RVALUE(propertyDifferences_, propertyDifferences) };


    // resourceDriftStatus Field Functions 
    bool hasResourceDriftStatus() const { return this->resourceDriftStatus_ != nullptr;};
    void deleteResourceDriftStatus() { this->resourceDriftStatus_ = nullptr;};
    inline string resourceDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceDriftStatus_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setResourceDriftStatus(string resourceDriftStatus) { DARABONBA_PTR_SET_VALUE(resourceDriftStatus_, resourceDriftStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDrifts& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The actual JSON-formatted resource properties.
    std::shared_ptr<string> actualProperties_ = nullptr;
    // The time when the drift detection operation was performed on the resource.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The JSON-formatted resource properties that are defined in the template.
    std::shared_ptr<string> expectedProperties_ = nullptr;
    // The logical ID of the resource. The logical ID indicates the name of the resource that is defined in the template.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The information about the modules from which the resource was created. This parameter is returned only if the resource is created from modules.
    std::shared_ptr<Models::ListStackResourceDriftsResponseBodyResourceDriftsModuleInfo> moduleInfo_ = nullptr;
    // The physical ID of the resource.
    std::shared_ptr<string> physicalResourceId_ = nullptr;
    // The property drifts of the resource.
    std::shared_ptr<vector<Models::ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences>> propertyDifferences_ = nullptr;
    // The drift state of the resource. Valid values:
    // 
    // *   DELETED: The actual configuration of the resource differs from its expected template configuration because the resource is deleted.
    // *   MODIFIED: The actual configuration of the resource differs from its expected template configuration.
    // *   NOT_CHECKED: Resource Orchestration Service (ROS) has not checked whether the actual configuration of the resource differs from its expected template configuration.
    // *   IN_SYNC: The actual configuration of the resource matches its expected template configuration.
    std::shared_ptr<string> resourceDriftStatus_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The stack ID.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
