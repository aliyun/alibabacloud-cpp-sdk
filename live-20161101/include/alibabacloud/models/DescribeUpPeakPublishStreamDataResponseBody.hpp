// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATARESPONSEBODY_HPP_
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
  class DescribeUpPeakPublishStreamDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpPeakPublishStreamDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpPeakPublishStreamDatas, describeUpPeakPublishStreamDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpPeakPublishStreamDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpPeakPublishStreamDatas, describeUpPeakPublishStreamDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpPeakPublishStreamDataResponseBody() = default ;
    DescribeUpPeakPublishStreamDataResponseBody(const DescribeUpPeakPublishStreamDataResponseBody &) = default ;
    DescribeUpPeakPublishStreamDataResponseBody(DescribeUpPeakPublishStreamDataResponseBody &&) = default ;
    DescribeUpPeakPublishStreamDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpPeakPublishStreamDataResponseBody() = default ;
    DescribeUpPeakPublishStreamDataResponseBody& operator=(const DescribeUpPeakPublishStreamDataResponseBody &) = default ;
    DescribeUpPeakPublishStreamDataResponseBody& operator=(DescribeUpPeakPublishStreamDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribeUpPeakPublishStreamDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeUpPeakPublishStreamDatas& obj) { 
        DARABONBA_PTR_TO_JSON(DescribeUpPeakPublishStreamData, describeUpPeakPublishStreamData_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeUpPeakPublishStreamDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(DescribeUpPeakPublishStreamData, describeUpPeakPublishStreamData_);
      };
      DescribeUpPeakPublishStreamDatas() = default ;
      DescribeUpPeakPublishStreamDatas(const DescribeUpPeakPublishStreamDatas &) = default ;
      DescribeUpPeakPublishStreamDatas(DescribeUpPeakPublishStreamDatas &&) = default ;
      DescribeUpPeakPublishStreamDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeUpPeakPublishStreamDatas() = default ;
      DescribeUpPeakPublishStreamDatas& operator=(const DescribeUpPeakPublishStreamDatas &) = default ;
      DescribeUpPeakPublishStreamDatas& operator=(DescribeUpPeakPublishStreamDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DescribeUpPeakPublishStreamData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DescribeUpPeakPublishStreamData& obj) { 
          DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
          DARABONBA_PTR_TO_JSON(PeakTime, peakTime_);
          DARABONBA_PTR_TO_JSON(PublishStreamNum, publishStreamNum_);
          DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_TO_JSON(StatName, statName_);
        };
        friend void from_json(const Darabonba::Json& j, DescribeUpPeakPublishStreamData& obj) { 
          DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
          DARABONBA_PTR_FROM_JSON(PeakTime, peakTime_);
          DARABONBA_PTR_FROM_JSON(PublishStreamNum, publishStreamNum_);
          DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_FROM_JSON(StatName, statName_);
        };
        DescribeUpPeakPublishStreamData() = default ;
        DescribeUpPeakPublishStreamData(const DescribeUpPeakPublishStreamData &) = default ;
        DescribeUpPeakPublishStreamData(DescribeUpPeakPublishStreamData &&) = default ;
        DescribeUpPeakPublishStreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DescribeUpPeakPublishStreamData() = default ;
        DescribeUpPeakPublishStreamData& operator=(const DescribeUpPeakPublishStreamData &) = default ;
        DescribeUpPeakPublishStreamData& operator=(DescribeUpPeakPublishStreamData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->peakTime_ == nullptr && this->publishStreamNum_ == nullptr && this->queryTime_ == nullptr && this->statName_ == nullptr; };
        // bandWidth Field Functions 
        bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
        void deleteBandWidth() { this->bandWidth_ = nullptr;};
        inline string getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, "") };
        inline DescribeUpPeakPublishStreamData& setBandWidth(string bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


        // peakTime Field Functions 
        bool hasPeakTime() const { return this->peakTime_ != nullptr;};
        void deletePeakTime() { this->peakTime_ = nullptr;};
        inline string getPeakTime() const { DARABONBA_PTR_GET_DEFAULT(peakTime_, "") };
        inline DescribeUpPeakPublishStreamData& setPeakTime(string peakTime) { DARABONBA_PTR_SET_VALUE(peakTime_, peakTime) };


        // publishStreamNum Field Functions 
        bool hasPublishStreamNum() const { return this->publishStreamNum_ != nullptr;};
        void deletePublishStreamNum() { this->publishStreamNum_ = nullptr;};
        inline int32_t getPublishStreamNum() const { DARABONBA_PTR_GET_DEFAULT(publishStreamNum_, 0) };
        inline DescribeUpPeakPublishStreamData& setPublishStreamNum(int32_t publishStreamNum) { DARABONBA_PTR_SET_VALUE(publishStreamNum_, publishStreamNum) };


        // queryTime Field Functions 
        bool hasQueryTime() const { return this->queryTime_ != nullptr;};
        void deleteQueryTime() { this->queryTime_ = nullptr;};
        inline string getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
        inline DescribeUpPeakPublishStreamData& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


        // statName Field Functions 
        bool hasStatName() const { return this->statName_ != nullptr;};
        void deleteStatName() { this->statName_ = nullptr;};
        inline string getStatName() const { DARABONBA_PTR_GET_DEFAULT(statName_, "") };
        inline DescribeUpPeakPublishStreamData& setStatName(string statName) { DARABONBA_PTR_SET_VALUE(statName_, statName) };


      protected:
        // The daily peak inbound bandwidth.
        shared_ptr<string> bandWidth_ {};
        // The time when the daily peak number of concurrently ingested streams is reached.
        shared_ptr<string> peakTime_ {};
        // The daily peak number of concurrently ingested streams.
        shared_ptr<int32_t> publishStreamNum_ {};
        // The time queried on the day.
        shared_ptr<string> queryTime_ {};
        // The category of the statistical data. If the DomainSwitch parameter is set to on, the value of this parameter is the domain name. If the DomainSwitch parameter is set to off or not specified, the value of this parameter is the user ID.
        shared_ptr<string> statName_ {};
      };

      virtual bool empty() const override { return this->describeUpPeakPublishStreamData_ == nullptr; };
      // describeUpPeakPublishStreamData Field Functions 
      bool hasDescribeUpPeakPublishStreamData() const { return this->describeUpPeakPublishStreamData_ != nullptr;};
      void deleteDescribeUpPeakPublishStreamData() { this->describeUpPeakPublishStreamData_ = nullptr;};
      inline const vector<DescribeUpPeakPublishStreamDatas::DescribeUpPeakPublishStreamData> & getDescribeUpPeakPublishStreamData() const { DARABONBA_PTR_GET_CONST(describeUpPeakPublishStreamData_, vector<DescribeUpPeakPublishStreamDatas::DescribeUpPeakPublishStreamData>) };
      inline vector<DescribeUpPeakPublishStreamDatas::DescribeUpPeakPublishStreamData> getDescribeUpPeakPublishStreamData() { DARABONBA_PTR_GET(describeUpPeakPublishStreamData_, vector<DescribeUpPeakPublishStreamDatas::DescribeUpPeakPublishStreamData>) };
      inline DescribeUpPeakPublishStreamDatas& setDescribeUpPeakPublishStreamData(const vector<DescribeUpPeakPublishStreamDatas::DescribeUpPeakPublishStreamData> & describeUpPeakPublishStreamData) { DARABONBA_PTR_SET_VALUE(describeUpPeakPublishStreamData_, describeUpPeakPublishStreamData) };
      inline DescribeUpPeakPublishStreamDatas& setDescribeUpPeakPublishStreamData(vector<DescribeUpPeakPublishStreamDatas::DescribeUpPeakPublishStreamData> && describeUpPeakPublishStreamData) { DARABONBA_PTR_SET_RVALUE(describeUpPeakPublishStreamData_, describeUpPeakPublishStreamData) };


    protected:
      shared_ptr<vector<DescribeUpPeakPublishStreamDatas::DescribeUpPeakPublishStreamData>> describeUpPeakPublishStreamData_ {};
    };

    virtual bool empty() const override { return this->describeUpPeakPublishStreamDatas_ == nullptr
        && this->requestId_ == nullptr; };
    // describeUpPeakPublishStreamDatas Field Functions 
    bool hasDescribeUpPeakPublishStreamDatas() const { return this->describeUpPeakPublishStreamDatas_ != nullptr;};
    void deleteDescribeUpPeakPublishStreamDatas() { this->describeUpPeakPublishStreamDatas_ = nullptr;};
    inline const DescribeUpPeakPublishStreamDataResponseBody::DescribeUpPeakPublishStreamDatas & getDescribeUpPeakPublishStreamDatas() const { DARABONBA_PTR_GET_CONST(describeUpPeakPublishStreamDatas_, DescribeUpPeakPublishStreamDataResponseBody::DescribeUpPeakPublishStreamDatas) };
    inline DescribeUpPeakPublishStreamDataResponseBody::DescribeUpPeakPublishStreamDatas getDescribeUpPeakPublishStreamDatas() { DARABONBA_PTR_GET(describeUpPeakPublishStreamDatas_, DescribeUpPeakPublishStreamDataResponseBody::DescribeUpPeakPublishStreamDatas) };
    inline DescribeUpPeakPublishStreamDataResponseBody& setDescribeUpPeakPublishStreamDatas(const DescribeUpPeakPublishStreamDataResponseBody::DescribeUpPeakPublishStreamDatas & describeUpPeakPublishStreamDatas) { DARABONBA_PTR_SET_VALUE(describeUpPeakPublishStreamDatas_, describeUpPeakPublishStreamDatas) };
    inline DescribeUpPeakPublishStreamDataResponseBody& setDescribeUpPeakPublishStreamDatas(DescribeUpPeakPublishStreamDataResponseBody::DescribeUpPeakPublishStreamDatas && describeUpPeakPublishStreamDatas) { DARABONBA_PTR_SET_RVALUE(describeUpPeakPublishStreamDatas_, describeUpPeakPublishStreamDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpPeakPublishStreamDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the peak number of concurrently ingested streams on each day.
    shared_ptr<DescribeUpPeakPublishStreamDataResponseBody::DescribeUpPeakPublishStreamDatas> describeUpPeakPublishStreamDatas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
