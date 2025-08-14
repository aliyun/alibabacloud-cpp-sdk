// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSRESPONSEBODYCENINTERREGIONBANDWIDTHLIMITSCENINTERREGIONBANDWIDTHLIMIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSRESPONSEBODYCENINTERREGIONBANDWIDTHLIMITSCENINTERREGIONBANDWIDTHLIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
      DARABONBA_PTR_TO_JSON(LocalRegionId, localRegionId_);
      DARABONBA_PTR_TO_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
      DARABONBA_PTR_FROM_JSON(LocalRegionId, localRegionId_);
      DARABONBA_PTR_FROM_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit() = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit(const DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit &) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit(DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit &&) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit() = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& operator=(const DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit &) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& operator=(DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthLimit_ != nullptr
        && this->bandwidthPackageId_ != nullptr && this->bandwidthType_ != nullptr && this->cenId_ != nullptr && this->geographicSpanId_ != nullptr && this->localRegionId_ != nullptr
        && this->oppositeRegionId_ != nullptr && this->status_ != nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline int64_t bandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, 0L) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& setBandwidthLimit(int64_t bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline string bandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // geographicSpanId Field Functions 
    bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
    void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
    inline string geographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


    // localRegionId Field Functions 
    bool hasLocalRegionId() const { return this->localRegionId_ != nullptr;};
    void deleteLocalRegionId() { this->localRegionId_ = nullptr;};
    inline string localRegionId() const { DARABONBA_PTR_GET_DEFAULT(localRegionId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& setLocalRegionId(string localRegionId) { DARABONBA_PTR_SET_VALUE(localRegionId_, localRegionId) };


    // oppositeRegionId Field Functions 
    bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
    void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
    inline string oppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The maximum bandwidth of the inter-region connection. Unit: Mbit/s.
    std::shared_ptr<int64_t> bandwidthLimit_ = nullptr;
    // The ID of the bandwidth plan.
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    // The bandwidth allocation method. Valid values:
    // 
    // *   **BandwidthPackage**: allocates bandwidth from a bandwidth plan.
    // *   **DataTransfer**: bandwidth is billed based on the pay-by-data-transfer metering method.
    std::shared_ptr<string> bandwidthType_ = nullptr;
    // The CEN instance ID.
    std::shared_ptr<string> cenId_ = nullptr;
    // The IDs of the local and peer regions.
    std::shared_ptr<string> geographicSpanId_ = nullptr;
    // The ID of the local region.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> localRegionId_ = nullptr;
    // The ID of the peer region.
    std::shared_ptr<string> oppositeRegionId_ = nullptr;
    // The bandwidth status of the inter-region connection. Valid values:
    // 
    // *   **Active**
    // *   **Modifying**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
