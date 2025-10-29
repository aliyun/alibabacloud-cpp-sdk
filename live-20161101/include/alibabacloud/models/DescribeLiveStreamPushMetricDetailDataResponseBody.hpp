// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPUSHMETRICDETAILDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPUSHMETRICDETAILDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamPushMetricDetailDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamPushMetricDetailDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamDetailData, streamDetailData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamPushMetricDetailDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamDetailData, streamDetailData_);
    };
    DescribeLiveStreamPushMetricDetailDataResponseBody() = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody(const DescribeLiveStreamPushMetricDetailDataResponseBody &) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody(DescribeLiveStreamPushMetricDetailDataResponseBody &&) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamPushMetricDetailDataResponseBody() = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody& operator=(const DescribeLiveStreamPushMetricDetailDataResponseBody &) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBody& operator=(DescribeLiveStreamPushMetricDetailDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->endTime_ == nullptr && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr
        && return this->streamDetailData_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamDetailData Field Functions 
    bool hasStreamDetailData() const { return this->streamDetailData_ != nullptr;};
    void deleteStreamDetailData() { this->streamDetailData_ = nullptr;};
    inline const DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData & streamDetailData() const { DARABONBA_PTR_GET_CONST(streamDetailData_, DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData streamDetailData() { DARABONBA_PTR_GET(streamDetailData_, DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setStreamDetailData(const DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData & streamDetailData) { DARABONBA_PTR_SET_VALUE(streamDetailData_, streamDetailData) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBody& setStreamDetailData(DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData && streamDetailData) { DARABONBA_PTR_SET_RVALUE(streamDetailData_, streamDetailData) };


  protected:
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range that was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // A pagination token. When you call this operation, up to 5,000 rows of data can be returned per query. If the number of rows exceeds 5,000, the response includes a pagination token that is used in the next request to retrieve a new page of results.
    // 
    // When you specify the token in the next query, data continues to be obtained from the end of the previous query.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The number of rows returned.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range that was queried. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The data array returned.
    std::shared_ptr<DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailData> streamDetailData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
