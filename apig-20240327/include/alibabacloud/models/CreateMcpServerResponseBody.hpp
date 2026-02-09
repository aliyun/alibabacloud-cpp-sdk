// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateMcpServerResponseBody() = default ;
    CreateMcpServerResponseBody(const CreateMcpServerResponseBody &) = default ;
    CreateMcpServerResponseBody(CreateMcpServerResponseBody &&) = default ;
    CreateMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcpServerResponseBody() = default ;
    CreateMcpServerResponseBody& operator=(const CreateMcpServerResponseBody &) = default ;
    CreateMcpServerResponseBody& operator=(CreateMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      virtual bool empty() const override { return this->mcpServerId_ == nullptr
        && this->name_ == nullptr; };
      // mcpServerId Field Functions 
      bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
      void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
      inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
      inline Data& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // MCP Server ID
      shared_ptr<string> mcpServerId_ {};
      // MCP server name
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateMcpServerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateMcpServerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateMcpServerResponseBody::Data) };
    inline CreateMcpServerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateMcpServerResponseBody::Data) };
    inline CreateMcpServerResponseBody& setData(const CreateMcpServerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMcpServerResponseBody& setData(CreateMcpServerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateMcpServerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // code
    shared_ptr<string> code_ {};
    // object
    shared_ptr<CreateMcpServerResponseBody::Data> data_ {};
    // message
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
