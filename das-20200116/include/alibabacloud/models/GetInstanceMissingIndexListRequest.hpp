// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMISSINGINDEXLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMISSINGINDEXLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceMissingIndexListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMissingIndexListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvgTotalUserCost, avgTotalUserCost_);
      DARABONBA_PTR_TO_JSON(AvgUserImpact, avgUserImpact_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IndexCount, indexCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReservedPages, reservedPages_);
      DARABONBA_PTR_TO_JSON(ReservedSize, reservedSize_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UniqueCompiles, uniqueCompiles_);
      DARABONBA_PTR_TO_JSON(UserScans, userScans_);
      DARABONBA_PTR_TO_JSON(UserSeeks, userSeeks_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMissingIndexListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgTotalUserCost, avgTotalUserCost_);
      DARABONBA_PTR_FROM_JSON(AvgUserImpact, avgUserImpact_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IndexCount, indexCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReservedPages, reservedPages_);
      DARABONBA_PTR_FROM_JSON(ReservedSize, reservedSize_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UniqueCompiles, uniqueCompiles_);
      DARABONBA_PTR_FROM_JSON(UserScans, userScans_);
      DARABONBA_PTR_FROM_JSON(UserSeeks, userSeeks_);
    };
    GetInstanceMissingIndexListRequest() = default ;
    GetInstanceMissingIndexListRequest(const GetInstanceMissingIndexListRequest &) = default ;
    GetInstanceMissingIndexListRequest(GetInstanceMissingIndexListRequest &&) = default ;
    GetInstanceMissingIndexListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMissingIndexListRequest() = default ;
    GetInstanceMissingIndexListRequest& operator=(const GetInstanceMissingIndexListRequest &) = default ;
    GetInstanceMissingIndexListRequest& operator=(GetInstanceMissingIndexListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgTotalUserCost_ == nullptr
        && return this->avgUserImpact_ == nullptr && return this->endTime_ == nullptr && return this->indexCount_ == nullptr && return this->instanceId_ == nullptr && return this->objectName_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->reservedPages_ == nullptr && return this->reservedSize_ == nullptr && return this->rowCount_ == nullptr
        && return this->startTime_ == nullptr && return this->uniqueCompiles_ == nullptr && return this->userScans_ == nullptr && return this->userSeeks_ == nullptr; };
    // avgTotalUserCost Field Functions 
    bool hasAvgTotalUserCost() const { return this->avgTotalUserCost_ != nullptr;};
    void deleteAvgTotalUserCost() { this->avgTotalUserCost_ = nullptr;};
    inline string avgTotalUserCost() const { DARABONBA_PTR_GET_DEFAULT(avgTotalUserCost_, "") };
    inline GetInstanceMissingIndexListRequest& setAvgTotalUserCost(string avgTotalUserCost) { DARABONBA_PTR_SET_VALUE(avgTotalUserCost_, avgTotalUserCost) };


    // avgUserImpact Field Functions 
    bool hasAvgUserImpact() const { return this->avgUserImpact_ != nullptr;};
    void deleteAvgUserImpact() { this->avgUserImpact_ = nullptr;};
    inline string avgUserImpact() const { DARABONBA_PTR_GET_DEFAULT(avgUserImpact_, "") };
    inline GetInstanceMissingIndexListRequest& setAvgUserImpact(string avgUserImpact) { DARABONBA_PTR_SET_VALUE(avgUserImpact_, avgUserImpact) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetInstanceMissingIndexListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // indexCount Field Functions 
    bool hasIndexCount() const { return this->indexCount_ != nullptr;};
    void deleteIndexCount() { this->indexCount_ = nullptr;};
    inline string indexCount() const { DARABONBA_PTR_GET_DEFAULT(indexCount_, "") };
    inline GetInstanceMissingIndexListRequest& setIndexCount(string indexCount) { DARABONBA_PTR_SET_VALUE(indexCount_, indexCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceMissingIndexListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline GetInstanceMissingIndexListRequest& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline GetInstanceMissingIndexListRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetInstanceMissingIndexListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reservedPages Field Functions 
    bool hasReservedPages() const { return this->reservedPages_ != nullptr;};
    void deleteReservedPages() { this->reservedPages_ = nullptr;};
    inline string reservedPages() const { DARABONBA_PTR_GET_DEFAULT(reservedPages_, "") };
    inline GetInstanceMissingIndexListRequest& setReservedPages(string reservedPages) { DARABONBA_PTR_SET_VALUE(reservedPages_, reservedPages) };


    // reservedSize Field Functions 
    bool hasReservedSize() const { return this->reservedSize_ != nullptr;};
    void deleteReservedSize() { this->reservedSize_ = nullptr;};
    inline string reservedSize() const { DARABONBA_PTR_GET_DEFAULT(reservedSize_, "") };
    inline GetInstanceMissingIndexListRequest& setReservedSize(string reservedSize) { DARABONBA_PTR_SET_VALUE(reservedSize_, reservedSize) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline string rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, "") };
    inline GetInstanceMissingIndexListRequest& setRowCount(string rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInstanceMissingIndexListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // uniqueCompiles Field Functions 
    bool hasUniqueCompiles() const { return this->uniqueCompiles_ != nullptr;};
    void deleteUniqueCompiles() { this->uniqueCompiles_ = nullptr;};
    inline string uniqueCompiles() const { DARABONBA_PTR_GET_DEFAULT(uniqueCompiles_, "") };
    inline GetInstanceMissingIndexListRequest& setUniqueCompiles(string uniqueCompiles) { DARABONBA_PTR_SET_VALUE(uniqueCompiles_, uniqueCompiles) };


    // userScans Field Functions 
    bool hasUserScans() const { return this->userScans_ != nullptr;};
    void deleteUserScans() { this->userScans_ = nullptr;};
    inline string userScans() const { DARABONBA_PTR_GET_DEFAULT(userScans_, "") };
    inline GetInstanceMissingIndexListRequest& setUserScans(string userScans) { DARABONBA_PTR_SET_VALUE(userScans_, userScans) };


    // userSeeks Field Functions 
    bool hasUserSeeks() const { return this->userSeeks_ != nullptr;};
    void deleteUserSeeks() { this->userSeeks_ = nullptr;};
    inline string userSeeks() const { DARABONBA_PTR_GET_DEFAULT(userSeeks_, "") };
    inline GetInstanceMissingIndexListRequest& setUserSeeks(string userSeeks) { DARABONBA_PTR_SET_VALUE(userSeeks_, userSeeks) };


  protected:
    // The query condition based on the average cost savings.
    std::shared_ptr<string> avgTotalUserCost_ = nullptr;
    // The query condition based on the performance improvement.
    std::shared_ptr<string> avgUserImpact_ = nullptr;
    // The end time of the last seek.
    std::shared_ptr<string> endTime_ = nullptr;
    // The query condition based on the number of indexes.
    std::shared_ptr<string> indexCount_ = nullptr;
    // The database instance ID.
    // 
    // >  Only ApsaraDB RDS for SQL Server instances are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The object name.
    std::shared_ptr<string> objectName_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<string> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The query condition based on the total number of pages.
    std::shared_ptr<string> reservedPages_ = nullptr;
    // The query condition based on the table size.
    std::shared_ptr<string> reservedSize_ = nullptr;
    // The query condition based on the number of table rows.
    std::shared_ptr<string> rowCount_ = nullptr;
    // The start time of the last seek.
    std::shared_ptr<string> startTime_ = nullptr;
    // The query condition based on the number of compilations.
    std::shared_ptr<string> uniqueCompiles_ = nullptr;
    // The query condition based on the number of scans.
    std::shared_ptr<string> userScans_ = nullptr;
    // The query condition based on the number of seeks.
    std::shared_ptr<string> userSeeks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
