// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ListInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantIsolationType, tenantIsolationType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantIsolationType, tenantIsolationType_);
    };
    ListInstancesRequest() = default ;
    ListInstancesRequest(const ListInstancesRequest &) = default ;
    ListInstancesRequest(ListInstancesRequest &&) = default ;
    ListInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesRequest() = default ;
    ListInstancesRequest& operator=(const ListInstancesRequest &) = default ;
    ListInstancesRequest& operator=(ListInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->tenantIsolationType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantIsolationType Field Functions 
    bool hasTenantIsolationType() const { return this->tenantIsolationType_ != nullptr;};
    void deleteTenantIsolationType() { this->tenantIsolationType_ = nullptr;};
    inline string tenantIsolationType() const { DARABONBA_PTR_GET_DEFAULT(tenantIsolationType_, "") };
    inline ListInstancesRequest& setTenantIsolationType(string tenantIsolationType) { DARABONBA_PTR_SET_VALUE(tenantIsolationType_, tenantIsolationType) };


  protected:
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries per page. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of HSMs that is classified based on resource isolation. Valid values:
    // - vsm: Virtual security modules (VSMs).
    // - hostedHsm: Dedicated HSMs.
    std::shared_ptr<string> tenantIsolationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
