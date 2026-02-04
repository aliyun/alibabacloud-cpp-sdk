// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSTEPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSTEPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListJobStepResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobStepResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobSteps, jobSteps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UseV2API, useV2API_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobStepResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobSteps, jobSteps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UseV2API, useV2API_);
    };
    ListJobStepResponseBody() = default ;
    ListJobStepResponseBody(const ListJobStepResponseBody &) = default ;
    ListJobStepResponseBody(ListJobStepResponseBody &&) = default ;
    ListJobStepResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobStepResponseBody() = default ;
    ListJobStepResponseBody& operator=(const ListJobStepResponseBody &) = default ;
    ListJobStepResponseBody& operator=(ListJobStepResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobSteps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobSteps& obj) { 
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
        DARABONBA_PTR_TO_JSON(SubJobCount, subJobCount_);
        DARABONBA_PTR_TO_JSON(SubJobSteps, subJobSteps_);
        DARABONBA_PTR_TO_JSON(redisPhaseType, redisPhaseType_);
      };
      friend void from_json(const Darabonba::Json& j, JobSteps& obj) { 
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
        DARABONBA_PTR_FROM_JSON(SubJobCount, subJobCount_);
        DARABONBA_PTR_FROM_JSON(SubJobSteps, subJobSteps_);
        DARABONBA_PTR_FROM_JSON(redisPhaseType, redisPhaseType_);
      };
      JobSteps() = default ;
      JobSteps(const JobSteps &) = default ;
      JobSteps(JobSteps &&) = default ;
      JobSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobSteps() = default ;
      JobSteps& operator=(const JobSteps &) = default ;
      JobSteps& operator=(JobSteps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubJobSteps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubJobSteps& obj) { 
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
        friend void from_json(const Darabonba::Json& j, SubJobSteps& obj) { 
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
        SubJobSteps() = default ;
        SubJobSteps(const SubJobSteps &) = default ;
        SubJobSteps(SubJobSteps &&) = default ;
        SubJobSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubJobSteps() = default ;
        SubJobSteps& operator=(const SubJobSteps &) = default ;
        SubJobSteps& operator=(SubJobSteps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ErrorDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErrorDetails& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(HelpUrl, helpUrl_);
          };
          friend void from_json(const Darabonba::Json& j, ErrorDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(HelpUrl, helpUrl_);
          };
          ErrorDetails() = default ;
          ErrorDetails(const ErrorDetails &) = default ;
          ErrorDetails(ErrorDetails &&) = default ;
          ErrorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErrorDetails() = default ;
          ErrorDetails& operator=(const ErrorDetails &) = default ;
          ErrorDetails& operator=(ErrorDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->helpUrl_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline ErrorDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // helpUrl Field Functions 
          bool hasHelpUrl() const { return this->helpUrl_ != nullptr;};
          void deleteHelpUrl() { this->helpUrl_ = nullptr;};
          inline string getHelpUrl() const { DARABONBA_PTR_GET_DEFAULT(helpUrl_, "") };
          inline ErrorDetails& setHelpUrl(string helpUrl) { DARABONBA_PTR_SET_VALUE(helpUrl_, helpUrl) };


        protected:
          shared_ptr<string> errorCode_ {};
          shared_ptr<string> helpUrl_ {};
        };

        virtual bool empty() const override { return this->bootTime_ == nullptr
        && this->code_ == nullptr && this->createTime_ == nullptr && this->errMsg_ == nullptr && this->errorDetails_ == nullptr && this->finishTime_ == nullptr
        && this->incLatencyMilliseconds_ == nullptr && this->incLatencySeconds_ == nullptr && this->jobStepId_ == nullptr && this->jobStepName_ == nullptr && this->modifyTime_ == nullptr
        && this->needAcceleration_ == nullptr && this->progress_ == nullptr && this->serial_ == nullptr && this->state_ == nullptr; };
        // bootTime Field Functions 
        bool hasBootTime() const { return this->bootTime_ != nullptr;};
        void deleteBootTime() { this->bootTime_ = nullptr;};
        inline string getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
        inline SubJobSteps& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline SubJobSteps& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline SubJobSteps& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline SubJobSteps& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // errorDetails Field Functions 
        bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
        void deleteErrorDetails() { this->errorDetails_ = nullptr;};
        inline const vector<SubJobSteps::ErrorDetails> & getErrorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, vector<SubJobSteps::ErrorDetails>) };
        inline vector<SubJobSteps::ErrorDetails> getErrorDetails() { DARABONBA_PTR_GET(errorDetails_, vector<SubJobSteps::ErrorDetails>) };
        inline SubJobSteps& setErrorDetails(const vector<SubJobSteps::ErrorDetails> & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
        inline SubJobSteps& setErrorDetails(vector<SubJobSteps::ErrorDetails> && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline SubJobSteps& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // incLatencyMilliseconds Field Functions 
        bool hasIncLatencyMilliseconds() const { return this->incLatencyMilliseconds_ != nullptr;};
        void deleteIncLatencyMilliseconds() { this->incLatencyMilliseconds_ = nullptr;};
        inline string getIncLatencyMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(incLatencyMilliseconds_, "") };
        inline SubJobSteps& setIncLatencyMilliseconds(string incLatencyMilliseconds) { DARABONBA_PTR_SET_VALUE(incLatencyMilliseconds_, incLatencyMilliseconds) };


        // incLatencySeconds Field Functions 
        bool hasIncLatencySeconds() const { return this->incLatencySeconds_ != nullptr;};
        void deleteIncLatencySeconds() { this->incLatencySeconds_ = nullptr;};
        inline int64_t getIncLatencySeconds() const { DARABONBA_PTR_GET_DEFAULT(incLatencySeconds_, 0L) };
        inline SubJobSteps& setIncLatencySeconds(int64_t incLatencySeconds) { DARABONBA_PTR_SET_VALUE(incLatencySeconds_, incLatencySeconds) };


        // jobStepId Field Functions 
        bool hasJobStepId() const { return this->jobStepId_ != nullptr;};
        void deleteJobStepId() { this->jobStepId_ = nullptr;};
        inline string getJobStepId() const { DARABONBA_PTR_GET_DEFAULT(jobStepId_, "") };
        inline SubJobSteps& setJobStepId(string jobStepId) { DARABONBA_PTR_SET_VALUE(jobStepId_, jobStepId) };


        // jobStepName Field Functions 
        bool hasJobStepName() const { return this->jobStepName_ != nullptr;};
        void deleteJobStepName() { this->jobStepName_ = nullptr;};
        inline string getJobStepName() const { DARABONBA_PTR_GET_DEFAULT(jobStepName_, "") };
        inline SubJobSteps& setJobStepName(string jobStepName) { DARABONBA_PTR_SET_VALUE(jobStepName_, jobStepName) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline SubJobSteps& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // needAcceleration Field Functions 
        bool hasNeedAcceleration() const { return this->needAcceleration_ != nullptr;};
        void deleteNeedAcceleration() { this->needAcceleration_ = nullptr;};
        inline bool getNeedAcceleration() const { DARABONBA_PTR_GET_DEFAULT(needAcceleration_, false) };
        inline SubJobSteps& setNeedAcceleration(bool needAcceleration) { DARABONBA_PTR_SET_VALUE(needAcceleration_, needAcceleration) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline SubJobSteps& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // serial Field Functions 
        bool hasSerial() const { return this->serial_ != nullptr;};
        void deleteSerial() { this->serial_ = nullptr;};
        inline int32_t getSerial() const { DARABONBA_PTR_GET_DEFAULT(serial_, 0) };
        inline SubJobSteps& setSerial(int32_t serial) { DARABONBA_PTR_SET_VALUE(serial_, serial) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline SubJobSteps& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        shared_ptr<string> bootTime_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> errMsg_ {};
        shared_ptr<vector<SubJobSteps::ErrorDetails>> errorDetails_ {};
        shared_ptr<string> finishTime_ {};
        shared_ptr<string> incLatencyMilliseconds_ {};
        shared_ptr<int64_t> incLatencySeconds_ {};
        shared_ptr<string> jobStepId_ {};
        shared_ptr<string> jobStepName_ {};
        shared_ptr<string> modifyTime_ {};
        shared_ptr<bool> needAcceleration_ {};
        shared_ptr<int32_t> progress_ {};
        shared_ptr<int32_t> serial_ {};
        shared_ptr<string> state_ {};
      };

      class ErrorDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorDetails& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(HelpUrl, helpUrl_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(HelpUrl, helpUrl_);
        };
        ErrorDetails() = default ;
        ErrorDetails(const ErrorDetails &) = default ;
        ErrorDetails(ErrorDetails &&) = default ;
        ErrorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorDetails() = default ;
        ErrorDetails& operator=(const ErrorDetails &) = default ;
        ErrorDetails& operator=(ErrorDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->helpUrl_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ErrorDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // helpUrl Field Functions 
        bool hasHelpUrl() const { return this->helpUrl_ != nullptr;};
        void deleteHelpUrl() { this->helpUrl_ = nullptr;};
        inline string getHelpUrl() const { DARABONBA_PTR_GET_DEFAULT(helpUrl_, "") };
        inline ErrorDetails& setHelpUrl(string helpUrl) { DARABONBA_PTR_SET_VALUE(helpUrl_, helpUrl) };


      protected:
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> helpUrl_ {};
      };

      virtual bool empty() const override { return this->bootTime_ == nullptr
        && this->code_ == nullptr && this->createTime_ == nullptr && this->errMsg_ == nullptr && this->errorDetails_ == nullptr && this->finishTime_ == nullptr
        && this->incLatencyMilliseconds_ == nullptr && this->incLatencySeconds_ == nullptr && this->jobStepId_ == nullptr && this->jobStepName_ == nullptr && this->modifyTime_ == nullptr
        && this->needAcceleration_ == nullptr && this->progress_ == nullptr && this->serial_ == nullptr && this->state_ == nullptr && this->subJobCount_ == nullptr
        && this->subJobSteps_ == nullptr && this->redisPhaseType_ == nullptr; };
      // bootTime Field Functions 
      bool hasBootTime() const { return this->bootTime_ != nullptr;};
      void deleteBootTime() { this->bootTime_ = nullptr;};
      inline string getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
      inline JobSteps& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline JobSteps& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobSteps& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errMsg Field Functions 
      bool hasErrMsg() const { return this->errMsg_ != nullptr;};
      void deleteErrMsg() { this->errMsg_ = nullptr;};
      inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
      inline JobSteps& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


      // errorDetails Field Functions 
      bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
      void deleteErrorDetails() { this->errorDetails_ = nullptr;};
      inline const vector<JobSteps::ErrorDetails> & getErrorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, vector<JobSteps::ErrorDetails>) };
      inline vector<JobSteps::ErrorDetails> getErrorDetails() { DARABONBA_PTR_GET(errorDetails_, vector<JobSteps::ErrorDetails>) };
      inline JobSteps& setErrorDetails(const vector<JobSteps::ErrorDetails> & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
      inline JobSteps& setErrorDetails(vector<JobSteps::ErrorDetails> && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline JobSteps& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // incLatencyMilliseconds Field Functions 
      bool hasIncLatencyMilliseconds() const { return this->incLatencyMilliseconds_ != nullptr;};
      void deleteIncLatencyMilliseconds() { this->incLatencyMilliseconds_ = nullptr;};
      inline int64_t getIncLatencyMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(incLatencyMilliseconds_, 0L) };
      inline JobSteps& setIncLatencyMilliseconds(int64_t incLatencyMilliseconds) { DARABONBA_PTR_SET_VALUE(incLatencyMilliseconds_, incLatencyMilliseconds) };


      // incLatencySeconds Field Functions 
      bool hasIncLatencySeconds() const { return this->incLatencySeconds_ != nullptr;};
      void deleteIncLatencySeconds() { this->incLatencySeconds_ = nullptr;};
      inline int64_t getIncLatencySeconds() const { DARABONBA_PTR_GET_DEFAULT(incLatencySeconds_, 0L) };
      inline JobSteps& setIncLatencySeconds(int64_t incLatencySeconds) { DARABONBA_PTR_SET_VALUE(incLatencySeconds_, incLatencySeconds) };


      // jobStepId Field Functions 
      bool hasJobStepId() const { return this->jobStepId_ != nullptr;};
      void deleteJobStepId() { this->jobStepId_ = nullptr;};
      inline string getJobStepId() const { DARABONBA_PTR_GET_DEFAULT(jobStepId_, "") };
      inline JobSteps& setJobStepId(string jobStepId) { DARABONBA_PTR_SET_VALUE(jobStepId_, jobStepId) };


      // jobStepName Field Functions 
      bool hasJobStepName() const { return this->jobStepName_ != nullptr;};
      void deleteJobStepName() { this->jobStepName_ = nullptr;};
      inline string getJobStepName() const { DARABONBA_PTR_GET_DEFAULT(jobStepName_, "") };
      inline JobSteps& setJobStepName(string jobStepName) { DARABONBA_PTR_SET_VALUE(jobStepName_, jobStepName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline JobSteps& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // needAcceleration Field Functions 
      bool hasNeedAcceleration() const { return this->needAcceleration_ != nullptr;};
      void deleteNeedAcceleration() { this->needAcceleration_ = nullptr;};
      inline bool getNeedAcceleration() const { DARABONBA_PTR_GET_DEFAULT(needAcceleration_, false) };
      inline JobSteps& setNeedAcceleration(bool needAcceleration) { DARABONBA_PTR_SET_VALUE(needAcceleration_, needAcceleration) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline JobSteps& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // serial Field Functions 
      bool hasSerial() const { return this->serial_ != nullptr;};
      void deleteSerial() { this->serial_ = nullptr;};
      inline int32_t getSerial() const { DARABONBA_PTR_GET_DEFAULT(serial_, 0) };
      inline JobSteps& setSerial(int32_t serial) { DARABONBA_PTR_SET_VALUE(serial_, serial) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline JobSteps& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // subJobCount Field Functions 
      bool hasSubJobCount() const { return this->subJobCount_ != nullptr;};
      void deleteSubJobCount() { this->subJobCount_ = nullptr;};
      inline int32_t getSubJobCount() const { DARABONBA_PTR_GET_DEFAULT(subJobCount_, 0) };
      inline JobSteps& setSubJobCount(int32_t subJobCount) { DARABONBA_PTR_SET_VALUE(subJobCount_, subJobCount) };


      // subJobSteps Field Functions 
      bool hasSubJobSteps() const { return this->subJobSteps_ != nullptr;};
      void deleteSubJobSteps() { this->subJobSteps_ = nullptr;};
      inline const vector<JobSteps::SubJobSteps> & getSubJobSteps() const { DARABONBA_PTR_GET_CONST(subJobSteps_, vector<JobSteps::SubJobSteps>) };
      inline vector<JobSteps::SubJobSteps> getSubJobSteps() { DARABONBA_PTR_GET(subJobSteps_, vector<JobSteps::SubJobSteps>) };
      inline JobSteps& setSubJobSteps(const vector<JobSteps::SubJobSteps> & subJobSteps) { DARABONBA_PTR_SET_VALUE(subJobSteps_, subJobSteps) };
      inline JobSteps& setSubJobSteps(vector<JobSteps::SubJobSteps> && subJobSteps) { DARABONBA_PTR_SET_RVALUE(subJobSteps_, subJobSteps) };


      // redisPhaseType Field Functions 
      bool hasRedisPhaseType() const { return this->redisPhaseType_ != nullptr;};
      void deleteRedisPhaseType() { this->redisPhaseType_ = nullptr;};
      inline string getRedisPhaseType() const { DARABONBA_PTR_GET_DEFAULT(redisPhaseType_, "") };
      inline JobSteps& setRedisPhaseType(string redisPhaseType) { DARABONBA_PTR_SET_VALUE(redisPhaseType_, redisPhaseType) };


    protected:
      shared_ptr<string> bootTime_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> errMsg_ {};
      shared_ptr<vector<JobSteps::ErrorDetails>> errorDetails_ {};
      shared_ptr<string> finishTime_ {};
      shared_ptr<int64_t> incLatencyMilliseconds_ {};
      shared_ptr<int64_t> incLatencySeconds_ {};
      shared_ptr<string> jobStepId_ {};
      shared_ptr<string> jobStepName_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<bool> needAcceleration_ {};
      shared_ptr<int32_t> progress_ {};
      shared_ptr<int32_t> serial_ {};
      shared_ptr<string> state_ {};
      shared_ptr<int32_t> subJobCount_ {};
      shared_ptr<vector<JobSteps::SubJobSteps>> subJobSteps_ {};
      shared_ptr<string> redisPhaseType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->jobSteps_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->useV2API_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListJobStepResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListJobStepResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobSteps Field Functions 
    bool hasJobSteps() const { return this->jobSteps_ != nullptr;};
    void deleteJobSteps() { this->jobSteps_ = nullptr;};
    inline const vector<ListJobStepResponseBody::JobSteps> & getJobSteps() const { DARABONBA_PTR_GET_CONST(jobSteps_, vector<ListJobStepResponseBody::JobSteps>) };
    inline vector<ListJobStepResponseBody::JobSteps> getJobSteps() { DARABONBA_PTR_GET(jobSteps_, vector<ListJobStepResponseBody::JobSteps>) };
    inline ListJobStepResponseBody& setJobSteps(const vector<ListJobStepResponseBody::JobSteps> & jobSteps) { DARABONBA_PTR_SET_VALUE(jobSteps_, jobSteps) };
    inline ListJobStepResponseBody& setJobSteps(vector<ListJobStepResponseBody::JobSteps> && jobSteps) { DARABONBA_PTR_SET_RVALUE(jobSteps_, jobSteps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobStepResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobStepResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // useV2API Field Functions 
    bool hasUseV2API() const { return this->useV2API_ != nullptr;};
    void deleteUseV2API() { this->useV2API_ = nullptr;};
    inline bool getUseV2API() const { DARABONBA_PTR_GET_DEFAULT(useV2API_, false) };
    inline ListJobStepResponseBody& setUseV2API(bool useV2API) { DARABONBA_PTR_SET_VALUE(useV2API_, useV2API) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<ListJobStepResponseBody::JobSteps>> jobSteps_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<bool> useV2API_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
