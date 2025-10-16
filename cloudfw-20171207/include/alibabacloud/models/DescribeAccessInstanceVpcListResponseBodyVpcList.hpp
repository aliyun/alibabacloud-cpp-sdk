// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVPCLISTRESPONSEBODYVPCLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVPCLISTRESPONSEBODYVPCLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceVpcListResponseBodyVpcList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceVpcListResponseBodyVpcList& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallVpc, firewallVpc_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceVpcListResponseBodyVpcList& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallVpc, firewallVpc_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeAccessInstanceVpcListResponseBodyVpcList() = default ;
    DescribeAccessInstanceVpcListResponseBodyVpcList(const DescribeAccessInstanceVpcListResponseBodyVpcList &) = default ;
    DescribeAccessInstanceVpcListResponseBodyVpcList(DescribeAccessInstanceVpcListResponseBodyVpcList &&) = default ;
    DescribeAccessInstanceVpcListResponseBodyVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceVpcListResponseBodyVpcList() = default ;
    DescribeAccessInstanceVpcListResponseBodyVpcList& operator=(const DescribeAccessInstanceVpcListResponseBodyVpcList &) = default ;
    DescribeAccessInstanceVpcListResponseBodyVpcList& operator=(DescribeAccessInstanceVpcListResponseBodyVpcList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallVpc_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // firewallVpc Field Functions 
    bool hasFirewallVpc() const { return this->firewallVpc_ != nullptr;};
    void deleteFirewallVpc() { this->firewallVpc_ = nullptr;};
    inline bool firewallVpc() const { DARABONBA_PTR_GET_DEFAULT(firewallVpc_, false) };
    inline DescribeAccessInstanceVpcListResponseBodyVpcList& setFirewallVpc(bool firewallVpc) { DARABONBA_PTR_SET_VALUE(firewallVpc_, firewallVpc) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeAccessInstanceVpcListResponseBodyVpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeAccessInstanceVpcListResponseBodyVpcList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    std::shared_ptr<bool> firewallVpc_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
