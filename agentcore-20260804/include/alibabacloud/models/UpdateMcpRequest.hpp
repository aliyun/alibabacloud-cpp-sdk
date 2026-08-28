// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPREQUEST_HPP_
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
  class UpdateMcpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateMcpRequest() = default ;
    UpdateMcpRequest(const UpdateMcpRequest &) = default ;
    UpdateMcpRequest(UpdateMcpRequest &&) = default ;
    UpdateMcpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpRequest() = default ;
    UpdateMcpRequest& operator=(const UpdateMcpRequest &) = default ;
    UpdateMcpRequest& operator=(UpdateMcpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(addresses, addresses_);
        DARABONBA_PTR_TO_JSON(auth, auth_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(swaggerConfig, swaggerConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(addresses, addresses_);
        DARABONBA_PTR_FROM_JSON(auth, auth_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(swaggerConfig, swaggerConfig_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
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
        // Specifies whether to enable authentication.
        shared_ptr<bool> enabled_ {};
        // The list of HTTP_TO_MCP authentication configurations.
        shared_ptr<vector<Auth::HttpToMcp>> httpToMcp_ {};
      };

      virtual bool empty() const override { return this->addresses_ == nullptr
        && this->auth_ == nullptr && this->description_ == nullptr && this->swaggerConfig_ == nullptr; };
      // addresses Field Functions 
      bool hasAddresses() const { return this->addresses_ != nullptr;};
      void deleteAddresses() { this->addresses_ = nullptr;};
      inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
      inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
      inline Body& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
      inline Body& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


      // auth Field Functions 
      bool hasAuth() const { return this->auth_ != nullptr;};
      void deleteAuth() { this->auth_ = nullptr;};
      inline const Body::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, Body::Auth) };
      inline Body::Auth getAuth() { DARABONBA_PTR_GET(auth_, Body::Auth) };
      inline Body& setAuth(const Body::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
      inline Body& setAuth(Body::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // swaggerConfig Field Functions 
      bool hasSwaggerConfig() const { return this->swaggerConfig_ != nullptr;};
      void deleteSwaggerConfig() { this->swaggerConfig_ = nullptr;};
      inline string getSwaggerConfig() const { DARABONBA_PTR_GET_DEFAULT(swaggerConfig_, "") };
      inline Body& setSwaggerConfig(string swaggerConfig) { DARABONBA_PTR_SET_VALUE(swaggerConfig_, swaggerConfig) };


    protected:
      // The list of MCP service addresses.
      shared_ptr<vector<string>> addresses_ {};
      // The backend authentication configuration. When enabled=true: for DIRECT_PROXY, specify directProxy (name/value). For HTTP_TO_MCP, specify the httpToMcp array (each item contains id/type/credential; apiKey also requires position/name). Multiple authentication objects are supported, and the first one is the default upstream credential. HTTP_TO_MCP credentials are merged into the securitySchemes of the Swagger specification.
      shared_ptr<Body::Auth> auth_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The Swagger configuration. Specify this field if Type is set to HTTP_TO_MCP.
      shared_ptr<string> swaggerConfig_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateMcpRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateMcpRequest::Body) };
    inline UpdateMcpRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateMcpRequest::Body) };
    inline UpdateMcpRequest& setBody(const UpdateMcpRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMcpRequest& setBody(UpdateMcpRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateMcpRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body.
    shared_ptr<UpdateMcpRequest::Body> body_ {};
    // The client idempotency token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
