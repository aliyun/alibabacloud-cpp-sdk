// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSRESPONSEBODYCENINTERREGIONBANDWIDTHLIMITS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSRESPONSEBODYCENINTERREGIONBANDWIDTHLIMITS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits& obj) { 
      DARABONBA_PTR_TO_JSON(CenInterRegionBandwidthLimit, cenInterRegionBandwidthLimit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits& obj) { 
      DARABONBA_PTR_FROM_JSON(CenInterRegionBandwidthLimit, cenInterRegionBandwidthLimit_);
    };
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits() = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits(const DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits &) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits(DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits &&) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits() = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits& operator=(const DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits &) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits& operator=(DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenInterRegionBandwidthLimit_ != nullptr; };
    // cenInterRegionBandwidthLimit Field Functions 
    bool hasCenInterRegionBandwidthLimit() const { return this->cenInterRegionBandwidthLimit_ != nullptr;};
    void deleteCenInterRegionBandwidthLimit() { this->cenInterRegionBandwidthLimit_ = nullptr;};
    inline const vector<Models::DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit> & cenInterRegionBandwidthLimit() const { DARABONBA_PTR_GET_CONST(cenInterRegionBandwidthLimit_, vector<Models::DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit>) };
    inline vector<Models::DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit> cenInterRegionBandwidthLimit() { DARABONBA_PTR_GET(cenInterRegionBandwidthLimit_, vector<Models::DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit>) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits& setCenInterRegionBandwidthLimit(const vector<Models::DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit> & cenInterRegionBandwidthLimit) { DARABONBA_PTR_SET_VALUE(cenInterRegionBandwidthLimit_, cenInterRegionBandwidthLimit) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits& setCenInterRegionBandwidthLimit(vector<Models::DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit> && cenInterRegionBandwidthLimit) { DARABONBA_PTR_SET_RVALUE(cenInterRegionBandwidthLimit_, cenInterRegionBandwidthLimit) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimitsCenInterRegionBandwidthLimit>> cenInterRegionBandwidthLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
