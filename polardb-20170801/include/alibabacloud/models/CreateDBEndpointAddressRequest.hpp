// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBENDPOINTADDRESSREQUEST_HPP_
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
  class CreateDBEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(ZoneInfo, zoneInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(ZoneInfo, zoneInfo_);
    };
    CreateDBEndpointAddressRequest() = default ;
    CreateDBEndpointAddressRequest(const CreateDBEndpointAddressRequest &) = default ;
    CreateDBEndpointAddressRequest(CreateDBEndpointAddressRequest &&) = default ;
    CreateDBEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBEndpointAddressRequest() = default ;
    CreateDBEndpointAddressRequest& operator=(const CreateDBEndpointAddressRequest &) = default ;
    CreateDBEndpointAddressRequest& operator=(CreateDBEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneInfo& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ZoneInfo() = default ;
      ZoneInfo(const ZoneInfo &) = default ;
      ZoneInfo(ZoneInfo &&) = default ;
      ZoneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneInfo() = default ;
      ZoneInfo& operator=(const ZoneInfo &) = default ;
      ZoneInfo& operator=(ZoneInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneInfo& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the zone.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->connectionStringPrefix_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBEndpointId_ == nullptr && this->netType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityGroupId_ == nullptr && this->VPCId_ == nullptr && this->zoneInfo_ == nullptr; };
    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline CreateDBEndpointAddressRequest& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBEndpointAddressRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline CreateDBEndpointAddressRequest& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline CreateDBEndpointAddressRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBEndpointAddressRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBEndpointAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBEndpointAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBEndpointAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateDBEndpointAddressRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBEndpointAddressRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // zoneInfo Field Functions 
    bool hasZoneInfo() const { return this->zoneInfo_ != nullptr;};
    void deleteZoneInfo() { this->zoneInfo_ = nullptr;};
    inline const vector<CreateDBEndpointAddressRequest::ZoneInfo> & getZoneInfo() const { DARABONBA_PTR_GET_CONST(zoneInfo_, vector<CreateDBEndpointAddressRequest::ZoneInfo>) };
    inline vector<CreateDBEndpointAddressRequest::ZoneInfo> getZoneInfo() { DARABONBA_PTR_GET(zoneInfo_, vector<CreateDBEndpointAddressRequest::ZoneInfo>) };
    inline CreateDBEndpointAddressRequest& setZoneInfo(const vector<CreateDBEndpointAddressRequest::ZoneInfo> & zoneInfo) { DARABONBA_PTR_SET_VALUE(zoneInfo_, zoneInfo) };
    inline CreateDBEndpointAddressRequest& setZoneInfo(vector<CreateDBEndpointAddressRequest::ZoneInfo> && zoneInfo) { DARABONBA_PTR_SET_RVALUE(zoneInfo_, zoneInfo) };


  protected:
    // The prefix of the new endpoint. The prefix of the endpoint must meet the following requirements:
    // 
    // *   The prefix can contain lowercase letters, digits, and hyphens (-).
    // *   The prefix must start with a letter and end with a digit or a letter.
    // *   The prefix must be 6 to 40 characters in length.
    shared_ptr<string> connectionStringPrefix_ {};
    // The ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the endpoint.
    // 
    // >  You can call the [DescribeDBClusterEndpoints](https://help.aliyun.com/document_detail/98205.html) operation to query endpoint details.
    // 
    // This parameter is required.
    shared_ptr<string> DBEndpointId_ {};
    // The network type of the endpoint. Set the value to **Public**.
    // 
    // This parameter is required.
    shared_ptr<string> netType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the ECS security group.
    shared_ptr<string> securityGroupId_ {};
    // The ID of the virtual private cloud (VPC).
    shared_ptr<string> VPCId_ {};
    // The details of the zones.
    shared_ptr<vector<CreateDBEndpointAddressRequest::ZoneInfo>> zoneInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
