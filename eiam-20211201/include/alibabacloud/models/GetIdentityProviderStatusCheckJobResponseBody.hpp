// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSTATUSCHECKJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSTATUSCHECKJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderStatusCheckJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderStatusCheckJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderStatusCheckJob, identityProviderStatusCheckJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderStatusCheckJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderStatusCheckJob, identityProviderStatusCheckJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIdentityProviderStatusCheckJobResponseBody() = default ;
    GetIdentityProviderStatusCheckJobResponseBody(const GetIdentityProviderStatusCheckJobResponseBody &) = default ;
    GetIdentityProviderStatusCheckJobResponseBody(GetIdentityProviderStatusCheckJobResponseBody &&) = default ;
    GetIdentityProviderStatusCheckJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderStatusCheckJobResponseBody() = default ;
    GetIdentityProviderStatusCheckJobResponseBody& operator=(const GetIdentityProviderStatusCheckJobResponseBody &) = default ;
    GetIdentityProviderStatusCheckJobResponseBody& operator=(GetIdentityProviderStatusCheckJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityProviderStatusCheckJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityProviderStatusCheckJob& obj) { 
        DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_TO_JSON(IdentityProviderStatusCheckJobId, identityProviderStatusCheckJobId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JobCheckItems, jobCheckItems_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityProviderStatusCheckJob& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderStatusCheckJobId, identityProviderStatusCheckJobId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JobCheckItems, jobCheckItems_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      IdentityProviderStatusCheckJob() = default ;
      IdentityProviderStatusCheckJob(const IdentityProviderStatusCheckJob &) = default ;
      IdentityProviderStatusCheckJob(IdentityProviderStatusCheckJob &&) = default ;
      IdentityProviderStatusCheckJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityProviderStatusCheckJob() = default ;
      IdentityProviderStatusCheckJob& operator=(const IdentityProviderStatusCheckJob &) = default ;
      IdentityProviderStatusCheckJob& operator=(IdentityProviderStatusCheckJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobCheckItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobCheckItems& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorReason, errorReason_);
          DARABONBA_PTR_TO_JSON(MajorCheckItem, majorCheckItem_);
          DARABONBA_PTR_TO_JSON(MinorCheckItem, minorCheckItem_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, JobCheckItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorReason, errorReason_);
          DARABONBA_PTR_FROM_JSON(MajorCheckItem, majorCheckItem_);
          DARABONBA_PTR_FROM_JSON(MinorCheckItem, minorCheckItem_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        JobCheckItems() = default ;
        JobCheckItems(const JobCheckItems &) = default ;
        JobCheckItems(JobCheckItems &&) = default ;
        JobCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobCheckItems() = default ;
        JobCheckItems& operator=(const JobCheckItems &) = default ;
        JobCheckItems& operator=(JobCheckItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ErrorReason : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErrorReason& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorLevel, errorLevel_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          };
          friend void from_json(const Darabonba::Json& j, ErrorReason& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorLevel, errorLevel_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          };
          ErrorReason() = default ;
          ErrorReason(const ErrorReason &) = default ;
          ErrorReason(ErrorReason &&) = default ;
          ErrorReason(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErrorReason() = default ;
          ErrorReason& operator=(const ErrorReason &) = default ;
          ErrorReason& operator=(ErrorReason &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorLevel_ == nullptr && this->errorMessage_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline ErrorReason& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorLevel Field Functions 
          bool hasErrorLevel() const { return this->errorLevel_ != nullptr;};
          void deleteErrorLevel() { this->errorLevel_ = nullptr;};
          inline string getErrorLevel() const { DARABONBA_PTR_GET_DEFAULT(errorLevel_, "") };
          inline ErrorReason& setErrorLevel(string errorLevel) { DARABONBA_PTR_SET_VALUE(errorLevel_, errorLevel) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline ErrorReason& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        protected:
          // 错误码
          shared_ptr<string> errorCode_ {};
          // 错误级别
          shared_ptr<string> errorLevel_ {};
          // 错误信息
          shared_ptr<string> errorMessage_ {};
        };

        virtual bool empty() const override { return this->errorReason_ == nullptr
        && this->majorCheckItem_ == nullptr && this->minorCheckItem_ == nullptr && this->result_ == nullptr; };
        // errorReason Field Functions 
        bool hasErrorReason() const { return this->errorReason_ != nullptr;};
        void deleteErrorReason() { this->errorReason_ = nullptr;};
        inline const JobCheckItems::ErrorReason & getErrorReason() const { DARABONBA_PTR_GET_CONST(errorReason_, JobCheckItems::ErrorReason) };
        inline JobCheckItems::ErrorReason getErrorReason() { DARABONBA_PTR_GET(errorReason_, JobCheckItems::ErrorReason) };
        inline JobCheckItems& setErrorReason(const JobCheckItems::ErrorReason & errorReason) { DARABONBA_PTR_SET_VALUE(errorReason_, errorReason) };
        inline JobCheckItems& setErrorReason(JobCheckItems::ErrorReason && errorReason) { DARABONBA_PTR_SET_RVALUE(errorReason_, errorReason) };


        // majorCheckItem Field Functions 
        bool hasMajorCheckItem() const { return this->majorCheckItem_ != nullptr;};
        void deleteMajorCheckItem() { this->majorCheckItem_ = nullptr;};
        inline string getMajorCheckItem() const { DARABONBA_PTR_GET_DEFAULT(majorCheckItem_, "") };
        inline JobCheckItems& setMajorCheckItem(string majorCheckItem) { DARABONBA_PTR_SET_VALUE(majorCheckItem_, majorCheckItem) };


        // minorCheckItem Field Functions 
        bool hasMinorCheckItem() const { return this->minorCheckItem_ != nullptr;};
        void deleteMinorCheckItem() { this->minorCheckItem_ = nullptr;};
        inline string getMinorCheckItem() const { DARABONBA_PTR_GET_DEFAULT(minorCheckItem_, "") };
        inline JobCheckItems& setMinorCheckItem(string minorCheckItem) { DARABONBA_PTR_SET_VALUE(minorCheckItem_, minorCheckItem) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline JobCheckItems& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        // 错误原因
        shared_ptr<JobCheckItems::ErrorReason> errorReason_ {};
        // 主要检查项
        shared_ptr<string> majorCheckItem_ {};
        // 次要检查项
        shared_ptr<string> minorCheckItem_ {};
        // 结果
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->checkResult_ == nullptr
        && this->endTime_ == nullptr && this->identityProviderId_ == nullptr && this->identityProviderStatusCheckJobId_ == nullptr && this->instanceId_ == nullptr && this->jobCheckItems_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
      inline IdentityProviderStatusCheckJob& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline IdentityProviderStatusCheckJob& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // identityProviderId Field Functions 
      bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
      void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
      inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
      inline IdentityProviderStatusCheckJob& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


      // identityProviderStatusCheckJobId Field Functions 
      bool hasIdentityProviderStatusCheckJobId() const { return this->identityProviderStatusCheckJobId_ != nullptr;};
      void deleteIdentityProviderStatusCheckJobId() { this->identityProviderStatusCheckJobId_ = nullptr;};
      inline string getIdentityProviderStatusCheckJobId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderStatusCheckJobId_, "") };
      inline IdentityProviderStatusCheckJob& setIdentityProviderStatusCheckJobId(string identityProviderStatusCheckJobId) { DARABONBA_PTR_SET_VALUE(identityProviderStatusCheckJobId_, identityProviderStatusCheckJobId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IdentityProviderStatusCheckJob& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobCheckItems Field Functions 
      bool hasJobCheckItems() const { return this->jobCheckItems_ != nullptr;};
      void deleteJobCheckItems() { this->jobCheckItems_ = nullptr;};
      inline const vector<IdentityProviderStatusCheckJob::JobCheckItems> & getJobCheckItems() const { DARABONBA_PTR_GET_CONST(jobCheckItems_, vector<IdentityProviderStatusCheckJob::JobCheckItems>) };
      inline vector<IdentityProviderStatusCheckJob::JobCheckItems> getJobCheckItems() { DARABONBA_PTR_GET(jobCheckItems_, vector<IdentityProviderStatusCheckJob::JobCheckItems>) };
      inline IdentityProviderStatusCheckJob& setJobCheckItems(const vector<IdentityProviderStatusCheckJob::JobCheckItems> & jobCheckItems) { DARABONBA_PTR_SET_VALUE(jobCheckItems_, jobCheckItems) };
      inline IdentityProviderStatusCheckJob& setJobCheckItems(vector<IdentityProviderStatusCheckJob::JobCheckItems> && jobCheckItems) { DARABONBA_PTR_SET_RVALUE(jobCheckItems_, jobCheckItems) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline IdentityProviderStatusCheckJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IdentityProviderStatusCheckJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // 任务检查结果
      shared_ptr<string> checkResult_ {};
      // 结束时间
      shared_ptr<int64_t> endTime_ {};
      // IdP身份提供方
      shared_ptr<string> identityProviderId_ {};
      // IdP状态检查任务Id
      shared_ptr<string> identityProviderStatusCheckJobId_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      // 状态检查子项任务结果信息
      shared_ptr<vector<IdentityProviderStatusCheckJob::JobCheckItems>> jobCheckItems_ {};
      // 开始时间
      shared_ptr<int64_t> startTime_ {};
      // 任务检查状态
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->identityProviderStatusCheckJob_ == nullptr
        && this->requestId_ == nullptr; };
    // identityProviderStatusCheckJob Field Functions 
    bool hasIdentityProviderStatusCheckJob() const { return this->identityProviderStatusCheckJob_ != nullptr;};
    void deleteIdentityProviderStatusCheckJob() { this->identityProviderStatusCheckJob_ = nullptr;};
    inline const GetIdentityProviderStatusCheckJobResponseBody::IdentityProviderStatusCheckJob & getIdentityProviderStatusCheckJob() const { DARABONBA_PTR_GET_CONST(identityProviderStatusCheckJob_, GetIdentityProviderStatusCheckJobResponseBody::IdentityProviderStatusCheckJob) };
    inline GetIdentityProviderStatusCheckJobResponseBody::IdentityProviderStatusCheckJob getIdentityProviderStatusCheckJob() { DARABONBA_PTR_GET(identityProviderStatusCheckJob_, GetIdentityProviderStatusCheckJobResponseBody::IdentityProviderStatusCheckJob) };
    inline GetIdentityProviderStatusCheckJobResponseBody& setIdentityProviderStatusCheckJob(const GetIdentityProviderStatusCheckJobResponseBody::IdentityProviderStatusCheckJob & identityProviderStatusCheckJob) { DARABONBA_PTR_SET_VALUE(identityProviderStatusCheckJob_, identityProviderStatusCheckJob) };
    inline GetIdentityProviderStatusCheckJobResponseBody& setIdentityProviderStatusCheckJob(GetIdentityProviderStatusCheckJobResponseBody::IdentityProviderStatusCheckJob && identityProviderStatusCheckJob) { DARABONBA_PTR_SET_RVALUE(identityProviderStatusCheckJob_, identityProviderStatusCheckJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderStatusCheckJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetIdentityProviderStatusCheckJobResponseBody::IdentityProviderStatusCheckJob> identityProviderStatusCheckJob_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
