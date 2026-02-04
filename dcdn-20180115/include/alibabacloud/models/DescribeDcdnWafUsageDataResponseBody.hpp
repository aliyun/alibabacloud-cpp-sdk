// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFUSAGEDATARESPONSEBODY_HPP_
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
  class DescribeDcdnWafUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WafUsageData, wafUsageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WafUsageData, wafUsageData_);
    };
    DescribeDcdnWafUsageDataResponseBody() = default ;
    DescribeDcdnWafUsageDataResponseBody(const DescribeDcdnWafUsageDataResponseBody &) = default ;
    DescribeDcdnWafUsageDataResponseBody(DescribeDcdnWafUsageDataResponseBody &&) = default ;
    DescribeDcdnWafUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafUsageDataResponseBody() = default ;
    DescribeDcdnWafUsageDataResponseBody& operator=(const DescribeDcdnWafUsageDataResponseBody &) = default ;
    DescribeDcdnWafUsageDataResponseBody& operator=(DescribeDcdnWafUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WafUsageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WafUsageData& obj) { 
        DARABONBA_PTR_TO_JSON(WafUsageDataItem, wafUsageDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, WafUsageData& obj) { 
        DARABONBA_PTR_FROM_JSON(WafUsageDataItem, wafUsageDataItem_);
      };
      WafUsageData() = default ;
      WafUsageData(const WafUsageData &) = default ;
      WafUsageData(WafUsageData &&) = default ;
      WafUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WafUsageData() = default ;
      WafUsageData& operator=(const WafUsageData &) = default ;
      WafUsageData& operator=(WafUsageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WafUsageDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WafUsageDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(AccessCnt, accessCnt_);
          DARABONBA_PTR_TO_JSON(BlockCnt, blockCnt_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(ObserveCnt, observeCnt_);
          DARABONBA_PTR_TO_JSON(SecCu, secCu_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, WafUsageDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessCnt, accessCnt_);
          DARABONBA_PTR_FROM_JSON(BlockCnt, blockCnt_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(ObserveCnt, observeCnt_);
          DARABONBA_PTR_FROM_JSON(SecCu, secCu_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        WafUsageDataItem() = default ;
        WafUsageDataItem(const WafUsageDataItem &) = default ;
        WafUsageDataItem(WafUsageDataItem &&) = default ;
        WafUsageDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WafUsageDataItem() = default ;
        WafUsageDataItem& operator=(const WafUsageDataItem &) = default ;
        WafUsageDataItem& operator=(WafUsageDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessCnt_ == nullptr
        && this->blockCnt_ == nullptr && this->domain_ == nullptr && this->observeCnt_ == nullptr && this->secCu_ == nullptr && this->timeStamp_ == nullptr; };
        // accessCnt Field Functions 
        bool hasAccessCnt() const { return this->accessCnt_ != nullptr;};
        void deleteAccessCnt() { this->accessCnt_ = nullptr;};
        inline int64_t getAccessCnt() const { DARABONBA_PTR_GET_DEFAULT(accessCnt_, 0L) };
        inline WafUsageDataItem& setAccessCnt(int64_t accessCnt) { DARABONBA_PTR_SET_VALUE(accessCnt_, accessCnt) };


        // blockCnt Field Functions 
        bool hasBlockCnt() const { return this->blockCnt_ != nullptr;};
        void deleteBlockCnt() { this->blockCnt_ = nullptr;};
        inline int64_t getBlockCnt() const { DARABONBA_PTR_GET_DEFAULT(blockCnt_, 0L) };
        inline WafUsageDataItem& setBlockCnt(int64_t blockCnt) { DARABONBA_PTR_SET_VALUE(blockCnt_, blockCnt) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline WafUsageDataItem& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // observeCnt Field Functions 
        bool hasObserveCnt() const { return this->observeCnt_ != nullptr;};
        void deleteObserveCnt() { this->observeCnt_ = nullptr;};
        inline int64_t getObserveCnt() const { DARABONBA_PTR_GET_DEFAULT(observeCnt_, 0L) };
        inline WafUsageDataItem& setObserveCnt(int64_t observeCnt) { DARABONBA_PTR_SET_VALUE(observeCnt_, observeCnt) };


        // secCu Field Functions 
        bool hasSecCu() const { return this->secCu_ != nullptr;};
        void deleteSecCu() { this->secCu_ = nullptr;};
        inline int64_t getSecCu() const { DARABONBA_PTR_GET_DEFAULT(secCu_, 0L) };
        inline WafUsageDataItem& setSecCu(int64_t secCu) { DARABONBA_PTR_SET_VALUE(secCu_, secCu) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline WafUsageDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The number of blocked requests.
        shared_ptr<int64_t> accessCnt_ {};
        // The number of allowed requests.
        shared_ptr<int64_t> blockCnt_ {};
        // The domain name that you want to query. If you do not specify an accelerated domain name, all accelerated domain names are queried by default.
        shared_ptr<string> domain_ {};
        // The end of the time range during which data was queried.
        shared_ptr<int64_t> observeCnt_ {};
        // The time granularity for a query. Unit: seconds.
        // 
        // The time granularity varies with the maximum time range per query. Valid values: 300 (5 minutes), 3600 (1 hour), and 86400 (1 day).
        shared_ptr<int64_t> secCu_ {};
        // The beginning of the time range during which data was queried.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->wafUsageDataItem_ == nullptr; };
      // wafUsageDataItem Field Functions 
      bool hasWafUsageDataItem() const { return this->wafUsageDataItem_ != nullptr;};
      void deleteWafUsageDataItem() { this->wafUsageDataItem_ = nullptr;};
      inline const vector<WafUsageData::WafUsageDataItem> & getWafUsageDataItem() const { DARABONBA_PTR_GET_CONST(wafUsageDataItem_, vector<WafUsageData::WafUsageDataItem>) };
      inline vector<WafUsageData::WafUsageDataItem> getWafUsageDataItem() { DARABONBA_PTR_GET(wafUsageDataItem_, vector<WafUsageData::WafUsageDataItem>) };
      inline WafUsageData& setWafUsageDataItem(const vector<WafUsageData::WafUsageDataItem> & wafUsageDataItem) { DARABONBA_PTR_SET_VALUE(wafUsageDataItem_, wafUsageDataItem) };
      inline WafUsageData& setWafUsageDataItem(vector<WafUsageData::WafUsageDataItem> && wafUsageDataItem) { DARABONBA_PTR_SET_RVALUE(wafUsageDataItem_, wafUsageDataItem) };


    protected:
      shared_ptr<vector<WafUsageData::WafUsageDataItem>> wafUsageDataItem_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->wafUsageData_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnWafUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnWafUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // wafUsageData Field Functions 
    bool hasWafUsageData() const { return this->wafUsageData_ != nullptr;};
    void deleteWafUsageData() { this->wafUsageData_ = nullptr;};
    inline const DescribeDcdnWafUsageDataResponseBody::WafUsageData & getWafUsageData() const { DARABONBA_PTR_GET_CONST(wafUsageData_, DescribeDcdnWafUsageDataResponseBody::WafUsageData) };
    inline DescribeDcdnWafUsageDataResponseBody::WafUsageData getWafUsageData() { DARABONBA_PTR_GET(wafUsageData_, DescribeDcdnWafUsageDataResponseBody::WafUsageData) };
    inline DescribeDcdnWafUsageDataResponseBody& setWafUsageData(const DescribeDcdnWafUsageDataResponseBody::WafUsageData & wafUsageData) { DARABONBA_PTR_SET_VALUE(wafUsageData_, wafUsageData) };
    inline DescribeDcdnWafUsageDataResponseBody& setWafUsageData(DescribeDcdnWafUsageDataResponseBody::WafUsageData && wafUsageData) { DARABONBA_PTR_SET_RVALUE(wafUsageData_, wafUsageData) };


  protected:
    // The operation that you want to perform. Set the value to **DescribeDcdnWafUsageData**.
    shared_ptr<string> endTime_ {};
    // Specifies how query results are grouped. By default, this parameter is empty. Valid values:
    // 
    // *   domain: Query results are grouped by accelerated domain name.
    // *   An empty string: Query results are not grouped.
    shared_ptr<string> requestId_ {};
    // The accelerated domain name.
    shared_ptr<string> startTime_ {};
    // The number of monitored requests.
    shared_ptr<DescribeDcdnWafUsageDataResponseBody::WafUsageData> wafUsageData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
