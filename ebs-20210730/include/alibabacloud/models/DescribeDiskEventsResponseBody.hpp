// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiskEventsResponseBodyDiskEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskEvents, diskEvents_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskEvents, diskEvents_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiskEventsResponseBody() = default ;
    DescribeDiskEventsResponseBody(const DescribeDiskEventsResponseBody &) = default ;
    DescribeDiskEventsResponseBody(DescribeDiskEventsResponseBody &&) = default ;
    DescribeDiskEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskEventsResponseBody() = default ;
    DescribeDiskEventsResponseBody& operator=(const DescribeDiskEventsResponseBody &) = default ;
    DescribeDiskEventsResponseBody& operator=(DescribeDiskEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskEvents_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // diskEvents Field Functions 
    bool hasDiskEvents() const { return this->diskEvents_ != nullptr;};
    void deleteDiskEvents() { this->diskEvents_ = nullptr;};
    inline const vector<DescribeDiskEventsResponseBodyDiskEvents> & diskEvents() const { DARABONBA_PTR_GET_CONST(diskEvents_, vector<DescribeDiskEventsResponseBodyDiskEvents>) };
    inline vector<DescribeDiskEventsResponseBodyDiskEvents> diskEvents() { DARABONBA_PTR_GET(diskEvents_, vector<DescribeDiskEventsResponseBodyDiskEvents>) };
    inline DescribeDiskEventsResponseBody& setDiskEvents(const vector<DescribeDiskEventsResponseBodyDiskEvents> & diskEvents) { DARABONBA_PTR_SET_VALUE(diskEvents_, diskEvents) };
    inline DescribeDiskEventsResponseBody& setDiskEvents(vector<DescribeDiskEventsResponseBodyDiskEvents> && diskEvents) { DARABONBA_PTR_SET_RVALUE(diskEvents_, diskEvents) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskEventsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The risk events of the disk.
    std::shared_ptr<vector<DescribeDiskEventsResponseBodyDiskEvents>> diskEvents_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
