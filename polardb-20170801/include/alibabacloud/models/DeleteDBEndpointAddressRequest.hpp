// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBENDPOINTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteDBEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteDBEndpointAddressRequest() = default ;
    DeleteDBEndpointAddressRequest(const DeleteDBEndpointAddressRequest &) = default ;
    DeleteDBEndpointAddressRequest(DeleteDBEndpointAddressRequest &&) = default ;
    DeleteDBEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBEndpointAddressRequest() = default ;
    DeleteDBEndpointAddressRequest& operator=(const DeleteDBEndpointAddressRequest &) = default ;
    DeleteDBEndpointAddressRequest& operator=(DeleteDBEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBEndpointId_ == nullptr && this->netType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteDBEndpointAddressRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline DeleteDBEndpointAddressRequest& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DeleteDBEndpointAddressRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteDBEndpointAddressRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteDBEndpointAddressRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteDBEndpointAddressRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteDBEndpointAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of all clusters that belong to your account, such as the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the endpoint.
    // 
    // >  You can call the [DescribeDBClusterEndpoints](https://help.aliyun.com/document_detail/98205.html) operation to query the endpoints of a specified PolarDB cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBEndpointId_ {};
    // The network type of the endpoint. Set the value to **Public** (public network).
    // 
    // This parameter is required.
    shared_ptr<string> netType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
