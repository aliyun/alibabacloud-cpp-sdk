// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSecurityProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSecurityProxyResponseBody() = default ;
    DescribeSecurityProxyResponseBody(const DescribeSecurityProxyResponseBody &) = default ;
    DescribeSecurityProxyResponseBody(DescribeSecurityProxyResponseBody &&) = default ;
    DescribeSecurityProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityProxyResponseBody() = default ;
    DescribeSecurityProxyResponseBody& operator=(const DescribeSecurityProxyResponseBody &) = default ;
    DescribeSecurityProxyResponseBody& operator=(DescribeSecurityProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyList& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
        DARABONBA_PTR_TO_JSON(ProxyName, proxyName_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(SnatIpList, snatIpList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, ProxyList& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
        DARABONBA_PTR_FROM_JSON(ProxyName, proxyName_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(SnatIpList, snatIpList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      };
      ProxyList() = default ;
      ProxyList(const ProxyList &) = default ;
      ProxyList(ProxyList &&) = default ;
      ProxyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyList() = default ;
      ProxyList& operator=(const ProxyList &) = default ;
      ProxyList& operator=(ProxyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->detail_ == nullptr && this->memberUid_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr && this->proxyId_ == nullptr
        && this->proxyName_ == nullptr && this->regionNo_ == nullptr && this->snatIpList_ == nullptr && this->status_ == nullptr && this->strictMode_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline ProxyList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline ProxyList& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline ProxyList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline ProxyList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // natGatewayName Field Functions 
      bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
      void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
      inline string getNatGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
      inline ProxyList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


      // proxyId Field Functions 
      bool hasProxyId() const { return this->proxyId_ != nullptr;};
      void deleteProxyId() { this->proxyId_ = nullptr;};
      inline string getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
      inline ProxyList& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


      // proxyName Field Functions 
      bool hasProxyName() const { return this->proxyName_ != nullptr;};
      void deleteProxyName() { this->proxyName_ = nullptr;};
      inline string getProxyName() const { DARABONBA_PTR_GET_DEFAULT(proxyName_, "") };
      inline ProxyList& setProxyName(string proxyName) { DARABONBA_PTR_SET_VALUE(proxyName_, proxyName) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline ProxyList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // snatIpList Field Functions 
      bool hasSnatIpList() const { return this->snatIpList_ != nullptr;};
      void deleteSnatIpList() { this->snatIpList_ = nullptr;};
      inline const vector<string> & getSnatIpList() const { DARABONBA_PTR_GET_CONST(snatIpList_, vector<string>) };
      inline vector<string> getSnatIpList() { DARABONBA_PTR_GET(snatIpList_, vector<string>) };
      inline ProxyList& setSnatIpList(const vector<string> & snatIpList) { DARABONBA_PTR_SET_VALUE(snatIpList_, snatIpList) };
      inline ProxyList& setSnatIpList(vector<string> && snatIpList) { DARABONBA_PTR_SET_RVALUE(snatIpList_, snatIpList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProxyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strictMode Field Functions 
      bool hasStrictMode() const { return this->strictMode_ != nullptr;};
      void deleteStrictMode() { this->strictMode_ = nullptr;};
      inline int32_t getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
      inline ProxyList& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ProxyList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ProxyList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline ProxyList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      shared_ptr<string> cidrBlock_ {};
      shared_ptr<string> detail_ {};
      shared_ptr<string> memberUid_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> natGatewayName_ {};
      shared_ptr<string> proxyId_ {};
      shared_ptr<string> proxyName_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<vector<string>> snatIpList_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> strictMode_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->proxyList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // proxyList Field Functions 
    bool hasProxyList() const { return this->proxyList_ != nullptr;};
    void deleteProxyList() { this->proxyList_ = nullptr;};
    inline const vector<DescribeSecurityProxyResponseBody::ProxyList> & getProxyList() const { DARABONBA_PTR_GET_CONST(proxyList_, vector<DescribeSecurityProxyResponseBody::ProxyList>) };
    inline vector<DescribeSecurityProxyResponseBody::ProxyList> getProxyList() { DARABONBA_PTR_GET(proxyList_, vector<DescribeSecurityProxyResponseBody::ProxyList>) };
    inline DescribeSecurityProxyResponseBody& setProxyList(const vector<DescribeSecurityProxyResponseBody::ProxyList> & proxyList) { DARABONBA_PTR_SET_VALUE(proxyList_, proxyList) };
    inline DescribeSecurityProxyResponseBody& setProxyList(vector<DescribeSecurityProxyResponseBody::ProxyList> && proxyList) { DARABONBA_PTR_SET_RVALUE(proxyList_, proxyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecurityProxyResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeSecurityProxyResponseBody::ProxyList>> proxyList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
