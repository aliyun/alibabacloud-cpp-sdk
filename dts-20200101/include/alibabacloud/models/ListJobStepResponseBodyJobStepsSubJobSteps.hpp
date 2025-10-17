// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSTEPRESPONSEBODYJOBSTEPSSUBJOBSTEPS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSTEPRESPONSEBODYJOBSTEPSSUBJOBSTEPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListJobStepResponseBodyJobStepsSubJobSteps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobStepResponseBodyJobStepsSubJobSteps& obj) { 
      DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(ErrorDetails, errorDetails_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(IncLatencyMilliseconds, incLatencyMilliseconds_);
      DARABONBA_PTR_TO_JSON(IncLatencySeconds, incLatencySeconds_);
      DARABONBA_PTR_TO_JSON(JobStepId, jobStepId_);
      DARABONBA_PTR_TO_JSON(JobStepName, jobStepName_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NeedAcceleration, needAcceleration_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Serial, serial_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobStepResponseBodyJobStepsSubJobSteps& obj) { 
      DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(ErrorDetails, errorDetails_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(IncLatencyMilliseconds, incLatencyMilliseconds_);
      DARABONBA_PTR_FROM_JSON(IncLatencySeconds, incLatencySeconds_);
      DARABONBA_PTR_FROM_JSON(JobStepId, jobStepId_);
      DARABONBA_PTR_FROM_JSON(JobStepName, jobStepName_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NeedAcceleration, needAcceleration_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Serial, serial_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListJobStepResponseBodyJobStepsSubJobSteps() = default ;
    ListJobStepResponseBodyJobStepsSubJobSteps(const ListJobStepResponseBodyJobStepsSubJobSteps &) = default ;
    ListJobStepResponseBodyJobStepsSubJobSteps(ListJobStepResponseBodyJobStepsSubJobSteps &&) = default ;
    ListJobStepResponseBodyJobStepsSubJobSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobStepResponseBodyJobStepsSubJobSteps() = default ;
    ListJobStepResponseBodyJobStepsSubJobSteps& operator=(const ListJobStepResponseBodyJobStepsSubJobSteps &) = default ;
    ListJobStepResponseBodyJobStepsSubJobSteps& operator=(ListJobStepResponseBodyJobStepsSubJobSteps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bootTime_ == nullptr
        && return this->code_ == nullptr && return this->createTime_ == nullptr && return this->errMsg_ == nullptr && return this->errorDetails_ == nullptr && return this->finishTime_ == nullptr
        && return this->incLatencyMilliseconds_ == nullptr && return this->incLatencySeconds_ == nullptr && return this->jobStepId_ == nullptr && return this->jobStepName_ == nullptr && return this->modifyTime_ == nullptr
        && return this->needAcceleration_ == nullptr && return this->progress_ == nullptr && return this->serial_ == nullptr && return this->state_ == nullptr; };
    // bootTime Field Functions 
    bool hasBootTime() const { return this->bootTime_ != nullptr;};
    void deleteBootTime() { this->bootTime_ = nullptr;};
    inline string bootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // errorDetails Field Functions 
    bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
    void deleteErrorDetails() { this->errorDetails_ = nullptr;};
    inline const vector<Models::ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails> & errorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, vector<Models::ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails>) };
    inline vector<Models::ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails> errorDetails() { DARABONBA_PTR_GET(errorDetails_, vector<Models::ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails>) };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setErrorDetails(const vector<Models::ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails> & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setErrorDetails(vector<Models::ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails> && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // incLatencyMilliseconds Field Functions 
    bool hasIncLatencyMilliseconds() const { return this->incLatencyMilliseconds_ != nullptr;};
    void deleteIncLatencyMilliseconds() { this->incLatencyMilliseconds_ = nullptr;};
    inline string incLatencyMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(incLatencyMilliseconds_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setIncLatencyMilliseconds(string incLatencyMilliseconds) { DARABONBA_PTR_SET_VALUE(incLatencyMilliseconds_, incLatencyMilliseconds) };


    // incLatencySeconds Field Functions 
    bool hasIncLatencySeconds() const { return this->incLatencySeconds_ != nullptr;};
    void deleteIncLatencySeconds() { this->incLatencySeconds_ = nullptr;};
    inline int64_t incLatencySeconds() const { DARABONBA_PTR_GET_DEFAULT(incLatencySeconds_, 0L) };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setIncLatencySeconds(int64_t incLatencySeconds) { DARABONBA_PTR_SET_VALUE(incLatencySeconds_, incLatencySeconds) };


    // jobStepId Field Functions 
    bool hasJobStepId() const { return this->jobStepId_ != nullptr;};
    void deleteJobStepId() { this->jobStepId_ = nullptr;};
    inline string jobStepId() const { DARABONBA_PTR_GET_DEFAULT(jobStepId_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setJobStepId(string jobStepId) { DARABONBA_PTR_SET_VALUE(jobStepId_, jobStepId) };


    // jobStepName Field Functions 
    bool hasJobStepName() const { return this->jobStepName_ != nullptr;};
    void deleteJobStepName() { this->jobStepName_ = nullptr;};
    inline string jobStepName() const { DARABONBA_PTR_GET_DEFAULT(jobStepName_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setJobStepName(string jobStepName) { DARABONBA_PTR_SET_VALUE(jobStepName_, jobStepName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // needAcceleration Field Functions 
    bool hasNeedAcceleration() const { return this->needAcceleration_ != nullptr;};
    void deleteNeedAcceleration() { this->needAcceleration_ = nullptr;};
    inline bool needAcceleration() const { DARABONBA_PTR_GET_DEFAULT(needAcceleration_, false) };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setNeedAcceleration(bool needAcceleration) { DARABONBA_PTR_SET_VALUE(needAcceleration_, needAcceleration) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // serial Field Functions 
    bool hasSerial() const { return this->serial_ != nullptr;};
    void deleteSerial() { this->serial_ = nullptr;};
    inline int32_t serial() const { DARABONBA_PTR_GET_DEFAULT(serial_, 0) };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setSerial(int32_t serial) { DARABONBA_PTR_SET_VALUE(serial_, serial) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobSteps& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> bootTime_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<vector<Models::ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails>> errorDetails_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> incLatencyMilliseconds_ = nullptr;
    std::shared_ptr<int64_t> incLatencySeconds_ = nullptr;
    std::shared_ptr<string> jobStepId_ = nullptr;
    std::shared_ptr<string> jobStepName_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<bool> needAcceleration_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    std::shared_ptr<int32_t> serial_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
