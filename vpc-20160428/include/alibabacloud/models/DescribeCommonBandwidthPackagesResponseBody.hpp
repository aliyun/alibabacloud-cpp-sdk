// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONBANDWIDTHPACKAGESRESPONSEBODY_HPP_
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
  class DescribeCommonBandwidthPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommonBandwidthPackages, commonBandwidthPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonBandwidthPackages, commonBandwidthPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCommonBandwidthPackagesResponseBody() = default ;
    DescribeCommonBandwidthPackagesResponseBody(const DescribeCommonBandwidthPackagesResponseBody &) = default ;
    DescribeCommonBandwidthPackagesResponseBody(DescribeCommonBandwidthPackagesResponseBody &&) = default ;
    DescribeCommonBandwidthPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonBandwidthPackagesResponseBody() = default ;
    DescribeCommonBandwidthPackagesResponseBody& operator=(const DescribeCommonBandwidthPackagesResponseBody &) = default ;
    DescribeCommonBandwidthPackagesResponseBody& operator=(DescribeCommonBandwidthPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommonBandwidthPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommonBandwidthPackages& obj) { 
        DARABONBA_PTR_TO_JSON(CommonBandwidthPackage, commonBandwidthPackage_);
      };
      friend void from_json(const Darabonba::Json& j, CommonBandwidthPackages& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonBandwidthPackage, commonBandwidthPackage_);
      };
      CommonBandwidthPackages() = default ;
      CommonBandwidthPackages(const CommonBandwidthPackages &) = default ;
      CommonBandwidthPackages(CommonBandwidthPackages &&) = default ;
      CommonBandwidthPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommonBandwidthPackages() = default ;
      CommonBandwidthPackages& operator=(const CommonBandwidthPackages &) = default ;
      CommonBandwidthPackages& operator=(CommonBandwidthPackages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CommonBandwidthPackage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CommonBandwidthPackage& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
          DARABONBA_PTR_TO_JSON(ISP, ISP_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PublicIpAddresses, publicIpAddresses_);
          DARABONBA_PTR_TO_JSON(Ratio, ratio_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
          DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
          DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
          DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityProtectionTypes, securityProtectionTypes_);
          DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Zone, zone_);
        };
        friend void from_json(const Darabonba::Json& j, CommonBandwidthPackage& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
          DARABONBA_PTR_FROM_JSON(ISP, ISP_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PublicIpAddresses, publicIpAddresses_);
          DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
          DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
          DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
          DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityProtectionTypes, securityProtectionTypes_);
          DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Zone, zone_);
        };
        CommonBandwidthPackage() = default ;
        CommonBandwidthPackage(const CommonBandwidthPackage &) = default ;
        CommonBandwidthPackage(CommonBandwidthPackage &&) = default ;
        CommonBandwidthPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CommonBandwidthPackage() = default ;
        CommonBandwidthPackage& operator=(const CommonBandwidthPackage &) = default ;
        CommonBandwidthPackage& operator=(CommonBandwidthPackage &&) = default ;
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
            // The tag key that is added to the Internet Shared Bandwidth instance.
            shared_ptr<string> key_ {};
            // The tag value that is added to the Internet Shared Bandwidth instance.
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

        class PublicIpAddresses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublicIpAddresses& obj) { 
            DARABONBA_PTR_TO_JSON(PublicIpAddresse, publicIpAddresse_);
          };
          friend void from_json(const Darabonba::Json& j, PublicIpAddresses& obj) { 
            DARABONBA_PTR_FROM_JSON(PublicIpAddresse, publicIpAddresse_);
          };
          PublicIpAddresses() = default ;
          PublicIpAddresses(const PublicIpAddresses &) = default ;
          PublicIpAddresses(PublicIpAddresses &&) = default ;
          PublicIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublicIpAddresses() = default ;
          PublicIpAddresses& operator=(const PublicIpAddresses &) = default ;
          PublicIpAddresses& operator=(PublicIpAddresses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PublicIpAddresse : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PublicIpAddresse& obj) { 
              DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
              DARABONBA_PTR_TO_JSON(BandwidthPackageIpRelationStatus, bandwidthPackageIpRelationStatus_);
              DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
            };
            friend void from_json(const Darabonba::Json& j, PublicIpAddresse& obj) { 
              DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
              DARABONBA_PTR_FROM_JSON(BandwidthPackageIpRelationStatus, bandwidthPackageIpRelationStatus_);
              DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
            };
            PublicIpAddresse() = default ;
            PublicIpAddresse(const PublicIpAddresse &) = default ;
            PublicIpAddresse(PublicIpAddresse &&) = default ;
            PublicIpAddresse(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PublicIpAddresse() = default ;
            PublicIpAddresse& operator=(const PublicIpAddresse &) = default ;
            PublicIpAddresse& operator=(PublicIpAddresse &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->bandwidthPackageIpRelationStatus_ == nullptr && this->ipAddress_ == nullptr; };
            // allocationId Field Functions 
            bool hasAllocationId() const { return this->allocationId_ != nullptr;};
            void deleteAllocationId() { this->allocationId_ = nullptr;};
            inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
            inline PublicIpAddresse& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


            // bandwidthPackageIpRelationStatus Field Functions 
            bool hasBandwidthPackageIpRelationStatus() const { return this->bandwidthPackageIpRelationStatus_ != nullptr;};
            void deleteBandwidthPackageIpRelationStatus() { this->bandwidthPackageIpRelationStatus_ = nullptr;};
            inline string getBandwidthPackageIpRelationStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageIpRelationStatus_, "") };
            inline PublicIpAddresse& setBandwidthPackageIpRelationStatus(string bandwidthPackageIpRelationStatus) { DARABONBA_PTR_SET_VALUE(bandwidthPackageIpRelationStatus_, bandwidthPackageIpRelationStatus) };


            // ipAddress Field Functions 
            bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
            void deleteIpAddress() { this->ipAddress_ = nullptr;};
            inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
            inline PublicIpAddresse& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


          protected:
            // The ID of the EIP.
            shared_ptr<string> allocationId_ {};
            // Indicates whether the EIP is associated with the Internet Shared Bandwidth instance. Valid values:
            // 
            // *   **BINDED**
            // *   **BINDING**
            shared_ptr<string> bandwidthPackageIpRelationStatus_ {};
            // The public IP address.
            shared_ptr<string> ipAddress_ {};
          };

          virtual bool empty() const override { return this->publicIpAddresse_ == nullptr; };
          // publicIpAddresse Field Functions 
          bool hasPublicIpAddresse() const { return this->publicIpAddresse_ != nullptr;};
          void deletePublicIpAddresse() { this->publicIpAddresse_ = nullptr;};
          inline const vector<PublicIpAddresses::PublicIpAddresse> & getPublicIpAddresse() const { DARABONBA_PTR_GET_CONST(publicIpAddresse_, vector<PublicIpAddresses::PublicIpAddresse>) };
          inline vector<PublicIpAddresses::PublicIpAddresse> getPublicIpAddresse() { DARABONBA_PTR_GET(publicIpAddresse_, vector<PublicIpAddresses::PublicIpAddresse>) };
          inline PublicIpAddresses& setPublicIpAddresse(const vector<PublicIpAddresses::PublicIpAddresse> & publicIpAddresse) { DARABONBA_PTR_SET_VALUE(publicIpAddresse_, publicIpAddresse) };
          inline PublicIpAddresses& setPublicIpAddresse(vector<PublicIpAddresses::PublicIpAddresse> && publicIpAddresse) { DARABONBA_PTR_SET_RVALUE(publicIpAddresse_, publicIpAddresse) };


        protected:
          shared_ptr<vector<PublicIpAddresses::PublicIpAddresse>> publicIpAddresse_ {};
        };

        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->bandwidthPackageId_ == nullptr && this->bizType_ == nullptr && this->businessStatus_ == nullptr && this->creationTime_ == nullptr && this->deletionProtection_ == nullptr
        && this->description_ == nullptr && this->expiredTime_ == nullptr && this->hasReservationData_ == nullptr && this->ISP_ == nullptr && this->instanceChargeType_ == nullptr
        && this->internetChargeType_ == nullptr && this->name_ == nullptr && this->publicIpAddresses_ == nullptr && this->ratio_ == nullptr && this->regionId_ == nullptr
        && this->reservationActiveTime_ == nullptr && this->reservationBandwidth_ == nullptr && this->reservationInternetChargeType_ == nullptr && this->reservationOrderType_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityProtectionTypes_ == nullptr && this->serviceManaged_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->zone_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline CommonBandwidthPackage& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // bandwidthPackageId Field Functions 
        bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
        void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
        inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
        inline CommonBandwidthPackage& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline CommonBandwidthPackage& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline CommonBandwidthPackage& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline CommonBandwidthPackage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
        inline CommonBandwidthPackage& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CommonBandwidthPackage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline CommonBandwidthPackage& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // hasReservationData Field Functions 
        bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
        void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
        inline string getHasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
        inline CommonBandwidthPackage& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


        // ISP Field Functions 
        bool hasISP() const { return this->ISP_ != nullptr;};
        void deleteISP() { this->ISP_ = nullptr;};
        inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
        inline CommonBandwidthPackage& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline CommonBandwidthPackage& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline CommonBandwidthPackage& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CommonBandwidthPackage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // publicIpAddresses Field Functions 
        bool hasPublicIpAddresses() const { return this->publicIpAddresses_ != nullptr;};
        void deletePublicIpAddresses() { this->publicIpAddresses_ = nullptr;};
        inline const CommonBandwidthPackage::PublicIpAddresses & getPublicIpAddresses() const { DARABONBA_PTR_GET_CONST(publicIpAddresses_, CommonBandwidthPackage::PublicIpAddresses) };
        inline CommonBandwidthPackage::PublicIpAddresses getPublicIpAddresses() { DARABONBA_PTR_GET(publicIpAddresses_, CommonBandwidthPackage::PublicIpAddresses) };
        inline CommonBandwidthPackage& setPublicIpAddresses(const CommonBandwidthPackage::PublicIpAddresses & publicIpAddresses) { DARABONBA_PTR_SET_VALUE(publicIpAddresses_, publicIpAddresses) };
        inline CommonBandwidthPackage& setPublicIpAddresses(CommonBandwidthPackage::PublicIpAddresses && publicIpAddresses) { DARABONBA_PTR_SET_RVALUE(publicIpAddresses_, publicIpAddresses) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline int32_t getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0) };
        inline CommonBandwidthPackage& setRatio(int32_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline CommonBandwidthPackage& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reservationActiveTime Field Functions 
        bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
        void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
        inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
        inline CommonBandwidthPackage& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


        // reservationBandwidth Field Functions 
        bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
        void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
        inline string getReservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
        inline CommonBandwidthPackage& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


        // reservationInternetChargeType Field Functions 
        bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
        void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
        inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
        inline CommonBandwidthPackage& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


        // reservationOrderType Field Functions 
        bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
        void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
        inline string getReservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
        inline CommonBandwidthPackage& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline CommonBandwidthPackage& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // securityProtectionTypes Field Functions 
        bool hasSecurityProtectionTypes() const { return this->securityProtectionTypes_ != nullptr;};
        void deleteSecurityProtectionTypes() { this->securityProtectionTypes_ = nullptr;};
        inline const CommonBandwidthPackage::SecurityProtectionTypes & getSecurityProtectionTypes() const { DARABONBA_PTR_GET_CONST(securityProtectionTypes_, CommonBandwidthPackage::SecurityProtectionTypes) };
        inline CommonBandwidthPackage::SecurityProtectionTypes getSecurityProtectionTypes() { DARABONBA_PTR_GET(securityProtectionTypes_, CommonBandwidthPackage::SecurityProtectionTypes) };
        inline CommonBandwidthPackage& setSecurityProtectionTypes(const CommonBandwidthPackage::SecurityProtectionTypes & securityProtectionTypes) { DARABONBA_PTR_SET_VALUE(securityProtectionTypes_, securityProtectionTypes) };
        inline CommonBandwidthPackage& setSecurityProtectionTypes(CommonBandwidthPackage::SecurityProtectionTypes && securityProtectionTypes) { DARABONBA_PTR_SET_RVALUE(securityProtectionTypes_, securityProtectionTypes) };


        // serviceManaged Field Functions 
        bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
        void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
        inline int32_t getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, 0) };
        inline CommonBandwidthPackage& setServiceManaged(int32_t serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CommonBandwidthPackage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const CommonBandwidthPackage::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, CommonBandwidthPackage::Tags) };
        inline CommonBandwidthPackage::Tags getTags() { DARABONBA_PTR_GET(tags_, CommonBandwidthPackage::Tags) };
        inline CommonBandwidthPackage& setTags(const CommonBandwidthPackage::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CommonBandwidthPackage& setTags(CommonBandwidthPackage::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // zone Field Functions 
        bool hasZone() const { return this->zone_ != nullptr;};
        void deleteZone() { this->zone_ = nullptr;};
        inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
        inline CommonBandwidthPackage& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


      protected:
        // The maximum bandwidth of the Internet Shared Bandwidth instance. Unit: Mbit/s.
        shared_ptr<string> bandwidth_ {};
        // The ID of the Internet Shared Bandwidth instance.
        shared_ptr<string> bandwidthPackageId_ {};
        // The service type of the Internet Shared Bandwidth instance. Valid values:
        // 
        // *   **CloudBox** The cloud box. Only cloud box users can select this type.
        // *   **Default** (default): The general service type.
        shared_ptr<string> bizType_ {};
        // The service status of the Internet Shared Bandwidth instance. Valid values:
        // 
        // *   **Normal**: The Internet Shared Bandwidth instance runs as expected.
        // *   **FinancialLocked**: An overdue payment occurs in the Internet Shared Bandwidth instance
        // *   **Unactivated**: The Internet Shared Bandwidth instance is not activated.
        shared_ptr<string> businessStatus_ {};
        // The time when the Internet Shared Bandwidth instance was created. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format.
        shared_ptr<string> creationTime_ {};
        // Indicates whether deletion protection is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> deletionProtection_ {};
        // The description of the Internet Shared Bandwidth instance.
        shared_ptr<string> description_ {};
        // The time when the Internet Shared Bandwidth instance expired. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format.
        shared_ptr<string> expiredTime_ {};
        // Indicates whether the information about pending orders is returned. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<string> hasReservationData_ {};
        // The line type. Valid values:
        // 
        // *   **BGP**: BGP (Multi-ISP) line The BGP (Multi-ISP) line is supported in all regions.
        // *   **BGP_PRO**: BGP (Multi-ISP) Pro line The BGP (Multi-ISP) Pro line is supported in the China (Hong Kong), Singapore (Singapore), Japan (Tokyo), Philippines (Manila), Malaysia (Kuala Lumpur), Indonesia (Jakarta), and Thailand (Bangkok) regions.
        // 
        // If you are allowed to use single-ISP bandwidth, one of the following values is returned:
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
        // The billing method of the Internet Shared Bandwidth instance. Valid value:
        // 
        // **PostPaid**: pay-as-you-go
        shared_ptr<string> instanceChargeType_ {};
        // The metering method of the Internet Shared Bandwidth instance. Valid value:
        // 
        // **PayByTraffic**
        shared_ptr<string> internetChargeType_ {};
        // The name of the Internet Shared Bandwidth instance.
        shared_ptr<string> name_ {};
        // The elastic IP addresses (EIPs) that are associated with the Internet Shared Bandwidth instance.
        shared_ptr<CommonBandwidthPackage::PublicIpAddresses> publicIpAddresses_ {};
        // The percentage of the minimum bandwidth commitment. Only **20** is returned.
        // 
        // >  This parameter is supported only on the Alibaba Cloud China site.
        shared_ptr<int32_t> ratio_ {};
        // The ID of the region where the Internet Shared Bandwidth instance resides.
        shared_ptr<string> regionId_ {};
        // The time when the renewal took effect. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format.
        shared_ptr<string> reservationActiveTime_ {};
        // The new maximum bandwidth after the configurations are changed. Unit: Mbit/s.
        shared_ptr<string> reservationBandwidth_ {};
        // The metering method after the configurations are changed. Valid value:
        // 
        // **PayByTraffic**
        shared_ptr<string> reservationInternetChargeType_ {};
        // The renewal method. Valid values:
        // 
        // *   **RENEWCHANGE**: renewal with a specification change
        // *   **TEMP_UPGRADE**: renewal with a temporary upgrade
        // *   **UPGRADE**: renewal with an upgrade
        shared_ptr<string> reservationOrderType_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The editions of Anti-DDoS.
        // 
        // *   If this parameter is empty, Anti-DDoS Origin Basic is enabled.
        // *   If **AntiDDoS_Enhanced** is returned, Anti-DDoS Pro/Premium is enabled.
        shared_ptr<CommonBandwidthPackage::SecurityProtectionTypes> securityProtectionTypes_ {};
        // Indicates whether the resource is created by the service account. Valid values:
        // 
        // *   **0**: The resource is not created by the service account.
        // *   **1**: The resource is created by the service account.
        shared_ptr<int32_t> serviceManaged_ {};
        // The status of the Internet Shared Bandwidth instance. Valid values:
        // 
        // *   **Available**: The Internet Shared Bandwidth instance is available.
        // *   **Modifying**: The Internet Shared Bandwidth instance is being modified.
        shared_ptr<string> status_ {};
        // The tag that is added to the Internet Shared Bandwidth instance.
        shared_ptr<CommonBandwidthPackage::Tags> tags_ {};
        // The zone of the Internet Shared Bandwidth instance. This parameter is returned only when BizType is set to CloudBox. If BizType is set to Default, an empty value is returned.
        shared_ptr<string> zone_ {};
      };

      virtual bool empty() const override { return this->commonBandwidthPackage_ == nullptr; };
      // commonBandwidthPackage Field Functions 
      bool hasCommonBandwidthPackage() const { return this->commonBandwidthPackage_ != nullptr;};
      void deleteCommonBandwidthPackage() { this->commonBandwidthPackage_ = nullptr;};
      inline const vector<CommonBandwidthPackages::CommonBandwidthPackage> & getCommonBandwidthPackage() const { DARABONBA_PTR_GET_CONST(commonBandwidthPackage_, vector<CommonBandwidthPackages::CommonBandwidthPackage>) };
      inline vector<CommonBandwidthPackages::CommonBandwidthPackage> getCommonBandwidthPackage() { DARABONBA_PTR_GET(commonBandwidthPackage_, vector<CommonBandwidthPackages::CommonBandwidthPackage>) };
      inline CommonBandwidthPackages& setCommonBandwidthPackage(const vector<CommonBandwidthPackages::CommonBandwidthPackage> & commonBandwidthPackage) { DARABONBA_PTR_SET_VALUE(commonBandwidthPackage_, commonBandwidthPackage) };
      inline CommonBandwidthPackages& setCommonBandwidthPackage(vector<CommonBandwidthPackages::CommonBandwidthPackage> && commonBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(commonBandwidthPackage_, commonBandwidthPackage) };


    protected:
      shared_ptr<vector<CommonBandwidthPackages::CommonBandwidthPackage>> commonBandwidthPackage_ {};
    };

    virtual bool empty() const override { return this->commonBandwidthPackages_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // commonBandwidthPackages Field Functions 
    bool hasCommonBandwidthPackages() const { return this->commonBandwidthPackages_ != nullptr;};
    void deleteCommonBandwidthPackages() { this->commonBandwidthPackages_ = nullptr;};
    inline const DescribeCommonBandwidthPackagesResponseBody::CommonBandwidthPackages & getCommonBandwidthPackages() const { DARABONBA_PTR_GET_CONST(commonBandwidthPackages_, DescribeCommonBandwidthPackagesResponseBody::CommonBandwidthPackages) };
    inline DescribeCommonBandwidthPackagesResponseBody::CommonBandwidthPackages getCommonBandwidthPackages() { DARABONBA_PTR_GET(commonBandwidthPackages_, DescribeCommonBandwidthPackagesResponseBody::CommonBandwidthPackages) };
    inline DescribeCommonBandwidthPackagesResponseBody& setCommonBandwidthPackages(const DescribeCommonBandwidthPackagesResponseBody::CommonBandwidthPackages & commonBandwidthPackages) { DARABONBA_PTR_SET_VALUE(commonBandwidthPackages_, commonBandwidthPackages) };
    inline DescribeCommonBandwidthPackagesResponseBody& setCommonBandwidthPackages(DescribeCommonBandwidthPackagesResponseBody::CommonBandwidthPackages && commonBandwidthPackages) { DARABONBA_PTR_SET_RVALUE(commonBandwidthPackages_, commonBandwidthPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCommonBandwidthPackagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCommonBandwidthPackagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonBandwidthPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCommonBandwidthPackagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the Internet Shared Bandwidth instance.
    shared_ptr<DescribeCommonBandwidthPackagesResponseBody::CommonBandwidthPackages> commonBandwidthPackages_ {};
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
