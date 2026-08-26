// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSPUBLISHLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSPUBLISHLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsPublishListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsPublishListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsPublishListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
    };
    DescribeLiveStreamsPublishListRequest() = default ;
    DescribeLiveStreamsPublishListRequest(const DescribeLiveStreamsPublishListRequest &) = default ;
    DescribeLiveStreamsPublishListRequest(DescribeLiveStreamsPublishListRequest &&) = default ;
    DescribeLiveStreamsPublishListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsPublishListRequest() = default ;
    DescribeLiveStreamsPublishListRequest& operator=(const DescribeLiveStreamsPublishListRequest &) = default ;
    DescribeLiveStreamsPublishListRequest& operator=(DescribeLiveStreamsPublishListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->orderBy_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->queryType_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr
        && this->streamType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamsPublishListRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamsPublishListRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamsPublishListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeLiveStreamsPublishListRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveStreamsPublishListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLiveStreamsPublishListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamsPublishListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeLiveStreamsPublishListRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveStreamsPublishListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamsPublishListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamsPublishListRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline DescribeLiveStreamsPublishListRequest& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


  protected:
    // The name of the application to which the stream belongs. You can view AppName on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    shared_ptr<string> appName_ {};
    // The ingest domain or streamer streaming domain.
    // > - When you specify DomainName, make sure that the domain name is a live streaming domain name and that the user calling this operation has the permissions to operate on the specified domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The end time. The interval between EndTime and StartTime cannot exceed 30 days.
    // 
    // Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The sorting method. Valid values:
    // 
    // - **stream_name_desc**: sorts by live stream name in descending order.
    // - **stream_name_asc**: sorts by live stream name in ascending order.
    // - **publish_time_desc**: sorts by stream ingest time in descending order.
    // - **publish_time_asc** (default): sorts by stream ingest time in ascending order.
    shared_ptr<string> orderBy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size. Valid values: **1 to 3000**. Default value: **2000**.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether to use fuzzy match for the stream name. Valid values:
    // - **fuzzy** (default): fuzzy match.
    // - **strict**: exact match.
    shared_ptr<string> queryType_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The start time of stream ingest.
    // 
    // Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The stream name. You can view StreamName on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    shared_ptr<string> streamName_ {};
    // The stream type. Valid values:
    // 
    // - **Not specified**: queries raw streams.
    // - **all**: queries all streams.
    // - **trans**: queries transcoded streams.
    shared_ptr<string> streamType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
