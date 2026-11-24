// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROBEMCPORIGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROBEMCPORIGINREQUEST_HPP_
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
  class ProbeMcpOriginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProbeMcpOriginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ProbeMcpOriginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ProbeMcpOriginRequest() = default ;
    ProbeMcpOriginRequest(const ProbeMcpOriginRequest &) = default ;
    ProbeMcpOriginRequest(ProbeMcpOriginRequest &&) = default ;
    ProbeMcpOriginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProbeMcpOriginRequest() = default ;
    ProbeMcpOriginRequest& operator=(const ProbeMcpOriginRequest &) = default ;
    ProbeMcpOriginRequest& operator=(ProbeMcpOriginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(address, address_);
        DARABONBA_PTR_TO_JSON(auth, auth_);
        DARABONBA_PTR_TO_JSON(swaggerConfig, swaggerConfig_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(address, address_);
        DARABONBA_PTR_FROM_JSON(auth, auth_);
        DARABONBA_PTR_FROM_JSON(swaggerConfig, swaggerConfig_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
          // The credential for the backend authentication.
          shared_ptr<string> credential_ {};
          // The ID of the backend authentication configuration.
          shared_ptr<string> id_ {};
          // The name of the API key parameter.
          shared_ptr<string> name_ {};
          // The location where the API key is passed.
          shared_ptr<string> position_ {};
          // The type of the backend authentication.
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
          // The name of the backend authentication header.
          shared_ptr<string> name_ {};
          // The value of the backend authentication header.
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
        // The backend authentication configuration for the direct proxy.
        shared_ptr<Auth::DirectProxy> directProxy_ {};
        // Specifies whether to enable the configuration.
        shared_ptr<bool> enabled_ {};
        // The list of backend authentication configurations for HTTP-to-MCP.
        shared_ptr<vector<Auth::HttpToMcp>> httpToMcp_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->auth_ == nullptr && this->swaggerConfig_ == nullptr && this->type_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Body& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // auth Field Functions 
      bool hasAuth() const { return this->auth_ != nullptr;};
      void deleteAuth() { this->auth_ = nullptr;};
      inline const Body::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, Body::Auth) };
      inline Body::Auth getAuth() { DARABONBA_PTR_GET(auth_, Body::Auth) };
      inline Body& setAuth(const Body::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
      inline Body& setAuth(Body::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


      // swaggerConfig Field Functions 
      bool hasSwaggerConfig() const { return this->swaggerConfig_ != nullptr;};
      void deleteSwaggerConfig() { this->swaggerConfig_ = nullptr;};
      inline string getSwaggerConfig() const { DARABONBA_PTR_GET_DEFAULT(swaggerConfig_, "") };
      inline Body& setSwaggerConfig(string swaggerConfig) { DARABONBA_PTR_SET_VALUE(swaggerConfig_, swaggerConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Body& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // A single HTTP(S) URL that reuses the addresses of the origin server used during creation. Embedded credentials, batch addresses, or protected targets are not accepted.
      // 
      // This parameter is required.
      shared_ptr<string> address_ {};
      // Reuses the enabled, directProxy, and httpToMcp origin server authentication fields and validations from the creation interface. When enabled is set to true, you must provide a configuration that matches the access type. codePackage or additional headers are not accepted.
      shared_ptr<Body::Auth> auth_ {};
      // Applicable only to HTTP. Reuses the JSON or YAML string semantics from the creation interface. This field is required when validating the definition. Remote documents or references are not automatically fetched.
      shared_ptr<string> swaggerConfig_ {};
      // Valid values: DIRECT_PROXY or HTTP_TO_MCP. CODE_PACKAGE is not accepted.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ProbeMcpOriginRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, ProbeMcpOriginRequest::Body) };
    inline ProbeMcpOriginRequest::Body getBody() { DARABONBA_PTR_GET(body_, ProbeMcpOriginRequest::Body) };
    inline ProbeMcpOriginRequest& setBody(const ProbeMcpOriginRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ProbeMcpOriginRequest& setBody(ProbeMcpOriginRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The scope of the origin server configuration must not exceed that of the creation interface. The control fields for this validation only restrict the validation scope and do not extend the origin server access configuration.
    // 
    // This parameter is required.
    shared_ptr<ProbeMcpOriginRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
