// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINMAX95BPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINMAX95BPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainMax95BpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainMax95BpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetailData, detailData_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomesticMax95Bps, domesticMax95Bps_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Max95Bps, max95Bps_);
      DARABONBA_PTR_TO_JSON(OverseasMax95Bps, overseasMax95Bps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainMax95BpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomesticMax95Bps, domesticMax95Bps_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Max95Bps, max95Bps_);
      DARABONBA_PTR_FROM_JSON(OverseasMax95Bps, overseasMax95Bps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodDomainMax95BpsDataResponseBody() = default ;
    DescribeVodDomainMax95BpsDataResponseBody(const DescribeVodDomainMax95BpsDataResponseBody &) = default ;
    DescribeVodDomainMax95BpsDataResponseBody(DescribeVodDomainMax95BpsDataResponseBody &&) = default ;
    DescribeVodDomainMax95BpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainMax95BpsDataResponseBody() = default ;
    DescribeVodDomainMax95BpsDataResponseBody& operator=(const DescribeVodDomainMax95BpsDataResponseBody &) = default ;
    DescribeVodDomainMax95BpsDataResponseBody& operator=(DescribeVodDomainMax95BpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetailData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetailData& obj) { 
        DARABONBA_PTR_TO_JSON(Max95Detail, max95Detail_);
      };
      friend void from_json(const Darabonba::Json& j, DetailData& obj) { 
        DARABONBA_PTR_FROM_JSON(Max95Detail, max95Detail_);
      };
      DetailData() = default ;
      DetailData(const DetailData &) = default ;
      DetailData(DetailData &&) = default ;
      DetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetailData() = default ;
      DetailData& operator=(const DetailData &) = default ;
      DetailData& operator=(DetailData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Max95Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Max95Detail& obj) { 
          DARABONBA_PTR_TO_JSON(Area, area_);
          DARABONBA_PTR_TO_JSON(Max95Bps, max95Bps_);
          DARABONBA_PTR_TO_JSON(Max95BpsPeakTime, max95BpsPeakTime_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, Max95Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(Area, area_);
          DARABONBA_PTR_FROM_JSON(Max95Bps, max95Bps_);
          DARABONBA_PTR_FROM_JSON(Max95BpsPeakTime, max95BpsPeakTime_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        Max95Detail() = default ;
        Max95Detail(const Max95Detail &) = default ;
        Max95Detail(Max95Detail &&) = default ;
        Max95Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Max95Detail() = default ;
        Max95Detail& operator=(const Max95Detail &) = default ;
        Max95Detail& operator=(Max95Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->area_ == nullptr
        && this->max95Bps_ == nullptr && this->max95BpsPeakTime_ == nullptr && this->timeStamp_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline Max95Detail& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // max95Bps Field Functions 
        bool hasMax95Bps() const { return this->max95Bps_ != nullptr;};
        void deleteMax95Bps() { this->max95Bps_ = nullptr;};
        inline float getMax95Bps() const { DARABONBA_PTR_GET_DEFAULT(max95Bps_, 0.0) };
        inline Max95Detail& setMax95Bps(float max95Bps) { DARABONBA_PTR_SET_VALUE(max95Bps_, max95Bps) };


        // max95BpsPeakTime Field Functions 
        bool hasMax95BpsPeakTime() const { return this->max95BpsPeakTime_ != nullptr;};
        void deleteMax95BpsPeakTime() { this->max95BpsPeakTime_ = nullptr;};
        inline string getMax95BpsPeakTime() const { DARABONBA_PTR_GET_DEFAULT(max95BpsPeakTime_, "") };
        inline Max95Detail& setMax95BpsPeakTime(string max95BpsPeakTime) { DARABONBA_PTR_SET_VALUE(max95BpsPeakTime_, max95BpsPeakTime) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline Max95Detail& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The billable region where the peak 95 data was collected.
        shared_ptr<string> area_ {};
        // The 95th percentile bandwidth.
        shared_ptr<float> max95Bps_ {};
        // The time corresponding to the 95th percentile bandwidth peak.
        shared_ptr<string> max95BpsPeakTime_ {};
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->max95Detail_ == nullptr; };
      // max95Detail Field Functions 
      bool hasMax95Detail() const { return this->max95Detail_ != nullptr;};
      void deleteMax95Detail() { this->max95Detail_ = nullptr;};
      inline const vector<DetailData::Max95Detail> & getMax95Detail() const { DARABONBA_PTR_GET_CONST(max95Detail_, vector<DetailData::Max95Detail>) };
      inline vector<DetailData::Max95Detail> getMax95Detail() { DARABONBA_PTR_GET(max95Detail_, vector<DetailData::Max95Detail>) };
      inline DetailData& setMax95Detail(const vector<DetailData::Max95Detail> & max95Detail) { DARABONBA_PTR_SET_VALUE(max95Detail_, max95Detail) };
      inline DetailData& setMax95Detail(vector<DetailData::Max95Detail> && max95Detail) { DARABONBA_PTR_SET_RVALUE(max95Detail_, max95Detail) };


    protected:
      shared_ptr<vector<DetailData::Max95Detail>> max95Detail_ {};
    };

    virtual bool empty() const override { return this->detailData_ == nullptr
        && this->domainName_ == nullptr && this->domesticMax95Bps_ == nullptr && this->endTime_ == nullptr && this->max95Bps_ == nullptr && this->overseasMax95Bps_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // detailData Field Functions 
    bool hasDetailData() const { return this->detailData_ != nullptr;};
    void deleteDetailData() { this->detailData_ = nullptr;};
    inline const DescribeVodDomainMax95BpsDataResponseBody::DetailData & getDetailData() const { DARABONBA_PTR_GET_CONST(detailData_, DescribeVodDomainMax95BpsDataResponseBody::DetailData) };
    inline DescribeVodDomainMax95BpsDataResponseBody::DetailData getDetailData() { DARABONBA_PTR_GET(detailData_, DescribeVodDomainMax95BpsDataResponseBody::DetailData) };
    inline DescribeVodDomainMax95BpsDataResponseBody& setDetailData(const DescribeVodDomainMax95BpsDataResponseBody::DetailData & detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };
    inline DescribeVodDomainMax95BpsDataResponseBody& setDetailData(DescribeVodDomainMax95BpsDataResponseBody::DetailData && detailData) { DARABONBA_PTR_SET_RVALUE(detailData_, detailData) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domesticMax95Bps Field Functions 
    bool hasDomesticMax95Bps() const { return this->domesticMax95Bps_ != nullptr;};
    void deleteDomesticMax95Bps() { this->domesticMax95Bps_ = nullptr;};
    inline string getDomesticMax95Bps() const { DARABONBA_PTR_GET_DEFAULT(domesticMax95Bps_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBody& setDomesticMax95Bps(string domesticMax95Bps) { DARABONBA_PTR_SET_VALUE(domesticMax95Bps_, domesticMax95Bps) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // max95Bps Field Functions 
    bool hasMax95Bps() const { return this->max95Bps_ != nullptr;};
    void deleteMax95Bps() { this->max95Bps_ = nullptr;};
    inline string getMax95Bps() const { DARABONBA_PTR_GET_DEFAULT(max95Bps_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBody& setMax95Bps(string max95Bps) { DARABONBA_PTR_SET_VALUE(max95Bps_, max95Bps) };


    // overseasMax95Bps Field Functions 
    bool hasOverseasMax95Bps() const { return this->overseasMax95Bps_ != nullptr;};
    void deleteOverseasMax95Bps() { this->overseasMax95Bps_ = nullptr;};
    inline string getOverseasMax95Bps() const { DARABONBA_PTR_GET_DEFAULT(overseasMax95Bps_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBody& setOverseasMax95Bps(string overseasMax95Bps) { DARABONBA_PTR_SET_VALUE(overseasMax95Bps_, overseasMax95Bps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainMax95BpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Details of the 95th percentile bandwidth.
    shared_ptr<DescribeVodDomainMax95BpsDataResponseBody::DetailData> detailData_ {};
    // The domain name for CDN.
    shared_ptr<string> domainName_ {};
    // The 95th percentile bandwidth in the Chinese mainland.
    shared_ptr<string> domesticMax95Bps_ {};
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  The end time must be later than the start time.
    shared_ptr<string> endTime_ {};
    // The 95th percentile bandwidth.
    shared_ptr<string> max95Bps_ {};
    // The 95th percentile bandwidth outside the Chinese mainland.
    shared_ptr<string> overseasMax95Bps_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
