// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTENERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTENERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceListenersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListenersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HasIpCount, hasIpCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListenersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HasIpCount, hasIpCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetServiceListenersRequest() = default ;
    GetServiceListenersRequest(const GetServiceListenersRequest &) = default ;
    GetServiceListenersRequest(GetServiceListenersRequest &&) = default ;
    GetServiceListenersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListenersRequest() = default ;
    GetServiceListenersRequest& operator=(const GetServiceListenersRequest &) = default ;
    GetServiceListenersRequest& operator=(GetServiceListenersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->groupName_ == nullptr && return this->hasIpCount_ == nullptr && return this->instanceId_ == nullptr
        && return this->namespaceId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->requestPars_ == nullptr
        && return this->serviceName_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetServiceListenersRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetServiceListenersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetServiceListenersRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetServiceListenersRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // hasIpCount Field Functions 
    bool hasHasIpCount() const { return this->hasIpCount_ != nullptr;};
    void deleteHasIpCount() { this->hasIpCount_ = nullptr;};
    inline string hasIpCount() const { DARABONBA_PTR_GET_DEFAULT(hasIpCount_, "") };
    inline GetServiceListenersRequest& setHasIpCount(string hasIpCount) { DARABONBA_PTR_SET_VALUE(hasIpCount_, hasIpCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetServiceListenersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetServiceListenersRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetServiceListenersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetServiceListenersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceListenersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline GetServiceListenersRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceListenersRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the MSE instance to which the service belongs.
    // 
    // >  You must specify InstanceId or ClusterId.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster to which the service belongs.
    // 
    // > The cluster is a concept for Nacos services and is not equivalent to a Microservices Engine (MSE) instance.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The group to which the service belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> hasIpCount_ = nullptr;
    // The ID of the instance to which the service belongs.
    // 
    // > You must specify InstanceId or ClusterId.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The namespace to which the service belongs.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
    // The name of the service whose listeners you want to query.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
