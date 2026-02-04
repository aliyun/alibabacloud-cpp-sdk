// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeFlowlogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowlogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowLogs, flowLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowlogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowLogs, flowLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFlowlogsResponseBody() = default ;
    DescribeFlowlogsResponseBody(const DescribeFlowlogsResponseBody &) = default ;
    DescribeFlowlogsResponseBody(DescribeFlowlogsResponseBody &&) = default ;
    DescribeFlowlogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowlogsResponseBody() = default ;
    DescribeFlowlogsResponseBody& operator=(const DescribeFlowlogsResponseBody &) = default ;
    DescribeFlowlogsResponseBody& operator=(DescribeFlowlogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlowLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowLogs& obj) { 
        DARABONBA_PTR_TO_JSON(FlowLog, flowLog_);
      };
      friend void from_json(const Darabonba::Json& j, FlowLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowLog, flowLog_);
      };
      FlowLogs() = default ;
      FlowLogs(const FlowLogs &) = default ;
      FlowLogs(FlowLogs &&) = default ;
      FlowLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowLogs() = default ;
      FlowLogs& operator=(const FlowLogs &) = default ;
      FlowLogs& operator=(FlowLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FlowLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowLog& obj) { 
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
          DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
          DARABONBA_PTR_TO_JSON(FlowLogVersion, flowLogVersion_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(LogFormatString, logFormatString_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
          DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        };
        friend void from_json(const Darabonba::Json& j, FlowLog& obj) { 
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
          DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
          DARABONBA_PTR_FROM_JSON(FlowLogVersion, flowLogVersion_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(LogFormatString, logFormatString_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
          DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        };
        FlowLog() = default ;
        FlowLog(const FlowLog &) = default ;
        FlowLog(FlowLog &&) = default ;
        FlowLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowLog() = default ;
        FlowLog& operator=(const FlowLog &) = default ;
        FlowLog& operator=(FlowLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->cenId_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->flowLogId_ == nullptr && this->flowLogName_ == nullptr && this->flowLogVersion_ == nullptr
        && this->interval_ == nullptr && this->logFormatString_ == nullptr && this->logStoreName_ == nullptr && this->projectName_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->transitRouterAttachmentId_ == nullptr && this->transitRouterId_ == nullptr; };
        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline FlowLog& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline FlowLog& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FlowLog& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // flowLogId Field Functions 
        bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
        void deleteFlowLogId() { this->flowLogId_ = nullptr;};
        inline string getFlowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
        inline FlowLog& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


        // flowLogName Field Functions 
        bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
        void deleteFlowLogName() { this->flowLogName_ = nullptr;};
        inline string getFlowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
        inline FlowLog& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


        // flowLogVersion Field Functions 
        bool hasFlowLogVersion() const { return this->flowLogVersion_ != nullptr;};
        void deleteFlowLogVersion() { this->flowLogVersion_ = nullptr;};
        inline string getFlowLogVersion() const { DARABONBA_PTR_GET_DEFAULT(flowLogVersion_, "") };
        inline FlowLog& setFlowLogVersion(string flowLogVersion) { DARABONBA_PTR_SET_VALUE(flowLogVersion_, flowLogVersion) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
        inline FlowLog& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // logFormatString Field Functions 
        bool hasLogFormatString() const { return this->logFormatString_ != nullptr;};
        void deleteLogFormatString() { this->logFormatString_ = nullptr;};
        inline string getLogFormatString() const { DARABONBA_PTR_GET_DEFAULT(logFormatString_, "") };
        inline FlowLog& setLogFormatString(string logFormatString) { DARABONBA_PTR_SET_VALUE(logFormatString_, logFormatString) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline FlowLog& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline FlowLog& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline FlowLog& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FlowLog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const FlowLog::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, FlowLog::Tags) };
        inline FlowLog::Tags getTags() { DARABONBA_PTR_GET(tags_, FlowLog::Tags) };
        inline FlowLog& setTags(const FlowLog::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline FlowLog& setTags(FlowLog::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // transitRouterAttachmentId Field Functions 
        bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
        void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
        inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
        inline FlowLog& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


        // transitRouterId Field Functions 
        bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
        void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
        inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
        inline FlowLog& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      protected:
        // The ID of the Cloud Enterprise Network (CEN) instance.
        shared_ptr<string> cenId_ {};
        // The time when the flow log was created.
        // 
        // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the flow log.
        shared_ptr<string> description_ {};
        // The ID of the flow log.
        shared_ptr<string> flowLogId_ {};
        // The name of the flow log.
        shared_ptr<string> flowLogName_ {};
        // The flow log version.
        // 
        // Flow logs are automatically created in the latest version, which is **3**.
        shared_ptr<string> flowLogVersion_ {};
        // The time window for collecting log data. Unit: seconds. Valid values: **60** or **600** Default value: **600**.
        shared_ptr<int64_t> interval_ {};
        // The string that defines the format of the flow log. Format:
        // 
        // `${Field 1}${Field 2}${Field 3}`
        shared_ptr<string> logFormatString_ {};
        // The Logstore that stores the captured traffic data.
        shared_ptr<string> logStoreName_ {};
        // The name of the project that stores the captured traffic data.
        shared_ptr<string> projectName_ {};
        // The region ID of the flow log.
        shared_ptr<string> regionId_ {};
        // The status of the flow log. Valid values:
        // 
        // *   **Active**: The flow log is enabled.
        // *   **Inactive**: The flow log is disabled.
        shared_ptr<string> status_ {};
        // The tags.
        shared_ptr<FlowLog::Tags> tags_ {};
        // The ID of the network instance connection
        shared_ptr<string> transitRouterAttachmentId_ {};
        // The ID of the transit router.
        shared_ptr<string> transitRouterId_ {};
      };

      virtual bool empty() const override { return this->flowLog_ == nullptr; };
      // flowLog Field Functions 
      bool hasFlowLog() const { return this->flowLog_ != nullptr;};
      void deleteFlowLog() { this->flowLog_ = nullptr;};
      inline const vector<FlowLogs::FlowLog> & getFlowLog() const { DARABONBA_PTR_GET_CONST(flowLog_, vector<FlowLogs::FlowLog>) };
      inline vector<FlowLogs::FlowLog> getFlowLog() { DARABONBA_PTR_GET(flowLog_, vector<FlowLogs::FlowLog>) };
      inline FlowLogs& setFlowLog(const vector<FlowLogs::FlowLog> & flowLog) { DARABONBA_PTR_SET_VALUE(flowLog_, flowLog) };
      inline FlowLogs& setFlowLog(vector<FlowLogs::FlowLog> && flowLog) { DARABONBA_PTR_SET_RVALUE(flowLog_, flowLog) };


    protected:
      shared_ptr<vector<FlowLogs::FlowLog>> flowLog_ {};
    };

    virtual bool empty() const override { return this->flowLogs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // flowLogs Field Functions 
    bool hasFlowLogs() const { return this->flowLogs_ != nullptr;};
    void deleteFlowLogs() { this->flowLogs_ = nullptr;};
    inline const DescribeFlowlogsResponseBody::FlowLogs & getFlowLogs() const { DARABONBA_PTR_GET_CONST(flowLogs_, DescribeFlowlogsResponseBody::FlowLogs) };
    inline DescribeFlowlogsResponseBody::FlowLogs getFlowLogs() { DARABONBA_PTR_GET(flowLogs_, DescribeFlowlogsResponseBody::FlowLogs) };
    inline DescribeFlowlogsResponseBody& setFlowLogs(const DescribeFlowlogsResponseBody::FlowLogs & flowLogs) { DARABONBA_PTR_SET_VALUE(flowLogs_, flowLogs) };
    inline DescribeFlowlogsResponseBody& setFlowLogs(DescribeFlowlogsResponseBody::FlowLogs && flowLogs) { DARABONBA_PTR_SET_RVALUE(flowLogs_, flowLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeFlowlogsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeFlowlogsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowlogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeFlowlogsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeFlowlogsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the flow log.
    shared_ptr<DescribeFlowlogsResponseBody::FlowLogs> flowLogs_ {};
    // The page number of the returned page.
    shared_ptr<string> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<string> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<string> success_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
