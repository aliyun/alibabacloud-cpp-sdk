// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFERHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFERHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeTransferHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransferHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HistoryDetails, historyDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransferHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoryDetails, historyDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTransferHistoryResponseBody() = default ;
    DescribeTransferHistoryResponseBody(const DescribeTransferHistoryResponseBody &) = default ;
    DescribeTransferHistoryResponseBody(DescribeTransferHistoryResponseBody &&) = default ;
    DescribeTransferHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransferHistoryResponseBody() = default ;
    DescribeTransferHistoryResponseBody& operator=(const DescribeTransferHistoryResponseBody &) = default ;
    DescribeTransferHistoryResponseBody& operator=(DescribeTransferHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HistoryDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HistoryDetails& obj) { 
        DARABONBA_PTR_TO_JSON(HistoryDetail, historyDetail_);
      };
      friend void from_json(const Darabonba::Json& j, HistoryDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(HistoryDetail, historyDetail_);
      };
      HistoryDetails() = default ;
      HistoryDetails(const HistoryDetails &) = default ;
      HistoryDetails(HistoryDetails &&) = default ;
      HistoryDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HistoryDetails() = default ;
      HistoryDetails& operator=(const HistoryDetails &) = default ;
      HistoryDetails& operator=(HistoryDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HistoryDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HistoryDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BytesPerMinute, bytesPerMinute_);
          DARABONBA_PTR_TO_JSON(DisableWriteWindows, disableWriteWindows_);
          DARABONBA_PTR_TO_JSON(PartsPerMinute, partsPerMinute_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(SourceControlVersion, sourceControlVersion_);
          DARABONBA_PTR_TO_JSON(SourceDBCluster, sourceDBCluster_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubJob, subJob_);
          DARABONBA_PTR_TO_JSON(SubJobMessage, subJobMessage_);
          DARABONBA_PTR_TO_JSON(SubJobStatus, subJobStatus_);
          DARABONBA_PTR_TO_JSON(TargetControlVersion, targetControlVersion_);
          DARABONBA_PTR_TO_JSON(TargetDBCluster, targetDBCluster_);
          DARABONBA_PTR_TO_JSON(UnsyncedBytes, unsyncedBytes_);
          DARABONBA_PTR_TO_JSON(UnsyncedParts, unsyncedParts_);
        };
        friend void from_json(const Darabonba::Json& j, HistoryDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BytesPerMinute, bytesPerMinute_);
          DARABONBA_PTR_FROM_JSON(DisableWriteWindows, disableWriteWindows_);
          DARABONBA_PTR_FROM_JSON(PartsPerMinute, partsPerMinute_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(SourceControlVersion, sourceControlVersion_);
          DARABONBA_PTR_FROM_JSON(SourceDBCluster, sourceDBCluster_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubJob, subJob_);
          DARABONBA_PTR_FROM_JSON(SubJobMessage, subJobMessage_);
          DARABONBA_PTR_FROM_JSON(SubJobStatus, subJobStatus_);
          DARABONBA_PTR_FROM_JSON(TargetControlVersion, targetControlVersion_);
          DARABONBA_PTR_FROM_JSON(TargetDBCluster, targetDBCluster_);
          DARABONBA_PTR_FROM_JSON(UnsyncedBytes, unsyncedBytes_);
          DARABONBA_PTR_FROM_JSON(UnsyncedParts, unsyncedParts_);
        };
        HistoryDetail() = default ;
        HistoryDetail(const HistoryDetail &) = default ;
        HistoryDetail(HistoryDetail &&) = default ;
        HistoryDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HistoryDetail() = default ;
        HistoryDetail& operator=(const HistoryDetail &) = default ;
        HistoryDetail& operator=(HistoryDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bytesPerMinute_ == nullptr
        && this->disableWriteWindows_ == nullptr && this->partsPerMinute_ == nullptr && this->progress_ == nullptr && this->sourceControlVersion_ == nullptr && this->sourceDBCluster_ == nullptr
        && this->status_ == nullptr && this->subJob_ == nullptr && this->subJobMessage_ == nullptr && this->subJobStatus_ == nullptr && this->targetControlVersion_ == nullptr
        && this->targetDBCluster_ == nullptr && this->unsyncedBytes_ == nullptr && this->unsyncedParts_ == nullptr; };
        // bytesPerMinute Field Functions 
        bool hasBytesPerMinute() const { return this->bytesPerMinute_ != nullptr;};
        void deleteBytesPerMinute() { this->bytesPerMinute_ = nullptr;};
        inline int64_t getBytesPerMinute() const { DARABONBA_PTR_GET_DEFAULT(bytesPerMinute_, 0L) };
        inline HistoryDetail& setBytesPerMinute(int64_t bytesPerMinute) { DARABONBA_PTR_SET_VALUE(bytesPerMinute_, bytesPerMinute) };


        // disableWriteWindows Field Functions 
        bool hasDisableWriteWindows() const { return this->disableWriteWindows_ != nullptr;};
        void deleteDisableWriteWindows() { this->disableWriteWindows_ = nullptr;};
        inline string getDisableWriteWindows() const { DARABONBA_PTR_GET_DEFAULT(disableWriteWindows_, "") };
        inline HistoryDetail& setDisableWriteWindows(string disableWriteWindows) { DARABONBA_PTR_SET_VALUE(disableWriteWindows_, disableWriteWindows) };


        // partsPerMinute Field Functions 
        bool hasPartsPerMinute() const { return this->partsPerMinute_ != nullptr;};
        void deletePartsPerMinute() { this->partsPerMinute_ = nullptr;};
        inline double getPartsPerMinute() const { DARABONBA_PTR_GET_DEFAULT(partsPerMinute_, 0.0) };
        inline HistoryDetail& setPartsPerMinute(double partsPerMinute) { DARABONBA_PTR_SET_VALUE(partsPerMinute_, partsPerMinute) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline HistoryDetail& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // sourceControlVersion Field Functions 
        bool hasSourceControlVersion() const { return this->sourceControlVersion_ != nullptr;};
        void deleteSourceControlVersion() { this->sourceControlVersion_ = nullptr;};
        inline string getSourceControlVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceControlVersion_, "") };
        inline HistoryDetail& setSourceControlVersion(string sourceControlVersion) { DARABONBA_PTR_SET_VALUE(sourceControlVersion_, sourceControlVersion) };


        // sourceDBCluster Field Functions 
        bool hasSourceDBCluster() const { return this->sourceDBCluster_ != nullptr;};
        void deleteSourceDBCluster() { this->sourceDBCluster_ = nullptr;};
        inline string getSourceDBCluster() const { DARABONBA_PTR_GET_DEFAULT(sourceDBCluster_, "") };
        inline HistoryDetail& setSourceDBCluster(string sourceDBCluster) { DARABONBA_PTR_SET_VALUE(sourceDBCluster_, sourceDBCluster) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline HistoryDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subJob Field Functions 
        bool hasSubJob() const { return this->subJob_ != nullptr;};
        void deleteSubJob() { this->subJob_ = nullptr;};
        inline string getSubJob() const { DARABONBA_PTR_GET_DEFAULT(subJob_, "") };
        inline HistoryDetail& setSubJob(string subJob) { DARABONBA_PTR_SET_VALUE(subJob_, subJob) };


        // subJobMessage Field Functions 
        bool hasSubJobMessage() const { return this->subJobMessage_ != nullptr;};
        void deleteSubJobMessage() { this->subJobMessage_ = nullptr;};
        inline string getSubJobMessage() const { DARABONBA_PTR_GET_DEFAULT(subJobMessage_, "") };
        inline HistoryDetail& setSubJobMessage(string subJobMessage) { DARABONBA_PTR_SET_VALUE(subJobMessage_, subJobMessage) };


        // subJobStatus Field Functions 
        bool hasSubJobStatus() const { return this->subJobStatus_ != nullptr;};
        void deleteSubJobStatus() { this->subJobStatus_ = nullptr;};
        inline string getSubJobStatus() const { DARABONBA_PTR_GET_DEFAULT(subJobStatus_, "") };
        inline HistoryDetail& setSubJobStatus(string subJobStatus) { DARABONBA_PTR_SET_VALUE(subJobStatus_, subJobStatus) };


        // targetControlVersion Field Functions 
        bool hasTargetControlVersion() const { return this->targetControlVersion_ != nullptr;};
        void deleteTargetControlVersion() { this->targetControlVersion_ = nullptr;};
        inline string getTargetControlVersion() const { DARABONBA_PTR_GET_DEFAULT(targetControlVersion_, "") };
        inline HistoryDetail& setTargetControlVersion(string targetControlVersion) { DARABONBA_PTR_SET_VALUE(targetControlVersion_, targetControlVersion) };


        // targetDBCluster Field Functions 
        bool hasTargetDBCluster() const { return this->targetDBCluster_ != nullptr;};
        void deleteTargetDBCluster() { this->targetDBCluster_ = nullptr;};
        inline string getTargetDBCluster() const { DARABONBA_PTR_GET_DEFAULT(targetDBCluster_, "") };
        inline HistoryDetail& setTargetDBCluster(string targetDBCluster) { DARABONBA_PTR_SET_VALUE(targetDBCluster_, targetDBCluster) };


        // unsyncedBytes Field Functions 
        bool hasUnsyncedBytes() const { return this->unsyncedBytes_ != nullptr;};
        void deleteUnsyncedBytes() { this->unsyncedBytes_ = nullptr;};
        inline int64_t getUnsyncedBytes() const { DARABONBA_PTR_GET_DEFAULT(unsyncedBytes_, 0L) };
        inline HistoryDetail& setUnsyncedBytes(int64_t unsyncedBytes) { DARABONBA_PTR_SET_VALUE(unsyncedBytes_, unsyncedBytes) };


        // unsyncedParts Field Functions 
        bool hasUnsyncedParts() const { return this->unsyncedParts_ != nullptr;};
        void deleteUnsyncedParts() { this->unsyncedParts_ = nullptr;};
        inline int64_t getUnsyncedParts() const { DARABONBA_PTR_GET_DEFAULT(unsyncedParts_, 0L) };
        inline HistoryDetail& setUnsyncedParts(int64_t unsyncedParts) { DARABONBA_PTR_SET_VALUE(unsyncedParts_, unsyncedParts) };


      protected:
        // The amount of data that is migrated per minute.
        shared_ptr<int64_t> bytesPerMinute_ {};
        // The time window during which write operations are stopped.
        shared_ptr<string> disableWriteWindows_ {};
        // The number of parts that are migrated per minute.
        shared_ptr<double> partsPerMinute_ {};
        // The progress of the data migration.
        shared_ptr<string> progress_ {};
        // The control version of the source cluster.
        shared_ptr<string> sourceControlVersion_ {};
        // The ID of the source cluster.
        shared_ptr<string> sourceDBCluster_ {};
        // The status of the data migration task. Valid values:
        // 
        // *   **Finished**: The data migration task is complete.
        // *   **Processing**: The data migration task is in progress.
        shared_ptr<string> status_ {};
        // The running subtask.
        shared_ptr<string> subJob_ {};
        shared_ptr<string> subJobMessage_ {};
        // The subtask status.
        shared_ptr<string> subJobStatus_ {};
        // The control version of the destination cluster.
        shared_ptr<string> targetControlVersion_ {};
        // The ID of the destination cluster.
        shared_ptr<string> targetDBCluster_ {};
        // The amount of data that is not migrated.
        shared_ptr<int64_t> unsyncedBytes_ {};
        // The number of parts that are not migrated.
        shared_ptr<int64_t> unsyncedParts_ {};
      };

      virtual bool empty() const override { return this->historyDetail_ == nullptr; };
      // historyDetail Field Functions 
      bool hasHistoryDetail() const { return this->historyDetail_ != nullptr;};
      void deleteHistoryDetail() { this->historyDetail_ = nullptr;};
      inline const vector<HistoryDetails::HistoryDetail> & getHistoryDetail() const { DARABONBA_PTR_GET_CONST(historyDetail_, vector<HistoryDetails::HistoryDetail>) };
      inline vector<HistoryDetails::HistoryDetail> getHistoryDetail() { DARABONBA_PTR_GET(historyDetail_, vector<HistoryDetails::HistoryDetail>) };
      inline HistoryDetails& setHistoryDetail(const vector<HistoryDetails::HistoryDetail> & historyDetail) { DARABONBA_PTR_SET_VALUE(historyDetail_, historyDetail) };
      inline HistoryDetails& setHistoryDetail(vector<HistoryDetails::HistoryDetail> && historyDetail) { DARABONBA_PTR_SET_RVALUE(historyDetail_, historyDetail) };


    protected:
      shared_ptr<vector<HistoryDetails::HistoryDetail>> historyDetail_ {};
    };

    virtual bool empty() const override { return this->historyDetails_ == nullptr
        && this->requestId_ == nullptr; };
    // historyDetails Field Functions 
    bool hasHistoryDetails() const { return this->historyDetails_ != nullptr;};
    void deleteHistoryDetails() { this->historyDetails_ = nullptr;};
    inline const DescribeTransferHistoryResponseBody::HistoryDetails & getHistoryDetails() const { DARABONBA_PTR_GET_CONST(historyDetails_, DescribeTransferHistoryResponseBody::HistoryDetails) };
    inline DescribeTransferHistoryResponseBody::HistoryDetails getHistoryDetails() { DARABONBA_PTR_GET(historyDetails_, DescribeTransferHistoryResponseBody::HistoryDetails) };
    inline DescribeTransferHistoryResponseBody& setHistoryDetails(const DescribeTransferHistoryResponseBody::HistoryDetails & historyDetails) { DARABONBA_PTR_SET_VALUE(historyDetails_, historyDetails) };
    inline DescribeTransferHistoryResponseBody& setHistoryDetails(DescribeTransferHistoryResponseBody::HistoryDetails && historyDetails) { DARABONBA_PTR_SET_RVALUE(historyDetails_, historyDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransferHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The migration information.
    shared_ptr<DescribeTransferHistoryResponseBody::HistoryDetails> historyDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
