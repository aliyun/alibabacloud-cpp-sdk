// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGESRESPONSEBODY_HPP_
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
  class DescribeBandwidthPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackages, bandwidthPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackages, bandwidthPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBandwidthPackagesResponseBody() = default ;
    DescribeBandwidthPackagesResponseBody(const DescribeBandwidthPackagesResponseBody &) = default ;
    DescribeBandwidthPackagesResponseBody(DescribeBandwidthPackagesResponseBody &&) = default ;
    DescribeBandwidthPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthPackagesResponseBody() = default ;
    DescribeBandwidthPackagesResponseBody& operator=(const DescribeBandwidthPackagesResponseBody &) = default ;
    DescribeBandwidthPackagesResponseBody& operator=(DescribeBandwidthPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BandwidthPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BandwidthPackages& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthPackage, bandwidthPackage_);
      };
      friend void from_json(const Darabonba::Json& j, BandwidthPackages& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthPackage, bandwidthPackage_);
      };
      BandwidthPackages() = default ;
      BandwidthPackages(const BandwidthPackages &) = default ;
      BandwidthPackages(BandwidthPackages &&) = default ;
      BandwidthPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BandwidthPackages() = default ;
      BandwidthPackages& operator=(const BandwidthPackages &) = default ;
      BandwidthPackages& operator=(BandwidthPackages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BandwidthPackage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BandwidthPackage& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ISP, ISP_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_TO_JSON(PublicIpAddresses, publicIpAddresses_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, BandwidthPackage& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ISP, ISP_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_FROM_JSON(PublicIpAddresses, publicIpAddresses_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        BandwidthPackage() = default ;
        BandwidthPackage(const BandwidthPackage &) = default ;
        BandwidthPackage(BandwidthPackage &&) = default ;
        BandwidthPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BandwidthPackage() = default ;
        BandwidthPackage& operator=(const BandwidthPackage &) = default ;
        BandwidthPackage& operator=(BandwidthPackage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
              DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
            };
            friend void from_json(const Darabonba::Json& j, PublicIpAddresse& obj) { 
              DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
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
        && this->ipAddress_ == nullptr; };
            // allocationId Field Functions 
            bool hasAllocationId() const { return this->allocationId_ != nullptr;};
            void deleteAllocationId() { this->allocationId_ = nullptr;};
            inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
            inline PublicIpAddresse& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


            // ipAddress Field Functions 
            bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
            void deleteIpAddress() { this->ipAddress_ = nullptr;};
            inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
            inline PublicIpAddresse& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


          protected:
            shared_ptr<string> allocationId_ {};
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
        && this->bandwidthPackageId_ == nullptr && this->businessStatus_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->ISP_ == nullptr
        && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr && this->ipCount_ == nullptr && this->name_ == nullptr && this->natGatewayId_ == nullptr
        && this->publicIpAddresses_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->zoneId_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline BandwidthPackage& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // bandwidthPackageId Field Functions 
        bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
        void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
        inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
        inline BandwidthPackage& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline BandwidthPackage& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline BandwidthPackage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BandwidthPackage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ISP Field Functions 
        bool hasISP() const { return this->ISP_ != nullptr;};
        void deleteISP() { this->ISP_ = nullptr;};
        inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
        inline BandwidthPackage& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline BandwidthPackage& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline BandwidthPackage& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // ipCount Field Functions 
        bool hasIpCount() const { return this->ipCount_ != nullptr;};
        void deleteIpCount() { this->ipCount_ = nullptr;};
        inline string getIpCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, "") };
        inline BandwidthPackage& setIpCount(string ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BandwidthPackage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // natGatewayId Field Functions 
        bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
        void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
        inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
        inline BandwidthPackage& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


        // publicIpAddresses Field Functions 
        bool hasPublicIpAddresses() const { return this->publicIpAddresses_ != nullptr;};
        void deletePublicIpAddresses() { this->publicIpAddresses_ = nullptr;};
        inline const BandwidthPackage::PublicIpAddresses & getPublicIpAddresses() const { DARABONBA_PTR_GET_CONST(publicIpAddresses_, BandwidthPackage::PublicIpAddresses) };
        inline BandwidthPackage::PublicIpAddresses getPublicIpAddresses() { DARABONBA_PTR_GET(publicIpAddresses_, BandwidthPackage::PublicIpAddresses) };
        inline BandwidthPackage& setPublicIpAddresses(const BandwidthPackage::PublicIpAddresses & publicIpAddresses) { DARABONBA_PTR_SET_VALUE(publicIpAddresses_, publicIpAddresses) };
        inline BandwidthPackage& setPublicIpAddresses(BandwidthPackage::PublicIpAddresses && publicIpAddresses) { DARABONBA_PTR_SET_RVALUE(publicIpAddresses_, publicIpAddresses) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline BandwidthPackage& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BandwidthPackage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline BandwidthPackage& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> bandwidth_ {};
        shared_ptr<string> bandwidthPackageId_ {};
        shared_ptr<string> businessStatus_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> ISP_ {};
        shared_ptr<string> instanceChargeType_ {};
        shared_ptr<string> internetChargeType_ {};
        shared_ptr<string> ipCount_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> natGatewayId_ {};
        shared_ptr<BandwidthPackage::PublicIpAddresses> publicIpAddresses_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->bandwidthPackage_ == nullptr; };
      // bandwidthPackage Field Functions 
      bool hasBandwidthPackage() const { return this->bandwidthPackage_ != nullptr;};
      void deleteBandwidthPackage() { this->bandwidthPackage_ = nullptr;};
      inline const vector<BandwidthPackages::BandwidthPackage> & getBandwidthPackage() const { DARABONBA_PTR_GET_CONST(bandwidthPackage_, vector<BandwidthPackages::BandwidthPackage>) };
      inline vector<BandwidthPackages::BandwidthPackage> getBandwidthPackage() { DARABONBA_PTR_GET(bandwidthPackage_, vector<BandwidthPackages::BandwidthPackage>) };
      inline BandwidthPackages& setBandwidthPackage(const vector<BandwidthPackages::BandwidthPackage> & bandwidthPackage) { DARABONBA_PTR_SET_VALUE(bandwidthPackage_, bandwidthPackage) };
      inline BandwidthPackages& setBandwidthPackage(vector<BandwidthPackages::BandwidthPackage> && bandwidthPackage) { DARABONBA_PTR_SET_RVALUE(bandwidthPackage_, bandwidthPackage) };


    protected:
      shared_ptr<vector<BandwidthPackages::BandwidthPackage>> bandwidthPackage_ {};
    };

    virtual bool empty() const override { return this->bandwidthPackages_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bandwidthPackages Field Functions 
    bool hasBandwidthPackages() const { return this->bandwidthPackages_ != nullptr;};
    void deleteBandwidthPackages() { this->bandwidthPackages_ = nullptr;};
    inline const DescribeBandwidthPackagesResponseBody::BandwidthPackages & getBandwidthPackages() const { DARABONBA_PTR_GET_CONST(bandwidthPackages_, DescribeBandwidthPackagesResponseBody::BandwidthPackages) };
    inline DescribeBandwidthPackagesResponseBody::BandwidthPackages getBandwidthPackages() { DARABONBA_PTR_GET(bandwidthPackages_, DescribeBandwidthPackagesResponseBody::BandwidthPackages) };
    inline DescribeBandwidthPackagesResponseBody& setBandwidthPackages(const DescribeBandwidthPackagesResponseBody::BandwidthPackages & bandwidthPackages) { DARABONBA_PTR_SET_VALUE(bandwidthPackages_, bandwidthPackages) };
    inline DescribeBandwidthPackagesResponseBody& setBandwidthPackages(DescribeBandwidthPackagesResponseBody::BandwidthPackages && bandwidthPackages) { DARABONBA_PTR_SET_RVALUE(bandwidthPackages_, bandwidthPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBandwidthPackagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBandwidthPackagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBandwidthPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBandwidthPackagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeBandwidthPackagesResponseBody::BandwidthPackages> bandwidthPackages_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
