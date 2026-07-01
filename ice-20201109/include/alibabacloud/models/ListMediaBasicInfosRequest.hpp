// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIABASICINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIABASICINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaBasicInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaBasicInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IncludeFileBasicInfo, includeFileBasicInfo_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaBasicInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IncludeFileBasicInfo, includeFileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListMediaBasicInfosRequest() = default ;
    ListMediaBasicInfosRequest(const ListMediaBasicInfosRequest &) = default ;
    ListMediaBasicInfosRequest(ListMediaBasicInfosRequest &&) = default ;
    ListMediaBasicInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaBasicInfosRequest() = default ;
    ListMediaBasicInfosRequest& operator=(const ListMediaBasicInfosRequest &) = default ;
    ListMediaBasicInfosRequest& operator=(ListMediaBasicInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && this->businessType_ == nullptr && this->endTime_ == nullptr && this->includeFileBasicInfo_ == nullptr && this->maxResults_ == nullptr && this->mediaId_ == nullptr
        && this->mediaType_ == nullptr && this->nextToken_ == nullptr && this->sortBy_ == nullptr && this->source_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline ListMediaBasicInfosRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListMediaBasicInfosRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListMediaBasicInfosRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // includeFileBasicInfo Field Functions 
    bool hasIncludeFileBasicInfo() const { return this->includeFileBasicInfo_ != nullptr;};
    void deleteIncludeFileBasicInfo() { this->includeFileBasicInfo_ = nullptr;};
    inline bool getIncludeFileBasicInfo() const { DARABONBA_PTR_GET_DEFAULT(includeFileBasicInfo_, false) };
    inline ListMediaBasicInfosRequest& setIncludeFileBasicInfo(bool includeFileBasicInfo) { DARABONBA_PTR_SET_VALUE(includeFileBasicInfo_, includeFileBasicInfo) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMediaBasicInfosRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListMediaBasicInfosRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListMediaBasicInfosRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaBasicInfosRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListMediaBasicInfosRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListMediaBasicInfosRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListMediaBasicInfosRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMediaBasicInfosRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The authentication expiration time, in seconds.
    // 
    // - Minimum value: 1.
    // 
    // - Maximum value: 86400.
    // 
    // - Default value: 3600.
    shared_ptr<int64_t> authTimeout_ {};
    // The business type. Valid values:
    // 
    // - `subtitles`: subtitles
    // 
    // - `watermark`: watermark
    // 
    // - `opening`: opening
    // 
    // - `ending`: ending
    // 
    // - `general`: General
    shared_ptr<string> businessType_ {};
    // The end time of the query range, based on the creation time (`utcCreated`).
    // 
    // - The query returns results created at or before this time (inclusive).
    // 
    // - The time must be in UTC and comply with the ISO 8601 standard. The format is `YYYY-MM-DD\\"T\\"HH:mm:ss\\"Z\\"`. For example, `2017-01-11T12:00:00Z` corresponds to 20:00:00 on January 11, 2017 (UTC+8).
    shared_ptr<string> endTime_ {};
    // Set to `true` to include basic file information in the response.
    shared_ptr<bool> includeFileBasicInfo_ {};
    // The maximum number of results to return per page.
    // 
    // Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The media ID.
    shared_ptr<string> mediaId_ {};
    // The media type. Valid values:
    // 
    // - `image`: image
    // 
    // - `video`: video
    // 
    // - `audio`: audio
    // 
    // - `text`: text
    shared_ptr<string> mediaType_ {};
    // The pagination token used to retrieve the next page of results. An empty value indicates that all results have been returned.
    shared_ptr<string> nextToken_ {};
    // The sort order for results based on the creation time (`utcCreated`). The default is descending. Valid values:
    // 
    // - `desc`: Descending order
    // 
    // - `asc`: Ascending order
    shared_ptr<string> sortBy_ {};
    // The source. Valid values:
    // 
    // - `oss`: OSS
    // 
    // - `vod`: video on demand
    // 
    // - `live`: live streaming
    // 
    // - `general`: Other sources (default).
    shared_ptr<string> source_ {};
    // The start time of the query range, based on the creation time (`utcCreated`).
    // 
    // - The query returns results created after this time (exclusive).
    // 
    // - The time must be in UTC and comply with the ISO 8601 standard. The format is `YYYY-MM-DD\\"T\\"HH:mm:ss\\"Z\\"`. For example, `2017-01-11T12:00:00Z` corresponds to 20:00:00 on January 11, 2017 (UTC+8).
    shared_ptr<string> startTime_ {};
    // The media status. Valid values:
    // 
    // - `Init`: The source file is not ready.
    // 
    // - `Preparing`: The source file is being prepared. For example, it is being uploaded or composited.
    // 
    // - `PrepareFail`: The source file failed to prepare. This may occur, for example, if the system fails to retrieve information about the source file.
    // 
    // - `Normal`: The source file is ready.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
