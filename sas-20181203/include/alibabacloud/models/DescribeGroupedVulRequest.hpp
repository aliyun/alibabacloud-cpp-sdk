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
    // The alias of the vulnerability to query.
    shared_ptr<string> aliasName_ {};
    // The Asset Type where the vulnerability is detected. Separate multiple types with commas (,). Valid values:
    // - **ECS**: host asset
    // - **CONTAINER**: container asset.
    shared_ptr<string> assetType_ {};
    // The vulnerability type. This query condition is valid only for application vulnerabilities. Separate multiple values with commas (,). Valid values:
    // - **sca**: software constituency parsing vulnerability
    // - **app**: application vulnerability.
    shared_ptr<string> attachTypes_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The container search field. Valid values:
    // 
    // - **instanceId**: instance ID
    // - **appName**: application name
    // - **clusterId**: cluster ID
    // - **regionId**: region
    // - **nodeName**: node name
    // - **namespace**: namespace
    // - **clusterName**: cluster name
    // - **image**: image name
    // - **imageRepoName**: image repository name
    // - **imageRepoNamespace**: image repository namespace
    // - **imageRepoTag**: image tag
    // - **imageDigest**: image digest.
    shared_ptr<string> containerFieldName_ {};
    // The value that corresponds to **ContainerFieldName**.
    shared_ptr<string> containerFieldValue_ {};
    // The page number of the first page to display in the query results. Default value: **1**, which indicates that the results start from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The CVE ID.
    // > Call the [DescribeVulListPage](~~DescribeVulListPage~~) operation to obtain this parameter.
    shared_ptr<string> cveId_ {};
    // Specifies whether the vulnerability is handled. Valid values:
    // 
    // - **y**: handled
    // - **n**: not handled.
    shared_ptr<string> dealed_ {};
    // The ID of the asset group.
    shared_ptr<string> groupId_ {};
    // The language type of the request and response. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The priority of the vulnerability fix to query. Separate multiple priorities with commas (,). Valid values:
    // 
    // - **asap**: high
    // - **later**: medium
    // - **nntf**: low.
    shared_ptr<string> necessity_ {};
    // The number of vulnerability entries per page in a paged query. Default value: 10, which indicates that 10 vulnerability entries are displayed per page.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether Runtime Application Self-Protection (RASP) supports real-time protection against the vulnerability. Valid values:
    // 
    // - **0**: Not supported.
    // - **1**: Supported.
    shared_ptr<int32_t> raspDefend_ {};
    // The ID of the Alibaba Cloud account that is added as one of the member accounts in a resource folder.
    // > Invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The label used for filtering. Valid values:
    // 
    // - **Restart required**
    // - **Remote utilization**
    // - **EXP exists**
    // - **Available**
    // - **Privilege escalation**
    // - **Code execution**
    shared_ptr<string> searchTags_ {};
    // The container query type. Valid values:
    // 
    // - **containerId**: container ID
    // - **uuid**: asset ID.
    shared_ptr<string> targetType_ {};
    // The type of the vulnerability to query. Default value: cve. Valid values:
    // 
    // - **cve**: Linux software vulnerability
    // - **sys**: Windows system vulnerability
    // - **cms**: Web-CMS vulnerability
    // - **app**: application vulnerability (network scan)
    // - **sca**: application vulnerability (software constituency parsing).
    shared_ptr<string> type_ {};
    // The UUIDs of the servers to query. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
