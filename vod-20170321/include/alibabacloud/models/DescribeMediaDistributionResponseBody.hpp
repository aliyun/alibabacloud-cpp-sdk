// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEDIADISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEDIADISTRIBUTIONRESPONSEBODY_HPP_
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
  class DescribeMediaDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMediaDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaDistributionList, mediaDistributionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMediaDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaDistributionList, mediaDistributionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMediaDistributionResponseBody() = default ;
    DescribeMediaDistributionResponseBody(const DescribeMediaDistributionResponseBody &) = default ;
    DescribeMediaDistributionResponseBody(DescribeMediaDistributionResponseBody &&) = default ;
    DescribeMediaDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMediaDistributionResponseBody() = default ;
    DescribeMediaDistributionResponseBody& operator=(const DescribeMediaDistributionResponseBody &) = default ;
    DescribeMediaDistributionResponseBody& operator=(DescribeMediaDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaDistributionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaDistributionList& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, MediaDistributionList& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      MediaDistributionList() = default ;
      MediaDistributionList(const MediaDistributionList &) = default ;
      MediaDistributionList(MediaDistributionList &&) = default ;
      MediaDistributionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaDistributionList() = default ;
      MediaDistributionList& operator=(const MediaDistributionList &) = default ;
      MediaDistributionList& operator=(MediaDistributionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline MediaDistributionList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline MediaDistributionList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline MediaDistributionList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The number of media assets that are queried during the specified time range.
      shared_ptr<int64_t> count_ {};
      // The end of the time range during which data is queried (exclusive). The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The start of the time range during which data is queried (inclusive). The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->mediaDistributionList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // mediaDistributionList Field Functions 
    bool hasMediaDistributionList() const { return this->mediaDistributionList_ != nullptr;};
    void deleteMediaDistributionList() { this->mediaDistributionList_ = nullptr;};
    inline const vector<DescribeMediaDistributionResponseBody::MediaDistributionList> & getMediaDistributionList() const { DARABONBA_PTR_GET_CONST(mediaDistributionList_, vector<DescribeMediaDistributionResponseBody::MediaDistributionList>) };
    inline vector<DescribeMediaDistributionResponseBody::MediaDistributionList> getMediaDistributionList() { DARABONBA_PTR_GET(mediaDistributionList_, vector<DescribeMediaDistributionResponseBody::MediaDistributionList>) };
    inline DescribeMediaDistributionResponseBody& setMediaDistributionList(const vector<DescribeMediaDistributionResponseBody::MediaDistributionList> & mediaDistributionList) { DARABONBA_PTR_SET_VALUE(mediaDistributionList_, mediaDistributionList) };
    inline DescribeMediaDistributionResponseBody& setMediaDistributionList(vector<DescribeMediaDistributionResponseBody::MediaDistributionList> && mediaDistributionList) { DARABONBA_PTR_SET_RVALUE(mediaDistributionList_, mediaDistributionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMediaDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeMediaDistributionResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The distribution list of media assets. The data is displayed based on the statistical cycle of the natural hour, day, week, or month of the start and end time.
    shared_ptr<vector<DescribeMediaDistributionResponseBody::MediaDistributionList>> mediaDistributionList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of media assets returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
