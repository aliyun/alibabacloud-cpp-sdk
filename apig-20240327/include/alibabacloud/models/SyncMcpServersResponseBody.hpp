// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCMCPSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SYNCMCPSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class SyncMCPServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncMCPServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncMCPServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SyncMCPServersResponseBody() = default ;
    SyncMCPServersResponseBody(const SyncMCPServersResponseBody &) = default ;
    SyncMCPServersResponseBody(SyncMCPServersResponseBody &&) = default ;
    SyncMCPServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncMCPServersResponseBody() = default ;
    SyncMCPServersResponseBody& operator=(const SyncMCPServersResponseBody &) = default ;
    SyncMCPServersResponseBody& operator=(SyncMCPServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(failedMcpServers, failedMcpServers_);
        DARABONBA_PTR_TO_JSON(succeedMcpServers, succeedMcpServers_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(failedMcpServers, failedMcpServers_);
        DARABONBA_PTR_FROM_JSON(succeedMcpServers, succeedMcpServers_);
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
      class SucceedMcpServers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SucceedMcpServers& obj) { 
          DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
          DARABONBA_PTR_TO_JSON(protocols, protocols_);
        };
        friend void from_json(const Darabonba::Json& j, SucceedMcpServers& obj) { 
          DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
          DARABONBA_PTR_FROM_JSON(protocols, protocols_);
        };
        SucceedMcpServers() = default ;
        SucceedMcpServers(const SucceedMcpServers &) = default ;
        SucceedMcpServers(SucceedMcpServers &&) = default ;
        SucceedMcpServers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SucceedMcpServers() = default ;
        SucceedMcpServers& operator=(const SucceedMcpServers &) = default ;
        SucceedMcpServers& operator=(SucceedMcpServers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mcpServerName_ == nullptr
        && this->protocols_ == nullptr; };
        // mcpServerName Field Functions 
        bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
        void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
        inline string getMcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
        inline SucceedMcpServers& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


        // protocols Field Functions 
        bool hasProtocols() const { return this->protocols_ != nullptr;};
        void deleteProtocols() { this->protocols_ = nullptr;};
        inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
        inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
        inline SucceedMcpServers& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
        inline SucceedMcpServers& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


      protected:
        // The name of the MCP server.
        shared_ptr<string> mcpServerName_ {};
        // The protocol.
        shared_ptr<vector<string>> protocols_ {};
      };

      class FailedMcpServers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedMcpServers& obj) { 
          DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
          DARABONBA_PTR_TO_JSON(protocols, protocols_);
        };
        friend void from_json(const Darabonba::Json& j, FailedMcpServers& obj) { 
          DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
          DARABONBA_PTR_FROM_JSON(protocols, protocols_);
        };
        FailedMcpServers() = default ;
        FailedMcpServers(const FailedMcpServers &) = default ;
        FailedMcpServers(FailedMcpServers &&) = default ;
        FailedMcpServers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedMcpServers() = default ;
        FailedMcpServers& operator=(const FailedMcpServers &) = default ;
        FailedMcpServers& operator=(FailedMcpServers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mcpServerName_ == nullptr
        && this->protocols_ == nullptr; };
        // mcpServerName Field Functions 
        bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
        void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
        inline string getMcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
        inline FailedMcpServers& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


        // protocols Field Functions 
        bool hasProtocols() const { return this->protocols_ != nullptr;};
        void deleteProtocols() { this->protocols_ = nullptr;};
        inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
        inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
        inline FailedMcpServers& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
        inline FailedMcpServers& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


      protected:
        // The name of the MCP server.
        shared_ptr<string> mcpServerName_ {};
        // The protocol.
        shared_ptr<vector<string>> protocols_ {};
      };

      virtual bool empty() const override { return this->failedMcpServers_ == nullptr
        && this->succeedMcpServers_ == nullptr; };
      // failedMcpServers Field Functions 
      bool hasFailedMcpServers() const { return this->failedMcpServers_ != nullptr;};
      void deleteFailedMcpServers() { this->failedMcpServers_ = nullptr;};
      inline const vector<Data::FailedMcpServers> & getFailedMcpServers() const { DARABONBA_PTR_GET_CONST(failedMcpServers_, vector<Data::FailedMcpServers>) };
      inline vector<Data::FailedMcpServers> getFailedMcpServers() { DARABONBA_PTR_GET(failedMcpServers_, vector<Data::FailedMcpServers>) };
      inline Data& setFailedMcpServers(const vector<Data::FailedMcpServers> & failedMcpServers) { DARABONBA_PTR_SET_VALUE(failedMcpServers_, failedMcpServers) };
      inline Data& setFailedMcpServers(vector<Data::FailedMcpServers> && failedMcpServers) { DARABONBA_PTR_SET_RVALUE(failedMcpServers_, failedMcpServers) };


      // succeedMcpServers Field Functions 
      bool hasSucceedMcpServers() const { return this->succeedMcpServers_ != nullptr;};
      void deleteSucceedMcpServers() { this->succeedMcpServers_ = nullptr;};
      inline const vector<Data::SucceedMcpServers> & getSucceedMcpServers() const { DARABONBA_PTR_GET_CONST(succeedMcpServers_, vector<Data::SucceedMcpServers>) };
      inline vector<Data::SucceedMcpServers> getSucceedMcpServers() { DARABONBA_PTR_GET(succeedMcpServers_, vector<Data::SucceedMcpServers>) };
      inline Data& setSucceedMcpServers(const vector<Data::SucceedMcpServers> & succeedMcpServers) { DARABONBA_PTR_SET_VALUE(succeedMcpServers_, succeedMcpServers) };
      inline Data& setSucceedMcpServers(vector<Data::SucceedMcpServers> && succeedMcpServers) { DARABONBA_PTR_SET_RVALUE(succeedMcpServers_, succeedMcpServers) };


    protected:
      // The list of MCP servers that failed to synchronize.
      shared_ptr<vector<Data::FailedMcpServers>> failedMcpServers_ {};
      // The list of MCP servers successfully synchronized.
      shared_ptr<vector<Data::SucceedMcpServers>> succeedMcpServers_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SyncMCPServersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SyncMCPServersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SyncMCPServersResponseBody::Data) };
    inline SyncMCPServersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SyncMCPServersResponseBody::Data) };
    inline SyncMCPServersResponseBody& setData(const SyncMCPServersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SyncMCPServersResponseBody& setData(SyncMCPServersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SyncMCPServersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SyncMCPServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<SyncMCPServersResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
