// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREINCRDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREINCRDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeRestoreIncrDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreIncrDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreIncrDetail, restoreIncrDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreIncrDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreIncrDetail, restoreIncrDetail_);
    };
    DescribeRestoreIncrDetailResponseBody() = default ;
    DescribeRestoreIncrDetailResponseBody(const DescribeRestoreIncrDetailResponseBody &) = default ;
    DescribeRestoreIncrDetailResponseBody(DescribeRestoreIncrDetailResponseBody &&) = default ;
    DescribeRestoreIncrDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreIncrDetailResponseBody() = default ;
    DescribeRestoreIncrDetailResponseBody& operator=(const DescribeRestoreIncrDetailResponseBody &) = default ;
    DescribeRestoreIncrDetailResponseBody& operator=(DescribeRestoreIncrDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestoreIncrDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestoreIncrDetail& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Process, process_);
        DARABONBA_PTR_TO_JSON(RestoreDelay, restoreDelay_);
        DARABONBA_PTR_TO_JSON(RestoreStartTs, restoreStartTs_);
        DARABONBA_PTR_TO_JSON(RestoredTs, restoredTs_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, RestoreIncrDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Process, process_);
        DARABONBA_PTR_FROM_JSON(RestoreDelay, restoreDelay_);
        DARABONBA_PTR_FROM_JSON(RestoreStartTs, restoreStartTs_);
        DARABONBA_PTR_FROM_JSON(RestoredTs, restoredTs_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      RestoreIncrDetail() = default ;
      RestoreIncrDetail(const RestoreIncrDetail &) = default ;
      RestoreIncrDetail(RestoreIncrDetail &&) = default ;
      RestoreIncrDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestoreIncrDetail() = default ;
      RestoreIncrDetail& operator=(const RestoreIncrDetail &) = default ;
      RestoreIncrDetail& operator=(RestoreIncrDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->process_ == nullptr && this->restoreDelay_ == nullptr && this->restoreStartTs_ == nullptr && this->restoredTs_ == nullptr && this->startTime_ == nullptr
        && this->state_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline RestoreIncrDetail& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline RestoreIncrDetail& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


      // restoreDelay Field Functions 
      bool hasRestoreDelay() const { return this->restoreDelay_ != nullptr;};
      void deleteRestoreDelay() { this->restoreDelay_ = nullptr;};
      inline string getRestoreDelay() const { DARABONBA_PTR_GET_DEFAULT(restoreDelay_, "") };
      inline RestoreIncrDetail& setRestoreDelay(string restoreDelay) { DARABONBA_PTR_SET_VALUE(restoreDelay_, restoreDelay) };


      // restoreStartTs Field Functions 
      bool hasRestoreStartTs() const { return this->restoreStartTs_ != nullptr;};
      void deleteRestoreStartTs() { this->restoreStartTs_ = nullptr;};
      inline string getRestoreStartTs() const { DARABONBA_PTR_GET_DEFAULT(restoreStartTs_, "") };
      inline RestoreIncrDetail& setRestoreStartTs(string restoreStartTs) { DARABONBA_PTR_SET_VALUE(restoreStartTs_, restoreStartTs) };


      // restoredTs Field Functions 
      bool hasRestoredTs() const { return this->restoredTs_ != nullptr;};
      void deleteRestoredTs() { this->restoredTs_ = nullptr;};
      inline string getRestoredTs() const { DARABONBA_PTR_GET_DEFAULT(restoredTs_, "") };
      inline RestoreIncrDetail& setRestoredTs(string restoredTs) { DARABONBA_PTR_SET_VALUE(restoredTs_, restoredTs) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline RestoreIncrDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline RestoreIncrDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The end time.
      shared_ptr<string> endTime_ {};
      // The progress.
      shared_ptr<string> process_ {};
      // The synchronization latency.
      shared_ptr<string> restoreDelay_ {};
      // The synchronization start point.
      shared_ptr<string> restoreStartTs_ {};
      // The synchronization point.
      shared_ptr<string> restoredTs_ {};
      // The start time.
      shared_ptr<string> startTime_ {};
      // The status.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->restoreIncrDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreIncrDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreIncrDetail Field Functions 
    bool hasRestoreIncrDetail() const { return this->restoreIncrDetail_ != nullptr;};
    void deleteRestoreIncrDetail() { this->restoreIncrDetail_ = nullptr;};
    inline const DescribeRestoreIncrDetailResponseBody::RestoreIncrDetail & getRestoreIncrDetail() const { DARABONBA_PTR_GET_CONST(restoreIncrDetail_, DescribeRestoreIncrDetailResponseBody::RestoreIncrDetail) };
    inline DescribeRestoreIncrDetailResponseBody::RestoreIncrDetail getRestoreIncrDetail() { DARABONBA_PTR_GET(restoreIncrDetail_, DescribeRestoreIncrDetailResponseBody::RestoreIncrDetail) };
    inline DescribeRestoreIncrDetailResponseBody& setRestoreIncrDetail(const DescribeRestoreIncrDetailResponseBody::RestoreIncrDetail & restoreIncrDetail) { DARABONBA_PTR_SET_VALUE(restoreIncrDetail_, restoreIncrDetail) };
    inline DescribeRestoreIncrDetailResponseBody& setRestoreIncrDetail(DescribeRestoreIncrDetailResponseBody::RestoreIncrDetail && restoreIncrDetail) { DARABONBA_PTR_SET_RVALUE(restoreIncrDetail_, restoreIncrDetail) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The incremental restoration details.
    shared_ptr<DescribeRestoreIncrDetailResponseBody::RestoreIncrDetail> restoreIncrDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
