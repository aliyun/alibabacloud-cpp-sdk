// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVIDERSPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVIDERSPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceProvidersPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvidersPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(origin, origin_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(registryType, registryType_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
      DARABONBA_PTR_TO_JSON(serviceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvidersPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(origin, origin_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(registryType, registryType_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(serviceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    GetServiceProvidersPageRequest() = default ;
    GetServiceProvidersPageRequest(const GetServiceProvidersPageRequest &) = default ;
    GetServiceProvidersPageRequest(GetServiceProvidersPageRequest &&) = default ;
    GetServiceProvidersPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvidersPageRequest() = default ;
    GetServiceProvidersPageRequest& operator=(const GetServiceProvidersPageRequest &) = default ;
    GetServiceProvidersPageRequest& operator=(GetServiceProvidersPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->group_ == nullptr && return this->ip_ == nullptr && return this->namespace_ == nullptr && return this->origin_ == nullptr && return this->page_ == nullptr
        && return this->region_ == nullptr && return this->registryType_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->serviceType_ == nullptr
        && return this->serviceVersion_ == nullptr && return this->size_ == nullptr && return this->source_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetServiceProvidersPageRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetServiceProvidersPageRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetServiceProvidersPageRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetServiceProvidersPageRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline GetServiceProvidersPageRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetServiceProvidersPageRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetServiceProvidersPageRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline GetServiceProvidersPageRequest& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceProvidersPageRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceProvidersPageRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceProvidersPageRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetServiceProvidersPageRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetServiceProvidersPageRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetServiceProvidersPageRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The group to which the service belongs.
    std::shared_ptr<string> group_ = nullptr;
    // The IP address of the service provider. Fuzzy searches are supported.
    std::shared_ptr<string> ip_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The source of data. Valid values:
    // 
    // *   agent: Use this value if you use the service query feature of the latest version to pass the query result.
    // *   registry: Use this value if you use the service query feature of the earlier version to pass the query result.
    std::shared_ptr<string> origin_ = nullptr;
    // The number of the page to return. Pages start from Page 0.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The type of the service registry. This parameter is deprecated. You can ignore it.
    std::shared_ptr<string> registryType_ = nullptr;
    // The ID of the service. This parameter is deprecated. You can ignore it.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   dubbo: Dubbo service
    // *   springCloud: Spring Cloud service
    // *   hsf: High-speed Service Framework (HSF) service
    std::shared_ptr<string> serviceType_ = nullptr;
    // The version of the service.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The source of the service. Set the value to edas.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
