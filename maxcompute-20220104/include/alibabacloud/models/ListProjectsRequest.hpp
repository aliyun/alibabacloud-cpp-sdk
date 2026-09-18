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
      DARABONBA_PTR_TO_JSON(sortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(sortOrder, sortOrder_);
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
      DARABONBA_PTR_FROM_JSON(sortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(sortOrder, sortOrder_);
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
        && this->marker_ == nullptr && this->maxItem_ == nullptr && this->prefix_ == nullptr && this->quotaName_ == nullptr && this->quotaNickName_ == nullptr
        && this->region_ == nullptr && this->saleTags_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr && this->tenantId_ == nullptr
        && this->type_ == nullptr; };
    // listSystemCatalog Field Functions 
    bool hasListSystemCatalog() const { return this->listSystemCatalog_ != nullptr;};
    void deleteListSystemCatalog() { this->listSystemCatalog_ = nullptr;};
    inline bool getListSystemCatalog() const { DARABONBA_PTR_GET_DEFAULT(listSystemCatalog_, false) };
    inline ListProjectsRequest& setListSystemCatalog(bool listSystemCatalog) { DARABONBA_PTR_SET_VALUE(listSystemCatalog_, listSystemCatalog) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListProjectsRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t getMaxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline ListProjectsRequest& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListProjectsRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListProjectsRequest& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaNickName Field Functions 
    bool hasQuotaNickName() const { return this->quotaNickName_ != nullptr;};
    void deleteQuotaNickName() { this->quotaNickName_ = nullptr;};
    inline string getQuotaNickName() const { DARABONBA_PTR_GET_DEFAULT(quotaNickName_, "") };
    inline ListProjectsRequest& setQuotaNickName(string quotaNickName) { DARABONBA_PTR_SET_VALUE(quotaNickName_, quotaNickName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListProjectsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // saleTags Field Functions 
    bool hasSaleTags() const { return this->saleTags_ != nullptr;};
    void deleteSaleTags() { this->saleTags_ = nullptr;};
    inline string getSaleTags() const { DARABONBA_PTR_GET_DEFAULT(saleTags_, "") };
    inline ListProjectsRequest& setSaleTags(string saleTags) { DARABONBA_PTR_SET_VALUE(saleTags_, saleTags) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListProjectsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListProjectsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListProjectsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to list the built-in **SYSTEM_CATALOG** project. This project provides information such as project metadata and usage history. For more information, see <props="intl">[Information Schema](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/tenant-level-information-schema).
    shared_ptr<bool> listSystemCatalog_ {};
    // The token that specifies the starting point of the query. The results are returned in alphabetical order, starting from the entry that immediately follows the marker.
    shared_ptr<string> marker_ {};
    // The maximum number of entries to return on each page. Default value: 10.
    shared_ptr<int32_t> maxItem_ {};
    // The prefix of the resource names to query. For example, if you specify `a` for this parameter, only resources whose names start with "a" are returned.
    shared_ptr<string> prefix_ {};
    // The quota name. The system automatically generates this name. To obtain the quota name, log in to the [MaxCompute console](https://maxcompute.console.aliyun.com) and select **Workspace** > **Quota** **Management** from the navigation pane on the left.
    shared_ptr<string> quotaName_ {};
    // The quota nickname. To obtain the quota nickname, log in to the [MaxCompute console](https://maxcompute.console.aliyun.com) and select **Workspace** > **Quota** **Management** from the navigation pane on the left.
    shared_ptr<string> quotaNickName_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The instance ID and billing method of the default compute quota.
    shared_ptr<string> saleTags_ {};
    // The sort field. The only supported value is `createdTime`.
    shared_ptr<string> sortBy_ {};
    // The sort order. This parameter takes effect only when `sortBy` is specified. Valid values are `ASC` and `DESC`. The values are case-insensitive.
    shared_ptr<string> sortOrder_ {};
    // The tenant ID. To obtain the ID, log in to the [MaxCompute console](https://maxcompute.console.aliyun.com) and select **Tenant Management** > **Tenant Properties** from the navigation pane on the left.
    shared_ptr<string> tenantId_ {};
    // The project type. Valid values:
    // 
    // - **managed**: a managed project.
    // 
    // - **external**: an external project.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
