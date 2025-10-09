// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLOBSERVATIONDATARESPONSEBODYURLDETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLOBSERVATIONDATARESPONSEBODYURLDETAILDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeUrlObservationDataResponseBodyUrlDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlObservationDataResponseBodyUrlDetailData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeUrlObservationDataResponseBodyUrlDetailData& obj) { 
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
    DescribeUrlObservationDataResponseBodyUrlDetailData() = default ;
    DescribeUrlObservationDataResponseBodyUrlDetailData(const DescribeUrlObservationDataResponseBodyUrlDetailData &) = default ;
    DescribeUrlObservationDataResponseBodyUrlDetailData(DescribeUrlObservationDataResponseBodyUrlDetailData &&) = default ;
    DescribeUrlObservationDataResponseBodyUrlDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlObservationDataResponseBodyUrlDetailData() = default ;
    DescribeUrlObservationDataResponseBodyUrlDetailData& operator=(const DescribeUrlObservationDataResponseBodyUrlDetailData &) = default ;
    DescribeUrlObservationDataResponseBodyUrlDetailData& operator=(DescribeUrlObservationDataResponseBodyUrlDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CLS_ != nullptr
        && this->clientPlatform_ != nullptr && this->country_ != nullptr && this->FCP_ != nullptr && this->FID_ != nullptr && this->INP_ != nullptr
        && this->LCP_ != nullptr && this->TTFB_ != nullptr && this->url_ != nullptr; };
    // CLS Field Functions 
    bool hasCLS() const { return this->CLS_ != nullptr;};
    void deleteCLS() { this->CLS_ = nullptr;};
    inline float CLS() const { DARABONBA_PTR_GET_DEFAULT(CLS_, 0.0) };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setCLS(float CLS) { DARABONBA_PTR_SET_VALUE(CLS_, CLS) };


    // clientPlatform Field Functions 
    bool hasClientPlatform() const { return this->clientPlatform_ != nullptr;};
    void deleteClientPlatform() { this->clientPlatform_ = nullptr;};
    inline string clientPlatform() const { DARABONBA_PTR_GET_DEFAULT(clientPlatform_, "") };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setClientPlatform(string clientPlatform) { DARABONBA_PTR_SET_VALUE(clientPlatform_, clientPlatform) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // FCP Field Functions 
    bool hasFCP() const { return this->FCP_ != nullptr;};
    void deleteFCP() { this->FCP_ = nullptr;};
    inline float FCP() const { DARABONBA_PTR_GET_DEFAULT(FCP_, 0.0) };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setFCP(float FCP) { DARABONBA_PTR_SET_VALUE(FCP_, FCP) };


    // FID Field Functions 
    bool hasFID() const { return this->FID_ != nullptr;};
    void deleteFID() { this->FID_ = nullptr;};
    inline float FID() const { DARABONBA_PTR_GET_DEFAULT(FID_, 0.0) };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setFID(float FID) { DARABONBA_PTR_SET_VALUE(FID_, FID) };


    // INP Field Functions 
    bool hasINP() const { return this->INP_ != nullptr;};
    void deleteINP() { this->INP_ = nullptr;};
    inline float INP() const { DARABONBA_PTR_GET_DEFAULT(INP_, 0.0) };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setINP(float INP) { DARABONBA_PTR_SET_VALUE(INP_, INP) };


    // LCP Field Functions 
    bool hasLCP() const { return this->LCP_ != nullptr;};
    void deleteLCP() { this->LCP_ = nullptr;};
    inline float LCP() const { DARABONBA_PTR_GET_DEFAULT(LCP_, 0.0) };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setLCP(float LCP) { DARABONBA_PTR_SET_VALUE(LCP_, LCP) };


    // TTFB Field Functions 
    bool hasTTFB() const { return this->TTFB_ != nullptr;};
    void deleteTTFB() { this->TTFB_ = nullptr;};
    inline float TTFB() const { DARABONBA_PTR_GET_DEFAULT(TTFB_, 0.0) };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setTTFB(float TTFB) { DARABONBA_PTR_SET_VALUE(TTFB_, TTFB) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeUrlObservationDataResponseBodyUrlDetailData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Measures the maximum layout mutation score for every unexpected layout change that occurs throughout the life of the page.
    std::shared_ptr<float> CLS_ = nullptr;
    // The platform of the device.
    std::shared_ptr<string> clientPlatform_ = nullptr;
    // The country or region to which the IP address belongs.
    std::shared_ptr<string> country_ = nullptr;
    // Measures the time between when the page is loaded and when any part of the page\\"s content is rendered on the screen. Unit: ms.
    std::shared_ptr<float> FCP_ = nullptr;
    // Measures the time between when the user first interacts with the page and when the browser is actually able to start processing an event handler in response to that interaction. Unit: ms.
    std::shared_ptr<float> FID_ = nullptr;
    // Measures the responsiveness of the page, or how long it takes for the page to respond to user input visibly. Unit: ms.
    std::shared_ptr<float> INP_ = nullptr;
    // Reports the rendering time of the largest image or text block visible in the viewport. Unit: ms.
    std::shared_ptr<float> LCP_ = nullptr;
    // This metric measures the time between when a resource initiates a request and when the first byte of the response starts to arrive. Unit: ms.
    std::shared_ptr<float> TTFB_ = nullptr;
    // The URL of the web page to monitor.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
