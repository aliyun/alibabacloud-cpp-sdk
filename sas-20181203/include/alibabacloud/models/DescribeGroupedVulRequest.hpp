// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDVULREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDVULREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedVulRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedVulRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AttachTypes, attachTypes_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SearchTags, searchTags_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedVulRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AttachTypes, attachTypes_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SearchTags, searchTags_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeGroupedVulRequest() = default ;
    DescribeGroupedVulRequest(const DescribeGroupedVulRequest &) = default ;
    DescribeGroupedVulRequest(DescribeGroupedVulRequest &&) = default ;
    DescribeGroupedVulRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedVulRequest() = default ;
    DescribeGroupedVulRequest& operator=(const DescribeGroupedVulRequest &) = default ;
    DescribeGroupedVulRequest& operator=(DescribeGroupedVulRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->assetType_ == nullptr && this->attachTypes_ == nullptr && this->clusterId_ == nullptr && this->containerFieldName_ == nullptr && this->containerFieldValue_ == nullptr
        && this->currentPage_ == nullptr && this->cveId_ == nullptr && this->dealed_ == nullptr && this->groupId_ == nullptr && this->lang_ == nullptr
        && this->necessity_ == nullptr && this->pageSize_ == nullptr && this->raspDefend_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->searchTags_ == nullptr
        && this->targetType_ == nullptr && this->type_ == nullptr && this->uuids_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeGroupedVulRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeGroupedVulRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // attachTypes Field Functions 
    bool hasAttachTypes() const { return this->attachTypes_ != nullptr;};
    void deleteAttachTypes() { this->attachTypes_ = nullptr;};
    inline string getAttachTypes() const { DARABONBA_PTR_GET_DEFAULT(attachTypes_, "") };
    inline DescribeGroupedVulRequest& setAttachTypes(string attachTypes) { DARABONBA_PTR_SET_VALUE(attachTypes_, attachTypes) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeGroupedVulRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string getContainerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeGroupedVulRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string getContainerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeGroupedVulRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeGroupedVulRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline DescribeGroupedVulRequest& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeGroupedVulRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeGroupedVulRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupedVulRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeGroupedVulRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGroupedVulRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // raspDefend Field Functions 
    bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
    void deleteRaspDefend() { this->raspDefend_ = nullptr;};
    inline int32_t getRaspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
    inline DescribeGroupedVulRequest& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeGroupedVulRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // searchTags Field Functions 
    bool hasSearchTags() const { return this->searchTags_ != nullptr;};
    void deleteSearchTags() { this->searchTags_ = nullptr;};
    inline string getSearchTags() const { DARABONBA_PTR_GET_DEFAULT(searchTags_, "") };
    inline DescribeGroupedVulRequest& setSearchTags(string searchTags) { DARABONBA_PTR_SET_VALUE(searchTags_, searchTags) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeGroupedVulRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGroupedVulRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeGroupedVulRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The alias of the vulnerability.
    shared_ptr<string> aliasName_ {};
    // The type of the asset on which the vulnerability is detected. Separate multiple types with commas (,). Valid values:
    // 
    // *   **ECS**: Elastic Compute Service (ECS) instance
    // *   **CONTAINER**: container
    shared_ptr<string> assetType_ {};
    // The type of the vulnerability. This parameter is valid only for application vulnerabilities. Separate multiple values with commas (,). Valid values:
    // 
    // *   **sca**: vulnerability that is detected based on software component analysis
    // *   **app**: application vulnerability
    shared_ptr<string> attachTypes_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The key of the condition that is used to query containers. Valid values:
    // 
    // *   **instanceId**: the ID of the asset
    // *   **appName**: the name of the application
    // *   **clusterId**: the ID of the cluster
    // *   **regionId**: the ID of the region
    // *   **nodeName**: the name of the node
    // *   **namespace**: the namespace
    // *   **clusterName**: the name of the cluster
    // *   **image**: the name of the image
    // *   **imageRepoName**: the name of the image repository
    // *   **imageRepoNamespace**: the namespace to which the image repository belongs
    // *   **imageRepoTag**: the tag that is added to the image
    // *   **imageDigest**: the digest of the image
    shared_ptr<string> containerFieldName_ {};
    // The value specified by **ContainerFieldName**.
    shared_ptr<string> containerFieldValue_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The CVE ID.
    // 
    // >  You can call the [DescribeVulListPage](~~DescribeVulListPage~~) operation to query the CVE ID.
    shared_ptr<string> cveId_ {};
    // Specifies whether the vulnerability is handled. Valid values:
    // 
    // *   **y**: handled
    // *   **n**: not handled
    shared_ptr<string> dealed_ {};
    // The ID of the asset group.
    shared_ptr<string> groupId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The priorities to fix the vulnerabilities. Separate multiple priorities with commas (,). Valid values:
    // 
    // *   **asap**: high
    // *   **later**: medium
    // *   **nntf**: low
    shared_ptr<string> necessity_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Indicates whether the application protection feature is supported. Valid values:
    // 
    // - **0**: no.
    // 
    // - **1**: yes.
    shared_ptr<int32_t> raspDefend_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the account ID.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The tag that is used to search for the vulnerability. Valid values:
    // 
    // *   **Restart required**
    // *   **Remote utilization**
    // *   **EXP exists**
    // *   **Available**
    // *   **Elevation of Privilege**
    // *   **Code Execution**
    shared_ptr<string> searchTags_ {};
    // The query type for containers. Valid values:
    // 
    // *   **containerId**: the ID of the container
    // *   **uuid**: the ID of the asset
    shared_ptr<string> targetType_ {};
    // The type of the vulnerability that you want to query. Default value: cve. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **app**: application vulnerability that is detected by network scanning
    // *   **sca**: application vulnerability that is detected by software component analysis
    shared_ptr<string> type_ {};
    // The UUID of the server. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
