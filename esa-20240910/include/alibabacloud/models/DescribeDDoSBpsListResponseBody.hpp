// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSBpsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSBpsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSBpsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDoSBpsListResponseBody() = default ;
    DescribeDDoSBpsListResponseBody(const DescribeDDoSBpsListResponseBody &) = default ;
    DescribeDDoSBpsListResponseBody(DescribeDDoSBpsListResponseBody &&) = default ;
    DescribeDDoSBpsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSBpsListResponseBody() = default ;
    DescribeDDoSBpsListResponseBody& operator=(const DescribeDDoSBpsListResponseBody &) = default ;
    DescribeDDoSBpsListResponseBody& operator=(DescribeDDoSBpsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataModule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
        DARABONBA_PTR_TO_JSON(AttackBps, attackBps_);
        DARABONBA_PTR_TO_JSON(AttackPps, attackPps_);
        DARABONBA_PTR_TO_JSON(NormalBps, normalBps_);
        DARABONBA_PTR_TO_JSON(NormalPps, normalPps_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(TotalBps, totalBps_);
        DARABONBA_PTR_TO_JSON(TotalPps, totalPps_);
      };
      friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackBps, attackBps_);
        DARABONBA_PTR_FROM_JSON(AttackPps, attackPps_);
        DARABONBA_PTR_FROM_JSON(NormalBps, normalBps_);
        DARABONBA_PTR_FROM_JSON(NormalPps, normalPps_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(TotalBps, totalBps_);
        DARABONBA_PTR_FROM_JSON(TotalPps, totalPps_);
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
      virtual bool empty() const override { return this->attackBps_ == nullptr
        && this->attackPps_ == nullptr && this->normalBps_ == nullptr && this->normalPps_ == nullptr && this->timeStamp_ == nullptr && this->totalBps_ == nullptr
        && this->totalPps_ == nullptr; };
      // attackBps Field Functions 
      bool hasAttackBps() const { return this->attackBps_ != nullptr;};
      void deleteAttackBps() { this->attackBps_ = nullptr;};
      inline int64_t getAttackBps() const { DARABONBA_PTR_GET_DEFAULT(attackBps_, 0L) };
      inline DataModule& setAttackBps(int64_t attackBps) { DARABONBA_PTR_SET_VALUE(attackBps_, attackBps) };


      // attackPps Field Functions 
      bool hasAttackPps() const { return this->attackPps_ != nullptr;};
      void deleteAttackPps() { this->attackPps_ = nullptr;};
      inline int64_t getAttackPps() const { DARABONBA_PTR_GET_DEFAULT(attackPps_, 0L) };
      inline DataModule& setAttackPps(int64_t attackPps) { DARABONBA_PTR_SET_VALUE(attackPps_, attackPps) };


      // normalBps Field Functions 
      bool hasNormalBps() const { return this->normalBps_ != nullptr;};
      void deleteNormalBps() { this->normalBps_ = nullptr;};
      inline int64_t getNormalBps() const { DARABONBA_PTR_GET_DEFAULT(normalBps_, 0L) };
      inline DataModule& setNormalBps(int64_t normalBps) { DARABONBA_PTR_SET_VALUE(normalBps_, normalBps) };


      // normalPps Field Functions 
      bool hasNormalPps() const { return this->normalPps_ != nullptr;};
      void deleteNormalPps() { this->normalPps_ = nullptr;};
      inline int64_t getNormalPps() const { DARABONBA_PTR_GET_DEFAULT(normalPps_, 0L) };
      inline DataModule& setNormalPps(int64_t normalPps) { DARABONBA_PTR_SET_VALUE(normalPps_, normalPps) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // totalBps Field Functions 
      bool hasTotalBps() const { return this->totalBps_ != nullptr;};
      void deleteTotalBps() { this->totalBps_ = nullptr;};
      inline int64_t getTotalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
      inline DataModule& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


      // totalPps Field Functions 
      bool hasTotalPps() const { return this->totalPps_ != nullptr;};
      void deleteTotalPps() { this->totalPps_ = nullptr;};
      inline int64_t getTotalPps() const { DARABONBA_PTR_GET_DEFAULT(totalPps_, 0L) };
      inline DataModule& setTotalPps(int64_t totalPps) { DARABONBA_PTR_SET_VALUE(totalPps_, totalPps) };


    protected:
      // Attack bandwidth, in bps.
      shared_ptr<int64_t> attackBps_ {};
      // Attack PPS.
      shared_ptr<int64_t> attackPps_ {};
      // Normal business bandwidth, in bps.
      shared_ptr<int64_t> normalBps_ {};
      // Normal business PPS.
      shared_ptr<int64_t> normalPps_ {};
      // The timestamp of this data, in ISO8601 format, using UTC+0, formatted as: yyyy-MM-ddTHH:mm:ssZ.
      shared_ptr<string> timeStamp_ {};
      // Total bandwidth, in bps.
      shared_ptr<int64_t> totalBps_ {};
      // Total PPS.
      shared_ptr<int64_t> totalPps_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->dataModule_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline int32_t getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, 0) };
    inline DescribeDDoSBpsListResponseBody& setDataInterval(int32_t dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<DescribeDDoSBpsListResponseBody::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DescribeDDoSBpsListResponseBody::DataModule>) };
    inline vector<DescribeDDoSBpsListResponseBody::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<DescribeDDoSBpsListResponseBody::DataModule>) };
    inline DescribeDDoSBpsListResponseBody& setDataModule(const vector<DescribeDDoSBpsListResponseBody::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDDoSBpsListResponseBody& setDataModule(vector<DescribeDDoSBpsListResponseBody::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDDoSBpsListResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSBpsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDDoSBpsListResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The interval between each piece of data, in seconds.
    // 
    // Generated based on the interval between StartTime and EndTime: less than 1 hour, 60s; 1 hour or more but less than 1 day, 300s; 1 day or more but less than a week, 1800s; 1 week or more, 3600s.
    shared_ptr<int32_t> dataInterval_ {};
    // A list of network bandwidth data for each time interval.
    shared_ptr<vector<DescribeDDoSBpsListResponseBody::DataModule>> dataModule_ {};
    // The end time for fetching data. In ISO8601 format, using UTC+0, formatted as: yyyy-MM-ddTHH:mm:ssZ.
    // 
    // The end time must be later than the start time, and the span between start and end times should not exceed 31 days.
    shared_ptr<string> endTime_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The start time for fetching data. In ISO8601 format, using UTC, formatted as: YYYY-MM-DDThh:mm:ssZ.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
