// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGATEWAYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGATEWAYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGatewayAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(GwDescription, gwDescription_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningVersion, runningVersion_);
      DARABONBA_PTR_TO_JSON(SecurityIPArrays, securityIPArrays_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(GwDescription, gwDescription_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningVersion, runningVersion_);
      DARABONBA_PTR_FROM_JSON(SecurityIPArrays, securityIPArrays_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeGatewayAttributeResponseBody() = default ;
    DescribeGatewayAttributeResponseBody(const DescribeGatewayAttributeResponseBody &) = default ;
    DescribeGatewayAttributeResponseBody(DescribeGatewayAttributeResponseBody &&) = default ;
    DescribeGatewayAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGatewayAttributeResponseBody() = default ;
    DescribeGatewayAttributeResponseBody& operator=(const DescribeGatewayAttributeResponseBody &) = default ;
    DescribeGatewayAttributeResponseBody& operator=(DescribeGatewayAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityIPArrays : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityIPArrays& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityIPArrayName, securityIPArrayName_);
        DARABONBA_PTR_TO_JSON(SecurityIPArrayTag, securityIPArrayTag_);
        DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityIPArrays& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityIPArrayName, securityIPArrayName_);
        DARABONBA_PTR_FROM_JSON(SecurityIPArrayTag, securityIPArrayTag_);
        DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      };
      SecurityIPArrays() = default ;
      SecurityIPArrays(const SecurityIPArrays &) = default ;
      SecurityIPArrays(SecurityIPArrays &&) = default ;
      SecurityIPArrays(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityIPArrays() = default ;
      SecurityIPArrays& operator=(const SecurityIPArrays &) = default ;
      SecurityIPArrays& operator=(SecurityIPArrays &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityIPArrayName_ == nullptr
        && this->securityIPArrayTag_ == nullptr && this->securityIPList_ == nullptr; };
      // securityIPArrayName Field Functions 
      bool hasSecurityIPArrayName() const { return this->securityIPArrayName_ != nullptr;};
      void deleteSecurityIPArrayName() { this->securityIPArrayName_ = nullptr;};
      inline string getSecurityIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayName_, "") };
      inline SecurityIPArrays& setSecurityIPArrayName(string securityIPArrayName) { DARABONBA_PTR_SET_VALUE(securityIPArrayName_, securityIPArrayName) };


      // securityIPArrayTag Field Functions 
      bool hasSecurityIPArrayTag() const { return this->securityIPArrayTag_ != nullptr;};
      void deleteSecurityIPArrayTag() { this->securityIPArrayTag_ = nullptr;};
      inline string getSecurityIPArrayTag() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayTag_, "") };
      inline SecurityIPArrays& setSecurityIPArrayTag(string securityIPArrayTag) { DARABONBA_PTR_SET_VALUE(securityIPArrayTag_, securityIPArrayTag) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline SecurityIPArrays& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    protected:
      // The name of the IP whitelist. The default value is `default`.
      shared_ptr<string> securityIPArrayName_ {};
      // The tag of the IP whitelist.
      shared_ptr<string> securityIPArrayTag_ {};
      // A comma-separated list of IP addresses in the IP whitelist.
      shared_ptr<string> securityIPList_ {};
    };

    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->endpointId_ == nullptr && this->gwClusterId_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr && this->tunnelId_ == nullptr
        && this->vpcId_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Endpoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Endpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // gwClusterId Field Functions 
      bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
      void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
      inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
      inline Endpoints& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline Endpoints& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Endpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // tunnelId Field Functions 
      bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
      void deleteTunnelId() { this->tunnelId_ = nullptr;};
      inline string getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
      inline Endpoints& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Endpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The endpoint address.
      shared_ptr<string> address_ {};
      // The ID of the endpoint.
      shared_ptr<string> endpointId_ {};
      // The ID of the gateway instance.
      shared_ptr<string> gwClusterId_ {};
      // The network type of the endpoint. Valid values:
      // 
      // - **Private**: VPC endpoint.
      // 
      // - **Public**: public endpoint.
      shared_ptr<string> netType_ {};
      // The port number.
      shared_ptr<string> port_ {};
      // The tunnel ID.
      shared_ptr<string> tunnelId_ {};
      // The ID of the VPC to which the endpoint belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->classCode_ == nullptr
        && this->createTime_ == nullptr && this->currentVersion_ == nullptr && this->dbType_ == nullptr && this->endpoints_ == nullptr && this->expireTime_ == nullptr
        && this->expired_ == nullptr && this->gwClusterId_ == nullptr && this->gwDescription_ == nullptr && this->latestVersion_ == nullptr && this->modifyTime_ == nullptr
        && this->payType_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->runningVersion_ == nullptr && this->securityIPArrays_ == nullptr
        && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeGatewayAttributeResponseBody& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGatewayAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeGatewayAttributeResponseBody& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeGatewayAttributeResponseBody& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<DescribeGatewayAttributeResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<DescribeGatewayAttributeResponseBody::Endpoints>) };
    inline vector<DescribeGatewayAttributeResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<DescribeGatewayAttributeResponseBody::Endpoints>) };
    inline DescribeGatewayAttributeResponseBody& setEndpoints(const vector<DescribeGatewayAttributeResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeGatewayAttributeResponseBody& setEndpoints(vector<DescribeGatewayAttributeResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeGatewayAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline DescribeGatewayAttributeResponseBody& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline DescribeGatewayAttributeResponseBody& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // gwDescription Field Functions 
    bool hasGwDescription() const { return this->gwDescription_ != nullptr;};
    void deleteGwDescription() { this->gwDescription_ = nullptr;};
    inline string getGwDescription() const { DARABONBA_PTR_GET_DEFAULT(gwDescription_, "") };
    inline DescribeGatewayAttributeResponseBody& setGwDescription(string gwDescription) { DARABONBA_PTR_SET_VALUE(gwDescription_, gwDescription) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline DescribeGatewayAttributeResponseBody& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeGatewayAttributeResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeGatewayAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGatewayAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGatewayAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningVersion Field Functions 
    bool hasRunningVersion() const { return this->runningVersion_ != nullptr;};
    void deleteRunningVersion() { this->runningVersion_ = nullptr;};
    inline string getRunningVersion() const { DARABONBA_PTR_GET_DEFAULT(runningVersion_, "") };
    inline DescribeGatewayAttributeResponseBody& setRunningVersion(string runningVersion) { DARABONBA_PTR_SET_VALUE(runningVersion_, runningVersion) };


    // securityIPArrays Field Functions 
    bool hasSecurityIPArrays() const { return this->securityIPArrays_ != nullptr;};
    void deleteSecurityIPArrays() { this->securityIPArrays_ = nullptr;};
    inline const vector<DescribeGatewayAttributeResponseBody::SecurityIPArrays> & getSecurityIPArrays() const { DARABONBA_PTR_GET_CONST(securityIPArrays_, vector<DescribeGatewayAttributeResponseBody::SecurityIPArrays>) };
    inline vector<DescribeGatewayAttributeResponseBody::SecurityIPArrays> getSecurityIPArrays() { DARABONBA_PTR_GET(securityIPArrays_, vector<DescribeGatewayAttributeResponseBody::SecurityIPArrays>) };
    inline DescribeGatewayAttributeResponseBody& setSecurityIPArrays(const vector<DescribeGatewayAttributeResponseBody::SecurityIPArrays> & securityIPArrays) { DARABONBA_PTR_SET_VALUE(securityIPArrays_, securityIPArrays) };
    inline DescribeGatewayAttributeResponseBody& setSecurityIPArrays(vector<DescribeGatewayAttributeResponseBody::SecurityIPArrays> && securityIPArrays) { DARABONBA_PTR_SET_RVALUE(securityIPArrays_, securityIPArrays) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGatewayAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeGatewayAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeGatewayAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The specification code for the gateway instance.
    shared_ptr<string> classCode_ {};
    // The time when the gateway instance was created.
    shared_ptr<string> createTime_ {};
    shared_ptr<string> currentVersion_ {};
    // The database type.
    shared_ptr<string> dbType_ {};
    // A list of endpoints for the gateway instance.
    shared_ptr<vector<DescribeGatewayAttributeResponseBody::Endpoints>> endpoints_ {};
    // The time when the subscription for the gateway instance expires.
    // 
    // This parameter is empty for pay-as-you-go instances.
    shared_ptr<string> expireTime_ {};
    // Indicates whether the subscription for the gateway instance has expired. Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<bool> expired_ {};
    // The ID of the gateway instance.
    shared_ptr<string> gwClusterId_ {};
    // The description of the gateway instance.
    shared_ptr<string> gwDescription_ {};
    shared_ptr<string> latestVersion_ {};
    // The time when the gateway instance was last modified.
    shared_ptr<string> modifyTime_ {};
    // The billing method of the gateway instance. Valid values:
    // 
    // - **Postpaid**: pay-as-you-go.
    // 
    // - **Prepaid**: subscription.
    shared_ptr<string> payType_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> runningVersion_ {};
    // A list of IP whitelists for the gateway instance.
    shared_ptr<vector<DescribeGatewayAttributeResponseBody::SecurityIPArrays>> securityIPArrays_ {};
    // The status of the gateway instance. Valid values:
    // 
    // - **CREATE**: The gateway instance is being created.
    // 
    // - **ACTIVATION**: The gateway instance is running.
    shared_ptr<string> status_ {};
    // The ID of the VSwitch where the gateway instance is deployed.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC where the gateway instance is deployed.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
