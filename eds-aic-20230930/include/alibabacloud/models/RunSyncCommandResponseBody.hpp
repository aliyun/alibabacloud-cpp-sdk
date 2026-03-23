// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSYNCCOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSYNCCOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RunSyncCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSyncCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, RunSyncCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    RunSyncCommandResponseBody() = default ;
    RunSyncCommandResponseBody(const RunSyncCommandResponseBody &) = default ;
    RunSyncCommandResponseBody(RunSyncCommandResponseBody &&) = default ;
    RunSyncCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSyncCommandResponseBody() = default ;
    RunSyncCommandResponseBody& operator=(const RunSyncCommandResponseBody &) = default ;
    RunSyncCommandResponseBody& operator=(RunSyncCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InvocationId, invocationId_);
        DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InvocationId, invocationId_);
        DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->finishTime_ == nullptr
        && this->instanceId_ == nullptr && this->invocationId_ == nullptr && this->invocationStatus_ == nullptr && this->output_ == nullptr && this->startTime_ == nullptr; };
      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Data& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // invocationId Field Functions 
      bool hasInvocationId() const { return this->invocationId_ != nullptr;};
      void deleteInvocationId() { this->invocationId_ = nullptr;};
      inline string getInvocationId() const { DARABONBA_PTR_GET_DEFAULT(invocationId_, "") };
      inline Data& setInvocationId(string invocationId) { DARABONBA_PTR_SET_VALUE(invocationId_, invocationId) };


      // invocationStatus Field Functions 
      bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
      void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
      inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
      inline Data& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline Data& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> finishTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> invocationId_ {};
      shared_ptr<string> invocationStatus_ {};
      shared_ptr<string> output_ {};
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<RunSyncCommandResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<RunSyncCommandResponseBody::Data>) };
    inline vector<RunSyncCommandResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<RunSyncCommandResponseBody::Data>) };
    inline RunSyncCommandResponseBody& setData(const vector<RunSyncCommandResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RunSyncCommandResponseBody& setData(vector<RunSyncCommandResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunSyncCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline RunSyncCommandResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<RunSyncCommandResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
