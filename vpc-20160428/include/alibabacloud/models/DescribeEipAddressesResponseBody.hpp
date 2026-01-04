// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODY_HPP_
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
  class DescribeEipAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEipAddressesResponseBody() = default ;
    DescribeEipAddressesResponseBody(const DescribeEipAddressesResponseBody &) = default ;
    DescribeEipAddressesResponseBody(DescribeEipAddressesResponseBody &&) = default ;
    DescribeEipAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesResponseBody() = default ;
    DescribeEipAddressesResponseBody& operator=(const DescribeEipAddressesResponseBody &) = default ;
    DescribeEipAddressesResponseBody& operator=(DescribeEipAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EipAddresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EipAddresses& obj) { 
        DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      };
      friend void from_json(const Darabonba::Json& j, EipAddresses& obj) { 
        DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      };
      EipAddresses() = default ;
      EipAddresses(const EipAddresses &) = default ;
      EipAddresses(EipAddresses &&) = default ;
      EipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EipAddresses() = default ;
      EipAddresses& operator=(const EipAddresses &) = default ;
      EipAddresses& operator=(EipAddresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipAddress& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_TO_JSON(AllocationTime, allocationTime_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(BandwidthPackageBandwidth, bandwidthPackageBandwidth_);
          DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(HDMonitorStatus, HDMonitorStatus_);
          DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
          DARABONBA_PTR_TO_JSON(ISP, ISP_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceRegionId, instanceRegionId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Netmode, netmode_);
          DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
          DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
          DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
          DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecondLimited, secondLimited_);
          DARABONBA_PTR_TO_JSON(SecurityProtectionTypes, securityProtectionTypes_);
          DARABONBA_PTR_TO_JSON(SegmentInstanceId, segmentInstanceId_);
          DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
          DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(Zone, zone_);
        };
        friend void from_json(const Darabonba::Json& j, EipAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_FROM_JSON(AllocationTime, allocationTime_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(BandwidthPackageBandwidth, bandwidthPackageBandwidth_);
          DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(HDMonitorStatus, HDMonitorStatus_);
          DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
          DARABONBA_PTR_FROM_JSON(ISP, ISP_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceRegionId, instanceRegionId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Netmode, netmode_);
          DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
          DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
          DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
          DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecondLimited, secondLimited_);
          DARABONBA_PTR_FROM_JSON(SecurityProtectionTypes, securityProtectionTypes_);
          DARABONBA_PTR_FROM_JSON(SegmentInstanceId, segmentInstanceId_);
          DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
          DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(Zone, zone_);
        };
        EipAddress() = default ;
        EipAddress(const EipAddress &) = default ;
        EipAddress(EipAddress &&) = default ;
        EipAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipAddress() = default ;
        EipAddress& operator=(const EipAddress &) = default ;
        EipAddress& operator=(EipAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key of the EIP.
            shared_ptr<string> key_ {};
            // The tag value of the EIP.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class SecurityProtectionTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityProtectionTypes& obj) { 
            DARABONBA_PTR_TO_JSON(SecurityProtectionType, securityProtectionType_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityProtectionTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(SecurityProtectionType, securityProtectionType_);
          };
          SecurityProtectionTypes() = default ;
          SecurityProtectionTypes(const SecurityProtectionTypes &) = default ;
          SecurityProtectionTypes(SecurityProtectionTypes &&) = default ;
          SecurityProtectionTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityProtectionTypes() = default ;
          SecurityProtectionTypes& operator=(const SecurityProtectionTypes &) = default ;
          SecurityProtectionTypes& operator=(SecurityProtectionTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->securityProtectionType_ == nullptr; };
          // securityProtectionType Field Functions 
          bool hasSecurityProtectionType() const { return this->securityProtectionType_ != nullptr;};
          void deleteSecurityProtectionType() { this->securityProtectionType_ = nullptr;};
          inline const vector<string> & getSecurityProtectionType() const { DARABONBA_PTR_GET_CONST(securityProtectionType_, vector<string>) };
          inline vector<string> getSecurityProtectionType() { DARABONBA_PTR_GET(securityProtectionType_, vector<string>) };
          inline SecurityProtectionTypes& setSecurityProtectionType(const vector<string> & securityProtectionType) { DARABONBA_PTR_SET_VALUE(securityProtectionType_, securityProtectionType) };
          inline SecurityProtectionTypes& setSecurityProtectionType(vector<string> && securityProtectionType) { DARABONBA_PTR_SET_RVALUE(securityProtectionType_, securityProtectionType) };


        protected:
          shared_ptr<vector<string>> securityProtectionType_ {};
        };

        class OperationLocks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationLocks& obj) { 
            DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          };
          friend void from_json(const Darabonba::Json& j, OperationLocks& obj) { 
            DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          };
          OperationLocks() = default ;
          OperationLocks(const OperationLocks &) = default ;
          OperationLocks(OperationLocks &&) = default ;
          OperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationLocks() = default ;
          OperationLocks& operator=(const OperationLocks &) = default ;
          OperationLocks& operator=(OperationLocks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LockReason : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LockReason& obj) { 
              DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
            };
            friend void from_json(const Darabonba::Json& j, LockReason& obj) { 
              DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
            };
            LockReason() = default ;
            LockReason(const LockReason &) = default ;
            LockReason(LockReason &&) = default ;
            LockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LockReason() = default ;
            LockReason& operator=(const LockReason &) = default ;
            LockReason& operator=(LockReason &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->lockReason_ == nullptr; };
            // lockReason Field Functions 
            bool hasLockReason() const { return this->lockReason_ != nullptr;};
            void deleteLockReason() { this->lockReason_ = nullptr;};
            inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
            inline LockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


          protected:
            // The reason why the EIP is locked. Valid values:
            // 
            // *   **financial**: The EIP is locked due to overdue payments.
            // *   **security**: The instance is locked for security purposes.
            // *   **sharedPool**: The shared IP address pool is locked due to overdue payments.
            shared_ptr<string> lockReason_ {};
          };

          virtual bool empty() const override { return this->lockReason_ == nullptr; };
          // lockReason Field Functions 
          bool hasLockReason() const { return this->lockReason_ != nullptr;};
          void deleteLockReason() { this->lockReason_ = nullptr;};
          inline const vector<OperationLocks::LockReason> & getLockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<OperationLocks::LockReason>) };
          inline vector<OperationLocks::LockReason> getLockReason() { DARABONBA_PTR_GET(lockReason_, vector<OperationLocks::LockReason>) };
          inline OperationLocks& setLockReason(const vector<OperationLocks::LockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
          inline OperationLocks& setLockReason(vector<OperationLocks::LockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


        protected:
          shared_ptr<vector<OperationLocks::LockReason>> lockReason_ {};
        };

        virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->allocationTime_ == nullptr && this->bandwidth_ == nullptr && this->bandwidthPackageBandwidth_ == nullptr && this->bandwidthPackageId_ == nullptr && this->bandwidthPackageType_ == nullptr
        && this->bizType_ == nullptr && this->businessStatus_ == nullptr && this->chargeType_ == nullptr && this->deletionProtection_ == nullptr && this->description_ == nullptr
        && this->eipBandwidth_ == nullptr && this->expiredTime_ == nullptr && this->HDMonitorStatus_ == nullptr && this->hasReservationData_ == nullptr && this->ISP_ == nullptr
        && this->instanceId_ == nullptr && this->instanceRegionId_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr && this->ipAddress_ == nullptr
        && this->mode_ == nullptr && this->name_ == nullptr && this->netmode_ == nullptr && this->operationLocks_ == nullptr && this->privateIpAddress_ == nullptr
        && this->publicIpAddressPoolId_ == nullptr && this->regionId_ == nullptr && this->reservationActiveTime_ == nullptr && this->reservationBandwidth_ == nullptr && this->reservationInternetChargeType_ == nullptr
        && this->reservationOrderType_ == nullptr && this->resourceGroupId_ == nullptr && this->secondLimited_ == nullptr && this->securityProtectionTypes_ == nullptr && this->segmentInstanceId_ == nullptr
        && this->serviceID_ == nullptr && this->serviceManaged_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr
        && this->zone_ == nullptr; };
        // allocationId Field Functions 
        bool hasAllocationId() const { return this->allocationId_ != nullptr;};
        void deleteAllocationId() { this->allocationId_ = nullptr;};
        inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
        inline EipAddress& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


        // allocationTime Field Functions 
        bool hasAllocationTime() const { return this->allocationTime_ != nullptr;};
        void deleteAllocationTime() { this->allocationTime_ = nullptr;};
        inline string getAllocationTime() const { DARABONBA_PTR_GET_DEFAULT(allocationTime_, "") };
        inline EipAddress& setAllocationTime(string allocationTime) { DARABONBA_PTR_SET_VALUE(allocationTime_, allocationTime) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline EipAddress& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // bandwidthPackageBandwidth Field Functions 
        bool hasBandwidthPackageBandwidth() const { return this->bandwidthPackageBandwidth_ != nullptr;};
        void deleteBandwidthPackageBandwidth() { this->bandwidthPackageBandwidth_ = nullptr;};
        inline string getBandwidthPackageBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageBandwidth_, "") };
        inline EipAddress& setBandwidthPackageBandwidth(string bandwidthPackageBandwidth) { DARABONBA_PTR_SET_VALUE(bandwidthPackageBandwidth_, bandwidthPackageBandwidth) };


        // bandwidthPackageId Field Functions 
        bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
        void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
        inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
        inline EipAddress& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


        // bandwidthPackageType Field Functions 
        bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
        void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
        inline string getBandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
        inline EipAddress& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline EipAddress& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline EipAddress& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline EipAddress& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
        inline EipAddress& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EipAddress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // eipBandwidth Field Functions 
        bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
        void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
        inline string getEipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, "") };
        inline EipAddress& setEipBandwidth(string eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline EipAddress& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // HDMonitorStatus Field Functions 
        bool hasHDMonitorStatus() const { return this->HDMonitorStatus_ != nullptr;};
        void deleteHDMonitorStatus() { this->HDMonitorStatus_ = nullptr;};
        inline string getHDMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(HDMonitorStatus_, "") };
        inline EipAddress& setHDMonitorStatus(string HDMonitorStatus) { DARABONBA_PTR_SET_VALUE(HDMonitorStatus_, HDMonitorStatus) };


        // hasReservationData Field Functions 
        bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
        void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
        inline string getHasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
        inline EipAddress& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


        // ISP Field Functions 
        bool hasISP() const { return this->ISP_ != nullptr;};
        void deleteISP() { this->ISP_ = nullptr;};
        inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
        inline EipAddress& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EipAddress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceRegionId Field Functions 
        bool hasInstanceRegionId() const { return this->instanceRegionId_ != nullptr;};
        void deleteInstanceRegionId() { this->instanceRegionId_ = nullptr;};
        inline string getInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(instanceRegionId_, "") };
        inline EipAddress& setInstanceRegionId(string instanceRegionId) { DARABONBA_PTR_SET_VALUE(instanceRegionId_, instanceRegionId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline EipAddress& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline EipAddress& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline EipAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline EipAddress& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EipAddress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // netmode Field Functions 
        bool hasNetmode() const { return this->netmode_ != nullptr;};
        void deleteNetmode() { this->netmode_ = nullptr;};
        inline string getNetmode() const { DARABONBA_PTR_GET_DEFAULT(netmode_, "") };
        inline EipAddress& setNetmode(string netmode) { DARABONBA_PTR_SET_VALUE(netmode_, netmode) };


        // operationLocks Field Functions 
        bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
        void deleteOperationLocks() { this->operationLocks_ = nullptr;};
        inline const EipAddress::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, EipAddress::OperationLocks) };
        inline EipAddress::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, EipAddress::OperationLocks) };
        inline EipAddress& setOperationLocks(const EipAddress::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
        inline EipAddress& setOperationLocks(EipAddress::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline EipAddress& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


        // publicIpAddressPoolId Field Functions 
        bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
        void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
        inline string getPublicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
        inline EipAddress& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EipAddress& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reservationActiveTime Field Functions 
        bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
        void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
        inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
        inline EipAddress& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


        // reservationBandwidth Field Functions 
        bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
        void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
        inline string getReservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
        inline EipAddress& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


        // reservationInternetChargeType Field Functions 
        bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
        void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
        inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
        inline EipAddress& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


        // reservationOrderType Field Functions 
        bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
        void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
        inline string getReservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
        inline EipAddress& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline EipAddress& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // secondLimited Field Functions 
        bool hasSecondLimited() const { return this->secondLimited_ != nullptr;};
        void deleteSecondLimited() { this->secondLimited_ = nullptr;};
        inline bool getSecondLimited() const { DARABONBA_PTR_GET_DEFAULT(secondLimited_, false) };
        inline EipAddress& setSecondLimited(bool secondLimited) { DARABONBA_PTR_SET_VALUE(secondLimited_, secondLimited) };


        // securityProtectionTypes Field Functions 
        bool hasSecurityProtectionTypes() const { return this->securityProtectionTypes_ != nullptr;};
        void deleteSecurityProtectionTypes() { this->securityProtectionTypes_ = nullptr;};
        inline const EipAddress::SecurityProtectionTypes & getSecurityProtectionTypes() const { DARABONBA_PTR_GET_CONST(securityProtectionTypes_, EipAddress::SecurityProtectionTypes) };
        inline EipAddress::SecurityProtectionTypes getSecurityProtectionTypes() { DARABONBA_PTR_GET(securityProtectionTypes_, EipAddress::SecurityProtectionTypes) };
        inline EipAddress& setSecurityProtectionTypes(const EipAddress::SecurityProtectionTypes & securityProtectionTypes) { DARABONBA_PTR_SET_VALUE(securityProtectionTypes_, securityProtectionTypes) };
        inline EipAddress& setSecurityProtectionTypes(EipAddress::SecurityProtectionTypes && securityProtectionTypes) { DARABONBA_PTR_SET_RVALUE(securityProtectionTypes_, securityProtectionTypes) };


        // segmentInstanceId Field Functions 
        bool hasSegmentInstanceId() const { return this->segmentInstanceId_ != nullptr;};
        void deleteSegmentInstanceId() { this->segmentInstanceId_ = nullptr;};
        inline string getSegmentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(segmentInstanceId_, "") };
        inline EipAddress& setSegmentInstanceId(string segmentInstanceId) { DARABONBA_PTR_SET_VALUE(segmentInstanceId_, segmentInstanceId) };


        // serviceID Field Functions 
        bool hasServiceID() const { return this->serviceID_ != nullptr;};
        void deleteServiceID() { this->serviceID_ = nullptr;};
        inline int64_t getServiceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
        inline EipAddress& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


        // serviceManaged Field Functions 
        bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
        void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
        inline int32_t getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, 0) };
        inline EipAddress& setServiceManaged(int32_t serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EipAddress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const EipAddress::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, EipAddress::Tags) };
        inline EipAddress::Tags getTags() { DARABONBA_PTR_GET(tags_, EipAddress::Tags) };
        inline EipAddress& setTags(const EipAddress::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline EipAddress& setTags(EipAddress::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline EipAddress& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zone Field Functions 
        bool hasZone() const { return this->zone_ != nullptr;};
        void deleteZone() { this->zone_ = nullptr;};
        inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
        inline EipAddress& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


      protected:
        // The ID of the EIP.
        shared_ptr<string> allocationId_ {};
        // The time when the EIP was created. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format.
        shared_ptr<string> allocationTime_ {};
        // The maximum bandwidth of the EIP. Unit: Mbit/s.
        shared_ptr<string> bandwidth_ {};
        // The maximum bandwidth of the Internet Shared Bandwidth instance with which the EIP is associated. Unit: Mbit/s.
        shared_ptr<string> bandwidthPackageBandwidth_ {};
        // The ID of the Internet Shared Bandwidth instance.
        shared_ptr<string> bandwidthPackageId_ {};
        // The type of the bandwidth. Only **CommonBandwidthPackage** may be returned, which indicates Internet Shared Bandwidth.
        shared_ptr<string> bandwidthPackageType_ {};
        // The service type. Valid values:
        // 
        // *   **CloudBox** Only cloud box users can select this type.
        // *   **Default** (default)
        shared_ptr<string> bizType_ {};
        // The service status of the EIP. Valid values:
        // 
        // *   **Normal**
        // *   **OperationLock**
        // *   **Unactivated**
        shared_ptr<string> businessStatus_ {};
        // The billing method of the EIP. Valid values:
        // 
        // *   **PostPaid**: pay-as-you-go.
        // *   **PrePaid**: subscription.
        shared_ptr<string> chargeType_ {};
        // Indicates whether deletion protection is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> deletionProtection_ {};
        // The description of the EIP.
        shared_ptr<string> description_ {};
        // The maximum bandwidth of the EIP when it is not associated with an Internet Shared Bandwidth instance. Unit: Mbit/s.
        shared_ptr<string> eipBandwidth_ {};
        // The time when the EIP expires. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format.
        shared_ptr<string> expiredTime_ {};
        // Indicates whether fine-grained monitoring is enabled for the EIP. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<string> HDMonitorStatus_ {};
        // Indicates whether renewal data is included. Valid values:
        // 
        // *   **false**
        // *   **true** A value of **true** is returned only when **IncludeReservationData** is set to **true** and some orders have not taken effect.
        shared_ptr<string> hasReservationData_ {};
        // The line type. Valid values:
        // 
        // *   **BGP**: BGP (Multi-ISP). The BGP (Multi-ISP) line is supported in all regions.
        // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines. BGP (Multi-ISP) Pro line is supported only in the China (Hong Kong), Singapore, Japan (Tokyo), Malaysia (Kuala Lumpur), Philippines (Manila), Indonesia (Jakarta), and Thailand (Bangkok) regions.
        // 
        // For more information about BGP (Multi-ISP) and BGP (Multi-ISP) Pro, see the [Line types](https://help.aliyun.com/document_detail/32321.html) section of the "What is EIP?" topic.
        // 
        // If you are allowed to use single-ISP bandwidth, one of the following values may be returned:
        // 
        // *   **ChinaTelecom**
        // *   **ChinaUnicom**
        // *   **ChinaMobile**
        // *   **ChinaTelecom_L2**
        // *   **ChinaUnicom_L2**
        // *   **ChinaMobile_L2**
        // 
        // If your services are deployed in China East 1 Finance, **BGP_FinanceCloud** is returned.
        shared_ptr<string> ISP_ {};
        // The ID of the associated instance.
        shared_ptr<string> instanceId_ {};
        // The region ID of the associated instance.
        shared_ptr<string> instanceRegionId_ {};
        // The type of the associated instance. Valid values:
        // 
        // *   **EcsInstance**: an ECS instance in a VPC.
        // *   **SlbInstance**: a CLB instance in a VPC.
        // *   **Nat**: a NAT gateway.
        // *   **HaVip**: an HAVIP.
        // *   **NetworkInterface**: a secondary ENI.
        // *   **IpAddress**: an IP address.
        shared_ptr<string> instanceType_ {};
        // The metering method of the EIP. Valid values:
        // 
        // *   **PayByBandwidth**
        // *   **PayByTraffic**
        shared_ptr<string> internetChargeType_ {};
        // The EIP.
        shared_ptr<string> ipAddress_ {};
        // The association mode. Valid values:
        // - **NAT**: NAT mode
        // - **MULTI_BINDED**: multi-EIP-to-ENI mode
        // - **BINDED**: cut-through mode
        shared_ptr<string> mode_ {};
        // The name of the EIP.
        shared_ptr<string> name_ {};
        // The network type. Only **public** may be returned.
        shared_ptr<string> netmode_ {};
        // The details about the locked EIP.
        shared_ptr<EipAddress::OperationLocks> operationLocks_ {};
        // The private IP address of the secondary ENI with which the EIP is associated.
        shared_ptr<string> privateIpAddress_ {};
        // The ID of the IP address pool to which the EIP belongs.
        shared_ptr<string> publicIpAddressPoolId_ {};
        // The region ID of the EIP.
        shared_ptr<string> regionId_ {};
        // The time when the renewal took effect. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format.
        shared_ptr<string> reservationActiveTime_ {};
        // The maximum bandwidth after the renewal takes effect. Unit: Mbit/s.
        shared_ptr<string> reservationBandwidth_ {};
        // The metering method that is used after the renewal takes effect. Valid values:
        // 
        // *   **PayByBandwidth**
        // *   **PayByTraffic**
        shared_ptr<string> reservationInternetChargeType_ {};
        // The type of the renewal order. Valid values:
        // 
        // *   **RENEWCHANGE**: renewal with an upgrade or a downgrade.
        // *   **TEMP_UPGRADE**: temporary upgrade.
        // *   **UPGRADE**: upgrade.
        shared_ptr<string> reservationOrderType_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // Indicates whether level-2 throttling is configured. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> secondLimited_ {};
        // The edition of Anti-DDoS.
        // 
        // *   If an empty value is returned, it indicates that Anti-DDoS Origin Basic is used.
        // *   If **AntiDDoS_Enhanced** is returned, it indicates that Anti-DDoS Pro/Premium is used.
        shared_ptr<EipAddress::SecurityProtectionTypes> securityProtectionTypes_ {};
        // The ID of the contiguous EIP group.
        // 
        // This value is returned only when you query contiguous EIPs.
        shared_ptr<string> segmentInstanceId_ {};
        // The ID of the service provider to which the managed instance belongs.
        // > This is only valid when the ServiceManaged parameter is set to True.
        shared_ptr<int64_t> serviceID_ {};
        // Indicates whether the instance is managed. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> serviceManaged_ {};
        // The status of the EIP. Valid values:
        // 
        // *   **Associating**
        // *   **Unassociating**
        // *   **InUse**
        // *   **Available**
        // *   **Releasing**
        shared_ptr<string> status_ {};
        // The tags of the EIP.
        shared_ptr<EipAddress::Tags> tags_ {};
        // The ID of the VPC in which an IPv4 gateway is created and that is deployed in the same region as the EIP.
        // 
        // When you associate an EIP with an IP address, the system can enable the IP address to access the Internet based on VPC route configurations.
        // 
        // >  This parameter is returned if the value of **InstanceType** is **IpAddress**. In this case, the EIP is associated with an IP address.
        shared_ptr<string> vpcId_ {};
        // The zone of the EIP.
        // 
        // This parameter is returned only when the service type is CloudBox.
        shared_ptr<string> zone_ {};
      };

      virtual bool empty() const override { return this->eipAddress_ == nullptr; };
      // eipAddress Field Functions 
      bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
      void deleteEipAddress() { this->eipAddress_ = nullptr;};
      inline const vector<EipAddresses::EipAddress> & getEipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, vector<EipAddresses::EipAddress>) };
      inline vector<EipAddresses::EipAddress> getEipAddress() { DARABONBA_PTR_GET(eipAddress_, vector<EipAddresses::EipAddress>) };
      inline EipAddresses& setEipAddress(const vector<EipAddresses::EipAddress> & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
      inline EipAddresses& setEipAddress(vector<EipAddresses::EipAddress> && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


    protected:
      shared_ptr<vector<EipAddresses::EipAddress>> eipAddress_ {};
    };

    virtual bool empty() const override { return this->eipAddresses_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // eipAddresses Field Functions 
    bool hasEipAddresses() const { return this->eipAddresses_ != nullptr;};
    void deleteEipAddresses() { this->eipAddresses_ = nullptr;};
    inline const DescribeEipAddressesResponseBody::EipAddresses & getEipAddresses() const { DARABONBA_PTR_GET_CONST(eipAddresses_, DescribeEipAddressesResponseBody::EipAddresses) };
    inline DescribeEipAddressesResponseBody::EipAddresses getEipAddresses() { DARABONBA_PTR_GET(eipAddresses_, DescribeEipAddressesResponseBody::EipAddresses) };
    inline DescribeEipAddressesResponseBody& setEipAddresses(const DescribeEipAddressesResponseBody::EipAddresses & eipAddresses) { DARABONBA_PTR_SET_VALUE(eipAddresses_, eipAddresses) };
    inline DescribeEipAddressesResponseBody& setEipAddresses(DescribeEipAddressesResponseBody::EipAddresses && eipAddresses) { DARABONBA_PTR_SET_RVALUE(eipAddresses_, eipAddresses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEipAddressesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEipAddressesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEipAddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the EIPs.
    shared_ptr<DescribeEipAddressesResponseBody::EipAddresses> eipAddresses_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
