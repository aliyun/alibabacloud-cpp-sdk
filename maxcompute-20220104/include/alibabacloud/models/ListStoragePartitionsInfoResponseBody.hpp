// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGEPARTITIONSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGEPARTITIONSINFORESPONSEBODY_HPP_
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
  class ListStoragePartitionsInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStoragePartitionsInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStoragePartitionsInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListStoragePartitionsInfoResponseBody() = default ;
    ListStoragePartitionsInfoResponseBody(const ListStoragePartitionsInfoResponseBody &) = default ;
    ListStoragePartitionsInfoResponseBody(ListStoragePartitionsInfoResponseBody &&) = default ;
    ListStoragePartitionsInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStoragePartitionsInfoResponseBody() = default ;
    ListStoragePartitionsInfoResponseBody& operator=(const ListStoragePartitionsInfoResponseBody &) = default ;
    ListStoragePartitionsInfoResponseBody& operator=(ListStoragePartitionsInfoResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(storagePartitionInfoList, storagePartitionInfoList_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(date, date_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(storagePartitionInfoList, storagePartitionInfoList_);
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
      class StoragePartitionInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StoragePartitionInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(fileCount, fileCount_);
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(fileSizeUnit, fileSizeUnit_);
          DARABONBA_PTR_TO_JSON(isPartitioned, isPartitioned_);
          DARABONBA_PTR_TO_JSON(lastAccessTime, lastAccessTime_);
          DARABONBA_PTR_TO_JSON(partition, partition_);
          DARABONBA_PTR_TO_JSON(projectName, projectName_);
          DARABONBA_PTR_TO_JSON(rate, rate_);
          DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(storageType, storageType_);
          DARABONBA_PTR_TO_JSON(tableName, tableName_);
          DARABONBA_PTR_TO_JSON(totalFrequency, totalFrequency_);
          DARABONBA_PTR_TO_JSON(totalInputAmount, totalInputAmount_);
          DARABONBA_PTR_TO_JSON(totalInputAmountUnit, totalInputAmountUnit_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, StoragePartitionInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(fileCount, fileCount_);
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(fileSizeUnit, fileSizeUnit_);
          DARABONBA_PTR_FROM_JSON(isPartitioned, isPartitioned_);
          DARABONBA_PTR_FROM_JSON(lastAccessTime, lastAccessTime_);
          DARABONBA_PTR_FROM_JSON(partition, partition_);
          DARABONBA_PTR_FROM_JSON(projectName, projectName_);
          DARABONBA_PTR_FROM_JSON(rate, rate_);
          DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(storageType, storageType_);
          DARABONBA_PTR_FROM_JSON(tableName, tableName_);
          DARABONBA_PTR_FROM_JSON(totalFrequency, totalFrequency_);
          DARABONBA_PTR_FROM_JSON(totalInputAmount, totalInputAmount_);
          DARABONBA_PTR_FROM_JSON(totalInputAmountUnit, totalInputAmountUnit_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        StoragePartitionInfoList() = default ;
        StoragePartitionInfoList(const StoragePartitionInfoList &) = default ;
        StoragePartitionInfoList(StoragePartitionInfoList &&) = default ;
        StoragePartitionInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StoragePartitionInfoList() = default ;
        StoragePartitionInfoList& operator=(const StoragePartitionInfoList &) = default ;
        StoragePartitionInfoList& operator=(StoragePartitionInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileCount_ == nullptr
        && this->fileSize_ == nullptr && this->fileSizeUnit_ == nullptr && this->isPartitioned_ == nullptr && this->lastAccessTime_ == nullptr && this->partition_ == nullptr
        && this->projectName_ == nullptr && this->rate_ == nullptr && this->schemaName_ == nullptr && this->storageType_ == nullptr && this->tableName_ == nullptr
        && this->totalFrequency_ == nullptr && this->totalInputAmount_ == nullptr && this->totalInputAmountUnit_ == nullptr && this->type_ == nullptr; };
        // fileCount Field Functions 
        bool hasFileCount() const { return this->fileCount_ != nullptr;};
        void deleteFileCount() { this->fileCount_ = nullptr;};
        inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
        inline StoragePartitionInfoList& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline double getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0.0) };
        inline StoragePartitionInfoList& setFileSize(double fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // fileSizeUnit Field Functions 
        bool hasFileSizeUnit() const { return this->fileSizeUnit_ != nullptr;};
        void deleteFileSizeUnit() { this->fileSizeUnit_ = nullptr;};
        inline string getFileSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(fileSizeUnit_, "") };
        inline StoragePartitionInfoList& setFileSizeUnit(string fileSizeUnit) { DARABONBA_PTR_SET_VALUE(fileSizeUnit_, fileSizeUnit) };


        // isPartitioned Field Functions 
        bool hasIsPartitioned() const { return this->isPartitioned_ != nullptr;};
        void deleteIsPartitioned() { this->isPartitioned_ = nullptr;};
        inline bool getIsPartitioned() const { DARABONBA_PTR_GET_DEFAULT(isPartitioned_, false) };
        inline StoragePartitionInfoList& setIsPartitioned(bool isPartitioned) { DARABONBA_PTR_SET_VALUE(isPartitioned_, isPartitioned) };


        // lastAccessTime Field Functions 
        bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
        void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
        inline int64_t getLastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
        inline StoragePartitionInfoList& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


        // partition Field Functions 
        bool hasPartition() const { return this->partition_ != nullptr;};
        void deletePartition() { this->partition_ = nullptr;};
        inline string getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
        inline StoragePartitionInfoList& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline StoragePartitionInfoList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline double getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
        inline StoragePartitionInfoList& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline StoragePartitionInfoList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline StoragePartitionInfoList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline StoragePartitionInfoList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // totalFrequency Field Functions 
        bool hasTotalFrequency() const { return this->totalFrequency_ != nullptr;};
        void deleteTotalFrequency() { this->totalFrequency_ = nullptr;};
        inline int64_t getTotalFrequency() const { DARABONBA_PTR_GET_DEFAULT(totalFrequency_, 0L) };
        inline StoragePartitionInfoList& setTotalFrequency(int64_t totalFrequency) { DARABONBA_PTR_SET_VALUE(totalFrequency_, totalFrequency) };


        // totalInputAmount Field Functions 
        bool hasTotalInputAmount() const { return this->totalInputAmount_ != nullptr;};
        void deleteTotalInputAmount() { this->totalInputAmount_ = nullptr;};
        inline double getTotalInputAmount() const { DARABONBA_PTR_GET_DEFAULT(totalInputAmount_, 0.0) };
        inline StoragePartitionInfoList& setTotalInputAmount(double totalInputAmount) { DARABONBA_PTR_SET_VALUE(totalInputAmount_, totalInputAmount) };


        // totalInputAmountUnit Field Functions 
        bool hasTotalInputAmountUnit() const { return this->totalInputAmountUnit_ != nullptr;};
        void deleteTotalInputAmountUnit() { this->totalInputAmountUnit_ = nullptr;};
        inline string getTotalInputAmountUnit() const { DARABONBA_PTR_GET_DEFAULT(totalInputAmountUnit_, "") };
        inline StoragePartitionInfoList& setTotalInputAmountUnit(string totalInputAmountUnit) { DARABONBA_PTR_SET_VALUE(totalInputAmountUnit_, totalInputAmountUnit) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StoragePartitionInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> fileCount_ {};
        shared_ptr<double> fileSize_ {};
        shared_ptr<string> fileSizeUnit_ {};
        shared_ptr<bool> isPartitioned_ {};
        shared_ptr<int64_t> lastAccessTime_ {};
        shared_ptr<string> partition_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<double> rate_ {};
        shared_ptr<string> schemaName_ {};
        shared_ptr<string> storageType_ {};
        shared_ptr<string> tableName_ {};
        shared_ptr<int64_t> totalFrequency_ {};
        shared_ptr<double> totalInputAmount_ {};
        shared_ptr<string> totalInputAmountUnit_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->date_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->storagePartitionInfoList_ == nullptr && this->totalCount_ == nullptr; };
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


      // storagePartitionInfoList Field Functions 
      bool hasStoragePartitionInfoList() const { return this->storagePartitionInfoList_ != nullptr;};
      void deleteStoragePartitionInfoList() { this->storagePartitionInfoList_ = nullptr;};
      inline const vector<Data::StoragePartitionInfoList> & getStoragePartitionInfoList() const { DARABONBA_PTR_GET_CONST(storagePartitionInfoList_, vector<Data::StoragePartitionInfoList>) };
      inline vector<Data::StoragePartitionInfoList> getStoragePartitionInfoList() { DARABONBA_PTR_GET(storagePartitionInfoList_, vector<Data::StoragePartitionInfoList>) };
      inline Data& setStoragePartitionInfoList(const vector<Data::StoragePartitionInfoList> & storagePartitionInfoList) { DARABONBA_PTR_SET_VALUE(storagePartitionInfoList_, storagePartitionInfoList) };
      inline Data& setStoragePartitionInfoList(vector<Data::StoragePartitionInfoList> && storagePartitionInfoList) { DARABONBA_PTR_SET_RVALUE(storagePartitionInfoList_, storagePartitionInfoList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> date_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Data::StoragePartitionInfoList>> storagePartitionInfoList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListStoragePartitionsInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListStoragePartitionsInfoResponseBody::Data) };
    inline ListStoragePartitionsInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListStoragePartitionsInfoResponseBody::Data) };
    inline ListStoragePartitionsInfoResponseBody& setData(const ListStoragePartitionsInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListStoragePartitionsInfoResponseBody& setData(ListStoragePartitionsInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListStoragePartitionsInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListStoragePartitionsInfoResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListStoragePartitionsInfoResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStoragePartitionsInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListStoragePartitionsInfoResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
