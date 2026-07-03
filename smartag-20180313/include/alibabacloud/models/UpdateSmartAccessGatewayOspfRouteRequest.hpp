// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYOSPFROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYOSPFROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpdateSmartAccessGatewayOspfRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmartAccessGatewayOspfRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_TO_JSON(DeadTime, deadTime_);
      DARABONBA_PTR_TO_JSON(HelloTime, helloTime_);
      DARABONBA_PTR_TO_JSON(InterfaceName, interfaceName_);
      DARABONBA_PTR_TO_JSON(Md5Key, md5Key_);
      DARABONBA_PTR_TO_JSON(Md5KeyId, md5KeyId_);
      DARABONBA_PTR_TO_JSON(Networks, networks_);
      DARABONBA_PTR_TO_JSON(OspfCost, ospfCost_);
      DARABONBA_PTR_TO_JSON(OspfNetworkType, ospfNetworkType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RedistributeProtocol, redistributeProtocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_TO_JSON(SagSn, sagSn_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmartAccessGatewayOspfRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_FROM_JSON(DeadTime, deadTime_);
      DARABONBA_PTR_FROM_JSON(HelloTime, helloTime_);
      DARABONBA_PTR_FROM_JSON(InterfaceName, interfaceName_);
      DARABONBA_PTR_FROM_JSON(Md5Key, md5Key_);
      DARABONBA_PTR_FROM_JSON(Md5KeyId, md5KeyId_);
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
      DARABONBA_PTR_FROM_JSON(OspfCost, ospfCost_);
      DARABONBA_PTR_FROM_JSON(OspfNetworkType, ospfNetworkType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RedistributeProtocol, redistributeProtocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_FROM_JSON(SagSn, sagSn_);
    };
    UpdateSmartAccessGatewayOspfRouteRequest() = default ;
    UpdateSmartAccessGatewayOspfRouteRequest(const UpdateSmartAccessGatewayOspfRouteRequest &) = default ;
    UpdateSmartAccessGatewayOspfRouteRequest(UpdateSmartAccessGatewayOspfRouteRequest &&) = default ;
    UpdateSmartAccessGatewayOspfRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmartAccessGatewayOspfRouteRequest() = default ;
    UpdateSmartAccessGatewayOspfRouteRequest& operator=(const UpdateSmartAccessGatewayOspfRouteRequest &) = default ;
    UpdateSmartAccessGatewayOspfRouteRequest& operator=(UpdateSmartAccessGatewayOspfRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaId_ == nullptr
        && this->authenticationType_ == nullptr && this->crossAccount_ == nullptr && this->deadTime_ == nullptr && this->helloTime_ == nullptr && this->interfaceName_ == nullptr
        && this->md5Key_ == nullptr && this->md5KeyId_ == nullptr && this->networks_ == nullptr && this->ospfCost_ == nullptr && this->ospfNetworkType_ == nullptr
        && this->password_ == nullptr && this->redistributeProtocol_ == nullptr && this->regionId_ == nullptr && this->resourceUid_ == nullptr && this->routerId_ == nullptr
        && this->sagInsId_ == nullptr && this->sagSn_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline int32_t getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, 0) };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setAreaId(int32_t areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline string getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // crossAccount Field Functions 
    bool hasCrossAccount() const { return this->crossAccount_ != nullptr;};
    void deleteCrossAccount() { this->crossAccount_ = nullptr;};
    inline bool getCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(crossAccount_, false) };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setCrossAccount(bool crossAccount) { DARABONBA_PTR_SET_VALUE(crossAccount_, crossAccount) };


    // deadTime Field Functions 
    bool hasDeadTime() const { return this->deadTime_ != nullptr;};
    void deleteDeadTime() { this->deadTime_ = nullptr;};
    inline int32_t getDeadTime() const { DARABONBA_PTR_GET_DEFAULT(deadTime_, 0) };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setDeadTime(int32_t deadTime) { DARABONBA_PTR_SET_VALUE(deadTime_, deadTime) };


    // helloTime Field Functions 
    bool hasHelloTime() const { return this->helloTime_ != nullptr;};
    void deleteHelloTime() { this->helloTime_ = nullptr;};
    inline int32_t getHelloTime() const { DARABONBA_PTR_GET_DEFAULT(helloTime_, 0) };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setHelloTime(int32_t helloTime) { DARABONBA_PTR_SET_VALUE(helloTime_, helloTime) };


    // interfaceName Field Functions 
    bool hasInterfaceName() const { return this->interfaceName_ != nullptr;};
    void deleteInterfaceName() { this->interfaceName_ = nullptr;};
    inline string getInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(interfaceName_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setInterfaceName(string interfaceName) { DARABONBA_PTR_SET_VALUE(interfaceName_, interfaceName) };


    // md5Key Field Functions 
    bool hasMd5Key() const { return this->md5Key_ != nullptr;};
    void deleteMd5Key() { this->md5Key_ = nullptr;};
    inline string getMd5Key() const { DARABONBA_PTR_GET_DEFAULT(md5Key_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setMd5Key(string md5Key) { DARABONBA_PTR_SET_VALUE(md5Key_, md5Key) };


    // md5KeyId Field Functions 
    bool hasMd5KeyId() const { return this->md5KeyId_ != nullptr;};
    void deleteMd5KeyId() { this->md5KeyId_ = nullptr;};
    inline int32_t getMd5KeyId() const { DARABONBA_PTR_GET_DEFAULT(md5KeyId_, 0) };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setMd5KeyId(int32_t md5KeyId) { DARABONBA_PTR_SET_VALUE(md5KeyId_, md5KeyId) };


    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline string getNetworks() const { DARABONBA_PTR_GET_DEFAULT(networks_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setNetworks(string networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };


    // ospfCost Field Functions 
    bool hasOspfCost() const { return this->ospfCost_ != nullptr;};
    void deleteOspfCost() { this->ospfCost_ = nullptr;};
    inline int32_t getOspfCost() const { DARABONBA_PTR_GET_DEFAULT(ospfCost_, 0) };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setOspfCost(int32_t ospfCost) { DARABONBA_PTR_SET_VALUE(ospfCost_, ospfCost) };


    // ospfNetworkType Field Functions 
    bool hasOspfNetworkType() const { return this->ospfNetworkType_ != nullptr;};
    void deleteOspfNetworkType() { this->ospfNetworkType_ = nullptr;};
    inline string getOspfNetworkType() const { DARABONBA_PTR_GET_DEFAULT(ospfNetworkType_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setOspfNetworkType(string ospfNetworkType) { DARABONBA_PTR_SET_VALUE(ospfNetworkType_, ospfNetworkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // redistributeProtocol Field Functions 
    bool hasRedistributeProtocol() const { return this->redistributeProtocol_ != nullptr;};
    void deleteRedistributeProtocol() { this->redistributeProtocol_ = nullptr;};
    inline string getRedistributeProtocol() const { DARABONBA_PTR_GET_DEFAULT(redistributeProtocol_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setRedistributeProtocol(string redistributeProtocol) { DARABONBA_PTR_SET_VALUE(redistributeProtocol_, redistributeProtocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceUid Field Functions 
    bool hasResourceUid() const { return this->resourceUid_ != nullptr;};
    void deleteResourceUid() { this->resourceUid_ = nullptr;};
    inline string getResourceUid() const { DARABONBA_PTR_GET_DEFAULT(resourceUid_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setResourceUid(string resourceUid) { DARABONBA_PTR_SET_VALUE(resourceUid_, resourceUid) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // sagInsId Field Functions 
    bool hasSagInsId() const { return this->sagInsId_ != nullptr;};
    void deleteSagInsId() { this->sagInsId_ = nullptr;};
    inline string getSagInsId() const { DARABONBA_PTR_GET_DEFAULT(sagInsId_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setSagInsId(string sagInsId) { DARABONBA_PTR_SET_VALUE(sagInsId_, sagInsId) };


    // sagSn Field Functions 
    bool hasSagSn() const { return this->sagSn_ != nullptr;};
    void deleteSagSn() { this->sagSn_ = nullptr;};
    inline string getSagSn() const { DARABONBA_PTR_GET_DEFAULT(sagSn_, "") };
    inline UpdateSmartAccessGatewayOspfRouteRequest& setSagSn(string sagSn) { DARABONBA_PTR_SET_VALUE(sagSn_, sagSn) };


  protected:
    // The OSPF area ID.
    // 
    // The value must be an integer from **1** to **2147483647**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> areaId_ {};
    // The authentication method. Valid values:
    // 
    // - **NONE**: No authentication is configured.
    // - **CLEARTEXT**: Plaintext authentication is used.
    // - **MD5**: MD5 authentication is used.
    // 
    // This parameter is required.
    shared_ptr<string> authenticationType_ {};
    // Specifies whether to query only the SAG instances that belong to other Alibaba Cloud accounts. Valid values:
    // 
    // - **false** (default): No.
    // - **true**: Yes.
    shared_ptr<bool> crossAccount_ {};
    // The dead interval. Unit: seconds.
    // 
    // The value must be an integer from **1** to **65535**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> deadTime_ {};
    // The interval at which Hello packets are sent. Unit: seconds.
    // 
    // The value must be an integer from **1** to **65535**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> helloTime_ {};
    // The port name.
    // 
    // > This parameter is not in use.
    shared_ptr<string> interfaceName_ {};
    // The MD5 key.
    // 
    // The value must be 1 to **47** characters in length.
    // 
    // > This parameter is required only when you set **AuthenticationType** to **MD5**.
    shared_ptr<string> md5Key_ {};
    // The MD5 key ID.
    // 
    // The value must be an integer from 1 to **2147483647**.
    // 
    // > This parameter is required only when you set **AuthenticationType** to **MD5**.
    shared_ptr<int32_t> md5KeyId_ {};
    // The network segment.
    // 
    // > This parameter is not in use.
    shared_ptr<string> networks_ {};
    // The cost of the OSPF route.
    // 
    // > This parameter is not in use.
    shared_ptr<int32_t> ospfCost_ {};
    // The OSPF network type.
    // 
    // > This parameter is not in use.
    shared_ptr<string> ospfNetworkType_ {};
    // The password for plaintext authentication.
    // 
    // The password must be 1 to 8 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // > This parameter is required only when you set **AuthenticationType** to **CLEARTEXT**.
    shared_ptr<string> password_ {};
    // The route redistribution protocol.
    // 
    // > This parameter is not in use.
    shared_ptr<string> redistributeProtocol_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // For more information, see [DescribeRegions](https://help.aliyun.com/document_detail/69813.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud account to which the resource belongs.
    shared_ptr<string> resourceUid_ {};
    // The OSPF router ID.
    // 
    // This parameter is required.
    shared_ptr<string> routerId_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagInsId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> sagSn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
