// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AttachTypes, attachTypes_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(VpcInstanceIds, vpcInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AttachTypes, attachTypes_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceIds, vpcInstanceIds_);
    };
    DescribeVulListRequest() = default ;
    DescribeVulListRequest(const DescribeVulListRequest &) = default ;
    DescribeVulListRequest(DescribeVulListRequest &&) = default ;
    DescribeVulListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListRequest() = default ;
    DescribeVulListRequest& operator=(const DescribeVulListRequest &) = default ;
    DescribeVulListRequest& operator=(DescribeVulListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->attachTypes_ == nullptr && return this->clusterId_ == nullptr && return this->currentPage_ == nullptr && return this->dealed_ == nullptr && return this->groupId_ == nullptr
        && return this->ids_ == nullptr && return this->lang_ == nullptr && return this->name_ == nullptr && return this->necessity_ == nullptr && return this->nextToken_ == nullptr
        && return this->pageSize_ == nullptr && return this->raspDefend_ == nullptr && return this->remark_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr && return this->statusList_ == nullptr
        && return this->targetType_ == nullptr && return this->type_ == nullptr && return this->useNextToken_ == nullptr && return this->uuids_ == nullptr && return this->vpcInstanceIds_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeVulListRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // attachTypes Field Functions 
    bool hasAttachTypes() const { return this->attachTypes_ != nullptr;};
    void deleteAttachTypes() { this->attachTypes_ = nullptr;};
    inline string attachTypes() const { DARABONBA_PTR_GET_DEFAULT(attachTypes_, "") };
    inline DescribeVulListRequest& setAttachTypes(string attachTypes) { DARABONBA_PTR_SET_VALUE(attachTypes_, attachTypes) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeVulListRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVulListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeVulListRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeVulListRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline DescribeVulListRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVulListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVulListRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeVulListRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVulListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // raspDefend Field Functions 
    bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
    void deleteRaspDefend() { this->raspDefend_ = nullptr;};
    inline int32_t raspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
    inline DescribeVulListRequest& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeVulListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeVulListRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string statusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline DescribeVulListRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeVulListRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool useNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline DescribeVulListRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeVulListRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


    // vpcInstanceIds Field Functions 
    bool hasVpcInstanceIds() const { return this->vpcInstanceIds_ != nullptr;};
    void deleteVpcInstanceIds() { this->vpcInstanceIds_ = nullptr;};
    inline string vpcInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceIds_, "") };
    inline DescribeVulListRequest& setVpcInstanceIds(string vpcInstanceIds) { DARABONBA_PTR_SET_VALUE(vpcInstanceIds_, vpcInstanceIds) };


  protected:
    // The name of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The additional type of the vulnerabilities. You need to specify this parameter when you query application vulnerabilities. Set the value to **sca**. If you set **Type** to **app**, you must specify this parameter.
    // 
    // > If you set this parameter to **sca**, application vulnerabilities and the vulnerabilities that are detected based on software component analysis are queried. If you do not specify this parameter, only application vulnerabilities are queried.
    std::shared_ptr<string> attachTypes_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether the vulnerabilities are fixed. Valid values:
    // 
    // *   **y**: yes
    // *   **n**: no
    std::shared_ptr<string> dealed_ = nullptr;
    // The ID of the asset group.
    // 
    // > You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of asset groups.
    std::shared_ptr<string> groupId_ = nullptr;
    // The IDs of vulnerabilities. You can specify up to 50 IDs. Separate multiple IDs with commas (,).
    std::shared_ptr<string> ids_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The alias of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The priority to fix the vulnerability. Separate multiple priorities with commas (,). Valid values:
    // 
    // *   **asap**: high
    // *   **later**: medium
    // *   **nntf**: low
    std::shared_ptr<string> necessity_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You must specify the token that is obtained from the previous query as the value of NextToken. You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries per page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Indicates whether the application protection feature is supported. Valid values:
    // 
    // - **0**: no.
    // 
    // - **1**: yes.
    std::shared_ptr<int32_t> raspDefend_ = nullptr;
    // The remarks for the asset affected by the vulnerability. The value can be the private IP address, public IP address, or name of the asset.
    std::shared_ptr<string> remark_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The status of the vulnerability. Separate multiple statuses with commas (,). Valid values:
    // 
    // - 1: unfixed
    // - 2: fix failed
    // - 3: rollback failed
    // - 4: being fixed
    // - 5: being rolled back
    // - 6: being verified
    // - 7: fixed
    // - 8: fixed and to be restarted
    // - 9: rolled back
    // - 10: ignored
    // - 11: rolled back and to be restarted
    // - 12: not found
    // - 20: expired
    std::shared_ptr<string> statusList_ = nullptr;
    // The type of the asset on which the vulnerability is detected. Valid values:
    // 
    // *   **k8s**: Kubernetes component.
    // *   **uuid**: server.
    // *   **containerId**: container.
    std::shared_ptr<string> targetType_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability.
    // *   **app**: application vulnerability that is detected by using web scanner
    // *   **emg**: urgent vulnerability.
    // *   **sca**: application vulnerability that is detected by using software component analysis
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // Specifies whether to use NextToken to query the data of vulnerabilities. If you set UseNextToken to true, the value of TotalCount is not returned. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> useNextToken_ = nullptr;
    // The UUIDs of the servers on which you want to query the vulnerabilities. Separate multiple UUIDs with commas (,).
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to obtain the UUIDs.
    std::shared_ptr<string> uuids_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the vulnerabilities are detected. Separate multiple IDs with commas (,).
    std::shared_ptr<string> vpcInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
