// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRecordUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRecordUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RecordUsageData, recordUsageData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRecordUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RecordUsageData, recordUsageData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainRecordUsageDataResponseBody() = default ;
    DescribeLiveDomainRecordUsageDataResponseBody(const DescribeLiveDomainRecordUsageDataResponseBody &) = default ;
    DescribeLiveDomainRecordUsageDataResponseBody(DescribeLiveDomainRecordUsageDataResponseBody &&) = default ;
    DescribeLiveDomainRecordUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRecordUsageDataResponseBody() = default ;
    DescribeLiveDomainRecordUsageDataResponseBody& operator=(const DescribeLiveDomainRecordUsageDataResponseBody &) = default ;
    DescribeLiveDomainRecordUsageDataResponseBody& operator=(DescribeLiveDomainRecordUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordUsageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordUsageData& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, RecordUsageData& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      RecordUsageData() = default ;
      RecordUsageData(const RecordUsageData &) = default ;
      RecordUsageData(RecordUsageData &&) = default ;
      RecordUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordUsageData() = default ;
      RecordUsageData& operator=(const RecordUsageData &) = default ;
      RecordUsageData& operator=(RecordUsageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DataModule() = default ;
        DataModule(const DataModule &) = default ;
        DataModule(DataModule &&) = default ;
        DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataModule() = default ;
        DataModule& operator=(const DataModule &) = default ;
        DataModule& operator=(DataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->domain_ == nullptr && this->duration_ == nullptr && this->region_ == nullptr && this->timeStamp_ == nullptr && this->type_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline DataModule& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline DataModule& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DataModule& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The number of peak channels.
        shared_ptr<int64_t> count_ {};
        // The main streaming domain. This parameter is returned if the value of the request parameter SplitBy contains `domain`.
        shared_ptr<string> domain_ {};
        // The recording length. Unit: seconds.
        shared_ptr<int64_t> duration_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The time when recording started.
        shared_ptr<string> timeStamp_ {};
        // The recording file type. This parameter is returned if the value of the request parameter SplitBy contains `record_fmt`.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<RecordUsageData::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<RecordUsageData::DataModule>) };
      inline vector<RecordUsageData::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<RecordUsageData::DataModule>) };
      inline RecordUsageData& setDataModule(const vector<RecordUsageData::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline RecordUsageData& setDataModule(vector<RecordUsageData::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<RecordUsageData::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->recordUsageData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // recordUsageData Field Functions 
    bool hasRecordUsageData() const { return this->recordUsageData_ != nullptr;};
    void deleteRecordUsageData() { this->recordUsageData_ = nullptr;};
    inline const DescribeLiveDomainRecordUsageDataResponseBody::RecordUsageData & getRecordUsageData() const { DARABONBA_PTR_GET_CONST(recordUsageData_, DescribeLiveDomainRecordUsageDataResponseBody::RecordUsageData) };
    inline DescribeLiveDomainRecordUsageDataResponseBody::RecordUsageData getRecordUsageData() { DARABONBA_PTR_GET(recordUsageData_, DescribeLiveDomainRecordUsageDataResponseBody::RecordUsageData) };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setRecordUsageData(const DescribeLiveDomainRecordUsageDataResponseBody::RecordUsageData & recordUsageData) { DARABONBA_PTR_SET_VALUE(recordUsageData_, recordUsageData) };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setRecordUsageData(DescribeLiveDomainRecordUsageDataResponseBody::RecordUsageData && recordUsageData) { DARABONBA_PTR_SET_RVALUE(recordUsageData_, recordUsageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The recording data that was collected for each interval.
    shared_ptr<DescribeLiveDomainRecordUsageDataResponseBody::RecordUsageData> recordUsageData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
