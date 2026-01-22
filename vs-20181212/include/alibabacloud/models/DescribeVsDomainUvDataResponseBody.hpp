// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINUVDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINUVDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainUvDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainUvDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UvDataInterval, uvDataInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainUvDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UvDataInterval, uvDataInterval_);
    };
    DescribeVsDomainUvDataResponseBody() = default ;
    DescribeVsDomainUvDataResponseBody(const DescribeVsDomainUvDataResponseBody &) = default ;
    DescribeVsDomainUvDataResponseBody(DescribeVsDomainUvDataResponseBody &&) = default ;
    DescribeVsDomainUvDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainUvDataResponseBody() = default ;
    DescribeVsDomainUvDataResponseBody& operator=(const DescribeVsDomainUvDataResponseBody &) = default ;
    DescribeVsDomainUvDataResponseBody& operator=(DescribeVsDomainUvDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UvDataInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UvDataInterval& obj) { 
        DARABONBA_PTR_TO_JSON(UsageData, usageData_);
      };
      friend void from_json(const Darabonba::Json& j, UvDataInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
      };
      UvDataInterval() = default ;
      UvDataInterval(const UvDataInterval &) = default ;
      UvDataInterval(UvDataInterval &&) = default ;
      UvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UvDataInterval() = default ;
      UvDataInterval& operator=(const UvDataInterval &) = default ;
      UvDataInterval& operator=(UvDataInterval &&) = default ;
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
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline UsageData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->usageData_ == nullptr; };
      // usageData Field Functions 
      bool hasUsageData() const { return this->usageData_ != nullptr;};
      void deleteUsageData() { this->usageData_ = nullptr;};
      inline const vector<UvDataInterval::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<UvDataInterval::UsageData>) };
      inline vector<UvDataInterval::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<UvDataInterval::UsageData>) };
      inline UvDataInterval& setUsageData(const vector<UvDataInterval::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
      inline UvDataInterval& setUsageData(vector<UvDataInterval::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


    protected:
      shared_ptr<vector<UvDataInterval::UsageData>> usageData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->uvDataInterval_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVsDomainUvDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsDomainUvDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVsDomainUvDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainUvDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVsDomainUvDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // uvDataInterval Field Functions 
    bool hasUvDataInterval() const { return this->uvDataInterval_ != nullptr;};
    void deleteUvDataInterval() { this->uvDataInterval_ = nullptr;};
    inline const DescribeVsDomainUvDataResponseBody::UvDataInterval & getUvDataInterval() const { DARABONBA_PTR_GET_CONST(uvDataInterval_, DescribeVsDomainUvDataResponseBody::UvDataInterval) };
    inline DescribeVsDomainUvDataResponseBody::UvDataInterval getUvDataInterval() { DARABONBA_PTR_GET(uvDataInterval_, DescribeVsDomainUvDataResponseBody::UvDataInterval) };
    inline DescribeVsDomainUvDataResponseBody& setUvDataInterval(const DescribeVsDomainUvDataResponseBody::UvDataInterval & uvDataInterval) { DARABONBA_PTR_SET_VALUE(uvDataInterval_, uvDataInterval) };
    inline DescribeVsDomainUvDataResponseBody& setUvDataInterval(DescribeVsDomainUvDataResponseBody::UvDataInterval && uvDataInterval) { DARABONBA_PTR_SET_RVALUE(uvDataInterval_, uvDataInterval) };


  protected:
    shared_ptr<string> dataInterval_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeVsDomainUvDataResponseBody::UvDataInterval> uvDataInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
