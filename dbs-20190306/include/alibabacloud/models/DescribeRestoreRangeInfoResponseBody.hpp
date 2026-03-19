// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFORESPONSEBODY_HPP_
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
  class DescribeRestoreRangeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreRangeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreRangeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeRestoreRangeInfoResponseBody() = default ;
    DescribeRestoreRangeInfoResponseBody(const DescribeRestoreRangeInfoResponseBody &) = default ;
    DescribeRestoreRangeInfoResponseBody(DescribeRestoreRangeInfoResponseBody &&) = default ;
    DescribeRestoreRangeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreRangeInfoResponseBody() = default ;
    DescribeRestoreRangeInfoResponseBody& operator=(const DescribeRestoreRangeInfoResponseBody &) = default ;
    DescribeRestoreRangeInfoResponseBody& operator=(DescribeRestoreRangeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBSRecoverRange, DBSRecoverRange_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBSRecoverRange, DBSRecoverRange_);
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
      class DBSRecoverRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBSRecoverRange& obj) { 
          DARABONBA_PTR_TO_JSON(BackupSourceHost, backupSourceHost_);
          DARABONBA_PTR_TO_JSON(BackupSourceInstanceId, backupSourceInstanceId_);
          DARABONBA_PTR_TO_JSON(BackupSourceInstanceType, backupSourceInstanceType_);
          DARABONBA_PTR_TO_JSON(BackupSourcePort, backupSourcePort_);
          DARABONBA_PTR_TO_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
          DARABONBA_PTR_TO_JSON(EndTimestampForRestore, endTimestampForRestore_);
          DARABONBA_PTR_TO_JSON(FullBackupList, fullBackupList_);
          DARABONBA_PTR_TO_JSON(RangeType, rangeType_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
        };
        friend void from_json(const Darabonba::Json& j, DBSRecoverRange& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupSourceHost, backupSourceHost_);
          DARABONBA_PTR_FROM_JSON(BackupSourceInstanceId, backupSourceInstanceId_);
          DARABONBA_PTR_FROM_JSON(BackupSourceInstanceType, backupSourceInstanceType_);
          DARABONBA_PTR_FROM_JSON(BackupSourcePort, backupSourcePort_);
          DARABONBA_PTR_FROM_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
          DARABONBA_PTR_FROM_JSON(EndTimestampForRestore, endTimestampForRestore_);
          DARABONBA_PTR_FROM_JSON(FullBackupList, fullBackupList_);
          DARABONBA_PTR_FROM_JSON(RangeType, rangeType_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
        };
        DBSRecoverRange() = default ;
        DBSRecoverRange(const DBSRecoverRange &) = default ;
        DBSRecoverRange(DBSRecoverRange &&) = default ;
        DBSRecoverRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBSRecoverRange() = default ;
        DBSRecoverRange& operator=(const DBSRecoverRange &) = default ;
        DBSRecoverRange& operator=(DBSRecoverRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FullBackupList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FullBackupList& obj) { 
            DARABONBA_PTR_TO_JSON(FullBackupDetail, fullBackupDetail_);
          };
          friend void from_json(const Darabonba::Json& j, FullBackupList& obj) { 
            DARABONBA_PTR_FROM_JSON(FullBackupDetail, fullBackupDetail_);
          };
          FullBackupList() = default ;
          FullBackupList(const FullBackupList &) = default ;
          FullBackupList(FullBackupList &&) = default ;
          FullBackupList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FullBackupList() = default ;
          FullBackupList& operator=(const FullBackupList &) = default ;
          FullBackupList& operator=(FullBackupList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FullBackupDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FullBackupDetail& obj) { 
              DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, FullBackupDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            FullBackupDetail() = default ;
            FullBackupDetail(const FullBackupDetail &) = default ;
            FullBackupDetail(FullBackupDetail &&) = default ;
            FullBackupDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FullBackupDetail() = default ;
            FullBackupDetail& operator=(const FullBackupDetail &) = default ;
            FullBackupDetail& operator=(FullBackupDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->backupSetId_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
            // backupSetId Field Functions 
            bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
            void deleteBackupSetId() { this->backupSetId_ = nullptr;};
            inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
            inline FullBackupDetail& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
            inline FullBackupDetail& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
            inline FullBackupDetail& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            shared_ptr<string> backupSetId_ {};
            shared_ptr<int64_t> endTime_ {};
            shared_ptr<int64_t> startTime_ {};
          };

          virtual bool empty() const override { return this->fullBackupDetail_ == nullptr; };
          // fullBackupDetail Field Functions 
          bool hasFullBackupDetail() const { return this->fullBackupDetail_ != nullptr;};
          void deleteFullBackupDetail() { this->fullBackupDetail_ = nullptr;};
          inline const vector<FullBackupList::FullBackupDetail> & getFullBackupDetail() const { DARABONBA_PTR_GET_CONST(fullBackupDetail_, vector<FullBackupList::FullBackupDetail>) };
          inline vector<FullBackupList::FullBackupDetail> getFullBackupDetail() { DARABONBA_PTR_GET(fullBackupDetail_, vector<FullBackupList::FullBackupDetail>) };
          inline FullBackupList& setFullBackupDetail(const vector<FullBackupList::FullBackupDetail> & fullBackupDetail) { DARABONBA_PTR_SET_VALUE(fullBackupDetail_, fullBackupDetail) };
          inline FullBackupList& setFullBackupDetail(vector<FullBackupList::FullBackupDetail> && fullBackupDetail) { DARABONBA_PTR_SET_RVALUE(fullBackupDetail_, fullBackupDetail) };


        protected:
          shared_ptr<vector<FullBackupList::FullBackupDetail>> fullBackupDetail_ {};
        };

        virtual bool empty() const override { return this->backupSourceHost_ == nullptr
        && this->backupSourceInstanceId_ == nullptr && this->backupSourceInstanceType_ == nullptr && this->backupSourcePort_ == nullptr && this->beginTimestampForRestore_ == nullptr && this->endTimestampForRestore_ == nullptr
        && this->fullBackupList_ == nullptr && this->rangeType_ == nullptr && this->sourceEndpointInstanceID_ == nullptr && this->sourceEndpointInstanceType_ == nullptr; };
        // backupSourceHost Field Functions 
        bool hasBackupSourceHost() const { return this->backupSourceHost_ != nullptr;};
        void deleteBackupSourceHost() { this->backupSourceHost_ = nullptr;};
        inline string getBackupSourceHost() const { DARABONBA_PTR_GET_DEFAULT(backupSourceHost_, "") };
        inline DBSRecoverRange& setBackupSourceHost(string backupSourceHost) { DARABONBA_PTR_SET_VALUE(backupSourceHost_, backupSourceHost) };


        // backupSourceInstanceId Field Functions 
        bool hasBackupSourceInstanceId() const { return this->backupSourceInstanceId_ != nullptr;};
        void deleteBackupSourceInstanceId() { this->backupSourceInstanceId_ = nullptr;};
        inline string getBackupSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(backupSourceInstanceId_, "") };
        inline DBSRecoverRange& setBackupSourceInstanceId(string backupSourceInstanceId) { DARABONBA_PTR_SET_VALUE(backupSourceInstanceId_, backupSourceInstanceId) };


        // backupSourceInstanceType Field Functions 
        bool hasBackupSourceInstanceType() const { return this->backupSourceInstanceType_ != nullptr;};
        void deleteBackupSourceInstanceType() { this->backupSourceInstanceType_ = nullptr;};
        inline string getBackupSourceInstanceType() const { DARABONBA_PTR_GET_DEFAULT(backupSourceInstanceType_, "") };
        inline DBSRecoverRange& setBackupSourceInstanceType(string backupSourceInstanceType) { DARABONBA_PTR_SET_VALUE(backupSourceInstanceType_, backupSourceInstanceType) };


        // backupSourcePort Field Functions 
        bool hasBackupSourcePort() const { return this->backupSourcePort_ != nullptr;};
        void deleteBackupSourcePort() { this->backupSourcePort_ = nullptr;};
        inline string getBackupSourcePort() const { DARABONBA_PTR_GET_DEFAULT(backupSourcePort_, "") };
        inline DBSRecoverRange& setBackupSourcePort(string backupSourcePort) { DARABONBA_PTR_SET_VALUE(backupSourcePort_, backupSourcePort) };


        // beginTimestampForRestore Field Functions 
        bool hasBeginTimestampForRestore() const { return this->beginTimestampForRestore_ != nullptr;};
        void deleteBeginTimestampForRestore() { this->beginTimestampForRestore_ = nullptr;};
        inline int64_t getBeginTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(beginTimestampForRestore_, 0L) };
        inline DBSRecoverRange& setBeginTimestampForRestore(int64_t beginTimestampForRestore) { DARABONBA_PTR_SET_VALUE(beginTimestampForRestore_, beginTimestampForRestore) };


        // endTimestampForRestore Field Functions 
        bool hasEndTimestampForRestore() const { return this->endTimestampForRestore_ != nullptr;};
        void deleteEndTimestampForRestore() { this->endTimestampForRestore_ = nullptr;};
        inline int64_t getEndTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(endTimestampForRestore_, 0L) };
        inline DBSRecoverRange& setEndTimestampForRestore(int64_t endTimestampForRestore) { DARABONBA_PTR_SET_VALUE(endTimestampForRestore_, endTimestampForRestore) };


        // fullBackupList Field Functions 
        bool hasFullBackupList() const { return this->fullBackupList_ != nullptr;};
        void deleteFullBackupList() { this->fullBackupList_ = nullptr;};
        inline const DBSRecoverRange::FullBackupList & getFullBackupList() const { DARABONBA_PTR_GET_CONST(fullBackupList_, DBSRecoverRange::FullBackupList) };
        inline DBSRecoverRange::FullBackupList getFullBackupList() { DARABONBA_PTR_GET(fullBackupList_, DBSRecoverRange::FullBackupList) };
        inline DBSRecoverRange& setFullBackupList(const DBSRecoverRange::FullBackupList & fullBackupList) { DARABONBA_PTR_SET_VALUE(fullBackupList_, fullBackupList) };
        inline DBSRecoverRange& setFullBackupList(DBSRecoverRange::FullBackupList && fullBackupList) { DARABONBA_PTR_SET_RVALUE(fullBackupList_, fullBackupList) };


        // rangeType Field Functions 
        bool hasRangeType() const { return this->rangeType_ != nullptr;};
        void deleteRangeType() { this->rangeType_ = nullptr;};
        inline string getRangeType() const { DARABONBA_PTR_GET_DEFAULT(rangeType_, "") };
        inline DBSRecoverRange& setRangeType(string rangeType) { DARABONBA_PTR_SET_VALUE(rangeType_, rangeType) };


        // sourceEndpointInstanceID Field Functions 
        bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
        void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
        inline string getSourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
        inline DBSRecoverRange& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


        // sourceEndpointInstanceType Field Functions 
        bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
        void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
        inline string getSourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
        inline DBSRecoverRange& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


      protected:
        shared_ptr<string> backupSourceHost_ {};
        shared_ptr<string> backupSourceInstanceId_ {};
        shared_ptr<string> backupSourceInstanceType_ {};
        shared_ptr<string> backupSourcePort_ {};
        shared_ptr<int64_t> beginTimestampForRestore_ {};
        shared_ptr<int64_t> endTimestampForRestore_ {};
        shared_ptr<DBSRecoverRange::FullBackupList> fullBackupList_ {};
        shared_ptr<string> rangeType_ {};
        shared_ptr<string> sourceEndpointInstanceID_ {};
        shared_ptr<string> sourceEndpointInstanceType_ {};
      };

      virtual bool empty() const override { return this->DBSRecoverRange_ == nullptr; };
      // DBSRecoverRange Field Functions 
      bool hasDBSRecoverRange() const { return this->DBSRecoverRange_ != nullptr;};
      void deleteDBSRecoverRange() { this->DBSRecoverRange_ = nullptr;};
      inline const vector<Items::DBSRecoverRange> & getDBSRecoverRange() const { DARABONBA_PTR_GET_CONST(DBSRecoverRange_, vector<Items::DBSRecoverRange>) };
      inline vector<Items::DBSRecoverRange> getDBSRecoverRange() { DARABONBA_PTR_GET(DBSRecoverRange_, vector<Items::DBSRecoverRange>) };
      inline Items& setDBSRecoverRange(const vector<Items::DBSRecoverRange> & dBSRecoverRange) { DARABONBA_PTR_SET_VALUE(DBSRecoverRange_, dBSRecoverRange) };
      inline Items& setDBSRecoverRange(vector<Items::DBSRecoverRange> && dBSRecoverRange) { DARABONBA_PTR_SET_RVALUE(DBSRecoverRange_, dBSRecoverRange) };


    protected:
      shared_ptr<vector<Items::DBSRecoverRange>> DBSRecoverRange_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeRestoreRangeInfoResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeRestoreRangeInfoResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeRestoreRangeInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeRestoreRangeInfoResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeRestoreRangeInfoResponseBody::Items) };
    inline DescribeRestoreRangeInfoResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeRestoreRangeInfoResponseBody::Items) };
    inline DescribeRestoreRangeInfoResponseBody& setItems(const DescribeRestoreRangeInfoResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeRestoreRangeInfoResponseBody& setItems(DescribeRestoreRangeInfoResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreRangeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRestoreRangeInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeRestoreRangeInfoResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded. Valid values:
    // 
    // - **true**: The request succeeded.
    // 
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
