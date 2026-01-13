// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPABASEPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPABASEPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSupabaseProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupabaseProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupabaseProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListSupabaseProjectsResponseBody() = default ;
    ListSupabaseProjectsResponseBody(const ListSupabaseProjectsResponseBody &) = default ;
    ListSupabaseProjectsResponseBody(ListSupabaseProjectsResponseBody &&) = default ;
    ListSupabaseProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupabaseProjectsResponseBody() = default ;
    ListSupabaseProjectsResponseBody& operator=(const ListSupabaseProjectsResponseBody &) = default ;
    ListSupabaseProjectsResponseBody& operator=(ListSupabaseProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DashboardPassword, dashboardPassword_);
        DARABONBA_PTR_TO_JSON(DashboardUserName, dashboardUserName_);
        DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(PrivateConnectUrl, privateConnectUrl_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(ProjectSpec, projectSpec_);
        DARABONBA_PTR_TO_JSON(PublicConnectUrl, publicConnectUrl_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DashboardPassword, dashboardPassword_);
        DARABONBA_PTR_FROM_JSON(DashboardUserName, dashboardUserName_);
        DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(PrivateConnectUrl, privateConnectUrl_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(ProjectSpec, projectSpec_);
        DARABONBA_PTR_FROM_JSON(PublicConnectUrl, publicConnectUrl_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dashboardPassword_ == nullptr && this->dashboardUserName_ == nullptr && this->diskPerformanceLevel_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->expireTime_ == nullptr && this->payType_ == nullptr && this->privateConnectUrl_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->projectSpec_ == nullptr && this->publicConnectUrl_ == nullptr && this->regionId_ == nullptr && this->securityIPList_ == nullptr && this->status_ == nullptr
        && this->storageSize_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dashboardPassword Field Functions 
      bool hasDashboardPassword() const { return this->dashboardPassword_ != nullptr;};
      void deleteDashboardPassword() { this->dashboardPassword_ = nullptr;};
      inline string getDashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(dashboardPassword_, "") };
      inline Items& setDashboardPassword(string dashboardPassword) { DARABONBA_PTR_SET_VALUE(dashboardPassword_, dashboardPassword) };


      // dashboardUserName Field Functions 
      bool hasDashboardUserName() const { return this->dashboardUserName_ != nullptr;};
      void deleteDashboardUserName() { this->dashboardUserName_ = nullptr;};
      inline string getDashboardUserName() const { DARABONBA_PTR_GET_DEFAULT(dashboardUserName_, "") };
      inline Items& setDashboardUserName(string dashboardUserName) { DARABONBA_PTR_SET_VALUE(dashboardUserName_, dashboardUserName) };


      // diskPerformanceLevel Field Functions 
      bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
      void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
      inline string getDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
      inline Items& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Items& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Items& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Items& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Items& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // privateConnectUrl Field Functions 
      bool hasPrivateConnectUrl() const { return this->privateConnectUrl_ != nullptr;};
      void deletePrivateConnectUrl() { this->privateConnectUrl_ = nullptr;};
      inline string getPrivateConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(privateConnectUrl_, "") };
      inline Items& setPrivateConnectUrl(string privateConnectUrl) { DARABONBA_PTR_SET_VALUE(privateConnectUrl_, privateConnectUrl) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Items& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Items& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // projectSpec Field Functions 
      bool hasProjectSpec() const { return this->projectSpec_ != nullptr;};
      void deleteProjectSpec() { this->projectSpec_ = nullptr;};
      inline string getProjectSpec() const { DARABONBA_PTR_GET_DEFAULT(projectSpec_, "") };
      inline Items& setProjectSpec(string projectSpec) { DARABONBA_PTR_SET_VALUE(projectSpec_, projectSpec) };


      // publicConnectUrl Field Functions 
      bool hasPublicConnectUrl() const { return this->publicConnectUrl_ != nullptr;};
      void deletePublicConnectUrl() { this->publicConnectUrl_ = nullptr;};
      inline string getPublicConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(publicConnectUrl_, "") };
      inline Items& setPublicConnectUrl(string publicConnectUrl) { DARABONBA_PTR_SET_VALUE(publicConnectUrl_, publicConnectUrl) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline Items& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
      inline Items& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Items& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Items& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Items& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The creation time.
      shared_ptr<string> createTime_ {};
      // Supabase Dashboard password (not used).
      shared_ptr<string> dashboardPassword_ {};
      // Supabase Dashboard user name (not used).
      shared_ptr<string> dashboardUserName_ {};
      // The ESSD performance level.
      shared_ptr<string> diskPerformanceLevel_ {};
      // The database engine type.
      shared_ptr<string> engine_ {};
      // The database engine version.
      shared_ptr<string> engineVersion_ {};
      shared_ptr<string> expireTime_ {};
      // The billing method of the instance. Valid values:
      // 
      // *   **Postpaid**: pay-as-you-go
      // *   **Prepaid**: subscription.
      // *   **Free**: Free.
      shared_ptr<string> payType_ {};
      // The private (VPC) connection URL for the Supabase Dashboard.
      shared_ptr<string> privateConnectUrl_ {};
      // The Supabase project ID.
      shared_ptr<string> projectId_ {};
      // The name of the Supabase project.
      shared_ptr<string> projectName_ {};
      // The type of the Supabase instance.
      shared_ptr<string> projectSpec_ {};
      // The public connection URL for the Supabase Dashboard.
      shared_ptr<string> publicConnectUrl_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // A comma-separated list of IP addresses and CIDR blocks allowed to connect. Valid values:
      // 
      // *   0.0.0.0/0
      // *   10.23.12.24(IP)
      // *   10.23.12.24/24. This is a CIDR block. The value`/24`indicates that the prefix of the CIDR block is 24-bit long. You can replace 24 with a value in the range of`[1,32]`.
      shared_ptr<string> securityIPList_ {};
      // The status of the Supabase instance.
      shared_ptr<string> status_ {};
      // The storage capacity of the instance. Unit: GB.
      shared_ptr<int64_t> storageSize_ {};
      // The vSwitch ID of the instance.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListSupabaseProjectsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListSupabaseProjectsResponseBody::Items>) };
    inline vector<ListSupabaseProjectsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListSupabaseProjectsResponseBody::Items>) };
    inline ListSupabaseProjectsResponseBody& setItems(const vector<ListSupabaseProjectsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSupabaseProjectsResponseBody& setItems(vector<ListSupabaseProjectsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSupabaseProjectsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupabaseProjectsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSupabaseProjectsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListSupabaseProjectsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupabaseProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListSupabaseProjectsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // A list of objects, where each object represents a Supabase instance.
    shared_ptr<vector<ListSupabaseProjectsResponseBody::Items>> items_ {};
    // The maximum amount of data to read this time. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token to use in the next request to get the next page. If this field is empty, there are no more results.
    shared_ptr<string> nextToken_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of log entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
