// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSRESPONSEBODY_HPP_
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
  class DescribeCenInterRegionBandwidthLimitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenInterRegionBandwidthLimitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenInterRegionBandwidthLimits, cenInterRegionBandwidthLimits_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenInterRegionBandwidthLimitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenInterRegionBandwidthLimits, cenInterRegionBandwidthLimits_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenInterRegionBandwidthLimitsResponseBody() = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody(const DescribeCenInterRegionBandwidthLimitsResponseBody &) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody(DescribeCenInterRegionBandwidthLimitsResponseBody &&) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenInterRegionBandwidthLimitsResponseBody() = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody& operator=(const DescribeCenInterRegionBandwidthLimitsResponseBody &) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody& operator=(DescribeCenInterRegionBandwidthLimitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CenInterRegionBandwidthLimits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CenInterRegionBandwidthLimits& obj) { 
        DARABONBA_PTR_TO_JSON(CenInterRegionBandwidthLimit, cenInterRegionBandwidthLimit_);
      };
      friend void from_json(const Darabonba::Json& j, CenInterRegionBandwidthLimits& obj) { 
        DARABONBA_PTR_FROM_JSON(CenInterRegionBandwidthLimit, cenInterRegionBandwidthLimit_);
      };
      CenInterRegionBandwidthLimits() = default ;
      CenInterRegionBandwidthLimits(const CenInterRegionBandwidthLimits &) = default ;
      CenInterRegionBandwidthLimits(CenInterRegionBandwidthLimits &&) = default ;
      CenInterRegionBandwidthLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CenInterRegionBandwidthLimits() = default ;
      CenInterRegionBandwidthLimits& operator=(const CenInterRegionBandwidthLimits &) = default ;
      CenInterRegionBandwidthLimits& operator=(CenInterRegionBandwidthLimits &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CenInterRegionBandwidthLimit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CenInterRegionBandwidthLimit& obj) { 
          DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
          DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
          DARABONBA_PTR_TO_JSON(LocalRegionId, localRegionId_);
          DARABONBA_PTR_TO_JSON(OppositeRegionId, oppositeRegionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, CenInterRegionBandwidthLimit& obj) { 
          DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
          DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
          DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
          DARABONBA_PTR_FROM_JSON(LocalRegionId, localRegionId_);
          DARABONBA_PTR_FROM_JSON(OppositeRegionId, oppositeRegionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        CenInterRegionBandwidthLimit() = default ;
        CenInterRegionBandwidthLimit(const CenInterRegionBandwidthLimit &) = default ;
        CenInterRegionBandwidthLimit(CenInterRegionBandwidthLimit &&) = default ;
        CenInterRegionBandwidthLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CenInterRegionBandwidthLimit() = default ;
        CenInterRegionBandwidthLimit& operator=(const CenInterRegionBandwidthLimit &) = default ;
        CenInterRegionBandwidthLimit& operator=(CenInterRegionBandwidthLimit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidthLimit_ == nullptr
        && this->bandwidthPackageId_ == nullptr && this->bandwidthType_ == nullptr && this->cenId_ == nullptr && this->geographicSpanId_ == nullptr && this->localRegionId_ == nullptr
        && this->oppositeRegionId_ == nullptr && this->status_ == nullptr; };
        // bandwidthLimit Field Functions 
        bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
        void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
        inline int64_t getBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, 0L) };
        inline CenInterRegionBandwidthLimit& setBandwidthLimit(int64_t bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


        // bandwidthPackageId Field Functions 
        bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
        void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
        inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
        inline CenInterRegionBandwidthLimit& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


        // bandwidthType Field Functions 
        bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
        void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
        inline string getBandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
        inline CenInterRegionBandwidthLimit& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline CenInterRegionBandwidthLimit& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // geographicSpanId Field Functions 
        bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
        void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
        inline string getGeographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
        inline CenInterRegionBandwidthLimit& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


        // localRegionId Field Functions 
        bool hasLocalRegionId() const { return this->localRegionId_ != nullptr;};
        void deleteLocalRegionId() { this->localRegionId_ = nullptr;};
        inline string getLocalRegionId() const { DARABONBA_PTR_GET_DEFAULT(localRegionId_, "") };
        inline CenInterRegionBandwidthLimit& setLocalRegionId(string localRegionId) { DARABONBA_PTR_SET_VALUE(localRegionId_, localRegionId) };


        // oppositeRegionId Field Functions 
        bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
        void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
        inline string getOppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
        inline CenInterRegionBandwidthLimit& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CenInterRegionBandwidthLimit& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The maximum bandwidth of the inter-region connection. Unit: Mbit/s.
        shared_ptr<int64_t> bandwidthLimit_ {};
        // The ID of the bandwidth plan.
        shared_ptr<string> bandwidthPackageId_ {};
        // The bandwidth allocation method. Valid values:
        // 
        // *   **BandwidthPackage**: allocates bandwidth from a bandwidth plan.
        // *   **DataTransfer**: bandwidth is billed based on the pay-by-data-transfer metering method.
        shared_ptr<string> bandwidthType_ {};
        // The CEN instance ID.
        shared_ptr<string> cenId_ {};
        // The IDs of the local and peer regions.
        shared_ptr<string> geographicSpanId_ {};
        // The ID of the local region.
        // 
        // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
        shared_ptr<string> localRegionId_ {};
        // The ID of the peer region.
        shared_ptr<string> oppositeRegionId_ {};
        // The bandwidth status of the inter-region connection. Valid values:
        // 
        // *   **Active**
        // *   **Modifying**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->cenInterRegionBandwidthLimit_ == nullptr; };
      // cenInterRegionBandwidthLimit Field Functions 
      bool hasCenInterRegionBandwidthLimit() const { return this->cenInterRegionBandwidthLimit_ != nullptr;};
      void deleteCenInterRegionBandwidthLimit() { this->cenInterRegionBandwidthLimit_ = nullptr;};
      inline const vector<CenInterRegionBandwidthLimits::CenInterRegionBandwidthLimit> & getCenInterRegionBandwidthLimit() const { DARABONBA_PTR_GET_CONST(cenInterRegionBandwidthLimit_, vector<CenInterRegionBandwidthLimits::CenInterRegionBandwidthLimit>) };
      inline vector<CenInterRegionBandwidthLimits::CenInterRegionBandwidthLimit> getCenInterRegionBandwidthLimit() { DARABONBA_PTR_GET(cenInterRegionBandwidthLimit_, vector<CenInterRegionBandwidthLimits::CenInterRegionBandwidthLimit>) };
      inline CenInterRegionBandwidthLimits& setCenInterRegionBandwidthLimit(const vector<CenInterRegionBandwidthLimits::CenInterRegionBandwidthLimit> & cenInterRegionBandwidthLimit) { DARABONBA_PTR_SET_VALUE(cenInterRegionBandwidthLimit_, cenInterRegionBandwidthLimit) };
      inline CenInterRegionBandwidthLimits& setCenInterRegionBandwidthLimit(vector<CenInterRegionBandwidthLimits::CenInterRegionBandwidthLimit> && cenInterRegionBandwidthLimit) { DARABONBA_PTR_SET_RVALUE(cenInterRegionBandwidthLimit_, cenInterRegionBandwidthLimit) };


    protected:
      shared_ptr<vector<CenInterRegionBandwidthLimits::CenInterRegionBandwidthLimit>> cenInterRegionBandwidthLimit_ {};
    };

    virtual bool empty() const override { return this->cenInterRegionBandwidthLimits_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cenInterRegionBandwidthLimits Field Functions 
    bool hasCenInterRegionBandwidthLimits() const { return this->cenInterRegionBandwidthLimits_ != nullptr;};
    void deleteCenInterRegionBandwidthLimits() { this->cenInterRegionBandwidthLimits_ = nullptr;};
    inline const DescribeCenInterRegionBandwidthLimitsResponseBody::CenInterRegionBandwidthLimits & getCenInterRegionBandwidthLimits() const { DARABONBA_PTR_GET_CONST(cenInterRegionBandwidthLimits_, DescribeCenInterRegionBandwidthLimitsResponseBody::CenInterRegionBandwidthLimits) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody::CenInterRegionBandwidthLimits getCenInterRegionBandwidthLimits() { DARABONBA_PTR_GET(cenInterRegionBandwidthLimits_, DescribeCenInterRegionBandwidthLimitsResponseBody::CenInterRegionBandwidthLimits) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setCenInterRegionBandwidthLimits(const DescribeCenInterRegionBandwidthLimitsResponseBody::CenInterRegionBandwidthLimits & cenInterRegionBandwidthLimits) { DARABONBA_PTR_SET_VALUE(cenInterRegionBandwidthLimits_, cenInterRegionBandwidthLimits) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setCenInterRegionBandwidthLimits(DescribeCenInterRegionBandwidthLimitsResponseBody::CenInterRegionBandwidthLimits && cenInterRegionBandwidthLimits) { DARABONBA_PTR_SET_RVALUE(cenInterRegionBandwidthLimits_, cenInterRegionBandwidthLimits) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of inter-region connections.
    shared_ptr<DescribeCenInterRegionBandwidthLimitsResponseBody::CenInterRegionBandwidthLimits> cenInterRegionBandwidthLimits_ {};
    // The page number of the returned page.
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
