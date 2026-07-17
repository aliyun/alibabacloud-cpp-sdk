// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLOBSERVATIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLOBSERVATIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeUrlObservationDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlObservationDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientPlatform, clientPlatform_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUrlObservationDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientPlatform, clientPlatform_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeUrlObservationDataRequest() = default ;
    DescribeUrlObservationDataRequest(const DescribeUrlObservationDataRequest &) = default ;
    DescribeUrlObservationDataRequest(DescribeUrlObservationDataRequest &&) = default ;
    DescribeUrlObservationDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlObservationDataRequest() = default ;
    DescribeUrlObservationDataRequest& operator=(const DescribeUrlObservationDataRequest &) = default ;
    DescribeUrlObservationDataRequest& operator=(DescribeUrlObservationDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientPlatform_ == nullptr
        && this->endTime_ == nullptr && this->metric_ == nullptr && this->siteId_ == nullptr && this->startTime_ == nullptr && this->url_ == nullptr; };
    // clientPlatform Field Functions 
    bool hasClientPlatform() const { return this->clientPlatform_ != nullptr;};
    void deleteClientPlatform() { this->clientPlatform_ = nullptr;};
    inline string getClientPlatform() const { DARABONBA_PTR_GET_DEFAULT(clientPlatform_, "") };
    inline DescribeUrlObservationDataRequest& setClientPlatform(string clientPlatform) { DARABONBA_PTR_SET_VALUE(clientPlatform_, clientPlatform) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeUrlObservationDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeUrlObservationDataRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline DescribeUrlObservationDataRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeUrlObservationDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeUrlObservationDataRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The device platform. If this parameter is left empty, data for all platforms is queried.
    // 
    // - PC
    // 
    // - Mobile
    shared_ptr<string> clientPlatform_ {};
    // The end time for the data query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The metric to query.
    // 
    // *  TTFB: Measures the time from when a resource request is initiated to when the first byte of the response begins to arrive.
    // *  FCP: Measures the time from when the page starts loading to when any part of the page content is rendered on the screen.
    // * LCP: Reports the render time of the largest image or text block visible within the viewport.
    // * CLS: A metric that measures the largest burst of layout shift scores for every unexpected layout shift that occurs throughout the entire lifecycle of a page.
    // * INP: Measures the responsiveness of a page, specifically how long it takes for the page to visibly respond to user input.
    // * FID: Measures the time from when a user first interacts with a page to when the browser is actually able to begin processing event handlers in response to that interaction.
    shared_ptr<string> metric_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<string> siteId_ {};
    // The start time for the data query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
    // The URL of the web page to monitor.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
