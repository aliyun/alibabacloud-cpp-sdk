// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetRecallManagementJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecallManagementJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(RecallManagementJobId, recallManagementJobId_);
      DARABONBA_PTR_TO_JSON(RecallManagerTableInfo, recallManagerTableInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecallManagementJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(RecallManagementJobId, recallManagementJobId_);
      DARABONBA_PTR_FROM_JSON(RecallManagerTableInfo, recallManagerTableInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRecallManagementJobResponseBody() = default ;
    GetRecallManagementJobResponseBody(const GetRecallManagementJobResponseBody &) = default ;
    GetRecallManagementJobResponseBody(GetRecallManagementJobResponseBody &&) = default ;
    GetRecallManagementJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecallManagementJobResponseBody() = default ;
    GetRecallManagementJobResponseBody& operator=(const GetRecallManagementJobResponseBody &) = default ;
    GetRecallManagementJobResponseBody& operator=(GetRecallManagementJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecallManagerTableInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecallManagerTableInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataVersion, dataVersion_);
        DARABONBA_PTR_TO_JSON(RecallManagerTableVersionId, recallManagerTableVersionId_);
        DARABONBA_PTR_TO_JSON(SourceTableDataSize, sourceTableDataSize_);
        DARABONBA_PTR_TO_JSON(SourceTableRowCount, sourceTableRowCount_);
      };
      friend void from_json(const Darabonba::Json& j, RecallManagerTableInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataVersion, dataVersion_);
        DARABONBA_PTR_FROM_JSON(RecallManagerTableVersionId, recallManagerTableVersionId_);
        DARABONBA_PTR_FROM_JSON(SourceTableDataSize, sourceTableDataSize_);
        DARABONBA_PTR_FROM_JSON(SourceTableRowCount, sourceTableRowCount_);
      };
      RecallManagerTableInfo() = default ;
      RecallManagerTableInfo(const RecallManagerTableInfo &) = default ;
      RecallManagerTableInfo(RecallManagerTableInfo &&) = default ;
      RecallManagerTableInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecallManagerTableInfo() = default ;
      RecallManagerTableInfo& operator=(const RecallManagerTableInfo &) = default ;
      RecallManagerTableInfo& operator=(RecallManagerTableInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataVersion_ == nullptr
        && this->recallManagerTableVersionId_ == nullptr && this->sourceTableDataSize_ == nullptr && this->sourceTableRowCount_ == nullptr; };
      // dataVersion Field Functions 
      bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
      void deleteDataVersion() { this->dataVersion_ = nullptr;};
      inline string getDataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, "") };
      inline RecallManagerTableInfo& setDataVersion(string dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


      // recallManagerTableVersionId Field Functions 
      bool hasRecallManagerTableVersionId() const { return this->recallManagerTableVersionId_ != nullptr;};
      void deleteRecallManagerTableVersionId() { this->recallManagerTableVersionId_ = nullptr;};
      inline string getRecallManagerTableVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagerTableVersionId_, "") };
      inline RecallManagerTableInfo& setRecallManagerTableVersionId(string recallManagerTableVersionId) { DARABONBA_PTR_SET_VALUE(recallManagerTableVersionId_, recallManagerTableVersionId) };


      // sourceTableDataSize Field Functions 
      bool hasSourceTableDataSize() const { return this->sourceTableDataSize_ != nullptr;};
      void deleteSourceTableDataSize() { this->sourceTableDataSize_ = nullptr;};
      inline string getSourceTableDataSize() const { DARABONBA_PTR_GET_DEFAULT(sourceTableDataSize_, "") };
      inline RecallManagerTableInfo& setSourceTableDataSize(string sourceTableDataSize) { DARABONBA_PTR_SET_VALUE(sourceTableDataSize_, sourceTableDataSize) };


      // sourceTableRowCount Field Functions 
      bool hasSourceTableRowCount() const { return this->sourceTableRowCount_ != nullptr;};
      void deleteSourceTableRowCount() { this->sourceTableRowCount_ = nullptr;};
      inline string getSourceTableRowCount() const { DARABONBA_PTR_GET_DEFAULT(sourceTableRowCount_, "") };
      inline RecallManagerTableInfo& setSourceTableRowCount(string sourceTableRowCount) { DARABONBA_PTR_SET_VALUE(sourceTableRowCount_, sourceTableRowCount) };


    protected:
      shared_ptr<string> dataVersion_ {};
      shared_ptr<string> recallManagerTableVersionId_ {};
      shared_ptr<string> sourceTableDataSize_ {};
      shared_ptr<string> sourceTableRowCount_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->log_ == nullptr && this->recallManagementJobId_ == nullptr && this->recallManagerTableInfo_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetRecallManagementJobResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline string getLog() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
    inline GetRecallManagementJobResponseBody& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


    // recallManagementJobId Field Functions 
    bool hasRecallManagementJobId() const { return this->recallManagementJobId_ != nullptr;};
    void deleteRecallManagementJobId() { this->recallManagementJobId_ = nullptr;};
    inline string getRecallManagementJobId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementJobId_, "") };
    inline GetRecallManagementJobResponseBody& setRecallManagementJobId(string recallManagementJobId) { DARABONBA_PTR_SET_VALUE(recallManagementJobId_, recallManagementJobId) };


    // recallManagerTableInfo Field Functions 
    bool hasRecallManagerTableInfo() const { return this->recallManagerTableInfo_ != nullptr;};
    void deleteRecallManagerTableInfo() { this->recallManagerTableInfo_ = nullptr;};
    inline const GetRecallManagementJobResponseBody::RecallManagerTableInfo & getRecallManagerTableInfo() const { DARABONBA_PTR_GET_CONST(recallManagerTableInfo_, GetRecallManagementJobResponseBody::RecallManagerTableInfo) };
    inline GetRecallManagementJobResponseBody::RecallManagerTableInfo getRecallManagerTableInfo() { DARABONBA_PTR_GET(recallManagerTableInfo_, GetRecallManagementJobResponseBody::RecallManagerTableInfo) };
    inline GetRecallManagementJobResponseBody& setRecallManagerTableInfo(const GetRecallManagementJobResponseBody::RecallManagerTableInfo & recallManagerTableInfo) { DARABONBA_PTR_SET_VALUE(recallManagerTableInfo_, recallManagerTableInfo) };
    inline GetRecallManagementJobResponseBody& setRecallManagerTableInfo(GetRecallManagementJobResponseBody::RecallManagerTableInfo && recallManagerTableInfo) { DARABONBA_PTR_SET_RVALUE(recallManagerTableInfo_, recallManagerTableInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecallManagementJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetRecallManagementJobResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRecallManagementJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> log_ {};
    shared_ptr<string> recallManagementJobId_ {};
    shared_ptr<GetRecallManagementJobResponseBody::RecallManagerTableInfo> recallManagerTableInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
