// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEHTTPCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEHTTPCODEDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainRealTimeHttpCodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeHttpCodeData, realTimeHttpCodeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeHttpCodeData, realTimeHttpCodeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBody(const DescribeDcdnDomainRealTimeHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBody(DescribeDcdnDomainRealTimeHttpCodeDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& operator=(const DescribeDcdnDomainRealTimeHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& operator=(DescribeDcdnDomainRealTimeHttpCodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeHttpCodeData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeHttpCodeData& obj) { 
        DARABONBA_PTR_TO_JSON(UsageData, usageData_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeHttpCodeData& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
      };
      RealTimeHttpCodeData() = default ;
      RealTimeHttpCodeData(const RealTimeHttpCodeData &) = default ;
      RealTimeHttpCodeData(RealTimeHttpCodeData &&) = default ;
      RealTimeHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeHttpCodeData() = default ;
      RealTimeHttpCodeData& operator=(const RealTimeHttpCodeData &) = default ;
      RealTimeHttpCodeData& operator=(RealTimeHttpCodeData &&) = default ;
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
            DARABONBA_PTR_TO_JSON(RealTimeCodeProportionData, realTimeCodeProportionData_);
          };
          friend void from_json(const Darabonba::Json& j, Value& obj) { 
            DARABONBA_PTR_FROM_JSON(RealTimeCodeProportionData, realTimeCodeProportionData_);
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
          class RealTimeCodeProportionData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RealTimeCodeProportionData& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Proportion, proportion_);
            };
            friend void from_json(const Darabonba::Json& j, RealTimeCodeProportionData& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
            };
            RealTimeCodeProportionData() = default ;
            RealTimeCodeProportionData(const RealTimeCodeProportionData &) = default ;
            RealTimeCodeProportionData(RealTimeCodeProportionData &&) = default ;
            RealTimeCodeProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RealTimeCodeProportionData() = default ;
            RealTimeCodeProportionData& operator=(const RealTimeCodeProportionData &) = default ;
            RealTimeCodeProportionData& operator=(RealTimeCodeProportionData &&) = default ;
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
            inline RealTimeCodeProportionData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
            inline RealTimeCodeProportionData& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // proportion Field Functions 
            bool hasProportion() const { return this->proportion_ != nullptr;};
            void deleteProportion() { this->proportion_ = nullptr;};
            inline string getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
            inline RealTimeCodeProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


          protected:
            // The HTTP status code returned.
            shared_ptr<string> code_ {};
            // The count of each HTTP status code.
            shared_ptr<string> count_ {};
            // The proportion of the HTTP status code.
            shared_ptr<string> proportion_ {};
          };

          virtual bool empty() const override { return this->realTimeCodeProportionData_ == nullptr; };
          // realTimeCodeProportionData Field Functions 
          bool hasRealTimeCodeProportionData() const { return this->realTimeCodeProportionData_ != nullptr;};
          void deleteRealTimeCodeProportionData() { this->realTimeCodeProportionData_ = nullptr;};
          inline const vector<Value::RealTimeCodeProportionData> & getRealTimeCodeProportionData() const { DARABONBA_PTR_GET_CONST(realTimeCodeProportionData_, vector<Value::RealTimeCodeProportionData>) };
          inline vector<Value::RealTimeCodeProportionData> getRealTimeCodeProportionData() { DARABONBA_PTR_GET(realTimeCodeProportionData_, vector<Value::RealTimeCodeProportionData>) };
          inline Value& setRealTimeCodeProportionData(const vector<Value::RealTimeCodeProportionData> & realTimeCodeProportionData) { DARABONBA_PTR_SET_VALUE(realTimeCodeProportionData_, realTimeCodeProportionData) };
          inline Value& setRealTimeCodeProportionData(vector<Value::RealTimeCodeProportionData> && realTimeCodeProportionData) { DARABONBA_PTR_SET_RVALUE(realTimeCodeProportionData_, realTimeCodeProportionData) };


        protected:
          shared_ptr<vector<Value::RealTimeCodeProportionData>> realTimeCodeProportionData_ {};
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
        // The information about the HTTP status code returned.
        shared_ptr<UsageData::Value> value_ {};
      };

      virtual bool empty() const override { return this->usageData_ == nullptr; };
      // usageData Field Functions 
      bool hasUsageData() const { return this->usageData_ != nullptr;};
      void deleteUsageData() { this->usageData_ = nullptr;};
      inline const vector<RealTimeHttpCodeData::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<RealTimeHttpCodeData::UsageData>) };
      inline vector<RealTimeHttpCodeData::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<RealTimeHttpCodeData::UsageData>) };
      inline RealTimeHttpCodeData& setUsageData(const vector<RealTimeHttpCodeData::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
      inline RealTimeHttpCodeData& setUsageData(vector<RealTimeHttpCodeData::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


    protected:
      shared_ptr<vector<RealTimeHttpCodeData::UsageData>> usageData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->realTimeHttpCodeData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeHttpCodeData Field Functions 
    bool hasRealTimeHttpCodeData() const { return this->realTimeHttpCodeData_ != nullptr;};
    void deleteRealTimeHttpCodeData() { this->realTimeHttpCodeData_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData & getRealTimeHttpCodeData() const { DARABONBA_PTR_GET_CONST(realTimeHttpCodeData_, DescribeDcdnDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData) };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData getRealTimeHttpCodeData() { DARABONBA_PTR_GET(realTimeHttpCodeData_, DescribeDcdnDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData) };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& setRealTimeHttpCodeData(const DescribeDcdnDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData & realTimeHttpCodeData) { DARABONBA_PTR_SET_VALUE(realTimeHttpCodeData_, realTimeHttpCodeData) };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& setRealTimeHttpCodeData(DescribeDcdnDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData && realTimeHttpCodeData) { DARABONBA_PTR_SET_RVALUE(realTimeHttpCodeData_, realTimeHttpCodeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The proportions of the HTTP status codes.
    shared_ptr<DescribeDcdnDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData> realTimeHttpCodeData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
