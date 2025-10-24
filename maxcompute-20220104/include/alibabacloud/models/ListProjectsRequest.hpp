// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListProjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(listSystemCatalog, listSystemCatalog_);
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
      DARABONBA_PTR_TO_JSON(quotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(quotaNickName, quotaNickName_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(saleTags, saleTags_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(listSystemCatalog, listSystemCatalog_);
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(quotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(quotaNickName, quotaNickName_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(saleTags, saleTags_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListProjectsRequest() = default ;
    ListProjectsRequest(const ListProjectsRequest &) = default ;
    ListProjectsRequest(ListProjectsRequest &&) = default ;
    ListProjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsRequest() = default ;
    ListProjectsRequest& operator=(const ListProjectsRequest &) = default ;
    ListProjectsRequest& operator=(ListProjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listSystemCatalog_ == nullptr
        && return this->marker_ == nullptr && return this->maxItem_ == nullptr && return this->prefix_ == nullptr && return this->quotaName_ == nullptr && return this->quotaNickName_ == nullptr
        && return this->region_ == nullptr && return this->saleTags_ == nullptr && return this->tenantId_ == nullptr && return this->type_ == nullptr; };
    // listSystemCatalog Field Functions 
    bool hasListSystemCatalog() const { return this->listSystemCatalog_ != nullptr;};
    void deleteListSystemCatalog() { this->listSystemCatalog_ = nullptr;};
    inline bool listSystemCatalog() const { DARABONBA_PTR_GET_DEFAULT(listSystemCatalog_, false) };
    inline ListProjectsRequest& setListSystemCatalog(bool listSystemCatalog) { DARABONBA_PTR_SET_VALUE(listSystemCatalog_, listSystemCatalog) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListProjectsRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline ListProjectsRequest& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListProjectsRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListProjectsRequest& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaNickName Field Functions 
    bool hasQuotaNickName() const { return this->quotaNickName_ != nullptr;};
    void deleteQuotaNickName() { this->quotaNickName_ = nullptr;};
    inline string quotaNickName() const { DARABONBA_PTR_GET_DEFAULT(quotaNickName_, "") };
    inline ListProjectsRequest& setQuotaNickName(string quotaNickName) { DARABONBA_PTR_SET_VALUE(quotaNickName_, quotaNickName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListProjectsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // saleTags Field Functions 
    bool hasSaleTags() const { return this->saleTags_ != nullptr;};
    void deleteSaleTags() { this->saleTags_ = nullptr;};
    inline string saleTags() const { DARABONBA_PTR_GET_DEFAULT(saleTags_, "") };
    inline ListProjectsRequest& setSaleTags(string saleTags) { DARABONBA_PTR_SET_VALUE(saleTags_, saleTags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListProjectsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to list the built-in **SYSTEM_CATALOG** projects that are used to provide data such as project metadata and historical usage data. For more information, see [Tenant-level Information Schema](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/tenant-level-information-schema).
    // 
    // Valid values:
    // 
    // *   true: The built-in SYSTEM_CATALOG projects are listed.
    // *   false: The built-in SYSTEM_CATALOG projects are not listed.
    std::shared_ptr<bool> listSystemCatalog_ = nullptr;
    // The maximum number of entries to return on each page.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> maxItem_ = nullptr;
    // Specifies the marker after which the returned list begins.
    std::shared_ptr<string> prefix_ = nullptr;
    // The quota name that is automatically generated. You can log on to the [MaxCompute console](https://maxcompute.console.aliyun.com), choose **Workspace** > **Quotas** from the left-side navigation pane, and then view the quota name on the **Quotas** page.
    std::shared_ptr<string> quotaName_ = nullptr;
    // The quota nickname. You can log on to the [MaxCompute console](https://maxcompute.console.aliyun.com), choose **Workspace** > **Quotas** from the left-side navigation pane, and then view the quota nickname on the **Quotas** page.
    std::shared_ptr<string> quotaNickName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The instance ID and billing method of the default computing quota.
    std::shared_ptr<string> saleTags_ = nullptr;
    // The tenant ID. You can log on to the [MaxCompute console](https://maxcompute.console.aliyun.com), and choose **Tenants** > **Tenant Property** from the left-side navigation pane to view the tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The project type. Valid values:
    // 
    // *   **managed**: internal project
    // *   **external**: external project
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
