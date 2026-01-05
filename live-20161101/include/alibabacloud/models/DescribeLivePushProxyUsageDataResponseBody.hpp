// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATARESPONSEBODY_HPP_
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
  class DescribeLivePushProxyUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePushProxyUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PushProxyData, pushProxyData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePushProxyUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PushProxyData, pushProxyData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLivePushProxyUsageDataResponseBody() = default ;
    DescribeLivePushProxyUsageDataResponseBody(const DescribeLivePushProxyUsageDataResponseBody &) = default ;
    DescribeLivePushProxyUsageDataResponseBody(DescribeLivePushProxyUsageDataResponseBody &&) = default ;
    DescribeLivePushProxyUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePushProxyUsageDataResponseBody() = default ;
    DescribeLivePushProxyUsageDataResponseBody& operator=(const DescribeLivePushProxyUsageDataResponseBody &) = default ;
    DescribeLivePushProxyUsageDataResponseBody& operator=(DescribeLivePushProxyUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushProxyData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushProxyData& obj) { 
        DARABONBA_PTR_TO_JSON(PushProxyDataItem, pushProxyDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, PushProxyData& obj) { 
        DARABONBA_PTR_FROM_JSON(PushProxyDataItem, pushProxyDataItem_);
      };
      PushProxyData() = default ;
      PushProxyData(const PushProxyData &) = default ;
      PushProxyData(PushProxyData &&) = default ;
      PushProxyData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushProxyData() = default ;
      PushProxyData& operator=(const PushProxyData &) = default ;
      PushProxyData& operator=(PushProxyData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PushProxyDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushProxyDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(StreamCount, streamCount_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, PushProxyDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(StreamCount, streamCount_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        PushProxyDataItem() = default ;
        PushProxyDataItem(const PushProxyDataItem &) = default ;
        PushProxyDataItem(PushProxyDataItem &&) = default ;
        PushProxyDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushProxyDataItem() = default ;
        PushProxyDataItem& operator=(const PushProxyDataItem &) = default ;
        PushProxyDataItem& operator=(PushProxyDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->region_ == nullptr && this->streamCount_ == nullptr && this->timeStamp_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline PushProxyDataItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline PushProxyDataItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // streamCount Field Functions 
        bool hasStreamCount() const { return this->streamCount_ != nullptr;};
        void deleteStreamCount() { this->streamCount_ = nullptr;};
        inline int64_t getStreamCount() const { DARABONBA_PTR_GET_DEFAULT(streamCount_, 0L) };
        inline PushProxyDataItem& setStreamCount(int64_t streamCount) { DARABONBA_PTR_SET_VALUE(streamCount_, streamCount) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline PushProxyDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The domain name. If the value of SplitBy includes domain, the returned data is grouped by domain name.
        shared_ptr<string> domainName_ {};
        // The ID of the region. If the value of SplitBy includes region, the returned data is grouped by region.
        shared_ptr<string> region_ {};
        // The peak number of live center stream relay channels.
        shared_ptr<int64_t> streamCount_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->pushProxyDataItem_ == nullptr; };
      // pushProxyDataItem Field Functions 
      bool hasPushProxyDataItem() const { return this->pushProxyDataItem_ != nullptr;};
      void deletePushProxyDataItem() { this->pushProxyDataItem_ = nullptr;};
      inline const vector<PushProxyData::PushProxyDataItem> & getPushProxyDataItem() const { DARABONBA_PTR_GET_CONST(pushProxyDataItem_, vector<PushProxyData::PushProxyDataItem>) };
      inline vector<PushProxyData::PushProxyDataItem> getPushProxyDataItem() { DARABONBA_PTR_GET(pushProxyDataItem_, vector<PushProxyData::PushProxyDataItem>) };
      inline PushProxyData& setPushProxyDataItem(const vector<PushProxyData::PushProxyDataItem> & pushProxyDataItem) { DARABONBA_PTR_SET_VALUE(pushProxyDataItem_, pushProxyDataItem) };
      inline PushProxyData& setPushProxyDataItem(vector<PushProxyData::PushProxyDataItem> && pushProxyDataItem) { DARABONBA_PTR_SET_RVALUE(pushProxyDataItem_, pushProxyDataItem) };


    protected:
      shared_ptr<vector<PushProxyData::PushProxyDataItem>> pushProxyDataItem_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->pushProxyData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLivePushProxyUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pushProxyData Field Functions 
    bool hasPushProxyData() const { return this->pushProxyData_ != nullptr;};
    void deletePushProxyData() { this->pushProxyData_ = nullptr;};
    inline const DescribeLivePushProxyUsageDataResponseBody::PushProxyData & getPushProxyData() const { DARABONBA_PTR_GET_CONST(pushProxyData_, DescribeLivePushProxyUsageDataResponseBody::PushProxyData) };
    inline DescribeLivePushProxyUsageDataResponseBody::PushProxyData getPushProxyData() { DARABONBA_PTR_GET(pushProxyData_, DescribeLivePushProxyUsageDataResponseBody::PushProxyData) };
    inline DescribeLivePushProxyUsageDataResponseBody& setPushProxyData(const DescribeLivePushProxyUsageDataResponseBody::PushProxyData & pushProxyData) { DARABONBA_PTR_SET_VALUE(pushProxyData_, pushProxyData) };
    inline DescribeLivePushProxyUsageDataResponseBody& setPushProxyData(DescribeLivePushProxyUsageDataResponseBody::PushProxyData && pushProxyData) { DARABONBA_PTR_SET_RVALUE(pushProxyData_, pushProxyData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePushProxyUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLivePushProxyUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time.
    shared_ptr<string> endTime_ {};
    // The usage data of live center stream relay.
    shared_ptr<DescribeLivePushProxyUsageDataResponseBody::PushProxyData> pushProxyData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
