// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHNETWORKRESPONSEBODYVPCINFOSVPCINFOVSWITCHINFOSVSWITCHINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHNETWORKRESPONSEBODYVPCINFOSVPCINFOVSWITCHINFOSVSWITCHINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AzoneId, azoneId_);
      DARABONBA_PTR_TO_JSON(DrdsSupported, drdsSupported_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(VswitchName, vswitchName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AzoneId, azoneId_);
      DARABONBA_PTR_FROM_JSON(DrdsSupported, drdsSupported_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(VswitchName, vswitchName_);
    };
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo() = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo(const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo &) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo(DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo &&) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo() = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& operator=(const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo &) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& operator=(DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->azoneId_ != nullptr
        && this->drdsSupported_ != nullptr && this->vpcId_ != nullptr && this->vswitchId_ != nullptr && this->vswitchName_ != nullptr; };
    // azoneId Field Functions 
    bool hasAzoneId() const { return this->azoneId_ != nullptr;};
    void deleteAzoneId() { this->azoneId_ = nullptr;};
    inline string azoneId() const { DARABONBA_PTR_GET_DEFAULT(azoneId_, "") };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& setAzoneId(string azoneId) { DARABONBA_PTR_SET_VALUE(azoneId_, azoneId) };


    // drdsSupported Field Functions 
    bool hasDrdsSupported() const { return this->drdsSupported_ != nullptr;};
    void deleteDrdsSupported() { this->drdsSupported_ = nullptr;};
    inline bool drdsSupported() const { DARABONBA_PTR_GET_DEFAULT(drdsSupported_, false) };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& setDrdsSupported(bool drdsSupported) { DARABONBA_PTR_SET_VALUE(drdsSupported_, drdsSupported) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // vswitchName Field Functions 
    bool hasVswitchName() const { return this->vswitchName_ != nullptr;};
    void deleteVswitchName() { this->vswitchName_ = nullptr;};
    inline string vswitchName() const { DARABONBA_PTR_GET_DEFAULT(vswitchName_, "") };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo& setVswitchName(string vswitchName) { DARABONBA_PTR_SET_VALUE(vswitchName_, vswitchName) };


  protected:
    // Indicates the ID of the zone in which the instance is deployed.
    std::shared_ptr<string> azoneId_ = nullptr;
    // Indicates whether you can change the network type of the instance.
    std::shared_ptr<bool> drdsSupported_ = nullptr;
    // Indicates the ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Indicates the ID of the vSwitch.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // Indicates the name of the vSwitch.
    std::shared_ptr<string> vswitchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
