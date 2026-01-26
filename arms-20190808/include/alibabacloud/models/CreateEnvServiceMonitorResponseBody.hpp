// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENVSERVICEMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEENVSERVICEMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateEnvServiceMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnvServiceMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnvServiceMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEnvServiceMonitorResponseBody() = default ;
    CreateEnvServiceMonitorResponseBody(const CreateEnvServiceMonitorResponseBody &) = default ;
    CreateEnvServiceMonitorResponseBody(CreateEnvServiceMonitorResponseBody &&) = default ;
    CreateEnvServiceMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnvServiceMonitorResponseBody() = default ;
    CreateEnvServiceMonitorResponseBody& operator=(const CreateEnvServiceMonitorResponseBody &) = default ;
    CreateEnvServiceMonitorResponseBody& operator=(CreateEnvServiceMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MatchedMsg, matchedMsg_);
        DARABONBA_PTR_TO_JSON(MatchedTargetCount, matchedTargetCount_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ServiceMonitorName, serviceMonitorName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MatchedMsg, matchedMsg_);
        DARABONBA_PTR_FROM_JSON(MatchedTargetCount, matchedTargetCount_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ServiceMonitorName, serviceMonitorName_);
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
      virtual bool empty() const override { return this->matchedMsg_ == nullptr
        && this->matchedTargetCount_ == nullptr && this->namespace_ == nullptr && this->serviceMonitorName_ == nullptr; };
      // matchedMsg Field Functions 
      bool hasMatchedMsg() const { return this->matchedMsg_ != nullptr;};
      void deleteMatchedMsg() { this->matchedMsg_ = nullptr;};
      inline string getMatchedMsg() const { DARABONBA_PTR_GET_DEFAULT(matchedMsg_, "") };
      inline Data& setMatchedMsg(string matchedMsg) { DARABONBA_PTR_SET_VALUE(matchedMsg_, matchedMsg) };


      // matchedTargetCount Field Functions 
      bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
      void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
      inline int32_t getMatchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, 0) };
      inline Data& setMatchedTargetCount(int32_t matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // serviceMonitorName Field Functions 
      bool hasServiceMonitorName() const { return this->serviceMonitorName_ != nullptr;};
      void deleteServiceMonitorName() { this->serviceMonitorName_ = nullptr;};
      inline string getServiceMonitorName() const { DARABONBA_PTR_GET_DEFAULT(serviceMonitorName_, "") };
      inline Data& setServiceMonitorName(string serviceMonitorName) { DARABONBA_PTR_SET_VALUE(serviceMonitorName_, serviceMonitorName) };


    protected:
      // Indicates whether targets are matched.
      shared_ptr<string> matchedMsg_ {};
      // The number of matched targets.
      shared_ptr<int32_t> matchedTargetCount_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The name of the created ServiceMonitor.
      shared_ptr<string> serviceMonitorName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateEnvServiceMonitorResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateEnvServiceMonitorResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateEnvServiceMonitorResponseBody::Data) };
    inline CreateEnvServiceMonitorResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateEnvServiceMonitorResponseBody::Data) };
    inline CreateEnvServiceMonitorResponseBody& setData(const CreateEnvServiceMonitorResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateEnvServiceMonitorResponseBody& setData(CreateEnvServiceMonitorResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateEnvServiceMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEnvServiceMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<CreateEnvServiceMonitorResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
