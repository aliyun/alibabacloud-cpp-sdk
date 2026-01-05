// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATARESPONSEBODY_HPP_
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
  class LiveUpstreamQosDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiveUpstreamQosDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, LiveUpstreamQosDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    LiveUpstreamQosDataResponseBody() = default ;
    LiveUpstreamQosDataResponseBody(const LiveUpstreamQosDataResponseBody &) = default ;
    LiveUpstreamQosDataResponseBody(LiveUpstreamQosDataResponseBody &&) = default ;
    LiveUpstreamQosDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiveUpstreamQosDataResponseBody() = default ;
    LiveUpstreamQosDataResponseBody& operator=(const LiveUpstreamQosDataResponseBody &) = default ;
    LiveUpstreamQosDataResponseBody& operator=(LiveUpstreamQosDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CdnDomain, cdnDomain_);
        DARABONBA_PTR_TO_JSON(CdnIsp, cdnIsp_);
        DARABONBA_PTR_TO_JSON(CdnOcid, cdnOcid_);
        DARABONBA_PTR_TO_JSON(CdnProvince, cdnProvince_);
        DARABONBA_PTR_TO_JSON(DetailData, detailData_);
        DARABONBA_PTR_TO_JSON(KwaiSidc, kwaiSidc_);
        DARABONBA_PTR_TO_JSON(KwaiTsc, kwaiTsc_);
        DARABONBA_PTR_TO_JSON(UpstreamDomain, upstreamDomain_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CdnDomain, cdnDomain_);
        DARABONBA_PTR_FROM_JSON(CdnIsp, cdnIsp_);
        DARABONBA_PTR_FROM_JSON(CdnOcid, cdnOcid_);
        DARABONBA_PTR_FROM_JSON(CdnProvince, cdnProvince_);
        DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
        DARABONBA_PTR_FROM_JSON(KwaiSidc, kwaiSidc_);
        DARABONBA_PTR_FROM_JSON(KwaiTsc, kwaiTsc_);
        DARABONBA_PTR_FROM_JSON(UpstreamDomain, upstreamDomain_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DetailData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailData& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectDur, connectDur_);
          DARABONBA_PTR_TO_JSON(ConnectFailedCount, connectFailedCount_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(FirstDataDur, firstDataDur_);
          DARABONBA_PTR_TO_JSON(FirstDataFailedCount, firstDataFailedCount_);
          DARABONBA_PTR_TO_JSON(FirstFrameDur, firstFrameDur_);
          DARABONBA_PTR_TO_JSON(FirstFrameSuccessCount, firstFrameSuccessCount_);
          DARABONBA_PTR_TO_JSON(StatusCode2Xx, statusCode2Xx_);
          DARABONBA_PTR_TO_JSON(StatusCode3Xx, statusCode3Xx_);
          DARABONBA_PTR_TO_JSON(StatusCode4Xx, statusCode4Xx_);
          DARABONBA_PTR_TO_JSON(StatusCode5Xx, statusCode5Xx_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, DetailData& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectDur, connectDur_);
          DARABONBA_PTR_FROM_JSON(ConnectFailedCount, connectFailedCount_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(FirstDataDur, firstDataDur_);
          DARABONBA_PTR_FROM_JSON(FirstDataFailedCount, firstDataFailedCount_);
          DARABONBA_PTR_FROM_JSON(FirstFrameDur, firstFrameDur_);
          DARABONBA_PTR_FROM_JSON(FirstFrameSuccessCount, firstFrameSuccessCount_);
          DARABONBA_PTR_FROM_JSON(StatusCode2Xx, statusCode2Xx_);
          DARABONBA_PTR_FROM_JSON(StatusCode3Xx, statusCode3Xx_);
          DARABONBA_PTR_FROM_JSON(StatusCode4Xx, statusCode4Xx_);
          DARABONBA_PTR_FROM_JSON(StatusCode5Xx, statusCode5Xx_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
        virtual bool empty() const override { return this->connectDur_ == nullptr
        && this->connectFailedCount_ == nullptr && this->count_ == nullptr && this->firstDataDur_ == nullptr && this->firstDataFailedCount_ == nullptr && this->firstFrameDur_ == nullptr
        && this->firstFrameSuccessCount_ == nullptr && this->statusCode2Xx_ == nullptr && this->statusCode3Xx_ == nullptr && this->statusCode4Xx_ == nullptr && this->statusCode5Xx_ == nullptr
        && this->timestamp_ == nullptr; };
        // connectDur Field Functions 
        bool hasConnectDur() const { return this->connectDur_ != nullptr;};
        void deleteConnectDur() { this->connectDur_ = nullptr;};
        inline int64_t getConnectDur() const { DARABONBA_PTR_GET_DEFAULT(connectDur_, 0L) };
        inline DetailData& setConnectDur(int64_t connectDur) { DARABONBA_PTR_SET_VALUE(connectDur_, connectDur) };


        // connectFailedCount Field Functions 
        bool hasConnectFailedCount() const { return this->connectFailedCount_ != nullptr;};
        void deleteConnectFailedCount() { this->connectFailedCount_ = nullptr;};
        inline int64_t getConnectFailedCount() const { DARABONBA_PTR_GET_DEFAULT(connectFailedCount_, 0L) };
        inline DetailData& setConnectFailedCount(int64_t connectFailedCount) { DARABONBA_PTR_SET_VALUE(connectFailedCount_, connectFailedCount) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline DetailData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // firstDataDur Field Functions 
        bool hasFirstDataDur() const { return this->firstDataDur_ != nullptr;};
        void deleteFirstDataDur() { this->firstDataDur_ = nullptr;};
        inline int64_t getFirstDataDur() const { DARABONBA_PTR_GET_DEFAULT(firstDataDur_, 0L) };
        inline DetailData& setFirstDataDur(int64_t firstDataDur) { DARABONBA_PTR_SET_VALUE(firstDataDur_, firstDataDur) };


        // firstDataFailedCount Field Functions 
        bool hasFirstDataFailedCount() const { return this->firstDataFailedCount_ != nullptr;};
        void deleteFirstDataFailedCount() { this->firstDataFailedCount_ = nullptr;};
        inline int64_t getFirstDataFailedCount() const { DARABONBA_PTR_GET_DEFAULT(firstDataFailedCount_, 0L) };
        inline DetailData& setFirstDataFailedCount(int64_t firstDataFailedCount) { DARABONBA_PTR_SET_VALUE(firstDataFailedCount_, firstDataFailedCount) };


        // firstFrameDur Field Functions 
        bool hasFirstFrameDur() const { return this->firstFrameDur_ != nullptr;};
        void deleteFirstFrameDur() { this->firstFrameDur_ = nullptr;};
        inline int64_t getFirstFrameDur() const { DARABONBA_PTR_GET_DEFAULT(firstFrameDur_, 0L) };
        inline DetailData& setFirstFrameDur(int64_t firstFrameDur) { DARABONBA_PTR_SET_VALUE(firstFrameDur_, firstFrameDur) };


        // firstFrameSuccessCount Field Functions 
        bool hasFirstFrameSuccessCount() const { return this->firstFrameSuccessCount_ != nullptr;};
        void deleteFirstFrameSuccessCount() { this->firstFrameSuccessCount_ = nullptr;};
        inline int64_t getFirstFrameSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(firstFrameSuccessCount_, 0L) };
        inline DetailData& setFirstFrameSuccessCount(int64_t firstFrameSuccessCount) { DARABONBA_PTR_SET_VALUE(firstFrameSuccessCount_, firstFrameSuccessCount) };


        // statusCode2Xx Field Functions 
        bool hasStatusCode2Xx() const { return this->statusCode2Xx_ != nullptr;};
        void deleteStatusCode2Xx() { this->statusCode2Xx_ = nullptr;};
        inline int64_t getStatusCode2Xx() const { DARABONBA_PTR_GET_DEFAULT(statusCode2Xx_, 0L) };
        inline DetailData& setStatusCode2Xx(int64_t statusCode2Xx) { DARABONBA_PTR_SET_VALUE(statusCode2Xx_, statusCode2Xx) };


        // statusCode3Xx Field Functions 
        bool hasStatusCode3Xx() const { return this->statusCode3Xx_ != nullptr;};
        void deleteStatusCode3Xx() { this->statusCode3Xx_ = nullptr;};
        inline int64_t getStatusCode3Xx() const { DARABONBA_PTR_GET_DEFAULT(statusCode3Xx_, 0L) };
        inline DetailData& setStatusCode3Xx(int64_t statusCode3Xx) { DARABONBA_PTR_SET_VALUE(statusCode3Xx_, statusCode3Xx) };


        // statusCode4Xx Field Functions 
        bool hasStatusCode4Xx() const { return this->statusCode4Xx_ != nullptr;};
        void deleteStatusCode4Xx() { this->statusCode4Xx_ = nullptr;};
        inline int64_t getStatusCode4Xx() const { DARABONBA_PTR_GET_DEFAULT(statusCode4Xx_, 0L) };
        inline DetailData& setStatusCode4Xx(int64_t statusCode4Xx) { DARABONBA_PTR_SET_VALUE(statusCode4Xx_, statusCode4Xx) };


        // statusCode5Xx Field Functions 
        bool hasStatusCode5Xx() const { return this->statusCode5Xx_ != nullptr;};
        void deleteStatusCode5Xx() { this->statusCode5Xx_ = nullptr;};
        inline int64_t getStatusCode5Xx() const { DARABONBA_PTR_GET_DEFAULT(statusCode5Xx_, 0L) };
        inline DetailData& setStatusCode5Xx(int64_t statusCode5Xx) { DARABONBA_PTR_SET_VALUE(statusCode5Xx_, statusCode5Xx) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline DetailData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        shared_ptr<int64_t> connectDur_ {};
        shared_ptr<int64_t> connectFailedCount_ {};
        shared_ptr<int64_t> count_ {};
        shared_ptr<int64_t> firstDataDur_ {};
        shared_ptr<int64_t> firstDataFailedCount_ {};
        shared_ptr<int64_t> firstFrameDur_ {};
        shared_ptr<int64_t> firstFrameSuccessCount_ {};
        shared_ptr<int64_t> statusCode2Xx_ {};
        shared_ptr<int64_t> statusCode3Xx_ {};
        shared_ptr<int64_t> statusCode4Xx_ {};
        shared_ptr<int64_t> statusCode5Xx_ {};
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->cdnDomain_ == nullptr
        && this->cdnIsp_ == nullptr && this->cdnOcid_ == nullptr && this->cdnProvince_ == nullptr && this->detailData_ == nullptr && this->kwaiSidc_ == nullptr
        && this->kwaiTsc_ == nullptr && this->upstreamDomain_ == nullptr; };
      // cdnDomain Field Functions 
      bool hasCdnDomain() const { return this->cdnDomain_ != nullptr;};
      void deleteCdnDomain() { this->cdnDomain_ = nullptr;};
      inline string getCdnDomain() const { DARABONBA_PTR_GET_DEFAULT(cdnDomain_, "") };
      inline Data& setCdnDomain(string cdnDomain) { DARABONBA_PTR_SET_VALUE(cdnDomain_, cdnDomain) };


      // cdnIsp Field Functions 
      bool hasCdnIsp() const { return this->cdnIsp_ != nullptr;};
      void deleteCdnIsp() { this->cdnIsp_ = nullptr;};
      inline string getCdnIsp() const { DARABONBA_PTR_GET_DEFAULT(cdnIsp_, "") };
      inline Data& setCdnIsp(string cdnIsp) { DARABONBA_PTR_SET_VALUE(cdnIsp_, cdnIsp) };


      // cdnOcid Field Functions 
      bool hasCdnOcid() const { return this->cdnOcid_ != nullptr;};
      void deleteCdnOcid() { this->cdnOcid_ = nullptr;};
      inline string getCdnOcid() const { DARABONBA_PTR_GET_DEFAULT(cdnOcid_, "") };
      inline Data& setCdnOcid(string cdnOcid) { DARABONBA_PTR_SET_VALUE(cdnOcid_, cdnOcid) };


      // cdnProvince Field Functions 
      bool hasCdnProvince() const { return this->cdnProvince_ != nullptr;};
      void deleteCdnProvince() { this->cdnProvince_ = nullptr;};
      inline string getCdnProvince() const { DARABONBA_PTR_GET_DEFAULT(cdnProvince_, "") };
      inline Data& setCdnProvince(string cdnProvince) { DARABONBA_PTR_SET_VALUE(cdnProvince_, cdnProvince) };


      // detailData Field Functions 
      bool hasDetailData() const { return this->detailData_ != nullptr;};
      void deleteDetailData() { this->detailData_ = nullptr;};
      inline const vector<Data::DetailData> & getDetailData() const { DARABONBA_PTR_GET_CONST(detailData_, vector<Data::DetailData>) };
      inline vector<Data::DetailData> getDetailData() { DARABONBA_PTR_GET(detailData_, vector<Data::DetailData>) };
      inline Data& setDetailData(const vector<Data::DetailData> & detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };
      inline Data& setDetailData(vector<Data::DetailData> && detailData) { DARABONBA_PTR_SET_RVALUE(detailData_, detailData) };


      // kwaiSidc Field Functions 
      bool hasKwaiSidc() const { return this->kwaiSidc_ != nullptr;};
      void deleteKwaiSidc() { this->kwaiSidc_ = nullptr;};
      inline string getKwaiSidc() const { DARABONBA_PTR_GET_DEFAULT(kwaiSidc_, "") };
      inline Data& setKwaiSidc(string kwaiSidc) { DARABONBA_PTR_SET_VALUE(kwaiSidc_, kwaiSidc) };


      // kwaiTsc Field Functions 
      bool hasKwaiTsc() const { return this->kwaiTsc_ != nullptr;};
      void deleteKwaiTsc() { this->kwaiTsc_ = nullptr;};
      inline int64_t getKwaiTsc() const { DARABONBA_PTR_GET_DEFAULT(kwaiTsc_, 0L) };
      inline Data& setKwaiTsc(int64_t kwaiTsc) { DARABONBA_PTR_SET_VALUE(kwaiTsc_, kwaiTsc) };


      // upstreamDomain Field Functions 
      bool hasUpstreamDomain() const { return this->upstreamDomain_ != nullptr;};
      void deleteUpstreamDomain() { this->upstreamDomain_ = nullptr;};
      inline string getUpstreamDomain() const { DARABONBA_PTR_GET_DEFAULT(upstreamDomain_, "") };
      inline Data& setUpstreamDomain(string upstreamDomain) { DARABONBA_PTR_SET_VALUE(upstreamDomain_, upstreamDomain) };


    protected:
      shared_ptr<string> cdnDomain_ {};
      shared_ptr<string> cdnIsp_ {};
      shared_ptr<string> cdnOcid_ {};
      shared_ptr<string> cdnProvince_ {};
      shared_ptr<vector<Data::DetailData>> detailData_ {};
      shared_ptr<string> kwaiSidc_ {};
      shared_ptr<int64_t> kwaiTsc_ {};
      shared_ptr<string> upstreamDomain_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<LiveUpstreamQosDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<LiveUpstreamQosDataResponseBody::Data>) };
    inline vector<LiveUpstreamQosDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<LiveUpstreamQosDataResponseBody::Data>) };
    inline LiveUpstreamQosDataResponseBody& setData(const vector<LiveUpstreamQosDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline LiveUpstreamQosDataResponseBody& setData(vector<LiveUpstreamQosDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LiveUpstreamQosDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LiveUpstreamQosDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LiveUpstreamQosDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<LiveUpstreamQosDataResponseBody::Data>> data_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
