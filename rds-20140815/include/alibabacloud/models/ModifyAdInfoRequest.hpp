// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyADInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyADInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ADAccountName, ADAccountName_);
      DARABONBA_PTR_TO_JSON(ADDNS, ADDNS_);
      DARABONBA_PTR_TO_JSON(ADPassword, ADPassword_);
      DARABONBA_PTR_TO_JSON(ADServerIpAddress, ADServerIpAddress_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyADInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ADAccountName, ADAccountName_);
      DARABONBA_PTR_FROM_JSON(ADDNS, ADDNS_);
      DARABONBA_PTR_FROM_JSON(ADPassword, ADPassword_);
      DARABONBA_PTR_FROM_JSON(ADServerIpAddress, ADServerIpAddress_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyADInfoRequest() = default ;
    ModifyADInfoRequest(const ModifyADInfoRequest &) = default ;
    ModifyADInfoRequest(ModifyADInfoRequest &&) = default ;
    ModifyADInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyADInfoRequest() = default ;
    ModifyADInfoRequest& operator=(const ModifyADInfoRequest &) = default ;
    ModifyADInfoRequest& operator=(ModifyADInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ADAccountName_ == nullptr
        && return this->ADDNS_ == nullptr && return this->ADPassword_ == nullptr && return this->ADServerIpAddress_ == nullptr && return this->clientToken_ == nullptr && return this->DBInstanceId_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // ADAccountName Field Functions 
    bool hasADAccountName() const { return this->ADAccountName_ != nullptr;};
    void deleteADAccountName() { this->ADAccountName_ = nullptr;};
    inline string ADAccountName() const { DARABONBA_PTR_GET_DEFAULT(ADAccountName_, "") };
    inline ModifyADInfoRequest& setADAccountName(string ADAccountName) { DARABONBA_PTR_SET_VALUE(ADAccountName_, ADAccountName) };


    // ADDNS Field Functions 
    bool hasADDNS() const { return this->ADDNS_ != nullptr;};
    void deleteADDNS() { this->ADDNS_ = nullptr;};
    inline string ADDNS() const { DARABONBA_PTR_GET_DEFAULT(ADDNS_, "") };
    inline ModifyADInfoRequest& setADDNS(string ADDNS) { DARABONBA_PTR_SET_VALUE(ADDNS_, ADDNS) };


    // ADPassword Field Functions 
    bool hasADPassword() const { return this->ADPassword_ != nullptr;};
    void deleteADPassword() { this->ADPassword_ = nullptr;};
    inline string ADPassword() const { DARABONBA_PTR_GET_DEFAULT(ADPassword_, "") };
    inline ModifyADInfoRequest& setADPassword(string ADPassword) { DARABONBA_PTR_SET_VALUE(ADPassword_, ADPassword) };


    // ADServerIpAddress Field Functions 
    bool hasADServerIpAddress() const { return this->ADServerIpAddress_ != nullptr;};
    void deleteADServerIpAddress() { this->ADServerIpAddress_ = nullptr;};
    inline string ADServerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ADServerIpAddress_, "") };
    inline ModifyADInfoRequest& setADServerIpAddress(string ADServerIpAddress) { DARABONBA_PTR_SET_VALUE(ADServerIpAddress_, ADServerIpAddress) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyADInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyADInfoRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyADInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyADInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyADInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyADInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The account of the AD domain.
    std::shared_ptr<string> ADAccountName_ = nullptr;
    // The DNS information about the AD domain.
    std::shared_ptr<string> ADDNS_ = nullptr;
    // The password for the account of the AD domain.
    std::shared_ptr<string> ADPassword_ = nullptr;
    // The IP address of the AD domain.
    std::shared_ptr<string> ADServerIpAddress_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
