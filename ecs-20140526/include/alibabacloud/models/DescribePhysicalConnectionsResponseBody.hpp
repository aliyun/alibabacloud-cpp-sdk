// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePhysicalConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionSet, physicalConnectionSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionSet, physicalConnectionSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePhysicalConnectionsResponseBody() = default ;
    DescribePhysicalConnectionsResponseBody(const DescribePhysicalConnectionsResponseBody &) = default ;
    DescribePhysicalConnectionsResponseBody(DescribePhysicalConnectionsResponseBody &&) = default ;
    DescribePhysicalConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionsResponseBody() = default ;
    DescribePhysicalConnectionsResponseBody& operator=(const DescribePhysicalConnectionsResponseBody &) = default ;
    DescribePhysicalConnectionsResponseBody& operator=(DescribePhysicalConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PhysicalConnectionSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PhysicalConnectionSet& obj) { 
        DARABONBA_PTR_TO_JSON(PhysicalConnectionType, physicalConnectionType_);
      };
      friend void from_json(const Darabonba::Json& j, PhysicalConnectionSet& obj) { 
        DARABONBA_PTR_FROM_JSON(PhysicalConnectionType, physicalConnectionType_);
      };
      PhysicalConnectionSet() = default ;
      PhysicalConnectionSet(const PhysicalConnectionSet &) = default ;
      PhysicalConnectionSet(PhysicalConnectionSet &&) = default ;
      PhysicalConnectionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PhysicalConnectionSet() = default ;
      PhysicalConnectionSet& operator=(const PhysicalConnectionSet &) = default ;
      PhysicalConnectionSet& operator=(PhysicalConnectionSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PhysicalConnectionType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PhysicalConnectionType& obj) { 
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
        friend void from_json(const Darabonba::Json& j, PhysicalConnectionType& obj) { 
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
        PhysicalConnectionType() = default ;
        PhysicalConnectionType(const PhysicalConnectionType &) = default ;
        PhysicalConnectionType(PhysicalConnectionType &&) = default ;
        PhysicalConnectionType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PhysicalConnectionType() = default ;
        PhysicalConnectionType& operator=(const PhysicalConnectionType &) = default ;
        PhysicalConnectionType& operator=(PhysicalConnectionType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->adLocation_ == nullptr && this->bandwidth_ == nullptr && this->businessStatus_ == nullptr && this->circuitCode_ == nullptr && this->creationTime_ == nullptr
        && this->description_ == nullptr && this->enabledTime_ == nullptr && this->lineOperator_ == nullptr && this->name_ == nullptr && this->peerLocation_ == nullptr
        && this->physicalConnectionId_ == nullptr && this->portNumber_ == nullptr && this->portType_ == nullptr && this->redundantPhysicalConnectionId_ == nullptr && this->spec_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
        // accessPointId Field Functions 
        bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
        void deleteAccessPointId() { this->accessPointId_ = nullptr;};
        inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
        inline PhysicalConnectionType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


        // adLocation Field Functions 
        bool hasAdLocation() const { return this->adLocation_ != nullptr;};
        void deleteAdLocation() { this->adLocation_ = nullptr;};
        inline string getAdLocation() const { DARABONBA_PTR_GET_DEFAULT(adLocation_, "") };
        inline PhysicalConnectionType& setAdLocation(string adLocation) { DARABONBA_PTR_SET_VALUE(adLocation_, adLocation) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
        inline PhysicalConnectionType& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline PhysicalConnectionType& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // circuitCode Field Functions 
        bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
        void deleteCircuitCode() { this->circuitCode_ = nullptr;};
        inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
        inline PhysicalConnectionType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline PhysicalConnectionType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PhysicalConnectionType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enabledTime Field Functions 
        bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
        void deleteEnabledTime() { this->enabledTime_ = nullptr;};
        inline string getEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
        inline PhysicalConnectionType& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


        // lineOperator Field Functions 
        bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
        void deleteLineOperator() { this->lineOperator_ = nullptr;};
        inline string getLineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
        inline PhysicalConnectionType& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PhysicalConnectionType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // peerLocation Field Functions 
        bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
        void deletePeerLocation() { this->peerLocation_ = nullptr;};
        inline string getPeerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
        inline PhysicalConnectionType& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


        // physicalConnectionId Field Functions 
        bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
        void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
        inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
        inline PhysicalConnectionType& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


        // portNumber Field Functions 
        bool hasPortNumber() const { return this->portNumber_ != nullptr;};
        void deletePortNumber() { this->portNumber_ = nullptr;};
        inline string getPortNumber() const { DARABONBA_PTR_GET_DEFAULT(portNumber_, "") };
        inline PhysicalConnectionType& setPortNumber(string portNumber) { DARABONBA_PTR_SET_VALUE(portNumber_, portNumber) };


        // portType Field Functions 
        bool hasPortType() const { return this->portType_ != nullptr;};
        void deletePortType() { this->portType_ = nullptr;};
        inline string getPortType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
        inline PhysicalConnectionType& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


        // redundantPhysicalConnectionId Field Functions 
        bool hasRedundantPhysicalConnectionId() const { return this->redundantPhysicalConnectionId_ != nullptr;};
        void deleteRedundantPhysicalConnectionId() { this->redundantPhysicalConnectionId_ = nullptr;};
        inline string getRedundantPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(redundantPhysicalConnectionId_, "") };
        inline PhysicalConnectionType& setRedundantPhysicalConnectionId(string redundantPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(redundantPhysicalConnectionId_, redundantPhysicalConnectionId) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline PhysicalConnectionType& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PhysicalConnectionType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline PhysicalConnectionType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> accessPointId_ {};
        shared_ptr<string> adLocation_ {};
        shared_ptr<int64_t> bandwidth_ {};
        shared_ptr<string> businessStatus_ {};
        shared_ptr<string> circuitCode_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> enabledTime_ {};
        shared_ptr<string> lineOperator_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> peerLocation_ {};
        shared_ptr<string> physicalConnectionId_ {};
        shared_ptr<string> portNumber_ {};
        shared_ptr<string> portType_ {};
        shared_ptr<string> redundantPhysicalConnectionId_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->physicalConnectionType_ == nullptr; };
      // physicalConnectionType Field Functions 
      bool hasPhysicalConnectionType() const { return this->physicalConnectionType_ != nullptr;};
      void deletePhysicalConnectionType() { this->physicalConnectionType_ = nullptr;};
      inline const vector<PhysicalConnectionSet::PhysicalConnectionType> & getPhysicalConnectionType() const { DARABONBA_PTR_GET_CONST(physicalConnectionType_, vector<PhysicalConnectionSet::PhysicalConnectionType>) };
      inline vector<PhysicalConnectionSet::PhysicalConnectionType> getPhysicalConnectionType() { DARABONBA_PTR_GET(physicalConnectionType_, vector<PhysicalConnectionSet::PhysicalConnectionType>) };
      inline PhysicalConnectionSet& setPhysicalConnectionType(const vector<PhysicalConnectionSet::PhysicalConnectionType> & physicalConnectionType) { DARABONBA_PTR_SET_VALUE(physicalConnectionType_, physicalConnectionType) };
      inline PhysicalConnectionSet& setPhysicalConnectionType(vector<PhysicalConnectionSet::PhysicalConnectionType> && physicalConnectionType) { DARABONBA_PTR_SET_RVALUE(physicalConnectionType_, physicalConnectionType) };


    protected:
      shared_ptr<vector<PhysicalConnectionSet::PhysicalConnectionType>> physicalConnectionType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->physicalConnectionSet_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePhysicalConnectionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePhysicalConnectionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // physicalConnectionSet Field Functions 
    bool hasPhysicalConnectionSet() const { return this->physicalConnectionSet_ != nullptr;};
    void deletePhysicalConnectionSet() { this->physicalConnectionSet_ = nullptr;};
    inline const DescribePhysicalConnectionsResponseBody::PhysicalConnectionSet & getPhysicalConnectionSet() const { DARABONBA_PTR_GET_CONST(physicalConnectionSet_, DescribePhysicalConnectionsResponseBody::PhysicalConnectionSet) };
    inline DescribePhysicalConnectionsResponseBody::PhysicalConnectionSet getPhysicalConnectionSet() { DARABONBA_PTR_GET(physicalConnectionSet_, DescribePhysicalConnectionsResponseBody::PhysicalConnectionSet) };
    inline DescribePhysicalConnectionsResponseBody& setPhysicalConnectionSet(const DescribePhysicalConnectionsResponseBody::PhysicalConnectionSet & physicalConnectionSet) { DARABONBA_PTR_SET_VALUE(physicalConnectionSet_, physicalConnectionSet) };
    inline DescribePhysicalConnectionsResponseBody& setPhysicalConnectionSet(DescribePhysicalConnectionsResponseBody::PhysicalConnectionSet && physicalConnectionSet) { DARABONBA_PTR_SET_RVALUE(physicalConnectionSet_, physicalConnectionSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhysicalConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePhysicalConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<DescribePhysicalConnectionsResponseBody::PhysicalConnectionSet> physicalConnectionSet_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
