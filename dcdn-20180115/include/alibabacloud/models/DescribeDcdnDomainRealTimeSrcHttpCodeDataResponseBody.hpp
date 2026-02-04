// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMESRCHTTPCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMESRCHTTPCODEDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeSrcHttpCodeData, realTimeSrcHttpCodeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeSrcHttpCodeData, realTimeSrcHttpCodeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody(const DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody(DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& operator=(const DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& operator=(DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeSrcHttpCodeData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeSrcHttpCodeData& obj) { 
        DARABONBA_PTR_TO_JSON(UsageData, usageData_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeSrcHttpCodeData& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
      };
      RealTimeSrcHttpCodeData() = default ;
      RealTimeSrcHttpCodeData(const RealTimeSrcHttpCodeData &) = default ;
      RealTimeSrcHttpCodeData(RealTimeSrcHttpCodeData &&) = default ;
      RealTimeSrcHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeSrcHttpCodeData() = default ;
      RealTimeSrcHttpCodeData& operator=(const RealTimeSrcHttpCodeData &) = default ;
      RealTimeSrcHttpCodeData& operator=(RealTimeSrcHttpCodeData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageData& obj) { 
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, UsageData& obj) { 
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        UsageData() = default ;
        UsageData(const UsageData &) = default ;
        UsageData(UsageData &&) = default ;
        UsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageData() = default ;
        UsageData& operator=(const UsageData &) = default ;
        UsageData& operator=(UsageData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Value : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Value& obj) { 
            DARABONBA_PTR_TO_JSON(RealTimeSrcCodeProportionData, realTimeSrcCodeProportionData_);
          };
          friend void from_json(const Darabonba::Json& j, Value& obj) { 
            DARABONBA_PTR_FROM_JSON(RealTimeSrcCodeProportionData, realTimeSrcCodeProportionData_);
          };
          Value() = default ;
          Value(const Value &) = default ;
          Value(Value &&) = default ;
          Value(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Value() = default ;
          Value& operator=(const Value &) = default ;
          Value& operator=(Value &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RealTimeSrcCodeProportionData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RealTimeSrcCodeProportionData& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Proportion, proportion_);
            };
            friend void from_json(const Darabonba::Json& j, RealTimeSrcCodeProportionData& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
            };
            RealTimeSrcCodeProportionData() = default ;
            RealTimeSrcCodeProportionData(const RealTimeSrcCodeProportionData &) = default ;
            RealTimeSrcCodeProportionData(RealTimeSrcCodeProportionData &&) = default ;
            RealTimeSrcCodeProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RealTimeSrcCodeProportionData() = default ;
            RealTimeSrcCodeProportionData& operator=(const RealTimeSrcCodeProportionData &) = default ;
            RealTimeSrcCodeProportionData& operator=(RealTimeSrcCodeProportionData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->proportion_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline RealTimeSrcCodeProportionData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
            inline RealTimeSrcCodeProportionData& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // proportion Field Functions 
            bool hasProportion() const { return this->proportion_ != nullptr;};
            void deleteProportion() { this->proportion_ = nullptr;};
            inline string getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
            inline RealTimeSrcCodeProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


          protected:
            // The HTTP status code returned.
            shared_ptr<string> code_ {};
            // The number of HTTP status codes.
            shared_ptr<string> count_ {};
            // The proportion of the HTTP status code.
            shared_ptr<string> proportion_ {};
          };

          virtual bool empty() const override { return this->realTimeSrcCodeProportionData_ == nullptr; };
          // realTimeSrcCodeProportionData Field Functions 
          bool hasRealTimeSrcCodeProportionData() const { return this->realTimeSrcCodeProportionData_ != nullptr;};
          void deleteRealTimeSrcCodeProportionData() { this->realTimeSrcCodeProportionData_ = nullptr;};
          inline const vector<Value::RealTimeSrcCodeProportionData> & getRealTimeSrcCodeProportionData() const { DARABONBA_PTR_GET_CONST(realTimeSrcCodeProportionData_, vector<Value::RealTimeSrcCodeProportionData>) };
          inline vector<Value::RealTimeSrcCodeProportionData> getRealTimeSrcCodeProportionData() { DARABONBA_PTR_GET(realTimeSrcCodeProportionData_, vector<Value::RealTimeSrcCodeProportionData>) };
          inline Value& setRealTimeSrcCodeProportionData(const vector<Value::RealTimeSrcCodeProportionData> & realTimeSrcCodeProportionData) { DARABONBA_PTR_SET_VALUE(realTimeSrcCodeProportionData_, realTimeSrcCodeProportionData) };
          inline Value& setRealTimeSrcCodeProportionData(vector<Value::RealTimeSrcCodeProportionData> && realTimeSrcCodeProportionData) { DARABONBA_PTR_SET_RVALUE(realTimeSrcCodeProportionData_, realTimeSrcCodeProportionData) };


        protected:
          shared_ptr<vector<Value::RealTimeSrcCodeProportionData>> realTimeSrcCodeProportionData_ {};
        };

        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline UsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const UsageData::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, UsageData::Value) };
        inline UsageData::Value getValue() { DARABONBA_PTR_GET(value_, UsageData::Value) };
        inline UsageData& setValue(const UsageData::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline UsageData& setValue(UsageData::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


      protected:
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
        // The proportions of the HTTP status codes.
        shared_ptr<UsageData::Value> value_ {};
      };

      virtual bool empty() const override { return this->usageData_ == nullptr; };
      // usageData Field Functions 
      bool hasUsageData() const { return this->usageData_ != nullptr;};
      void deleteUsageData() { this->usageData_ = nullptr;};
      inline const vector<RealTimeSrcHttpCodeData::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<RealTimeSrcHttpCodeData::UsageData>) };
      inline vector<RealTimeSrcHttpCodeData::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<RealTimeSrcHttpCodeData::UsageData>) };
      inline RealTimeSrcHttpCodeData& setUsageData(const vector<RealTimeSrcHttpCodeData::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
      inline RealTimeSrcHttpCodeData& setUsageData(vector<RealTimeSrcHttpCodeData::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


    protected:
      shared_ptr<vector<RealTimeSrcHttpCodeData::UsageData>> usageData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->realTimeSrcHttpCodeData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeSrcHttpCodeData Field Functions 
    bool hasRealTimeSrcHttpCodeData() const { return this->realTimeSrcHttpCodeData_ != nullptr;};
    void deleteRealTimeSrcHttpCodeData() { this->realTimeSrcHttpCodeData_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody::RealTimeSrcHttpCodeData & getRealTimeSrcHttpCodeData() const { DARABONBA_PTR_GET_CONST(realTimeSrcHttpCodeData_, DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody::RealTimeSrcHttpCodeData) };
    inline DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody::RealTimeSrcHttpCodeData getRealTimeSrcHttpCodeData() { DARABONBA_PTR_GET(realTimeSrcHttpCodeData_, DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody::RealTimeSrcHttpCodeData) };
    inline DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& setRealTimeSrcHttpCodeData(const DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody::RealTimeSrcHttpCodeData & realTimeSrcHttpCodeData) { DARABONBA_PTR_SET_VALUE(realTimeSrcHttpCodeData_, realTimeSrcHttpCodeData) };
    inline DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& setRealTimeSrcHttpCodeData(DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody::RealTimeSrcHttpCodeData && realTimeSrcHttpCodeData) { DARABONBA_PTR_SET_RVALUE(realTimeSrcHttpCodeData_, realTimeSrcHttpCodeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The proportions of HTTP status codes at each time interval.
    shared_ptr<DescribeDcdnDomainRealTimeSrcHttpCodeDataResponseBody::RealTimeSrcHttpCodeData> realTimeSrcHttpCodeData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
