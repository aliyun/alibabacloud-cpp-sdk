// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateAppInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceConfig, DBInstanceConfig_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_TO_JSON(DashboardUsername, dashboardUsername_);
      DARABONBA_PTR_TO_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_TO_JSON(InitializeWithExistingData, initializeWithExistingData_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(PublicEndpointEnabled, publicEndpointEnabled_);
      DARABONBA_PTR_TO_JSON(PublicNetworkAccessEnabled, publicNetworkAccessEnabled_);
      DARABONBA_PTR_TO_JSON(RAGEnabled, RAGEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceConfig, DBInstanceConfig_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_FROM_JSON(DashboardUsername, dashboardUsername_);
      DARABONBA_PTR_FROM_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_FROM_JSON(InitializeWithExistingData, initializeWithExistingData_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(PublicEndpointEnabled, publicEndpointEnabled_);
      DARABONBA_PTR_FROM_JSON(PublicNetworkAccessEnabled, publicNetworkAccessEnabled_);
      DARABONBA_PTR_FROM_JSON(RAGEnabled, RAGEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateAppInstanceRequest() = default ;
    CreateAppInstanceRequest(const CreateAppInstanceRequest &) = default ;
    CreateAppInstanceRequest(CreateAppInstanceRequest &&) = default ;
    CreateAppInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceRequest() = default ;
    CreateAppInstanceRequest& operator=(const CreateAppInstanceRequest &) = default ;
    CreateAppInstanceRequest& operator=(CreateAppInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstanceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstanceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
        DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstanceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
        DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
      };
      DBInstanceConfig() = default ;
      DBInstanceConfig(const DBInstanceConfig &) = default ;
      DBInstanceConfig(DBInstanceConfig &&) = default ;
      DBInstanceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstanceConfig() = default ;
      DBInstanceConfig& operator=(const DBInstanceConfig &) = default ;
      DBInstanceConfig& operator=(DBInstanceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceClass_ == nullptr
        && this->DBInstanceStorage_ == nullptr && this->payType_ == nullptr; };
      // DBInstanceClass Field Functions 
      bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
      void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
      inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
      inline DBInstanceConfig& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


      // DBInstanceStorage Field Functions 
      bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
      void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
      inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
      inline DBInstanceConfig& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline DBInstanceConfig& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    protected:
      shared_ptr<string> DBInstanceClass_ {};
      shared_ptr<int32_t> DBInstanceStorage_ {};
      shared_ptr<string> payType_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->appType_ == nullptr && this->clientToken_ == nullptr && this->DBInstanceConfig_ == nullptr && this->DBInstanceName_ == nullptr && this->dashboardPassword_ == nullptr
        && this->dashboardUsername_ == nullptr && this->databasePassword_ == nullptr && this->initializeWithExistingData_ == nullptr && this->instanceClass_ == nullptr && this->publicEndpointEnabled_ == nullptr
        && this->publicNetworkAccessEnabled_ == nullptr && this->RAGEnabled_ == nullptr && this->regionId_ == nullptr && this->vSwitchId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppInstanceRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CreateAppInstanceRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceConfig Field Functions 
    bool hasDBInstanceConfig() const { return this->DBInstanceConfig_ != nullptr;};
    void deleteDBInstanceConfig() { this->DBInstanceConfig_ = nullptr;};
    inline const CreateAppInstanceRequest::DBInstanceConfig & getDBInstanceConfig() const { DARABONBA_PTR_GET_CONST(DBInstanceConfig_, CreateAppInstanceRequest::DBInstanceConfig) };
    inline CreateAppInstanceRequest::DBInstanceConfig getDBInstanceConfig() { DARABONBA_PTR_GET(DBInstanceConfig_, CreateAppInstanceRequest::DBInstanceConfig) };
    inline CreateAppInstanceRequest& setDBInstanceConfig(const CreateAppInstanceRequest::DBInstanceConfig & dBInstanceConfig) { DARABONBA_PTR_SET_VALUE(DBInstanceConfig_, dBInstanceConfig) };
    inline CreateAppInstanceRequest& setDBInstanceConfig(CreateAppInstanceRequest::DBInstanceConfig && dBInstanceConfig) { DARABONBA_PTR_SET_RVALUE(DBInstanceConfig_, dBInstanceConfig) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateAppInstanceRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dashboardPassword Field Functions 
    bool hasDashboardPassword() const { return this->dashboardPassword_ != nullptr;};
    void deleteDashboardPassword() { this->dashboardPassword_ = nullptr;};
    inline string getDashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(dashboardPassword_, "") };
    inline CreateAppInstanceRequest& setDashboardPassword(string dashboardPassword) { DARABONBA_PTR_SET_VALUE(dashboardPassword_, dashboardPassword) };


    // dashboardUsername Field Functions 
    bool hasDashboardUsername() const { return this->dashboardUsername_ != nullptr;};
    void deleteDashboardUsername() { this->dashboardUsername_ = nullptr;};
    inline string getDashboardUsername() const { DARABONBA_PTR_GET_DEFAULT(dashboardUsername_, "") };
    inline CreateAppInstanceRequest& setDashboardUsername(string dashboardUsername) { DARABONBA_PTR_SET_VALUE(dashboardUsername_, dashboardUsername) };


    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string getDatabasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline CreateAppInstanceRequest& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // initializeWithExistingData Field Functions 
    bool hasInitializeWithExistingData() const { return this->initializeWithExistingData_ != nullptr;};
    void deleteInitializeWithExistingData() { this->initializeWithExistingData_ = nullptr;};
    inline bool getInitializeWithExistingData() const { DARABONBA_PTR_GET_DEFAULT(initializeWithExistingData_, false) };
    inline CreateAppInstanceRequest& setInitializeWithExistingData(bool initializeWithExistingData) { DARABONBA_PTR_SET_VALUE(initializeWithExistingData_, initializeWithExistingData) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline CreateAppInstanceRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // publicEndpointEnabled Field Functions 
    bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
    void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
    inline bool getPublicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
    inline CreateAppInstanceRequest& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


    // publicNetworkAccessEnabled Field Functions 
    bool hasPublicNetworkAccessEnabled() const { return this->publicNetworkAccessEnabled_ != nullptr;};
    void deletePublicNetworkAccessEnabled() { this->publicNetworkAccessEnabled_ = nullptr;};
    inline bool getPublicNetworkAccessEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicNetworkAccessEnabled_, false) };
    inline CreateAppInstanceRequest& setPublicNetworkAccessEnabled(bool publicNetworkAccessEnabled) { DARABONBA_PTR_SET_VALUE(publicNetworkAccessEnabled_, publicNetworkAccessEnabled) };


    // RAGEnabled Field Functions 
    bool hasRAGEnabled() const { return this->RAGEnabled_ != nullptr;};
    void deleteRAGEnabled() { this->RAGEnabled_ = nullptr;};
    inline bool getRAGEnabled() const { DARABONBA_PTR_GET_DEFAULT(RAGEnabled_, false) };
    inline CreateAppInstanceRequest& setRAGEnabled(bool RAGEnabled) { DARABONBA_PTR_SET_VALUE(RAGEnabled_, RAGEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAppInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAppInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the RDS for PostgreSQL instance with which the RDS Supabase instances are associated.
    // 
    // > : Only newly purchased empty RDS for PostgreSQL instances are supported. The major engine version must be PostgreSQL 17 and the minor version must be 20250630 or later.
    shared_ptr<string> appName_ {};
    // The region ID of the instance.
    shared_ptr<string> appType_ {};
    // The name of the new AI application.
    shared_ptr<string> clientToken_ {};
    // A reserved parameter.
    shared_ptr<CreateAppInstanceRequest::DBInstanceConfig> DBInstanceConfig_ {};
    // The instance type. Only **rdsai.supabase.basic** is supported.
    shared_ptr<string> DBInstanceName_ {};
    // The Supabase Dashboard user name.
    shared_ptr<string> dashboardPassword_ {};
    // The password used to access the RDS database.
    // 
    // The password must be 8 to 32 characters in length and must contain at least three of the following characters: uppercase letters, lowercase letters, digits, and underscores (_).
    shared_ptr<string> dashboardUsername_ {};
    // The idempotency token. The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    shared_ptr<string> databasePassword_ {};
    // Specifies whether to enable public endpoint.
    // 
    // *   true (default)
    // *   false
    shared_ptr<bool> initializeWithExistingData_ {};
    // The vSwitch ID.
    shared_ptr<string> instanceClass_ {};
    // The billing method of the RDS for PostgreSQL instance.
    shared_ptr<bool> publicEndpointEnabled_ {};
    // The Supabase Dashboard password.
    // 
    // The password must be 8 to 32 characters in length and must contain at least three of the following characters: uppercase letters, lowercase letters, digits, and underscores (_).
    shared_ptr<bool> publicNetworkAccessEnabled_ {};
    // Specifies whether to enable the Internet NAT gateway. Valid values:
    // 
    // *   **true**: enable the Internet NAT gateway.
    // *   **false** (default): disable the Internet NAT gateway.
    // 
    // >  If an Internet NAT gateway is enabled for the vSwitch that you specify for VSwitchId, select false for this parameter.
    shared_ptr<bool> RAGEnabled_ {};
    // The operation that you want to perform. Set the value to **CreateAppInstance**.
    shared_ptr<string> regionId_ {};
    // The application type. Only **supabase** is supported.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
