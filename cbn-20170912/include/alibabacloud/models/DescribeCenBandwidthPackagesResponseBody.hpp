// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenBandwidthPackages, cenBandwidthPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackages, cenBandwidthPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenBandwidthPackagesResponseBody() = default ;
    DescribeCenBandwidthPackagesResponseBody(const DescribeCenBandwidthPackagesResponseBody &) = default ;
    DescribeCenBandwidthPackagesResponseBody(DescribeCenBandwidthPackagesResponseBody &&) = default ;
    DescribeCenBandwidthPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesResponseBody() = default ;
    DescribeCenBandwidthPackagesResponseBody& operator=(const DescribeCenBandwidthPackagesResponseBody &) = default ;
    DescribeCenBandwidthPackagesResponseBody& operator=(DescribeCenBandwidthPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CenBandwidthPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CenBandwidthPackages& obj) { 
        DARABONBA_PTR_TO_JSON(CenBandwidthPackage, cenBandwidthPackage_);
      };
      friend void from_json(const Darabonba::Json& j, CenBandwidthPackages& obj) { 
        DARABONBA_PTR_FROM_JSON(CenBandwidthPackage, cenBandwidthPackage_);
      };
      CenBandwidthPackages() = default ;
      CenBandwidthPackages(const CenBandwidthPackages &) = default ;
      CenBandwidthPackages(CenBandwidthPackages &&) = default ;
      CenBandwidthPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CenBandwidthPackages() = default ;
      CenBandwidthPackages& operator=(const CenBandwidthPackages &) = default ;
      CenBandwidthPackages& operator=(CenBandwidthPackages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CenBandwidthPackage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CenBandwidthPackage& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(BandwidthPackageChargeType, bandwidthPackageChargeType_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
          DARABONBA_PTR_TO_JSON(CenIds, cenIds_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(GeographicRegionAId, geographicRegionAId_);
          DARABONBA_PTR_TO_JSON(GeographicRegionBId, geographicRegionBId_);
          DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
          DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
          DARABONBA_PTR_TO_JSON(IsCrossBorder, isCrossBorder_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OrginInterRegionBandwidthLimits, orginInterRegionBandwidthLimits_);
          DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
          DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
          DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
          DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, CenBandwidthPackage& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(BandwidthPackageChargeType, bandwidthPackageChargeType_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
          DARABONBA_PTR_FROM_JSON(CenIds, cenIds_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(GeographicRegionAId, geographicRegionAId_);
          DARABONBA_PTR_FROM_JSON(GeographicRegionBId, geographicRegionBId_);
          DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
          DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
          DARABONBA_PTR_FROM_JSON(IsCrossBorder, isCrossBorder_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OrginInterRegionBandwidthLimits, orginInterRegionBandwidthLimits_);
          DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
          DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
          DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
          DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        CenBandwidthPackage() = default ;
        CenBandwidthPackage(const CenBandwidthPackage &) = default ;
        CenBandwidthPackage(CenBandwidthPackage &&) = default ;
        CenBandwidthPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CenBandwidthPackage() = default ;
        CenBandwidthPackage& operator=(const CenBandwidthPackage &) = default ;
        CenBandwidthPackage& operator=(CenBandwidthPackage &&) = default ;
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
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
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

        class OrginInterRegionBandwidthLimits : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OrginInterRegionBandwidthLimits& obj) { 
            DARABONBA_PTR_TO_JSON(OrginInterRegionBandwidthLimit, orginInterRegionBandwidthLimit_);
          };
          friend void from_json(const Darabonba::Json& j, OrginInterRegionBandwidthLimits& obj) { 
            DARABONBA_PTR_FROM_JSON(OrginInterRegionBandwidthLimit, orginInterRegionBandwidthLimit_);
          };
          OrginInterRegionBandwidthLimits() = default ;
          OrginInterRegionBandwidthLimits(const OrginInterRegionBandwidthLimits &) = default ;
          OrginInterRegionBandwidthLimits(OrginInterRegionBandwidthLimits &&) = default ;
          OrginInterRegionBandwidthLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OrginInterRegionBandwidthLimits() = default ;
          OrginInterRegionBandwidthLimits& operator=(const OrginInterRegionBandwidthLimits &) = default ;
          OrginInterRegionBandwidthLimits& operator=(OrginInterRegionBandwidthLimits &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OrginInterRegionBandwidthLimit : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OrginInterRegionBandwidthLimit& obj) { 
              DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
              DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
              DARABONBA_PTR_TO_JSON(LocalRegionId, localRegionId_);
              DARABONBA_PTR_TO_JSON(OppositeRegionId, oppositeRegionId_);
            };
            friend void from_json(const Darabonba::Json& j, OrginInterRegionBandwidthLimit& obj) { 
              DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
              DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
              DARABONBA_PTR_FROM_JSON(LocalRegionId, localRegionId_);
              DARABONBA_PTR_FROM_JSON(OppositeRegionId, oppositeRegionId_);
            };
            OrginInterRegionBandwidthLimit() = default ;
            OrginInterRegionBandwidthLimit(const OrginInterRegionBandwidthLimit &) = default ;
            OrginInterRegionBandwidthLimit(OrginInterRegionBandwidthLimit &&) = default ;
            OrginInterRegionBandwidthLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OrginInterRegionBandwidthLimit() = default ;
            OrginInterRegionBandwidthLimit& operator=(const OrginInterRegionBandwidthLimit &) = default ;
            OrginInterRegionBandwidthLimit& operator=(OrginInterRegionBandwidthLimit &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bandwidthLimit_ == nullptr
        && this->geographicSpanId_ == nullptr && this->localRegionId_ == nullptr && this->oppositeRegionId_ == nullptr; };
            // bandwidthLimit Field Functions 
            bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
            void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
            inline string getBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, "") };
            inline OrginInterRegionBandwidthLimit& setBandwidthLimit(string bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


            // geographicSpanId Field Functions 
            bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
            void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
            inline string getGeographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
            inline OrginInterRegionBandwidthLimit& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


            // localRegionId Field Functions 
            bool hasLocalRegionId() const { return this->localRegionId_ != nullptr;};
            void deleteLocalRegionId() { this->localRegionId_ = nullptr;};
            inline string getLocalRegionId() const { DARABONBA_PTR_GET_DEFAULT(localRegionId_, "") };
            inline OrginInterRegionBandwidthLimit& setLocalRegionId(string localRegionId) { DARABONBA_PTR_SET_VALUE(localRegionId_, localRegionId) };


            // oppositeRegionId Field Functions 
            bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
            void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
            inline string getOppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
            inline OrginInterRegionBandwidthLimit& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


          protected:
            // The maximum bandwidth value for the inter-region connection.
            shared_ptr<string> bandwidthLimit_ {};
            // The connected regions.
            shared_ptr<string> geographicSpanId_ {};
            // The ID of the local region.
            shared_ptr<string> localRegionId_ {};
            // The ID of the peer region.
            shared_ptr<string> oppositeRegionId_ {};
          };

          virtual bool empty() const override { return this->orginInterRegionBandwidthLimit_ == nullptr; };
          // orginInterRegionBandwidthLimit Field Functions 
          bool hasOrginInterRegionBandwidthLimit() const { return this->orginInterRegionBandwidthLimit_ != nullptr;};
          void deleteOrginInterRegionBandwidthLimit() { this->orginInterRegionBandwidthLimit_ = nullptr;};
          inline const vector<OrginInterRegionBandwidthLimits::OrginInterRegionBandwidthLimit> & getOrginInterRegionBandwidthLimit() const { DARABONBA_PTR_GET_CONST(orginInterRegionBandwidthLimit_, vector<OrginInterRegionBandwidthLimits::OrginInterRegionBandwidthLimit>) };
          inline vector<OrginInterRegionBandwidthLimits::OrginInterRegionBandwidthLimit> getOrginInterRegionBandwidthLimit() { DARABONBA_PTR_GET(orginInterRegionBandwidthLimit_, vector<OrginInterRegionBandwidthLimits::OrginInterRegionBandwidthLimit>) };
          inline OrginInterRegionBandwidthLimits& setOrginInterRegionBandwidthLimit(const vector<OrginInterRegionBandwidthLimits::OrginInterRegionBandwidthLimit> & orginInterRegionBandwidthLimit) { DARABONBA_PTR_SET_VALUE(orginInterRegionBandwidthLimit_, orginInterRegionBandwidthLimit) };
          inline OrginInterRegionBandwidthLimits& setOrginInterRegionBandwidthLimit(vector<OrginInterRegionBandwidthLimits::OrginInterRegionBandwidthLimit> && orginInterRegionBandwidthLimit) { DARABONBA_PTR_SET_RVALUE(orginInterRegionBandwidthLimit_, orginInterRegionBandwidthLimit) };


        protected:
          shared_ptr<vector<OrginInterRegionBandwidthLimits::OrginInterRegionBandwidthLimit>> orginInterRegionBandwidthLimit_ {};
        };

        class CenIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CenIds& obj) { 
            DARABONBA_PTR_TO_JSON(CenId, cenId_);
          };
          friend void from_json(const Darabonba::Json& j, CenIds& obj) { 
            DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          };
          CenIds() = default ;
          CenIds(const CenIds &) = default ;
          CenIds(CenIds &&) = default ;
          CenIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CenIds() = default ;
          CenIds& operator=(const CenIds &) = default ;
          CenIds& operator=(CenIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cenId_ == nullptr; };
          // cenId Field Functions 
          bool hasCenId() const { return this->cenId_ != nullptr;};
          void deleteCenId() { this->cenId_ = nullptr;};
          inline const vector<string> & getCenId() const { DARABONBA_PTR_GET_CONST(cenId_, vector<string>) };
          inline vector<string> getCenId() { DARABONBA_PTR_GET(cenId_, vector<string>) };
          inline CenIds& setCenId(const vector<string> & cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };
          inline CenIds& setCenId(vector<string> && cenId) { DARABONBA_PTR_SET_RVALUE(cenId_, cenId) };


        protected:
          shared_ptr<vector<string>> cenId_ {};
        };

        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->bandwidthPackageChargeType_ == nullptr && this->businessStatus_ == nullptr && this->cenBandwidthPackageId_ == nullptr && this->cenIds_ == nullptr && this->creationTime_ == nullptr
        && this->description_ == nullptr && this->expiredTime_ == nullptr && this->geographicRegionAId_ == nullptr && this->geographicRegionBId_ == nullptr && this->geographicSpanId_ == nullptr
        && this->hasReservationData_ == nullptr && this->isCrossBorder_ == nullptr && this->name_ == nullptr && this->orginInterRegionBandwidthLimits_ == nullptr && this->reservationActiveTime_ == nullptr
        && this->reservationBandwidth_ == nullptr && this->reservationInternetChargeType_ == nullptr && this->reservationOrderType_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
        inline CenBandwidthPackage& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // bandwidthPackageChargeType Field Functions 
        bool hasBandwidthPackageChargeType() const { return this->bandwidthPackageChargeType_ != nullptr;};
        void deleteBandwidthPackageChargeType() { this->bandwidthPackageChargeType_ = nullptr;};
        inline string getBandwidthPackageChargeType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageChargeType_, "") };
        inline CenBandwidthPackage& setBandwidthPackageChargeType(string bandwidthPackageChargeType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageChargeType_, bandwidthPackageChargeType) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline CenBandwidthPackage& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // cenBandwidthPackageId Field Functions 
        bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
        void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
        inline string getCenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
        inline CenBandwidthPackage& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


        // cenIds Field Functions 
        bool hasCenIds() const { return this->cenIds_ != nullptr;};
        void deleteCenIds() { this->cenIds_ = nullptr;};
        inline const CenBandwidthPackage::CenIds & getCenIds() const { DARABONBA_PTR_GET_CONST(cenIds_, CenBandwidthPackage::CenIds) };
        inline CenBandwidthPackage::CenIds getCenIds() { DARABONBA_PTR_GET(cenIds_, CenBandwidthPackage::CenIds) };
        inline CenBandwidthPackage& setCenIds(const CenBandwidthPackage::CenIds & cenIds) { DARABONBA_PTR_SET_VALUE(cenIds_, cenIds) };
        inline CenBandwidthPackage& setCenIds(CenBandwidthPackage::CenIds && cenIds) { DARABONBA_PTR_SET_RVALUE(cenIds_, cenIds) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline CenBandwidthPackage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CenBandwidthPackage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline CenBandwidthPackage& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // geographicRegionAId Field Functions 
        bool hasGeographicRegionAId() const { return this->geographicRegionAId_ != nullptr;};
        void deleteGeographicRegionAId() { this->geographicRegionAId_ = nullptr;};
        inline string getGeographicRegionAId() const { DARABONBA_PTR_GET_DEFAULT(geographicRegionAId_, "") };
        inline CenBandwidthPackage& setGeographicRegionAId(string geographicRegionAId) { DARABONBA_PTR_SET_VALUE(geographicRegionAId_, geographicRegionAId) };


        // geographicRegionBId Field Functions 
        bool hasGeographicRegionBId() const { return this->geographicRegionBId_ != nullptr;};
        void deleteGeographicRegionBId() { this->geographicRegionBId_ = nullptr;};
        inline string getGeographicRegionBId() const { DARABONBA_PTR_GET_DEFAULT(geographicRegionBId_, "") };
        inline CenBandwidthPackage& setGeographicRegionBId(string geographicRegionBId) { DARABONBA_PTR_SET_VALUE(geographicRegionBId_, geographicRegionBId) };


        // geographicSpanId Field Functions 
        bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
        void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
        inline string getGeographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
        inline CenBandwidthPackage& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


        // hasReservationData Field Functions 
        bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
        void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
        inline string getHasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
        inline CenBandwidthPackage& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


        // isCrossBorder Field Functions 
        bool hasIsCrossBorder() const { return this->isCrossBorder_ != nullptr;};
        void deleteIsCrossBorder() { this->isCrossBorder_ = nullptr;};
        inline bool getIsCrossBorder() const { DARABONBA_PTR_GET_DEFAULT(isCrossBorder_, false) };
        inline CenBandwidthPackage& setIsCrossBorder(bool isCrossBorder) { DARABONBA_PTR_SET_VALUE(isCrossBorder_, isCrossBorder) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CenBandwidthPackage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // orginInterRegionBandwidthLimits Field Functions 
        bool hasOrginInterRegionBandwidthLimits() const { return this->orginInterRegionBandwidthLimits_ != nullptr;};
        void deleteOrginInterRegionBandwidthLimits() { this->orginInterRegionBandwidthLimits_ = nullptr;};
        inline const CenBandwidthPackage::OrginInterRegionBandwidthLimits & getOrginInterRegionBandwidthLimits() const { DARABONBA_PTR_GET_CONST(orginInterRegionBandwidthLimits_, CenBandwidthPackage::OrginInterRegionBandwidthLimits) };
        inline CenBandwidthPackage::OrginInterRegionBandwidthLimits getOrginInterRegionBandwidthLimits() { DARABONBA_PTR_GET(orginInterRegionBandwidthLimits_, CenBandwidthPackage::OrginInterRegionBandwidthLimits) };
        inline CenBandwidthPackage& setOrginInterRegionBandwidthLimits(const CenBandwidthPackage::OrginInterRegionBandwidthLimits & orginInterRegionBandwidthLimits) { DARABONBA_PTR_SET_VALUE(orginInterRegionBandwidthLimits_, orginInterRegionBandwidthLimits) };
        inline CenBandwidthPackage& setOrginInterRegionBandwidthLimits(CenBandwidthPackage::OrginInterRegionBandwidthLimits && orginInterRegionBandwidthLimits) { DARABONBA_PTR_SET_RVALUE(orginInterRegionBandwidthLimits_, orginInterRegionBandwidthLimits) };


        // reservationActiveTime Field Functions 
        bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
        void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
        inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
        inline CenBandwidthPackage& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


        // reservationBandwidth Field Functions 
        bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
        void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
        inline string getReservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
        inline CenBandwidthPackage& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


        // reservationInternetChargeType Field Functions 
        bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
        void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
        inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
        inline CenBandwidthPackage& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


        // reservationOrderType Field Functions 
        bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
        void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
        inline string getReservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
        inline CenBandwidthPackage& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline CenBandwidthPackage& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CenBandwidthPackage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const CenBandwidthPackage::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, CenBandwidthPackage::Tags) };
        inline CenBandwidthPackage::Tags getTags() { DARABONBA_PTR_GET(tags_, CenBandwidthPackage::Tags) };
        inline CenBandwidthPackage& setTags(const CenBandwidthPackage::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CenBandwidthPackage& setTags(CenBandwidthPackage::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The maximum bandwidth of the bandwidth plan.
        shared_ptr<int64_t> bandwidth_ {};
        // The billing method of the bandwidth plan.
        shared_ptr<string> bandwidthPackageChargeType_ {};
        // The status of the bandwidth plan. Valid values:
        // 
        // *   **Normal**: running as expected.
        // *   **FinancialLocked**: locked due to overdue payments.
        // *   **SecurityLocked**: locked due to security reasons
        shared_ptr<string> businessStatus_ {};
        // The ID of the bandwidth plan.
        shared_ptr<string> cenBandwidthPackageId_ {};
        // A list of CEN instances that are associated with the bandwidth plan.
        shared_ptr<CenBandwidthPackage::CenIds> cenIds_ {};
        // The time when the bandwidth plan was created. The time is displayed in the ISO8601 standard in the YYYY-MM-DDThh:mmZ format.
        shared_ptr<string> creationTime_ {};
        // The description of the bandwidth plan.
        shared_ptr<string> description_ {};
        // The time when the bandwidth plan expires.
        shared_ptr<string> expiredTime_ {};
        // The ID of the area that you want to query. Valid values:
        // 
        // *   **china**: Chinese mainland.
        // *   **asia-pacific**: Asia Pacific
        // *   **europe**: Europe
        // *   **north-america**: North America
        shared_ptr<string> geographicRegionAId_ {};
        // The ID of the other area connected by the bandwidth plan. Valid values:
        // 
        // *   **china**: Chinese mainland.
        // *   **asia-pacific**: Asia Pacific
        // *   **europe**: Europe
        // *   **north-america**: North America
        shared_ptr<string> geographicRegionBId_ {};
        // The ID of the connected area.
        shared_ptr<string> geographicSpanId_ {};
        // Indicates whether renewal data is included.
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter returns **true** only when the **IncludeReservationData** parameter is set to **true** and a pending order exists.
        shared_ptr<string> hasReservationData_ {};
        // Indicates whether the bandwidth plan supports cross-border communication.
        // 
        // *   **false**
        // *   **true**
        shared_ptr<bool> isCrossBorder_ {};
        // The name of the bandwidth plan.
        shared_ptr<string> name_ {};
        // The details about the connected regions.
        shared_ptr<CenBandwidthPackage::OrginInterRegionBandwidthLimits> orginInterRegionBandwidthLimits_ {};
        // The expiration time of the temporary upgrade.
        shared_ptr<string> reservationActiveTime_ {};
        // The bandwidth value to which the bandwidth plan is restored when the temporary upgrade ends.
        shared_ptr<string> reservationBandwidth_ {};
        // The new billing method.
        shared_ptr<string> reservationInternetChargeType_ {};
        // The renewal method.
        // 
        // *   **TEMP_UPGRADE**: temporary upgrade
        // *   **UPGRADE**: upgrade
        shared_ptr<string> reservationOrderType_ {};
        // The ID of the resource group to which the ACL belongs.
        shared_ptr<string> resourceGroupId_ {};
        // Indicates whether the bandwidth plan is associated with a CEN instance.
        // 
        // *   **Idle**
        // *   **InUse**
        shared_ptr<string> status_ {};
        // The tags of the bandwidth plan.
        shared_ptr<CenBandwidthPackage::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->cenBandwidthPackage_ == nullptr; };
      // cenBandwidthPackage Field Functions 
      bool hasCenBandwidthPackage() const { return this->cenBandwidthPackage_ != nullptr;};
      void deleteCenBandwidthPackage() { this->cenBandwidthPackage_ = nullptr;};
      inline const vector<CenBandwidthPackages::CenBandwidthPackage> & getCenBandwidthPackage() const { DARABONBA_PTR_GET_CONST(cenBandwidthPackage_, vector<CenBandwidthPackages::CenBandwidthPackage>) };
      inline vector<CenBandwidthPackages::CenBandwidthPackage> getCenBandwidthPackage() { DARABONBA_PTR_GET(cenBandwidthPackage_, vector<CenBandwidthPackages::CenBandwidthPackage>) };
      inline CenBandwidthPackages& setCenBandwidthPackage(const vector<CenBandwidthPackages::CenBandwidthPackage> & cenBandwidthPackage) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackage_, cenBandwidthPackage) };
      inline CenBandwidthPackages& setCenBandwidthPackage(vector<CenBandwidthPackages::CenBandwidthPackage> && cenBandwidthPackage) { DARABONBA_PTR_SET_RVALUE(cenBandwidthPackage_, cenBandwidthPackage) };


    protected:
      shared_ptr<vector<CenBandwidthPackages::CenBandwidthPackage>> cenBandwidthPackage_ {};
    };

    virtual bool empty() const override { return this->cenBandwidthPackages_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cenBandwidthPackages Field Functions 
    bool hasCenBandwidthPackages() const { return this->cenBandwidthPackages_ != nullptr;};
    void deleteCenBandwidthPackages() { this->cenBandwidthPackages_ = nullptr;};
    inline const DescribeCenBandwidthPackagesResponseBody::CenBandwidthPackages & getCenBandwidthPackages() const { DARABONBA_PTR_GET_CONST(cenBandwidthPackages_, DescribeCenBandwidthPackagesResponseBody::CenBandwidthPackages) };
    inline DescribeCenBandwidthPackagesResponseBody::CenBandwidthPackages getCenBandwidthPackages() { DARABONBA_PTR_GET(cenBandwidthPackages_, DescribeCenBandwidthPackagesResponseBody::CenBandwidthPackages) };
    inline DescribeCenBandwidthPackagesResponseBody& setCenBandwidthPackages(const DescribeCenBandwidthPackagesResponseBody::CenBandwidthPackages & cenBandwidthPackages) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackages_, cenBandwidthPackages) };
    inline DescribeCenBandwidthPackagesResponseBody& setCenBandwidthPackages(DescribeCenBandwidthPackagesResponseBody::CenBandwidthPackages && cenBandwidthPackages) { DARABONBA_PTR_SET_RVALUE(cenBandwidthPackages_, cenBandwidthPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenBandwidthPackagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenBandwidthPackagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenBandwidthPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenBandwidthPackagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the bandwidth plan.
    shared_ptr<DescribeCenBandwidthPackagesResponseBody::CenBandwidthPackages> cenBandwidthPackages_ {};
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
