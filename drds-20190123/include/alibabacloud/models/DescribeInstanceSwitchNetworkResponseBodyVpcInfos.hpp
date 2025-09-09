// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHNETWORKRESPONSEBODYVPCINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESWITCHNETWORKRESPONSEBODYVPCINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceSwitchNetworkResponseBodyVpcInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSwitchNetworkResponseBodyVpcInfos& obj) { 
      DARABONBA_PTR_TO_JSON(VpcInfo, vpcInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSwitchNetworkResponseBodyVpcInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcInfo, vpcInfo_);
    };
    DescribeInstanceSwitchNetworkResponseBodyVpcInfos() = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfos(const DescribeInstanceSwitchNetworkResponseBodyVpcInfos &) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfos(DescribeInstanceSwitchNetworkResponseBodyVpcInfos &&) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSwitchNetworkResponseBodyVpcInfos() = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfos& operator=(const DescribeInstanceSwitchNetworkResponseBodyVpcInfos &) = default ;
    DescribeInstanceSwitchNetworkResponseBodyVpcInfos& operator=(DescribeInstanceSwitchNetworkResponseBodyVpcInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vpcInfo_ != nullptr; };
    // vpcInfo Field Functions 
    bool hasVpcInfo() const { return this->vpcInfo_ != nullptr;};
    void deleteVpcInfo() { this->vpcInfo_ = nullptr;};
    inline const vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo> & vpcInfo() const { DARABONBA_PTR_GET_CONST(vpcInfo_, vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo>) };
    inline vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo> vpcInfo() { DARABONBA_PTR_GET(vpcInfo_, vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo>) };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfos& setVpcInfo(const vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo> & vpcInfo) { DARABONBA_PTR_SET_VALUE(vpcInfo_, vpcInfo) };
    inline DescribeInstanceSwitchNetworkResponseBodyVpcInfos& setVpcInfo(vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo> && vpcInfo) { DARABONBA_PTR_SET_RVALUE(vpcInfo_, vpcInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceSwitchNetworkResponseBodyVpcInfosVpcInfo>> vpcInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
