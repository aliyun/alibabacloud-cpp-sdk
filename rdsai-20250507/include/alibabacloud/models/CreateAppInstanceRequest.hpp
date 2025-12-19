// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppInstanceRequestDBInstanceConfig.hpp>
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
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->appType_ == nullptr && return this->clientToken_ == nullptr && return this->DBInstanceConfig_ == nullptr && return this->DBInstanceName_ == nullptr && return this->dashboardPassword_ == nullptr
        && return this->dashboardUsername_ == nullptr && return this->databasePassword_ == nullptr && return this->initializeWithExistingData_ == nullptr && return this->instanceClass_ == nullptr && return this->publicEndpointEnabled_ == nullptr
        && return this->publicNetworkAccessEnabled_ == nullptr && return this->RAGEnabled_ == nullptr && return this->regionId_ == nullptr && return this->vSwitchId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppInstanceRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CreateAppInstanceRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceConfig Field Functions 
    bool hasDBInstanceConfig() const { return this->DBInstanceConfig_ != nullptr;};
    void deleteDBInstanceConfig() { this->DBInstanceConfig_ = nullptr;};
    inline const CreateAppInstanceRequestDBInstanceConfig & DBInstanceConfig() const { DARABONBA_PTR_GET_CONST(DBInstanceConfig_, CreateAppInstanceRequestDBInstanceConfig) };
    inline CreateAppInstanceRequestDBInstanceConfig DBInstanceConfig() { DARABONBA_PTR_GET(DBInstanceConfig_, CreateAppInstanceRequestDBInstanceConfig) };
    inline CreateAppInstanceRequest& setDBInstanceConfig(const CreateAppInstanceRequestDBInstanceConfig & DBInstanceConfig) { DARABONBA_PTR_SET_VALUE(DBInstanceConfig_, DBInstanceConfig) };
    inline CreateAppInstanceRequest& setDBInstanceConfig(CreateAppInstanceRequestDBInstanceConfig && DBInstanceConfig) { DARABONBA_PTR_SET_RVALUE(DBInstanceConfig_, DBInstanceConfig) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateAppInstanceRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dashboardPassword Field Functions 
    bool hasDashboardPassword() const { return this->dashboardPassword_ != nullptr;};
    void deleteDashboardPassword() { this->dashboardPassword_ = nullptr;};
    inline string dashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(dashboardPassword_, "") };
    inline CreateAppInstanceRequest& setDashboardPassword(string dashboardPassword) { DARABONBA_PTR_SET_VALUE(dashboardPassword_, dashboardPassword) };


    // dashboardUsername Field Functions 
    bool hasDashboardUsername() const { return this->dashboardUsername_ != nullptr;};
    void deleteDashboardUsername() { this->dashboardUsername_ = nullptr;};
    inline string dashboardUsername() const { DARABONBA_PTR_GET_DEFAULT(dashboardUsername_, "") };
    inline CreateAppInstanceRequest& setDashboardUsername(string dashboardUsername) { DARABONBA_PTR_SET_VALUE(dashboardUsername_, dashboardUsername) };


    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string databasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline CreateAppInstanceRequest& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // initializeWithExistingData Field Functions 
    bool hasInitializeWithExistingData() const { return this->initializeWithExistingData_ != nullptr;};
    void deleteInitializeWithExistingData() { this->initializeWithExistingData_ = nullptr;};
    inline bool initializeWithExistingData() const { DARABONBA_PTR_GET_DEFAULT(initializeWithExistingData_, false) };
    inline CreateAppInstanceRequest& setInitializeWithExistingData(bool initializeWithExistingData) { DARABONBA_PTR_SET_VALUE(initializeWithExistingData_, initializeWithExistingData) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline CreateAppInstanceRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // publicEndpointEnabled Field Functions 
    bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
    void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
    inline bool publicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
    inline CreateAppInstanceRequest& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


    // publicNetworkAccessEnabled Field Functions 
    bool hasPublicNetworkAccessEnabled() const { return this->publicNetworkAccessEnabled_ != nullptr;};
    void deletePublicNetworkAccessEnabled() { this->publicNetworkAccessEnabled_ = nullptr;};
    inline bool publicNetworkAccessEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicNetworkAccessEnabled_, false) };
    inline CreateAppInstanceRequest& setPublicNetworkAccessEnabled(bool publicNetworkAccessEnabled) { DARABONBA_PTR_SET_VALUE(publicNetworkAccessEnabled_, publicNetworkAccessEnabled) };


    // RAGEnabled Field Functions 
    bool hasRAGEnabled() const { return this->RAGEnabled_ != nullptr;};
    void deleteRAGEnabled() { this->RAGEnabled_ = nullptr;};
    inline bool RAGEnabled() const { DARABONBA_PTR_GET_DEFAULT(RAGEnabled_, false) };
    inline CreateAppInstanceRequest& setRAGEnabled(bool RAGEnabled) { DARABONBA_PTR_SET_VALUE(RAGEnabled_, RAGEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAppInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAppInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<CreateAppInstanceRequestDBInstanceConfig> DBInstanceConfig_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> dashboardPassword_ = nullptr;
    std::shared_ptr<string> dashboardUsername_ = nullptr;
    std::shared_ptr<string> databasePassword_ = nullptr;
    std::shared_ptr<bool> initializeWithExistingData_ = nullptr;
    std::shared_ptr<string> instanceClass_ = nullptr;
    std::shared_ptr<bool> publicEndpointEnabled_ = nullptr;
    std::shared_ptr<bool> publicNetworkAccessEnabled_ = nullptr;
    std::shared_ptr<bool> RAGEnabled_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
