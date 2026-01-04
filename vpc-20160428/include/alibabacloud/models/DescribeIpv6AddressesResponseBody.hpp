// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODY_HPP_
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
  class DescribeIpv6AddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6AddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Addresses, ipv6Addresses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6AddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Addresses, ipv6Addresses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIpv6AddressesResponseBody() = default ;
    DescribeIpv6AddressesResponseBody(const DescribeIpv6AddressesResponseBody &) = default ;
    DescribeIpv6AddressesResponseBody(DescribeIpv6AddressesResponseBody &&) = default ;
    DescribeIpv6AddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6AddressesResponseBody() = default ;
    DescribeIpv6AddressesResponseBody& operator=(const DescribeIpv6AddressesResponseBody &) = default ;
    DescribeIpv6AddressesResponseBody& operator=(DescribeIpv6AddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipv6Addresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6Addresses& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6Addresses& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      };
      Ipv6Addresses() = default ;
      Ipv6Addresses(const Ipv6Addresses &) = default ;
      Ipv6Addresses(Ipv6Addresses &&) = default ;
      Ipv6Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6Addresses() = default ;
      Ipv6Addresses& operator=(const Ipv6Addresses &) = default ;
      Ipv6Addresses& operator=(Ipv6Addresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6Address : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6Address& obj) { 
          DARABONBA_PTR_TO_JSON(AddressType, addressType_);
          DARABONBA_PTR_TO_JSON(AllocationTime, allocationTime_);
          DARABONBA_PTR_TO_JSON(AssociatedInstanceId, associatedInstanceId_);
          DARABONBA_PTR_TO_JSON(AssociatedInstanceType, associatedInstanceType_);
          DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
          DARABONBA_PTR_TO_JSON(Ipv6AddressDescription, ipv6AddressDescription_);
          DARABONBA_PTR_TO_JSON(Ipv6AddressId, ipv6AddressId_);
          DARABONBA_PTR_TO_JSON(Ipv6AddressName, ipv6AddressName_);
          DARABONBA_PTR_TO_JSON(Ipv6GatewayId, ipv6GatewayId_);
          DARABONBA_PTR_TO_JSON(Ipv6InternetBandwidth, ipv6InternetBandwidth_);
          DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(RealBandwidth, realBandwidth_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6Address& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
          DARABONBA_PTR_FROM_JSON(AllocationTime, allocationTime_);
          DARABONBA_PTR_FROM_JSON(AssociatedInstanceId, associatedInstanceId_);
          DARABONBA_PTR_FROM_JSON(AssociatedInstanceType, associatedInstanceType_);
          DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
          DARABONBA_PTR_FROM_JSON(Ipv6AddressDescription, ipv6AddressDescription_);
          DARABONBA_PTR_FROM_JSON(Ipv6AddressId, ipv6AddressId_);
          DARABONBA_PTR_FROM_JSON(Ipv6AddressName, ipv6AddressName_);
          DARABONBA_PTR_FROM_JSON(Ipv6GatewayId, ipv6GatewayId_);
          DARABONBA_PTR_FROM_JSON(Ipv6InternetBandwidth, ipv6InternetBandwidth_);
          DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(RealBandwidth, realBandwidth_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Ipv6Address() = default ;
        Ipv6Address(const Ipv6Address &) = default ;
        Ipv6Address(Ipv6Address &&) = default ;
        Ipv6Address(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6Address() = default ;
        Ipv6Address& operator=(const Ipv6Address &) = default ;
        Ipv6Address& operator=(Ipv6Address &&) = default ;
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
            // The tag key. You can specify up to 20 tag keys. The tag key cannot be an empty string.
            // 
            // The tag key can be up to 128 characters in length. The tag key cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
            shared_ptr<string> key_ {};
            // The tag value.
            // 
            // The tag value can be up to 128 characters in length. It can be an empty string. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
            // 
            // Each tag key corresponds to one tag value. You can specify at most 20 tag values at a time.
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

        class Ipv6InternetBandwidth : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv6InternetBandwidth& obj) { 
            DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
            DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
            DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
            DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
            DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
            DARABONBA_PTR_TO_JSON(Ipv6InternetBandwidthId, ipv6InternetBandwidthId_);
            DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
            DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
            DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
            DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv6InternetBandwidth& obj) { 
            DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
            DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
            DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
            DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
            DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
            DARABONBA_PTR_FROM_JSON(Ipv6InternetBandwidthId, ipv6InternetBandwidthId_);
            DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
            DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
            DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
            DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
          };
          Ipv6InternetBandwidth() = default ;
          Ipv6InternetBandwidth(const Ipv6InternetBandwidth &) = default ;
          Ipv6InternetBandwidth(Ipv6InternetBandwidth &&) = default ;
          Ipv6InternetBandwidth(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv6InternetBandwidth() = default ;
          Ipv6InternetBandwidth& operator=(const Ipv6InternetBandwidth &) = default ;
          Ipv6InternetBandwidth& operator=(Ipv6InternetBandwidth &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->businessStatus_ == nullptr && this->hasReservationData_ == nullptr && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr && this->ipv6InternetBandwidthId_ == nullptr
        && this->reservationActiveTime_ == nullptr && this->reservationBandwidth_ == nullptr && this->reservationInternetChargeType_ == nullptr && this->reservationOrderType_ == nullptr; };
          // bandwidth Field Functions 
          bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
          void deleteBandwidth() { this->bandwidth_ = nullptr;};
          inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
          inline Ipv6InternetBandwidth& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


          // businessStatus Field Functions 
          bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
          void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
          inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
          inline Ipv6InternetBandwidth& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


          // hasReservationData Field Functions 
          bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
          void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
          inline bool getHasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, false) };
          inline Ipv6InternetBandwidth& setHasReservationData(bool hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


          // instanceChargeType Field Functions 
          bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
          void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
          inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
          inline Ipv6InternetBandwidth& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


          // internetChargeType Field Functions 
          bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
          void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
          inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
          inline Ipv6InternetBandwidth& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


          // ipv6InternetBandwidthId Field Functions 
          bool hasIpv6InternetBandwidthId() const { return this->ipv6InternetBandwidthId_ != nullptr;};
          void deleteIpv6InternetBandwidthId() { this->ipv6InternetBandwidthId_ = nullptr;};
          inline string getIpv6InternetBandwidthId() const { DARABONBA_PTR_GET_DEFAULT(ipv6InternetBandwidthId_, "") };
          inline Ipv6InternetBandwidth& setIpv6InternetBandwidthId(string ipv6InternetBandwidthId) { DARABONBA_PTR_SET_VALUE(ipv6InternetBandwidthId_, ipv6InternetBandwidthId) };


          // reservationActiveTime Field Functions 
          bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
          void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
          inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
          inline Ipv6InternetBandwidth& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


          // reservationBandwidth Field Functions 
          bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
          void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
          inline int64_t getReservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, 0L) };
          inline Ipv6InternetBandwidth& setReservationBandwidth(int64_t reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


          // reservationInternetChargeType Field Functions 
          bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
          void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
          inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
          inline Ipv6InternetBandwidth& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


          // reservationOrderType Field Functions 
          bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
          void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
          inline string getReservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
          inline Ipv6InternetBandwidth& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


        protected:
          // The dedicated Internet bandwidth of the IPv6 address. Unit: Mbit/s.
          shared_ptr<int32_t> bandwidth_ {};
          // The status of the Internet bandwidth of the IPv6 address. Valid values:
          // 
          // *   **Normal**
          // *   **FinancialLocked**
          // *   **SecurityLocked**
          shared_ptr<string> businessStatus_ {};
          // Indicates whether renewal data is included. Valid values:
          // 
          // *   **false**
          // *   **true** **true** is returned only when **IncludeReservationData** is set to **true** and some orders have not taken effect.
          shared_ptr<bool> hasReservationData_ {};
          // The billing method of the Internet bandwidth of the IPv6 address. Valid values:
          // 
          // Only **PostPaid** may be returned, which indicates the pay-as-you-go billing method.
          shared_ptr<string> instanceChargeType_ {};
          // The billing method of the Internet bandwidth of the IPv6 address. Valid values:
          // 
          // *   **PayByTraffic**
          // *   **PayByBandwidth**
          shared_ptr<string> internetChargeType_ {};
          // The Internet bandwidth ID of the IPv6 address.
          shared_ptr<string> ipv6InternetBandwidthId_ {};
          // The time when the renewal takes effect. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format.
          shared_ptr<string> reservationActiveTime_ {};
          // The maximum bandwidth after the renewal takes effect. Unit: Mbit/s.
          shared_ptr<int64_t> reservationBandwidth_ {};
          // The metering method that is used after the renewal takes effect.
          // 
          // *   **PayByTraffic**
          // *   **PayByBandwidth**
          shared_ptr<string> reservationInternetChargeType_ {};
          // The type of the renewal order. Only **RENEW** may be returned, which indicates that the order is placed for service renewal.
          shared_ptr<string> reservationOrderType_ {};
        };

        virtual bool empty() const override { return this->addressType_ == nullptr
        && this->allocationTime_ == nullptr && this->associatedInstanceId_ == nullptr && this->associatedInstanceType_ == nullptr && this->ipv6Address_ == nullptr && this->ipv6AddressDescription_ == nullptr
        && this->ipv6AddressId_ == nullptr && this->ipv6AddressName_ == nullptr && this->ipv6GatewayId_ == nullptr && this->ipv6InternetBandwidth_ == nullptr && this->ipv6Isp_ == nullptr
        && this->networkType_ == nullptr && this->realBandwidth_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceManaged_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // addressType Field Functions 
        bool hasAddressType() const { return this->addressType_ != nullptr;};
        void deleteAddressType() { this->addressType_ = nullptr;};
        inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
        inline Ipv6Address& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


        // allocationTime Field Functions 
        bool hasAllocationTime() const { return this->allocationTime_ != nullptr;};
        void deleteAllocationTime() { this->allocationTime_ = nullptr;};
        inline string getAllocationTime() const { DARABONBA_PTR_GET_DEFAULT(allocationTime_, "") };
        inline Ipv6Address& setAllocationTime(string allocationTime) { DARABONBA_PTR_SET_VALUE(allocationTime_, allocationTime) };


        // associatedInstanceId Field Functions 
        bool hasAssociatedInstanceId() const { return this->associatedInstanceId_ != nullptr;};
        void deleteAssociatedInstanceId() { this->associatedInstanceId_ = nullptr;};
        inline string getAssociatedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceId_, "") };
        inline Ipv6Address& setAssociatedInstanceId(string associatedInstanceId) { DARABONBA_PTR_SET_VALUE(associatedInstanceId_, associatedInstanceId) };


        // associatedInstanceType Field Functions 
        bool hasAssociatedInstanceType() const { return this->associatedInstanceType_ != nullptr;};
        void deleteAssociatedInstanceType() { this->associatedInstanceType_ = nullptr;};
        inline string getAssociatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceType_, "") };
        inline Ipv6Address& setAssociatedInstanceType(string associatedInstanceType) { DARABONBA_PTR_SET_VALUE(associatedInstanceType_, associatedInstanceType) };


        // ipv6Address Field Functions 
        bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
        void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
        inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
        inline Ipv6Address& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


        // ipv6AddressDescription Field Functions 
        bool hasIpv6AddressDescription() const { return this->ipv6AddressDescription_ != nullptr;};
        void deleteIpv6AddressDescription() { this->ipv6AddressDescription_ = nullptr;};
        inline string getIpv6AddressDescription() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressDescription_, "") };
        inline Ipv6Address& setIpv6AddressDescription(string ipv6AddressDescription) { DARABONBA_PTR_SET_VALUE(ipv6AddressDescription_, ipv6AddressDescription) };


        // ipv6AddressId Field Functions 
        bool hasIpv6AddressId() const { return this->ipv6AddressId_ != nullptr;};
        void deleteIpv6AddressId() { this->ipv6AddressId_ = nullptr;};
        inline string getIpv6AddressId() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressId_, "") };
        inline Ipv6Address& setIpv6AddressId(string ipv6AddressId) { DARABONBA_PTR_SET_VALUE(ipv6AddressId_, ipv6AddressId) };


        // ipv6AddressName Field Functions 
        bool hasIpv6AddressName() const { return this->ipv6AddressName_ != nullptr;};
        void deleteIpv6AddressName() { this->ipv6AddressName_ = nullptr;};
        inline string getIpv6AddressName() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressName_, "") };
        inline Ipv6Address& setIpv6AddressName(string ipv6AddressName) { DARABONBA_PTR_SET_VALUE(ipv6AddressName_, ipv6AddressName) };


        // ipv6GatewayId Field Functions 
        bool hasIpv6GatewayId() const { return this->ipv6GatewayId_ != nullptr;};
        void deleteIpv6GatewayId() { this->ipv6GatewayId_ = nullptr;};
        inline string getIpv6GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv6GatewayId_, "") };
        inline Ipv6Address& setIpv6GatewayId(string ipv6GatewayId) { DARABONBA_PTR_SET_VALUE(ipv6GatewayId_, ipv6GatewayId) };


        // ipv6InternetBandwidth Field Functions 
        bool hasIpv6InternetBandwidth() const { return this->ipv6InternetBandwidth_ != nullptr;};
        void deleteIpv6InternetBandwidth() { this->ipv6InternetBandwidth_ = nullptr;};
        inline const Ipv6Address::Ipv6InternetBandwidth & getIpv6InternetBandwidth() const { DARABONBA_PTR_GET_CONST(ipv6InternetBandwidth_, Ipv6Address::Ipv6InternetBandwidth) };
        inline Ipv6Address::Ipv6InternetBandwidth getIpv6InternetBandwidth() { DARABONBA_PTR_GET(ipv6InternetBandwidth_, Ipv6Address::Ipv6InternetBandwidth) };
        inline Ipv6Address& setIpv6InternetBandwidth(const Ipv6Address::Ipv6InternetBandwidth & ipv6InternetBandwidth) { DARABONBA_PTR_SET_VALUE(ipv6InternetBandwidth_, ipv6InternetBandwidth) };
        inline Ipv6Address& setIpv6InternetBandwidth(Ipv6Address::Ipv6InternetBandwidth && ipv6InternetBandwidth) { DARABONBA_PTR_SET_RVALUE(ipv6InternetBandwidth_, ipv6InternetBandwidth) };


        // ipv6Isp Field Functions 
        bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
        void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
        inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
        inline Ipv6Address& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline Ipv6Address& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // realBandwidth Field Functions 
        bool hasRealBandwidth() const { return this->realBandwidth_ != nullptr;};
        void deleteRealBandwidth() { this->realBandwidth_ = nullptr;};
        inline int32_t getRealBandwidth() const { DARABONBA_PTR_GET_DEFAULT(realBandwidth_, 0) };
        inline Ipv6Address& setRealBandwidth(int32_t realBandwidth) { DARABONBA_PTR_SET_VALUE(realBandwidth_, realBandwidth) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Ipv6Address& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // serviceManaged Field Functions 
        bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
        void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
        inline int32_t getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, 0) };
        inline Ipv6Address& setServiceManaged(int32_t serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Ipv6Address& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Ipv6Address::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Ipv6Address::Tags) };
        inline Ipv6Address::Tags getTags() { DARABONBA_PTR_GET(tags_, Ipv6Address::Tags) };
        inline Ipv6Address& setTags(const Ipv6Address::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Ipv6Address& setTags(Ipv6Address::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Ipv6Address& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Ipv6Address& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The type of IPv6 address. Valid values:
        // 
        // *   IPv6Address (default): indicates a single IPv6 IP.
        // *   IPv6Prefix: indicates IPv6 CIDR.
        shared_ptr<string> addressType_ {};
        // The time when the IPv6 address was created.
        shared_ptr<string> allocationTime_ {};
        // The ID of the instance associated with the IPv6 address.
        shared_ptr<string> associatedInstanceId_ {};
        // The type of instance associated with the IPv6 address.
        shared_ptr<string> associatedInstanceType_ {};
        // The IPv6 address.
        shared_ptr<string> ipv6Address_ {};
        // The description of the IPv6 address.
        shared_ptr<string> ipv6AddressDescription_ {};
        // The ID of the IPv6 address.
        shared_ptr<string> ipv6AddressId_ {};
        // The name of the IPv6 address.
        shared_ptr<string> ipv6AddressName_ {};
        // The ID of the IPv6 gateway to which the IPv6 address belongs.
        shared_ptr<string> ipv6GatewayId_ {};
        // The Internet bandwidth of the IPv6 address.
        shared_ptr<Ipv6Address::Ipv6InternetBandwidth> ipv6InternetBandwidth_ {};
        // The ISP of the IPv6 address. Valid values:
        // 
        // *   **BGP** (default)
        // *   **ChinaMobile**
        // *   **ChinaUnicom**
        // *   **ChinaTelecom**
        shared_ptr<string> ipv6Isp_ {};
        // The type of connection supported by the IPv6 address. Valid values:
        // 
        // *   **Private**
        // *   **Public**
        shared_ptr<string> networkType_ {};
        // The peak bandwidth of the IPv6 address.
        shared_ptr<int32_t> realBandwidth_ {};
        // The ID of the resource group to which the IPv6 gateway belongs.
        shared_ptr<string> resourceGroupId_ {};
        // Indicates whether the instance is managed. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> serviceManaged_ {};
        // The status of the IPv6 address.
        // 
        // *   **Pending**
        // *   **Available**
        shared_ptr<string> status_ {};
        // The tag list.
        shared_ptr<Ipv6Address::Tags> tags_ {};
        // The ID of the vSwitch to which the IPv6 address belongs.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the VPC to which the IPv6 address belongs.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
      // ipv6Address Field Functions 
      bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
      void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
      inline const vector<Ipv6Addresses::Ipv6Address> & getIpv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<Ipv6Addresses::Ipv6Address>) };
      inline vector<Ipv6Addresses::Ipv6Address> getIpv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<Ipv6Addresses::Ipv6Address>) };
      inline Ipv6Addresses& setIpv6Address(const vector<Ipv6Addresses::Ipv6Address> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
      inline Ipv6Addresses& setIpv6Address(vector<Ipv6Addresses::Ipv6Address> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


    protected:
      shared_ptr<vector<Ipv6Addresses::Ipv6Address>> ipv6Address_ {};
    };

    virtual bool empty() const override { return this->ipv6Addresses_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipv6Addresses Field Functions 
    bool hasIpv6Addresses() const { return this->ipv6Addresses_ != nullptr;};
    void deleteIpv6Addresses() { this->ipv6Addresses_ = nullptr;};
    inline const DescribeIpv6AddressesResponseBody::Ipv6Addresses & getIpv6Addresses() const { DARABONBA_PTR_GET_CONST(ipv6Addresses_, DescribeIpv6AddressesResponseBody::Ipv6Addresses) };
    inline DescribeIpv6AddressesResponseBody::Ipv6Addresses getIpv6Addresses() { DARABONBA_PTR_GET(ipv6Addresses_, DescribeIpv6AddressesResponseBody::Ipv6Addresses) };
    inline DescribeIpv6AddressesResponseBody& setIpv6Addresses(const DescribeIpv6AddressesResponseBody::Ipv6Addresses & ipv6Addresses) { DARABONBA_PTR_SET_VALUE(ipv6Addresses_, ipv6Addresses) };
    inline DescribeIpv6AddressesResponseBody& setIpv6Addresses(DescribeIpv6AddressesResponseBody::Ipv6Addresses && ipv6Addresses) { DARABONBA_PTR_SET_RVALUE(ipv6Addresses_, ipv6Addresses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpv6AddressesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpv6AddressesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpv6AddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIpv6AddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the IPv6 address.
    shared_ptr<DescribeIpv6AddressesResponseBody::Ipv6Addresses> ipv6Addresses_ {};
    // The page number of the returned page. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
