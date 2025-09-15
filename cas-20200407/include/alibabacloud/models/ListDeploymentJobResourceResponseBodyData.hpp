// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBRESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBRESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListDeploymentJobResourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobResourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CertEndTime, certEndTime_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_TO_JSON(CloudAccessId, cloudAccessId_);
      DARABONBA_PTR_TO_JSON(CloudName, cloudName_);
      DARABONBA_PTR_TO_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_TO_JSON(CloudRegion, cloudRegion_);
      DARABONBA_PTR_TO_JSON(DefaultResource, defaultResource_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EnableHttps, enableHttps_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobResourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CertEndTime, certEndTime_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertStartTime, certStartTime_);
      DARABONBA_PTR_FROM_JSON(CloudAccessId, cloudAccessId_);
      DARABONBA_PTR_FROM_JSON(CloudName, cloudName_);
      DARABONBA_PTR_FROM_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_FROM_JSON(CloudRegion, cloudRegion_);
      DARABONBA_PTR_FROM_JSON(DefaultResource, defaultResource_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EnableHttps, enableHttps_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListDeploymentJobResourceResponseBodyData() = default ;
    ListDeploymentJobResourceResponseBodyData(const ListDeploymentJobResourceResponseBodyData &) = default ;
    ListDeploymentJobResourceResponseBodyData(ListDeploymentJobResourceResponseBodyData &&) = default ;
    ListDeploymentJobResourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobResourceResponseBodyData() = default ;
    ListDeploymentJobResourceResponseBodyData& operator=(const ListDeploymentJobResourceResponseBodyData &) = default ;
    ListDeploymentJobResourceResponseBodyData& operator=(ListDeploymentJobResourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certEndTime_ != nullptr
        && this->certId_ != nullptr && this->certName_ != nullptr && this->certStartTime_ != nullptr && this->cloudAccessId_ != nullptr && this->cloudName_ != nullptr
        && this->cloudProduct_ != nullptr && this->cloudRegion_ != nullptr && this->defaultResource_ != nullptr && this->domain_ != nullptr && this->enableHttps_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->instanceId_ != nullptr && this->listenerId_ != nullptr
        && this->listenerPort_ != nullptr && this->regionId_ != nullptr && this->remark_ != nullptr && this->status_ != nullptr && this->useSsl_ != nullptr
        && this->userId_ != nullptr; };
    // certEndTime Field Functions 
    bool hasCertEndTime() const { return this->certEndTime_ != nullptr;};
    void deleteCertEndTime() { this->certEndTime_ = nullptr;};
    inline string certEndTime() const { DARABONBA_PTR_GET_DEFAULT(certEndTime_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setCertEndTime(string certEndTime) { DARABONBA_PTR_SET_VALUE(certEndTime_, certEndTime) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline ListDeploymentJobResourceResponseBodyData& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certStartTime Field Functions 
    bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
    void deleteCertStartTime() { this->certStartTime_ = nullptr;};
    inline string certStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


    // cloudAccessId Field Functions 
    bool hasCloudAccessId() const { return this->cloudAccessId_ != nullptr;};
    void deleteCloudAccessId() { this->cloudAccessId_ = nullptr;};
    inline string cloudAccessId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccessId_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setCloudAccessId(string cloudAccessId) { DARABONBA_PTR_SET_VALUE(cloudAccessId_, cloudAccessId) };


    // cloudName Field Functions 
    bool hasCloudName() const { return this->cloudName_ != nullptr;};
    void deleteCloudName() { this->cloudName_ = nullptr;};
    inline string cloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


    // cloudProduct Field Functions 
    bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
    void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
    inline string cloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


    // cloudRegion Field Functions 
    bool hasCloudRegion() const { return this->cloudRegion_ != nullptr;};
    void deleteCloudRegion() { this->cloudRegion_ = nullptr;};
    inline string cloudRegion() const { DARABONBA_PTR_GET_DEFAULT(cloudRegion_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setCloudRegion(string cloudRegion) { DARABONBA_PTR_SET_VALUE(cloudRegion_, cloudRegion) };


    // defaultResource Field Functions 
    bool hasDefaultResource() const { return this->defaultResource_ != nullptr;};
    void deleteDefaultResource() { this->defaultResource_ = nullptr;};
    inline int32_t defaultResource() const { DARABONBA_PTR_GET_DEFAULT(defaultResource_, 0) };
    inline ListDeploymentJobResourceResponseBodyData& setDefaultResource(int32_t defaultResource) { DARABONBA_PTR_SET_VALUE(defaultResource_, defaultResource) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enableHttps Field Functions 
    bool hasEnableHttps() const { return this->enableHttps_ != nullptr;};
    void deleteEnableHttps() { this->enableHttps_ = nullptr;};
    inline int32_t enableHttps() const { DARABONBA_PTR_GET_DEFAULT(enableHttps_, 0) };
    inline ListDeploymentJobResourceResponseBodyData& setEnableHttps(int32_t enableHttps) { DARABONBA_PTR_SET_VALUE(enableHttps_, enableHttps) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDeploymentJobResourceResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline string listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDeploymentJobResourceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline int32_t useSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
    inline ListDeploymentJobResourceResponseBodyData& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListDeploymentJobResourceResponseBodyData& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The end date of the certificate bound to the cloud resource. The value is a timestamp in seconds.
    std::shared_ptr<string> certEndTime_ = nullptr;
    // The ID of the certificate bound to the cloud resource.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The name of the certificate bound to the cloud resource.
    std::shared_ptr<string> certName_ = nullptr;
    // The start date of the certificate bound to the cloud resource. The value is a timestamp in seconds.
    std::shared_ptr<string> certStartTime_ = nullptr;
    // The AccessKey ID used to access cloud resources.
    // 
    // >  This parameter is required only when you deploy certificates to services of multiple clouds.
    std::shared_ptr<string> cloudAccessId_ = nullptr;
    // The cloud service provider of the cloud resource. Valid values:
    // 
    // *   **aliyun**: Alibaba Cloud
    // *   **Tencent**: Tencent Cloud
    std::shared_ptr<string> cloudName_ = nullptr;
    // The cloud service. Valid values:
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
    // The region ID of the cloud service provider to which the cloud resource belongs.
    std::shared_ptr<string> cloudRegion_ = nullptr;
    // Indicates whether the cloud resource is the default resource. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    // 
    // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
    std::shared_ptr<int32_t> defaultResource_ = nullptr;
    // The domain name bound to the cloud resource.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether HTTPS is enabled for the cloud resource. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> enableHttps_ = nullptr;
    // The time when the cloud resource was created. The time is a timestamp in seconds.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the cloud resource was last modified. The time is in the timestamp format.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the cloud resource.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID of the cloud resource.
    // 
    // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The listener ID of the cloud resource.
    // 
    // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The listening port of the cloud resource.
    // 
    // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
    std::shared_ptr<string> listenerPort_ = nullptr;
    // The region ID of the cloud resource.
    std::shared_ptr<string> regionId_ = nullptr;
    // The other metadata related to the cloud resource.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the cloud resource.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether an Alibaba Cloud SSL certificate is used. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    // 
    // >  This parameter is required only when you deploy certificates to services of multiple clouds.
    std::shared_ptr<int32_t> useSsl_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
