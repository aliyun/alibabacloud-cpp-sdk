// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGSFLOWLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGSFLOWLOG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFlowlogsResponseBodyFlowLogsFlowLogTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeFlowlogsResponseBodyFlowLogsFlowLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowlogsResponseBodyFlowLogsFlowLog& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeFlowlogsResponseBodyFlowLogsFlowLog& obj) { 
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
    DescribeFlowlogsResponseBodyFlowLogsFlowLog() = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLog(const DescribeFlowlogsResponseBodyFlowLogsFlowLog &) = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLog(DescribeFlowlogsResponseBodyFlowLogsFlowLog &&) = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowlogsResponseBodyFlowLogsFlowLog() = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLog& operator=(const DescribeFlowlogsResponseBodyFlowLogsFlowLog &) = default ;
    DescribeFlowlogsResponseBodyFlowLogsFlowLog& operator=(DescribeFlowlogsResponseBodyFlowLogsFlowLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->flowLogId_ != nullptr && this->flowLogName_ != nullptr && this->flowLogVersion_ != nullptr
        && this->interval_ != nullptr && this->logFormatString_ != nullptr && this->logStoreName_ != nullptr && this->projectName_ != nullptr && this->regionId_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowLogId Field Functions 
    bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
    void deleteFlowLogId() { this->flowLogId_ = nullptr;};
    inline string flowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string flowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // flowLogVersion Field Functions 
    bool hasFlowLogVersion() const { return this->flowLogVersion_ != nullptr;};
    void deleteFlowLogVersion() { this->flowLogVersion_ = nullptr;};
    inline string flowLogVersion() const { DARABONBA_PTR_GET_DEFAULT(flowLogVersion_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setFlowLogVersion(string flowLogVersion) { DARABONBA_PTR_SET_VALUE(flowLogVersion_, flowLogVersion) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // logFormatString Field Functions 
    bool hasLogFormatString() const { return this->logFormatString_ != nullptr;};
    void deleteLogFormatString() { this->logFormatString_ = nullptr;};
    inline string logFormatString() const { DARABONBA_PTR_GET_DEFAULT(logFormatString_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setLogFormatString(string logFormatString) { DARABONBA_PTR_SET_VALUE(logFormatString_, logFormatString) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTags) };
    inline Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTags) };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setTags(const Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setTags(Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeFlowlogsResponseBodyFlowLogsFlowLog& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the flow log was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the flow log.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the flow log.
    std::shared_ptr<string> flowLogId_ = nullptr;
    // The name of the flow log.
    std::shared_ptr<string> flowLogName_ = nullptr;
    // The flow log version.
    // 
    // Flow logs are automatically created in the latest version, which is **3**.
    std::shared_ptr<string> flowLogVersion_ = nullptr;
    // The time window for collecting log data. Unit: seconds. Valid values: **60** or **600** Default value: **600**.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The string that defines the format of the flow log. Format:
    // 
    // `${Field 1}${Field 2}${Field 3}`
    std::shared_ptr<string> logFormatString_ = nullptr;
    // The Logstore that stores the captured traffic data.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The name of the project that stores the captured traffic data.
    std::shared_ptr<string> projectName_ = nullptr;
    // The region ID of the flow log.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the flow log. Valid values:
    // 
    // *   **Active**: The flow log is enabled.
    // *   **Inactive**: The flow log is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLogTags> tags_ = nullptr;
    // The ID of the network instance connection
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
