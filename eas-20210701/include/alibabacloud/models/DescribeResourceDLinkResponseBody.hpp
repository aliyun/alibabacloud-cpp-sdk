// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEDLINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEDLINKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeResourceDLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceDLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuxVSwitchList, auxVSwitchList_);
      DARABONBA_PTR_TO_JSON(DestinationCIDRs, destinationCIDRs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceDLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuxVSwitchList, auxVSwitchList_);
      DARABONBA_PTR_FROM_JSON(DestinationCIDRs, destinationCIDRs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeResourceDLinkResponseBody() = default ;
    DescribeResourceDLinkResponseBody(const DescribeResourceDLinkResponseBody &) = default ;
    DescribeResourceDLinkResponseBody(DescribeResourceDLinkResponseBody &&) = default ;
    DescribeResourceDLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceDLinkResponseBody() = default ;
    DescribeResourceDLinkResponseBody& operator=(const DescribeResourceDLinkResponseBody &) = default ;
    DescribeResourceDLinkResponseBody& operator=(DescribeResourceDLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auxVSwitchList_ == nullptr
        && this->destinationCIDRs_ == nullptr && this->requestId_ == nullptr && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // auxVSwitchList Field Functions 
    bool hasAuxVSwitchList() const { return this->auxVSwitchList_ != nullptr;};
    void deleteAuxVSwitchList() { this->auxVSwitchList_ = nullptr;};
    inline const vector<string> & getAuxVSwitchList() const { DARABONBA_PTR_GET_CONST(auxVSwitchList_, vector<string>) };
    inline vector<string> getAuxVSwitchList() { DARABONBA_PTR_GET(auxVSwitchList_, vector<string>) };
    inline DescribeResourceDLinkResponseBody& setAuxVSwitchList(const vector<string> & auxVSwitchList) { DARABONBA_PTR_SET_VALUE(auxVSwitchList_, auxVSwitchList) };
    inline DescribeResourceDLinkResponseBody& setAuxVSwitchList(vector<string> && auxVSwitchList) { DARABONBA_PTR_SET_RVALUE(auxVSwitchList_, auxVSwitchList) };


    // destinationCIDRs Field Functions 
    bool hasDestinationCIDRs() const { return this->destinationCIDRs_ != nullptr;};
    void deleteDestinationCIDRs() { this->destinationCIDRs_ = nullptr;};
    inline string getDestinationCIDRs() const { DARABONBA_PTR_GET_DEFAULT(destinationCIDRs_, "") };
    inline DescribeResourceDLinkResponseBody& setDestinationCIDRs(string destinationCIDRs) { DARABONBA_PTR_SET_VALUE(destinationCIDRs_, destinationCIDRs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceDLinkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeResourceDLinkResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeResourceDLinkResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeResourceDLinkResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The IDs of the secondary vSwitches that are directly connected.
    shared_ptr<vector<string>> auxVSwitchList_ {};
    // The CIDR blocks of the clients that you want to connect to. After this parameter is specified, the CIDR blocks are added to the back-to-origin route of the server. Either this parameter or the VSwitchIdList parameter can be used to determine CIDR blocks.
    shared_ptr<string> destinationCIDRs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the security group that is directly connected.
    shared_ptr<string> securityGroupId_ {};
    // The ID of the primary vSwitch that is directly connected.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC that is directly connected.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
