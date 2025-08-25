// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPENETWORKINFOBANDWIDTHWEIGHTINGWEIGHTINGINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPENETWORKINFOBANDWIDTHWEIGHTINGWEIGHTINGINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos& obj) { 
      DARABONBA_PTR_TO_JSON(WeightingInfo, weightingInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(WeightingInfo, weightingInfo_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->weightingInfo_ != nullptr; };
    // weightingInfo Field Functions 
    bool hasWeightingInfo() const { return this->weightingInfo_ != nullptr;};
    void deleteWeightingInfo() { this->weightingInfo_ = nullptr;};
    inline const vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo> & weightingInfo() const { DARABONBA_PTR_GET_CONST(weightingInfo_, vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo>) };
    inline vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo> weightingInfo() { DARABONBA_PTR_GET(weightingInfo_, vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo>) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos& setWeightingInfo(const vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo> & weightingInfo) { DARABONBA_PTR_SET_VALUE(weightingInfo_, weightingInfo) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfos& setWeightingInfo(vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo> && weightingInfo) { DARABONBA_PTR_SET_RVALUE(weightingInfo_, weightingInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo>> weightingInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
