// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHNETWORKRESPONSEBODYVPCINFOSVPCINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHNETWORKRESPONSEBODYVPCINFOSVPCINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      DARABONBA_PTR_TO_JSON(VswitchInfos, vswitchInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      DARABONBA_PTR_FROM_JSON(VswitchInfos, vswitchInfos_);
    };
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo() = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo(const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo &) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo(DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo &&) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo() = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& operator=(const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo &) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& operator=(DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->vpcId_ != nullptr && this->vpcName_ != nullptr && this->vswitchInfos_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    // vswitchInfos Field Functions 
    bool hasVswitchInfos() const { return this->vswitchInfos_ != nullptr;};
    void deleteVswitchInfos() { this->vswitchInfos_ = nullptr;};
    inline const Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos & vswitchInfos() const { DARABONBA_PTR_GET_CONST(vswitchInfos_, Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos) };
    inline Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos vswitchInfos() { DARABONBA_PTR_GET(vswitchInfos_, Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos) };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& setVswitchInfos(const Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos & vswitchInfos) { DARABONBA_PTR_SET_VALUE(vswitchInfos_, vswitchInfos) };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo& setVswitchInfos(Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos && vswitchInfos) { DARABONBA_PTR_SET_RVALUE(vswitchInfos_, vswitchInfos) };


  protected:
    // Indicates the ID of the region in which the instance is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates the ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Indicates the name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
    // Indicates information about the vSwitch to which the instance is connected.
    std::shared_ptr<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos> vswitchInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
