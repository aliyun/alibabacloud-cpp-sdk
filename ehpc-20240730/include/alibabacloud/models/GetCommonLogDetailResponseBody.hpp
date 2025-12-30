// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetCommonLogDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonLogDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(LogDetail, logDetail_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonLogDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(LogDetail, logDetail_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetCommonLogDetailResponseBody() = default ;
    GetCommonLogDetailResponseBody(const GetCommonLogDetailResponseBody &) = default ;
    GetCommonLogDetailResponseBody(GetCommonLogDetailResponseBody &&) = default ;
    GetCommonLogDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonLogDetailResponseBody() = default ;
    GetCommonLogDetailResponseBody& operator=(const GetCommonLogDetailResponseBody &) = default ;
    GetCommonLogDetailResponseBody& operator=(GetCommonLogDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogDetail& obj) { 
        DARABONBA_PTR_TO_JSON(StageName, stageName_);
        DARABONBA_PTR_TO_JSON(Stages, stages_);
      };
      friend void from_json(const Darabonba::Json& j, LogDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        DARABONBA_PTR_FROM_JSON(Stages, stages_);
      };
      LogDetail() = default ;
      LogDetail(const LogDetail &) = default ;
      LogDetail(LogDetail &&) = default ;
      LogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogDetail() = default ;
      LogDetail& operator=(const LogDetail &) = default ;
      LogDetail& operator=(LogDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Stages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stages& obj) { 
          DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, Stages& obj) { 
          DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        Stages() = default ;
        Stages(const Stages &) = default ;
        Stages(Stages &&) = default ;
        Stages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stages() = default ;
        Stages& operator=(const Stages &) = default ;
        Stages& operator=(Stages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logLevel_ == nullptr
        && this->message_ == nullptr && this->method_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->target_ == nullptr
        && this->time_ == nullptr; };
        // logLevel Field Functions 
        bool hasLogLevel() const { return this->logLevel_ != nullptr;};
        void deleteLogLevel() { this->logLevel_ = nullptr;};
        inline string getLogLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
        inline Stages& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Stages& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline Stages& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Stages& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Stages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline Stages& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Stages& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The log level.
        // 
        // Valid values:
        // 
        // *   ERROR
        // *   INFO
        // *   WARN
        shared_ptr<string> logLevel_ {};
        // The output message of the log.
        shared_ptr<string> message_ {};
        // The method involved in the log.
        shared_ptr<string> method_ {};
        // The request ID associated with the log.
        shared_ptr<string> requestId_ {};
        // The action state involved in the log. Valid values:
        // 
        // *   InProgress: The action is being performed.
        // *   Finished: The action is completed.
        // *   Failed: The action failed.
        shared_ptr<string> status_ {};
        // The resource involved in the log.
        shared_ptr<string> target_ {};
        // The time when the log was generated.
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->stageName_ == nullptr
        && this->stages_ == nullptr; };
      // stageName Field Functions 
      bool hasStageName() const { return this->stageName_ != nullptr;};
      void deleteStageName() { this->stageName_ = nullptr;};
      inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
      inline LogDetail& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      // stages Field Functions 
      bool hasStages() const { return this->stages_ != nullptr;};
      void deleteStages() { this->stages_ = nullptr;};
      inline const vector<LogDetail::Stages> & getStages() const { DARABONBA_PTR_GET_CONST(stages_, vector<LogDetail::Stages>) };
      inline vector<LogDetail::Stages> getStages() { DARABONBA_PTR_GET(stages_, vector<LogDetail::Stages>) };
      inline LogDetail& setStages(const vector<LogDetail::Stages> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
      inline LogDetail& setStages(vector<LogDetail::Stages> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


    protected:
      // The stage name of the log.
      shared_ptr<string> stageName_ {};
      // The information about the log stages.
      shared_ptr<vector<LogDetail::Stages>> stages_ {};
    };

    virtual bool empty() const override { return this->action_ == nullptr
        && this->clusterId_ == nullptr && this->logDetail_ == nullptr && this->logType_ == nullptr && this->operatorUid_ == nullptr && this->requestId_ == nullptr
        && this->uid_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetCommonLogDetailResponseBody& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetCommonLogDetailResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // logDetail Field Functions 
    bool hasLogDetail() const { return this->logDetail_ != nullptr;};
    void deleteLogDetail() { this->logDetail_ = nullptr;};
    inline const vector<GetCommonLogDetailResponseBody::LogDetail> & getLogDetail() const { DARABONBA_PTR_GET_CONST(logDetail_, vector<GetCommonLogDetailResponseBody::LogDetail>) };
    inline vector<GetCommonLogDetailResponseBody::LogDetail> getLogDetail() { DARABONBA_PTR_GET(logDetail_, vector<GetCommonLogDetailResponseBody::LogDetail>) };
    inline GetCommonLogDetailResponseBody& setLogDetail(const vector<GetCommonLogDetailResponseBody::LogDetail> & logDetail) { DARABONBA_PTR_SET_VALUE(logDetail_, logDetail) };
    inline GetCommonLogDetailResponseBody& setLogDetail(vector<GetCommonLogDetailResponseBody::LogDetail> && logDetail) { DARABONBA_PTR_SET_RVALUE(logDetail_, logDetail) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline GetCommonLogDetailResponseBody& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string getOperatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline GetCommonLogDetailResponseBody& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommonLogDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetCommonLogDetailResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The action name.
    shared_ptr<string> action_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The information about the logs.
    shared_ptr<vector<GetCommonLogDetailResponseBody::LogDetail>> logDetail_ {};
    // The log type.
    shared_ptr<string> logType_ {};
    // The account ID of the operator.
    shared_ptr<string> operatorUid_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the Alibaba Cloud account.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
