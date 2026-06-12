// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceInstances, serviceInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstances, serviceInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceInstancesResponseBody() = default ;
    ListServiceInstancesResponseBody(const ListServiceInstancesResponseBody &) = default ;
    ListServiceInstancesResponseBody(ListServiceInstancesResponseBody &&) = default ;
    ListServiceInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstancesResponseBody() = default ;
    ListServiceInstancesResponseBody& operator=(const ListServiceInstancesResponseBody &) = default ;
    ListServiceInstancesResponseBody& operator=(ListServiceInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInstances& obj) { 
        DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnableInstanceOps, enableInstanceOps_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(GrantedPermission, grantedPermission_);
        DARABONBA_PTR_TO_JSON(IsOperated, isOperated_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OperatedServiceInstanceId, operatedServiceInstanceId_);
        DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
        DARABONBA_PTR_TO_JSON(OperationStartTime, operationStartTime_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Service, service_);
        DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnableInstanceOps, enableInstanceOps_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(GrantedPermission, grantedPermission_);
        DARABONBA_PTR_FROM_JSON(IsOperated, isOperated_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OperatedServiceInstanceId, operatedServiceInstanceId_);
        DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
        DARABONBA_PTR_FROM_JSON(OperationStartTime, operationStartTime_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
        DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ServiceInstances() = default ;
      ServiceInstances(const ServiceInstances &) = default ;
      ServiceInstances(ServiceInstances &&) = default ;
      ServiceInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceInstances() = default ;
      ServiceInstances& operator=(const ServiceInstances &) = default ;
      ServiceInstances& operator=(ServiceInstances &&) = default ;
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

      class Service : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Service& obj) { 
          DARABONBA_PTR_TO_JSON(DeployMetadata, deployMetadata_);
          DARABONBA_PTR_TO_JSON(DeployType, deployType_);
          DARABONBA_PTR_TO_JSON(EnablePrivateVpcConnection, enablePrivateVpcConnection_);
          DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
          DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_TO_JSON(SourceSupplierName, sourceSupplierName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
          DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        };
        friend void from_json(const Darabonba::Json& j, Service& obj) { 
          DARABONBA_PTR_FROM_JSON(DeployMetadata, deployMetadata_);
          DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
          DARABONBA_PTR_FROM_JSON(EnablePrivateVpcConnection, enablePrivateVpcConnection_);
          DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
          DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_FROM_JSON(SourceSupplierName, sourceSupplierName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
          DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        };
        Service() = default ;
        Service(const Service &) = default ;
        Service(Service &&) = default ;
        Service(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Service() = default ;
        Service& operator=(const Service &) = default ;
        Service& operator=(Service &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceInfos& obj) { 
            DARABONBA_PTR_TO_JSON(Image, image_);
            DARABONBA_PTR_TO_JSON(Locale, locale_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(Image, image_);
            DARABONBA_PTR_FROM_JSON(Locale, locale_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
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
          virtual bool empty() const override { return this->image_ == nullptr
        && this->locale_ == nullptr && this->name_ == nullptr && this->shortDescription_ == nullptr; };
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


        protected:
          // The URL of the service icon.
          shared_ptr<string> image_ {};
          // The language of the service instance.
          shared_ptr<string> locale_ {};
          // The name of the service.
          shared_ptr<string> name_ {};
          // The description of the service.
          shared_ptr<string> shortDescription_ {};
        };

        virtual bool empty() const override { return this->deployMetadata_ == nullptr
        && this->deployType_ == nullptr && this->enablePrivateVpcConnection_ == nullptr && this->publishTime_ == nullptr && this->serviceId_ == nullptr && this->serviceInfos_ == nullptr
        && this->serviceType_ == nullptr && this->sourceSupplierName_ == nullptr && this->status_ == nullptr && this->supplierName_ == nullptr && this->supplierUrl_ == nullptr
        && this->version_ == nullptr && this->versionName_ == nullptr; };
        // deployMetadata Field Functions 
        bool hasDeployMetadata() const { return this->deployMetadata_ != nullptr;};
        void deleteDeployMetadata() { this->deployMetadata_ = nullptr;};
        inline string getDeployMetadata() const { DARABONBA_PTR_GET_DEFAULT(deployMetadata_, "") };
        inline Service& setDeployMetadata(string deployMetadata) { DARABONBA_PTR_SET_VALUE(deployMetadata_, deployMetadata) };


        // deployType Field Functions 
        bool hasDeployType() const { return this->deployType_ != nullptr;};
        void deleteDeployType() { this->deployType_ = nullptr;};
        inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
        inline Service& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


        // enablePrivateVpcConnection Field Functions 
        bool hasEnablePrivateVpcConnection() const { return this->enablePrivateVpcConnection_ != nullptr;};
        void deleteEnablePrivateVpcConnection() { this->enablePrivateVpcConnection_ = nullptr;};
        inline bool getEnablePrivateVpcConnection() const { DARABONBA_PTR_GET_DEFAULT(enablePrivateVpcConnection_, false) };
        inline Service& setEnablePrivateVpcConnection(bool enablePrivateVpcConnection) { DARABONBA_PTR_SET_VALUE(enablePrivateVpcConnection_, enablePrivateVpcConnection) };


        // publishTime Field Functions 
        bool hasPublishTime() const { return this->publishTime_ != nullptr;};
        void deletePublishTime() { this->publishTime_ = nullptr;};
        inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
        inline Service& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline Service& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // serviceInfos Field Functions 
        bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
        void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
        inline const vector<Service::ServiceInfos> & getServiceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<Service::ServiceInfos>) };
        inline vector<Service::ServiceInfos> getServiceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<Service::ServiceInfos>) };
        inline Service& setServiceInfos(const vector<Service::ServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
        inline Service& setServiceInfos(vector<Service::ServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
        inline Service& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        // sourceSupplierName Field Functions 
        bool hasSourceSupplierName() const { return this->sourceSupplierName_ != nullptr;};
        void deleteSourceSupplierName() { this->sourceSupplierName_ = nullptr;};
        inline string getSourceSupplierName() const { DARABONBA_PTR_GET_DEFAULT(sourceSupplierName_, "") };
        inline Service& setSourceSupplierName(string sourceSupplierName) { DARABONBA_PTR_SET_VALUE(sourceSupplierName_, sourceSupplierName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Service& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // supplierName Field Functions 
        bool hasSupplierName() const { return this->supplierName_ != nullptr;};
        void deleteSupplierName() { this->supplierName_ = nullptr;};
        inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
        inline Service& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


        // supplierUrl Field Functions 
        bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
        void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
        inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
        inline Service& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Service& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // versionName Field Functions 
        bool hasVersionName() const { return this->versionName_ != nullptr;};
        void deleteVersionName() { this->versionName_ = nullptr;};
        inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
        inline Service& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      protected:
        // The deployment configuration of the service. The configuration varies based on the deployment type. The data is stored in the JSON string format.
        shared_ptr<string> deployMetadata_ {};
        // The deployment type. Valid values:
        // 
        // - ros: The service is deployed using ROS.
        // 
        // - terraform: The service is deployed using Terraform.
        // 
        // - ack: The service is deployed using ACK.
        // 
        // - spi: The service is deployed using SPI.
        // 
        // - operation: The service is deployed using Alibaba Cloud Managed Services.
        shared_ptr<string> deployType_ {};
        // Indicates whether PrivateLink is enabled. Valid values:
        // 
        // - true: Enabled.
        // 
        // - false: Disabled.
        shared_ptr<bool> enablePrivateVpcConnection_ {};
        // The time when the service was published.
        shared_ptr<string> publishTime_ {};
        // The service ID.
        shared_ptr<string> serviceId_ {};
        // The service information.
        shared_ptr<vector<Service::ServiceInfos>> serviceInfos_ {};
        // The service type. Valid values:
        // 
        // - private: The service is deployed in the user\\"s account.
        // 
        // - managed: The service is deployed in the service provider\\"s account.
        // 
        // - operation: The service is an Alibaba Cloud Managed Service.
        // 
        // - poc: The service instance is a trial instance.
        shared_ptr<string> serviceType_ {};
        // The name of the source service provider that distributes the service.
        shared_ptr<string> sourceSupplierName_ {};
        // The status of the service.
        shared_ptr<string> status_ {};
        // The name of the service provider.
        shared_ptr<string> supplierName_ {};
        // The URL of the service provider.
        shared_ptr<string> supplierUrl_ {};
        // The version of the service.
        shared_ptr<string> version_ {};
        // The custom version name defined by the service provider.
        shared_ptr<string> versionName_ {};
      };

      class GrantedPermission : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GrantedPermission& obj) { 
          DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
          DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
        };
        friend void from_json(const Darabonba::Json& j, GrantedPermission& obj) { 
          DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
          DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
        };
        GrantedPermission() = default ;
        GrantedPermission(const GrantedPermission &) = default ;
        GrantedPermission(GrantedPermission &&) = default ;
        GrantedPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GrantedPermission() = default ;
        GrantedPermission& operator=(const GrantedPermission &) = default ;
        GrantedPermission& operator=(GrantedPermission &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->operationEndTime_ == nullptr
        && this->policyNames_ == nullptr; };
        // operationEndTime Field Functions 
        bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
        void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
        inline string getOperationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
        inline GrantedPermission& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


        // policyNames Field Functions 
        bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
        void deletePolicyNames() { this->policyNames_ = nullptr;};
        inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
        inline GrantedPermission& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


      protected:
        shared_ptr<string> operationEndTime_ {};
        shared_ptr<string> policyNames_ {};
      };

      virtual bool empty() const override { return this->bizStatus_ == nullptr
        && this->createTime_ == nullptr && this->enableInstanceOps_ == nullptr && this->endTime_ == nullptr && this->grantedPermission_ == nullptr && this->isOperated_ == nullptr
        && this->name_ == nullptr && this->operatedServiceInstanceId_ == nullptr && this->operationEndTime_ == nullptr && this->operationStartTime_ == nullptr && this->parameters_ == nullptr
        && this->payType_ == nullptr && this->policyNames_ == nullptr && this->progress_ == nullptr && this->resourceGroupId_ == nullptr && this->service_ == nullptr
        && this->serviceInstanceId_ == nullptr && this->serviceType_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->statusDetail_ == nullptr
        && this->tags_ == nullptr && this->templateName_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // bizStatus Field Functions 
      bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
      void deleteBizStatus() { this->bizStatus_ = nullptr;};
      inline string getBizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
      inline ServiceInstances& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ServiceInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enableInstanceOps Field Functions 
      bool hasEnableInstanceOps() const { return this->enableInstanceOps_ != nullptr;};
      void deleteEnableInstanceOps() { this->enableInstanceOps_ = nullptr;};
      inline bool getEnableInstanceOps() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceOps_, false) };
      inline ServiceInstances& setEnableInstanceOps(bool enableInstanceOps) { DARABONBA_PTR_SET_VALUE(enableInstanceOps_, enableInstanceOps) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline ServiceInstances& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // grantedPermission Field Functions 
      bool hasGrantedPermission() const { return this->grantedPermission_ != nullptr;};
      void deleteGrantedPermission() { this->grantedPermission_ = nullptr;};
      inline const ServiceInstances::GrantedPermission & getGrantedPermission() const { DARABONBA_PTR_GET_CONST(grantedPermission_, ServiceInstances::GrantedPermission) };
      inline ServiceInstances::GrantedPermission getGrantedPermission() { DARABONBA_PTR_GET(grantedPermission_, ServiceInstances::GrantedPermission) };
      inline ServiceInstances& setGrantedPermission(const ServiceInstances::GrantedPermission & grantedPermission) { DARABONBA_PTR_SET_VALUE(grantedPermission_, grantedPermission) };
      inline ServiceInstances& setGrantedPermission(ServiceInstances::GrantedPermission && grantedPermission) { DARABONBA_PTR_SET_RVALUE(grantedPermission_, grantedPermission) };


      // isOperated Field Functions 
      bool hasIsOperated() const { return this->isOperated_ != nullptr;};
      void deleteIsOperated() { this->isOperated_ = nullptr;};
      inline bool getIsOperated() const { DARABONBA_PTR_GET_DEFAULT(isOperated_, false) };
      inline ServiceInstances& setIsOperated(bool isOperated) { DARABONBA_PTR_SET_VALUE(isOperated_, isOperated) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ServiceInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operatedServiceInstanceId Field Functions 
      bool hasOperatedServiceInstanceId() const { return this->operatedServiceInstanceId_ != nullptr;};
      void deleteOperatedServiceInstanceId() { this->operatedServiceInstanceId_ = nullptr;};
      inline string getOperatedServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(operatedServiceInstanceId_, "") };
      inline ServiceInstances& setOperatedServiceInstanceId(string operatedServiceInstanceId) { DARABONBA_PTR_SET_VALUE(operatedServiceInstanceId_, operatedServiceInstanceId) };


      // operationEndTime Field Functions 
      bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
      void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
      inline string getOperationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
      inline ServiceInstances& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


      // operationStartTime Field Functions 
      bool hasOperationStartTime() const { return this->operationStartTime_ != nullptr;};
      void deleteOperationStartTime() { this->operationStartTime_ = nullptr;};
      inline string getOperationStartTime() const { DARABONBA_PTR_GET_DEFAULT(operationStartTime_, "") };
      inline ServiceInstances& setOperationStartTime(string operationStartTime) { DARABONBA_PTR_SET_VALUE(operationStartTime_, operationStartTime) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline ServiceInstances& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline ServiceInstances& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // policyNames Field Functions 
      bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
      void deletePolicyNames() { this->policyNames_ = nullptr;};
      inline string getPolicyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
      inline ServiceInstances& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
      inline ServiceInstances& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ServiceInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline const ServiceInstances::Service & getService() const { DARABONBA_PTR_GET_CONST(service_, ServiceInstances::Service) };
      inline ServiceInstances::Service getService() { DARABONBA_PTR_GET(service_, ServiceInstances::Service) };
      inline ServiceInstances& setService(const ServiceInstances::Service & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
      inline ServiceInstances& setService(ServiceInstances::Service && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


      // serviceInstanceId Field Functions 
      bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
      void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
      inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
      inline ServiceInstances& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline ServiceInstances& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ServiceInstances& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDetail Field Functions 
      bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
      void deleteStatusDetail() { this->statusDetail_ = nullptr;};
      inline string getStatusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
      inline ServiceInstances& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ServiceInstances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ServiceInstances::Tags>) };
      inline vector<ServiceInstances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ServiceInstances::Tags>) };
      inline ServiceInstances& setTags(const vector<ServiceInstances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ServiceInstances& setTags(vector<ServiceInstances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline ServiceInstances& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ServiceInstances& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ServiceInstances& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The business status of the service instance. Valid values:
      // 
      // - Normal: The service instance is normal.
      // 
      // - Renewing: The service instance is being renewed.
      // 
      // - RenewFoiled: The renewal of the service instance failed.
      // 
      // - Expired: The service instance has expired.
      shared_ptr<string> bizStatus_ {};
      // The time when the service instance was created.
      shared_ptr<string> createTime_ {};
      // Indicates whether the service instance supports Alibaba Cloud Managed Services. Valid values:
      // 
      // - true: The service instance supports Alibaba Cloud Managed Services.
      // 
      // - false: The service instance does not support Alibaba Cloud Managed Services.
      shared_ptr<bool> enableInstanceOps_ {};
      // The time when the service instance expires.
      shared_ptr<string> endTime_ {};
      shared_ptr<ServiceInstances::GrantedPermission> grantedPermission_ {};
      // Indicates whether Alibaba Cloud Managed Services are enabled for the service instance. Valid values:
      // 
      // - true: Alibaba Cloud Managed Services are enabled for the service instance.
      // 
      // - false: Alibaba Cloud Managed Services are not enabled for the service instance.
      shared_ptr<bool> isOperated_ {};
      // The name of the service instance.
      shared_ptr<string> name_ {};
      // The ID of the service instance that is managed.
      shared_ptr<string> operatedServiceInstanceId_ {};
      // The time when the Alibaba Cloud Managed Services end.
      shared_ptr<string> operationEndTime_ {};
      // The time when the Alibaba Cloud Managed Services start.
      shared_ptr<string> operationStartTime_ {};
      // The parameters of the service instance.
      shared_ptr<string> parameters_ {};
      // The billing method. Valid values:
      // 
      // - Permanent: The service is permanently purchased.
      // 
      // - Subscription: The service is a subscription service from the Alibaba Cloud Marketplace.
      // 
      // - PayAsYouGo: The service is a pay-as-you-go service from the Alibaba Cloud Marketplace.
      // 
      // - CustomFixTime: The service has a custom fixed duration.
      shared_ptr<string> payType_ {};
      shared_ptr<string> policyNames_ {};
      // The deployment progress of the service instance. Unit: %.
      shared_ptr<int64_t> progress_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The service.
      shared_ptr<ServiceInstances::Service> service_ {};
      // The ID of the service instance.
      shared_ptr<string> serviceInstanceId_ {};
      // The service type. Valid values:
      // 
      // - private: The service instance is deployed in the user\\"s account.
      // 
      // - managed: The service instance is deployed in the service provider\\"s account.
      // 
      // - operation: The service instance is an Alibaba Cloud Managed Service instance.
      // 
      // - poc: The service instance is a trial instance.
      shared_ptr<string> serviceType_ {};
      // The source from which the service instance was created.
      shared_ptr<string> source_ {};
      // The status of the service instance. Valid values:
      // 
      // - Created: The service instance is created.
      // 
      // - Deploying: The service instance is being deployed.
      // 
      // - DeployedFailed: The service instance failed to be deployed.
      // 
      // - Deployed: The service instance is deployed.
      // 
      // - Upgrading: The service instance is being upgraded.
      // 
      // - Deleting: The service instance is being deleted.
      // 
      // - Deleted: The service instance is deleted.
      shared_ptr<string> status_ {};
      // The description of the deployment of the service instance.
      shared_ptr<string> statusDetail_ {};
      // The custom tags.
      shared_ptr<vector<ServiceInstances::Tags>> tags_ {};
      // The name of the template.
      shared_ptr<string> templateName_ {};
      // The time when the service instance was updated.
      shared_ptr<string> updateTime_ {};
      // The user\\"s Alibaba Cloud account ID.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->serviceInstances_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstances Field Functions 
    bool hasServiceInstances() const { return this->serviceInstances_ != nullptr;};
    void deleteServiceInstances() { this->serviceInstances_ = nullptr;};
    inline const vector<ListServiceInstancesResponseBody::ServiceInstances> & getServiceInstances() const { DARABONBA_PTR_GET_CONST(serviceInstances_, vector<ListServiceInstancesResponseBody::ServiceInstances>) };
    inline vector<ListServiceInstancesResponseBody::ServiceInstances> getServiceInstances() { DARABONBA_PTR_GET(serviceInstances_, vector<ListServiceInstancesResponseBody::ServiceInstances>) };
    inline ListServiceInstancesResponseBody& setServiceInstances(const vector<ListServiceInstancesResponseBody::ServiceInstances> & serviceInstances) { DARABONBA_PTR_SET_VALUE(serviceInstances_, serviceInstances) };
    inline ListServiceInstancesResponseBody& setServiceInstances(vector<ListServiceInstancesResponseBody::ServiceInstances> && serviceInstances) { DARABONBA_PTR_SET_RVALUE(serviceInstances_, serviceInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page. Maximum value: 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the service instances.
    shared_ptr<vector<ListServiceInstancesResponseBody::ServiceInstances>> serviceInstances_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
