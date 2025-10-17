// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPENETWORKINFOBANDWIDTHWEIGHTINGWEIGHTINGINFOSWEIGHTINGINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPENETWORKINFOBANDWIDTHWEIGHTINGWEIGHTINGINFOSWEIGHTINGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EbsBandwidth, ebsBandwidth_);
      DARABONBA_PTR_TO_JSON(EbsBurstBandwidth, ebsBurstBandwidth_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VpcBandwidth, vpcBandwidth_);
      DARABONBA_PTR_TO_JSON(VpcBurstBandwidth, vpcBurstBandwidth_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EbsBandwidth, ebsBandwidth_);
      DARABONBA_PTR_FROM_JSON(EbsBurstBandwidth, ebsBurstBandwidth_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VpcBandwidth, vpcBandwidth_);
      DARABONBA_PTR_FROM_JSON(VpcBurstBandwidth, vpcBurstBandwidth_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ebsBandwidth_ == nullptr
        && return this->ebsBurstBandwidth_ == nullptr && return this->name_ == nullptr && return this->vpcBandwidth_ == nullptr && return this->vpcBurstBandwidth_ == nullptr; };
    // ebsBandwidth Field Functions 
    bool hasEbsBandwidth() const { return this->ebsBandwidth_ != nullptr;};
    void deleteEbsBandwidth() { this->ebsBandwidth_ = nullptr;};
    inline int64_t ebsBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ebsBandwidth_, 0L) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& setEbsBandwidth(int64_t ebsBandwidth) { DARABONBA_PTR_SET_VALUE(ebsBandwidth_, ebsBandwidth) };


    // ebsBurstBandwidth Field Functions 
    bool hasEbsBurstBandwidth() const { return this->ebsBurstBandwidth_ != nullptr;};
    void deleteEbsBurstBandwidth() { this->ebsBurstBandwidth_ = nullptr;};
    inline int64_t ebsBurstBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ebsBurstBandwidth_, 0L) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& setEbsBurstBandwidth(int64_t ebsBurstBandwidth) { DARABONBA_PTR_SET_VALUE(ebsBurstBandwidth_, ebsBurstBandwidth) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vpcBandwidth Field Functions 
    bool hasVpcBandwidth() const { return this->vpcBandwidth_ != nullptr;};
    void deleteVpcBandwidth() { this->vpcBandwidth_ = nullptr;};
    inline int64_t vpcBandwidth() const { DARABONBA_PTR_GET_DEFAULT(vpcBandwidth_, 0L) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& setVpcBandwidth(int64_t vpcBandwidth) { DARABONBA_PTR_SET_VALUE(vpcBandwidth_, vpcBandwidth) };


    // vpcBurstBandwidth Field Functions 
    bool hasVpcBurstBandwidth() const { return this->vpcBurstBandwidth_ != nullptr;};
    void deleteVpcBurstBandwidth() { this->vpcBurstBandwidth_ = nullptr;};
    inline int64_t vpcBurstBandwidth() const { DARABONBA_PTR_GET_DEFAULT(vpcBurstBandwidth_, 0L) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfoBandwidthWeightingWeightingInfosWeightingInfo& setVpcBurstBandwidth(int64_t vpcBurstBandwidth) { DARABONBA_PTR_SET_VALUE(vpcBurstBandwidth_, vpcBurstBandwidth) };


  protected:
    std::shared_ptr<int64_t> ebsBandwidth_ = nullptr;
    std::shared_ptr<int64_t> ebsBurstBandwidth_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> vpcBandwidth_ = nullptr;
    std::shared_ptr<int64_t> vpcBurstBandwidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
