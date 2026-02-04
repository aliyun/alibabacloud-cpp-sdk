// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnErUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnErUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErAccData, erAccData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnErUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErAccData, erAccData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnErUsageDataResponseBody() = default ;
    DescribeDcdnErUsageDataResponseBody(const DescribeDcdnErUsageDataResponseBody &) = default ;
    DescribeDcdnErUsageDataResponseBody(DescribeDcdnErUsageDataResponseBody &&) = default ;
    DescribeDcdnErUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnErUsageDataResponseBody() = default ;
    DescribeDcdnErUsageDataResponseBody& operator=(const DescribeDcdnErUsageDataResponseBody &) = default ;
    DescribeDcdnErUsageDataResponseBody& operator=(DescribeDcdnErUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ErAccData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErAccData& obj) { 
        DARABONBA_PTR_TO_JSON(ErAccItem, erAccItem_);
      };
      friend void from_json(const Darabonba::Json& j, ErAccData& obj) { 
        DARABONBA_PTR_FROM_JSON(ErAccItem, erAccItem_);
      };
      ErAccData() = default ;
      ErAccData(const ErAccData &) = default ;
      ErAccData(ErAccData &&) = default ;
      ErAccData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErAccData() = default ;
      ErAccData& operator=(const ErAccData &) = default ;
      ErAccData& operator=(ErAccData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ErAccItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErAccItem& obj) { 
          DARABONBA_PTR_TO_JSON(ErAcc, erAcc_);
          DARABONBA_PTR_TO_JSON(Routine, routine_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, ErAccItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ErAcc, erAcc_);
          DARABONBA_PTR_FROM_JSON(Routine, routine_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        ErAccItem() = default ;
        ErAccItem(const ErAccItem &) = default ;
        ErAccItem(ErAccItem &&) = default ;
        ErAccItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErAccItem() = default ;
        ErAccItem& operator=(const ErAccItem &) = default ;
        ErAccItem& operator=(ErAccItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->erAcc_ == nullptr
        && this->routine_ == nullptr && this->spec_ == nullptr && this->timeStamp_ == nullptr; };
        // erAcc Field Functions 
        bool hasErAcc() const { return this->erAcc_ != nullptr;};
        void deleteErAcc() { this->erAcc_ = nullptr;};
        inline int64_t getErAcc() const { DARABONBA_PTR_GET_DEFAULT(erAcc_, 0L) };
        inline ErAccItem& setErAcc(int64_t erAcc) { DARABONBA_PTR_SET_VALUE(erAcc_, erAcc) };


        // routine Field Functions 
        bool hasRoutine() const { return this->routine_ != nullptr;};
        void deleteRoutine() { this->routine_ = nullptr;};
        inline string getRoutine() const { DARABONBA_PTR_GET_DEFAULT(routine_, "") };
        inline ErAccItem& setRoutine(string routine) { DARABONBA_PTR_SET_VALUE(routine_, routine) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline ErAccItem& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline ErAccItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The number of requests.
        shared_ptr<int64_t> erAcc_ {};
        // The ID of the routine. This parameter is returned only when SplitBy is set to routine.
        shared_ptr<string> routine_ {};
        // The specification of the routine. This parameter is returned only when SplitBy is set to spec.
        shared_ptr<string> spec_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->erAccItem_ == nullptr; };
      // erAccItem Field Functions 
      bool hasErAccItem() const { return this->erAccItem_ != nullptr;};
      void deleteErAccItem() { this->erAccItem_ = nullptr;};
      inline const vector<ErAccData::ErAccItem> & getErAccItem() const { DARABONBA_PTR_GET_CONST(erAccItem_, vector<ErAccData::ErAccItem>) };
      inline vector<ErAccData::ErAccItem> getErAccItem() { DARABONBA_PTR_GET(erAccItem_, vector<ErAccData::ErAccItem>) };
      inline ErAccData& setErAccItem(const vector<ErAccData::ErAccItem> & erAccItem) { DARABONBA_PTR_SET_VALUE(erAccItem_, erAccItem) };
      inline ErAccData& setErAccItem(vector<ErAccData::ErAccItem> && erAccItem) { DARABONBA_PTR_SET_RVALUE(erAccItem_, erAccItem) };


    protected:
      shared_ptr<vector<ErAccData::ErAccItem>> erAccItem_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->erAccData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnErUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // erAccData Field Functions 
    bool hasErAccData() const { return this->erAccData_ != nullptr;};
    void deleteErAccData() { this->erAccData_ = nullptr;};
    inline const DescribeDcdnErUsageDataResponseBody::ErAccData & getErAccData() const { DARABONBA_PTR_GET_CONST(erAccData_, DescribeDcdnErUsageDataResponseBody::ErAccData) };
    inline DescribeDcdnErUsageDataResponseBody::ErAccData getErAccData() { DARABONBA_PTR_GET(erAccData_, DescribeDcdnErUsageDataResponseBody::ErAccData) };
    inline DescribeDcdnErUsageDataResponseBody& setErAccData(const DescribeDcdnErUsageDataResponseBody::ErAccData & erAccData) { DARABONBA_PTR_SET_VALUE(erAccData_, erAccData) };
    inline DescribeDcdnErUsageDataResponseBody& setErAccData(DescribeDcdnErUsageDataResponseBody::ErAccData && erAccData) { DARABONBA_PTR_SET_RVALUE(erAccData_, erAccData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnErUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnErUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The list of the data returned.
    shared_ptr<DescribeDcdnErUsageDataResponseBody::ErAccData> erAccData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
