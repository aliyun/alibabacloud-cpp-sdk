// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYSERVICE_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYSERVICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceInstanceResponseBodyServiceServiceInfos.hpp>
#include <alibabacloud/models/GetServiceInstanceResponseBodyServiceUpgradableServiceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceResponseBodyService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBodyService& obj) { 
      DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(ServiceDocUrl, serviceDocUrl_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_TO_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(UpgradableServiceInfos, upgradableServiceInfos_);
      DARABONBA_PTR_TO_JSON(UpgradableServiceVersions, upgradableServiceVersions_);
      DARABONBA_PTR_TO_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBodyService& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(ServiceDocUrl, serviceDocUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(UpgradableServiceInfos, upgradableServiceInfos_);
      DARABONBA_PTR_FROM_JSON(UpgradableServiceVersions, upgradableServiceVersions_);
      DARABONBA_PTR_FROM_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    GetServiceInstanceResponseBodyService() = default ;
    GetServiceInstanceResponseBodyService(const GetServiceInstanceResponseBodyService &) = default ;
    GetServiceInstanceResponseBodyService(GetServiceInstanceResponseBodyService &&) = default ;
    GetServiceInstanceResponseBodyService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBodyService() = default ;
    GetServiceInstanceResponseBodyService& operator=(const GetServiceInstanceResponseBodyService &) = default ;
    GetServiceInstanceResponseBodyService& operator=(GetServiceInstanceResponseBodyService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deployMetadata_ != nullptr
        && this->deployType_ != nullptr && this->operationMetadata_ != nullptr && this->publishTime_ != nullptr && this->serviceDocUrl_ != nullptr && this->serviceId_ != nullptr
        && this->serviceInfos_ != nullptr && this->serviceProductUrl_ != nullptr && this->serviceType_ != nullptr && this->status_ != nullptr && this->supplierName_ != nullptr
        && this->supplierUrl_ != nullptr && this->upgradableServiceInfos_ != nullptr && this->upgradableServiceVersions_ != nullptr && this->upgradeMetadata_ != nullptr && this->version_ != nullptr
        && this->versionName_ != nullptr; };
    // deployMetadata Field Functions 
    bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
    void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
    inline string deployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
    inline GetServiceInstanceResponseBodyService& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline GetServiceInstanceResponseBodyService& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline string operationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
    inline GetServiceInstanceResponseBodyService& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline GetServiceInstanceResponseBodyService& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // serviceDocUrl Field Functions 
    bool hasServiceDocUrl() const { return this->serviceDocUrl_ != nullptr;};
    void deleteServiceDocUrl() { this->serviceDocUrl_ = nullptr;};
    inline string serviceDocUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceDocUrl_, "") };
    inline GetServiceInstanceResponseBodyService& setServiceDocUrl(string serviceDocUrl) { DARABONBA_PTR_SET_VALUE(serviceDocUrl_, serviceDocUrl) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceInstanceResponseBodyService& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfos Field Functions 
    bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
    void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
    inline const vector<Models::GetServiceInstanceResponseBodyServiceServiceInfos> & serviceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<Models::GetServiceInstanceResponseBodyServiceServiceInfos>) };
    inline vector<Models::GetServiceInstanceResponseBodyServiceServiceInfos> serviceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<Models::GetServiceInstanceResponseBodyServiceServiceInfos>) };
    inline GetServiceInstanceResponseBodyService& setServiceInfos(const vector<Models::GetServiceInstanceResponseBodyServiceServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
    inline GetServiceInstanceResponseBodyService& setServiceInfos(vector<Models::GetServiceInstanceResponseBodyServiceServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


    // serviceProductUrl Field Functions 
    bool hasServiceProductUrl() const { return this->serviceProductUrl_ != nullptr;};
    void deleteServiceProductUrl() { this->serviceProductUrl_ = nullptr;};
    inline string serviceProductUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceProductUrl_, "") };
    inline GetServiceInstanceResponseBodyService& setServiceProductUrl(string serviceProductUrl) { DARABONBA_PTR_SET_VALUE(serviceProductUrl_, serviceProductUrl) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceInstanceResponseBodyService& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceInstanceResponseBodyService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline GetServiceInstanceResponseBodyService& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline GetServiceInstanceResponseBodyService& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // upgradableServiceInfos Field Functions 
    bool hasUpgradableServiceInfos() const { return this->upgradableServiceInfos_ != nullptr;};
    void deleteUpgradableServiceInfos() { this->upgradableServiceInfos_ = nullptr;};
    inline const vector<Models::GetServiceInstanceResponseBodyServiceUpgradableServiceInfos> & upgradableServiceInfos() const { DARABONBA_PTR_GET_CONST(upgradableServiceInfos_, vector<Models::GetServiceInstanceResponseBodyServiceUpgradableServiceInfos>) };
    inline vector<Models::GetServiceInstanceResponseBodyServiceUpgradableServiceInfos> upgradableServiceInfos() { DARABONBA_PTR_GET(upgradableServiceInfos_, vector<Models::GetServiceInstanceResponseBodyServiceUpgradableServiceInfos>) };
    inline GetServiceInstanceResponseBodyService& setUpgradableServiceInfos(const vector<Models::GetServiceInstanceResponseBodyServiceUpgradableServiceInfos> & upgradableServiceInfos) { DARABONBA_PTR_SET_VALUE(upgradableServiceInfos_, upgradableServiceInfos) };
    inline GetServiceInstanceResponseBodyService& setUpgradableServiceInfos(vector<Models::GetServiceInstanceResponseBodyServiceUpgradableServiceInfos> && upgradableServiceInfos) { DARABONBA_PTR_SET_RVALUE(upgradableServiceInfos_, upgradableServiceInfos) };


    // upgradableServiceVersions Field Functions 
    bool hasUpgradableServiceVersions() const { return this->upgradableServiceVersions_ != nullptr;};
    void deleteUpgradableServiceVersions() { this->upgradableServiceVersions_ = nullptr;};
    inline const vector<string> & upgradableServiceVersions() const { DARABONBA_PTR_GET_CONST(upgradableServiceVersions_, vector<string>) };
    inline vector<string> upgradableServiceVersions() { DARABONBA_PTR_GET(upgradableServiceVersions_, vector<string>) };
    inline GetServiceInstanceResponseBodyService& setUpgradableServiceVersions(const vector<string> & upgradableServiceVersions) { DARABONBA_PTR_SET_VALUE(upgradableServiceVersions_, upgradableServiceVersions) };
    inline GetServiceInstanceResponseBodyService& setUpgradableServiceVersions(vector<string> && upgradableServiceVersions) { DARABONBA_PTR_SET_RVALUE(upgradableServiceVersions_, upgradableServiceVersions) };


    // upgradeMetadata Field Functions 
    bool hasUpgradeMetadata() const { return this->upgradeMetadata_ != nullptr;};
    void deleteUpgradeMetadata() { this->upgradeMetadata_ = nullptr;};
    inline string upgradeMetadata() const { DARABONBA_PTR_GET_DEFAULT(upgradeMetadata_, "") };
    inline GetServiceInstanceResponseBodyService& setUpgradeMetadata(string upgradeMetadata) { DARABONBA_PTR_SET_VALUE(upgradeMetadata_, upgradeMetadata) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceInstanceResponseBodyService& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetServiceInstanceResponseBodyService& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The storage configurations of the service. The format in which the deployment information of a service is stored varies based on the deployment type of the service. In this case, the deployment information is stored in the JSON string format.
    std::shared_ptr<string> deployMetadata_ = nullptr;
    // The deployment type of the service. Valid values:
    // 
    // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
    // *   terraform: The service is deployed by using Terraform.
    // *   ack: The service is deployed by using Container Service for Kubernetes (ACK).
    // *   spi: The service is deployed by calling a service provider interface (SPI).
    // *   operation: The service is deployed by using a hosted O\\&M service.
    std::shared_ptr<string> deployType_ = nullptr;
    // Parameters related to O\\&M operations, including configuration change, prometheus, and log configurations.
    std::shared_ptr<string> operationMetadata_ = nullptr;
    // The time when the service version was published.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The URL of the service documentation.
    std::shared_ptr<string> serviceDocUrl_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The information about the service.
    std::shared_ptr<vector<Models::GetServiceInstanceResponseBodyServiceServiceInfos>> serviceInfos_ = nullptr;
    // The URL of the service page.
    std::shared_ptr<string> serviceProductUrl_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   private: The service is a private service and is deployed within the account of a customer.
    // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
    // *   operation: The service is a hosted O\\&M service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The status of the service. Valid values:
    // 
    // *   Draft
    // *   Submited
    // *   Approved
    // *   Online
    // *   Offline
    // *   Deleted
    // *   Launching
    // *   Beta
    std::shared_ptr<string> status_ = nullptr;
    // The name of the service provider.
    std::shared_ptr<string> supplierName_ = nullptr;
    // The URL of the service provider.
    std::shared_ptr<string> supplierUrl_ = nullptr;
    // The service versions that can be updated.
    std::shared_ptr<vector<Models::GetServiceInstanceResponseBodyServiceUpgradableServiceInfos>> upgradableServiceInfos_ = nullptr;
    // The service version that can be updated.
    std::shared_ptr<vector<string>> upgradableServiceVersions_ = nullptr;
    // The metadata about the upgrade.
    std::shared_ptr<string> upgradeMetadata_ = nullptr;
    // The service version.
    std::shared_ptr<string> version_ = nullptr;
    // The custom version name defined by the service provider.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
