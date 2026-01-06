// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONLOGBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONLOGBACKUPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCrossRegionLogBackupFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossRegionLogBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossRegionLogBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeCrossRegionLogBackupFilesResponseBody() = default ;
    DescribeCrossRegionLogBackupFilesResponseBody(const DescribeCrossRegionLogBackupFilesResponseBody &) = default ;
    DescribeCrossRegionLogBackupFilesResponseBody(DescribeCrossRegionLogBackupFilesResponseBody &&) = default ;
    DescribeCrossRegionLogBackupFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossRegionLogBackupFilesResponseBody() = default ;
    DescribeCrossRegionLogBackupFilesResponseBody& operator=(const DescribeCrossRegionLogBackupFilesResponseBody &) = default ;
    DescribeCrossRegionLogBackupFilesResponseBody& operator=(DescribeCrossRegionLogBackupFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Item, item_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Item, item_);
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
      class Item : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Item& obj) { 
          DARABONBA_PTR_TO_JSON(CrossBackupRegion, crossBackupRegion_);
          DARABONBA_PTR_TO_JSON(CrossDownloadLink, crossDownloadLink_);
          DARABONBA_PTR_TO_JSON(CrossIntranetDownloadLink, crossIntranetDownloadLink_);
          DARABONBA_PTR_TO_JSON(CrossLogBackupId, crossLogBackupId_);
          DARABONBA_PTR_TO_JSON(CrossLogBackupSize, crossLogBackupSize_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
          DARABONBA_PTR_TO_JSON(LogBeginTime, logBeginTime_);
          DARABONBA_PTR_TO_JSON(LogEndTime, logEndTime_);
          DARABONBA_PTR_TO_JSON(LogFileName, logFileName_);
        };
        friend void from_json(const Darabonba::Json& j, Item& obj) { 
          DARABONBA_PTR_FROM_JSON(CrossBackupRegion, crossBackupRegion_);
          DARABONBA_PTR_FROM_JSON(CrossDownloadLink, crossDownloadLink_);
          DARABONBA_PTR_FROM_JSON(CrossIntranetDownloadLink, crossIntranetDownloadLink_);
          DARABONBA_PTR_FROM_JSON(CrossLogBackupId, crossLogBackupId_);
          DARABONBA_PTR_FROM_JSON(CrossLogBackupSize, crossLogBackupSize_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
          DARABONBA_PTR_FROM_JSON(LogBeginTime, logBeginTime_);
          DARABONBA_PTR_FROM_JSON(LogEndTime, logEndTime_);
          DARABONBA_PTR_FROM_JSON(LogFileName, logFileName_);
        };
        Item() = default ;
        Item(const Item &) = default ;
        Item(Item &&) = default ;
        Item(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Item() = default ;
        Item& operator=(const Item &) = default ;
        Item& operator=(Item &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->crossBackupRegion_ == nullptr
        && this->crossDownloadLink_ == nullptr && this->crossIntranetDownloadLink_ == nullptr && this->crossLogBackupId_ == nullptr && this->crossLogBackupSize_ == nullptr && this->instanceId_ == nullptr
        && this->linkExpiredTime_ == nullptr && this->logBeginTime_ == nullptr && this->logEndTime_ == nullptr && this->logFileName_ == nullptr; };
        // crossBackupRegion Field Functions 
        bool hasCrossBackupRegion() const { return this->crossBackupRegion_ != nullptr;};
        void deleteCrossBackupRegion() { this->crossBackupRegion_ = nullptr;};
        inline string getCrossBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(crossBackupRegion_, "") };
        inline Item& setCrossBackupRegion(string crossBackupRegion) { DARABONBA_PTR_SET_VALUE(crossBackupRegion_, crossBackupRegion) };


        // crossDownloadLink Field Functions 
        bool hasCrossDownloadLink() const { return this->crossDownloadLink_ != nullptr;};
        void deleteCrossDownloadLink() { this->crossDownloadLink_ = nullptr;};
        inline string getCrossDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(crossDownloadLink_, "") };
        inline Item& setCrossDownloadLink(string crossDownloadLink) { DARABONBA_PTR_SET_VALUE(crossDownloadLink_, crossDownloadLink) };


        // crossIntranetDownloadLink Field Functions 
        bool hasCrossIntranetDownloadLink() const { return this->crossIntranetDownloadLink_ != nullptr;};
        void deleteCrossIntranetDownloadLink() { this->crossIntranetDownloadLink_ = nullptr;};
        inline string getCrossIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(crossIntranetDownloadLink_, "") };
        inline Item& setCrossIntranetDownloadLink(string crossIntranetDownloadLink) { DARABONBA_PTR_SET_VALUE(crossIntranetDownloadLink_, crossIntranetDownloadLink) };


        // crossLogBackupId Field Functions 
        bool hasCrossLogBackupId() const { return this->crossLogBackupId_ != nullptr;};
        void deleteCrossLogBackupId() { this->crossLogBackupId_ = nullptr;};
        inline int32_t getCrossLogBackupId() const { DARABONBA_PTR_GET_DEFAULT(crossLogBackupId_, 0) };
        inline Item& setCrossLogBackupId(int32_t crossLogBackupId) { DARABONBA_PTR_SET_VALUE(crossLogBackupId_, crossLogBackupId) };


        // crossLogBackupSize Field Functions 
        bool hasCrossLogBackupSize() const { return this->crossLogBackupSize_ != nullptr;};
        void deleteCrossLogBackupSize() { this->crossLogBackupSize_ = nullptr;};
        inline int64_t getCrossLogBackupSize() const { DARABONBA_PTR_GET_DEFAULT(crossLogBackupSize_, 0L) };
        inline Item& setCrossLogBackupSize(int64_t crossLogBackupSize) { DARABONBA_PTR_SET_VALUE(crossLogBackupSize_, crossLogBackupSize) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int32_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
        inline Item& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // linkExpiredTime Field Functions 
        bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
        void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
        inline string getLinkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
        inline Item& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


        // logBeginTime Field Functions 
        bool hasLogBeginTime() const { return this->logBeginTime_ != nullptr;};
        void deleteLogBeginTime() { this->logBeginTime_ = nullptr;};
        inline string getLogBeginTime() const { DARABONBA_PTR_GET_DEFAULT(logBeginTime_, "") };
        inline Item& setLogBeginTime(string logBeginTime) { DARABONBA_PTR_SET_VALUE(logBeginTime_, logBeginTime) };


        // logEndTime Field Functions 
        bool hasLogEndTime() const { return this->logEndTime_ != nullptr;};
        void deleteLogEndTime() { this->logEndTime_ = nullptr;};
        inline string getLogEndTime() const { DARABONBA_PTR_GET_DEFAULT(logEndTime_, "") };
        inline Item& setLogEndTime(string logEndTime) { DARABONBA_PTR_SET_VALUE(logEndTime_, logEndTime) };


        // logFileName Field Functions 
        bool hasLogFileName() const { return this->logFileName_ != nullptr;};
        void deleteLogFileName() { this->logFileName_ = nullptr;};
        inline string getLogFileName() const { DARABONBA_PTR_GET_DEFAULT(logFileName_, "") };
        inline Item& setLogFileName(string logFileName) { DARABONBA_PTR_SET_VALUE(logFileName_, logFileName) };


      protected:
        // The ID of the destination region within which the cross-region backup file is stored.
        shared_ptr<string> crossBackupRegion_ {};
        // The external URL from which you can download the cross-region log backup file.
        shared_ptr<string> crossDownloadLink_ {};
        // The internal URL from which you can download the cross-region log backup file.
        shared_ptr<string> crossIntranetDownloadLink_ {};
        // The ID of the cross-region log backup file.
        shared_ptr<int32_t> crossLogBackupId_ {};
        // The size of the cross-region log backup file. Unit: bytes.
        shared_ptr<int64_t> crossLogBackupSize_ {};
        // The instance ID.
        shared_ptr<int32_t> instanceId_ {};
        // The time when the URL expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> linkExpiredTime_ {};
        // The start time of the cross-region log backup file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> logBeginTime_ {};
        // The end time of the cross-region log backup file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> logEndTime_ {};
        // The name of the cross-region log backup file.
        shared_ptr<string> logFileName_ {};
      };

      virtual bool empty() const override { return this->item_ == nullptr; };
      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline const vector<Items::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Items::Item>) };
      inline vector<Items::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Items::Item>) };
      inline Items& setItem(const vector<Items::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
      inline Items& setItem(vector<Items::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    protected:
      shared_ptr<vector<Items::Item>> item_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->totalRecordCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeCrossRegionLogBackupFilesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeCrossRegionLogBackupFilesResponseBody::Items) };
    inline DescribeCrossRegionLogBackupFilesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeCrossRegionLogBackupFilesResponseBody::Items) };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setItems(const DescribeCrossRegionLogBackupFilesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setItems(DescribeCrossRegionLogBackupFilesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeCrossRegionLogBackupFilesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The end of the time range to query. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The cross-region log backup files.
    shared_ptr<DescribeCrossRegionLogBackupFilesResponseBody::Items> items_ {};
    // The page number. Pages start from page 1.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of cross-region backup files on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range to query. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
    // The total number of entries that are returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
