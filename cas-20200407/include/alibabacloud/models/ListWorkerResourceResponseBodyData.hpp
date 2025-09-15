// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKERRESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKERRESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListWorkerResourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkerResourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CertDomain, certDomain_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertInstanceId, certInstanceId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CloudName, cloudName_);
      DARABONBA_PTR_TO_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_TO_JSON(CloudRegion, cloudRegion_);
      DARABONBA_PTR_TO_JSON(DefaultResource, defaultResource_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceCertId, resourceCertId_);
      DARABONBA_PTR_TO_JSON(ResourceDomain, resourceDomain_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkerResourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDomain, certDomain_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertInstanceId, certInstanceId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CloudName, cloudName_);
      DARABONBA_PTR_FROM_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_FROM_JSON(CloudRegion, cloudRegion_);
      DARABONBA_PTR_FROM_JSON(DefaultResource, defaultResource_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceCertId, resourceCertId_);
      DARABONBA_PTR_FROM_JSON(ResourceDomain, resourceDomain_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListWorkerResourceResponseBodyData() = default ;
    ListWorkerResourceResponseBodyData(const ListWorkerResourceResponseBodyData &) = default ;
    ListWorkerResourceResponseBodyData(ListWorkerResourceResponseBodyData &&) = default ;
    ListWorkerResourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkerResourceResponseBodyData() = default ;
    ListWorkerResourceResponseBodyData& operator=(const ListWorkerResourceResponseBodyData &) = default ;
    ListWorkerResourceResponseBodyData& operator=(ListWorkerResourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certDomain_ != nullptr
        && this->certId_ != nullptr && this->certInstanceId_ != nullptr && this->certName_ != nullptr && this->cloudName_ != nullptr && this->cloudProduct_ != nullptr
        && this->cloudRegion_ != nullptr && this->defaultResource_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->listenerId_ != nullptr && this->namespaceId_ != nullptr && this->orderId_ != nullptr
        && this->port_ != nullptr && this->regionId_ != nullptr && this->resourceCertId_ != nullptr && this->resourceDomain_ != nullptr && this->resourceId_ != nullptr
        && this->status_ != nullptr && this->userId_ != nullptr; };
    // certDomain Field Functions 
    bool hasCertDomain() const { return this->certDomain_ != nullptr;};
    void deleteCertDomain() { this->certDomain_ = nullptr;};
    inline string certDomain() const { DARABONBA_PTR_GET_DEFAULT(certDomain_, "") };
    inline ListWorkerResourceResponseBodyData& setCertDomain(string certDomain) { DARABONBA_PTR_SET_VALUE(certDomain_, certDomain) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline ListWorkerResourceResponseBodyData& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certInstanceId Field Functions 
    bool hasCertInstanceId() const { return this->certInstanceId_ != nullptr;};
    void deleteCertInstanceId() { this->certInstanceId_ = nullptr;};
    inline string certInstanceId() const { DARABONBA_PTR_GET_DEFAULT(certInstanceId_, "") };
    inline ListWorkerResourceResponseBodyData& setCertInstanceId(string certInstanceId) { DARABONBA_PTR_SET_VALUE(certInstanceId_, certInstanceId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline ListWorkerResourceResponseBodyData& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // cloudName Field Functions 
    bool hasCloudName() const { return this->cloudName_ != nullptr;};
    void deleteCloudName() { this->cloudName_ = nullptr;};
    inline string cloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
    inline ListWorkerResourceResponseBodyData& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


    // cloudProduct Field Functions 
    bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
    void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
    inline string cloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
    inline ListWorkerResourceResponseBodyData& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


    // cloudRegion Field Functions 
    bool hasCloudRegion() const { return this->cloudRegion_ != nullptr;};
    void deleteCloudRegion() { this->cloudRegion_ = nullptr;};
    inline string cloudRegion() const { DARABONBA_PTR_GET_DEFAULT(cloudRegion_, "") };
    inline ListWorkerResourceResponseBodyData& setCloudRegion(string cloudRegion) { DARABONBA_PTR_SET_VALUE(cloudRegion_, cloudRegion) };


    // defaultResource Field Functions 
    bool hasDefaultResource() const { return this->defaultResource_ != nullptr;};
    void deleteDefaultResource() { this->defaultResource_ = nullptr;};
    inline bool defaultResource() const { DARABONBA_PTR_GET_DEFAULT(defaultResource_, false) };
    inline ListWorkerResourceResponseBodyData& setDefaultResource(bool defaultResource) { DARABONBA_PTR_SET_VALUE(defaultResource_, defaultResource) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListWorkerResourceResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListWorkerResourceResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWorkerResourceResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListWorkerResourceResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListWorkerResourceResponseBodyData& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListWorkerResourceResponseBodyData& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListWorkerResourceResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListWorkerResourceResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListWorkerResourceResponseBodyData& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListWorkerResourceResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceCertId Field Functions 
    bool hasResourceCertId() const { return this->resourceCertId_ != nullptr;};
    void deleteResourceCertId() { this->resourceCertId_ = nullptr;};
    inline int64_t resourceCertId() const { DARABONBA_PTR_GET_DEFAULT(resourceCertId_, 0L) };
    inline ListWorkerResourceResponseBodyData& setResourceCertId(int64_t resourceCertId) { DARABONBA_PTR_SET_VALUE(resourceCertId_, resourceCertId) };


    // resourceDomain Field Functions 
    bool hasResourceDomain() const { return this->resourceDomain_ != nullptr;};
    void deleteResourceDomain() { this->resourceDomain_ = nullptr;};
    inline string resourceDomain() const { DARABONBA_PTR_GET_DEFAULT(resourceDomain_, "") };
    inline ListWorkerResourceResponseBodyData& setResourceDomain(string resourceDomain) { DARABONBA_PTR_SET_VALUE(resourceDomain_, resourceDomain) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline int64_t resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
    inline ListWorkerResourceResponseBodyData& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWorkerResourceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListWorkerResourceResponseBodyData& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The domain name bound to the certificate in the worker task.
    std::shared_ptr<string> certDomain_ = nullptr;
    // The ID of the certificate in the worker task.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The instance ID of the certificate in the worker task.
    std::shared_ptr<string> certInstanceId_ = nullptr;
    // The name of the certificate in the worker task.
    std::shared_ptr<string> certName_ = nullptr;
    // The cloud service provider to which the cloud resource in the worker task belongs.
    // 
    // >  This parameter is not returned if you deploy certificates to Alibaba Cloud services.
    std::shared_ptr<string> cloudName_ = nullptr;
    // The cloud service to which the cloud resource in the worker task belongs. Valid values:
    // 
    // *   **CDN**: Alibaba Cloud CDN (CDN). This value is supported only at the China site (aliyun.com).
    // *   **SLB**: Classic Load Balancer (CLB). This value is supported only at the China site (aliyun.com).
    // *   **DCDN**: Dynamic Content Delivery Network (DCDN). This value is supported only at the China site (aliyun.com).
    // *   **DDOS**: Anti-DDoS. This value is supported only at the China site (aliyun.com).
    // *   **LIVE**: ApsaraVideo Live. This value is supported only at the China site (aliyun.com).
    // *   **webHosting**: Cloud Web Hosting. This value is supported only at the China site (aliyun.com).
    // *   **VOD**: ApsaraVideo VOD. This value is supported only at the China site (aliyun.com).
    // *   **CR**: Container Registry. This value is supported only at the China site (aliyun.com).
    // *   **ALB**: Application Load Balancer (ALB).
    // *   **APIGateway**: API Gateway.
    // *   **FC**: Function Compute.
    // *   **GA**: Global Accelerator (GA).
    // *   **MSE**: Microservices Engine (MSE).
    // *   **NLB**: Network Load Balancer (NLB).
    // *   **OSS**: Object Storage Service (OSS).
    // *   **SAE**: Serverless App Engine (SAE).
    // *   **TencentCDN**: Tencent Cloud Content Delivery Network (CDN).
    // *   **WAF**: Web Application Firewall (WAF).
    std::shared_ptr<string> cloudProduct_ = nullptr;
    // The original region ID of the cloud resource in the worker task. The value is the region ID defined by the cloud service provider. This parameter is required only when you deploy certificates to services of multiple clouds.
    std::shared_ptr<string> cloudRegion_ = nullptr;
    // Indicates whether the cloud resource in the worker task is the default resource. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
    std::shared_ptr<bool> defaultResource_ = nullptr;
    // The time when the worker task was created. The time is a timestamp in seconds.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the worker task was last modified. The time is a timestamp in seconds.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the worker task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the cloud resource in the worker task.
    // 
    // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the deployment task to which the worker task belongs.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The listener ID of the cloud resource in the worker task.
    // 
    // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The ID of the namespace in SAE. This parameter is returned only if you deploy certificates to SAE.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The order ID of the worker task, which is the same as the order ID of the certificate.
    // 
    // >  If the CertId parameter is returned, this parameter is not returned.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The listening port of the cloud resource in the worker task.
    // 
    // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The region ID of the cloud resource in the worker task.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the certificate that was originally bound to the cloud resource in the worker task.
    std::shared_ptr<int64_t> resourceCertId_ = nullptr;
    // The domain name that was originally bound to the cloud resource in the worker task.
    std::shared_ptr<string> resourceDomain_ = nullptr;
    // The ID of the cloud resource in the worker task.
    std::shared_ptr<int64_t> resourceId_ = nullptr;
    // The status of the worker task. Valid values:
    // 
    // *   **editing**
    // *   **pending**
    // *   **scheduling**
    // *   **processing**
    // *   **error**
    // *   **success**
    // *   **rollback**
    // *   **rollback_success**
    // *   **rollback_error**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the Alibaba Cloud account to which the worker task belongs.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
