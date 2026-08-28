// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetMcpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMcpResponseBody() = default ;
    GetMcpResponseBody(const GetMcpResponseBody &) = default ;
    GetMcpResponseBody(GetMcpResponseBody &&) = default ;
    GetMcpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpResponseBody() = default ;
    GetMcpResponseBody& operator=(const GetMcpResponseBody &) = default ;
    GetMcpResponseBody& operator=(GetMcpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(addresses, addresses_);
        DARABONBA_PTR_TO_JSON(auth, auth_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
        DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(swaggerConfig, swaggerConfig_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(addresses, addresses_);
        DARABONBA_PTR_FROM_JSON(auth, auth_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
        DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(swaggerConfig, swaggerConfig_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(url, url_);
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
      class Auth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Auth& obj) { 
          DARABONBA_PTR_TO_JSON(directProxy, directProxy_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(httpToMcp, httpToMcp_);
        };
        friend void from_json(const Darabonba::Json& j, Auth& obj) { 
          DARABONBA_PTR_FROM_JSON(directProxy, directProxy_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(httpToMcp, httpToMcp_);
        };
        Auth() = default ;
        Auth(const Auth &) = default ;
        Auth(Auth &&) = default ;
        Auth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Auth() = default ;
        Auth& operator=(const Auth &) = default ;
        Auth& operator=(Auth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HttpToMcp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpToMcp& obj) { 
            DARABONBA_PTR_TO_JSON(credential, credential_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(position, position_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, HttpToMcp& obj) { 
            DARABONBA_PTR_FROM_JSON(credential, credential_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(position, position_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          HttpToMcp() = default ;
          HttpToMcp(const HttpToMcp &) = default ;
          HttpToMcp(HttpToMcp &&) = default ;
          HttpToMcp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpToMcp() = default ;
          HttpToMcp& operator=(const HttpToMcp &) = default ;
          HttpToMcp& operator=(HttpToMcp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->credential_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->position_ == nullptr && this->type_ == nullptr; };
          // credential Field Functions 
          bool hasCredential() const { return this->credential_ != nullptr;};
          void deleteCredential() { this->credential_ = nullptr;};
          inline string getCredential() const { DARABONBA_PTR_GET_DEFAULT(credential_, "") };
          inline HttpToMcp& setCredential(string credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline HttpToMcp& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HttpToMcp& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
          inline HttpToMcp& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline HttpToMcp& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The authentication credential.
          shared_ptr<string> credential_ {};
          // The authentication scheme ID.
          shared_ptr<string> id_ {};
          // The name.
          shared_ptr<string> name_ {};
          // The position of the credential.
          shared_ptr<string> position_ {};
          // The type.
          shared_ptr<string> type_ {};
        };

        class DirectProxy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DirectProxy& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DirectProxy& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          DirectProxy() = default ;
          DirectProxy(const DirectProxy &) = default ;
          DirectProxy(DirectProxy &&) = default ;
          DirectProxy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DirectProxy() = default ;
          DirectProxy& operator=(const DirectProxy &) = default ;
          DirectProxy& operator=(DirectProxy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DirectProxy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline DirectProxy& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name.
          shared_ptr<string> name_ {};
          // The authentication parameter value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->directProxy_ == nullptr
        && this->enabled_ == nullptr && this->httpToMcp_ == nullptr; };
        // directProxy Field Functions 
        bool hasDirectProxy() const { return this->directProxy_ != nullptr;};
        void deleteDirectProxy() { this->directProxy_ = nullptr;};
        inline const Auth::DirectProxy & getDirectProxy() const { DARABONBA_PTR_GET_CONST(directProxy_, Auth::DirectProxy) };
        inline Auth::DirectProxy getDirectProxy() { DARABONBA_PTR_GET(directProxy_, Auth::DirectProxy) };
        inline Auth& setDirectProxy(const Auth::DirectProxy & directProxy) { DARABONBA_PTR_SET_VALUE(directProxy_, directProxy) };
        inline Auth& setDirectProxy(Auth::DirectProxy && directProxy) { DARABONBA_PTR_SET_RVALUE(directProxy_, directProxy) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Auth& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // httpToMcp Field Functions 
        bool hasHttpToMcp() const { return this->httpToMcp_ != nullptr;};
        void deleteHttpToMcp() { this->httpToMcp_ = nullptr;};
        inline const vector<Auth::HttpToMcp> & getHttpToMcp() const { DARABONBA_PTR_GET_CONST(httpToMcp_, vector<Auth::HttpToMcp>) };
        inline vector<Auth::HttpToMcp> getHttpToMcp() { DARABONBA_PTR_GET(httpToMcp_, vector<Auth::HttpToMcp>) };
        inline Auth& setHttpToMcp(const vector<Auth::HttpToMcp> & httpToMcp) { DARABONBA_PTR_SET_VALUE(httpToMcp_, httpToMcp) };
        inline Auth& setHttpToMcp(vector<Auth::HttpToMcp> && httpToMcp) { DARABONBA_PTR_SET_RVALUE(httpToMcp_, httpToMcp) };


      protected:
        // The direct proxy authentication configuration.
        shared_ptr<Auth::DirectProxy> directProxy_ {};
        // Indicates whether authentication is enabled.
        shared_ptr<bool> enabled_ {};
        // The list of HTTP_TO_MCP authentication configurations.
        shared_ptr<vector<Auth::HttpToMcp>> httpToMcp_ {};
      };

      virtual bool empty() const override { return this->addresses_ == nullptr
        && this->auth_ == nullptr && this->description_ == nullptr && this->mcpServerConfig_ == nullptr && this->mcpServerId_ == nullptr && this->name_ == nullptr
        && this->protocol_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr && this->swaggerConfig_ == nullptr && this->type_ == nullptr
        && this->url_ == nullptr; };
      // addresses Field Functions 
      bool hasAddresses() const { return this->addresses_ != nullptr;};
      void deleteAddresses() { this->addresses_ = nullptr;};
      inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
      inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
      inline Data& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
      inline Data& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


      // auth Field Functions 
      bool hasAuth() const { return this->auth_ != nullptr;};
      void deleteAuth() { this->auth_ = nullptr;};
      inline const Data::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, Data::Auth) };
      inline Data::Auth getAuth() { DARABONBA_PTR_GET(auth_, Data::Auth) };
      inline Data& setAuth(const Data::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
      inline Data& setAuth(Data::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // mcpServerConfig Field Functions 
      bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
      void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
      inline string getMcpServerConfig() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfig_, "") };
      inline Data& setMcpServerConfig(string mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };


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


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Data& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // swaggerConfig Field Functions 
      bool hasSwaggerConfig() const { return this->swaggerConfig_ != nullptr;};
      void deleteSwaggerConfig() { this->swaggerConfig_ = nullptr;};
      inline string getSwaggerConfig() const { DARABONBA_PTR_GET_DEFAULT(swaggerConfig_, "") };
      inline Data& setSwaggerConfig(string swaggerConfig) { DARABONBA_PTR_SET_VALUE(swaggerConfig_, swaggerConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The list of MCP service addresses.
      shared_ptr<vector<string>> addresses_ {};
      // The backend authentication configuration. enabled indicates whether authentication is enabled. directProxy specifies the custom authentication header for direct proxy. httpToMcp specifies the list of OpenAPI credentials for HTTP_TO_MCP.
      shared_ptr<Data::Auth> auth_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The MCP server configuration.
      shared_ptr<string> mcpServerConfig_ {};
      // The MCP service ID.
      shared_ptr<string> mcpServerId_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The MCP protocol.
      shared_ptr<string> protocol_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The status reason.
      shared_ptr<string> statusReason_ {};
      // The Swagger configuration.
      shared_ptr<string> swaggerConfig_ {};
      // The type.
      shared_ptr<string> type_ {};
      // The MCP service access URL.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMcpResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMcpResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMcpResponseBody::Data) };
    inline GetMcpResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMcpResponseBody::Data) };
    inline GetMcpResponseBody& setData(const GetMcpResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMcpResponseBody& setData(GetMcpResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMcpResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMcpResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMcpResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetMcpResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
