// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVirtualPhysicalConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualPhysicalConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnections, virtualPhysicalConnections_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualPhysicalConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnections, virtualPhysicalConnections_);
    };
    ListVirtualPhysicalConnectionsResponseBody() = default ;
    ListVirtualPhysicalConnectionsResponseBody(const ListVirtualPhysicalConnectionsResponseBody &) = default ;
    ListVirtualPhysicalConnectionsResponseBody(ListVirtualPhysicalConnectionsResponseBody &&) = default ;
    ListVirtualPhysicalConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualPhysicalConnectionsResponseBody() = default ;
    ListVirtualPhysicalConnectionsResponseBody& operator=(const ListVirtualPhysicalConnectionsResponseBody &) = default ;
    ListVirtualPhysicalConnectionsResponseBody& operator=(ListVirtualPhysicalConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualPhysicalConnections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualPhysicalConnections& obj) { 
        DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_TO_JSON(AdLocation, adLocation_);
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExpectSpec, expectSpec_);
        DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
        DARABONBA_PTR_TO_JSON(LoaStatus, loaStatus_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OrderMode, orderMode_);
        DARABONBA_PTR_TO_JSON(ParentPhysicalConnectionAliUid, parentPhysicalConnectionAliUid_);
        DARABONBA_PTR_TO_JSON(ParentPhysicalConnectionId, parentPhysicalConnectionId_);
        DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
        DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
        DARABONBA_PTR_TO_JSON(PortNumber, portNumber_);
        DARABONBA_PTR_TO_JSON(PortType, portType_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionStatus, virtualPhysicalConnectionStatus_);
        DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualPhysicalConnections& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_FROM_JSON(AdLocation, adLocation_);
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExpectSpec, expectSpec_);
        DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
        DARABONBA_PTR_FROM_JSON(LoaStatus, loaStatus_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OrderMode, orderMode_);
        DARABONBA_PTR_FROM_JSON(ParentPhysicalConnectionAliUid, parentPhysicalConnectionAliUid_);
        DARABONBA_PTR_FROM_JSON(ParentPhysicalConnectionId, parentPhysicalConnectionId_);
        DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
        DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
        DARABONBA_PTR_FROM_JSON(PortNumber, portNumber_);
        DARABONBA_PTR_FROM_JSON(PortType, portType_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionStatus, virtualPhysicalConnectionStatus_);
        DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      };
      VirtualPhysicalConnections() = default ;
      VirtualPhysicalConnections(const VirtualPhysicalConnections &) = default ;
      VirtualPhysicalConnections(VirtualPhysicalConnections &&) = default ;
      VirtualPhysicalConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualPhysicalConnections() = default ;
      VirtualPhysicalConnections& operator=(const VirtualPhysicalConnections &) = default ;
      VirtualPhysicalConnections& operator=(VirtualPhysicalConnections &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the resource. You can specify up to 20 tag keys. The tag key cannot be an empty string.
        // 
        // The tag key can be up to 64 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
        shared_ptr<string> key_ {};
        // The tag value of the resource. You can specify up to 20 tag values. The tag value can be an empty string.
        // 
        // The tag value can be up to 128 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->adLocation_ == nullptr && this->aliUid_ == nullptr && this->bandwidth_ == nullptr && this->businessStatus_ == nullptr && this->chargeType_ == nullptr
        && this->circuitCode_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->enabledTime_ == nullptr && this->endTime_ == nullptr
        && this->expectSpec_ == nullptr && this->lineOperator_ == nullptr && this->loaStatus_ == nullptr && this->name_ == nullptr && this->orderMode_ == nullptr
        && this->parentPhysicalConnectionAliUid_ == nullptr && this->parentPhysicalConnectionId_ == nullptr && this->peerLocation_ == nullptr && this->physicalConnectionId_ == nullptr && this->portNumber_ == nullptr
        && this->portType_ == nullptr && this->productType_ == nullptr && this->redundantPhysicalConnectionId_ == nullptr && this->resourceGroupId_ == nullptr && this->spec_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->virtualPhysicalConnectionStatus_ == nullptr && this->vlanId_ == nullptr; };
      // accessPointId Field Functions 
      bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
      void deleteAccessPointId() { this->accessPointId_ = nullptr;};
      inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
      inline VirtualPhysicalConnections& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


      // adLocation Field Functions 
      bool hasAdLocation() const { return this->adLocation_ != nullptr;};
      void deleteAdLocation() { this->adLocation_ = nullptr;};
      inline string getAdLocation() const { DARABONBA_PTR_GET_DEFAULT(adLocation_, "") };
      inline VirtualPhysicalConnections& setAdLocation(string adLocation) { DARABONBA_PTR_SET_VALUE(adLocation_, adLocation) };


      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline VirtualPhysicalConnections& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
      inline VirtualPhysicalConnections& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline VirtualPhysicalConnections& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline VirtualPhysicalConnections& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // circuitCode Field Functions 
      bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
      void deleteCircuitCode() { this->circuitCode_ = nullptr;};
      inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
      inline VirtualPhysicalConnections& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline VirtualPhysicalConnections& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline VirtualPhysicalConnections& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabledTime Field Functions 
      bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
      void deleteEnabledTime() { this->enabledTime_ = nullptr;};
      inline string getEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
      inline VirtualPhysicalConnections& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline VirtualPhysicalConnections& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // expectSpec Field Functions 
      bool hasExpectSpec() const { return this->expectSpec_ != nullptr;};
      void deleteExpectSpec() { this->expectSpec_ = nullptr;};
      inline string getExpectSpec() const { DARABONBA_PTR_GET_DEFAULT(expectSpec_, "") };
      inline VirtualPhysicalConnections& setExpectSpec(string expectSpec) { DARABONBA_PTR_SET_VALUE(expectSpec_, expectSpec) };


      // lineOperator Field Functions 
      bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
      void deleteLineOperator() { this->lineOperator_ = nullptr;};
      inline string getLineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
      inline VirtualPhysicalConnections& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


      // loaStatus Field Functions 
      bool hasLoaStatus() const { return this->loaStatus_ != nullptr;};
      void deleteLoaStatus() { this->loaStatus_ = nullptr;};
      inline string getLoaStatus() const { DARABONBA_PTR_GET_DEFAULT(loaStatus_, "") };
      inline VirtualPhysicalConnections& setLoaStatus(string loaStatus) { DARABONBA_PTR_SET_VALUE(loaStatus_, loaStatus) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VirtualPhysicalConnections& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // orderMode Field Functions 
      bool hasOrderMode() const { return this->orderMode_ != nullptr;};
      void deleteOrderMode() { this->orderMode_ = nullptr;};
      inline string getOrderMode() const { DARABONBA_PTR_GET_DEFAULT(orderMode_, "") };
      inline VirtualPhysicalConnections& setOrderMode(string orderMode) { DARABONBA_PTR_SET_VALUE(orderMode_, orderMode) };


      // parentPhysicalConnectionAliUid Field Functions 
      bool hasParentPhysicalConnectionAliUid() const { return this->parentPhysicalConnectionAliUid_ != nullptr;};
      void deleteParentPhysicalConnectionAliUid() { this->parentPhysicalConnectionAliUid_ = nullptr;};
      inline string getParentPhysicalConnectionAliUid() const { DARABONBA_PTR_GET_DEFAULT(parentPhysicalConnectionAliUid_, "") };
      inline VirtualPhysicalConnections& setParentPhysicalConnectionAliUid(string parentPhysicalConnectionAliUid) { DARABONBA_PTR_SET_VALUE(parentPhysicalConnectionAliUid_, parentPhysicalConnectionAliUid) };


      // parentPhysicalConnectionId Field Functions 
      bool hasParentPhysicalConnectionId() const { return this->parentPhysicalConnectionId_ != nullptr;};
      void deleteParentPhysicalConnectionId() { this->parentPhysicalConnectionId_ = nullptr;};
      inline string getParentPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(parentPhysicalConnectionId_, "") };
      inline VirtualPhysicalConnections& setParentPhysicalConnectionId(string parentPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(parentPhysicalConnectionId_, parentPhysicalConnectionId) };


      // peerLocation Field Functions 
      bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
      void deletePeerLocation() { this->peerLocation_ = nullptr;};
      inline string getPeerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
      inline VirtualPhysicalConnections& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


      // physicalConnectionId Field Functions 
      bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
      void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
      inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
      inline VirtualPhysicalConnections& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


      // portNumber Field Functions 
      bool hasPortNumber() const { return this->portNumber_ != nullptr;};
      void deletePortNumber() { this->portNumber_ = nullptr;};
      inline string getPortNumber() const { DARABONBA_PTR_GET_DEFAULT(portNumber_, "") };
      inline VirtualPhysicalConnections& setPortNumber(string portNumber) { DARABONBA_PTR_SET_VALUE(portNumber_, portNumber) };


      // portType Field Functions 
      bool hasPortType() const { return this->portType_ != nullptr;};
      void deletePortType() { this->portType_ = nullptr;};
      inline string getPortType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
      inline VirtualPhysicalConnections& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline VirtualPhysicalConnections& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // redundantPhysicalConnectionId Field Functions 
      bool hasRedundantPhysicalConnectionId() const { return this->redundantPhysicalConnectionId_ != nullptr;};
      void deleteRedundantPhysicalConnectionId() { this->redundantPhysicalConnectionId_ = nullptr;};
      inline string getRedundantPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(redundantPhysicalConnectionId_, "") };
      inline VirtualPhysicalConnections& setRedundantPhysicalConnectionId(string redundantPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(redundantPhysicalConnectionId_, redundantPhysicalConnectionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline VirtualPhysicalConnections& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline VirtualPhysicalConnections& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VirtualPhysicalConnections& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<VirtualPhysicalConnections::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<VirtualPhysicalConnections::Tags>) };
      inline vector<VirtualPhysicalConnections::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<VirtualPhysicalConnections::Tags>) };
      inline VirtualPhysicalConnections& setTags(const vector<VirtualPhysicalConnections::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline VirtualPhysicalConnections& setTags(vector<VirtualPhysicalConnections::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VirtualPhysicalConnections& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // virtualPhysicalConnectionStatus Field Functions 
      bool hasVirtualPhysicalConnectionStatus() const { return this->virtualPhysicalConnectionStatus_ != nullptr;};
      void deleteVirtualPhysicalConnectionStatus() { this->virtualPhysicalConnectionStatus_ = nullptr;};
      inline string getVirtualPhysicalConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(virtualPhysicalConnectionStatus_, "") };
      inline VirtualPhysicalConnections& setVirtualPhysicalConnectionStatus(string virtualPhysicalConnectionStatus) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionStatus_, virtualPhysicalConnectionStatus) };


      // vlanId Field Functions 
      bool hasVlanId() const { return this->vlanId_ != nullptr;};
      void deleteVlanId() { this->vlanId_ = nullptr;};
      inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
      inline VirtualPhysicalConnections& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    protected:
      // The access point ID of the Express Connect circuit.
      shared_ptr<string> accessPointId_ {};
      // The physical location of the access device for the Express Connect circuit.
      shared_ptr<string> adLocation_ {};
      // The Alibaba Cloud account ID of the shared Express Connect circuits owner.
      shared_ptr<string> aliUid_ {};
      // The bandwidth of the Express Connect circuit. Unit: Mbit/s.
      shared_ptr<int64_t> bandwidth_ {};
      // The business status of the Express Connect circuit. Valid values:
      // 
      // - **Normal**: Enabled.
      // - **FinancialLocked**: Locked due to overdue payment.
      // - **SecurityLocked**: Locked for security reasons.
      shared_ptr<string> businessStatus_ {};
      // The billing method of the Express Connect circuit.
      // 
      // Valid values: **Prepaid**, which indicates subscription.
      shared_ptr<string> chargeType_ {};
      // The circuit code provided by the carrier for the Express Connect circuit.
      shared_ptr<string> circuitCode_ {};
      // The time when the Express Connect circuit was created. The time is displayed in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the Express Connect circuit.
      shared_ptr<string> description_ {};
      // The time when the Express Connect circuit was enabled. The time is displayed in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> enabledTime_ {};
      // The expiration time of the shared Express Connect circuits.
      // 
      // The time is displayed in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The expected bandwidth value of the shared Express Connect circuits. The expected bandwidth value takes effect only after payment is completed.
      // 
      // Unit: **M** indicates Mbit/s, and **G** indicates Gbit/s.
      shared_ptr<string> expectSpec_ {};
      // The carrier that provides the physical line for access. Valid values:
      // 
      // - **CT**: China Telecom.
      // - **CU**: China Unicom.
      // - **CM**: China Mobile.
      // - **CO**: Other carriers in the Chinese mainland.
      // - **Equinix**: Equinix.
      // - **Other**: Other carriers outside the Chinese mainland.
      shared_ptr<string> lineOperator_ {};
      // The status of the Letter of Authorization (LOA). Valid values:
      // 
      // - **Applying**: The LOA application is being processed.
      // - **Accept**: The LOA application is approved.
      // - **Available**: The LOA is available.
      // - **Rejected**: The LOA application is rejected.
      // - **Completing**: The Express Connect circuit is under construction.
      // - **Complete**: The Express Connect circuit construction is complete.
      // - **Deleted**: The LOA is deleted.
      shared_ptr<string> loaStatus_ {};
      // The name of the Express Connect circuit.
      shared_ptr<string> name_ {};
      // The payer of the shared Express Connect circuits. Valid values:
      // 
      // - **PayByPhysicalConnectionOwner**: The owner of the Express Connect circuit associated with the shared Express Connect circuits is the payer.
      // - **PayByVirtualPhysicalConnectionOwner**: The owner of the shared Express Connect circuits is the payer.
      shared_ptr<string> orderMode_ {};
      // The Alibaba Cloud account ID that owns the Express Connect circuit.
      shared_ptr<string> parentPhysicalConnectionAliUid_ {};
      // The instance ID of the Express Connect circuit.
      shared_ptr<string> parentPhysicalConnectionId_ {};
      // The geographic location of the on-premises data center.
      shared_ptr<string> peerLocation_ {};
      // The instance ID of the shared Express Connect circuits.
      shared_ptr<string> physicalConnectionId_ {};
      // The port number of the access device for the Express Connect circuit.
      shared_ptr<string> portNumber_ {};
      // The port type of the access device for the Express Connect circuit. Valid values:
      // 
      // - **100Base-T**: 100M Ethernet port.
      // - **1000Base-T**: GE electrical port.
      // - **1000Base-LX**: GE single-mode optical port (10 km).
      // - **10GBase-T**: 10 GE electrical port.
      // - **10GBase-LR**: 10 GE single-mode optical port (10 km).
      // - **40GBase-LR**: 40 GE single-mode optical port.
      // - **100GBase-LR**: 100 GE single-mode optical port.
      shared_ptr<string> portType_ {};
      // The type of the Express Connect circuit. Valid values:
      // 
      // - **VirtualPhysicalConnection**: Shared Express Connect circuits.
      // - **PhysicalConnection**: Dedicated Express Connect circuit.
      shared_ptr<string> productType_ {};
      // The ID of the redundant Express Connect circuit.
      shared_ptr<string> redundantPhysicalConnectionId_ {};
      // The ID of the resource group to which the shared Express Connect circuits belong.
      shared_ptr<string> resourceGroupId_ {};
      // The bandwidth value of the shared Express Connect circuits.
      // 
      // Unit: **M** indicates Mbit/s, and **G** indicates Gbit/s.
      shared_ptr<string> spec_ {};
      // The status of the Express Connect circuit. Valid values:
      // 
      // - **Initial**: The application is under review.
      // - **Approved**: The application is approved.
      // - **Allocating**: Resources are being allocated.
      // - **Allocated**: Under construction.
      // - **Confirmed**: Waiting for user confirmation.
      // - **Enabled**: Enabled.
      // - **Rejected**: The application is rejected.
      // - **Canceled**: Canceled.
      // - **Allocation Failed**: Resource allocation failed.
      // - **Terminated**: Terminated.
      shared_ptr<string> status_ {};
      // The tag list.
      shared_ptr<vector<VirtualPhysicalConnections::Tags>> tags_ {};
      // The type of the Express Connect circuit. Default value: **VPC**.
      shared_ptr<string> type_ {};
      // The business status of the shared Express Connect circuits. Valid values:
      // 
      // - **Confirmed**: The shared Express Connect circuits have been accepted.
      // - **UnConfirmed**: The shared Express Connect circuits have not been accepted.
      // - **Deleted**: The shared Express Connect circuits have been deleted.
      shared_ptr<string> virtualPhysicalConnectionStatus_ {};
      // The VLAN ID of the shared Express Connect circuits.
      shared_ptr<string> vlanId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->virtualPhysicalConnections_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListVirtualPhysicalConnectionsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVirtualPhysicalConnectionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirtualPhysicalConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVirtualPhysicalConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // virtualPhysicalConnections Field Functions 
    bool hasVirtualPhysicalConnections() const { return this->virtualPhysicalConnections_ != nullptr;};
    void deleteVirtualPhysicalConnections() { this->virtualPhysicalConnections_ = nullptr;};
    inline const vector<ListVirtualPhysicalConnectionsResponseBody::VirtualPhysicalConnections> & getVirtualPhysicalConnections() const { DARABONBA_PTR_GET_CONST(virtualPhysicalConnections_, vector<ListVirtualPhysicalConnectionsResponseBody::VirtualPhysicalConnections>) };
    inline vector<ListVirtualPhysicalConnectionsResponseBody::VirtualPhysicalConnections> getVirtualPhysicalConnections() { DARABONBA_PTR_GET(virtualPhysicalConnections_, vector<ListVirtualPhysicalConnectionsResponseBody::VirtualPhysicalConnections>) };
    inline ListVirtualPhysicalConnectionsResponseBody& setVirtualPhysicalConnections(const vector<ListVirtualPhysicalConnectionsResponseBody::VirtualPhysicalConnections> & virtualPhysicalConnections) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnections_, virtualPhysicalConnections) };
    inline ListVirtualPhysicalConnectionsResponseBody& setVirtualPhysicalConnections(vector<ListVirtualPhysicalConnectionsResponseBody::VirtualPhysicalConnections> && virtualPhysicalConnections) { DARABONBA_PTR_SET_RVALUE(virtualPhysicalConnections_, virtualPhysicalConnections) };


  protected:
    // The number of entries returned in the current query.
    shared_ptr<int32_t> count_ {};
    // Indicates whether a next query token exists. Valid values:
    // - If **NextToken** is empty, no next query exists.
    // - If **NextToken** has a return value, the value is the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The list of shared Express Connect circuits.
    shared_ptr<vector<ListVirtualPhysicalConnectionsResponseBody::VirtualPhysicalConnections>> virtualPhysicalConnections_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
