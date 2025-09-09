// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHNETWORKRESPONSEBODYVPCINFOSVPCINFOVSWITCHINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHNETWORKRESPONSEBODYVPCINFOSVPCINFOVSWITCHINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos& obj) { 
      DARABONBA_PTR_TO_JSON(VswitchInfo, vswitchInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(VswitchInfo, vswitchInfo_);
    };
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos() = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos(const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos &) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos(DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos &&) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos() = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos& operator=(const DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos &) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos& operator=(DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vswitchInfo_ != nullptr; };
    // vswitchInfo Field Functions 
    bool hasVswitchInfo() const { return this->vswitchInfo_ != nullptr;};
    void deleteVswitchInfo() { this->vswitchInfo_ = nullptr;};
    inline const vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo> & vswitchInfo() const { DARABONBA_PTR_GET_CONST(vswitchInfo_, vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo>) };
    inline vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo> vswitchInfo() { DARABONBA_PTR_GET(vswitchInfo_, vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo>) };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos& setVswitchInfo(const vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo> & vswitchInfo) { DARABONBA_PTR_SET_VALUE(vswitchInfo_, vswitchInfo) };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfos& setVswitchInfo(vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo> && vswitchInfo) { DARABONBA_PTR_SET_RVALUE(vswitchInfo_, vswitchInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfoVswitchInfosVswitchInfo>> vswitchInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
