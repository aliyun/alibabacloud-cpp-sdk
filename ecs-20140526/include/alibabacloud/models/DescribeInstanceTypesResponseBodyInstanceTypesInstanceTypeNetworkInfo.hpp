// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPENETWORKINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPENETWORKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeighting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthWeighting, bandwidthWeighting_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthWeighting, bandwidthWeighting_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthWeighting_ != nullptr; };
    // bandwidthWeighting Field Functions 
    bool hasBandwidthWeighting() const { return this->bandwidthWeighting_ != nullptr;};
    void deleteBandwidthWeighting() { this->bandwidthWeighting_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeighting & bandwidthWeighting() const { DARABONBA_PTR_GET_CONST(bandwidthWeighting_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeighting) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeighting bandwidthWeighting() { DARABONBA_PTR_GET(bandwidthWeighting_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeighting) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo& setBandwidthWeighting(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeighting & bandwidthWeighting) { DARABONBA_PTR_SET_VALUE(bandwidthWeighting_, bandwidthWeighting) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo& setBandwidthWeighting(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeighting && bandwidthWeighting) { DARABONBA_PTR_SET_RVALUE(bandwidthWeighting_, bandwidthWeighting) };


  protected:
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeighting> bandwidthWeighting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
