// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODY_HPP_
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
  class DescribeHlsLiveStreamRealTimeBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHlsLiveStreamRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHlsLiveStreamRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody(const DescribeHlsLiveStreamRealTimeBpsDataResponseBody &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody(DescribeHlsLiveStreamRealTimeBpsDataResponseBody &&) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHlsLiveStreamRealTimeBpsDataResponseBody() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody& operator=(const DescribeHlsLiveStreamRealTimeBpsDataResponseBody &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody& operator=(DescribeHlsLiveStreamRealTimeBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageData& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
      };
      friend void from_json(const Darabonba::Json& j, UsageData& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
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
      class StreamInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Infos, infos_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, StreamInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Infos, infos_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        StreamInfos() = default ;
        StreamInfos(const StreamInfos &) = default ;
        StreamInfos(StreamInfos &&) = default ;
        StreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamInfos() = default ;
        StreamInfos& operator=(const StreamInfos &) = default ;
        StreamInfos& operator=(StreamInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Infos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Infos& obj) { 
            DARABONBA_PTR_TO_JSON(DownFlow, downFlow_);
            DARABONBA_PTR_TO_JSON(Online, online_);
            DARABONBA_PTR_TO_JSON(Rate, rate_);
          };
          friend void from_json(const Darabonba::Json& j, Infos& obj) { 
            DARABONBA_PTR_FROM_JSON(DownFlow, downFlow_);
            DARABONBA_PTR_FROM_JSON(Online, online_);
            DARABONBA_PTR_FROM_JSON(Rate, rate_);
          };
          Infos() = default ;
          Infos(const Infos &) = default ;
          Infos(Infos &&) = default ;
          Infos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Infos() = default ;
          Infos& operator=(const Infos &) = default ;
          Infos& operator=(Infos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->downFlow_ == nullptr
        && this->online_ == nullptr && this->rate_ == nullptr; };
          // downFlow Field Functions 
          bool hasDownFlow() const { return this->downFlow_ != nullptr;};
          void deleteDownFlow() { this->downFlow_ = nullptr;};
          inline float getDownFlow() const { DARABONBA_PTR_GET_DEFAULT(downFlow_, 0.0) };
          inline Infos& setDownFlow(float downFlow) { DARABONBA_PTR_SET_VALUE(downFlow_, downFlow) };


          // online Field Functions 
          bool hasOnline() const { return this->online_ != nullptr;};
          void deleteOnline() { this->online_ = nullptr;};
          inline float getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, 0.0) };
          inline Infos& setOnline(float online) { DARABONBA_PTR_SET_VALUE(online_, online) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
          inline Infos& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        protected:
          // The bandwidth. Unit: bit/s.
          shared_ptr<float> downFlow_ {};
          // The number of online users.
          shared_ptr<float> online_ {};
          // The bitrate.
          shared_ptr<string> rate_ {};
        };

        virtual bool empty() const override { return this->infos_ == nullptr
        && this->streamName_ == nullptr; };
        // infos Field Functions 
        bool hasInfos() const { return this->infos_ != nullptr;};
        void deleteInfos() { this->infos_ = nullptr;};
        inline const vector<StreamInfos::Infos> & getInfos() const { DARABONBA_PTR_GET_CONST(infos_, vector<StreamInfos::Infos>) };
        inline vector<StreamInfos::Infos> getInfos() { DARABONBA_PTR_GET(infos_, vector<StreamInfos::Infos>) };
        inline StreamInfos& setInfos(const vector<StreamInfos::Infos> & infos) { DARABONBA_PTR_SET_VALUE(infos_, infos) };
        inline StreamInfos& setInfos(vector<StreamInfos::Infos> && infos) { DARABONBA_PTR_SET_RVALUE(infos_, infos) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline StreamInfos& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        // The statistics on the HLS stream.
        shared_ptr<vector<StreamInfos::Infos>> infos_ {};
        // The name of the stream.
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->domainName_ == nullptr
        && this->streamInfos_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline UsageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // streamInfos Field Functions 
      bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
      void deleteStreamInfos() { this->streamInfos_ = nullptr;};
      inline const vector<UsageData::StreamInfos> & getStreamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, vector<UsageData::StreamInfos>) };
      inline vector<UsageData::StreamInfos> getStreamInfos() { DARABONBA_PTR_GET(streamInfos_, vector<UsageData::StreamInfos>) };
      inline UsageData& setStreamInfos(const vector<UsageData::StreamInfos> & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
      inline UsageData& setStreamInfos(vector<UsageData::StreamInfos> && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


    protected:
      // The domain name.
      shared_ptr<string> domainName_ {};
      // Details about the statistics on each HLS stream under the domain name.
      shared_ptr<vector<UsageData::StreamInfos>> streamInfos_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->time_ == nullptr && this->usageData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBody::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBody::UsageData>) };
    inline vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBody::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBody::UsageData>) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBody& setUsageData(const vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBody::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBody& setUsageData(vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBody::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The timestamp for which the data was queried.
    shared_ptr<string> time_ {};
    // The usage data.
    shared_ptr<vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBody::UsageData>> usageData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
