// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysIpLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGateways& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_TO_JSON(IpLists, ipLists_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(SnatTableIds, snatTableIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGateways& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_FROM_JSON(IpLists, ipLists_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(SnatTableIds, snatTableIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeNatGatewaysResponseBodyNatGateways() = default ;
    DescribeNatGatewaysResponseBodyNatGateways(const DescribeNatGatewaysResponseBodyNatGateways &) = default ;
    DescribeNatGatewaysResponseBodyNatGateways(DescribeNatGatewaysResponseBodyNatGateways &&) = default ;
    DescribeNatGatewaysResponseBodyNatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGateways() = default ;
    DescribeNatGatewaysResponseBodyNatGateways& operator=(const DescribeNatGatewaysResponseBodyNatGateways &) = default ;
    DescribeNatGatewaysResponseBodyNatGateways& operator=(DescribeNatGatewaysResponseBodyNatGateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardTableIds_ == nullptr
        && return this->ipLists_ == nullptr && return this->name_ == nullptr && return this->natGatewayId_ == nullptr && return this->snatTableIds_ == nullptr && return this->status_ == nullptr
        && return this->vpcId_ == nullptr; };
    // forwardTableIds Field Functions 
    bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
    void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
    inline const vector<string> & forwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, vector<string>) };
    inline vector<string> forwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, vector<string>) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setForwardTableIds(const vector<string> & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setForwardTableIds(vector<string> && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


    // ipLists Field Functions 
    bool hasIpLists() const { return this->ipLists_ != nullptr;};
    void deleteIpLists() { this->ipLists_ = nullptr;};
    inline const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists> & ipLists() const { DARABONBA_PTR_GET_CONST(ipLists_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists>) };
    inline vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists> ipLists() { DARABONBA_PTR_GET(ipLists_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists>) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setIpLists(const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists> & ipLists) { DARABONBA_PTR_SET_VALUE(ipLists_, ipLists) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setIpLists(vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists> && ipLists) { DARABONBA_PTR_SET_RVALUE(ipLists_, ipLists) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // snatTableIds Field Functions 
    bool hasSnatTableIds() const { return this->snatTableIds_ != nullptr;};
    void deleteSnatTableIds() { this->snatTableIds_ = nullptr;};
    inline const vector<string> & snatTableIds() const { DARABONBA_PTR_GET_CONST(snatTableIds_, vector<string>) };
    inline vector<string> snatTableIds() { DARABONBA_PTR_GET(snatTableIds_, vector<string>) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setSnatTableIds(const vector<string> & snatTableIds) { DARABONBA_PTR_SET_VALUE(snatTableIds_, snatTableIds) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setSnatTableIds(vector<string> && snatTableIds) { DARABONBA_PTR_SET_RVALUE(snatTableIds_, snatTableIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<vector<string>> forwardTableIds_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists>> ipLists_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<vector<string>> snatTableIds_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
