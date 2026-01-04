// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODY_HPP_
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
          DARABONBA_PTR_TO_JSON(AccessPointType, accessPointType_);
          DARABONBA_PTR_TO_JSON(AdDetailLocation, adDetailLocation_);
          DARABONBA_PTR_TO_JSON(AdLocation, adLocation_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ExpectSpec, expectSpec_);
          DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
          DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
          DARABONBA_PTR_TO_JSON(LoaStatus, loaStatus_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OpticalModuleModel, opticalModuleModel_);
          DARABONBA_PTR_TO_JSON(OrderMode, orderMode_);
          DARABONBA_PTR_TO_JSON(ParentPhysicalConnectionAliUid, parentPhysicalConnectionAliUid_);
          DARABONBA_PTR_TO_JSON(ParentPhysicalConnectionId, parentPhysicalConnectionId_);
          DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
          DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
          DARABONBA_PTR_TO_JSON(PortNumber, portNumber_);
          DARABONBA_PTR_TO_JSON(PortType, portType_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(QosId, qosId_);
          DARABONBA_PTR_TO_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
          DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
          DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
          DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionCount, virtualPhysicalConnectionCount_);
          DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
          DARABONBA_PTR_TO_JSON(VpconnStatus, vpconnStatus_);
        };
        friend void from_json(const Darabonba::Json& j, PhysicalConnectionType& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_FROM_JSON(AccessPointType, accessPointType_);
          DARABONBA_PTR_FROM_JSON(AdDetailLocation, adDetailLocation_);
          DARABONBA_PTR_FROM_JSON(AdLocation, adLocation_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ExpectSpec, expectSpec_);
          DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
          DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
          DARABONBA_PTR_FROM_JSON(LoaStatus, loaStatus_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OpticalModuleModel, opticalModuleModel_);
          DARABONBA_PTR_FROM_JSON(OrderMode, orderMode_);
          DARABONBA_PTR_FROM_JSON(ParentPhysicalConnectionAliUid, parentPhysicalConnectionAliUid_);
          DARABONBA_PTR_FROM_JSON(ParentPhysicalConnectionId, parentPhysicalConnectionId_);
          DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
          DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
          DARABONBA_PTR_FROM_JSON(PortNumber, portNumber_);
          DARABONBA_PTR_FROM_JSON(PortType, portType_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(QosId, qosId_);
          DARABONBA_PTR_FROM_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
          DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
          DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
          DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionCount, virtualPhysicalConnectionCount_);
          DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
          DARABONBA_PTR_FROM_JSON(VpconnStatus, vpconnStatus_);
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(tags, tags_);
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
          class TagsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagsItem() = default ;
            TagsItem(const TagsItem &) = default ;
            TagsItem(TagsItem &&) = default ;
            TagsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagsItem() = default ;
            TagsItem& operator=(const TagsItem &) = default ;
            TagsItem& operator=(TagsItem &&) = default ;
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
            inline TagsItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of tag N added to the resource. You can specify up to 20 tag keys. The tag key cannot be an empty string.
            // 
            // The tag key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
            shared_ptr<string> key_ {};
            // The value of tag N added to the resource. You can specify up to 20 tag values. The tag value can be an empty string.
            // 
            // The tag value can be up to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tags_ == nullptr; };
          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<Tags::TagsItem> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tags::TagsItem>) };
          inline vector<Tags::TagsItem> getTags() { DARABONBA_PTR_GET(tags_, vector<Tags::TagsItem>) };
          inline Tags& setTags(const vector<Tags::TagsItem> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline Tags& setTags(vector<Tags::TagsItem> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          shared_ptr<vector<Tags::TagsItem>> tags_ {};
        };

        virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->accessPointType_ == nullptr && this->adDetailLocation_ == nullptr && this->adLocation_ == nullptr && this->bandwidth_ == nullptr && this->businessStatus_ == nullptr
        && this->chargeType_ == nullptr && this->circuitCode_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->enabledTime_ == nullptr
        && this->endTime_ == nullptr && this->expectSpec_ == nullptr && this->hasReservationData_ == nullptr && this->lineOperator_ == nullptr && this->loaStatus_ == nullptr
        && this->name_ == nullptr && this->opticalModuleModel_ == nullptr && this->orderMode_ == nullptr && this->parentPhysicalConnectionAliUid_ == nullptr && this->parentPhysicalConnectionId_ == nullptr
        && this->peerLocation_ == nullptr && this->physicalConnectionId_ == nullptr && this->portNumber_ == nullptr && this->portType_ == nullptr && this->productType_ == nullptr
        && this->qosId_ == nullptr && this->redundantPhysicalConnectionId_ == nullptr && this->reservationActiveTime_ == nullptr && this->reservationInternetChargeType_ == nullptr && this->reservationOrderType_ == nullptr
        && this->resourceGroupId_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr
        && this->virtualPhysicalConnectionCount_ == nullptr && this->vlanId_ == nullptr && this->vpconnStatus_ == nullptr; };
        // accessPointId Field Functions 
        bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
        void deleteAccessPointId() { this->accessPointId_ = nullptr;};
        inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
        inline PhysicalConnectionType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


        // accessPointType Field Functions 
        bool hasAccessPointType() const { return this->accessPointType_ != nullptr;};
        void deleteAccessPointType() { this->accessPointType_ = nullptr;};
        inline string getAccessPointType() const { DARABONBA_PTR_GET_DEFAULT(accessPointType_, "") };
        inline PhysicalConnectionType& setAccessPointType(string accessPointType) { DARABONBA_PTR_SET_VALUE(accessPointType_, accessPointType) };


        // adDetailLocation Field Functions 
        bool hasAdDetailLocation() const { return this->adDetailLocation_ != nullptr;};
        void deleteAdDetailLocation() { this->adDetailLocation_ = nullptr;};
        inline string getAdDetailLocation() const { DARABONBA_PTR_GET_DEFAULT(adDetailLocation_, "") };
        inline PhysicalConnectionType& setAdDetailLocation(string adDetailLocation) { DARABONBA_PTR_SET_VALUE(adDetailLocation_, adDetailLocation) };


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


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline PhysicalConnectionType& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


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


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline PhysicalConnectionType& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // expectSpec Field Functions 
        bool hasExpectSpec() const { return this->expectSpec_ != nullptr;};
        void deleteExpectSpec() { this->expectSpec_ = nullptr;};
        inline string getExpectSpec() const { DARABONBA_PTR_GET_DEFAULT(expectSpec_, "") };
        inline PhysicalConnectionType& setExpectSpec(string expectSpec) { DARABONBA_PTR_SET_VALUE(expectSpec_, expectSpec) };


        // hasReservationData Field Functions 
        bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
        void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
        inline string getHasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
        inline PhysicalConnectionType& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


        // lineOperator Field Functions 
        bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
        void deleteLineOperator() { this->lineOperator_ = nullptr;};
        inline string getLineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
        inline PhysicalConnectionType& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


        // loaStatus Field Functions 
        bool hasLoaStatus() const { return this->loaStatus_ != nullptr;};
        void deleteLoaStatus() { this->loaStatus_ = nullptr;};
        inline string getLoaStatus() const { DARABONBA_PTR_GET_DEFAULT(loaStatus_, "") };
        inline PhysicalConnectionType& setLoaStatus(string loaStatus) { DARABONBA_PTR_SET_VALUE(loaStatus_, loaStatus) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PhysicalConnectionType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // opticalModuleModel Field Functions 
        bool hasOpticalModuleModel() const { return this->opticalModuleModel_ != nullptr;};
        void deleteOpticalModuleModel() { this->opticalModuleModel_ = nullptr;};
        inline string getOpticalModuleModel() const { DARABONBA_PTR_GET_DEFAULT(opticalModuleModel_, "") };
        inline PhysicalConnectionType& setOpticalModuleModel(string opticalModuleModel) { DARABONBA_PTR_SET_VALUE(opticalModuleModel_, opticalModuleModel) };


        // orderMode Field Functions 
        bool hasOrderMode() const { return this->orderMode_ != nullptr;};
        void deleteOrderMode() { this->orderMode_ = nullptr;};
        inline string getOrderMode() const { DARABONBA_PTR_GET_DEFAULT(orderMode_, "") };
        inline PhysicalConnectionType& setOrderMode(string orderMode) { DARABONBA_PTR_SET_VALUE(orderMode_, orderMode) };


        // parentPhysicalConnectionAliUid Field Functions 
        bool hasParentPhysicalConnectionAliUid() const { return this->parentPhysicalConnectionAliUid_ != nullptr;};
        void deleteParentPhysicalConnectionAliUid() { this->parentPhysicalConnectionAliUid_ = nullptr;};
        inline int64_t getParentPhysicalConnectionAliUid() const { DARABONBA_PTR_GET_DEFAULT(parentPhysicalConnectionAliUid_, 0L) };
        inline PhysicalConnectionType& setParentPhysicalConnectionAliUid(int64_t parentPhysicalConnectionAliUid) { DARABONBA_PTR_SET_VALUE(parentPhysicalConnectionAliUid_, parentPhysicalConnectionAliUid) };


        // parentPhysicalConnectionId Field Functions 
        bool hasParentPhysicalConnectionId() const { return this->parentPhysicalConnectionId_ != nullptr;};
        void deleteParentPhysicalConnectionId() { this->parentPhysicalConnectionId_ = nullptr;};
        inline string getParentPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(parentPhysicalConnectionId_, "") };
        inline PhysicalConnectionType& setParentPhysicalConnectionId(string parentPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(parentPhysicalConnectionId_, parentPhysicalConnectionId) };


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


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline PhysicalConnectionType& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // qosId Field Functions 
        bool hasQosId() const { return this->qosId_ != nullptr;};
        void deleteQosId() { this->qosId_ = nullptr;};
        inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
        inline PhysicalConnectionType& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


        // redundantPhysicalConnectionId Field Functions 
        bool hasRedundantPhysicalConnectionId() const { return this->redundantPhysicalConnectionId_ != nullptr;};
        void deleteRedundantPhysicalConnectionId() { this->redundantPhysicalConnectionId_ = nullptr;};
        inline string getRedundantPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(redundantPhysicalConnectionId_, "") };
        inline PhysicalConnectionType& setRedundantPhysicalConnectionId(string redundantPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(redundantPhysicalConnectionId_, redundantPhysicalConnectionId) };


        // reservationActiveTime Field Functions 
        bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
        void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
        inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
        inline PhysicalConnectionType& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


        // reservationInternetChargeType Field Functions 
        bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
        void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
        inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
        inline PhysicalConnectionType& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


        // reservationOrderType Field Functions 
        bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
        void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
        inline string getReservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
        inline PhysicalConnectionType& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline PhysicalConnectionType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const PhysicalConnectionType::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, PhysicalConnectionType::Tags) };
        inline PhysicalConnectionType::Tags getTags() { DARABONBA_PTR_GET(tags_, PhysicalConnectionType::Tags) };
        inline PhysicalConnectionType& setTags(const PhysicalConnectionType::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline PhysicalConnectionType& setTags(PhysicalConnectionType::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline PhysicalConnectionType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // virtualPhysicalConnectionCount Field Functions 
        bool hasVirtualPhysicalConnectionCount() const { return this->virtualPhysicalConnectionCount_ != nullptr;};
        void deleteVirtualPhysicalConnectionCount() { this->virtualPhysicalConnectionCount_ = nullptr;};
        inline int32_t getVirtualPhysicalConnectionCount() const { DARABONBA_PTR_GET_DEFAULT(virtualPhysicalConnectionCount_, 0) };
        inline PhysicalConnectionType& setVirtualPhysicalConnectionCount(int32_t virtualPhysicalConnectionCount) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionCount_, virtualPhysicalConnectionCount) };


        // vlanId Field Functions 
        bool hasVlanId() const { return this->vlanId_ != nullptr;};
        void deleteVlanId() { this->vlanId_ = nullptr;};
        inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
        inline PhysicalConnectionType& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


        // vpconnStatus Field Functions 
        bool hasVpconnStatus() const { return this->vpconnStatus_ != nullptr;};
        void deleteVpconnStatus() { this->vpconnStatus_ = nullptr;};
        inline string getVpconnStatus() const { DARABONBA_PTR_GET_DEFAULT(vpconnStatus_, "") };
        inline PhysicalConnectionType& setVpconnStatus(string vpconnStatus) { DARABONBA_PTR_SET_VALUE(vpconnStatus_, vpconnStatus) };


      protected:
        // The ID of the Express Connect circuit.
        shared_ptr<string> accessPointId_ {};
        // The type of the access point.
        shared_ptr<string> accessPointType_ {};
        // The information about the data center and rack.
        shared_ptr<string> adDetailLocation_ {};
        // The location of the access point.
        shared_ptr<string> adLocation_ {};
        // The maximum bandwidth of the Express Connect circuit.
        // 
        // Unit: Mbit/s.
        shared_ptr<int64_t> bandwidth_ {};
        // The status of the Express Connect circuit. Valid values:
        // 
        // *   **Normal**: enabled
        // *   **FinancialLocked**: locked due to overdue payments
        // *   **SecurityLocked**: locked for security reasons
        shared_ptr<string> businessStatus_ {};
        // The billing method of the Express Connect circuit.
        // 
        // If **Prepaid** is returned, it indicates that the Express Connect circuit is billed on a subscription basis.
        shared_ptr<string> chargeType_ {};
        // The circuit code of the Express Connect circuit. The circuit code is provided by the connectivity provider.
        shared_ptr<string> circuitCode_ {};
        // The time when the Express Connect circuit was created.
        shared_ptr<string> creationTime_ {};
        // The description of the Express Connect circuit.
        shared_ptr<string> description_ {};
        // The time when the Express Connect circuit was enabled.
        shared_ptr<string> enabledTime_ {};
        // The time when the Express Connect circuit expires.
        shared_ptr<string> endTime_ {};
        // The estimated maximum bandwidth of the shared Express Connect circuit. The estimated bandwidth takes effect after you complete the payment.
        // 
        // Unit: **M** (Mbit/s) and **G** (Gbit/s).
        shared_ptr<string> expectSpec_ {};
        // Indicates whether the data about pending orders is returned. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<string> hasReservationData_ {};
        // The connectivity provider of the Express Connect circuit. Valid values:
        // 
        // *   **CT**: China Telecom.
        // *   **CU**: China Unicom.
        // *   **CM**: China Mobile.
        // *   **CO**: other connectivity providers in the Chinese mainland.
        // *   **Equinix**: Equinix.
        // *   **Other**: other connectivity providers outside the Chinese mainland.
        shared_ptr<string> lineOperator_ {};
        // The status of the letter of authorization (LOA). Valid values:
        // 
        // *   **Applying**: The LOA is pending for approval.
        // *   **Accept**: The LOA is approved.
        // *   **Available**: The LOA is available.
        // *   **Rejected**: The LOA is rejected.
        // *   **Completing**: The Express Connect circuit is under construction.
        // *   **Complete**: The Express Connect circuit is installed.
        // *   **Deleted**: The LOA is deleted.
        shared_ptr<string> loaStatus_ {};
        // The name of the Express Connect circuit.
        shared_ptr<string> name_ {};
        shared_ptr<string> opticalModuleModel_ {};
        // The payer for the hosted connection. Valid values:
        // 
        // *   **PayByPhysicalConnectionOwner**: The partner pays for the shared Express Connect circuit.
        // *   **PayByVirtualPhysicalConnectionOwner**: The tenant pays for the shared Express Connect circuit.
        shared_ptr<string> orderMode_ {};
        // The ID of the Alibaba Cloud account to which the parent Express Connect circuit belongs.
        shared_ptr<int64_t> parentPhysicalConnectionAliUid_ {};
        // The ID of the parent Express Connect circuit.
        shared_ptr<string> parentPhysicalConnectionId_ {};
        // The geographical location of the data center.
        shared_ptr<string> peerLocation_ {};
        // The ID of the Express Connect circuit.
        shared_ptr<string> physicalConnectionId_ {};
        // The ID of the port on the access device.
        shared_ptr<string> portNumber_ {};
        // The port type of the Express Connect circuit. Valid values:
        // 
        // *   **100Base-T**: 100 Mbit/s copper Ethernet port
        // *   **1000Base-T**: 1,000 Mbit/s copper Ethernet port
        // *   **1000Base-LX**: 1,000 Mbit/s single-mode optical port (10 km)
        // *   **10GBase-T**: 10,000 Mbit/s copper Ethernet port
        // *   **10GBase-LR**: 10,000 Mbit/s single-mode optical port (10 km)
        // *   **40GBase-LR**: 40,000 Mbit/s single-mode optical port
        // *   **100GBase-LR**: 100,000 Mbit/s single-mode optical port
        // 
        // > Whether 40GBase-LR and 100GBase-LR ports can be created depends on resource supplies. For more information, contact your account manager.
        shared_ptr<string> portType_ {};
        // The type of the Express Connect circuit. Valid values:
        // 
        // *   **VirtualPhysicalConnection**: shared Express Connect circuit
        // *   **PhysicalConnection**: dedicated Express Connect circuit
        shared_ptr<string> productType_ {};
        // The ID of the QoS policy.
        shared_ptr<string> qosId_ {};
        // The ID of the standby Express Connect circuit.
        shared_ptr<string> redundantPhysicalConnectionId_ {};
        // The time when the pending order takes effect.
        shared_ptr<string> reservationActiveTime_ {};
        // The billing method of the pending order.
        // 
        // If **PayByBandwidth** is returned, it indicates that the Express Connect circuit is billed on a pay-by-bandwidth basis.
        shared_ptr<string> reservationInternetChargeType_ {};
        // The type of the pending order.
        // 
        // If the value is **RENEW**, it indicates that the order is placed for service renewal.
        shared_ptr<string> reservationOrderType_ {};
        // The resource group ID to which the instance belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The specification of the Express Connect circuit.
        // 
        // Unit: **G** (Gbit/s).
        shared_ptr<string> spec_ {};
        // The status of the Express Connect circuit. Valid values:
        // 
        // *   **Initial**
        // *   **Approved**
        // *   **Allocating**
        // *   **Allocated**
        // *   **Confirmed**
        // *   **Enabled**
        // *   **Rejected**
        // *   **Canceled**
        // *   **Allocation Failed**
        // *   **Terminating**
        // *   **Terminated**
        shared_ptr<string> status_ {};
        // The tags that are added to the cluster.
        shared_ptr<PhysicalConnectionType::Tags> tags_ {};
        // The type of resource to which the Express Connect circuit is connected. Only **VPC** may be returned.
        shared_ptr<string> type_ {};
        // The number of Express Connect circuits that are established.
        shared_ptr<int32_t> virtualPhysicalConnectionCount_ {};
        // The VLAN ID of the shared Express Connect circuit.
        shared_ptr<string> vlanId_ {};
        // The status of the shared Express Connect circuit. Valid values:
        // 
        // *   **Confirmed**
        // *   **UnConfirmed**
        // *   **Deleted**
        shared_ptr<string> vpconnStatus_ {};
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
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: **10**. Valid values: **1** to **50**.
    shared_ptr<int32_t> pageSize_ {};
    // The list of Express Connect circuits.
    shared_ptr<DescribePhysicalConnectionsResponseBody::PhysicalConnectionSet> physicalConnectionSet_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
