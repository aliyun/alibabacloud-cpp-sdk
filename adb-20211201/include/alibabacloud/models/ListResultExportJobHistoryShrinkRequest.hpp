// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESULTEXPORTJOBHISTORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESULTEXPORTJOBHISTORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListResultExportJobHistoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResultExportJobHistoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Order, orderShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatusList, statusListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListResultExportJobHistoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Order, orderShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusListShrink_);
    };
    ListResultExportJobHistoryShrinkRequest() = default ;
    ListResultExportJobHistoryShrinkRequest(const ListResultExportJobHistoryShrinkRequest &) = default ;
    ListResultExportJobHistoryShrinkRequest(ListResultExportJobHistoryShrinkRequest &&) = default ;
    ListResultExportJobHistoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResultExportJobHistoryShrinkRequest() = default ;
    ListResultExportJobHistoryShrinkRequest& operator=(const ListResultExportJobHistoryShrinkRequest &) = default ;
    ListResultExportJobHistoryShrinkRequest& operator=(ListResultExportJobHistoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->databaseUser_ != nullptr && this->endTime_ != nullptr && this->orderShrink_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroup_ != nullptr && this->startTime_ != nullptr && this->statusListShrink_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databaseUser Field Functions 
    bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
    void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
    inline string databaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // orderShrink Field Functions 
    bool hasOrderShrink() const { return this->orderShrink_ != nullptr;};
    void deleteOrderShrink() { this->orderShrink_ = nullptr;};
    inline string orderShrink() const { DARABONBA_PTR_GET_DEFAULT(orderShrink_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setOrderShrink(string orderShrink) { DARABONBA_PTR_SET_VALUE(orderShrink_, orderShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusListShrink Field Functions 
    bool hasStatusListShrink() const { return this->statusListShrink_ != nullptr;};
    void deleteStatusListShrink() { this->statusListShrink_ = nullptr;};
    inline string statusListShrink() const { DARABONBA_PTR_GET_DEFAULT(statusListShrink_, "") };
    inline ListResultExportJobHistoryShrinkRequest& setStatusListShrink(string statusListShrink) { DARABONBA_PTR_SET_VALUE(statusListShrink_, statusListShrink) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> databaseUser_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The order in which to sort the SQL statements by field, which contains the `Field` and `Type` fields. Specify the order in the JSON format. Example: `[{"Field":"CreateTimee", "Type": "desc" }]`.
    // 
    // *   `Field` specifies the field that is used to sort the SQL statements. Valid values:
    // 
    //     *   `CreateTime`: the time when the result set export job was created.
    //     *   `Status`: the execution status.
    //     *   `DatabaseUser`: the name of the database account.
    //     *   `TimeCost`: the execution duration.
    //     *   `ResourceGroup`: the name of the resource group.
    //     *   `ExportRows`: the number of exported rows.
    //     *   `Progress`: the export progress.
    // 
    // *   `Type` specifies the sorting order. Valid values (case-insensitive):
    // 
    //     *   `Desc`: descending order.
    //     *   `Asc`: ascending order.
    std::shared_ptr<string> orderShrink_ = nullptr;
    // The page number. Pages start from page 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<string> pageSize_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the resource group that runs the result set export jobs. You can use this parameter to query the execution records of export jobs that are run in a specific resource group.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The execution status of result set export jobs. You can use this parameter to query the execution records of export jobs that are in a specific state.
    std::shared_ptr<string> statusListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
