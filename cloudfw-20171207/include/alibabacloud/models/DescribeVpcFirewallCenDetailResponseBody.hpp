// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcFirewallCenDetailResponseBodyFirewallVpc.hpp>
#include <alibabacloud/models/DescribeVpcFirewallCenDetailResponseBodyLocalVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(FirewallVpc, firewallVpc_);
      DARABONBA_PTR_TO_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(FirewallVpc, firewallVpc_);
      DARABONBA_PTR_FROM_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    DescribeVpcFirewallCenDetailResponseBody() = default ;
    DescribeVpcFirewallCenDetailResponseBody(const DescribeVpcFirewallCenDetailResponseBody &) = default ;
    DescribeVpcFirewallCenDetailResponseBody(DescribeVpcFirewallCenDetailResponseBody &&) = default ;
    DescribeVpcFirewallCenDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenDetailResponseBody() = default ;
    DescribeVpcFirewallCenDetailResponseBody& operator=(const DescribeVpcFirewallCenDetailResponseBody &) = default ;
    DescribeVpcFirewallCenDetailResponseBody& operator=(DescribeVpcFirewallCenDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectType_ == nullptr
        && return this->firewallSwitchStatus_ == nullptr && return this->firewallVpc_ == nullptr && return this->localVpc_ == nullptr && return this->requestId_ == nullptr && return this->vpcFirewallId_ == nullptr
        && return this->vpcFirewallName_ == nullptr; };
    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string connectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string firewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // firewallVpc Field Functions 
    bool hasFirewallVpc() const { return this->firewallVpc_ != nullptr;};
    void deleteFirewallVpc() { this->firewallVpc_ = nullptr;};
    inline const DescribeVpcFirewallCenDetailResponseBodyFirewallVpc & firewallVpc() const { DARABONBA_PTR_GET_CONST(firewallVpc_, DescribeVpcFirewallCenDetailResponseBodyFirewallVpc) };
    inline DescribeVpcFirewallCenDetailResponseBodyFirewallVpc firewallVpc() { DARABONBA_PTR_GET(firewallVpc_, DescribeVpcFirewallCenDetailResponseBodyFirewallVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody& setFirewallVpc(const DescribeVpcFirewallCenDetailResponseBodyFirewallVpc & firewallVpc) { DARABONBA_PTR_SET_VALUE(firewallVpc_, firewallVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody& setFirewallVpc(DescribeVpcFirewallCenDetailResponseBodyFirewallVpc && firewallVpc) { DARABONBA_PTR_SET_RVALUE(firewallVpc_, firewallVpc) };


    // localVpc Field Functions 
    bool hasLocalVpc() const { return this->localVpc_ != nullptr;};
    void deleteLocalVpc() { this->localVpc_ = nullptr;};
    inline const DescribeVpcFirewallCenDetailResponseBodyLocalVpc & localVpc() const { DARABONBA_PTR_GET_CONST(localVpc_, DescribeVpcFirewallCenDetailResponseBodyLocalVpc) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc localVpc() { DARABONBA_PTR_GET(localVpc_, DescribeVpcFirewallCenDetailResponseBodyLocalVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody& setLocalVpc(const DescribeVpcFirewallCenDetailResponseBodyLocalVpc & localVpc) { DARABONBA_PTR_SET_VALUE(localVpc_, localVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody& setLocalVpc(DescribeVpcFirewallCenDetailResponseBodyLocalVpc && localVpc) { DARABONBA_PTR_SET_RVALUE(localVpc_, localVpc) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string vpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // The connection type of the VPC firewall. The value is fixed as **cen**, which indicates CEN instances.
    std::shared_ptr<string> connectType_ = nullptr;
    // The status of the VPC firewall. Valid values:
    // 
    // *   **opened**: enabled
    // *   **closed**: disabled
    // *   **notconfigured**: not configured
    std::shared_ptr<string> firewallSwitchStatus_ = nullptr;
    // The firewall VPC.
    std::shared_ptr<DescribeVpcFirewallCenDetailResponseBodyFirewallVpc> firewallVpc_ = nullptr;
    // The details about the VPC.
    std::shared_ptr<DescribeVpcFirewallCenDetailResponseBodyLocalVpc> localVpc_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    // The instance name of the VPC firewall.
    std::shared_ptr<string> vpcFirewallName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
