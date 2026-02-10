// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateHoneypotResponseBody() = default ;
    CreateHoneypotResponseBody(const CreateHoneypotResponseBody &) = default ;
    CreateHoneypotResponseBody(CreateHoneypotResponseBody &&) = default ;
    CreateHoneypotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotResponseBody() = default ;
    CreateHoneypotResponseBody& operator=(const CreateHoneypotResponseBody &) = default ;
    CreateHoneypotResponseBody& operator=(CreateHoneypotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ControlNodeName, controlNodeName_);
        DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
        DARABONBA_PTR_TO_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PresetId, presetId_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlNodeName, controlNodeName_);
        DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PresetId, presetId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
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
      virtual bool empty() const override { return this->controlNodeName_ == nullptr
        && this->honeypotId_ == nullptr && this->honeypotImageDisplayName_ == nullptr && this->honeypotImageName_ == nullptr && this->honeypotName_ == nullptr && this->nodeId_ == nullptr
        && this->presetId_ == nullptr && this->state_ == nullptr; };
      // controlNodeName Field Functions 
      bool hasControlNodeName() const { return this->controlNodeName_ != nullptr;};
      void deleteControlNodeName() { this->controlNodeName_ = nullptr;};
      inline string getControlNodeName() const { DARABONBA_PTR_GET_DEFAULT(controlNodeName_, "") };
      inline Data& setControlNodeName(string controlNodeName) { DARABONBA_PTR_SET_VALUE(controlNodeName_, controlNodeName) };


      // honeypotId Field Functions 
      bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
      void deleteHoneypotId() { this->honeypotId_ = nullptr;};
      inline string getHoneypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
      inline Data& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


      // honeypotImageDisplayName Field Functions 
      bool hasHoneypotImageDisplayName() const { return this->honeypotImageDisplayName_ != nullptr;};
      void deleteHoneypotImageDisplayName() { this->honeypotImageDisplayName_ = nullptr;};
      inline string getHoneypotImageDisplayName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageDisplayName_, "") };
      inline Data& setHoneypotImageDisplayName(string honeypotImageDisplayName) { DARABONBA_PTR_SET_VALUE(honeypotImageDisplayName_, honeypotImageDisplayName) };


      // honeypotImageName Field Functions 
      bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
      void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
      inline string getHoneypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
      inline Data& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


      // honeypotName Field Functions 
      bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
      void deleteHoneypotName() { this->honeypotName_ = nullptr;};
      inline string getHoneypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
      inline Data& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // presetId Field Functions 
      bool hasPresetId() const { return this->presetId_ != nullptr;};
      void deletePresetId() { this->presetId_ = nullptr;};
      inline string getPresetId() const { DARABONBA_PTR_GET_DEFAULT(presetId_, "") };
      inline Data& setPresetId(string presetId) { DARABONBA_PTR_SET_VALUE(presetId_, presetId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline const vector<string> & getState() const { DARABONBA_PTR_GET_CONST(state_, vector<string>) };
      inline vector<string> getState() { DARABONBA_PTR_GET(state_, vector<string>) };
      inline Data& setState(const vector<string> & state) { DARABONBA_PTR_SET_VALUE(state_, state) };
      inline Data& setState(vector<string> && state) { DARABONBA_PTR_SET_RVALUE(state_, state) };


    protected:
      // The name of the management node.
      shared_ptr<string> controlNodeName_ {};
      // The ID of the honeypot.
      shared_ptr<string> honeypotId_ {};
      // The display name of the honeypot image.
      shared_ptr<string> honeypotImageDisplayName_ {};
      // The name of the honeypot image.
      shared_ptr<string> honeypotImageName_ {};
      // The custom name of the honeypot.
      shared_ptr<string> honeypotName_ {};
      // The ID of the management node.
      shared_ptr<string> nodeId_ {};
      // The ID of the custom configuration for the honeypot.
      shared_ptr<string> presetId_ {};
      // An array that consists of the status information about the honeypot.
      shared_ptr<vector<string>> state_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateHoneypotResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateHoneypotResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateHoneypotResponseBody::Data) };
    inline CreateHoneypotResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateHoneypotResponseBody::Data) };
    inline CreateHoneypotResponseBody& setData(const CreateHoneypotResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateHoneypotResponseBody& setData(CreateHoneypotResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateHoneypotResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateHoneypotResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHoneypotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateHoneypotResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The information about the honeypot.
    shared_ptr<CreateHoneypotResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
