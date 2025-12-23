// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDRESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDRESOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCloudResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudResourcesResponseBodyData& obj) { 
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
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudResourcesResponseBodyData& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListCloudResourcesResponseBodyData() = default ;
    ListCloudResourcesResponseBodyData(const ListCloudResourcesResponseBodyData &) = default ;
    ListCloudResourcesResponseBodyData(ListCloudResourcesResponseBodyData &&) = default ;
    ListCloudResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudResourcesResponseBodyData() = default ;
    ListCloudResourcesResponseBodyData& operator=(const ListCloudResourcesResponseBodyData &) = default ;
    ListCloudResourcesResponseBodyData& operator=(ListCloudResourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certEndTime_ == nullptr
        && return this->certId_ == nullptr && return this->certName_ == nullptr && return this->certStartTime_ == nullptr && return this->cloudAccessId_ == nullptr && return this->cloudName_ == nullptr
        && return this->cloudProduct_ == nullptr && return this->cloudRegion_ == nullptr && return this->defaultResource_ == nullptr && return this->domain_ == nullptr && return this->enableHttps_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->listenerId_ == nullptr
        && return this->listenerPort_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->useSsl_ == nullptr && return this->userId_ == nullptr; };
    // certEndTime Field Functions 
    bool hasCertEndTime() const { return this->certEndTime_ != nullptr;};
    void deleteCertEndTime() { this->certEndTime_ = nullptr;};
    inline string certEndTime() const { DARABONBA_PTR_GET_DEFAULT(certEndTime_, "") };
    inline ListCloudResourcesResponseBodyData& setCertEndTime(string certEndTime) { DARABONBA_PTR_SET_VALUE(certEndTime_, certEndTime) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline ListCloudResourcesResponseBodyData& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline ListCloudResourcesResponseBodyData& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certStartTime Field Functions 
    bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
    void deleteCertStartTime() { this->certStartTime_ = nullptr;};
    inline string certStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
    inline ListCloudResourcesResponseBodyData& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


    // cloudAccessId Field Functions 
    bool hasCloudAccessId() const { return this->cloudAccessId_ != nullptr;};
    void deleteCloudAccessId() { this->cloudAccessId_ = nullptr;};
    inline string cloudAccessId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccessId_, "") };
    inline ListCloudResourcesResponseBodyData& setCloudAccessId(string cloudAccessId) { DARABONBA_PTR_SET_VALUE(cloudAccessId_, cloudAccessId) };


    // cloudName Field Functions 
    bool hasCloudName() const { return this->cloudName_ != nullptr;};
    void deleteCloudName() { this->cloudName_ = nullptr;};
    inline string cloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
    inline ListCloudResourcesResponseBodyData& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


    // cloudProduct Field Functions 
    bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
    void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
    inline string cloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
    inline ListCloudResourcesResponseBodyData& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


    // cloudRegion Field Functions 
    bool hasCloudRegion() const { return this->cloudRegion_ != nullptr;};
    void deleteCloudRegion() { this->cloudRegion_ = nullptr;};
    inline string cloudRegion() const { DARABONBA_PTR_GET_DEFAULT(cloudRegion_, "") };
    inline ListCloudResourcesResponseBodyData& setCloudRegion(string cloudRegion) { DARABONBA_PTR_SET_VALUE(cloudRegion_, cloudRegion) };


    // defaultResource Field Functions 
    bool hasDefaultResource() const { return this->defaultResource_ != nullptr;};
    void deleteDefaultResource() { this->defaultResource_ = nullptr;};
    inline int32_t defaultResource() const { DARABONBA_PTR_GET_DEFAULT(defaultResource_, 0) };
    inline ListCloudResourcesResponseBodyData& setDefaultResource(int32_t defaultResource) { DARABONBA_PTR_SET_VALUE(defaultResource_, defaultResource) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListCloudResourcesResponseBodyData& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enableHttps Field Functions 
    bool hasEnableHttps() const { return this->enableHttps_ != nullptr;};
    void deleteEnableHttps() { this->enableHttps_ = nullptr;};
    inline int32_t enableHttps() const { DARABONBA_PTR_GET_DEFAULT(enableHttps_, 0) };
    inline ListCloudResourcesResponseBodyData& setEnableHttps(int32_t enableHttps) { DARABONBA_PTR_SET_VALUE(enableHttps_, enableHttps) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListCloudResourcesResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListCloudResourcesResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCloudResourcesResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCloudResourcesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListCloudResourcesResponseBodyData& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline string listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
    inline ListCloudResourcesResponseBodyData& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCloudResourcesResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCloudResourcesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline int32_t useSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
    inline ListCloudResourcesResponseBodyData& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListCloudResourcesResponseBodyData& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The end date of the certificate bound to the cloud resource. The value is a timestamp in seconds.
    std::shared_ptr<string> certEndTime_ = nullptr;
    // The ID of the certificate bound to the cloud resource.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The name of the certificate bound to the cloud resource.
    std::shared_ptr<string> certName_ = nullptr;
    // The start date of the certificate bound to the cloud resource. The value is a timestamp in seconds.
    std::shared_ptr<string> certStartTime_ = nullptr;
    // The AccessKey ID that is used to access cloud resources.
    // 
    // >  This parameter is returned only when you deploy certificates to cloud services of third-party clouds.
    std::shared_ptr<string> cloudAccessId_ = nullptr;
    // The cloud service provider.
    // 
    // Valid values:
    // 
    // *   Tencent
    // *   Huawei
    // *   Aws
    // *   aliyun
    std::shared_ptr<string> cloudName_ = nullptr;
    // The cloud service.
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
    // *   **1**: yes.
    // *   **0**: no.
    std::shared_ptr<int32_t> enableHttps_ = nullptr;
    // The time when the cloud resource was created. The time is a timestamp in seconds.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the cloud resource was last modified. The time is a timestamp in seconds.
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
