// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGEORGININTERREGIONBANDWIDTHLIMITSORGININTERREGIONBANDWIDTHLIMIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGEORGININTERREGIONBANDWIDTHLIMITSORGININTERREGIONBANDWIDTHLIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
      DARABONBA_PTR_TO_JSON(LocalRegionId, localRegionId_);
      DARABONBA_PTR_TO_JSON(OppositeRegionId, oppositeRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
      DARABONBA_PTR_FROM_JSON(LocalRegionId, localRegionId_);
      DARABONBA_PTR_FROM_JSON(OppositeRegionId, oppositeRegionId_);
    };
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit &&) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit& operator=(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit& operator=(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthLimit_ != nullptr
        && this->geographicSpanId_ != nullptr && this->localRegionId_ != nullptr && this->oppositeRegionId_ != nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline string bandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit& setBandwidthLimit(string bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // geographicSpanId Field Functions 
    bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
    void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
    inline string geographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


    // localRegionId Field Functions 
    bool hasLocalRegionId() const { return this->localRegionId_ != nullptr;};
    void deleteLocalRegionId() { this->localRegionId_ = nullptr;};
    inline string localRegionId() const { DARABONBA_PTR_GET_DEFAULT(localRegionId_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit& setLocalRegionId(string localRegionId) { DARABONBA_PTR_SET_VALUE(localRegionId_, localRegionId) };


    // oppositeRegionId Field Functions 
    bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
    void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
    inline string oppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


  protected:
    // The maximum bandwidth value for the inter-region connection.
    std::shared_ptr<string> bandwidthLimit_ = nullptr;
    // The connected regions.
    std::shared_ptr<string> geographicSpanId_ = nullptr;
    // The ID of the local region.
    std::shared_ptr<string> localRegionId_ = nullptr;
    // The ID of the peer region.
    std::shared_ptr<string> oppositeRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
