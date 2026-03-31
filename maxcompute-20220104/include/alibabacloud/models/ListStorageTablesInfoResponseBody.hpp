// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGETABLESINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGETABLESINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageTablesInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageTablesInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageTablesInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListStorageTablesInfoResponseBody() = default ;
    ListStorageTablesInfoResponseBody(const ListStorageTablesInfoResponseBody &) = default ;
    ListStorageTablesInfoResponseBody(ListStorageTablesInfoResponseBody &&) = default ;
    ListStorageTablesInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageTablesInfoResponseBody() = default ;
    ListStorageTablesInfoResponseBody& operator=(const ListStorageTablesInfoResponseBody &) = default ;
    ListStorageTablesInfoResponseBody& operator=(ListStorageTablesInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(date, date_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(storageTableInfoList, storageTableInfoList_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(date, date_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(storageTableInfoList, storageTableInfoList_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StorageTableInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageTableInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(date, date_);
          DARABONBA_PTR_TO_JSON(isPartitioned, isPartitioned_);
          DARABONBA_PTR_TO_JSON(lastAccessTime, lastAccessTime_);
          DARABONBA_PTR_TO_JSON(longTermStorage, longTermStorage_);
          DARABONBA_PTR_TO_JSON(longTermStorageFileCount, longTermStorageFileCount_);
          DARABONBA_PTR_TO_JSON(longTermStorageUnit, longTermStorageUnit_);
          DARABONBA_PTR_TO_JSON(lowFreqStorage, lowFreqStorage_);
          DARABONBA_PTR_TO_JSON(lowFreqStorageFileCount, lowFreqStorageFileCount_);
          DARABONBA_PTR_TO_JSON(lowFreqStorageUnit, lowFreqStorageUnit_);
          DARABONBA_PTR_TO_JSON(projectName, projectName_);
          DARABONBA_PTR_TO_JSON(rate, rate_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(standardStorage, standardStorage_);
          DARABONBA_PTR_TO_JSON(standardStorageFileCount, standardStorageFileCount_);
          DARABONBA_PTR_TO_JSON(standardStorageUnit, standardStorageUnit_);
          DARABONBA_PTR_TO_JSON(storageType, storageType_);
          DARABONBA_PTR_TO_JSON(tableName, tableName_);
          DARABONBA_PTR_TO_JSON(totalFrequency, totalFrequency_);
          DARABONBA_PTR_TO_JSON(totalInputAmount, totalInputAmount_);
          DARABONBA_PTR_TO_JSON(totalInputAmountUnit, totalInputAmountUnit_);
          DARABONBA_PTR_TO_JSON(totalStorage, totalStorage_);
          DARABONBA_PTR_TO_JSON(totalStorageFileCount, totalStorageFileCount_);
          DARABONBA_PTR_TO_JSON(totalStorageUnit, totalStorageUnit_);
        };
        friend void from_json(const Darabonba::Json& j, StorageTableInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(date, date_);
          DARABONBA_PTR_FROM_JSON(isPartitioned, isPartitioned_);
          DARABONBA_PTR_FROM_JSON(lastAccessTime, lastAccessTime_);
          DARABONBA_PTR_FROM_JSON(longTermStorage, longTermStorage_);
          DARABONBA_PTR_FROM_JSON(longTermStorageFileCount, longTermStorageFileCount_);
          DARABONBA_PTR_FROM_JSON(longTermStorageUnit, longTermStorageUnit_);
          DARABONBA_PTR_FROM_JSON(lowFreqStorage, lowFreqStorage_);
          DARABONBA_PTR_FROM_JSON(lowFreqStorageFileCount, lowFreqStorageFileCount_);
          DARABONBA_PTR_FROM_JSON(lowFreqStorageUnit, lowFreqStorageUnit_);
          DARABONBA_PTR_FROM_JSON(projectName, projectName_);
          DARABONBA_PTR_FROM_JSON(rate, rate_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(standardStorage, standardStorage_);
          DARABONBA_PTR_FROM_JSON(standardStorageFileCount, standardStorageFileCount_);
          DARABONBA_PTR_FROM_JSON(standardStorageUnit, standardStorageUnit_);
          DARABONBA_PTR_FROM_JSON(storageType, storageType_);
          DARABONBA_PTR_FROM_JSON(tableName, tableName_);
          DARABONBA_PTR_FROM_JSON(totalFrequency, totalFrequency_);
          DARABONBA_PTR_FROM_JSON(totalInputAmount, totalInputAmount_);
          DARABONBA_PTR_FROM_JSON(totalInputAmountUnit, totalInputAmountUnit_);
          DARABONBA_PTR_FROM_JSON(totalStorage, totalStorage_);
          DARABONBA_PTR_FROM_JSON(totalStorageFileCount, totalStorageFileCount_);
          DARABONBA_PTR_FROM_JSON(totalStorageUnit, totalStorageUnit_);
        };
        StorageTableInfoList() = default ;
        StorageTableInfoList(const StorageTableInfoList &) = default ;
        StorageTableInfoList(StorageTableInfoList &&) = default ;
        StorageTableInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageTableInfoList() = default ;
        StorageTableInfoList& operator=(const StorageTableInfoList &) = default ;
        StorageTableInfoList& operator=(StorageTableInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->isPartitioned_ == nullptr && this->lastAccessTime_ == nullptr && this->longTermStorage_ == nullptr && this->longTermStorageFileCount_ == nullptr && this->longTermStorageUnit_ == nullptr
        && this->lowFreqStorage_ == nullptr && this->lowFreqStorageFileCount_ == nullptr && this->lowFreqStorageUnit_ == nullptr && this->projectName_ == nullptr && this->rate_ == nullptr
        && this->schemaName_ == nullptr && this->standardStorage_ == nullptr && this->standardStorageFileCount_ == nullptr && this->standardStorageUnit_ == nullptr && this->storageType_ == nullptr
        && this->tableName_ == nullptr && this->totalFrequency_ == nullptr && this->totalInputAmount_ == nullptr && this->totalInputAmountUnit_ == nullptr && this->totalStorage_ == nullptr
        && this->totalStorageFileCount_ == nullptr && this->totalStorageUnit_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline StorageTableInfoList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // isPartitioned Field Functions 
        bool hasIsPartitioned() const { return this->isPartitioned_ != nullptr;};
        void deleteIsPartitioned() { this->isPartitioned_ = nullptr;};
        inline bool getIsPartitioned() const { DARABONBA_PTR_GET_DEFAULT(isPartitioned_, false) };
        inline StorageTableInfoList& setIsPartitioned(bool isPartitioned) { DARABONBA_PTR_SET_VALUE(isPartitioned_, isPartitioned) };


        // lastAccessTime Field Functions 
        bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
        void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
        inline int64_t getLastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
        inline StorageTableInfoList& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


        // longTermStorage Field Functions 
        bool hasLongTermStorage() const { return this->longTermStorage_ != nullptr;};
        void deleteLongTermStorage() { this->longTermStorage_ = nullptr;};
        inline double getLongTermStorage() const { DARABONBA_PTR_GET_DEFAULT(longTermStorage_, 0.0) };
        inline StorageTableInfoList& setLongTermStorage(double longTermStorage) { DARABONBA_PTR_SET_VALUE(longTermStorage_, longTermStorage) };


        // longTermStorageFileCount Field Functions 
        bool hasLongTermStorageFileCount() const { return this->longTermStorageFileCount_ != nullptr;};
        void deleteLongTermStorageFileCount() { this->longTermStorageFileCount_ = nullptr;};
        inline int64_t getLongTermStorageFileCount() const { DARABONBA_PTR_GET_DEFAULT(longTermStorageFileCount_, 0L) };
        inline StorageTableInfoList& setLongTermStorageFileCount(int64_t longTermStorageFileCount) { DARABONBA_PTR_SET_VALUE(longTermStorageFileCount_, longTermStorageFileCount) };


        // longTermStorageUnit Field Functions 
        bool hasLongTermStorageUnit() const { return this->longTermStorageUnit_ != nullptr;};
        void deleteLongTermStorageUnit() { this->longTermStorageUnit_ = nullptr;};
        inline string getLongTermStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(longTermStorageUnit_, "") };
        inline StorageTableInfoList& setLongTermStorageUnit(string longTermStorageUnit) { DARABONBA_PTR_SET_VALUE(longTermStorageUnit_, longTermStorageUnit) };


        // lowFreqStorage Field Functions 
        bool hasLowFreqStorage() const { return this->lowFreqStorage_ != nullptr;};
        void deleteLowFreqStorage() { this->lowFreqStorage_ = nullptr;};
        inline double getLowFreqStorage() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorage_, 0.0) };
        inline StorageTableInfoList& setLowFreqStorage(double lowFreqStorage) { DARABONBA_PTR_SET_VALUE(lowFreqStorage_, lowFreqStorage) };


        // lowFreqStorageFileCount Field Functions 
        bool hasLowFreqStorageFileCount() const { return this->lowFreqStorageFileCount_ != nullptr;};
        void deleteLowFreqStorageFileCount() { this->lowFreqStorageFileCount_ = nullptr;};
        inline int64_t getLowFreqStorageFileCount() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorageFileCount_, 0L) };
        inline StorageTableInfoList& setLowFreqStorageFileCount(int64_t lowFreqStorageFileCount) { DARABONBA_PTR_SET_VALUE(lowFreqStorageFileCount_, lowFreqStorageFileCount) };


        // lowFreqStorageUnit Field Functions 
        bool hasLowFreqStorageUnit() const { return this->lowFreqStorageUnit_ != nullptr;};
        void deleteLowFreqStorageUnit() { this->lowFreqStorageUnit_ = nullptr;};
        inline string getLowFreqStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorageUnit_, "") };
        inline StorageTableInfoList& setLowFreqStorageUnit(string lowFreqStorageUnit) { DARABONBA_PTR_SET_VALUE(lowFreqStorageUnit_, lowFreqStorageUnit) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline StorageTableInfoList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline double getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
        inline StorageTableInfoList& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline StorageTableInfoList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // standardStorage Field Functions 
        bool hasStandardStorage() const { return this->standardStorage_ != nullptr;};
        void deleteStandardStorage() { this->standardStorage_ = nullptr;};
        inline double getStandardStorage() const { DARABONBA_PTR_GET_DEFAULT(standardStorage_, 0.0) };
        inline StorageTableInfoList& setStandardStorage(double standardStorage) { DARABONBA_PTR_SET_VALUE(standardStorage_, standardStorage) };


        // standardStorageFileCount Field Functions 
        bool hasStandardStorageFileCount() const { return this->standardStorageFileCount_ != nullptr;};
        void deleteStandardStorageFileCount() { this->standardStorageFileCount_ = nullptr;};
        inline int64_t getStandardStorageFileCount() const { DARABONBA_PTR_GET_DEFAULT(standardStorageFileCount_, 0L) };
        inline StorageTableInfoList& setStandardStorageFileCount(int64_t standardStorageFileCount) { DARABONBA_PTR_SET_VALUE(standardStorageFileCount_, standardStorageFileCount) };


        // standardStorageUnit Field Functions 
        bool hasStandardStorageUnit() const { return this->standardStorageUnit_ != nullptr;};
        void deleteStandardStorageUnit() { this->standardStorageUnit_ = nullptr;};
        inline string getStandardStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(standardStorageUnit_, "") };
        inline StorageTableInfoList& setStandardStorageUnit(string standardStorageUnit) { DARABONBA_PTR_SET_VALUE(standardStorageUnit_, standardStorageUnit) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline StorageTableInfoList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline StorageTableInfoList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // totalFrequency Field Functions 
        bool hasTotalFrequency() const { return this->totalFrequency_ != nullptr;};
        void deleteTotalFrequency() { this->totalFrequency_ = nullptr;};
        inline int64_t getTotalFrequency() const { DARABONBA_PTR_GET_DEFAULT(totalFrequency_, 0L) };
        inline StorageTableInfoList& setTotalFrequency(int64_t totalFrequency) { DARABONBA_PTR_SET_VALUE(totalFrequency_, totalFrequency) };


        // totalInputAmount Field Functions 
        bool hasTotalInputAmount() const { return this->totalInputAmount_ != nullptr;};
        void deleteTotalInputAmount() { this->totalInputAmount_ = nullptr;};
        inline double getTotalInputAmount() const { DARABONBA_PTR_GET_DEFAULT(totalInputAmount_, 0.0) };
        inline StorageTableInfoList& setTotalInputAmount(double totalInputAmount) { DARABONBA_PTR_SET_VALUE(totalInputAmount_, totalInputAmount) };


        // totalInputAmountUnit Field Functions 
        bool hasTotalInputAmountUnit() const { return this->totalInputAmountUnit_ != nullptr;};
        void deleteTotalInputAmountUnit() { this->totalInputAmountUnit_ = nullptr;};
        inline string getTotalInputAmountUnit() const { DARABONBA_PTR_GET_DEFAULT(totalInputAmountUnit_, "") };
        inline StorageTableInfoList& setTotalInputAmountUnit(string totalInputAmountUnit) { DARABONBA_PTR_SET_VALUE(totalInputAmountUnit_, totalInputAmountUnit) };


        // totalStorage Field Functions 
        bool hasTotalStorage() const { return this->totalStorage_ != nullptr;};
        void deleteTotalStorage() { this->totalStorage_ = nullptr;};
        inline double getTotalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalStorage_, 0.0) };
        inline StorageTableInfoList& setTotalStorage(double totalStorage) { DARABONBA_PTR_SET_VALUE(totalStorage_, totalStorage) };


        // totalStorageFileCount Field Functions 
        bool hasTotalStorageFileCount() const { return this->totalStorageFileCount_ != nullptr;};
        void deleteTotalStorageFileCount() { this->totalStorageFileCount_ = nullptr;};
        inline int64_t getTotalStorageFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalStorageFileCount_, 0L) };
        inline StorageTableInfoList& setTotalStorageFileCount(int64_t totalStorageFileCount) { DARABONBA_PTR_SET_VALUE(totalStorageFileCount_, totalStorageFileCount) };


        // totalStorageUnit Field Functions 
        bool hasTotalStorageUnit() const { return this->totalStorageUnit_ != nullptr;};
        void deleteTotalStorageUnit() { this->totalStorageUnit_ = nullptr;};
        inline string getTotalStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(totalStorageUnit_, "") };
        inline StorageTableInfoList& setTotalStorageUnit(string totalStorageUnit) { DARABONBA_PTR_SET_VALUE(totalStorageUnit_, totalStorageUnit) };


      protected:
        // The date on which the statistics are collected. This value is not returned.
        shared_ptr<string> date_ {};
        // Indicates whether the table is a partitioned table.
        shared_ptr<bool> isPartitioned_ {};
        // The time when the table was last accessed. This value is returned when the table is a non-partitioned table.
        // 
        // >  The data collection method is upgraded from July 2023. If the data is not accessed after the upgrade or is accessed by using ALGO jobs or the direct read method of Hologres, the last access time cannot be collected.
        shared_ptr<int64_t> lastAccessTime_ {};
        // The storage usage at the long-term storage tier.
        shared_ptr<double> longTermStorage_ {};
        // The number of long-term storage files.
        shared_ptr<int64_t> longTermStorageFileCount_ {};
        // The unit of the storage usage at the long-term storage tier.
        shared_ptr<string> longTermStorageUnit_ {};
        // The storage usage at the low-frequency tier.
        shared_ptr<double> lowFreqStorage_ {};
        // The number of low-frequency storage files.
        shared_ptr<int64_t> lowFreqStorageFileCount_ {};
        // The unit of the storage usage at the low-frequency storage tier.
        shared_ptr<string> lowFreqStorageUnit_ {};
        // The project name.
        shared_ptr<string> projectName_ {};
        // The change rate of the total storage usage compared with that of the recent {$recentDays} days.
        shared_ptr<double> rate_ {};
        // The schema name.
        shared_ptr<string> schemaName_ {};
        // The storage usage at the standard storage tier.
        shared_ptr<double> standardStorage_ {};
        // The number of standard storage files.
        shared_ptr<int64_t> standardStorageFileCount_ {};
        // The unit of the storage usage at the standard storage tier.
        shared_ptr<string> standardStorageUnit_ {};
        // The table storage type.
        // 
        // *   standard
        // *   lowfrequency
        // *   longterm
        // *   unknown: This value is returned when the table is a partitioned table. You can call the ListStoragePartitionsInfo operation to query the storage type of each partition.
        shared_ptr<string> storageType_ {};
        // The table name.
        shared_ptr<string> tableName_ {};
        // The access frequency.
        // 
        // > 
        // 
        // *   Access behaviors include:
        // 
        // *   The table is used as the input table of an SQL task.
        // *   The table is downloaded by Tunnel.
        // *   The table is read by calling the Storage API. The partition granularity of the partitioned table is not available. Each time an access operation is performed, the access frequency is incremented by 1.
        // 
        // *   The data collection method is upgraded from July 2023. If the data is not accessed after the upgrade or is accessed by using ALGO jobs or the direct read method of Hologres, the access frequency cannot be collected.
        shared_ptr<int64_t> totalFrequency_ {};
        // The total amount of accessed data.
        // 
        // >  The amount of data that is read by all access behaviors.
        shared_ptr<double> totalInputAmount_ {};
        // The unit of the total amount of accessed data.
        shared_ptr<string> totalInputAmountUnit_ {};
        // The total storage usage. For a partitioned table, this parameter indicates the sum of the storage usage of all partitions. If the storage types of partitions are different, the value is the sum of the storage usage of each storage type.
        shared_ptr<double> totalStorage_ {};
        // The total number of files.
        shared_ptr<int64_t> totalStorageFileCount_ {};
        // The unit of storage usage.
        shared_ptr<string> totalStorageUnit_ {};
      };

      virtual bool empty() const override { return this->date_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->storageTableInfoList_ == nullptr && this->totalCount_ == nullptr; };
      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Data& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // storageTableInfoList Field Functions 
      bool hasStorageTableInfoList() const { return this->storageTableInfoList_ != nullptr;};
      void deleteStorageTableInfoList() { this->storageTableInfoList_ = nullptr;};
      inline const vector<Data::StorageTableInfoList> & getStorageTableInfoList() const { DARABONBA_PTR_GET_CONST(storageTableInfoList_, vector<Data::StorageTableInfoList>) };
      inline vector<Data::StorageTableInfoList> getStorageTableInfoList() { DARABONBA_PTR_GET(storageTableInfoList_, vector<Data::StorageTableInfoList>) };
      inline Data& setStorageTableInfoList(const vector<Data::StorageTableInfoList> & storageTableInfoList) { DARABONBA_PTR_SET_VALUE(storageTableInfoList_, storageTableInfoList) };
      inline Data& setStorageTableInfoList(vector<Data::StorageTableInfoList> && storageTableInfoList) { DARABONBA_PTR_SET_RVALUE(storageTableInfoList_, storageTableInfoList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The date on which the statistics are collected.
      shared_ptr<string> date_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The table storage information.
      shared_ptr<vector<Data::StorageTableInfoList>> storageTableInfoList_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListStorageTablesInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListStorageTablesInfoResponseBody::Data) };
    inline ListStorageTablesInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListStorageTablesInfoResponseBody::Data) };
    inline ListStorageTablesInfoResponseBody& setData(const ListStorageTablesInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListStorageTablesInfoResponseBody& setData(ListStorageTablesInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListStorageTablesInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListStorageTablesInfoResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListStorageTablesInfoResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStorageTablesInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<ListStorageTablesInfoResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    // 
    // *   1xx: informational response. The request is received and is being processed.
    // *   2xx: success. The request is successfully received, understood, and accepted by the server.
    // *   3xx: redirection. The request is redirected, and further actions are required to complete the request.
    // *   4xx: client error. The request contains invalid request parameters and syntaxes, or specific request conditions cannot be met.
    // *   5xx: server error. The server cannot meet requirements due to other reasons.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
