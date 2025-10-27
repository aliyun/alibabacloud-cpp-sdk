// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDCENTERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudCenterInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudCenterInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Flags, flags_);
      DARABONBA_PTR_TO_JSON(Importance, importance_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NoGroupTrace, noGroupTrace_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudCenterInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Flags, flags_);
      DARABONBA_PTR_FROM_JSON(Importance, importance_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NoGroupTrace, noGroupTrace_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
    };
    DescribeCloudCenterInstancesRequest() = default ;
    DescribeCloudCenterInstancesRequest(const DescribeCloudCenterInstancesRequest &) = default ;
    DescribeCloudCenterInstancesRequest(DescribeCloudCenterInstancesRequest &&) = default ;
    DescribeCloudCenterInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudCenterInstancesRequest() = default ;
    DescribeCloudCenterInstancesRequest& operator=(const DescribeCloudCenterInstancesRequest &) = default ;
    DescribeCloudCenterInstancesRequest& operator=(DescribeCloudCenterInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && return this->currentPage_ == nullptr && return this->flags_ == nullptr && return this->importance_ == nullptr && return this->lang_ == nullptr && return this->logicalExp_ == nullptr
        && return this->machineTypes_ == nullptr && return this->nextToken_ == nullptr && return this->noGroupTrace_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceDirectoryAccountId_ == nullptr && return this->useNextToken_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeCloudCenterInstancesRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCloudCenterInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // flags Field Functions 
    bool hasFlags() const { return this->flags_ != nullptr;};
    void deleteFlags() { this->flags_ = nullptr;};
    inline string flags() const { DARABONBA_PTR_GET_DEFAULT(flags_, "") };
    inline DescribeCloudCenterInstancesRequest& setFlags(string flags) { DARABONBA_PTR_SET_VALUE(flags_, flags) };


    // importance Field Functions 
    bool hasImportance() const { return this->importance_ != nullptr;};
    void deleteImportance() { this->importance_ = nullptr;};
    inline int32_t importance() const { DARABONBA_PTR_GET_DEFAULT(importance_, 0) };
    inline DescribeCloudCenterInstancesRequest& setImportance(int32_t importance) { DARABONBA_PTR_SET_VALUE(importance_, importance) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCloudCenterInstancesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string logicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline DescribeCloudCenterInstancesRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline string machineTypes() const { DARABONBA_PTR_GET_DEFAULT(machineTypes_, "") };
    inline DescribeCloudCenterInstancesRequest& setMachineTypes(string machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudCenterInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // noGroupTrace Field Functions 
    bool hasNoGroupTrace() const { return this->noGroupTrace_ != nullptr;};
    void deleteNoGroupTrace() { this->noGroupTrace_ = nullptr;};
    inline bool noGroupTrace() const { DARABONBA_PTR_GET_DEFAULT(noGroupTrace_, false) };
    inline DescribeCloudCenterInstancesRequest& setNoGroupTrace(bool noGroupTrace) { DARABONBA_PTR_SET_VALUE(noGroupTrace_, noGroupTrace) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudCenterInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCloudCenterInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeCloudCenterInstancesRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool useNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline DescribeCloudCenterInstancesRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


  protected:
    // The search conditions. The value of this parameter is in the JSON format and is case-sensitive.
    // 
    // >  You can search for an asset by using the search conditions, such as the instance ID, instance name, VPC ID, region, or public IP address. You can call the [DescribeCriteria](https://help.aliyun.com/document_detail/149773.html) operation to query the supported search conditions.
    std::shared_ptr<string> criteria_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Asset vendor. Multiple asset vendors should be separated by a comma (,). Values:
    // - **0**: an asset provided by Alibaba Cloud
    // - **1**: an asset outside Alibaba Cloud
    // - **2**: an asset in a data center
    // - **3**, **4**, **5**, **7**, **14**, **16**: an asset from a third-party cloud service provider
    // - **8**: a lightweight asset
    // - **9**: a Serverless App Engine (SAE) instance
    // - **10**: an instance in Platform for AI (PAI)
    std::shared_ptr<string> flags_ = nullptr;
    // The importance of the asset. Valid values:
    // 
    // *   **2**: an important asset
    // *   **1**: a common asset
    // *   **0**: a test asset
    std::shared_ptr<int32_t> importance_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The logical relationship among multiple search conditions. Valid values:
    // 
    // *   **OR**: The logical relationship among search conditions is **OR**.
    // *   **AND**: The logical relationship among search conditions is **AND**.
    std::shared_ptr<string> logicalExp_ = nullptr;
    // The type of asset to be queried. Values:
    // - **ecs**: Server 
    // - **cloud_product**: Cloud Product 
    // - **eci**: Elastic Container Instance 
    // - **rund**: RunD Container Instance 
    // - **runc**: RunC Container Instance
    std::shared_ptr<string> machineTypes_ = nullptr;
    // The value of NextToken that is returned when the NextToken method is used. You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Specifies whether to internationalize the name of the default group. Valid values:
    // 
    // *   **true**: The system returns the Chinese name of the default group for the GroupTrace response parameter.
    // *   **false**: The system returns default for the GroupTrace response parameter.
    std::shared_ptr<bool> noGroupTrace_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region in which the asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // Specifies whether to use the NextToken method to retrieve a new page of results. If you set UseNextToken to true, the value of TotalCount is not returned. Valid values:
    // 
    // - **true**: The NextToken method is used.
    // - **false**: The NextToken method is not used.
    std::shared_ptr<bool> useNextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
