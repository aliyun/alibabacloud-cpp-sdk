// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSUPPEAKPUBLISHSTREAMDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSUPPEAKPUBLISHSTREAMDATARESPONSEBODY_HPP_
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
  class DescribeVsUpPeakPublishStreamDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsUpPeakPublishStreamDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeVsUpPeakPublishStreamDatas, describeVsUpPeakPublishStreamDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsUpPeakPublishStreamDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeVsUpPeakPublishStreamDatas, describeVsUpPeakPublishStreamDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsUpPeakPublishStreamDataResponseBody() = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody(const DescribeVsUpPeakPublishStreamDataResponseBody &) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody(DescribeVsUpPeakPublishStreamDataResponseBody &&) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsUpPeakPublishStreamDataResponseBody() = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody& operator=(const DescribeVsUpPeakPublishStreamDataResponseBody &) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBody& operator=(DescribeVsUpPeakPublishStreamDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribeVsUpPeakPublishStreamDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeVsUpPeakPublishStreamDatas& obj) { 
        DARABONBA_PTR_TO_JSON(DescribeVsUpPeakPublishStreamData, describeVsUpPeakPublishStreamData_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeVsUpPeakPublishStreamDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(DescribeVsUpPeakPublishStreamData, describeVsUpPeakPublishStreamData_);
      };
      DescribeVsUpPeakPublishStreamDatas() = default ;
      DescribeVsUpPeakPublishStreamDatas(const DescribeVsUpPeakPublishStreamDatas &) = default ;
      DescribeVsUpPeakPublishStreamDatas(DescribeVsUpPeakPublishStreamDatas &&) = default ;
      DescribeVsUpPeakPublishStreamDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeVsUpPeakPublishStreamDatas() = default ;
      DescribeVsUpPeakPublishStreamDatas& operator=(const DescribeVsUpPeakPublishStreamDatas &) = default ;
      DescribeVsUpPeakPublishStreamDatas& operator=(DescribeVsUpPeakPublishStreamDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DescribeVsUpPeakPublishStreamData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DescribeVsUpPeakPublishStreamData& obj) { 
          DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
          DARABONBA_PTR_TO_JSON(PeakTime, peakTime_);
          DARABONBA_PTR_TO_JSON(PublishStreamNum, publishStreamNum_);
          DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_TO_JSON(StatName, statName_);
        };
        friend void from_json(const Darabonba::Json& j, DescribeVsUpPeakPublishStreamData& obj) { 
          DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
          DARABONBA_PTR_FROM_JSON(PeakTime, peakTime_);
          DARABONBA_PTR_FROM_JSON(PublishStreamNum, publishStreamNum_);
          DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_FROM_JSON(StatName, statName_);
        };
        DescribeVsUpPeakPublishStreamData() = default ;
        DescribeVsUpPeakPublishStreamData(const DescribeVsUpPeakPublishStreamData &) = default ;
        DescribeVsUpPeakPublishStreamData(DescribeVsUpPeakPublishStreamData &&) = default ;
        DescribeVsUpPeakPublishStreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DescribeVsUpPeakPublishStreamData() = default ;
        DescribeVsUpPeakPublishStreamData& operator=(const DescribeVsUpPeakPublishStreamData &) = default ;
        DescribeVsUpPeakPublishStreamData& operator=(DescribeVsUpPeakPublishStreamData &&) = default ;
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
        inline DescribeVsUpPeakPublishStreamData& setBandWidth(string bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


        // peakTime Field Functions 
        bool hasPeakTime() const { return this->peakTime_ != nullptr;};
        void deletePeakTime() { this->peakTime_ = nullptr;};
        inline string getPeakTime() const { DARABONBA_PTR_GET_DEFAULT(peakTime_, "") };
        inline DescribeVsUpPeakPublishStreamData& setPeakTime(string peakTime) { DARABONBA_PTR_SET_VALUE(peakTime_, peakTime) };


        // publishStreamNum Field Functions 
        bool hasPublishStreamNum() const { return this->publishStreamNum_ != nullptr;};
        void deletePublishStreamNum() { this->publishStreamNum_ = nullptr;};
        inline int32_t getPublishStreamNum() const { DARABONBA_PTR_GET_DEFAULT(publishStreamNum_, 0) };
        inline DescribeVsUpPeakPublishStreamData& setPublishStreamNum(int32_t publishStreamNum) { DARABONBA_PTR_SET_VALUE(publishStreamNum_, publishStreamNum) };


        // queryTime Field Functions 
        bool hasQueryTime() const { return this->queryTime_ != nullptr;};
        void deleteQueryTime() { this->queryTime_ = nullptr;};
        inline string getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
        inline DescribeVsUpPeakPublishStreamData& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


        // statName Field Functions 
        bool hasStatName() const { return this->statName_ != nullptr;};
        void deleteStatName() { this->statName_ = nullptr;};
        inline string getStatName() const { DARABONBA_PTR_GET_DEFAULT(statName_, "") };
        inline DescribeVsUpPeakPublishStreamData& setStatName(string statName) { DARABONBA_PTR_SET_VALUE(statName_, statName) };


      protected:
        shared_ptr<string> bandWidth_ {};
        shared_ptr<string> peakTime_ {};
        shared_ptr<int32_t> publishStreamNum_ {};
        shared_ptr<string> queryTime_ {};
        shared_ptr<string> statName_ {};
      };

      virtual bool empty() const override { return this->describeVsUpPeakPublishStreamData_ == nullptr; };
      // describeVsUpPeakPublishStreamData Field Functions 
      bool hasDescribeVsUpPeakPublishStreamData() const { return this->describeVsUpPeakPublishStreamData_ != nullptr;};
      void deleteDescribeVsUpPeakPublishStreamData() { this->describeVsUpPeakPublishStreamData_ = nullptr;};
      inline const vector<DescribeVsUpPeakPublishStreamDatas::DescribeVsUpPeakPublishStreamData> & getDescribeVsUpPeakPublishStreamData() const { DARABONBA_PTR_GET_CONST(describeVsUpPeakPublishStreamData_, vector<DescribeVsUpPeakPublishStreamDatas::DescribeVsUpPeakPublishStreamData>) };
      inline vector<DescribeVsUpPeakPublishStreamDatas::DescribeVsUpPeakPublishStreamData> getDescribeVsUpPeakPublishStreamData() { DARABONBA_PTR_GET(describeVsUpPeakPublishStreamData_, vector<DescribeVsUpPeakPublishStreamDatas::DescribeVsUpPeakPublishStreamData>) };
      inline DescribeVsUpPeakPublishStreamDatas& setDescribeVsUpPeakPublishStreamData(const vector<DescribeVsUpPeakPublishStreamDatas::DescribeVsUpPeakPublishStreamData> & describeVsUpPeakPublishStreamData) { DARABONBA_PTR_SET_VALUE(describeVsUpPeakPublishStreamData_, describeVsUpPeakPublishStreamData) };
      inline DescribeVsUpPeakPublishStreamDatas& setDescribeVsUpPeakPublishStreamData(vector<DescribeVsUpPeakPublishStreamDatas::DescribeVsUpPeakPublishStreamData> && describeVsUpPeakPublishStreamData) { DARABONBA_PTR_SET_RVALUE(describeVsUpPeakPublishStreamData_, describeVsUpPeakPublishStreamData) };


    protected:
      shared_ptr<vector<DescribeVsUpPeakPublishStreamDatas::DescribeVsUpPeakPublishStreamData>> describeVsUpPeakPublishStreamData_ {};
    };

    virtual bool empty() const override { return this->describeVsUpPeakPublishStreamDatas_ == nullptr
        && this->requestId_ == nullptr; };
    // describeVsUpPeakPublishStreamDatas Field Functions 
    bool hasDescribeVsUpPeakPublishStreamDatas() const { return this->describeVsUpPeakPublishStreamDatas_ != nullptr;};
    void deleteDescribeVsUpPeakPublishStreamDatas() { this->describeVsUpPeakPublishStreamDatas_ = nullptr;};
    inline const DescribeVsUpPeakPublishStreamDataResponseBody::DescribeVsUpPeakPublishStreamDatas & getDescribeVsUpPeakPublishStreamDatas() const { DARABONBA_PTR_GET_CONST(describeVsUpPeakPublishStreamDatas_, DescribeVsUpPeakPublishStreamDataResponseBody::DescribeVsUpPeakPublishStreamDatas) };
    inline DescribeVsUpPeakPublishStreamDataResponseBody::DescribeVsUpPeakPublishStreamDatas getDescribeVsUpPeakPublishStreamDatas() { DARABONBA_PTR_GET(describeVsUpPeakPublishStreamDatas_, DescribeVsUpPeakPublishStreamDataResponseBody::DescribeVsUpPeakPublishStreamDatas) };
    inline DescribeVsUpPeakPublishStreamDataResponseBody& setDescribeVsUpPeakPublishStreamDatas(const DescribeVsUpPeakPublishStreamDataResponseBody::DescribeVsUpPeakPublishStreamDatas & describeVsUpPeakPublishStreamDatas) { DARABONBA_PTR_SET_VALUE(describeVsUpPeakPublishStreamDatas_, describeVsUpPeakPublishStreamDatas) };
    inline DescribeVsUpPeakPublishStreamDataResponseBody& setDescribeVsUpPeakPublishStreamDatas(DescribeVsUpPeakPublishStreamDataResponseBody::DescribeVsUpPeakPublishStreamDatas && describeVsUpPeakPublishStreamDatas) { DARABONBA_PTR_SET_RVALUE(describeVsUpPeakPublishStreamDatas_, describeVsUpPeakPublishStreamDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsUpPeakPublishStreamDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeVsUpPeakPublishStreamDataResponseBody::DescribeVsUpPeakPublishStreamDatas> describeVsUpPeakPublishStreamDatas_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
