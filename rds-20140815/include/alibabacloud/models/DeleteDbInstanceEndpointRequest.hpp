// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBINSTANCEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBINSTANCEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteDBInstanceEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBInstanceEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBInstanceEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteDBInstanceEndpointRequest() = default ;
    DeleteDBInstanceEndpointRequest(const DeleteDBInstanceEndpointRequest &) = default ;
    DeleteDBInstanceEndpointRequest(DeleteDBInstanceEndpointRequest &&) = default ;
    DeleteDBInstanceEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBInstanceEndpointRequest() = default ;
    DeleteDBInstanceEndpointRequest& operator=(const DeleteDBInstanceEndpointRequest &) = default ;
    DeleteDBInstanceEndpointRequest& operator=(DeleteDBInstanceEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->DBInstanceEndpointId_ == nullptr && return this->DBInstanceId_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteDBInstanceEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceEndpointId Field Functions 
    bool hasDBInstanceEndpointId() const { return this->DBInstanceEndpointId_ != nullptr;};
    void deleteDBInstanceEndpointId() { this->DBInstanceEndpointId_ = nullptr;};
    inline string DBInstanceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointId_, "") };
    inline DeleteDBInstanceEndpointRequest& setDBInstanceEndpointId(string DBInstanceEndpointId) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointId_, DBInstanceEndpointId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteDBInstanceEndpointRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteDBInstanceEndpointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotency of requests. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
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
