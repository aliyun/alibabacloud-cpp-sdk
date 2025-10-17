// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSJOBSRESPONSEBODYAPSJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSJOBSRESPONSEBODYAPSJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsJobsResponseBodyAPSJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsJobsResponseBodyAPSJobs& obj) { 
      DARABONBA_PTR_TO_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_TO_JSON(ApsJobName, apsJobName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DestinationInstanceID, destinationInstanceID_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Projress, projress_);
      DARABONBA_PTR_TO_JSON(SourceInstanceID, sourceInstanceID_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsJobsResponseBodyAPSJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_FROM_JSON(ApsJobName, apsJobName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DestinationInstanceID, destinationInstanceID_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Projress, projress_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceID, sourceInstanceID_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
    };
    DescribeApsJobsResponseBodyAPSJobs() = default ;
    DescribeApsJobsResponseBodyAPSJobs(const DescribeApsJobsResponseBodyAPSJobs &) = default ;
    DescribeApsJobsResponseBodyAPSJobs(DescribeApsJobsResponseBodyAPSJobs &&) = default ;
    DescribeApsJobsResponseBodyAPSJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsJobsResponseBodyAPSJobs() = default ;
    DescribeApsJobsResponseBodyAPSJobs& operator=(const DescribeApsJobsResponseBodyAPSJobs &) = default ;
    DescribeApsJobsResponseBodyAPSJobs& operator=(DescribeApsJobsResponseBodyAPSJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apsJobId_ == nullptr
        && return this->apsJobName_ == nullptr && return this->createTime_ == nullptr && return this->delay_ == nullptr && return this->destinationInstanceID_ == nullptr && return this->errMessage_ == nullptr
        && return this->projress_ == nullptr && return this->sourceInstanceID_ == nullptr && return this->status_ == nullptr && return this->subStatus_ == nullptr; };
    // apsJobId Field Functions 
    bool hasApsJobId() const { return this->apsJobId_ != nullptr;};
    void deleteApsJobId() { this->apsJobId_ = nullptr;};
    inline string apsJobId() const { DARABONBA_PTR_GET_DEFAULT(apsJobId_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setApsJobId(string apsJobId) { DARABONBA_PTR_SET_VALUE(apsJobId_, apsJobId) };


    // apsJobName Field Functions 
    bool hasApsJobName() const { return this->apsJobName_ != nullptr;};
    void deleteApsJobName() { this->apsJobName_ = nullptr;};
    inline string apsJobName() const { DARABONBA_PTR_GET_DEFAULT(apsJobName_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setApsJobName(string apsJobName) { DARABONBA_PTR_SET_VALUE(apsJobName_, apsJobName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeApsJobsResponseBodyAPSJobs& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // destinationInstanceID Field Functions 
    bool hasDestinationInstanceID() const { return this->destinationInstanceID_ != nullptr;};
    void deleteDestinationInstanceID() { this->destinationInstanceID_ = nullptr;};
    inline string destinationInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceID_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setDestinationInstanceID(string destinationInstanceID) { DARABONBA_PTR_SET_VALUE(destinationInstanceID_, destinationInstanceID) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // projress Field Functions 
    bool hasProjress() const { return this->projress_ != nullptr;};
    void deleteProjress() { this->projress_ = nullptr;};
    inline string projress() const { DARABONBA_PTR_GET_DEFAULT(projress_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setProjress(string projress) { DARABONBA_PTR_SET_VALUE(projress_, projress) };


    // sourceInstanceID Field Functions 
    bool hasSourceInstanceID() const { return this->sourceInstanceID_ != nullptr;};
    void deleteSourceInstanceID() { this->sourceInstanceID_ = nullptr;};
    inline string sourceInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceID_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setSourceInstanceID(string sourceInstanceID) { DARABONBA_PTR_SET_VALUE(sourceInstanceID_, sourceInstanceID) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline DescribeApsJobsResponseBodyAPSJobs& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


  protected:
    // The job ID.
    std::shared_ptr<string> apsJobId_ = nullptr;
    // The name of the APS job.
    std::shared_ptr<string> apsJobName_ = nullptr;
    // The time when the APS job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The synchronization latency.
    std::shared_ptr<int64_t> delay_ = nullptr;
    // The destination cluster ID.
    std::shared_ptr<string> destinationInstanceID_ = nullptr;
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The progress.
    std::shared_ptr<string> projress_ = nullptr;
    // The ID of the source instance or cluster.
    std::shared_ptr<string> sourceInstanceID_ = nullptr;
    // The status of the APS job.
    std::shared_ptr<string> status_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> subStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
