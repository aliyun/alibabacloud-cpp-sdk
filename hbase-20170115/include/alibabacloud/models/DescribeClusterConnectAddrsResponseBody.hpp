// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodyServiceConnAddrs.hpp>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodySlbConnAddrs.hpp>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodyThriftConn.hpp>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo.hpp>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodyZkConnAddrs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterConnectAddrsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectAddrsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(IsMultimod, isMultimod_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceConnAddrs, serviceConnAddrs_);
      DARABONBA_PTR_TO_JSON(SlbConnAddrs, slbConnAddrs_);
      DARABONBA_PTR_TO_JSON(ThriftConn, thriftConn_);
      DARABONBA_PTR_TO_JSON(UiProxyConnAddrInfo, uiProxyConnAddrInfo_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZkConnAddrs, zkConnAddrs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectAddrsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(IsMultimod, isMultimod_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceConnAddrs, serviceConnAddrs_);
      DARABONBA_PTR_FROM_JSON(SlbConnAddrs, slbConnAddrs_);
      DARABONBA_PTR_FROM_JSON(ThriftConn, thriftConn_);
      DARABONBA_PTR_FROM_JSON(UiProxyConnAddrInfo, uiProxyConnAddrInfo_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZkConnAddrs, zkConnAddrs_);
    };
    DescribeClusterConnectAddrsResponseBody() = default ;
    DescribeClusterConnectAddrsResponseBody(const DescribeClusterConnectAddrsResponseBody &) = default ;
    DescribeClusterConnectAddrsResponseBody(DescribeClusterConnectAddrsResponseBody &&) = default ;
    DescribeClusterConnectAddrsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectAddrsResponseBody() = default ;
    DescribeClusterConnectAddrsResponseBody& operator=(const DescribeClusterConnectAddrsResponseBody &) = default ;
    DescribeClusterConnectAddrsResponseBody& operator=(DescribeClusterConnectAddrsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbType_ == nullptr
        && return this->isMultimod_ == nullptr && return this->netType_ == nullptr && return this->requestId_ == nullptr && return this->serviceConnAddrs_ == nullptr && return this->slbConnAddrs_ == nullptr
        && return this->thriftConn_ == nullptr && return this->uiProxyConnAddrInfo_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zkConnAddrs_ == nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeClusterConnectAddrsResponseBody& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // isMultimod Field Functions 
    bool hasIsMultimod() const { return this->isMultimod_ != nullptr;};
    void deleteIsMultimod() { this->isMultimod_ = nullptr;};
    inline string isMultimod() const { DARABONBA_PTR_GET_DEFAULT(isMultimod_, "") };
    inline DescribeClusterConnectAddrsResponseBody& setIsMultimod(string isMultimod) { DARABONBA_PTR_SET_VALUE(isMultimod_, isMultimod) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeClusterConnectAddrsResponseBody& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterConnectAddrsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceConnAddrs Field Functions 
    bool hasServiceConnAddrs() const { return this->serviceConnAddrs_ != nullptr;};
    void deleteServiceConnAddrs() { this->serviceConnAddrs_ = nullptr;};
    inline const DescribeClusterConnectAddrsResponseBodyServiceConnAddrs & serviceConnAddrs() const { DARABONBA_PTR_GET_CONST(serviceConnAddrs_, DescribeClusterConnectAddrsResponseBodyServiceConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBodyServiceConnAddrs serviceConnAddrs() { DARABONBA_PTR_GET(serviceConnAddrs_, DescribeClusterConnectAddrsResponseBodyServiceConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBody& setServiceConnAddrs(const DescribeClusterConnectAddrsResponseBodyServiceConnAddrs & serviceConnAddrs) { DARABONBA_PTR_SET_VALUE(serviceConnAddrs_, serviceConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBody& setServiceConnAddrs(DescribeClusterConnectAddrsResponseBodyServiceConnAddrs && serviceConnAddrs) { DARABONBA_PTR_SET_RVALUE(serviceConnAddrs_, serviceConnAddrs) };


    // slbConnAddrs Field Functions 
    bool hasSlbConnAddrs() const { return this->slbConnAddrs_ != nullptr;};
    void deleteSlbConnAddrs() { this->slbConnAddrs_ = nullptr;};
    inline const DescribeClusterConnectAddrsResponseBodySlbConnAddrs & slbConnAddrs() const { DARABONBA_PTR_GET_CONST(slbConnAddrs_, DescribeClusterConnectAddrsResponseBodySlbConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBodySlbConnAddrs slbConnAddrs() { DARABONBA_PTR_GET(slbConnAddrs_, DescribeClusterConnectAddrsResponseBodySlbConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBody& setSlbConnAddrs(const DescribeClusterConnectAddrsResponseBodySlbConnAddrs & slbConnAddrs) { DARABONBA_PTR_SET_VALUE(slbConnAddrs_, slbConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBody& setSlbConnAddrs(DescribeClusterConnectAddrsResponseBodySlbConnAddrs && slbConnAddrs) { DARABONBA_PTR_SET_RVALUE(slbConnAddrs_, slbConnAddrs) };


    // thriftConn Field Functions 
    bool hasThriftConn() const { return this->thriftConn_ != nullptr;};
    void deleteThriftConn() { this->thriftConn_ = nullptr;};
    inline const DescribeClusterConnectAddrsResponseBodyThriftConn & thriftConn() const { DARABONBA_PTR_GET_CONST(thriftConn_, DescribeClusterConnectAddrsResponseBodyThriftConn) };
    inline DescribeClusterConnectAddrsResponseBodyThriftConn thriftConn() { DARABONBA_PTR_GET(thriftConn_, DescribeClusterConnectAddrsResponseBodyThriftConn) };
    inline DescribeClusterConnectAddrsResponseBody& setThriftConn(const DescribeClusterConnectAddrsResponseBodyThriftConn & thriftConn) { DARABONBA_PTR_SET_VALUE(thriftConn_, thriftConn) };
    inline DescribeClusterConnectAddrsResponseBody& setThriftConn(DescribeClusterConnectAddrsResponseBodyThriftConn && thriftConn) { DARABONBA_PTR_SET_RVALUE(thriftConn_, thriftConn) };


    // uiProxyConnAddrInfo Field Functions 
    bool hasUiProxyConnAddrInfo() const { return this->uiProxyConnAddrInfo_ != nullptr;};
    void deleteUiProxyConnAddrInfo() { this->uiProxyConnAddrInfo_ = nullptr;};
    inline const DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo & uiProxyConnAddrInfo() const { DARABONBA_PTR_GET_CONST(uiProxyConnAddrInfo_, DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo) };
    inline DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo uiProxyConnAddrInfo() { DARABONBA_PTR_GET(uiProxyConnAddrInfo_, DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo) };
    inline DescribeClusterConnectAddrsResponseBody& setUiProxyConnAddrInfo(const DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo & uiProxyConnAddrInfo) { DARABONBA_PTR_SET_VALUE(uiProxyConnAddrInfo_, uiProxyConnAddrInfo) };
    inline DescribeClusterConnectAddrsResponseBody& setUiProxyConnAddrInfo(DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo && uiProxyConnAddrInfo) { DARABONBA_PTR_SET_RVALUE(uiProxyConnAddrInfo_, uiProxyConnAddrInfo) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeClusterConnectAddrsResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClusterConnectAddrsResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zkConnAddrs Field Functions 
    bool hasZkConnAddrs() const { return this->zkConnAddrs_ != nullptr;};
    void deleteZkConnAddrs() { this->zkConnAddrs_ = nullptr;};
    inline const DescribeClusterConnectAddrsResponseBodyZkConnAddrs & zkConnAddrs() const { DARABONBA_PTR_GET_CONST(zkConnAddrs_, DescribeClusterConnectAddrsResponseBodyZkConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBodyZkConnAddrs zkConnAddrs() { DARABONBA_PTR_GET(zkConnAddrs_, DescribeClusterConnectAddrsResponseBodyZkConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBody& setZkConnAddrs(const DescribeClusterConnectAddrsResponseBodyZkConnAddrs & zkConnAddrs) { DARABONBA_PTR_SET_VALUE(zkConnAddrs_, zkConnAddrs) };
    inline DescribeClusterConnectAddrsResponseBody& setZkConnAddrs(DescribeClusterConnectAddrsResponseBodyZkConnAddrs && zkConnAddrs) { DARABONBA_PTR_SET_RVALUE(zkConnAddrs_, zkConnAddrs) };


  protected:
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<string> isMultimod_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeClusterConnectAddrsResponseBodyServiceConnAddrs> serviceConnAddrs_ = nullptr;
    std::shared_ptr<DescribeClusterConnectAddrsResponseBodySlbConnAddrs> slbConnAddrs_ = nullptr;
    std::shared_ptr<DescribeClusterConnectAddrsResponseBodyThriftConn> thriftConn_ = nullptr;
    std::shared_ptr<DescribeClusterConnectAddrsResponseBodyUiProxyConnAddrInfo> uiProxyConnAddrInfo_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<DescribeClusterConnectAddrsResponseBodyZkConnAddrs> zkConnAddrs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
