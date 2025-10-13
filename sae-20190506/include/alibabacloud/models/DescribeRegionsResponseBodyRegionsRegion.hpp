// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionsRegionRecommendZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RecommendZones, recommendZones_);
      DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RecommendZones, recommendZones_);
      DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeRegionsResponseBodyRegionsRegion() = default ;
    DescribeRegionsResponseBodyRegionsRegion(const DescribeRegionsResponseBodyRegionsRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRegion(DescribeRegionsResponseBodyRegionsRegion &&) = default ;
    DescribeRegionsResponseBodyRegionsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRegion() = default ;
    DescribeRegionsResponseBodyRegionsRegion& operator=(const DescribeRegionsResponseBodyRegionsRegion &) = default ;
    DescribeRegionsResponseBodyRegionsRegion& operator=(DescribeRegionsResponseBodyRegionsRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->recommendZones_ == nullptr && return this->regionEndpoint_ == nullptr && return this->regionId_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // recommendZones Field Functions 
    bool hasRecommendZones() const { return this->recommendZones_ != nullptr;};
    void deleteRecommendZones() { this->recommendZones_ = nullptr;};
    inline const Models::DescribeRegionsResponseBodyRegionsRegionRecommendZones & recommendZones() const { DARABONBA_PTR_GET_CONST(recommendZones_, Models::DescribeRegionsResponseBodyRegionsRegionRecommendZones) };
    inline Models::DescribeRegionsResponseBodyRegionsRegionRecommendZones recommendZones() { DARABONBA_PTR_GET(recommendZones_, Models::DescribeRegionsResponseBodyRegionsRegionRecommendZones) };
    inline DescribeRegionsResponseBodyRegionsRegion& setRecommendZones(const Models::DescribeRegionsResponseBodyRegionsRegionRecommendZones & recommendZones) { DARABONBA_PTR_SET_VALUE(recommendZones_, recommendZones) };
    inline DescribeRegionsResponseBodyRegionsRegion& setRecommendZones(Models::DescribeRegionsResponseBodyRegionsRegionRecommendZones && recommendZones) { DARABONBA_PTR_SET_RVALUE(recommendZones_, recommendZones) };


    // regionEndpoint Field Functions 
    bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
    void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
    inline string regionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyRegionsRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region name. Valid values:
    // 
    // *   **China (Hangzhou)**
    // *   **China (Shanghai)**
    // *   **China (Beijing)**
    // *   **China (Zhangjiakou)**
    // *   **China (Shenzhen)**
    // *   **China (Guangzhou)**
    // *   **China (Hong Kong)**
    // *   **Singapore**
    // *   **US (Silicon Valley)**
    std::shared_ptr<string> localName_ = nullptr;
    // The recommended zones.
    std::shared_ptr<Models::DescribeRegionsResponseBodyRegionsRegionRecommendZones> recommendZones_ = nullptr;
    // The endpoint for the region. Valid values:
    // 
    // *   **sae.cn-hangzhou.aliyuncs.com**
    // *   **sae.cn-shanghai.aliyuncs.com**
    // *   **sae.cn-beijing.aliyuncs.com**
    // *   **sae.cn-zhangjiakou.aliyuncs.com**
    // *   **sae.cn-shenzhen.aliyuncs.com**
    // *   **sae.cn-guangzhou.aliyuncs.com**
    // *   **sae.cn-hongkong.aliyuncs.com**
    // *   **sae.ap-southeast-1.aliyuncs.com**
    // *   **sae.us-west-1.aliyuncs.com**
    std::shared_ptr<string> regionEndpoint_ = nullptr;
    // The region ID. Valid values:
    // 
    // *   **cn-hangzhou**: the ID of the China (Hangzhou) region
    // *   **cn-shanghai**: the ID of the China (Shanghai) region
    // *   **cn-beijing**: the ID of the China (Beijing) region
    // *   **cn-zhangjiakou**: the ID of the China (Zhangjiakou) region
    // *   **cn-shenzhen**: the ID of the China (Shenzhen) region
    // *   **cn-guangzhou**: the ID of the China (Guangzhou) region
    // *   **cn-hongkong**: the ID of the China (Hong Kong) region
    // *   **ap-southeast-1**: the ID of the Singapore region
    // *   **us-west-1**: the ID of the US (Silicon Valley) region
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
