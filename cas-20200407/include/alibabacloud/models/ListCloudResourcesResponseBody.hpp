// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListCloudResourcesResponseBody() = default ;
    ListCloudResourcesResponseBody(const ListCloudResourcesResponseBody &) = default ;
    ListCloudResourcesResponseBody(ListCloudResourcesResponseBody &&) = default ;
    ListCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudResourcesResponseBody() = default ;
    ListCloudResourcesResponseBody& operator=(const ListCloudResourcesResponseBody &) = default ;
    ListCloudResourcesResponseBody& operator=(ListCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certEndTime_ == nullptr
        && this->certId_ == nullptr && this->certName_ == nullptr && this->certStartTime_ == nullptr && this->cloudAccessId_ == nullptr && this->cloudName_ == nullptr
        && this->cloudProduct_ == nullptr && this->cloudRegion_ == nullptr && this->defaultResource_ == nullptr && this->domain_ == nullptr && this->enableHttps_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->listenerId_ == nullptr
        && this->listenerPort_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->useSsl_ == nullptr && this->userId_ == nullptr; };
      // certEndTime Field Functions 
      bool hasCertEndTime() const { return this->certEndTime_ != nullptr;};
      void deleteCertEndTime() { this->certEndTime_ = nullptr;};
      inline string getCertEndTime() const { DARABONBA_PTR_GET_DEFAULT(certEndTime_, "") };
      inline Data& setCertEndTime(string certEndTime) { DARABONBA_PTR_SET_VALUE(certEndTime_, certEndTime) };


      // certId Field Functions 
      bool hasCertId() const { return this->certId_ != nullptr;};
      void deleteCertId() { this->certId_ = nullptr;};
      inline int64_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
      inline Data& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline Data& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // certStartTime Field Functions 
      bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
      void deleteCertStartTime() { this->certStartTime_ = nullptr;};
      inline string getCertStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
      inline Data& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


      // cloudAccessId Field Functions 
      bool hasCloudAccessId() const { return this->cloudAccessId_ != nullptr;};
      void deleteCloudAccessId() { this->cloudAccessId_ = nullptr;};
      inline string getCloudAccessId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccessId_, "") };
      inline Data& setCloudAccessId(string cloudAccessId) { DARABONBA_PTR_SET_VALUE(cloudAccessId_, cloudAccessId) };


      // cloudName Field Functions 
      bool hasCloudName() const { return this->cloudName_ != nullptr;};
      void deleteCloudName() { this->cloudName_ = nullptr;};
      inline string getCloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
      inline Data& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


      // cloudProduct Field Functions 
      bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
      void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
      inline string getCloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
      inline Data& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


      // cloudRegion Field Functions 
      bool hasCloudRegion() const { return this->cloudRegion_ != nullptr;};
      void deleteCloudRegion() { this->cloudRegion_ = nullptr;};
      inline string getCloudRegion() const { DARABONBA_PTR_GET_DEFAULT(cloudRegion_, "") };
      inline Data& setCloudRegion(string cloudRegion) { DARABONBA_PTR_SET_VALUE(cloudRegion_, cloudRegion) };


      // defaultResource Field Functions 
      bool hasDefaultResource() const { return this->defaultResource_ != nullptr;};
      void deleteDefaultResource() { this->defaultResource_ = nullptr;};
      inline int32_t getDefaultResource() const { DARABONBA_PTR_GET_DEFAULT(defaultResource_, 0) };
      inline Data& setDefaultResource(int32_t defaultResource) { DARABONBA_PTR_SET_VALUE(defaultResource_, defaultResource) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Data& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enableHttps Field Functions 
      bool hasEnableHttps() const { return this->enableHttps_ != nullptr;};
      void deleteEnableHttps() { this->enableHttps_ = nullptr;};
      inline int32_t getEnableHttps() const { DARABONBA_PTR_GET_DEFAULT(enableHttps_, 0) };
      inline Data& setEnableHttps(int32_t enableHttps) { DARABONBA_PTR_SET_VALUE(enableHttps_, enableHttps) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline Data& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // listenerPort Field Functions 
      bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
      void deleteListenerPort() { this->listenerPort_ = nullptr;};
      inline string getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
      inline Data& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // useSsl Field Functions 
      bool hasUseSsl() const { return this->useSsl_ != nullptr;};
      void deleteUseSsl() { this->useSsl_ = nullptr;};
      inline int32_t getUseSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
      inline Data& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Data& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The end date of the certificate bound to the cloud resource. The value is a timestamp in seconds.
      shared_ptr<string> certEndTime_ {};
      // The ID of the certificate bound to the cloud resource.
      shared_ptr<int64_t> certId_ {};
      // The name of the certificate bound to the cloud resource.
      shared_ptr<string> certName_ {};
      // The start date of the certificate bound to the cloud resource. The value is a timestamp in seconds.
      shared_ptr<string> certStartTime_ {};
      // The AccessKey ID that is used to access cloud resources.
      // 
      // >  This parameter is returned only when you deploy certificates to cloud services of third-party clouds.
      shared_ptr<string> cloudAccessId_ {};
      // The cloud service provider.
      // 
      // Valid values:
      // 
      // *   Tencent
      // *   Huawei
      // *   Aws
      // *   aliyun
      shared_ptr<string> cloudName_ {};
      // The cloud service.
      shared_ptr<string> cloudProduct_ {};
      // The region ID of the cloud service provider to which the cloud resource belongs.
      shared_ptr<string> cloudRegion_ {};
      // Indicates whether the cloud resource is the default resource. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      // 
      // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
      shared_ptr<int32_t> defaultResource_ {};
      // The domain name bound to the cloud resource.
      shared_ptr<string> domain_ {};
      // Indicates whether HTTPS is enabled for the cloud resource. Valid values:
      // 
      // *   **1**: yes.
      // *   **0**: no.
      shared_ptr<int32_t> enableHttps_ {};
      // The time when the cloud resource was created. The time is a timestamp in seconds.
      shared_ptr<string> gmtCreate_ {};
      // The time when the cloud resource was last modified. The time is a timestamp in seconds.
      shared_ptr<string> gmtModified_ {};
      // The ID of the cloud resource.
      shared_ptr<int64_t> id_ {};
      // The instance ID of the cloud resource.
      // 
      // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
      shared_ptr<string> instanceId_ {};
      // The listener ID of the cloud resource.
      // 
      // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
      shared_ptr<string> listenerId_ {};
      // The listening port of the cloud resource.
      // 
      // >  This parameter is returned only when the value of CloudProduct is SLB, NLB, ALB, or GA.
      shared_ptr<string> listenerPort_ {};
      // The region ID of the cloud resource.
      shared_ptr<string> regionId_ {};
      // The status of the cloud resource.
      shared_ptr<string> status_ {};
      // Indicates whether an Alibaba Cloud SSL certificate is used. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      // 
      // >  This parameter is required only when you deploy certificates to services of multiple clouds.
      shared_ptr<int32_t> useSsl_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->total_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudResourcesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCloudResourcesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCloudResourcesResponseBody::Data>) };
    inline vector<ListCloudResourcesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCloudResourcesResponseBody::Data>) };
    inline ListCloudResourcesResponseBody& setData(const vector<ListCloudResourcesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCloudResourcesResponseBody& setData(vector<ListCloudResourcesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCloudResourcesResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListCloudResourcesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The data returned for the request.
    shared_ptr<vector<ListCloudResourcesResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries per page. Default value: **20**.
    shared_ptr<int32_t> showSize_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
