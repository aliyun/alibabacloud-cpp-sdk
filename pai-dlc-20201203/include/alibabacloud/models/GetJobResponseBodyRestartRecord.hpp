// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYRESTARTRECORD_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYRESTARTRECORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyRestartRecordDetailErrorInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobResponseBodyRestartRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyRestartRecord& obj) { 
      DARABONBA_PTR_TO_JSON(DetailErrorInfoList, detailErrorInfoList_);
      DARABONBA_PTR_TO_JSON(JobRestartCount, jobRestartCount_);
      DARABONBA_PTR_TO_JSON(OccurPhase, occurPhase_);
      DARABONBA_PTR_TO_JSON(OccurTime, occurTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RestartDurationInSec, restartDurationInSec_);
      DARABONBA_PTR_TO_JSON(RestartFailReason, restartFailReason_);
      DARABONBA_PTR_TO_JSON(RestartStatus, restartStatus_);
      DARABONBA_PTR_TO_JSON(TriggerID, triggerID_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyRestartRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailErrorInfoList, detailErrorInfoList_);
      DARABONBA_PTR_FROM_JSON(JobRestartCount, jobRestartCount_);
      DARABONBA_PTR_FROM_JSON(OccurPhase, occurPhase_);
      DARABONBA_PTR_FROM_JSON(OccurTime, occurTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RestartDurationInSec, restartDurationInSec_);
      DARABONBA_PTR_FROM_JSON(RestartFailReason, restartFailReason_);
      DARABONBA_PTR_FROM_JSON(RestartStatus, restartStatus_);
      DARABONBA_PTR_FROM_JSON(TriggerID, triggerID_);
    };
    GetJobResponseBodyRestartRecord() = default ;
    GetJobResponseBodyRestartRecord(const GetJobResponseBodyRestartRecord &) = default ;
    GetJobResponseBodyRestartRecord(GetJobResponseBodyRestartRecord &&) = default ;
    GetJobResponseBodyRestartRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyRestartRecord() = default ;
    GetJobResponseBodyRestartRecord& operator=(const GetJobResponseBodyRestartRecord &) = default ;
    GetJobResponseBodyRestartRecord& operator=(GetJobResponseBodyRestartRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailErrorInfoList_ == nullptr
        && return this->jobRestartCount_ == nullptr && return this->occurPhase_ == nullptr && return this->occurTime_ == nullptr && return this->reason_ == nullptr && return this->restartDurationInSec_ == nullptr
        && return this->restartFailReason_ == nullptr && return this->restartStatus_ == nullptr && return this->triggerID_ == nullptr; };
    // detailErrorInfoList Field Functions 
    bool hasDetailErrorInfoList() const { return this->detailErrorInfoList_ != nullptr;};
    void deleteDetailErrorInfoList() { this->detailErrorInfoList_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyRestartRecordDetailErrorInfoList> & detailErrorInfoList() const { DARABONBA_PTR_GET_CONST(detailErrorInfoList_, vector<Models::GetJobResponseBodyRestartRecordDetailErrorInfoList>) };
    inline vector<Models::GetJobResponseBodyRestartRecordDetailErrorInfoList> detailErrorInfoList() { DARABONBA_PTR_GET(detailErrorInfoList_, vector<Models::GetJobResponseBodyRestartRecordDetailErrorInfoList>) };
    inline GetJobResponseBodyRestartRecord& setDetailErrorInfoList(const vector<Models::GetJobResponseBodyRestartRecordDetailErrorInfoList> & detailErrorInfoList) { DARABONBA_PTR_SET_VALUE(detailErrorInfoList_, detailErrorInfoList) };
    inline GetJobResponseBodyRestartRecord& setDetailErrorInfoList(vector<Models::GetJobResponseBodyRestartRecordDetailErrorInfoList> && detailErrorInfoList) { DARABONBA_PTR_SET_RVALUE(detailErrorInfoList_, detailErrorInfoList) };


    // jobRestartCount Field Functions 
    bool hasJobRestartCount() const { return this->jobRestartCount_ != nullptr;};
    void deleteJobRestartCount() { this->jobRestartCount_ = nullptr;};
    inline int64_t jobRestartCount() const { DARABONBA_PTR_GET_DEFAULT(jobRestartCount_, 0L) };
    inline GetJobResponseBodyRestartRecord& setJobRestartCount(int64_t jobRestartCount) { DARABONBA_PTR_SET_VALUE(jobRestartCount_, jobRestartCount) };


    // occurPhase Field Functions 
    bool hasOccurPhase() const { return this->occurPhase_ != nullptr;};
    void deleteOccurPhase() { this->occurPhase_ = nullptr;};
    inline string occurPhase() const { DARABONBA_PTR_GET_DEFAULT(occurPhase_, "") };
    inline GetJobResponseBodyRestartRecord& setOccurPhase(string occurPhase) { DARABONBA_PTR_SET_VALUE(occurPhase_, occurPhase) };


    // occurTime Field Functions 
    bool hasOccurTime() const { return this->occurTime_ != nullptr;};
    void deleteOccurTime() { this->occurTime_ = nullptr;};
    inline string occurTime() const { DARABONBA_PTR_GET_DEFAULT(occurTime_, "") };
    inline GetJobResponseBodyRestartRecord& setOccurTime(string occurTime) { DARABONBA_PTR_SET_VALUE(occurTime_, occurTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetJobResponseBodyRestartRecord& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // restartDurationInSec Field Functions 
    bool hasRestartDurationInSec() const { return this->restartDurationInSec_ != nullptr;};
    void deleteRestartDurationInSec() { this->restartDurationInSec_ = nullptr;};
    inline int64_t restartDurationInSec() const { DARABONBA_PTR_GET_DEFAULT(restartDurationInSec_, 0L) };
    inline GetJobResponseBodyRestartRecord& setRestartDurationInSec(int64_t restartDurationInSec) { DARABONBA_PTR_SET_VALUE(restartDurationInSec_, restartDurationInSec) };


    // restartFailReason Field Functions 
    bool hasRestartFailReason() const { return this->restartFailReason_ != nullptr;};
    void deleteRestartFailReason() { this->restartFailReason_ = nullptr;};
    inline string restartFailReason() const { DARABONBA_PTR_GET_DEFAULT(restartFailReason_, "") };
    inline GetJobResponseBodyRestartRecord& setRestartFailReason(string restartFailReason) { DARABONBA_PTR_SET_VALUE(restartFailReason_, restartFailReason) };


    // restartStatus Field Functions 
    bool hasRestartStatus() const { return this->restartStatus_ != nullptr;};
    void deleteRestartStatus() { this->restartStatus_ = nullptr;};
    inline string restartStatus() const { DARABONBA_PTR_GET_DEFAULT(restartStatus_, "") };
    inline GetJobResponseBodyRestartRecord& setRestartStatus(string restartStatus) { DARABONBA_PTR_SET_VALUE(restartStatus_, restartStatus) };


    // triggerID Field Functions 
    bool hasTriggerID() const { return this->triggerID_ != nullptr;};
    void deleteTriggerID() { this->triggerID_ = nullptr;};
    inline string triggerID() const { DARABONBA_PTR_GET_DEFAULT(triggerID_, "") };
    inline GetJobResponseBodyRestartRecord& setTriggerID(string triggerID) { DARABONBA_PTR_SET_VALUE(triggerID_, triggerID) };


  protected:
    std::shared_ptr<vector<Models::GetJobResponseBodyRestartRecordDetailErrorInfoList>> detailErrorInfoList_ = nullptr;
    std::shared_ptr<int64_t> jobRestartCount_ = nullptr;
    std::shared_ptr<string> occurPhase_ = nullptr;
    std::shared_ptr<string> occurTime_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<int64_t> restartDurationInSec_ = nullptr;
    std::shared_ptr<string> restartFailReason_ = nullptr;
    std::shared_ptr<string> restartStatus_ = nullptr;
    std::shared_ptr<string> triggerID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
