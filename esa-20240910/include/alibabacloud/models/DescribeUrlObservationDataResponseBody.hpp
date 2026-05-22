// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLOBSERVATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLOBSERVATIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeUrlObservationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlObservationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UrlDetailData, urlDetailData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUrlObservationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UrlDetailData, urlDetailData_);
    };
    DescribeUrlObservationDataResponseBody() = default ;
    DescribeUrlObservationDataResponseBody(const DescribeUrlObservationDataResponseBody &) = default ;
    DescribeUrlObservationDataResponseBody(DescribeUrlObservationDataResponseBody &&) = default ;
    DescribeUrlObservationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlObservationDataResponseBody() = default ;
    DescribeUrlObservationDataResponseBody& operator=(const DescribeUrlObservationDataResponseBody &) = default ;
    DescribeUrlObservationDataResponseBody& operator=(DescribeUrlObservationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UrlDetailData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UrlDetailData& obj) { 
        DARABONBA_PTR_TO_JSON(CLS, CLS_);
        DARABONBA_PTR_TO_JSON(ClientPlatform, clientPlatform_);
        DARABONBA_PTR_TO_JSON(Country, country_);
        DARABONBA_PTR_TO_JSON(FCP, FCP_);
        DARABONBA_PTR_TO_JSON(FID, FID_);
        DARABONBA_PTR_TO_JSON(INP, INP_);
        DARABONBA_PTR_TO_JSON(LCP, LCP_);
        DARABONBA_PTR_TO_JSON(TTFB, TTFB_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, UrlDetailData& obj) { 
        DARABONBA_PTR_FROM_JSON(CLS, CLS_);
        DARABONBA_PTR_FROM_JSON(ClientPlatform, clientPlatform_);
        DARABONBA_PTR_FROM_JSON(Country, country_);
        DARABONBA_PTR_FROM_JSON(FCP, FCP_);
        DARABONBA_PTR_FROM_JSON(FID, FID_);
        DARABONBA_PTR_FROM_JSON(INP, INP_);
        DARABONBA_PTR_FROM_JSON(LCP, LCP_);
        DARABONBA_PTR_FROM_JSON(TTFB, TTFB_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      UrlDetailData() = default ;
      UrlDetailData(const UrlDetailData &) = default ;
      UrlDetailData(UrlDetailData &&) = default ;
      UrlDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UrlDetailData() = default ;
      UrlDetailData& operator=(const UrlDetailData &) = default ;
      UrlDetailData& operator=(UrlDetailData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CLS_ == nullptr
        && this->clientPlatform_ == nullptr && this->country_ == nullptr && this->FCP_ == nullptr && this->FID_ == nullptr && this->INP_ == nullptr
        && this->LCP_ == nullptr && this->TTFB_ == nullptr && this->url_ == nullptr; };
      // CLS Field Functions 
      bool hasCLS() const { return this->CLS_ != nullptr;};
      void deleteCLS() { this->CLS_ = nullptr;};
      inline float getCLS() const { DARABONBA_PTR_GET_DEFAULT(CLS_, 0.0) };
      inline UrlDetailData& setCLS(float CLS) { DARABONBA_PTR_SET_VALUE(CLS_, CLS) };


      // clientPlatform Field Functions 
      bool hasClientPlatform() const { return this->clientPlatform_ != nullptr;};
      void deleteClientPlatform() { this->clientPlatform_ = nullptr;};
      inline string getClientPlatform() const { DARABONBA_PTR_GET_DEFAULT(clientPlatform_, "") };
      inline UrlDetailData& setClientPlatform(string clientPlatform) { DARABONBA_PTR_SET_VALUE(clientPlatform_, clientPlatform) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline UrlDetailData& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // FCP Field Functions 
      bool hasFCP() const { return this->FCP_ != nullptr;};
      void deleteFCP() { this->FCP_ = nullptr;};
      inline float getFCP() const { DARABONBA_PTR_GET_DEFAULT(FCP_, 0.0) };
      inline UrlDetailData& setFCP(float FCP) { DARABONBA_PTR_SET_VALUE(FCP_, FCP) };


      // FID Field Functions 
      bool hasFID() const { return this->FID_ != nullptr;};
      void deleteFID() { this->FID_ = nullptr;};
      inline float getFID() const { DARABONBA_PTR_GET_DEFAULT(FID_, 0.0) };
      inline UrlDetailData& setFID(float FID) { DARABONBA_PTR_SET_VALUE(FID_, FID) };


      // INP Field Functions 
      bool hasINP() const { return this->INP_ != nullptr;};
      void deleteINP() { this->INP_ = nullptr;};
      inline float getINP() const { DARABONBA_PTR_GET_DEFAULT(INP_, 0.0) };
      inline UrlDetailData& setINP(float INP) { DARABONBA_PTR_SET_VALUE(INP_, INP) };


      // LCP Field Functions 
      bool hasLCP() const { return this->LCP_ != nullptr;};
      void deleteLCP() { this->LCP_ = nullptr;};
      inline float getLCP() const { DARABONBA_PTR_GET_DEFAULT(LCP_, 0.0) };
      inline UrlDetailData& setLCP(float LCP) { DARABONBA_PTR_SET_VALUE(LCP_, LCP) };


      // TTFB Field Functions 
      bool hasTTFB() const { return this->TTFB_ != nullptr;};
      void deleteTTFB() { this->TTFB_ = nullptr;};
      inline float getTTFB() const { DARABONBA_PTR_GET_DEFAULT(TTFB_, 0.0) };
      inline UrlDetailData& setTTFB(float TTFB) { DARABONBA_PTR_SET_VALUE(TTFB_, TTFB) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline UrlDetailData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Measures the maximum layout mutation score for every unexpected layout change that occurs throughout the life of the page.
      shared_ptr<float> CLS_ {};
      // The platform of the device.
      shared_ptr<string> clientPlatform_ {};
      // The country or region to which the IP address belongs.
      shared_ptr<string> country_ {};
      // Measures the time between when the page is loaded and when any part of the page\\"s content is rendered on the screen. Unit: ms.
      shared_ptr<float> FCP_ {};
      // Measures the time between when the user first interacts with the page and when the browser is actually able to start processing an event handler in response to that interaction. Unit: ms.
      shared_ptr<float> FID_ {};
      // Measures the responsiveness of the page, or how long it takes for the page to respond to user input visibly. Unit: ms.
      shared_ptr<float> INP_ {};
      // Reports the rendering time of the largest image or text block visible in the viewport. Unit: ms.
      shared_ptr<float> LCP_ {};
      // This metric measures the time between when a resource initiates a request and when the first byte of the response starts to arrive. Unit: ms.
      shared_ptr<float> TTFB_ {};
      // The URL of the web page to monitor.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->urlDetailData_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeUrlObservationDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUrlObservationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeUrlObservationDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // urlDetailData Field Functions 
    bool hasUrlDetailData() const { return this->urlDetailData_ != nullptr;};
    void deleteUrlDetailData() { this->urlDetailData_ = nullptr;};
    inline const vector<DescribeUrlObservationDataResponseBody::UrlDetailData> & getUrlDetailData() const { DARABONBA_PTR_GET_CONST(urlDetailData_, vector<DescribeUrlObservationDataResponseBody::UrlDetailData>) };
    inline vector<DescribeUrlObservationDataResponseBody::UrlDetailData> getUrlDetailData() { DARABONBA_PTR_GET(urlDetailData_, vector<DescribeUrlObservationDataResponseBody::UrlDetailData>) };
    inline DescribeUrlObservationDataResponseBody& setUrlDetailData(const vector<DescribeUrlObservationDataResponseBody::UrlDetailData> & urlDetailData) { DARABONBA_PTR_SET_VALUE(urlDetailData_, urlDetailData) };
    inline DescribeUrlObservationDataResponseBody& setUrlDetailData(vector<DescribeUrlObservationDataResponseBody::UrlDetailData> && urlDetailData) { DARABONBA_PTR_SET_RVALUE(urlDetailData_, urlDetailData) };


  protected:
    // The end of the time range during which data was queried.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The create time. The time is in the yyyy-MM-ddTHH:mm:ssZ format.
    shared_ptr<string> startTime_ {};
    // The objects that are returned.
    shared_ptr<vector<DescribeUrlObservationDataResponseBody::UrlDetailData>> urlDetailData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
