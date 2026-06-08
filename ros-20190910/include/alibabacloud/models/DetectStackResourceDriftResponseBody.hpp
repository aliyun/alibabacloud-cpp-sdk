// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTSTACKRESOURCEDRIFTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTSTACKRESOURCEDRIFTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class DetectStackResourceDriftResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectStackResourceDriftResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActualProperties, actualProperties_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(ExpectedProperties, expectedProperties_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_TO_JSON(PropertyDifferences, propertyDifferences_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectStackResourceDriftResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualProperties, actualProperties_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(ExpectedProperties, expectedProperties_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_FROM_JSON(PropertyDifferences, propertyDifferences_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDriftStatus, resourceDriftStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    DetectStackResourceDriftResponseBody() = default ;
    DetectStackResourceDriftResponseBody(const DetectStackResourceDriftResponseBody &) = default ;
    DetectStackResourceDriftResponseBody(DetectStackResourceDriftResponseBody &&) = default ;
    DetectStackResourceDriftResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectStackResourceDriftResponseBody() = default ;
    DetectStackResourceDriftResponseBody& operator=(const DetectStackResourceDriftResponseBody &) = default ;
    DetectStackResourceDriftResponseBody& operator=(DetectStackResourceDriftResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyDifferences : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyDifferences& obj) { 
        DARABONBA_PTR_TO_JSON(ActualValue, actualValue_);
        DARABONBA_PTR_TO_JSON(DifferenceType, differenceType_);
        DARABONBA_PTR_TO_JSON(ExpectedValue, expectedValue_);
        DARABONBA_PTR_TO_JSON(PropertyPath, propertyPath_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyDifferences& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualValue, actualValue_);
        DARABONBA_PTR_FROM_JSON(DifferenceType, differenceType_);
        DARABONBA_PTR_FROM_JSON(ExpectedValue, expectedValue_);
        DARABONBA_PTR_FROM_JSON(PropertyPath, propertyPath_);
      };
      PropertyDifferences() = default ;
      PropertyDifferences(const PropertyDifferences &) = default ;
      PropertyDifferences(PropertyDifferences &&) = default ;
      PropertyDifferences(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyDifferences() = default ;
      PropertyDifferences& operator=(const PropertyDifferences &) = default ;
      PropertyDifferences& operator=(PropertyDifferences &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actualValue_ == nullptr
        && this->differenceType_ == nullptr && this->expectedValue_ == nullptr && this->propertyPath_ == nullptr; };
      // actualValue Field Functions 
      bool hasActualValue() const { return this->actualValue_ != nullptr;};
      void deleteActualValue() { this->actualValue_ = nullptr;};
      inline string getActualValue() const { DARABONBA_PTR_GET_DEFAULT(actualValue_, "") };
      inline PropertyDifferences& setActualValue(string actualValue) { DARABONBA_PTR_SET_VALUE(actualValue_, actualValue) };


      // differenceType Field Functions 
      bool hasDifferenceType() const { return this->differenceType_ != nullptr;};
      void deleteDifferenceType() { this->differenceType_ = nullptr;};
      inline string getDifferenceType() const { DARABONBA_PTR_GET_DEFAULT(differenceType_, "") };
      inline PropertyDifferences& setDifferenceType(string differenceType) { DARABONBA_PTR_SET_VALUE(differenceType_, differenceType) };


      // expectedValue Field Functions 
      bool hasExpectedValue() const { return this->expectedValue_ != nullptr;};
      void deleteExpectedValue() { this->expectedValue_ = nullptr;};
      inline string getExpectedValue() const { DARABONBA_PTR_GET_DEFAULT(expectedValue_, "") };
      inline PropertyDifferences& setExpectedValue(string expectedValue) { DARABONBA_PTR_SET_VALUE(expectedValue_, expectedValue) };


      // propertyPath Field Functions 
      bool hasPropertyPath() const { return this->propertyPath_ != nullptr;};
      void deletePropertyPath() { this->propertyPath_ = nullptr;};
      inline string getPropertyPath() const { DARABONBA_PTR_GET_DEFAULT(propertyPath_, "") };
      inline PropertyDifferences& setPropertyPath(string propertyPath) { DARABONBA_PTR_SET_VALUE(propertyPath_, propertyPath) };


    protected:
      // The actual value of the resource property.
      shared_ptr<string> actualValue_ {};
      // The drift type of the resource property. Valid values:
      // 
      // *   ADD: The property value has been added to a resource property whose data type was Array or List.
      // *   REMOVE: The property has been deleted from the current resource configuration.
      // *   NOT_EQUAL: The current property value differs from the expected value defined in the stack template.
      shared_ptr<string> differenceType_ {};
      // The expected value of the resource property that is defined in the template.
      shared_ptr<string> expectedValue_ {};
      // The path of the resource property.
      shared_ptr<string> propertyPath_ {};
    };

    virtual bool empty() const override { return this->actualProperties_ == nullptr
        && this->driftDetectionTime_ == nullptr && this->expectedProperties_ == nullptr && this->logicalResourceId_ == nullptr && this->physicalResourceId_ == nullptr && this->propertyDifferences_ == nullptr
        && this->requestId_ == nullptr && this->resourceDriftStatus_ == nullptr && this->resourceType_ == nullptr && this->stackId_ == nullptr; };
    // actualProperties Field Functions 
    bool hasActualProperties() const { return this->actualProperties_ != nullptr;};
    void deleteActualProperties() { this->actualProperties_ = nullptr;};
    inline string getActualProperties() const { DARABONBA_PTR_GET_DEFAULT(actualProperties_, "") };
    inline DetectStackResourceDriftResponseBody& setActualProperties(string actualProperties) { DARABONBA_PTR_SET_VALUE(actualProperties_, actualProperties) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline DetectStackResourceDriftResponseBody& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // expectedProperties Field Functions 
    bool hasExpectedProperties() const { return this->expectedProperties_ != nullptr;};
    void deleteExpectedProperties() { this->expectedProperties_ = nullptr;};
    inline string getExpectedProperties() const { DARABONBA_PTR_GET_DEFAULT(expectedProperties_, "") };
    inline DetectStackResourceDriftResponseBody& setExpectedProperties(string expectedProperties) { DARABONBA_PTR_SET_VALUE(expectedProperties_, expectedProperties) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline DetectStackResourceDriftResponseBody& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // physicalResourceId Field Functions 
    bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
    void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
    inline string getPhysicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
    inline DetectStackResourceDriftResponseBody& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


    // propertyDifferences Field Functions 
    bool hasPropertyDifferences() const { return this->propertyDifferences_ != nullptr;};
    void deletePropertyDifferences() { this->propertyDifferences_ = nullptr;};
    inline const vector<DetectStackResourceDriftResponseBody::PropertyDifferences> & getPropertyDifferences() const { DARABONBA_PTR_GET_CONST(propertyDifferences_, vector<DetectStackResourceDriftResponseBody::PropertyDifferences>) };
    inline vector<DetectStackResourceDriftResponseBody::PropertyDifferences> getPropertyDifferences() { DARABONBA_PTR_GET(propertyDifferences_, vector<DetectStackResourceDriftResponseBody::PropertyDifferences>) };
    inline DetectStackResourceDriftResponseBody& setPropertyDifferences(const vector<DetectStackResourceDriftResponseBody::PropertyDifferences> & propertyDifferences) { DARABONBA_PTR_SET_VALUE(propertyDifferences_, propertyDifferences) };
    inline DetectStackResourceDriftResponseBody& setPropertyDifferences(vector<DetectStackResourceDriftResponseBody::PropertyDifferences> && propertyDifferences) { DARABONBA_PTR_SET_RVALUE(propertyDifferences_, propertyDifferences) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectStackResourceDriftResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDriftStatus Field Functions 
    bool hasResourceDriftStatus() const { return this->resourceDriftStatus_ != nullptr;};
    void deleteResourceDriftStatus() { this->resourceDriftStatus_ = nullptr;};
    inline string getResourceDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceDriftStatus_, "") };
    inline DetectStackResourceDriftResponseBody& setResourceDriftStatus(string resourceDriftStatus) { DARABONBA_PTR_SET_VALUE(resourceDriftStatus_, resourceDriftStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DetectStackResourceDriftResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline DetectStackResourceDriftResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The actual JSON-formatted resource properties.
    shared_ptr<string> actualProperties_ {};
    // The time when the resource drift detection was initiated.
    shared_ptr<string> driftDetectionTime_ {};
    // The JSON-formatted resource properties that are defined in the template.
    shared_ptr<string> expectedProperties_ {};
    // The logical ID of the resource that is defined in the template.
    shared_ptr<string> logicalResourceId_ {};
    // The physical ID of the resource.
    shared_ptr<string> physicalResourceId_ {};
    // The property drifts of the resource.
    shared_ptr<vector<DetectStackResourceDriftResponseBody::PropertyDifferences>> propertyDifferences_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The drift status of the resource. Valid values:
    // 
    // *   DELETED: The actual configuration of the resource differs from its expected template configuration because the resource is deleted.
    // *   MODIFIED: The actual configuration of the resource differs from its expected template configuration.
    // *   NOT_CHECKED: Resource Orchestration Service (ROS) has not checked whether the actual configuration of the resource differs from its expected template configuration.
    // *   IN_SYNC: The actual configuration of the resource matches its expected template configuration.
    shared_ptr<string> resourceDriftStatus_ {};
    // The type of the resource.
    shared_ptr<string> resourceType_ {};
    // The ID of the stack.
    shared_ptr<string> stackId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
