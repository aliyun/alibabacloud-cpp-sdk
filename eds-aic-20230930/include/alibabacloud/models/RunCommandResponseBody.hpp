// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMANDRESPONSEBODY_HPP_
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
  class RunCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunCommandInfos, runCommandInfos_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunCommandInfos, runCommandInfos_);
    };
    RunCommandResponseBody() = default ;
    RunCommandResponseBody(const RunCommandResponseBody &) = default ;
    RunCommandResponseBody(RunCommandResponseBody &&) = default ;
    RunCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommandResponseBody() = default ;
    RunCommandResponseBody& operator=(const RunCommandResponseBody &) = default ;
    RunCommandResponseBody& operator=(RunCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RunCommandInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunCommandInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      };
      friend void from_json(const Darabonba::Json& j, RunCommandInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      };
      RunCommandInfos() = default ;
      RunCommandInfos(const RunCommandInfos &) = default ;
      RunCommandInfos(RunCommandInfos &&) = default ;
      RunCommandInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunCommandInfos() = default ;
      RunCommandInfos& operator=(const RunCommandInfos &) = default ;
      RunCommandInfos& operator=(RunCommandInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->invokeId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline RunCommandInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // invokeId Field Functions 
      bool hasInvokeId() const { return this->invokeId_ != nullptr;};
      void deleteInvokeId() { this->invokeId_ = nullptr;};
      inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
      inline RunCommandInfos& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> invokeId_ {};
    };

    virtual bool empty() const override { return this->invokeId_ == nullptr
        && this->requestId_ == nullptr && this->runCommandInfos_ == nullptr; };
    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline RunCommandResponseBody& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runCommandInfos Field Functions 
    bool hasRunCommandInfos() const { return this->runCommandInfos_ != nullptr;};
    void deleteRunCommandInfos() { this->runCommandInfos_ = nullptr;};
    inline const vector<RunCommandResponseBody::RunCommandInfos> & getRunCommandInfos() const { DARABONBA_PTR_GET_CONST(runCommandInfos_, vector<RunCommandResponseBody::RunCommandInfos>) };
    inline vector<RunCommandResponseBody::RunCommandInfos> getRunCommandInfos() { DARABONBA_PTR_GET(runCommandInfos_, vector<RunCommandResponseBody::RunCommandInfos>) };
    inline RunCommandResponseBody& setRunCommandInfos(const vector<RunCommandResponseBody::RunCommandInfos> & runCommandInfos) { DARABONBA_PTR_SET_VALUE(runCommandInfos_, runCommandInfos) };
    inline RunCommandResponseBody& setRunCommandInfos(vector<RunCommandResponseBody::RunCommandInfos> && runCommandInfos) { DARABONBA_PTR_SET_RVALUE(runCommandInfos_, runCommandInfos) };


  protected:
    // The ID of the command execution. You can use the command execution ID to query the output of a command.
    shared_ptr<string> invokeId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<RunCommandResponseBody::RunCommandInfos>> runCommandInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
