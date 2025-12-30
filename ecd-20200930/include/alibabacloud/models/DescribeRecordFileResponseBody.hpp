// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRecordFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordFiles, recordFiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordFiles, recordFiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRecordFileResponseBody() = default ;
    DescribeRecordFileResponseBody(const DescribeRecordFileResponseBody &) = default ;
    DescribeRecordFileResponseBody(DescribeRecordFileResponseBody &&) = default ;
    DescribeRecordFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordFileResponseBody() = default ;
    DescribeRecordFileResponseBody& operator=(const DescribeRecordFileResponseBody &) = default ;
    DescribeRecordFileResponseBody& operator=(DescribeRecordFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordFiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordFiles& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(EventDetails, eventDetails_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(RecordEndTime, recordEndTime_);
        DARABONBA_PTR_TO_JSON(RecordExpire, recordExpire_);
        DARABONBA_PTR_TO_JSON(RecordStartTime, recordStartTime_);
        DARABONBA_PTR_TO_JSON(RecordType, recordType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RecordFiles& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(EventDetails, eventDetails_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(RecordEndTime, recordEndTime_);
        DARABONBA_PTR_FROM_JSON(RecordExpire, recordExpire_);
        DARABONBA_PTR_FROM_JSON(RecordStartTime, recordStartTime_);
        DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RecordFiles() = default ;
      RecordFiles(const RecordFiles &) = default ;
      RecordFiles(RecordFiles &&) = default ;
      RecordFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordFiles() = default ;
      RecordFiles& operator=(const RecordFiles &) = default ;
      RecordFiles& operator=(RecordFiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EventDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventDetails& obj) { 
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
          DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
        };
        friend void from_json(const Darabonba::Json& j, EventDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        };
        EventDetails() = default ;
        EventDetails(const EventDetails &) = default ;
        EventDetails(EventDetails &&) = default ;
        EventDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventDetails() = default ;
        EventDetails& operator=(const EventDetails &) = default ;
        EventDetails& operator=(EventDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventName_ == nullptr
        && this->eventTime_ == nullptr && this->eventType_ == nullptr; };
        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline EventDetails& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // eventTime Field Functions 
        bool hasEventTime() const { return this->eventTime_ != nullptr;};
        void deleteEventTime() { this->eventTime_ = nullptr;};
        inline int32_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0) };
        inline EventDetails& setEventTime(int32_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline EventDetails& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      protected:
        shared_ptr<string> eventName_ {};
        shared_ptr<int32_t> eventTime_ {};
        shared_ptr<string> eventType_ {};
      };

      virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->endUserId_ == nullptr && this->eventDetails_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr
        && this->policyId_ == nullptr && this->recordEndTime_ == nullptr && this->recordExpire_ == nullptr && this->recordStartTime_ == nullptr && this->recordType_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceGroupName_ == nullptr && this->status_ == nullptr; };
      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline RecordFiles& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline RecordFiles& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline RecordFiles& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // eventDetails Field Functions 
      bool hasEventDetails() const { return this->eventDetails_ != nullptr;};
      void deleteEventDetails() { this->eventDetails_ = nullptr;};
      inline const vector<RecordFiles::EventDetails> & getEventDetails() const { DARABONBA_PTR_GET_CONST(eventDetails_, vector<RecordFiles::EventDetails>) };
      inline vector<RecordFiles::EventDetails> getEventDetails() { DARABONBA_PTR_GET(eventDetails_, vector<RecordFiles::EventDetails>) };
      inline RecordFiles& setEventDetails(const vector<RecordFiles::EventDetails> & eventDetails) { DARABONBA_PTR_SET_VALUE(eventDetails_, eventDetails) };
      inline RecordFiles& setEventDetails(vector<RecordFiles::EventDetails> && eventDetails) { DARABONBA_PTR_SET_RVALUE(eventDetails_, eventDetails) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline RecordFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline RecordFiles& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline RecordFiles& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // recordEndTime Field Functions 
      bool hasRecordEndTime() const { return this->recordEndTime_ != nullptr;};
      void deleteRecordEndTime() { this->recordEndTime_ = nullptr;};
      inline string getRecordEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordEndTime_, "") };
      inline RecordFiles& setRecordEndTime(string recordEndTime) { DARABONBA_PTR_SET_VALUE(recordEndTime_, recordEndTime) };


      // recordExpire Field Functions 
      bool hasRecordExpire() const { return this->recordExpire_ != nullptr;};
      void deleteRecordExpire() { this->recordExpire_ = nullptr;};
      inline int64_t getRecordExpire() const { DARABONBA_PTR_GET_DEFAULT(recordExpire_, 0L) };
      inline RecordFiles& setRecordExpire(int64_t recordExpire) { DARABONBA_PTR_SET_VALUE(recordExpire_, recordExpire) };


      // recordStartTime Field Functions 
      bool hasRecordStartTime() const { return this->recordStartTime_ != nullptr;};
      void deleteRecordStartTime() { this->recordStartTime_ = nullptr;};
      inline string getRecordStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordStartTime_, "") };
      inline RecordFiles& setRecordStartTime(string recordStartTime) { DARABONBA_PTR_SET_VALUE(recordStartTime_, recordStartTime) };


      // recordType Field Functions 
      bool hasRecordType() const { return this->recordType_ != nullptr;};
      void deleteRecordType() { this->recordType_ = nullptr;};
      inline int32_t getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, 0) };
      inline RecordFiles& setRecordType(int32_t recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RecordFiles& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline RecordFiles& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline RecordFiles& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline RecordFiles& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> desktopId_ {};
      shared_ptr<string> desktopName_ {};
      shared_ptr<string> endUserId_ {};
      shared_ptr<vector<RecordFiles::EventDetails>> eventDetails_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<int64_t> fileSize_ {};
      shared_ptr<string> policyId_ {};
      shared_ptr<string> recordEndTime_ {};
      shared_ptr<int64_t> recordExpire_ {};
      shared_ptr<string> recordStartTime_ {};
      shared_ptr<int32_t> recordType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> resourceGroupName_ {};
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->recordFiles_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // recordFiles Field Functions 
    bool hasRecordFiles() const { return this->recordFiles_ != nullptr;};
    void deleteRecordFiles() { this->recordFiles_ = nullptr;};
    inline const vector<DescribeRecordFileResponseBody::RecordFiles> & getRecordFiles() const { DARABONBA_PTR_GET_CONST(recordFiles_, vector<DescribeRecordFileResponseBody::RecordFiles>) };
    inline vector<DescribeRecordFileResponseBody::RecordFiles> getRecordFiles() { DARABONBA_PTR_GET(recordFiles_, vector<DescribeRecordFileResponseBody::RecordFiles>) };
    inline DescribeRecordFileResponseBody& setRecordFiles(const vector<DescribeRecordFileResponseBody::RecordFiles> & recordFiles) { DARABONBA_PTR_SET_VALUE(recordFiles_, recordFiles) };
    inline DescribeRecordFileResponseBody& setRecordFiles(vector<DescribeRecordFileResponseBody::RecordFiles> && recordFiles) { DARABONBA_PTR_SET_RVALUE(recordFiles_, recordFiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRecordFileResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeRecordFileResponseBody::RecordFiles>> recordFiles_ {};
    // RequestId
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
