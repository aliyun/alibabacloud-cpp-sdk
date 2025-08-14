// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGEORGININTERREGIONBANDWIDTHLIMITS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGEORGININTERREGIONBANDWIDTHLIMITS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits& obj) { 
      DARABONBA_PTR_TO_JSON(OrginInterRegionBandwidthLimit, orginInterRegionBandwidthLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits& obj) { 
      DARABONBA_PTR_FROM_JSON(OrginInterRegionBandwidthLimit, orginInterRegionBandwidthLimit_);
    };
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits &&) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits& operator=(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits& operator=(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orginInterRegionBandwidthLimit_ != nullptr; };
    // orginInterRegionBandwidthLimit Field Functions 
    bool hasOrginInterRegionBandwidthLimit() const { return this->orginInterRegionBandwidthLimit_ != nullptr;};
    void deleteOrginInterRegionBandwidthLimit() { this->orginInterRegionBandwidthLimit_ = nullptr;};
    inline const vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit> & orginInterRegionBandwidthLimit() const { DARABONBA_PTR_GET_CONST(orginInterRegionBandwidthLimit_, vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit>) };
    inline vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit> orginInterRegionBandwidthLimit() { DARABONBA_PTR_GET(orginInterRegionBandwidthLimit_, vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit>) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits& setOrginInterRegionBandwidthLimit(const vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit> & orginInterRegionBandwidthLimit) { DARABONBA_PTR_SET_VALUE(orginInterRegionBandwidthLimit_, orginInterRegionBandwidthLimit) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits& setOrginInterRegionBandwidthLimit(vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit> && orginInterRegionBandwidthLimit) { DARABONBA_PTR_SET_RVALUE(orginInterRegionBandwidthLimit_, orginInterRegionBandwidthLimit) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimitsOrginInterRegionBandwidthLimit>> orginInterRegionBandwidthLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
