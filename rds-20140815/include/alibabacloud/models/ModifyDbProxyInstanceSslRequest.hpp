// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCESSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCESSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDbProxyInstanceSslRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDbProxyInstanceSslRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DbProxyConnectString, dbProxyConnectString_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointId, dbProxyEndpointId_);
      DARABONBA_PTR_TO_JSON(DbProxySslEnabled, dbProxySslEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDbProxyInstanceSslRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbProxyConnectString, dbProxyConnectString_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointId, dbProxyEndpointId_);
      DARABONBA_PTR_FROM_JSON(DbProxySslEnabled, dbProxySslEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDbProxyInstanceSslRequest() = default ;
    ModifyDbProxyInstanceSslRequest(const ModifyDbProxyInstanceSslRequest &) = default ;
    ModifyDbProxyInstanceSslRequest(ModifyDbProxyInstanceSslRequest &&) = default ;
    ModifyDbProxyInstanceSslRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDbProxyInstanceSslRequest() = default ;
    ModifyDbProxyInstanceSslRequest& operator=(const ModifyDbProxyInstanceSslRequest &) = default ;
    ModifyDbProxyInstanceSslRequest& operator=(ModifyDbProxyInstanceSslRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBProxyEngineType_ == nullptr
        && this->dbInstanceId_ == nullptr && this->dbProxyConnectString_ == nullptr && this->dbProxyEndpointId_ == nullptr && this->dbProxySslEnabled_ == nullptr && this->regionId_ == nullptr; };
    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string getDBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline ModifyDbProxyInstanceSslRequest& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline ModifyDbProxyInstanceSslRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbProxyConnectString Field Functions 
    bool hasDbProxyConnectString() const { return this->dbProxyConnectString_ != nullptr;};
    void deleteDbProxyConnectString() { this->dbProxyConnectString_ = nullptr;};
    inline string getDbProxyConnectString() const { DARABONBA_PTR_GET_DEFAULT(dbProxyConnectString_, "") };
    inline ModifyDbProxyInstanceSslRequest& setDbProxyConnectString(string dbProxyConnectString) { DARABONBA_PTR_SET_VALUE(dbProxyConnectString_, dbProxyConnectString) };


    // dbProxyEndpointId Field Functions 
    bool hasDbProxyEndpointId() const { return this->dbProxyEndpointId_ != nullptr;};
    void deleteDbProxyEndpointId() { this->dbProxyEndpointId_ = nullptr;};
    inline string getDbProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointId_, "") };
    inline ModifyDbProxyInstanceSslRequest& setDbProxyEndpointId(string dbProxyEndpointId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointId_, dbProxyEndpointId) };


    // dbProxySslEnabled Field Functions 
    bool hasDbProxySslEnabled() const { return this->dbProxySslEnabled_ != nullptr;};
    void deleteDbProxySslEnabled() { this->dbProxySslEnabled_ = nullptr;};
    inline string getDbProxySslEnabled() const { DARABONBA_PTR_GET_DEFAULT(dbProxySslEnabled_, "") };
    inline ModifyDbProxyInstanceSslRequest& setDbProxySslEnabled(string dbProxySslEnabled) { DARABONBA_PTR_SET_VALUE(dbProxySslEnabled_, dbProxySslEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDbProxyInstanceSslRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> DBProxyEngineType_ {};
    // The instance ID. You can call DescribeDBInstances to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> dbInstanceId_ {};
    // The endpoint for which you want to enable SSL encryption.
    // 
    // This parameter is required.
    shared_ptr<string> dbProxyConnectString_ {};
    // The ID of the database proxy endpoint. You can call DescribeDBProxyEndpoint to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> dbProxyEndpointId_ {};
    // The operation that you want to perform on SSL encryption. Valid values:
    // * 0: Disables SSL encryption.
    // * 1: Enables SSL encryption or changes the endpoint for which SSL encryption is enabled.
    // * 2: Updates the validity period of the SSL certificate.
    // 
    // >The preceding operations restart the instance. Proceed with caution.
    // 
    // This parameter is required.
    shared_ptr<string> dbProxySslEnabled_ {};
    // The region ID. You can call DescribeRegions to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
