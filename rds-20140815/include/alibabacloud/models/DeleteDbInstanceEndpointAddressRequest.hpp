// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBINSTANCEENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBINSTANCEENDPOINTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteDBInstanceEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBInstanceEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBInstanceEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteDBInstanceEndpointAddressRequest() = default ;
    DeleteDBInstanceEndpointAddressRequest(const DeleteDBInstanceEndpointAddressRequest &) = default ;
    DeleteDBInstanceEndpointAddressRequest(DeleteDBInstanceEndpointAddressRequest &&) = default ;
    DeleteDBInstanceEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBInstanceEndpointAddressRequest() = default ;
    DeleteDBInstanceEndpointAddressRequest& operator=(const DeleteDBInstanceEndpointAddressRequest &) = default ;
    DeleteDBInstanceEndpointAddressRequest& operator=(DeleteDBInstanceEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->connectionString_ == nullptr && return this->DBInstanceEndpointId_ == nullptr && return this->DBInstanceId_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteDBInstanceEndpointAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DeleteDBInstanceEndpointAddressRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceEndpointId Field Functions 
    bool hasDBInstanceEndpointId() const { return this->DBInstanceEndpointId_ != nullptr;};
    void deleteDBInstanceEndpointId() { this->DBInstanceEndpointId_ = nullptr;};
    inline string DBInstanceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointId_, "") };
    inline DeleteDBInstanceEndpointAddressRequest& setDBInstanceEndpointId(string DBInstanceEndpointId) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointId_, DBInstanceEndpointId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteDBInstanceEndpointAddressRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteDBInstanceEndpointAddressRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The public endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The endpoint ID of the instance. You can call the DescribeDBInstanceEndpoints operation to query the endpoint ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceEndpointId_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
