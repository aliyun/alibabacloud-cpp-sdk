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
        && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->orderBy_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->queryType_ == nullptr && return this->regionId_ == nullptr && return this->startTime_ == nullptr && return this->streamName_ == nullptr
        && return this->streamType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamsPublishListRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamsPublishListRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamsPublishListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeLiveStreamsPublishListRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveStreamsPublishListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLiveStreamsPublishListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamsPublishListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeLiveStreamsPublishListRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveStreamsPublishListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamsPublishListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamsPublishListRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline DescribeLiveStreamsPublishListRequest& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The ingest domain or main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query. The time range specified by the StartTime and EndTime parameters cannot exceed 30 days.
    // 
    // Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The sorting method. Valid values:
    // 
    // *   **stream_name_desc**: sorts the entries in descending order by stream name.
    // *   **stream_name_asc**: sorts the entries in ascending order by stream name.
    // *   **publish_time_desc**: sorts the entries in descending order by stream ingest time.
    // *   **publish_time_asc** (default): sorts the entries in ascending order by stream ingest time.
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1 to 3000**. Default value: **2000**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The mode in which stream names are matched. Valid values:
    // 
    // *   **fuzzy** (default): fuzzy match
    // *   **strict**: exact match
    std::shared_ptr<string> queryType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The type of the streams to query. Valid values:
    // 
    // *   An empty value****: source streams
    // *   **all**: all streams
    // *   **trans**: transcoded streams
    std::shared_ptr<string> streamType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
