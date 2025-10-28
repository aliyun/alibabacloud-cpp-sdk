// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceListPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(origin, origin_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(searchType, searchType_);
      DARABONBA_PTR_TO_JSON(searchValue, searchValue_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
      DARABONBA_PTR_TO_JSON(side, side_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(origin, origin_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(searchType, searchType_);
      DARABONBA_PTR_FROM_JSON(searchValue, searchValue_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(side, side_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    GetServiceListPageRequest() = default ;
    GetServiceListPageRequest(const GetServiceListPageRequest &) = default ;
    GetServiceListPageRequest(GetServiceListPageRequest &&) = default ;
    GetServiceListPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListPageRequest() = default ;
    GetServiceListPageRequest& operator=(const GetServiceListPageRequest &) = default ;
    GetServiceListPageRequest& operator=(GetServiceListPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && return this->origin_ == nullptr && return this->page_ == nullptr && return this->region_ == nullptr && return this->searchType_ == nullptr && return this->searchValue_ == nullptr
        && return this->serviceType_ == nullptr && return this->side_ == nullptr && return this->size_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetServiceListPageRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline GetServiceListPageRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetServiceListPageRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetServiceListPageRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline GetServiceListPageRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // searchValue Field Functions 
    bool hasSearchValue() const { return this->searchValue_ != nullptr;};
    void deleteSearchValue() { this->searchValue_ = nullptr;};
    inline string searchValue() const { DARABONBA_PTR_GET_DEFAULT(searchValue_, "") };
    inline GetServiceListPageRequest& setSearchValue(string searchValue) { DARABONBA_PTR_SET_VALUE(searchValue_, searchValue) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceListPageRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // side Field Functions 
    bool hasSide() const { return this->side_ != nullptr;};
    void deleteSide() { this->side_ = nullptr;};
    inline string side() const { DARABONBA_PTR_GET_DEFAULT(side_, "") };
    inline GetServiceListPageRequest& setSide(string side) { DARABONBA_PTR_SET_VALUE(side_, side) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetServiceListPageRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The source of the data. Valid values:
    // 
    // *   `agent`: Use this value if you use the service query feature of the latest version to pass the query result.
    // *   `registry`: Use this value if you use the service query feature of the earlier version to pass the query result.
    std::shared_ptr<string> origin_ = nullptr;
    // The number of the page to return. Pages start from Page 0.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   `app`: searches by application.
    // *   `service`: searches by service.
    // *   `providerIp`: searches by IP address.
    std::shared_ptr<string> searchType_ = nullptr;
    // The keyword used for the search.
    // 
    // *   Set this parameter to the ID of the application if you set the searchType parameter to app.``
    // *   Set this parameter to the name of the service if you set the serachType parameter to service.``
    // *   Set this parameter to the IP address of the application if you set the searchType parameter to providerIp.
    std::shared_ptr<string> searchValue_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   `dubbo`
    // *   `springCloud`
    // *   `hsf`
    // *   `istio`
    std::shared_ptr<string> serviceType_ = nullptr;
    // Specifies the provider side or the consumer side. Valid values:
    // 
    // *   provider
    // *   consumer
    std::shared_ptr<string> side_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
