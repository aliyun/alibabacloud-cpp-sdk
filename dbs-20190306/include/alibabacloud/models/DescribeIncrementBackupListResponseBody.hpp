// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCREMENTBACKUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCREMENTBACKUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeIncrementBackupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIncrementBackupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIncrementBackupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeIncrementBackupListResponseBody() = default ;
    DescribeIncrementBackupListResponseBody(const DescribeIncrementBackupListResponseBody &) = default ;
    DescribeIncrementBackupListResponseBody(DescribeIncrementBackupListResponseBody &&) = default ;
    DescribeIncrementBackupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIncrementBackupListResponseBody() = default ;
    DescribeIncrementBackupListResponseBody& operator=(const DescribeIncrementBackupListResponseBody &) = default ;
    DescribeIncrementBackupListResponseBody& operator=(DescribeIncrementBackupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(IncrementBackupFile, incrementBackupFile_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(IncrementBackupFile, incrementBackupFile_);
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
      class IncrementBackupFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IncrementBackupFile& obj) { 
          DARABONBA_PTR_TO_JSON(BackupSetExpiredTime, backupSetExpiredTime_);
          DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
          DARABONBA_PTR_TO_JSON(BackupSetJobId, backupSetJobId_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(SourceEndpointHost, sourceEndpointHost_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInstanceId, sourceEndpointInstanceId_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
          DARABONBA_PTR_TO_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
          DARABONBA_PTR_TO_JSON(SourceEndpointPort, sourceEndpointPort_);
          DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StorageMethod, storageMethod_);
        };
        friend void from_json(const Darabonba::Json& j, IncrementBackupFile& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupSetExpiredTime, backupSetExpiredTime_);
          DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
          DARABONBA_PTR_FROM_JSON(BackupSetJobId, backupSetJobId_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointHost, sourceEndpointHost_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceId, sourceEndpointInstanceId_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointPort, sourceEndpointPort_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StorageMethod, storageMethod_);
        };
        IncrementBackupFile() = default ;
        IncrementBackupFile(const IncrementBackupFile &) = default ;
        IncrementBackupFile(IncrementBackupFile &&) = default ;
        IncrementBackupFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IncrementBackupFile() = default ;
        IncrementBackupFile& operator=(const IncrementBackupFile &) = default ;
        IncrementBackupFile& operator=(IncrementBackupFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupSetExpiredTime_ == nullptr
        && this->backupSetId_ == nullptr && this->backupSetJobId_ == nullptr && this->backupSize_ == nullptr && this->backupStatus_ == nullptr && this->endTime_ == nullptr
        && this->sourceEndpointHost_ == nullptr && this->sourceEndpointInstanceId_ == nullptr && this->sourceEndpointInstanceType_ == nullptr && this->sourceEndpointIpPort_ == nullptr && this->sourceEndpointPort_ == nullptr
        && this->sourceEndpointRegion_ == nullptr && this->startTime_ == nullptr && this->storageMethod_ == nullptr; };
        // backupSetExpiredTime Field Functions 
        bool hasBackupSetExpiredTime() const { return this->backupSetExpiredTime_ != nullptr;};
        void deleteBackupSetExpiredTime() { this->backupSetExpiredTime_ = nullptr;};
        inline int64_t getBackupSetExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetExpiredTime_, 0L) };
        inline IncrementBackupFile& setBackupSetExpiredTime(int64_t backupSetExpiredTime) { DARABONBA_PTR_SET_VALUE(backupSetExpiredTime_, backupSetExpiredTime) };


        // backupSetId Field Functions 
        bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
        void deleteBackupSetId() { this->backupSetId_ = nullptr;};
        inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
        inline IncrementBackupFile& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


        // backupSetJobId Field Functions 
        bool hasBackupSetJobId() const { return this->backupSetJobId_ != nullptr;};
        void deleteBackupSetJobId() { this->backupSetJobId_ = nullptr;};
        inline string getBackupSetJobId() const { DARABONBA_PTR_GET_DEFAULT(backupSetJobId_, "") };
        inline IncrementBackupFile& setBackupSetJobId(string backupSetJobId) { DARABONBA_PTR_SET_VALUE(backupSetJobId_, backupSetJobId) };


        // backupSize Field Functions 
        bool hasBackupSize() const { return this->backupSize_ != nullptr;};
        void deleteBackupSize() { this->backupSize_ = nullptr;};
        inline int64_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
        inline IncrementBackupFile& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline IncrementBackupFile& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline IncrementBackupFile& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // sourceEndpointHost Field Functions 
        bool hasSourceEndpointHost() const { return this->sourceEndpointHost_ != nullptr;};
        void deleteSourceEndpointHost() { this->sourceEndpointHost_ = nullptr;};
        inline string getSourceEndpointHost() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointHost_, "") };
        inline IncrementBackupFile& setSourceEndpointHost(string sourceEndpointHost) { DARABONBA_PTR_SET_VALUE(sourceEndpointHost_, sourceEndpointHost) };


        // sourceEndpointInstanceId Field Functions 
        bool hasSourceEndpointInstanceId() const { return this->sourceEndpointInstanceId_ != nullptr;};
        void deleteSourceEndpointInstanceId() { this->sourceEndpointInstanceId_ = nullptr;};
        inline string getSourceEndpointInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceId_, "") };
        inline IncrementBackupFile& setSourceEndpointInstanceId(string sourceEndpointInstanceId) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceId_, sourceEndpointInstanceId) };


        // sourceEndpointInstanceType Field Functions 
        bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
        void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
        inline string getSourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
        inline IncrementBackupFile& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


        // sourceEndpointIpPort Field Functions 
        bool hasSourceEndpointIpPort() const { return this->sourceEndpointIpPort_ != nullptr;};
        void deleteSourceEndpointIpPort() { this->sourceEndpointIpPort_ = nullptr;};
        inline string getSourceEndpointIpPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIpPort_, "") };
        inline IncrementBackupFile& setSourceEndpointIpPort(string sourceEndpointIpPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointIpPort_, sourceEndpointIpPort) };


        // sourceEndpointPort Field Functions 
        bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
        void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
        inline string getSourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, "") };
        inline IncrementBackupFile& setSourceEndpointPort(string sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


        // sourceEndpointRegion Field Functions 
        bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
        void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
        inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
        inline IncrementBackupFile& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline IncrementBackupFile& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // storageMethod Field Functions 
        bool hasStorageMethod() const { return this->storageMethod_ != nullptr;};
        void deleteStorageMethod() { this->storageMethod_ = nullptr;};
        inline string getStorageMethod() const { DARABONBA_PTR_GET_DEFAULT(storageMethod_, "") };
        inline IncrementBackupFile& setStorageMethod(string storageMethod) { DARABONBA_PTR_SET_VALUE(storageMethod_, storageMethod) };


      protected:
        shared_ptr<int64_t> backupSetExpiredTime_ {};
        shared_ptr<string> backupSetId_ {};
        shared_ptr<string> backupSetJobId_ {};
        shared_ptr<int64_t> backupSize_ {};
        shared_ptr<string> backupStatus_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> sourceEndpointHost_ {};
        shared_ptr<string> sourceEndpointInstanceId_ {};
        shared_ptr<string> sourceEndpointInstanceType_ {};
        shared_ptr<string> sourceEndpointIpPort_ {};
        shared_ptr<string> sourceEndpointPort_ {};
        shared_ptr<string> sourceEndpointRegion_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> storageMethod_ {};
      };

      virtual bool empty() const override { return this->incrementBackupFile_ == nullptr; };
      // incrementBackupFile Field Functions 
      bool hasIncrementBackupFile() const { return this->incrementBackupFile_ != nullptr;};
      void deleteIncrementBackupFile() { this->incrementBackupFile_ = nullptr;};
      inline const vector<Items::IncrementBackupFile> & getIncrementBackupFile() const { DARABONBA_PTR_GET_CONST(incrementBackupFile_, vector<Items::IncrementBackupFile>) };
      inline vector<Items::IncrementBackupFile> getIncrementBackupFile() { DARABONBA_PTR_GET(incrementBackupFile_, vector<Items::IncrementBackupFile>) };
      inline Items& setIncrementBackupFile(const vector<Items::IncrementBackupFile> & incrementBackupFile) { DARABONBA_PTR_SET_VALUE(incrementBackupFile_, incrementBackupFile) };
      inline Items& setIncrementBackupFile(vector<Items::IncrementBackupFile> && incrementBackupFile) { DARABONBA_PTR_SET_RVALUE(incrementBackupFile_, incrementBackupFile) };


    protected:
      shared_ptr<vector<Items::IncrementBackupFile>> incrementBackupFile_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeIncrementBackupListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeIncrementBackupListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeIncrementBackupListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeIncrementBackupListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeIncrementBackupListResponseBody::Items) };
    inline DescribeIncrementBackupListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeIncrementBackupListResponseBody::Items) };
    inline DescribeIncrementBackupListResponseBody& setItems(const DescribeIncrementBackupListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeIncrementBackupListResponseBody& setItems(DescribeIncrementBackupListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeIncrementBackupListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIncrementBackupListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIncrementBackupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeIncrementBackupListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalElements Field Functions 
    bool hasTotalElements() const { return this->totalElements_ != nullptr;};
    void deleteTotalElements() { this->totalElements_ = nullptr;};
    inline int32_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
    inline DescribeIncrementBackupListResponseBody& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeIncrementBackupListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeIncrementBackupListResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // 
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of incremental backup tasks.
    shared_ptr<int32_t> totalElements_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
