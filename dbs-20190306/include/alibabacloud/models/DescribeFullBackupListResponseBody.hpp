// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFULLBACKUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFULLBACKUPLISTRESPONSEBODY_HPP_
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
  class DescribeFullBackupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFullBackupListResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeFullBackupListResponseBody& obj) { 
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
    DescribeFullBackupListResponseBody() = default ;
    DescribeFullBackupListResponseBody(const DescribeFullBackupListResponseBody &) = default ;
    DescribeFullBackupListResponseBody(DescribeFullBackupListResponseBody &&) = default ;
    DescribeFullBackupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFullBackupListResponseBody() = default ;
    DescribeFullBackupListResponseBody& operator=(const DescribeFullBackupListResponseBody &) = default ;
    DescribeFullBackupListResponseBody& operator=(DescribeFullBackupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(FullBackupFile, fullBackupFile_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(FullBackupFile, fullBackupFile_);
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
      class FullBackupFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FullBackupFile& obj) { 
          DARABONBA_PTR_TO_JSON(BackupGatewayIdentifier, backupGatewayIdentifier_);
          DARABONBA_PTR_TO_JSON(BackupObjects, backupObjects_);
          DARABONBA_PTR_TO_JSON(BackupSetExpiredTime, backupSetExpiredTime_);
          DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
          DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(LogicalFullBackupProgress, logicalFullBackupProgress_);
          DARABONBA_PTR_TO_JSON(LogicalStructureBackupProgress, logicalStructureBackupProgress_);
          DARABONBA_PTR_TO_JSON(SourceEndpointEnableSsl, sourceEndpointEnableSsl_);
          DARABONBA_PTR_TO_JSON(SourceEndpointHost, sourceEndpointHost_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInstanceId, sourceEndpointInstanceId_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
          DARABONBA_PTR_TO_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
          DARABONBA_PTR_TO_JSON(SourceEndpointPort, sourceEndpointPort_);
          DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
          DARABONBA_PTR_TO_JSON(SourceEndpointUserName, sourceEndpointUserName_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StorageEncryptMethod, storageEncryptMethod_);
          DARABONBA_PTR_TO_JSON(StorageMethod, storageMethod_);
        };
        friend void from_json(const Darabonba::Json& j, FullBackupFile& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupGatewayIdentifier, backupGatewayIdentifier_);
          DARABONBA_PTR_FROM_JSON(BackupObjects, backupObjects_);
          DARABONBA_PTR_FROM_JSON(BackupSetExpiredTime, backupSetExpiredTime_);
          DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
          DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(LogicalFullBackupProgress, logicalFullBackupProgress_);
          DARABONBA_PTR_FROM_JSON(LogicalStructureBackupProgress, logicalStructureBackupProgress_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointEnableSsl, sourceEndpointEnableSsl_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointHost, sourceEndpointHost_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceId, sourceEndpointInstanceId_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointPort, sourceEndpointPort_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointUserName, sourceEndpointUserName_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StorageEncryptMethod, storageEncryptMethod_);
          DARABONBA_PTR_FROM_JSON(StorageMethod, storageMethod_);
        };
        FullBackupFile() = default ;
        FullBackupFile(const FullBackupFile &) = default ;
        FullBackupFile(FullBackupFile &&) = default ;
        FullBackupFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FullBackupFile() = default ;
        FullBackupFile& operator=(const FullBackupFile &) = default ;
        FullBackupFile& operator=(FullBackupFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupGatewayIdentifier_ == nullptr
        && this->backupObjects_ == nullptr && this->backupSetExpiredTime_ == nullptr && this->backupSetId_ == nullptr && this->backupSize_ == nullptr && this->backupStatus_ == nullptr
        && this->createTime_ == nullptr && this->crossAliyunId_ == nullptr && this->crossRoleName_ == nullptr && this->endTime_ == nullptr && this->errMessage_ == nullptr
        && this->finishTime_ == nullptr && this->logicalFullBackupProgress_ == nullptr && this->logicalStructureBackupProgress_ == nullptr && this->sourceEndpointEnableSsl_ == nullptr && this->sourceEndpointHost_ == nullptr
        && this->sourceEndpointInstanceId_ == nullptr && this->sourceEndpointInstanceType_ == nullptr && this->sourceEndpointIpPort_ == nullptr && this->sourceEndpointPort_ == nullptr && this->sourceEndpointRegion_ == nullptr
        && this->sourceEndpointUserName_ == nullptr && this->startTime_ == nullptr && this->storageEncryptMethod_ == nullptr && this->storageMethod_ == nullptr; };
        // backupGatewayIdentifier Field Functions 
        bool hasBackupGatewayIdentifier() const { return this->backupGatewayIdentifier_ != nullptr;};
        void deleteBackupGatewayIdentifier() { this->backupGatewayIdentifier_ = nullptr;};
        inline string getBackupGatewayIdentifier() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayIdentifier_, "") };
        inline FullBackupFile& setBackupGatewayIdentifier(string backupGatewayIdentifier) { DARABONBA_PTR_SET_VALUE(backupGatewayIdentifier_, backupGatewayIdentifier) };


        // backupObjects Field Functions 
        bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
        void deleteBackupObjects() { this->backupObjects_ = nullptr;};
        inline string getBackupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
        inline FullBackupFile& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


        // backupSetExpiredTime Field Functions 
        bool hasBackupSetExpiredTime() const { return this->backupSetExpiredTime_ != nullptr;};
        void deleteBackupSetExpiredTime() { this->backupSetExpiredTime_ = nullptr;};
        inline int64_t getBackupSetExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetExpiredTime_, 0L) };
        inline FullBackupFile& setBackupSetExpiredTime(int64_t backupSetExpiredTime) { DARABONBA_PTR_SET_VALUE(backupSetExpiredTime_, backupSetExpiredTime) };


        // backupSetId Field Functions 
        bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
        void deleteBackupSetId() { this->backupSetId_ = nullptr;};
        inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
        inline FullBackupFile& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


        // backupSize Field Functions 
        bool hasBackupSize() const { return this->backupSize_ != nullptr;};
        void deleteBackupSize() { this->backupSize_ = nullptr;};
        inline int64_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
        inline FullBackupFile& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline FullBackupFile& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline FullBackupFile& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // crossAliyunId Field Functions 
        bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
        void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
        inline string getCrossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
        inline FullBackupFile& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


        // crossRoleName Field Functions 
        bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
        void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
        inline string getCrossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
        inline FullBackupFile& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline FullBackupFile& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // errMessage Field Functions 
        bool hasErrMessage() const { return this->errMessage_ != nullptr;};
        void deleteErrMessage() { this->errMessage_ = nullptr;};
        inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
        inline FullBackupFile& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline FullBackupFile& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // logicalFullBackupProgress Field Functions 
        bool hasLogicalFullBackupProgress() const { return this->logicalFullBackupProgress_ != nullptr;};
        void deleteLogicalFullBackupProgress() { this->logicalFullBackupProgress_ = nullptr;};
        inline int32_t getLogicalFullBackupProgress() const { DARABONBA_PTR_GET_DEFAULT(logicalFullBackupProgress_, 0) };
        inline FullBackupFile& setLogicalFullBackupProgress(int32_t logicalFullBackupProgress) { DARABONBA_PTR_SET_VALUE(logicalFullBackupProgress_, logicalFullBackupProgress) };


        // logicalStructureBackupProgress Field Functions 
        bool hasLogicalStructureBackupProgress() const { return this->logicalStructureBackupProgress_ != nullptr;};
        void deleteLogicalStructureBackupProgress() { this->logicalStructureBackupProgress_ = nullptr;};
        inline int32_t getLogicalStructureBackupProgress() const { DARABONBA_PTR_GET_DEFAULT(logicalStructureBackupProgress_, 0) };
        inline FullBackupFile& setLogicalStructureBackupProgress(int32_t logicalStructureBackupProgress) { DARABONBA_PTR_SET_VALUE(logicalStructureBackupProgress_, logicalStructureBackupProgress) };


        // sourceEndpointEnableSsl Field Functions 
        bool hasSourceEndpointEnableSsl() const { return this->sourceEndpointEnableSsl_ != nullptr;};
        void deleteSourceEndpointEnableSsl() { this->sourceEndpointEnableSsl_ = nullptr;};
        inline string getSourceEndpointEnableSsl() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointEnableSsl_, "") };
        inline FullBackupFile& setSourceEndpointEnableSsl(string sourceEndpointEnableSsl) { DARABONBA_PTR_SET_VALUE(sourceEndpointEnableSsl_, sourceEndpointEnableSsl) };


        // sourceEndpointHost Field Functions 
        bool hasSourceEndpointHost() const { return this->sourceEndpointHost_ != nullptr;};
        void deleteSourceEndpointHost() { this->sourceEndpointHost_ = nullptr;};
        inline string getSourceEndpointHost() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointHost_, "") };
        inline FullBackupFile& setSourceEndpointHost(string sourceEndpointHost) { DARABONBA_PTR_SET_VALUE(sourceEndpointHost_, sourceEndpointHost) };


        // sourceEndpointInstanceId Field Functions 
        bool hasSourceEndpointInstanceId() const { return this->sourceEndpointInstanceId_ != nullptr;};
        void deleteSourceEndpointInstanceId() { this->sourceEndpointInstanceId_ = nullptr;};
        inline string getSourceEndpointInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceId_, "") };
        inline FullBackupFile& setSourceEndpointInstanceId(string sourceEndpointInstanceId) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceId_, sourceEndpointInstanceId) };


        // sourceEndpointInstanceType Field Functions 
        bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
        void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
        inline string getSourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
        inline FullBackupFile& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


        // sourceEndpointIpPort Field Functions 
        bool hasSourceEndpointIpPort() const { return this->sourceEndpointIpPort_ != nullptr;};
        void deleteSourceEndpointIpPort() { this->sourceEndpointIpPort_ = nullptr;};
        inline string getSourceEndpointIpPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIpPort_, "") };
        inline FullBackupFile& setSourceEndpointIpPort(string sourceEndpointIpPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointIpPort_, sourceEndpointIpPort) };


        // sourceEndpointPort Field Functions 
        bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
        void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
        inline string getSourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, "") };
        inline FullBackupFile& setSourceEndpointPort(string sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


        // sourceEndpointRegion Field Functions 
        bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
        void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
        inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
        inline FullBackupFile& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


        // sourceEndpointUserName Field Functions 
        bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
        void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
        inline string getSourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
        inline FullBackupFile& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline FullBackupFile& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // storageEncryptMethod Field Functions 
        bool hasStorageEncryptMethod() const { return this->storageEncryptMethod_ != nullptr;};
        void deleteStorageEncryptMethod() { this->storageEncryptMethod_ = nullptr;};
        inline string getStorageEncryptMethod() const { DARABONBA_PTR_GET_DEFAULT(storageEncryptMethod_, "") };
        inline FullBackupFile& setStorageEncryptMethod(string storageEncryptMethod) { DARABONBA_PTR_SET_VALUE(storageEncryptMethod_, storageEncryptMethod) };


        // storageMethod Field Functions 
        bool hasStorageMethod() const { return this->storageMethod_ != nullptr;};
        void deleteStorageMethod() { this->storageMethod_ = nullptr;};
        inline string getStorageMethod() const { DARABONBA_PTR_GET_DEFAULT(storageMethod_, "") };
        inline FullBackupFile& setStorageMethod(string storageMethod) { DARABONBA_PTR_SET_VALUE(storageMethod_, storageMethod) };


      protected:
        shared_ptr<string> backupGatewayIdentifier_ {};
        shared_ptr<string> backupObjects_ {};
        shared_ptr<int64_t> backupSetExpiredTime_ {};
        shared_ptr<string> backupSetId_ {};
        shared_ptr<int64_t> backupSize_ {};
        shared_ptr<string> backupStatus_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> crossAliyunId_ {};
        shared_ptr<string> crossRoleName_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> errMessage_ {};
        shared_ptr<int64_t> finishTime_ {};
        shared_ptr<int32_t> logicalFullBackupProgress_ {};
        shared_ptr<int32_t> logicalStructureBackupProgress_ {};
        shared_ptr<string> sourceEndpointEnableSsl_ {};
        shared_ptr<string> sourceEndpointHost_ {};
        shared_ptr<string> sourceEndpointInstanceId_ {};
        shared_ptr<string> sourceEndpointInstanceType_ {};
        shared_ptr<string> sourceEndpointIpPort_ {};
        shared_ptr<string> sourceEndpointPort_ {};
        shared_ptr<string> sourceEndpointRegion_ {};
        shared_ptr<string> sourceEndpointUserName_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> storageEncryptMethod_ {};
        shared_ptr<string> storageMethod_ {};
      };

      virtual bool empty() const override { return this->fullBackupFile_ == nullptr; };
      // fullBackupFile Field Functions 
      bool hasFullBackupFile() const { return this->fullBackupFile_ != nullptr;};
      void deleteFullBackupFile() { this->fullBackupFile_ = nullptr;};
      inline const vector<Items::FullBackupFile> & getFullBackupFile() const { DARABONBA_PTR_GET_CONST(fullBackupFile_, vector<Items::FullBackupFile>) };
      inline vector<Items::FullBackupFile> getFullBackupFile() { DARABONBA_PTR_GET(fullBackupFile_, vector<Items::FullBackupFile>) };
      inline Items& setFullBackupFile(const vector<Items::FullBackupFile> & fullBackupFile) { DARABONBA_PTR_SET_VALUE(fullBackupFile_, fullBackupFile) };
      inline Items& setFullBackupFile(vector<Items::FullBackupFile> && fullBackupFile) { DARABONBA_PTR_SET_RVALUE(fullBackupFile_, fullBackupFile) };


    protected:
      shared_ptr<vector<Items::FullBackupFile>> fullBackupFile_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeFullBackupListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeFullBackupListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeFullBackupListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeFullBackupListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeFullBackupListResponseBody::Items) };
    inline DescribeFullBackupListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeFullBackupListResponseBody::Items) };
    inline DescribeFullBackupListResponseBody& setItems(const DescribeFullBackupListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeFullBackupListResponseBody& setItems(DescribeFullBackupListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeFullBackupListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFullBackupListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFullBackupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeFullBackupListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalElements Field Functions 
    bool hasTotalElements() const { return this->totalElements_ != nullptr;};
    void deleteTotalElements() { this->totalElements_ = nullptr;};
    inline int32_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
    inline DescribeFullBackupListResponseBody& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeFullBackupListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeFullBackupListResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation succeeded. Valid values:
    // 
    // - **true**: The operation succeeded.
    // 
    // - **false**: The operation failed.
    shared_ptr<bool> success_ {};
    // The total number of full backup jobs.
    shared_ptr<int32_t> totalElements_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
