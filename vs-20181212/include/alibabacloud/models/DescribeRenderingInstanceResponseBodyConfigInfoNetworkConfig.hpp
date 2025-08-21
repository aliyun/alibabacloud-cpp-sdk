// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYCONFIGINFONETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODYCONFIGINFONETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthStatus, bandwidthStatus_);
      DARABONBA_PTR_TO_JSON(MaxEgressBandwidth, maxEgressBandwidth_);
      DARABONBA_PTR_TO_JSON(MaxIngressBandwidth, maxIngressBandwidth_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthStatus, bandwidthStatus_);
      DARABONBA_PTR_FROM_JSON(MaxEgressBandwidth, maxEgressBandwidth_);
      DARABONBA_PTR_FROM_JSON(MaxIngressBandwidth, maxIngressBandwidth_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig() = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig(const DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig &) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig(DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig &&) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig() = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig& operator=(const DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig &) = default ;
    DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig& operator=(DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthStatus_ != nullptr
        && this->maxEgressBandwidth_ != nullptr && this->maxIngressBandwidth_ != nullptr && this->updateTime_ != nullptr; };
    // bandwidthStatus Field Functions 
    bool hasBandwidthStatus() const { return this->bandwidthStatus_ != nullptr;};
    void deleteBandwidthStatus() { this->bandwidthStatus_ = nullptr;};
    inline string bandwidthStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthStatus_, "") };
    inline DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig& setBandwidthStatus(string bandwidthStatus) { DARABONBA_PTR_SET_VALUE(bandwidthStatus_, bandwidthStatus) };


    // maxEgressBandwidth Field Functions 
    bool hasMaxEgressBandwidth() const { return this->maxEgressBandwidth_ != nullptr;};
    void deleteMaxEgressBandwidth() { this->maxEgressBandwidth_ = nullptr;};
    inline int32_t maxEgressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxEgressBandwidth_, 0) };
    inline DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig& setMaxEgressBandwidth(int32_t maxEgressBandwidth) { DARABONBA_PTR_SET_VALUE(maxEgressBandwidth_, maxEgressBandwidth) };


    // maxIngressBandwidth Field Functions 
    bool hasMaxIngressBandwidth() const { return this->maxIngressBandwidth_ != nullptr;};
    void deleteMaxIngressBandwidth() { this->maxIngressBandwidth_ = nullptr;};
    inline int32_t maxIngressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxIngressBandwidth_, 0) };
    inline DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig& setMaxIngressBandwidth(int32_t maxIngressBandwidth) { DARABONBA_PTR_SET_VALUE(maxIngressBandwidth_, maxIngressBandwidth) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeRenderingInstanceResponseBodyConfigInfoNetworkConfig& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> bandwidthStatus_ = nullptr;
    std::shared_ptr<int32_t> maxEgressBandwidth_ = nullptr;
    std::shared_ptr<int32_t> maxIngressBandwidth_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
