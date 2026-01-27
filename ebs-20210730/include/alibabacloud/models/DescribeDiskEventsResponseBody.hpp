// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DiskEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiskEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiskId, diskId_);
        DARABONBA_PTR_TO_JSON(RecommendAction, recommendAction_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DiskEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
        DARABONBA_PTR_FROM_JSON(RecommendAction, recommendAction_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      DiskEvents() = default ;
      DiskEvents(const DiskEvents &) = default ;
      DiskEvents(DiskEvents &&) = default ;
      DiskEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiskEvents() = default ;
      DiskEvents& operator=(const DiskEvents &) = default ;
      DiskEvents& operator=(DiskEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->diskId_ == nullptr && this->recommendAction_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->timestamp_ == nullptr
        && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DiskEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // diskId Field Functions 
      bool hasDiskId() const { return this->diskId_ != nullptr;};
      void deleteDiskId() { this->diskId_ = nullptr;};
      inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
      inline DiskEvents& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


      // recommendAction Field Functions 
      bool hasRecommendAction() const { return this->recommendAction_ != nullptr;};
      void deleteRecommendAction() { this->recommendAction_ = nullptr;};
      inline string getRecommendAction() const { DARABONBA_PTR_GET_DEFAULT(recommendAction_, "") };
      inline DiskEvents& setRecommendAction(string recommendAction) { DARABONBA_PTR_SET_VALUE(recommendAction_, recommendAction) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DiskEvents& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DiskEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline DiskEvents& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DiskEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The description of the event.
      shared_ptr<string> description_ {};
      // The ID of the disk.
      shared_ptr<string> diskId_ {};
      // The recommended action after the event occurred. Valid values:
      // 
      // *   Resize: resizes the disk.
      // *   ModifyDiskSpec: changes the category of the disk.
      // *   NoAction: performs no operation.
      shared_ptr<string> recommendAction_ {};
      // The region ID of the disk.
      shared_ptr<string> regionId_ {};
      // The state of the event. Valid values:
      // 
      // *   Solved
      // *   UnSolved
      shared_ptr<string> status_ {};
      // The time when the event occurred. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> timestamp_ {};
      // The type of the event. Only DataNeedProtect can be returned.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->diskEvents_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // diskEvents Field Functions 
    bool hasDiskEvents() const { return this->diskEvents_ != nullptr;};
    void deleteDiskEvents() { this->diskEvents_ = nullptr;};
    inline const vector<DescribeDiskEventsResponseBody::DiskEvents> & getDiskEvents() const { DARABONBA_PTR_GET_CONST(diskEvents_, vector<DescribeDiskEventsResponseBody::DiskEvents>) };
    inline vector<DescribeDiskEventsResponseBody::DiskEvents> getDiskEvents() { DARABONBA_PTR_GET(diskEvents_, vector<DescribeDiskEventsResponseBody::DiskEvents>) };
    inline DescribeDiskEventsResponseBody& setDiskEvents(const vector<DescribeDiskEventsResponseBody::DiskEvents> & diskEvents) { DARABONBA_PTR_SET_VALUE(diskEvents_, diskEvents) };
    inline DescribeDiskEventsResponseBody& setDiskEvents(vector<DescribeDiskEventsResponseBody::DiskEvents> && diskEvents) { DARABONBA_PTR_SET_RVALUE(diskEvents_, diskEvents) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskEventsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The risk events of the disk.
    shared_ptr<vector<DescribeDiskEventsResponseBody::DiskEvents>> diskEvents_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
