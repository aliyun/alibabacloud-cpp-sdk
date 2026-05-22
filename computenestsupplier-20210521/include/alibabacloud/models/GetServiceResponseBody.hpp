// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_TO_JSON(BuildInfo, buildInfo_);
      DARABONBA_PTR_TO_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(ComplianceMetadata, complianceMetadata_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossRegionConnectionStatus, crossRegionConnectionStatus_);
      DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EntitySource, entitySource_);
      DARABONBA_PTR_TO_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_TO_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_TO_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_TO_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_TO_JSON(PayFromType, payFromType_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resellable, resellable_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(ServiceAuditDocumentUrl, serviceAuditDocumentUrl_);
      DARABONBA_PTR_TO_JSON(ServiceDiscoverable, serviceDiscoverable_);
      DARABONBA_PTR_TO_JSON(ServiceDocumentInfos, serviceDocumentInfos_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_TO_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_TO_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(ShareTypeStatus, shareTypeStatus_);
      DARABONBA_PTR_TO_JSON(SourceServiceId, sourceServiceId_);
      DARABONBA_PTR_TO_JSON(SourceServiceVersion, sourceServiceVersion_);
      DARABONBA_PTR_TO_JSON(SourceSupplierName, sourceSupplierName_);
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_TO_JSON(SupportContacts, supportContacts_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(TestStatus, testStatus_);
      DARABONBA_PTR_TO_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      DARABONBA_PTR_TO_JSON(VirtualInternetService, virtualInternetService_);
      DARABONBA_PTR_TO_JSON(VirtualInternetServiceId, virtualInternetServiceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMetadata, alarmMetadata_);
      DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
      DARABONBA_PTR_FROM_JSON(BuildInfo, buildInfo_);
      DARABONBA_PTR_FROM_JSON(BuildParameters, buildParameters_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(ComplianceMetadata, complianceMetadata_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossRegionConnectionStatus, crossRegionConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EntitySource, entitySource_);
      DARABONBA_PTR_FROM_JSON(IsSupportOperated, isSupportOperated_);
      DARABONBA_PTR_FROM_JSON(LicenseMetadata, licenseMetadata_);
      DARABONBA_PTR_FROM_JSON(LogMetadata, logMetadata_);
      DARABONBA_PTR_FROM_JSON(OperationMetadata, operationMetadata_);
      DARABONBA_PTR_FROM_JSON(PayFromType, payFromType_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resellable, resellable_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(ServiceAuditDocumentUrl, serviceAuditDocumentUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceDiscoverable, serviceDiscoverable_);
      DARABONBA_PTR_FROM_JSON(ServiceDocumentInfos, serviceDocumentInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
      DARABONBA_PTR_FROM_JSON(ServiceLocaleConfigs, serviceLocaleConfigs_);
      DARABONBA_PTR_FROM_JSON(ServiceProductUrl, serviceProductUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(ShareTypeStatus, shareTypeStatus_);
      DARABONBA_PTR_FROM_JSON(SourceServiceId, sourceServiceId_);
      DARABONBA_PTR_FROM_JSON(SourceServiceVersion, sourceServiceVersion_);
      DARABONBA_PTR_FROM_JSON(SourceSupplierName, sourceSupplierName_);
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      DARABONBA_PTR_FROM_JSON(SupportContacts, supportContacts_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(TestStatus, testStatus_);
      DARABONBA_PTR_FROM_JSON(TrialDuration, trialDuration_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpgradeMetadata, upgradeMetadata_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      DARABONBA_PTR_FROM_JSON(VirtualInternetService, virtualInternetService_);
      DARABONBA_PTR_FROM_JSON(VirtualInternetServiceId, virtualInternetServiceId_);
    };
    GetServiceResponseBody() = default ;
    GetServiceResponseBody(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody(GetServiceResponseBody &&) = default ;
    GetServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBody() = default ;
    GetServiceResponseBody& operator=(const GetServiceResponseBody &) = default ;
    GetServiceResponseBody& operator=(GetServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class SupportContacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportContacts& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SupportContacts& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SupportContacts() = default ;
      SupportContacts(const SupportContacts &) = default ;
      SupportContacts(SupportContacts &&) = default ;
      SupportContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportContacts() = default ;
      SupportContacts& operator=(const SupportContacts &) = default ;
      SupportContacts& operator=(SupportContacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SupportContacts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SupportContacts& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The type of Contact information.
      shared_ptr<string> type_ {};
      // The value of Contact information.
      shared_ptr<string> value_ {};
    };

    class Statistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
        DARABONBA_PTR_TO_JSON(AccumulativeInstanceCount, accumulativeInstanceCount_);
        DARABONBA_PTR_TO_JSON(AccumulativePocAmount, accumulativePocAmount_);
        DARABONBA_PTR_TO_JSON(AccumulativeUserCount, accumulativeUserCount_);
        DARABONBA_PTR_TO_JSON(AveragePocAmount, averagePocAmount_);
        DARABONBA_PTR_TO_JSON(AveragePocDuration, averagePocDuration_);
        DARABONBA_PTR_TO_JSON(AveragePocUnitAmount, averagePocUnitAmount_);
        DARABONBA_PTR_TO_JSON(DeployedServiceInstanceCount, deployedServiceInstanceCount_);
        DARABONBA_PTR_TO_JSON(DeployedUserCount, deployedUserCount_);
        DARABONBA_PTR_TO_JSON(SubmittedUsageCount, submittedUsageCount_);
      };
      friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
        DARABONBA_PTR_FROM_JSON(AccumulativeInstanceCount, accumulativeInstanceCount_);
        DARABONBA_PTR_FROM_JSON(AccumulativePocAmount, accumulativePocAmount_);
        DARABONBA_PTR_FROM_JSON(AccumulativeUserCount, accumulativeUserCount_);
        DARABONBA_PTR_FROM_JSON(AveragePocAmount, averagePocAmount_);
        DARABONBA_PTR_FROM_JSON(AveragePocDuration, averagePocDuration_);
        DARABONBA_PTR_FROM_JSON(AveragePocUnitAmount, averagePocUnitAmount_);
        DARABONBA_PTR_FROM_JSON(DeployedServiceInstanceCount, deployedServiceInstanceCount_);
        DARABONBA_PTR_FROM_JSON(DeployedUserCount, deployedUserCount_);
        DARABONBA_PTR_FROM_JSON(SubmittedUsageCount, submittedUsageCount_);
      };
      Statistic() = default ;
      Statistic(const Statistic &) = default ;
      Statistic(Statistic &&) = default ;
      Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistic() = default ;
      Statistic& operator=(const Statistic &) = default ;
      Statistic& operator=(Statistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accumulativeInstanceCount_ == nullptr
        && this->accumulativePocAmount_ == nullptr && this->accumulativeUserCount_ == nullptr && this->averagePocAmount_ == nullptr && this->averagePocDuration_ == nullptr && this->averagePocUnitAmount_ == nullptr
        && this->deployedServiceInstanceCount_ == nullptr && this->deployedUserCount_ == nullptr && this->submittedUsageCount_ == nullptr; };
      // accumulativeInstanceCount Field Functions 
      bool hasAccumulativeInstanceCount() const { return this->accumulativeInstanceCount_ != nullptr;};
      void deleteAccumulativeInstanceCount() { this->accumulativeInstanceCount_ = nullptr;};
      inline int32_t getAccumulativeInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(accumulativeInstanceCount_, 0) };
      inline Statistic& setAccumulativeInstanceCount(int32_t accumulativeInstanceCount) { DARABONBA_PTR_SET_VALUE(accumulativeInstanceCount_, accumulativeInstanceCount) };


      // accumulativePocAmount Field Functions 
      bool hasAccumulativePocAmount() const { return this->accumulativePocAmount_ != nullptr;};
      void deleteAccumulativePocAmount() { this->accumulativePocAmount_ = nullptr;};
      inline double getAccumulativePocAmount() const { DARABONBA_PTR_GET_DEFAULT(accumulativePocAmount_, 0.0) };
      inline Statistic& setAccumulativePocAmount(double accumulativePocAmount) { DARABONBA_PTR_SET_VALUE(accumulativePocAmount_, accumulativePocAmount) };


      // accumulativeUserCount Field Functions 
      bool hasAccumulativeUserCount() const { return this->accumulativeUserCount_ != nullptr;};
      void deleteAccumulativeUserCount() { this->accumulativeUserCount_ = nullptr;};
      inline int32_t getAccumulativeUserCount() const { DARABONBA_PTR_GET_DEFAULT(accumulativeUserCount_, 0) };
      inline Statistic& setAccumulativeUserCount(int32_t accumulativeUserCount) { DARABONBA_PTR_SET_VALUE(accumulativeUserCount_, accumulativeUserCount) };


      // averagePocAmount Field Functions 
      bool hasAveragePocAmount() const { return this->averagePocAmount_ != nullptr;};
      void deleteAveragePocAmount() { this->averagePocAmount_ = nullptr;};
      inline double getAveragePocAmount() const { DARABONBA_PTR_GET_DEFAULT(averagePocAmount_, 0.0) };
      inline Statistic& setAveragePocAmount(double averagePocAmount) { DARABONBA_PTR_SET_VALUE(averagePocAmount_, averagePocAmount) };


      // averagePocDuration Field Functions 
      bool hasAveragePocDuration() const { return this->averagePocDuration_ != nullptr;};
      void deleteAveragePocDuration() { this->averagePocDuration_ = nullptr;};
      inline double getAveragePocDuration() const { DARABONBA_PTR_GET_DEFAULT(averagePocDuration_, 0.0) };
      inline Statistic& setAveragePocDuration(double averagePocDuration) { DARABONBA_PTR_SET_VALUE(averagePocDuration_, averagePocDuration) };


      // averagePocUnitAmount Field Functions 
      bool hasAveragePocUnitAmount() const { return this->averagePocUnitAmount_ != nullptr;};
      void deleteAveragePocUnitAmount() { this->averagePocUnitAmount_ = nullptr;};
      inline double getAveragePocUnitAmount() const { DARABONBA_PTR_GET_DEFAULT(averagePocUnitAmount_, 0.0) };
      inline Statistic& setAveragePocUnitAmount(double averagePocUnitAmount) { DARABONBA_PTR_SET_VALUE(averagePocUnitAmount_, averagePocUnitAmount) };


      // deployedServiceInstanceCount Field Functions 
      bool hasDeployedServiceInstanceCount() const { return this->deployedServiceInstanceCount_ != nullptr;};
      void deleteDeployedServiceInstanceCount() { this->deployedServiceInstanceCount_ = nullptr;};
      inline int32_t getDeployedServiceInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(deployedServiceInstanceCount_, 0) };
      inline Statistic& setDeployedServiceInstanceCount(int32_t deployedServiceInstanceCount) { DARABONBA_PTR_SET_VALUE(deployedServiceInstanceCount_, deployedServiceInstanceCount) };


      // deployedUserCount Field Functions 
      bool hasDeployedUserCount() const { return this->deployedUserCount_ != nullptr;};
      void deleteDeployedUserCount() { this->deployedUserCount_ = nullptr;};
      inline int32_t getDeployedUserCount() const { DARABONBA_PTR_GET_DEFAULT(deployedUserCount_, 0) };
      inline Statistic& setDeployedUserCount(int32_t deployedUserCount) { DARABONBA_PTR_SET_VALUE(deployedUserCount_, deployedUserCount) };


      // submittedUsageCount Field Functions 
      bool hasSubmittedUsageCount() const { return this->submittedUsageCount_ != nullptr;};
      void deleteSubmittedUsageCount() { this->submittedUsageCount_ = nullptr;};
      inline int32_t getSubmittedUsageCount() const { DARABONBA_PTR_GET_DEFAULT(submittedUsageCount_, 0) };
      inline Statistic& setSubmittedUsageCount(int32_t submittedUsageCount) { DARABONBA_PTR_SET_VALUE(submittedUsageCount_, submittedUsageCount) };


    protected:
      // The total number of service instances that belong to the service. The service instances that are deleted are counted.
      shared_ptr<int32_t> accumulativeInstanceCount_ {};
      // The total amount consumed for trial service instances. Unit: CNY.
      shared_ptr<double> accumulativePocAmount_ {};
      // The total number of users who use the service. The historical users are counted.
      shared_ptr<int32_t> accumulativeUserCount_ {};
      // The average amount consumed for trial service instances per instance. Unit: CNY.
      shared_ptr<double> averagePocAmount_ {};
      // The average duration for which trial service instances are in use. Unit: Hour.
      shared_ptr<double> averagePocDuration_ {};
      // The average amount consumed for trial service instances per a period of time. Unit: CNY.
      shared_ptr<double> averagePocUnitAmount_ {};
      // The number of online service instances. It means the number of service instances that are successfully deployed.
      shared_ptr<int32_t> deployedServiceInstanceCount_ {};
      // The number of online users. It means the number of users who successfully deployed the service instances.
      shared_ptr<int32_t> deployedUserCount_ {};
      // The number of service applications that are in the Submitted state.
      shared_ptr<int32_t> submittedUsageCount_ {};
    };

    class ServiceLocaleConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceLocaleConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(EnValue, enValue_);
        DARABONBA_PTR_TO_JSON(OriginalValue, originalValue_);
        DARABONBA_PTR_TO_JSON(ZhValue, zhValue_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceLocaleConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(EnValue, enValue_);
        DARABONBA_PTR_FROM_JSON(OriginalValue, originalValue_);
        DARABONBA_PTR_FROM_JSON(ZhValue, zhValue_);
      };
      ServiceLocaleConfigs() = default ;
      ServiceLocaleConfigs(const ServiceLocaleConfigs &) = default ;
      ServiceLocaleConfigs(ServiceLocaleConfigs &&) = default ;
      ServiceLocaleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceLocaleConfigs() = default ;
      ServiceLocaleConfigs& operator=(const ServiceLocaleConfigs &) = default ;
      ServiceLocaleConfigs& operator=(ServiceLocaleConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enValue_ == nullptr
        && this->originalValue_ == nullptr && this->zhValue_ == nullptr; };
      // enValue Field Functions 
      bool hasEnValue() const { return this->enValue_ != nullptr;};
      void deleteEnValue() { this->enValue_ = nullptr;};
      inline string getEnValue() const { DARABONBA_PTR_GET_DEFAULT(enValue_, "") };
      inline ServiceLocaleConfigs& setEnValue(string enValue) { DARABONBA_PTR_SET_VALUE(enValue_, enValue) };


      // originalValue Field Functions 
      bool hasOriginalValue() const { return this->originalValue_ != nullptr;};
      void deleteOriginalValue() { this->originalValue_ = nullptr;};
      inline string getOriginalValue() const { DARABONBA_PTR_GET_DEFAULT(originalValue_, "") };
      inline ServiceLocaleConfigs& setOriginalValue(string originalValue) { DARABONBA_PTR_SET_VALUE(originalValue_, originalValue) };


      // zhValue Field Functions 
      bool hasZhValue() const { return this->zhValue_ != nullptr;};
      void deleteZhValue() { this->zhValue_ = nullptr;};
      inline string getZhValue() const { DARABONBA_PTR_GET_DEFAULT(zhValue_, "") };
      inline ServiceLocaleConfigs& setZhValue(string zhValue) { DARABONBA_PTR_SET_VALUE(zhValue_, zhValue) };


    protected:
      shared_ptr<string> enValue_ {};
      shared_ptr<string> originalValue_ {};
      shared_ptr<string> zhValue_ {};
    };

    class ServiceInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Agreements, agreements_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(Locale, locale_);
        DARABONBA_PTR_TO_JSON(LongDescriptionUrl, longDescriptionUrl_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
        DARABONBA_PTR_TO_JSON(Softwares, softwares_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Agreements, agreements_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(Locale, locale_);
        DARABONBA_PTR_FROM_JSON(LongDescriptionUrl, longDescriptionUrl_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
        DARABONBA_PTR_FROM_JSON(Softwares, softwares_);
      };
      ServiceInfos() = default ;
      ServiceInfos(const ServiceInfos &) = default ;
      ServiceInfos(ServiceInfos &&) = default ;
      ServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceInfos() = default ;
      ServiceInfos& operator=(const ServiceInfos &) = default ;
      ServiceInfos& operator=(ServiceInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Softwares : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Softwares& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Softwares& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Softwares() = default ;
        Softwares(const Softwares &) = default ;
        Softwares(Softwares &&) = default ;
        Softwares(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Softwares() = default ;
        Softwares& operator=(const Softwares &) = default ;
        Softwares& operator=(Softwares &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->version_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Softwares& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Softwares& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the software
        shared_ptr<string> name_ {};
        // The version of the software.
        shared_ptr<string> version_ {};
      };

      class Agreements : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agreements& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Agreements& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Agreements() = default ;
        Agreements(const Agreements &) = default ;
        Agreements(Agreements &&) = default ;
        Agreements(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agreements() = default ;
        Agreements& operator=(const Agreements &) = default ;
        Agreements& operator=(Agreements &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->url_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Agreements& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Agreements& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The agreement name.
        shared_ptr<string> name_ {};
        // The agreement URL.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->agreements_ == nullptr
        && this->image_ == nullptr && this->locale_ == nullptr && this->longDescriptionUrl_ == nullptr && this->name_ == nullptr && this->shortDescription_ == nullptr
        && this->softwares_ == nullptr; };
      // agreements Field Functions 
      bool hasAgreements() const { return this->agreements_ != nullptr;};
      void deleteAgreements() { this->agreements_ = nullptr;};
      inline const vector<ServiceInfos::Agreements> & getAgreements() const { DARABONBA_PTR_GET_CONST(agreements_, vector<ServiceInfos::Agreements>) };
      inline vector<ServiceInfos::Agreements> getAgreements() { DARABONBA_PTR_GET(agreements_, vector<ServiceInfos::Agreements>) };
      inline ServiceInfos& setAgreements(const vector<ServiceInfos::Agreements> & agreements) { DARABONBA_PTR_SET_VALUE(agreements_, agreements) };
      inline ServiceInfos& setAgreements(vector<ServiceInfos::Agreements> && agreements) { DARABONBA_PTR_SET_RVALUE(agreements_, agreements) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline ServiceInfos& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // locale Field Functions 
      bool hasLocale() const { return this->locale_ != nullptr;};
      void deleteLocale() { this->locale_ = nullptr;};
      inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
      inline ServiceInfos& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


      // longDescriptionUrl Field Functions 
      bool hasLongDescriptionUrl() const { return this->longDescriptionUrl_ != nullptr;};
      void deleteLongDescriptionUrl() { this->longDescriptionUrl_ = nullptr;};
      inline string getLongDescriptionUrl() const { DARABONBA_PTR_GET_DEFAULT(longDescriptionUrl_, "") };
      inline ServiceInfos& setLongDescriptionUrl(string longDescriptionUrl) { DARABONBA_PTR_SET_VALUE(longDescriptionUrl_, longDescriptionUrl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ServiceInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // shortDescription Field Functions 
      bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
      void deleteShortDescription() { this->shortDescription_ = nullptr;};
      inline string getShortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
      inline ServiceInfos& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


      // softwares Field Functions 
      bool hasSoftwares() const { return this->softwares_ != nullptr;};
      void deleteSoftwares() { this->softwares_ = nullptr;};
      inline const vector<ServiceInfos::Softwares> & getSoftwares() const { DARABONBA_PTR_GET_CONST(softwares_, vector<ServiceInfos::Softwares>) };
      inline vector<ServiceInfos::Softwares> getSoftwares() { DARABONBA_PTR_GET(softwares_, vector<ServiceInfos::Softwares>) };
      inline ServiceInfos& setSoftwares(const vector<ServiceInfos::Softwares> & softwares) { DARABONBA_PTR_SET_VALUE(softwares_, softwares) };
      inline ServiceInfos& setSoftwares(vector<ServiceInfos::Softwares> && softwares) { DARABONBA_PTR_SET_RVALUE(softwares_, softwares) };


    protected:
      // The agreement information about the service.
      shared_ptr<vector<ServiceInfos::Agreements>> agreements_ {};
      // The URL of the service icon.
      shared_ptr<string> image_ {};
      // The language of the service. Valid values:
      // 
      // *   zh-CN: Chinese
      // *   en-US: English
      shared_ptr<string> locale_ {};
      // The URL of the detailed description of the service.
      shared_ptr<string> longDescriptionUrl_ {};
      // The service name.
      shared_ptr<string> name_ {};
      // The description of the service.
      shared_ptr<string> shortDescription_ {};
      // The list of the information about the software in the service.
      shared_ptr<vector<ServiceInfos::Softwares>> softwares_ {};
    };

    class ServiceDocumentInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceDocumentInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DocumentUrl, documentUrl_);
        DARABONBA_PTR_TO_JSON(Locale, locale_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceDocumentInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DocumentUrl, documentUrl_);
        DARABONBA_PTR_FROM_JSON(Locale, locale_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      ServiceDocumentInfos() = default ;
      ServiceDocumentInfos(const ServiceDocumentInfos &) = default ;
      ServiceDocumentInfos(ServiceDocumentInfos &&) = default ;
      ServiceDocumentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceDocumentInfos() = default ;
      ServiceDocumentInfos& operator=(const ServiceDocumentInfos &) = default ;
      ServiceDocumentInfos& operator=(ServiceDocumentInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->documentUrl_ == nullptr
        && this->locale_ == nullptr && this->templateName_ == nullptr; };
      // documentUrl Field Functions 
      bool hasDocumentUrl() const { return this->documentUrl_ != nullptr;};
      void deleteDocumentUrl() { this->documentUrl_ = nullptr;};
      inline string getDocumentUrl() const { DARABONBA_PTR_GET_DEFAULT(documentUrl_, "") };
      inline ServiceDocumentInfos& setDocumentUrl(string documentUrl) { DARABONBA_PTR_SET_VALUE(documentUrl_, documentUrl) };


      // locale Field Functions 
      bool hasLocale() const { return this->locale_ != nullptr;};
      void deleteLocale() { this->locale_ = nullptr;};
      inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
      inline ServiceDocumentInfos& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline ServiceDocumentInfos& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The URL that is used to access the document.
      shared_ptr<string> documentUrl_ {};
      // The language of the return data. Valid values: zh-CN and en-US.
      shared_ptr<string> locale_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
    };

    class ComplianceMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComplianceMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(CompliancePacks, compliancePacks_);
      };
      friend void from_json(const Darabonba::Json& j, ComplianceMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(CompliancePacks, compliancePacks_);
      };
      ComplianceMetadata() = default ;
      ComplianceMetadata(const ComplianceMetadata &) = default ;
      ComplianceMetadata(ComplianceMetadata &&) = default ;
      ComplianceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComplianceMetadata() = default ;
      ComplianceMetadata& operator=(const ComplianceMetadata &) = default ;
      ComplianceMetadata& operator=(ComplianceMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compliancePacks_ == nullptr; };
      // compliancePacks Field Functions 
      bool hasCompliancePacks() const { return this->compliancePacks_ != nullptr;};
      void deleteCompliancePacks() { this->compliancePacks_ = nullptr;};
      inline const vector<string> & getCompliancePacks() const { DARABONBA_PTR_GET_CONST(compliancePacks_, vector<string>) };
      inline vector<string> getCompliancePacks() { DARABONBA_PTR_GET(compliancePacks_, vector<string>) };
      inline ComplianceMetadata& setCompliancePacks(const vector<string> & compliancePacks) { DARABONBA_PTR_SET_VALUE(compliancePacks_, compliancePacks) };
      inline ComplianceMetadata& setCompliancePacks(vector<string> && compliancePacks) { DARABONBA_PTR_SET_RVALUE(compliancePacks_, compliancePacks) };


    protected:
      // The compliance package is selected.
      shared_ptr<vector<string>> compliancePacks_ {};
    };

    class Commodity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(Components, components_);
        DARABONBA_PTR_TO_JSON(CssMetadata, cssMetadata_);
        DARABONBA_PTR_TO_JSON(MarketplaceMetadata, marketplaceMetadata_);
        DARABONBA_PTR_TO_JSON(MeteringEntities, meteringEntities_);
        DARABONBA_PTR_TO_JSON(SaasBoostMetadata, saasBoostMetadata_);
        DARABONBA_PTR_TO_JSON(Specifications, specifications_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(Components, components_);
        DARABONBA_PTR_FROM_JSON(CssMetadata, cssMetadata_);
        DARABONBA_PTR_FROM_JSON(MarketplaceMetadata, marketplaceMetadata_);
        DARABONBA_PTR_FROM_JSON(MeteringEntities, meteringEntities_);
        DARABONBA_PTR_FROM_JSON(SaasBoostMetadata, saasBoostMetadata_);
        DARABONBA_PTR_FROM_JSON(Specifications, specifications_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Commodity() = default ;
      Commodity(const Commodity &) = default ;
      Commodity(Commodity &&) = default ;
      Commodity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commodity() = default ;
      Commodity& operator=(const Commodity &) = default ;
      Commodity& operator=(Commodity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Specifications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Specifications& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Times, times_);
        };
        friend void from_json(const Darabonba::Json& j, Specifications& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Times, times_);
        };
        Specifications() = default ;
        Specifications(const Specifications &) = default ;
        Specifications(Specifications &&) = default ;
        Specifications(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Specifications() = default ;
        Specifications& operator=(const Specifications &) = default ;
        Specifications& operator=(Specifications &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->times_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Specifications& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Specifications& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // times Field Functions 
        bool hasTimes() const { return this->times_ != nullptr;};
        void deleteTimes() { this->times_ = nullptr;};
        inline const vector<string> & getTimes() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
        inline vector<string> getTimes() { DARABONBA_PTR_GET(times_, vector<string>) };
        inline Specifications& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
        inline Specifications& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


      protected:
        // The commodity code.
        shared_ptr<string> code_ {};
        // The specification name.
        shared_ptr<string> name_ {};
        // The subscription duration. Unit: week or year.
        shared_ptr<vector<string>> times_ {};
      };

      class MeteringEntities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MeteringEntities& obj) { 
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, MeteringEntities& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        MeteringEntities() = default ;
        MeteringEntities(const MeteringEntities &) = default ;
        MeteringEntities(MeteringEntities &&) = default ;
        MeteringEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MeteringEntities() = default ;
        MeteringEntities& operator=(const MeteringEntities &) = default ;
        MeteringEntities& operator=(MeteringEntities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->name_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline MeteringEntities& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MeteringEntities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the billable item.
        shared_ptr<string> entityId_ {};
        // The name of the billable item.
        shared_ptr<string> name_ {};
      };

      class MarketplaceMetadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MarketplaceMetadata& obj) { 
          DARABONBA_PTR_TO_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
          DARABONBA_PTR_TO_JSON(MeteringEntityMappings, meteringEntityMappings_);
          DARABONBA_PTR_TO_JSON(SpecificationMappings, specificationMappings_);
        };
        friend void from_json(const Darabonba::Json& j, MarketplaceMetadata& obj) { 
          DARABONBA_PTR_FROM_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
          DARABONBA_PTR_FROM_JSON(MeteringEntityMappings, meteringEntityMappings_);
          DARABONBA_PTR_FROM_JSON(SpecificationMappings, specificationMappings_);
        };
        MarketplaceMetadata() = default ;
        MarketplaceMetadata(const MarketplaceMetadata &) = default ;
        MarketplaceMetadata(MarketplaceMetadata &&) = default ;
        MarketplaceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MarketplaceMetadata() = default ;
        MarketplaceMetadata& operator=(const MarketplaceMetadata &) = default ;
        MarketplaceMetadata& operator=(MarketplaceMetadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SpecificationMappings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SpecificationMappings& obj) { 
            DARABONBA_PTR_TO_JSON(SpecificationCode, specificationCode_);
            DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
            DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
            DARABONBA_PTR_TO_JSON(TrialType, trialType_);
          };
          friend void from_json(const Darabonba::Json& j, SpecificationMappings& obj) { 
            DARABONBA_PTR_FROM_JSON(SpecificationCode, specificationCode_);
            DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
            DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
            DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
          };
          SpecificationMappings() = default ;
          SpecificationMappings(const SpecificationMappings &) = default ;
          SpecificationMappings(SpecificationMappings &&) = default ;
          SpecificationMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SpecificationMappings() = default ;
          SpecificationMappings& operator=(const SpecificationMappings &) = default ;
          SpecificationMappings& operator=(SpecificationMappings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->specificationCode_ == nullptr
        && this->specificationName_ == nullptr && this->templateName_ == nullptr && this->trialType_ == nullptr; };
          // specificationCode Field Functions 
          bool hasSpecificationCode() const { return this->specificationCode_ != nullptr;};
          void deleteSpecificationCode() { this->specificationCode_ = nullptr;};
          inline string getSpecificationCode() const { DARABONBA_PTR_GET_DEFAULT(specificationCode_, "") };
          inline SpecificationMappings& setSpecificationCode(string specificationCode) { DARABONBA_PTR_SET_VALUE(specificationCode_, specificationCode) };


          // specificationName Field Functions 
          bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
          void deleteSpecificationName() { this->specificationName_ = nullptr;};
          inline string getSpecificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
          inline SpecificationMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


          // templateName Field Functions 
          bool hasTemplateName() const { return this->templateName_ != nullptr;};
          void deleteTemplateName() { this->templateName_ = nullptr;};
          inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
          inline SpecificationMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


          // trialType Field Functions 
          bool hasTrialType() const { return this->trialType_ != nullptr;};
          void deleteTrialType() { this->trialType_ = nullptr;};
          inline string getTrialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
          inline SpecificationMappings& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


        protected:
          // The specification code of the service in Alibaba Cloud Marketplace.
          shared_ptr<string> specificationCode_ {};
          // The name of the specification package.
          shared_ptr<string> specificationName_ {};
          // The template name.
          shared_ptr<string> templateName_ {};
          // The trial policy. Valid values:
          // 
          // *   Trial: Trials are supported.
          // *   NotTrial: Trials are not supported.
          shared_ptr<string> trialType_ {};
        };

        class MeteringEntityMappings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MeteringEntityMappings& obj) { 
            DARABONBA_PTR_TO_JSON(EntityIds, entityIds_);
            DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
            DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          };
          friend void from_json(const Darabonba::Json& j, MeteringEntityMappings& obj) { 
            DARABONBA_PTR_FROM_JSON(EntityIds, entityIds_);
            DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
            DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          };
          MeteringEntityMappings() = default ;
          MeteringEntityMappings(const MeteringEntityMappings &) = default ;
          MeteringEntityMappings(MeteringEntityMappings &&) = default ;
          MeteringEntityMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MeteringEntityMappings() = default ;
          MeteringEntityMappings& operator=(const MeteringEntityMappings &) = default ;
          MeteringEntityMappings& operator=(MeteringEntityMappings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entityIds_ == nullptr
        && this->specificationName_ == nullptr && this->templateName_ == nullptr; };
          // entityIds Field Functions 
          bool hasEntityIds() const { return this->entityIds_ != nullptr;};
          void deleteEntityIds() { this->entityIds_ = nullptr;};
          inline string getEntityIds() const { DARABONBA_PTR_GET_DEFAULT(entityIds_, "") };
          inline MeteringEntityMappings& setEntityIds(string entityIds) { DARABONBA_PTR_SET_VALUE(entityIds_, entityIds) };


          // specificationName Field Functions 
          bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
          void deleteSpecificationName() { this->specificationName_ = nullptr;};
          inline string getSpecificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
          inline MeteringEntityMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


          // templateName Field Functions 
          bool hasTemplateName() const { return this->templateName_ != nullptr;};
          void deleteTemplateName() { this->templateName_ = nullptr;};
          inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
          inline MeteringEntityMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        protected:
          // The ID of the billable item.
          shared_ptr<string> entityIds_ {};
          // The name of the specification package.
          shared_ptr<string> specificationName_ {};
          // The template name.
          shared_ptr<string> templateName_ {};
        };

        class MeteringEntityExtraInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MeteringEntityExtraInfos& obj) { 
            DARABONBA_PTR_TO_JSON(EntityId, entityId_);
            DARABONBA_PTR_TO_JSON(MetricName, metricName_);
            DARABONBA_PTR_TO_JSON(Promql, promql_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, MeteringEntityExtraInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
            DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
            DARABONBA_PTR_FROM_JSON(Promql, promql_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          MeteringEntityExtraInfos() = default ;
          MeteringEntityExtraInfos(const MeteringEntityExtraInfos &) = default ;
          MeteringEntityExtraInfos(MeteringEntityExtraInfos &&) = default ;
          MeteringEntityExtraInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MeteringEntityExtraInfos() = default ;
          MeteringEntityExtraInfos& operator=(const MeteringEntityExtraInfos &) = default ;
          MeteringEntityExtraInfos& operator=(MeteringEntityExtraInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entityId_ == nullptr
        && this->metricName_ == nullptr && this->promql_ == nullptr && this->type_ == nullptr; };
          // entityId Field Functions 
          bool hasEntityId() const { return this->entityId_ != nullptr;};
          void deleteEntityId() { this->entityId_ = nullptr;};
          inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
          inline MeteringEntityExtraInfos& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


          // metricName Field Functions 
          bool hasMetricName() const { return this->metricName_ != nullptr;};
          void deleteMetricName() { this->metricName_ = nullptr;};
          inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
          inline MeteringEntityExtraInfos& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


          // promql Field Functions 
          bool hasPromql() const { return this->promql_ != nullptr;};
          void deletePromql() { this->promql_ = nullptr;};
          inline string getPromql() const { DARABONBA_PTR_GET_DEFAULT(promql_, "") };
          inline MeteringEntityExtraInfos& setPromql(string promql) { DARABONBA_PTR_SET_VALUE(promql_, promql) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline MeteringEntityExtraInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The ID of the billable item.
          shared_ptr<string> entityId_ {};
          // The metric name.
          shared_ptr<string> metricName_ {};
          // The custom prometheus statement.
          shared_ptr<string> promql_ {};
          // The metric.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->meteringEntityExtraInfos_ == nullptr
        && this->meteringEntityMappings_ == nullptr && this->specificationMappings_ == nullptr; };
        // meteringEntityExtraInfos Field Functions 
        bool hasMeteringEntityExtraInfos() const { return this->meteringEntityExtraInfos_ != nullptr;};
        void deleteMeteringEntityExtraInfos() { this->meteringEntityExtraInfos_ = nullptr;};
        inline const vector<MarketplaceMetadata::MeteringEntityExtraInfos> & getMeteringEntityExtraInfos() const { DARABONBA_PTR_GET_CONST(meteringEntityExtraInfos_, vector<MarketplaceMetadata::MeteringEntityExtraInfos>) };
        inline vector<MarketplaceMetadata::MeteringEntityExtraInfos> getMeteringEntityExtraInfos() { DARABONBA_PTR_GET(meteringEntityExtraInfos_, vector<MarketplaceMetadata::MeteringEntityExtraInfos>) };
        inline MarketplaceMetadata& setMeteringEntityExtraInfos(const vector<MarketplaceMetadata::MeteringEntityExtraInfos> & meteringEntityExtraInfos) { DARABONBA_PTR_SET_VALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };
        inline MarketplaceMetadata& setMeteringEntityExtraInfos(vector<MarketplaceMetadata::MeteringEntityExtraInfos> && meteringEntityExtraInfos) { DARABONBA_PTR_SET_RVALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };


        // meteringEntityMappings Field Functions 
        bool hasMeteringEntityMappings() const { return this->meteringEntityMappings_ != nullptr;};
        void deleteMeteringEntityMappings() { this->meteringEntityMappings_ = nullptr;};
        inline const vector<MarketplaceMetadata::MeteringEntityMappings> & getMeteringEntityMappings() const { DARABONBA_PTR_GET_CONST(meteringEntityMappings_, vector<MarketplaceMetadata::MeteringEntityMappings>) };
        inline vector<MarketplaceMetadata::MeteringEntityMappings> getMeteringEntityMappings() { DARABONBA_PTR_GET(meteringEntityMappings_, vector<MarketplaceMetadata::MeteringEntityMappings>) };
        inline MarketplaceMetadata& setMeteringEntityMappings(const vector<MarketplaceMetadata::MeteringEntityMappings> & meteringEntityMappings) { DARABONBA_PTR_SET_VALUE(meteringEntityMappings_, meteringEntityMappings) };
        inline MarketplaceMetadata& setMeteringEntityMappings(vector<MarketplaceMetadata::MeteringEntityMappings> && meteringEntityMappings) { DARABONBA_PTR_SET_RVALUE(meteringEntityMappings_, meteringEntityMappings) };


        // specificationMappings Field Functions 
        bool hasSpecificationMappings() const { return this->specificationMappings_ != nullptr;};
        void deleteSpecificationMappings() { this->specificationMappings_ = nullptr;};
        inline const vector<MarketplaceMetadata::SpecificationMappings> & getSpecificationMappings() const { DARABONBA_PTR_GET_CONST(specificationMappings_, vector<MarketplaceMetadata::SpecificationMappings>) };
        inline vector<MarketplaceMetadata::SpecificationMappings> getSpecificationMappings() { DARABONBA_PTR_GET(specificationMappings_, vector<MarketplaceMetadata::SpecificationMappings>) };
        inline MarketplaceMetadata& setSpecificationMappings(const vector<MarketplaceMetadata::SpecificationMappings> & specificationMappings) { DARABONBA_PTR_SET_VALUE(specificationMappings_, specificationMappings) };
        inline MarketplaceMetadata& setSpecificationMappings(vector<MarketplaceMetadata::SpecificationMappings> && specificationMappings) { DARABONBA_PTR_SET_RVALUE(specificationMappings_, specificationMappings) };


      protected:
        // The configurations of the billable items.
        shared_ptr<vector<MarketplaceMetadata::MeteringEntityExtraInfos>> meteringEntityExtraInfos_ {};
        // The billable items that are associated with the package.
        shared_ptr<vector<MarketplaceMetadata::MeteringEntityMappings>> meteringEntityMappings_ {};
        // The mappings between the service specifications and the template or package.
        shared_ptr<vector<MarketplaceMetadata::SpecificationMappings>> specificationMappings_ {};
      };

      class CssMetadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CssMetadata& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentsMappings, componentsMappings_);
          DARABONBA_PTR_TO_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
          DARABONBA_PTR_TO_JSON(MeteringEntityMappings, meteringEntityMappings_);
        };
        friend void from_json(const Darabonba::Json& j, CssMetadata& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentsMappings, componentsMappings_);
          DARABONBA_PTR_FROM_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
          DARABONBA_PTR_FROM_JSON(MeteringEntityMappings, meteringEntityMappings_);
        };
        CssMetadata() = default ;
        CssMetadata(const CssMetadata &) = default ;
        CssMetadata(CssMetadata &&) = default ;
        CssMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CssMetadata() = default ;
        CssMetadata& operator=(const CssMetadata &) = default ;
        CssMetadata& operator=(CssMetadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MeteringEntityMappings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MeteringEntityMappings& obj) { 
            DARABONBA_PTR_TO_JSON(EntityIds, entityIds_);
            DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
            DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          };
          friend void from_json(const Darabonba::Json& j, MeteringEntityMappings& obj) { 
            DARABONBA_PTR_FROM_JSON(EntityIds, entityIds_);
            DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
            DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          };
          MeteringEntityMappings() = default ;
          MeteringEntityMappings(const MeteringEntityMappings &) = default ;
          MeteringEntityMappings(MeteringEntityMappings &&) = default ;
          MeteringEntityMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MeteringEntityMappings() = default ;
          MeteringEntityMappings& operator=(const MeteringEntityMappings &) = default ;
          MeteringEntityMappings& operator=(MeteringEntityMappings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entityIds_ == nullptr
        && this->specificationName_ == nullptr && this->templateName_ == nullptr; };
          // entityIds Field Functions 
          bool hasEntityIds() const { return this->entityIds_ != nullptr;};
          void deleteEntityIds() { this->entityIds_ = nullptr;};
          inline string getEntityIds() const { DARABONBA_PTR_GET_DEFAULT(entityIds_, "") };
          inline MeteringEntityMappings& setEntityIds(string entityIds) { DARABONBA_PTR_SET_VALUE(entityIds_, entityIds) };


          // specificationName Field Functions 
          bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
          void deleteSpecificationName() { this->specificationName_ = nullptr;};
          inline string getSpecificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
          inline MeteringEntityMappings& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


          // templateName Field Functions 
          bool hasTemplateName() const { return this->templateName_ != nullptr;};
          void deleteTemplateName() { this->templateName_ = nullptr;};
          inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
          inline MeteringEntityMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        protected:
          // The ID of the entity.
          shared_ptr<string> entityIds_ {};
          // The package name.
          shared_ptr<string> specificationName_ {};
          // The template name.
          shared_ptr<string> templateName_ {};
        };

        class MeteringEntityExtraInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MeteringEntityExtraInfos& obj) { 
            DARABONBA_PTR_TO_JSON(EntityId, entityId_);
            DARABONBA_PTR_TO_JSON(MetricName, metricName_);
            DARABONBA_PTR_TO_JSON(Promql, promql_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, MeteringEntityExtraInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
            DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
            DARABONBA_PTR_FROM_JSON(Promql, promql_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          MeteringEntityExtraInfos() = default ;
          MeteringEntityExtraInfos(const MeteringEntityExtraInfos &) = default ;
          MeteringEntityExtraInfos(MeteringEntityExtraInfos &&) = default ;
          MeteringEntityExtraInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MeteringEntityExtraInfos() = default ;
          MeteringEntityExtraInfos& operator=(const MeteringEntityExtraInfos &) = default ;
          MeteringEntityExtraInfos& operator=(MeteringEntityExtraInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entityId_ == nullptr
        && this->metricName_ == nullptr && this->promql_ == nullptr && this->type_ == nullptr; };
          // entityId Field Functions 
          bool hasEntityId() const { return this->entityId_ != nullptr;};
          void deleteEntityId() { this->entityId_ = nullptr;};
          inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
          inline MeteringEntityExtraInfos& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


          // metricName Field Functions 
          bool hasMetricName() const { return this->metricName_ != nullptr;};
          void deleteMetricName() { this->metricName_ = nullptr;};
          inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
          inline MeteringEntityExtraInfos& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


          // promql Field Functions 
          bool hasPromql() const { return this->promql_ != nullptr;};
          void deletePromql() { this->promql_ = nullptr;};
          inline string getPromql() const { DARABONBA_PTR_GET_DEFAULT(promql_, "") };
          inline MeteringEntityExtraInfos& setPromql(string promql) { DARABONBA_PTR_SET_VALUE(promql_, promql) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline MeteringEntityExtraInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The ID of the entity.
          shared_ptr<string> entityId_ {};
          // Name of a measurement indicator.
          shared_ptr<string> metricName_ {};
          // Custom PromQL.
          shared_ptr<string> promql_ {};
          // Measurement indicators.
          shared_ptr<string> type_ {};
        };

        class ComponentsMappings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ComponentsMappings& obj) { 
            DARABONBA_PTR_TO_JSON(Mappings, mappings_);
            DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          };
          friend void from_json(const Darabonba::Json& j, ComponentsMappings& obj) { 
            DARABONBA_PTR_FROM_JSON(Mappings, mappings_);
            DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          };
          ComponentsMappings() = default ;
          ComponentsMappings(const ComponentsMappings &) = default ;
          ComponentsMappings(ComponentsMappings &&) = default ;
          ComponentsMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ComponentsMappings() = default ;
          ComponentsMappings& operator=(const ComponentsMappings &) = default ;
          ComponentsMappings& operator=(ComponentsMappings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mappings_ == nullptr
        && this->templateName_ == nullptr; };
          // mappings Field Functions 
          bool hasMappings() const { return this->mappings_ != nullptr;};
          void deleteMappings() { this->mappings_ = nullptr;};
          inline const map<string, string> & getMappings() const { DARABONBA_PTR_GET_CONST(mappings_, map<string, string>) };
          inline map<string, string> getMappings() { DARABONBA_PTR_GET(mappings_, map<string, string>) };
          inline ComponentsMappings& setMappings(const map<string, string> & mappings) { DARABONBA_PTR_SET_VALUE(mappings_, mappings) };
          inline ComponentsMappings& setMappings(map<string, string> && mappings) { DARABONBA_PTR_SET_RVALUE(mappings_, mappings) };


          // templateName Field Functions 
          bool hasTemplateName() const { return this->templateName_ != nullptr;};
          void deleteTemplateName() { this->templateName_ = nullptr;};
          inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
          inline ComponentsMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        protected:
          // The mappings.
          shared_ptr<map<string, string>> mappings_ {};
          // The template name.
          shared_ptr<string> templateName_ {};
        };

        virtual bool empty() const override { return this->componentsMappings_ == nullptr
        && this->meteringEntityExtraInfos_ == nullptr && this->meteringEntityMappings_ == nullptr; };
        // componentsMappings Field Functions 
        bool hasComponentsMappings() const { return this->componentsMappings_ != nullptr;};
        void deleteComponentsMappings() { this->componentsMappings_ = nullptr;};
        inline const vector<CssMetadata::ComponentsMappings> & getComponentsMappings() const { DARABONBA_PTR_GET_CONST(componentsMappings_, vector<CssMetadata::ComponentsMappings>) };
        inline vector<CssMetadata::ComponentsMappings> getComponentsMappings() { DARABONBA_PTR_GET(componentsMappings_, vector<CssMetadata::ComponentsMappings>) };
        inline CssMetadata& setComponentsMappings(const vector<CssMetadata::ComponentsMappings> & componentsMappings) { DARABONBA_PTR_SET_VALUE(componentsMappings_, componentsMappings) };
        inline CssMetadata& setComponentsMappings(vector<CssMetadata::ComponentsMappings> && componentsMappings) { DARABONBA_PTR_SET_RVALUE(componentsMappings_, componentsMappings) };


        // meteringEntityExtraInfos Field Functions 
        bool hasMeteringEntityExtraInfos() const { return this->meteringEntityExtraInfos_ != nullptr;};
        void deleteMeteringEntityExtraInfos() { this->meteringEntityExtraInfos_ = nullptr;};
        inline const vector<CssMetadata::MeteringEntityExtraInfos> & getMeteringEntityExtraInfos() const { DARABONBA_PTR_GET_CONST(meteringEntityExtraInfos_, vector<CssMetadata::MeteringEntityExtraInfos>) };
        inline vector<CssMetadata::MeteringEntityExtraInfos> getMeteringEntityExtraInfos() { DARABONBA_PTR_GET(meteringEntityExtraInfos_, vector<CssMetadata::MeteringEntityExtraInfos>) };
        inline CssMetadata& setMeteringEntityExtraInfos(const vector<CssMetadata::MeteringEntityExtraInfos> & meteringEntityExtraInfos) { DARABONBA_PTR_SET_VALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };
        inline CssMetadata& setMeteringEntityExtraInfos(vector<CssMetadata::MeteringEntityExtraInfos> && meteringEntityExtraInfos) { DARABONBA_PTR_SET_RVALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };


        // meteringEntityMappings Field Functions 
        bool hasMeteringEntityMappings() const { return this->meteringEntityMappings_ != nullptr;};
        void deleteMeteringEntityMappings() { this->meteringEntityMappings_ = nullptr;};
        inline const vector<CssMetadata::MeteringEntityMappings> & getMeteringEntityMappings() const { DARABONBA_PTR_GET_CONST(meteringEntityMappings_, vector<CssMetadata::MeteringEntityMappings>) };
        inline vector<CssMetadata::MeteringEntityMappings> getMeteringEntityMappings() { DARABONBA_PTR_GET(meteringEntityMappings_, vector<CssMetadata::MeteringEntityMappings>) };
        inline CssMetadata& setMeteringEntityMappings(const vector<CssMetadata::MeteringEntityMappings> & meteringEntityMappings) { DARABONBA_PTR_SET_VALUE(meteringEntityMappings_, meteringEntityMappings) };
        inline CssMetadata& setMeteringEntityMappings(vector<CssMetadata::MeteringEntityMappings> && meteringEntityMappings) { DARABONBA_PTR_SET_RVALUE(meteringEntityMappings_, meteringEntityMappings) };


      protected:
        // The mapping information about the billing items.
        shared_ptr<vector<CssMetadata::ComponentsMappings>> componentsMappings_ {};
        // Metering item configuration information.
        shared_ptr<vector<CssMetadata::MeteringEntityExtraInfos>> meteringEntityExtraInfos_ {};
        // The binding relationship between package and measurement dimension.
        shared_ptr<vector<CssMetadata::MeteringEntityMappings>> meteringEntityMappings_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->commodityCode_ == nullptr && this->components_ == nullptr && this->cssMetadata_ == nullptr && this->marketplaceMetadata_ == nullptr && this->meteringEntities_ == nullptr
        && this->saasBoostMetadata_ == nullptr && this->specifications_ == nullptr && this->type_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Commodity& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Commodity& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // components Field Functions 
      bool hasComponents() const { return this->components_ != nullptr;};
      void deleteComponents() { this->components_ = nullptr;};
      inline const vector<string> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<string>) };
      inline vector<string> getComponents() { DARABONBA_PTR_GET(components_, vector<string>) };
      inline Commodity& setComponents(const vector<string> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
      inline Commodity& setComponents(vector<string> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


      // cssMetadata Field Functions 
      bool hasCssMetadata() const { return this->cssMetadata_ != nullptr;};
      void deleteCssMetadata() { this->cssMetadata_ = nullptr;};
      inline const Commodity::CssMetadata & getCssMetadata() const { DARABONBA_PTR_GET_CONST(cssMetadata_, Commodity::CssMetadata) };
      inline Commodity::CssMetadata getCssMetadata() { DARABONBA_PTR_GET(cssMetadata_, Commodity::CssMetadata) };
      inline Commodity& setCssMetadata(const Commodity::CssMetadata & cssMetadata) { DARABONBA_PTR_SET_VALUE(cssMetadata_, cssMetadata) };
      inline Commodity& setCssMetadata(Commodity::CssMetadata && cssMetadata) { DARABONBA_PTR_SET_RVALUE(cssMetadata_, cssMetadata) };


      // marketplaceMetadata Field Functions 
      bool hasMarketplaceMetadata() const { return this->marketplaceMetadata_ != nullptr;};
      void deleteMarketplaceMetadata() { this->marketplaceMetadata_ = nullptr;};
      inline const Commodity::MarketplaceMetadata & getMarketplaceMetadata() const { DARABONBA_PTR_GET_CONST(marketplaceMetadata_, Commodity::MarketplaceMetadata) };
      inline Commodity::MarketplaceMetadata getMarketplaceMetadata() { DARABONBA_PTR_GET(marketplaceMetadata_, Commodity::MarketplaceMetadata) };
      inline Commodity& setMarketplaceMetadata(const Commodity::MarketplaceMetadata & marketplaceMetadata) { DARABONBA_PTR_SET_VALUE(marketplaceMetadata_, marketplaceMetadata) };
      inline Commodity& setMarketplaceMetadata(Commodity::MarketplaceMetadata && marketplaceMetadata) { DARABONBA_PTR_SET_RVALUE(marketplaceMetadata_, marketplaceMetadata) };


      // meteringEntities Field Functions 
      bool hasMeteringEntities() const { return this->meteringEntities_ != nullptr;};
      void deleteMeteringEntities() { this->meteringEntities_ = nullptr;};
      inline const vector<Commodity::MeteringEntities> & getMeteringEntities() const { DARABONBA_PTR_GET_CONST(meteringEntities_, vector<Commodity::MeteringEntities>) };
      inline vector<Commodity::MeteringEntities> getMeteringEntities() { DARABONBA_PTR_GET(meteringEntities_, vector<Commodity::MeteringEntities>) };
      inline Commodity& setMeteringEntities(const vector<Commodity::MeteringEntities> & meteringEntities) { DARABONBA_PTR_SET_VALUE(meteringEntities_, meteringEntities) };
      inline Commodity& setMeteringEntities(vector<Commodity::MeteringEntities> && meteringEntities) { DARABONBA_PTR_SET_RVALUE(meteringEntities_, meteringEntities) };


      // saasBoostMetadata Field Functions 
      bool hasSaasBoostMetadata() const { return this->saasBoostMetadata_ != nullptr;};
      void deleteSaasBoostMetadata() { this->saasBoostMetadata_ = nullptr;};
      inline string getSaasBoostMetadata() const { DARABONBA_PTR_GET_DEFAULT(saasBoostMetadata_, "") };
      inline Commodity& setSaasBoostMetadata(string saasBoostMetadata) { DARABONBA_PTR_SET_VALUE(saasBoostMetadata_, saasBoostMetadata) };


      // specifications Field Functions 
      bool hasSpecifications() const { return this->specifications_ != nullptr;};
      void deleteSpecifications() { this->specifications_ = nullptr;};
      inline const vector<Commodity::Specifications> & getSpecifications() const { DARABONBA_PTR_GET_CONST(specifications_, vector<Commodity::Specifications>) };
      inline vector<Commodity::Specifications> getSpecifications() { DARABONBA_PTR_GET(specifications_, vector<Commodity::Specifications>) };
      inline Commodity& setSpecifications(const vector<Commodity::Specifications> & specifications) { DARABONBA_PTR_SET_VALUE(specifications_, specifications) };
      inline Commodity& setSpecifications(vector<Commodity::Specifications> && specifications) { DARABONBA_PTR_SET_RVALUE(specifications_, specifications) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Commodity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The billing method of the service. Valid values:
      // 
      // *   **PREPAY** (default): subscription.
      // *   **POSTPAY**: pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The commodity code of the service in Alibaba Cloud Marketplace.
      shared_ptr<string> commodityCode_ {};
      // The commodity modules.
      shared_ptr<vector<string>> components_ {};
      // The configuration metadata related to Lingxiao.
      shared_ptr<Commodity::CssMetadata> cssMetadata_ {};
      // The metadata of Alibaba Cloud Marketplace.
      shared_ptr<Commodity::MarketplaceMetadata> marketplaceMetadata_ {};
      // The information about the billable item.
      shared_ptr<vector<Commodity::MeteringEntities>> meteringEntities_ {};
      // The configuration metadata related to Saas Boost.
      shared_ptr<string> saasBoostMetadata_ {};
      // The specification details of the service in Alibaba Cloud Marketplace.
      shared_ptr<vector<Commodity::Specifications>> specifications_ {};
      // The service type. Valid values:
      // 
      // *   marketplace: Alibaba Cloud Marketplace.
      // *   Css: Lingxiao.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->alarmMetadata_ == nullptr
        && this->approvalType_ == nullptr && this->buildInfo_ == nullptr && this->buildParameters_ == nullptr && this->categories_ == nullptr && this->commodity_ == nullptr
        && this->complianceMetadata_ == nullptr && this->createTime_ == nullptr && this->crossRegionConnectionStatus_ == nullptr && this->deployMetadata_ == nullptr && this->deployType_ == nullptr
        && this->duration_ == nullptr && this->entitySource_ == nullptr && this->isSupportOperated_ == nullptr && this->licenseMetadata_ == nullptr && this->logMetadata_ == nullptr
        && this->operationMetadata_ == nullptr && this->payFromType_ == nullptr && this->permission_ == nullptr && this->policyNames_ == nullptr && this->progress_ == nullptr
        && this->publishTime_ == nullptr && this->registrationId_ == nullptr && this->requestId_ == nullptr && this->resellable_ == nullptr && this->resourceGroupId_ == nullptr
        && this->secretKey_ == nullptr && this->serviceAuditDocumentUrl_ == nullptr && this->serviceDiscoverable_ == nullptr && this->serviceDocumentInfos_ == nullptr && this->serviceId_ == nullptr
        && this->serviceInfos_ == nullptr && this->serviceLocaleConfigs_ == nullptr && this->serviceProductUrl_ == nullptr && this->serviceType_ == nullptr && this->shareType_ == nullptr
        && this->shareTypeStatus_ == nullptr && this->sourceServiceId_ == nullptr && this->sourceServiceVersion_ == nullptr && this->sourceSupplierName_ == nullptr && this->statistic_ == nullptr
        && this->status_ == nullptr && this->statusDetail_ == nullptr && this->supplierName_ == nullptr && this->supplierUrl_ == nullptr && this->supportContacts_ == nullptr
        && this->tags_ == nullptr && this->tenantType_ == nullptr && this->testStatus_ == nullptr && this->trialDuration_ == nullptr && this->trialType_ == nullptr
        && this->updateTime_ == nullptr && this->upgradeMetadata_ == nullptr && this->version_ == nullptr && this->versionName_ == nullptr && this->virtualInternetService_ == nullptr
        && this->virtualInternetServiceId_ == nullptr; };
    // alarmMetadata Field Functions 
    bool hasAlarmMetadata() const { return this->alarmMetadata_ != nullptr;};
    void deleteAlarmMetadata() { this->alarmMetadata_ = nullptr;};
    inline string getAlarmMetadata() const { DARABONBA_PTR_GET_DEFAULT(alarmMetadata_, "") };
    inline GetServiceResponseBody& setAlarmMetadata(string alarmMetadata) { DARABONBA_PTR_SET_VALUE(alarmMetadata_, alarmMetadata) };


    // approvalType Field Functions 
    bool hasApprovalType() const { return this->approvalType_ != nullptr;};
    void deleteApprovalType() { this->approvalType_ = nullptr;};
    inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
    inline GetServiceResponseBody& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


    // buildInfo Field Functions 
    bool hasBuildInfo() const { return this->buildInfo_ != nullptr;};
    void deleteBuildInfo() { this->buildInfo_ = nullptr;};
    inline string getBuildInfo() const { DARABONBA_PTR_GET_DEFAULT(buildInfo_, "") };
    inline GetServiceResponseBody& setBuildInfo(string buildInfo) { DARABONBA_PTR_SET_VALUE(buildInfo_, buildInfo) };


    // buildParameters Field Functions 
    bool hasBuildParameters() const { return this->buildParameters_ != nullptr;};
    void deleteBuildParameters() { this->buildParameters_ = nullptr;};
    inline string getBuildParameters() const { DARABONBA_PTR_GET_DEFAULT(buildParameters_, "") };
    inline GetServiceResponseBody& setBuildParameters(string buildParameters) { DARABONBA_PTR_SET_VALUE(buildParameters_, buildParameters) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline string getCategories() const { DARABONBA_PTR_GET_DEFAULT(categories_, "") };
    inline GetServiceResponseBody& setCategories(string categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const GetServiceResponseBody::Commodity & getCommodity() const { DARABONBA_PTR_GET_CONST(commodity_, GetServiceResponseBody::Commodity) };
    inline GetServiceResponseBody::Commodity getCommodity() { DARABONBA_PTR_GET(commodity_, GetServiceResponseBody::Commodity) };
    inline GetServiceResponseBody& setCommodity(const GetServiceResponseBody::Commodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline GetServiceResponseBody& setCommodity(GetServiceResponseBody::Commodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // complianceMetadata Field Functions 
    bool hasComplianceMetadata() const { return this->complianceMetadata_ != nullptr;};
    void deleteComplianceMetadata() { this->complianceMetadata_ = nullptr;};
    inline const GetServiceResponseBody::ComplianceMetadata & getComplianceMetadata() const { DARABONBA_PTR_GET_CONST(complianceMetadata_, GetServiceResponseBody::ComplianceMetadata) };
    inline GetServiceResponseBody::ComplianceMetadata getComplianceMetadata() { DARABONBA_PTR_GET(complianceMetadata_, GetServiceResponseBody::ComplianceMetadata) };
    inline GetServiceResponseBody& setComplianceMetadata(const GetServiceResponseBody::ComplianceMetadata & complianceMetadata) { DARABONBA_PTR_SET_VALUE(complianceMetadata_, complianceMetadata) };
    inline GetServiceResponseBody& setComplianceMetadata(GetServiceResponseBody::ComplianceMetadata && complianceMetadata) { DARABONBA_PTR_SET_RVALUE(complianceMetadata_, complianceMetadata) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetServiceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossRegionConnectionStatus Field Functions 
    bool hasCrossRegionConnectionStatus() const { return this->crossRegionConnectionStatus_ != nullptr;};
    void deleteCrossRegionConnectionStatus() { this->crossRegionConnectionStatus_ = nullptr;};
    inline string getCrossRegionConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(crossRegionConnectionStatus_, "") };
    inline GetServiceResponseBody& setCrossRegionConnectionStatus(string crossRegionConnectionStatus) { DARABONBA_PTR_SET_VALUE(crossRegionConnectionStatus_, crossRegionConnectionStatus) };


    // deployMetadata Field Functions 
    bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
    void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
    inline string getDeployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
    inline GetServiceResponseBody& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline GetServiceResponseBody& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetServiceResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // entitySource Field Functions 
    bool hasEntitySource() const { return this->entitySource_ != nullptr;};
    void deleteEntitySource() { this->entitySource_ = nullptr;};
    inline const map<string, string> & getEntitySource() const { DARABONBA_PTR_GET_CONST(entitySource_, map<string, string>) };
    inline map<string, string> getEntitySource() { DARABONBA_PTR_GET(entitySource_, map<string, string>) };
    inline GetServiceResponseBody& setEntitySource(const map<string, string> & entitySource) { DARABONBA_PTR_SET_VALUE(entitySource_, entitySource) };
    inline GetServiceResponseBody& setEntitySource(map<string, string> && entitySource) { DARABONBA_PTR_SET_RVALUE(entitySource_, entitySource) };


    // isSupportOperated Field Functions 
    bool hasIsSupportOperated() const { return this->isSupportOperated_ != nullptr;};
    void deleteIsSupportOperated() { this->isSupportOperated_ = nullptr;};
    inline bool getIsSupportOperated() const { DARABONBA_PTR_GET_DEFAULT(isSupportOperated_, false) };
    inline GetServiceResponseBody& setIsSupportOperated(bool isSupportOperated) { DARABONBA_PTR_SET_VALUE(isSupportOperated_, isSupportOperated) };


    // licenseMetadata Field Functions 
    bool hasLicenseMetadata() const { return this->licenseMetadata_ != nullptr;};
    void deleteLicenseMetadata() { this->licenseMetadata_ = nullptr;};
    inline string getLicenseMetadata() const { DARABONBA_PTR_GET_DEFAULT(licenseMetadata_, "") };
    inline GetServiceResponseBody& setLicenseMetadata(string licenseMetadata) { DARABONBA_PTR_SET_VALUE(licenseMetadata_, licenseMetadata) };


    // logMetadata Field Functions 
    bool hasLogMetadata() const { return this->logMetadata_ != nullptr;};
    void deleteLogMetadata() { this->logMetadata_ = nullptr;};
    inline string getLogMetadata() const { DARABONBA_PTR_GET_DEFAULT(logMetadata_, "") };
    inline GetServiceResponseBody& setLogMetadata(string logMetadata) { DARABONBA_PTR_SET_VALUE(logMetadata_, logMetadata) };


    // operationMetadata Field Functions 
    bool hasOperationMetadata() const { return this->operationMetadata_ != nullptr;};
    void deleteOperationMetadata() { this->operationMetadata_ = nullptr;};
    inline string getOperationMetadata() const { DARABONBA_PTR_GET_DEFAULT(operationMetadata_, "") };
    inline GetServiceResponseBody& setOperationMetadata(string operationMetadata) { DARABONBA_PTR_SET_VALUE(operationMetadata_, operationMetadata) };


    // payFromType Field Functions 
    bool hasPayFromType() const { return this->payFromType_ != nullptr;};
    void deletePayFromType() { this->payFromType_ = nullptr;};
    inline string getPayFromType() const { DARABONBA_PTR_GET_DEFAULT(payFromType_, "") };
    inline GetServiceResponseBody& setPayFromType(string payFromType) { DARABONBA_PTR_SET_VALUE(payFromType_, payFromType) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline GetServiceResponseBody& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline GetServiceResponseBody& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline GetServiceResponseBody& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline GetServiceResponseBody& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // registrationId Field Functions 
    bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
    void deleteRegistrationId() { this->registrationId_ = nullptr;};
    inline string getRegistrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
    inline GetServiceResponseBody& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resellable Field Functions 
    bool hasResellable() const { return this->resellable_ != nullptr;};
    void deleteResellable() { this->resellable_ = nullptr;};
    inline bool getResellable() const { DARABONBA_PTR_GET_DEFAULT(resellable_, false) };
    inline GetServiceResponseBody& setResellable(bool resellable) { DARABONBA_PTR_SET_VALUE(resellable_, resellable) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetServiceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline GetServiceResponseBody& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // serviceAuditDocumentUrl Field Functions 
    bool hasServiceAuditDocumentUrl() const { return this->serviceAuditDocumentUrl_ != nullptr;};
    void deleteServiceAuditDocumentUrl() { this->serviceAuditDocumentUrl_ = nullptr;};
    inline string getServiceAuditDocumentUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceAuditDocumentUrl_, "") };
    inline GetServiceResponseBody& setServiceAuditDocumentUrl(string serviceAuditDocumentUrl) { DARABONBA_PTR_SET_VALUE(serviceAuditDocumentUrl_, serviceAuditDocumentUrl) };


    // serviceDiscoverable Field Functions 
    bool hasServiceDiscoverable() const { return this->serviceDiscoverable_ != nullptr;};
    void deleteServiceDiscoverable() { this->serviceDiscoverable_ = nullptr;};
    inline string getServiceDiscoverable() const { DARABONBA_PTR_GET_DEFAULT(serviceDiscoverable_, "") };
    inline GetServiceResponseBody& setServiceDiscoverable(string serviceDiscoverable) { DARABONBA_PTR_SET_VALUE(serviceDiscoverable_, serviceDiscoverable) };


    // serviceDocumentInfos Field Functions 
    bool hasServiceDocumentInfos() const { return this->serviceDocumentInfos_ != nullptr;};
    void deleteServiceDocumentInfos() { this->serviceDocumentInfos_ = nullptr;};
    inline const vector<GetServiceResponseBody::ServiceDocumentInfos> & getServiceDocumentInfos() const { DARABONBA_PTR_GET_CONST(serviceDocumentInfos_, vector<GetServiceResponseBody::ServiceDocumentInfos>) };
    inline vector<GetServiceResponseBody::ServiceDocumentInfos> getServiceDocumentInfos() { DARABONBA_PTR_GET(serviceDocumentInfos_, vector<GetServiceResponseBody::ServiceDocumentInfos>) };
    inline GetServiceResponseBody& setServiceDocumentInfos(const vector<GetServiceResponseBody::ServiceDocumentInfos> & serviceDocumentInfos) { DARABONBA_PTR_SET_VALUE(serviceDocumentInfos_, serviceDocumentInfos) };
    inline GetServiceResponseBody& setServiceDocumentInfos(vector<GetServiceResponseBody::ServiceDocumentInfos> && serviceDocumentInfos) { DARABONBA_PTR_SET_RVALUE(serviceDocumentInfos_, serviceDocumentInfos) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfos Field Functions 
    bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
    void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
    inline const vector<GetServiceResponseBody::ServiceInfos> & getServiceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<GetServiceResponseBody::ServiceInfos>) };
    inline vector<GetServiceResponseBody::ServiceInfos> getServiceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<GetServiceResponseBody::ServiceInfos>) };
    inline GetServiceResponseBody& setServiceInfos(const vector<GetServiceResponseBody::ServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
    inline GetServiceResponseBody& setServiceInfos(vector<GetServiceResponseBody::ServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


    // serviceLocaleConfigs Field Functions 
    bool hasServiceLocaleConfigs() const { return this->serviceLocaleConfigs_ != nullptr;};
    void deleteServiceLocaleConfigs() { this->serviceLocaleConfigs_ = nullptr;};
    inline const vector<GetServiceResponseBody::ServiceLocaleConfigs> & getServiceLocaleConfigs() const { DARABONBA_PTR_GET_CONST(serviceLocaleConfigs_, vector<GetServiceResponseBody::ServiceLocaleConfigs>) };
    inline vector<GetServiceResponseBody::ServiceLocaleConfigs> getServiceLocaleConfigs() { DARABONBA_PTR_GET(serviceLocaleConfigs_, vector<GetServiceResponseBody::ServiceLocaleConfigs>) };
    inline GetServiceResponseBody& setServiceLocaleConfigs(const vector<GetServiceResponseBody::ServiceLocaleConfigs> & serviceLocaleConfigs) { DARABONBA_PTR_SET_VALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };
    inline GetServiceResponseBody& setServiceLocaleConfigs(vector<GetServiceResponseBody::ServiceLocaleConfigs> && serviceLocaleConfigs) { DARABONBA_PTR_SET_RVALUE(serviceLocaleConfigs_, serviceLocaleConfigs) };


    // serviceProductUrl Field Functions 
    bool hasServiceProductUrl() const { return this->serviceProductUrl_ != nullptr;};
    void deleteServiceProductUrl() { this->serviceProductUrl_ = nullptr;};
    inline string getServiceProductUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceProductUrl_, "") };
    inline GetServiceResponseBody& setServiceProductUrl(string serviceProductUrl) { DARABONBA_PTR_SET_VALUE(serviceProductUrl_, serviceProductUrl) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline GetServiceResponseBody& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // shareTypeStatus Field Functions 
    bool hasShareTypeStatus() const { return this->shareTypeStatus_ != nullptr;};
    void deleteShareTypeStatus() { this->shareTypeStatus_ = nullptr;};
    inline string getShareTypeStatus() const { DARABONBA_PTR_GET_DEFAULT(shareTypeStatus_, "") };
    inline GetServiceResponseBody& setShareTypeStatus(string shareTypeStatus) { DARABONBA_PTR_SET_VALUE(shareTypeStatus_, shareTypeStatus) };


    // sourceServiceId Field Functions 
    bool hasSourceServiceId() const { return this->sourceServiceId_ != nullptr;};
    void deleteSourceServiceId() { this->sourceServiceId_ = nullptr;};
    inline string getSourceServiceId() const { DARABONBA_PTR_GET_DEFAULT(sourceServiceId_, "") };
    inline GetServiceResponseBody& setSourceServiceId(string sourceServiceId) { DARABONBA_PTR_SET_VALUE(sourceServiceId_, sourceServiceId) };


    // sourceServiceVersion Field Functions 
    bool hasSourceServiceVersion() const { return this->sourceServiceVersion_ != nullptr;};
    void deleteSourceServiceVersion() { this->sourceServiceVersion_ = nullptr;};
    inline string getSourceServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceServiceVersion_, "") };
    inline GetServiceResponseBody& setSourceServiceVersion(string sourceServiceVersion) { DARABONBA_PTR_SET_VALUE(sourceServiceVersion_, sourceServiceVersion) };


    // sourceSupplierName Field Functions 
    bool hasSourceSupplierName() const { return this->sourceSupplierName_ != nullptr;};
    void deleteSourceSupplierName() { this->sourceSupplierName_ = nullptr;};
    inline string getSourceSupplierName() const { DARABONBA_PTR_GET_DEFAULT(sourceSupplierName_, "") };
    inline GetServiceResponseBody& setSourceSupplierName(string sourceSupplierName) { DARABONBA_PTR_SET_VALUE(sourceSupplierName_, sourceSupplierName) };


    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const GetServiceResponseBody::Statistic & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, GetServiceResponseBody::Statistic) };
    inline GetServiceResponseBody::Statistic getStatistic() { DARABONBA_PTR_GET(statistic_, GetServiceResponseBody::Statistic) };
    inline GetServiceResponseBody& setStatistic(const GetServiceResponseBody::Statistic & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline GetServiceResponseBody& setStatistic(GetServiceResponseBody::Statistic && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string getStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline GetServiceResponseBody& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline GetServiceResponseBody& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline GetServiceResponseBody& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    // supportContacts Field Functions 
    bool hasSupportContacts() const { return this->supportContacts_ != nullptr;};
    void deleteSupportContacts() { this->supportContacts_ = nullptr;};
    inline const vector<GetServiceResponseBody::SupportContacts> & getSupportContacts() const { DARABONBA_PTR_GET_CONST(supportContacts_, vector<GetServiceResponseBody::SupportContacts>) };
    inline vector<GetServiceResponseBody::SupportContacts> getSupportContacts() { DARABONBA_PTR_GET(supportContacts_, vector<GetServiceResponseBody::SupportContacts>) };
    inline GetServiceResponseBody& setSupportContacts(const vector<GetServiceResponseBody::SupportContacts> & supportContacts) { DARABONBA_PTR_SET_VALUE(supportContacts_, supportContacts) };
    inline GetServiceResponseBody& setSupportContacts(vector<GetServiceResponseBody::SupportContacts> && supportContacts) { DARABONBA_PTR_SET_RVALUE(supportContacts_, supportContacts) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetServiceResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetServiceResponseBody::Tags>) };
    inline vector<GetServiceResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetServiceResponseBody::Tags>) };
    inline GetServiceResponseBody& setTags(const vector<GetServiceResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetServiceResponseBody& setTags(vector<GetServiceResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline GetServiceResponseBody& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // testStatus Field Functions 
    bool hasTestStatus() const { return this->testStatus_ != nullptr;};
    void deleteTestStatus() { this->testStatus_ = nullptr;};
    inline string getTestStatus() const { DARABONBA_PTR_GET_DEFAULT(testStatus_, "") };
    inline GetServiceResponseBody& setTestStatus(string testStatus) { DARABONBA_PTR_SET_VALUE(testStatus_, testStatus) };


    // trialDuration Field Functions 
    bool hasTrialDuration() const { return this->trialDuration_ != nullptr;};
    void deleteTrialDuration() { this->trialDuration_ = nullptr;};
    inline int64_t getTrialDuration() const { DARABONBA_PTR_GET_DEFAULT(trialDuration_, 0L) };
    inline GetServiceResponseBody& setTrialDuration(int64_t trialDuration) { DARABONBA_PTR_SET_VALUE(trialDuration_, trialDuration) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string getTrialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline GetServiceResponseBody& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetServiceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // upgradeMetadata Field Functions 
    bool hasUpgradeMetadata() const { return this->upgradeMetadata_ != nullptr;};
    void deleteUpgradeMetadata() { this->upgradeMetadata_ = nullptr;};
    inline string getUpgradeMetadata() const { DARABONBA_PTR_GET_DEFAULT(upgradeMetadata_, "") };
    inline GetServiceResponseBody& setUpgradeMetadata(string upgradeMetadata) { DARABONBA_PTR_SET_VALUE(upgradeMetadata_, upgradeMetadata) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetServiceResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    // virtualInternetService Field Functions 
    bool hasVirtualInternetService() const { return this->virtualInternetService_ != nullptr;};
    void deleteVirtualInternetService() { this->virtualInternetService_ = nullptr;};
    inline string getVirtualInternetService() const { DARABONBA_PTR_GET_DEFAULT(virtualInternetService_, "") };
    inline GetServiceResponseBody& setVirtualInternetService(string virtualInternetService) { DARABONBA_PTR_SET_VALUE(virtualInternetService_, virtualInternetService) };


    // virtualInternetServiceId Field Functions 
    bool hasVirtualInternetServiceId() const { return this->virtualInternetServiceId_ != nullptr;};
    void deleteVirtualInternetServiceId() { this->virtualInternetServiceId_ = nullptr;};
    inline string getVirtualInternetServiceId() const { DARABONBA_PTR_GET_DEFAULT(virtualInternetServiceId_, "") };
    inline GetServiceResponseBody& setVirtualInternetServiceId(string virtualInternetServiceId) { DARABONBA_PTR_SET_VALUE(virtualInternetServiceId_, virtualInternetServiceId) };


  protected:
    // The alert configurations of the service.
    // 
    // >  This parameter takes effect only when you specify an alert policy for **PolicyNames**.
    shared_ptr<string> alarmMetadata_ {};
    // The approval type of the service usage application. Valid values:
    // 
    // *   Manual: The application is manually approved.
    // *   AutoPass: The application is automatically approved.
    shared_ptr<string> approvalType_ {};
    // The information of build service information.
    shared_ptr<string> buildInfo_ {};
    // The parameters for building the service
    shared_ptr<string> buildParameters_ {};
    // The category of the service.
    shared_ptr<string> categories_ {};
    // The commodity details.
    shared_ptr<GetServiceResponseBody::Commodity> commodity_ {};
    // Compliance check metadata.
    shared_ptr<GetServiceResponseBody::ComplianceMetadata> complianceMetadata_ {};
    // The time when the service was created.
    shared_ptr<string> createTime_ {};
    // The binding configurations of the commodity module.
    shared_ptr<string> crossRegionConnectionStatus_ {};
    // The storage configurations of the service. The format in which the deployment information of a service is stored varies based on the deployment type of the service. In this case, the deployment information is stored in the JSON string format.
    shared_ptr<string> deployMetadata_ {};
    // The deployment type of the service. Valid values:
    // 
    // *   ros: The service is deployed by using Resource Orchestration Service (ROS).
    // *   terraform: The service is deployed by using Terraform.
    // *   spi: The service is deployed by calling a service provider interface (SPI).
    // *   operation: The service is deployed by using a hosted O\\&M service.
    // *   container: The service is deployed by using a container.
    // *   pkg: The service is deployed by using a package.
    shared_ptr<string> deployType_ {};
    // The duration for which hosted O\\&M is implemented. Unit: seconds.
    shared_ptr<int64_t> duration_ {};
    // The report source.
    shared_ptr<map<string, string>> entitySource_ {};
    // Indicates whether the hosted O\\&M feature is enabled for the service. Default value: false. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is returned if you set **ServiceType** to **private**.
    shared_ptr<bool> isSupportOperated_ {};
    // The license metadata.
    shared_ptr<string> licenseMetadata_ {};
    // The logging configurations.
    shared_ptr<string> logMetadata_ {};
    // The hosted O\\&M configurations.
    shared_ptr<string> operationMetadata_ {};
    // The source for which fees are generated. Valid values:
    // 
    // *   None: No fees are generated.
    // *   Marketplace: Fees are generated for Alibaba Cloud Marketplace.
    // *   Custom: The custom fees.
    shared_ptr<string> payFromType_ {};
    // The permissions on the service. Valid values:
    // 
    // *   Deployable: Permissions to deploy the service.
    // *   Accessible: Permissions to access the service.
    shared_ptr<string> permission_ {};
    // The policy name. The name can be up to 128 characters in length. Separate multiple names with commas (,). Only hosted O\\&M policies are supported.
    shared_ptr<string> policyNames_ {};
    // The deployment progress of the service instance. Unit: percentage.
    shared_ptr<int64_t> progress_ {};
    // The time when the service was published.
    shared_ptr<string> publishTime_ {};
    // The registration ID.
    shared_ptr<string> registrationId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the distribution is supported. Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<bool> resellable_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> secretKey_ {};
    // The URL of the service audit file.
    shared_ptr<string> serviceAuditDocumentUrl_ {};
    // Indicates whether the service is visible. Valid values:
    // 
    // *   INVISIBLE
    // *   DISCOVERABLE
    shared_ptr<string> serviceDiscoverable_ {};
    // Service document information.
    shared_ptr<vector<GetServiceResponseBody::ServiceDocumentInfos>> serviceDocumentInfos_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The information about the service.
    shared_ptr<vector<GetServiceResponseBody::ServiceInfos>> serviceInfos_ {};
    shared_ptr<vector<GetServiceResponseBody::ServiceLocaleConfigs>> serviceLocaleConfigs_ {};
    // The URL of the service page.
    shared_ptr<string> serviceProductUrl_ {};
    // The type of the service. Valid values:
    // 
    // *   private: The service is a private service and is deployed within the account of a customer.
    // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
    // *   operation: The service is a hosted O\\&M service.
    shared_ptr<string> serviceType_ {};
    // The permission type of the deployment URL. Valid values:
    // 
    // *   Public: All users can go to the URL to create a service instance or a trial service instance.
    // *   Restricted: Only users in the whitelist can go to the URL to create a service instance or a trial service instance.
    // *   OnlyFormalRestricted: Only users in the whitelist can go to the URL to create a service instance.
    // *   OnlyTrailRestricted: Only users in the whitelist can go to the URL to create a trial service instance.
    // *   Hidden: Users not in the whitelist cannot see the service details page when they go to the URL and cannot request deployment permissions.
    shared_ptr<string> shareType_ {};
    // The share status of the instance.
    // 
    // > This parameter is discontinued.
    shared_ptr<string> shareTypeStatus_ {};
    // The ID of the distribution source service.
    shared_ptr<string> sourceServiceId_ {};
    // The version of the distribution source service.
    shared_ptr<string> sourceServiceVersion_ {};
    // The name of the distribution source service provider.
    shared_ptr<string> sourceSupplierName_ {};
    // The statistics.
    shared_ptr<GetServiceResponseBody::Statistic> statistic_ {};
    // The status of the service. Valid values:
    // 
    // *   Draft: The service is a draft.
    // *   Submitted: The service is submitted for review. You cannot modify services in this state.
    // *   Approved: The service is approved. You cannot modify services in this state. You can publish services in this state.
    // *   Launching: The service is being published.
    // *   Online: The service is published.
    // *   Offline: The service is unpublished.
    shared_ptr<string> status_ {};
    // The description of the service status.
    shared_ptr<string> statusDetail_ {};
    // The name of the service provider.
    shared_ptr<string> supplierName_ {};
    // The URL of the service provider.
    shared_ptr<string> supplierUrl_ {};
    // Contact information of the service provider.
    shared_ptr<vector<GetServiceResponseBody::SupportContacts>> supportContacts_ {};
    // The service tags.
    shared_ptr<vector<GetServiceResponseBody::Tags>> tags_ {};
    // The type of the tenant. Valid values:
    // 
    // *   SingleTenant
    // *   MultiTenant
    shared_ptr<string> tenantType_ {};
    // The status of the test. Valid values:
    // 
    // *   `CONFIG_IS_NULL`: No test configurations exist.
    // *   `SERVICE_TEST_SUCCEED`: The service passed the test.
    // *   `SERVICE_TSET_DOING`: The service does not pass the test.
    shared_ptr<string> testStatus_ {};
    // The trial duration. Unit: day. The maximum trial duration cannot exceed 30 days.
    shared_ptr<int64_t> trialDuration_ {};
    // The trial policy. Valid values:
    // 
    // *   Trial: Trials are supported.
    // *   NotTrial: Trials are not supported.
    shared_ptr<string> trialType_ {};
    // The time when the service was updated.
    shared_ptr<string> updateTime_ {};
    // The metadata about the upgrade.
    shared_ptr<string> upgradeMetadata_ {};
    // The service version.
    shared_ptr<string> version_ {};
    // The version name.
    shared_ptr<string> versionName_ {};
    // Indicates whether the service is a virtual Internet service. Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<string> virtualInternetService_ {};
    // The ID of the virtual Internet service.
    shared_ptr<string> virtualInternetServiceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
