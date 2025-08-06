// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODYPHYSICALCONNECTIONSETPHYSICALCONNECTIONTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODYPHYSICALCONNECTIONSETPHYSICALCONNECTIONTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AdLocation, adLocation_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(PortNumber, portNumber_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AdLocation, adLocation_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(PortNumber, portNumber_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType() = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType &) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType &&) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType() = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& operator=(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType &) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& operator=(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPointId_ != nullptr
        && this->adLocation_ != nullptr && this->bandwidth_ != nullptr && this->businessStatus_ != nullptr && this->circuitCode_ != nullptr && this->creationTime_ != nullptr
        && this->description_ != nullptr && this->enabledTime_ != nullptr && this->lineOperator_ != nullptr && this->name_ != nullptr && this->peerLocation_ != nullptr
        && this->physicalConnectionId_ != nullptr && this->portNumber_ != nullptr && this->portType_ != nullptr && this->redundantPhysicalConnectionId_ != nullptr && this->spec_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // adLocation Field Functions 
    bool hasAdLocation() const { return this->adLocation_ != nullptr;};
    void deleteAdLocation() { this->adLocation_ = nullptr;};
    inline string adLocation() const { DARABONBA_PTR_GET_DEFAULT(adLocation_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setAdLocation(string adLocation) { DARABONBA_PTR_SET_VALUE(adLocation_, adLocation) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string circuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabledTime Field Functions 
    bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
    void deleteEnabledTime() { this->enabledTime_ = nullptr;};
    inline string enabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


    // lineOperator Field Functions 
    bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
    void deleteLineOperator() { this->lineOperator_ = nullptr;};
    inline string lineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // peerLocation Field Functions 
    bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
    void deletePeerLocation() { this->peerLocation_ = nullptr;};
    inline string peerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string physicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // portNumber Field Functions 
    bool hasPortNumber() const { return this->portNumber_ != nullptr;};
    void deletePortNumber() { this->portNumber_ = nullptr;};
    inline string portNumber() const { DARABONBA_PTR_GET_DEFAULT(portNumber_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setPortNumber(string portNumber) { DARABONBA_PTR_SET_VALUE(portNumber_, portNumber) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string portType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // redundantPhysicalConnectionId Field Functions 
    bool hasRedundantPhysicalConnectionId() const { return this->redundantPhysicalConnectionId_ != nullptr;};
    void deleteRedundantPhysicalConnectionId() { this->redundantPhysicalConnectionId_ = nullptr;};
    inline string redundantPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(redundantPhysicalConnectionId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setRedundantPhysicalConnectionId(string redundantPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(redundantPhysicalConnectionId_, redundantPhysicalConnectionId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> accessPointId_ = nullptr;
    std::shared_ptr<string> adLocation_ = nullptr;
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    std::shared_ptr<string> businessStatus_ = nullptr;
    std::shared_ptr<string> circuitCode_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> enabledTime_ = nullptr;
    std::shared_ptr<string> lineOperator_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> peerLocation_ = nullptr;
    std::shared_ptr<string> physicalConnectionId_ = nullptr;
    std::shared_ptr<string> portNumber_ = nullptr;
    std::shared_ptr<string> portType_ = nullptr;
    std::shared_ptr<string> redundantPhysicalConnectionId_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
