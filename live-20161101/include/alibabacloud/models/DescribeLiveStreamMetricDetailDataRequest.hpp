// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMETRICDETAILDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMETRICDETAILDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMetricDetailDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMetricDetailDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMetricDetailDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeLiveStreamMetricDetailDataRequest() = default ;
    DescribeLiveStreamMetricDetailDataRequest(const DescribeLiveStreamMetricDetailDataRequest &) = default ;
    DescribeLiveStreamMetricDetailDataRequest(DescribeLiveStreamMetricDetailDataRequest &&) = default ;
    DescribeLiveStreamMetricDetailDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMetricDetailDataRequest() = default ;
    DescribeLiveStreamMetricDetailDataRequest& operator=(const DescribeLiveStreamMetricDetailDataRequest &) = default ;
    DescribeLiveStreamMetricDetailDataRequest& operator=(DescribeLiveStreamMetricDetailDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->nextPageToken_ == nullptr && this->ownerId_ == nullptr && this->protocol_ == nullptr
        && this->regionId_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamMetricDetailDataRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamMetricDetailDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamMetricDetailDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline DescribeLiveStreamMetricDetailDataRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveStreamMetricDetailDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeLiveStreamMetricDetailDataRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveStreamMetricDetailDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamMetricDetailDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamMetricDetailDataRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The application name. Specify this parameter to query stream-level data for a specific application.
    // 
    // > If you specify StreamName, you must also specify AppName.
    shared_ptr<string> appName_ {};
    // - The accelerated domain name to query. Only a single domain name can be queried at a time. An error is returned if multiple domain names are specified.
    // - If AppName and StreamName are not specified, stream-level data for all streams under the domain name is returned.
    // - If the domain name is left empty, aggregate data for all accelerated domain names under the account is returned.
    // - If DomainName is specified and both AppName and StreamName are set to all, aggregate data for the specified accelerated domain name is returned.
    // - When you specify DomainName, make sure the domain name is a live streaming domain and the user calling this operation has the required permissions on the domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. The end time must be later than the start time, and the difference cannot exceed 1 day. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The paged query token. A maximum of 5,000 rows of data can be returned per query. If the data to query exceeds 5,000 rows, the response includes the starting index for the next paging request. Pass this token in the request to continue querying data from where the previous query ended.
    shared_ptr<string> nextPageToken_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The stream protocol. Valid values: **flv**, **hls**, **rtmp**, **rts**, and **p2p**.
    // 
    // You can query data for multiple protocols by separating them with commas (,). Data for multiple protocols is not aggregated and is output at the stream level.
    // 
    // > The **rts** option queries Real-Time Streaming (RTS) streams that use the ARTC protocol.
    // > - When using rts, you may need to additionally collect statistics for the xxx_AliRTS-opus transcoding stream. This is because when playing an RTS stream on the web, a transcoding stream with the _AliRTS-opus suffix appended to the stream name is automatically generated. For more information, see [RTS sub-second latency automatic transcoding](https://help.aliyun.com/document_detail/2948703.html).
    shared_ptr<string> protocol_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The start of the time range to query. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The stream name. Specify this parameter together with AppName to return stream-level data.
    // 
    // > If you specify StreamName, you must also specify AppName.
    shared_ptr<string> streamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
