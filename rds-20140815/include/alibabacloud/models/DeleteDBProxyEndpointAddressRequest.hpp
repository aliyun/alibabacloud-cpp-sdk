// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDBPROXYENDPOINTADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDBPROXYENDPOINTADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteDBProxyEndpointAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDBProxyEndpointAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
      DARABONBA_PTR_TO_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDBProxyEndpointAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringNetType, DBProxyConnectStringNetType_);
      DARABONBA_PTR_FROM_JSON(DBProxyEndpointId, DBProxyEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDBProxyEndpointAddressRequest() = default ;
    DeleteDBProxyEndpointAddressRequest(const DeleteDBProxyEndpointAddressRequest &) = default ;
    DeleteDBProxyEndpointAddressRequest(DeleteDBProxyEndpointAddressRequest &&) = default ;
    DeleteDBProxyEndpointAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDBProxyEndpointAddressRequest() = default ;
    DeleteDBProxyEndpointAddressRequest& operator=(const DeleteDBProxyEndpointAddressRequest &) = default ;
    DeleteDBProxyEndpointAddressRequest& operator=(DeleteDBProxyEndpointAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBProxyConnectStringNetType_ == nullptr && this->DBProxyEndpointId_ == nullptr && this->DBProxyEngineType_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteDBProxyEndpointAddressRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBProxyConnectStringNetType Field Functions 
    bool hasDBProxyConnectStringNetType() const { return this->DBProxyConnectStringNetType_ != nullptr;};
    void deleteDBProxyConnectStringNetType() { this->DBProxyConnectStringNetType_ = nullptr;};
    inline string getDBProxyConnectStringNetType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyConnectStringNetType_, "") };
    inline DeleteDBProxyEndpointAddressRequest& setDBProxyConnectStringNetType(string DBProxyConnectStringNetType) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringNetType_, DBProxyConnectStringNetType) };


    // DBProxyEndpointId Field Functions 
    bool hasDBProxyEndpointId() const { return this->DBProxyEndpointId_ != nullptr;};
    void deleteDBProxyEndpointId() { this->DBProxyEndpointId_ = nullptr;};
    inline string getDBProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEndpointId_, "") };
    inline DeleteDBProxyEndpointAddressRequest& setDBProxyEndpointId(string DBProxyEndpointId) { DARABONBA_PTR_SET_VALUE(DBProxyEndpointId_, DBProxyEndpointId) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline DeleteDBProxyEndpointAddressRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDBProxyEndpointAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID. You can call DescribeDBInstances to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The network type of the database proxy endpoint to delete. Valid values:
    // * **Public**: Internet
    // * **VPC**: internal network (VPC)
    // * **Classic**: internal network (classic network)
    // 
    // Default value: **Classic**.
    // 
    // > - You cannot delete the internal endpoint that is created by default.
    // > - ApsaraDB RDS for PostgreSQL supports only **Public** and **VPC**.
    // 
    // This parameter is required.
    shared_ptr<string> DBProxyConnectStringNetType_ {};
    // The ID of the database proxy endpoint. You can call DescribeDBProxyEndpoint to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBProxyEndpointId_ {};
    // A deprecated parameter. You do not need to configure this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The region ID. You can call DescribeRegions to query the available regions.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
