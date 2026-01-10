// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLYADDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SIMPLYADDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SimplyAddInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimplyAddInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SimplyAddInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SimplyAddInstanceResponseBody() = default ;
    SimplyAddInstanceResponseBody(const SimplyAddInstanceResponseBody &) = default ;
    SimplyAddInstanceResponseBody(SimplyAddInstanceResponseBody &&) = default ;
    SimplyAddInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimplyAddInstanceResponseBody() = default ;
    SimplyAddInstanceResponseBody& operator=(const SimplyAddInstanceResponseBody &) = default ;
    SimplyAddInstanceResponseBody& operator=(SimplyAddInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->host_ == nullptr
        && this->instanceId_ == nullptr && this->port_ == nullptr; };
      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Instance& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Instance& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      shared_ptr<string> host_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> port_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->instance_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SimplyAddInstanceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SimplyAddInstanceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const SimplyAddInstanceResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, SimplyAddInstanceResponseBody::Instance) };
    inline SimplyAddInstanceResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, SimplyAddInstanceResponseBody::Instance) };
    inline SimplyAddInstanceResponseBody& setInstance(const SimplyAddInstanceResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline SimplyAddInstanceResponseBody& setInstance(SimplyAddInstanceResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SimplyAddInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SimplyAddInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<SimplyAddInstanceResponseBody::Instance> instance_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
