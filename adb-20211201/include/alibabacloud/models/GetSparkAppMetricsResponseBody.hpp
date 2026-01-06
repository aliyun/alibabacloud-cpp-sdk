// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkAppMetricsResponseBody() = default ;
    GetSparkAppMetricsResponseBody(const GetSparkAppMetricsResponseBody &) = default ;
    GetSparkAppMetricsResponseBody(GetSparkAppMetricsResponseBody &&) = default ;
    GetSparkAppMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppMetricsResponseBody() = default ;
    GetSparkAppMetricsResponseBody& operator=(const GetSparkAppMetricsResponseBody &) = default ;
    GetSparkAppMetricsResponseBody& operator=(GetSparkAppMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
        DARABONBA_PTR_TO_JSON(EventLogPath, eventLogPath_);
        DARABONBA_PTR_TO_JSON(Finished, finished_);
        DARABONBA_PTR_TO_JSON(ScanMetrics, scanMetrics_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
        DARABONBA_PTR_FROM_JSON(EventLogPath, eventLogPath_);
        DARABONBA_PTR_FROM_JSON(Finished, finished_);
        DARABONBA_PTR_FROM_JSON(ScanMetrics, scanMetrics_);
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
      class ScanMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScanMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(OutputRowsCount, outputRowsCount_);
          DARABONBA_PTR_TO_JSON(TotalReadFileSizeInByte, totalReadFileSizeInByte_);
        };
        friend void from_json(const Darabonba::Json& j, ScanMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(OutputRowsCount, outputRowsCount_);
          DARABONBA_PTR_FROM_JSON(TotalReadFileSizeInByte, totalReadFileSizeInByte_);
        };
        ScanMetrics() = default ;
        ScanMetrics(const ScanMetrics &) = default ;
        ScanMetrics(ScanMetrics &&) = default ;
        ScanMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScanMetrics() = default ;
        ScanMetrics& operator=(const ScanMetrics &) = default ;
        ScanMetrics& operator=(ScanMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->outputRowsCount_ == nullptr
        && this->totalReadFileSizeInByte_ == nullptr; };
        // outputRowsCount Field Functions 
        bool hasOutputRowsCount() const { return this->outputRowsCount_ != nullptr;};
        void deleteOutputRowsCount() { this->outputRowsCount_ = nullptr;};
        inline int64_t getOutputRowsCount() const { DARABONBA_PTR_GET_DEFAULT(outputRowsCount_, 0L) };
        inline ScanMetrics& setOutputRowsCount(int64_t outputRowsCount) { DARABONBA_PTR_SET_VALUE(outputRowsCount_, outputRowsCount) };


        // totalReadFileSizeInByte Field Functions 
        bool hasTotalReadFileSizeInByte() const { return this->totalReadFileSizeInByte_ != nullptr;};
        void deleteTotalReadFileSizeInByte() { this->totalReadFileSizeInByte_ = nullptr;};
        inline int64_t getTotalReadFileSizeInByte() const { DARABONBA_PTR_GET_DEFAULT(totalReadFileSizeInByte_, 0L) };
        inline ScanMetrics& setTotalReadFileSizeInByte(int64_t totalReadFileSizeInByte) { DARABONBA_PTR_SET_VALUE(totalReadFileSizeInByte_, totalReadFileSizeInByte) };


      protected:
        // The number of scanned rows.
        shared_ptr<int64_t> outputRowsCount_ {};
        // The number of scanned bytes.
        shared_ptr<int64_t> totalReadFileSizeInByte_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->attemptId_ == nullptr && this->eventLogPath_ == nullptr && this->finished_ == nullptr && this->scanMetrics_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // attemptId Field Functions 
      bool hasAttemptId() const { return this->attemptId_ != nullptr;};
      void deleteAttemptId() { this->attemptId_ = nullptr;};
      inline string getAttemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
      inline Data& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


      // eventLogPath Field Functions 
      bool hasEventLogPath() const { return this->eventLogPath_ != nullptr;};
      void deleteEventLogPath() { this->eventLogPath_ = nullptr;};
      inline string getEventLogPath() const { DARABONBA_PTR_GET_DEFAULT(eventLogPath_, "") };
      inline Data& setEventLogPath(string eventLogPath) { DARABONBA_PTR_SET_VALUE(eventLogPath_, eventLogPath) };


      // finished Field Functions 
      bool hasFinished() const { return this->finished_ != nullptr;};
      void deleteFinished() { this->finished_ = nullptr;};
      inline bool getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
      inline Data& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


      // scanMetrics Field Functions 
      bool hasScanMetrics() const { return this->scanMetrics_ != nullptr;};
      void deleteScanMetrics() { this->scanMetrics_ = nullptr;};
      inline const Data::ScanMetrics & getScanMetrics() const { DARABONBA_PTR_GET_CONST(scanMetrics_, Data::ScanMetrics) };
      inline Data::ScanMetrics getScanMetrics() { DARABONBA_PTR_GET(scanMetrics_, Data::ScanMetrics) };
      inline Data& setScanMetrics(const Data::ScanMetrics & scanMetrics) { DARABONBA_PTR_SET_VALUE(scanMetrics_, scanMetrics) };
      inline Data& setScanMetrics(Data::ScanMetrics && scanMetrics) { DARABONBA_PTR_SET_RVALUE(scanMetrics_, scanMetrics) };


    protected:
      // The ID of the Spark application.
      shared_ptr<string> appId_ {};
      // The attempt ID of the Spark application.
      shared_ptr<string> attemptId_ {};
      // The path of the event log.
      shared_ptr<string> eventLogPath_ {};
      // Indicates whether parsing is complete. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> finished_ {};
      // The metrics.
      shared_ptr<Data::ScanMetrics> scanMetrics_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkAppMetricsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSparkAppMetricsResponseBody::Data) };
    inline GetSparkAppMetricsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSparkAppMetricsResponseBody::Data) };
    inline GetSparkAppMetricsResponseBody& setData(const GetSparkAppMetricsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkAppMetricsResponseBody& setData(GetSparkAppMetricsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkAppMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetSparkAppMetricsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
