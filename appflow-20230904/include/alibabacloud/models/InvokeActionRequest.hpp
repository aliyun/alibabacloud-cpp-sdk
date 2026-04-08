// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class InvokeActionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeActionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionId, actionId_);
      DARABONBA_PTR_TO_JSON(ActionVersion, actionVersion_);
      DARABONBA_PTR_TO_JSON(AuthConfig, authConfig_);
      DARABONBA_ANY_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeActionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionId, actionId_);
      DARABONBA_PTR_FROM_JSON(ActionVersion, actionVersion_);
      DARABONBA_PTR_FROM_JSON(AuthConfig, authConfig_);
      DARABONBA_ANY_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    InvokeActionRequest() = default ;
    InvokeActionRequest(const InvokeActionRequest &) = default ;
    InvokeActionRequest(InvokeActionRequest &&) = default ;
    InvokeActionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeActionRequest() = default ;
    InvokeActionRequest& operator=(const InvokeActionRequest &) = default ;
    InvokeActionRequest& operator=(InvokeActionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_ANY_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AuthConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_ANY_FROM_JSON(Value, value_);
      };
      AuthConfig() = default ;
      AuthConfig(const AuthConfig &) = default ;
      AuthConfig(AuthConfig &&) = default ;
      AuthConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthConfig() = default ;
      AuthConfig& operator=(const AuthConfig &) = default ;
      AuthConfig& operator=(AuthConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AuthConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline       const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
      Darabonba::Json & getValue() { DARABONBA_GET(value_) };
      inline AuthConfig& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
      inline AuthConfig& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


    protected:
      shared_ptr<string> type_ {};
      Darabonba::Json value_ {};
    };

    virtual bool empty() const override { return this->actionId_ == nullptr
        && this->actionVersion_ == nullptr && this->authConfig_ == nullptr && this->body_ == nullptr && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr
        && this->headers_ == nullptr && this->path_ == nullptr && this->query_ == nullptr && this->stream_ == nullptr; };
    // actionId Field Functions 
    bool hasActionId() const { return this->actionId_ != nullptr;};
    void deleteActionId() { this->actionId_ = nullptr;};
    inline string getActionId() const { DARABONBA_PTR_GET_DEFAULT(actionId_, "") };
    inline InvokeActionRequest& setActionId(string actionId) { DARABONBA_PTR_SET_VALUE(actionId_, actionId) };


    // actionVersion Field Functions 
    bool hasActionVersion() const { return this->actionVersion_ != nullptr;};
    void deleteActionVersion() { this->actionVersion_ = nullptr;};
    inline string getActionVersion() const { DARABONBA_PTR_GET_DEFAULT(actionVersion_, "") };
    inline InvokeActionRequest& setActionVersion(string actionVersion) { DARABONBA_PTR_SET_VALUE(actionVersion_, actionVersion) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const InvokeActionRequest::AuthConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, InvokeActionRequest::AuthConfig) };
    inline InvokeActionRequest::AuthConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, InvokeActionRequest::AuthConfig) };
    inline InvokeActionRequest& setAuthConfig(const InvokeActionRequest::AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline InvokeActionRequest& setAuthConfig(InvokeActionRequest::AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & getBody() const { DARABONBA_GET(body_) };
    Darabonba::Json & getBody() { DARABONBA_GET(body_) };
    inline InvokeActionRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline InvokeActionRequest& setBody(Darabonba::Json && body) { DARABONBA_SET_RVALUE(body_, body) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline InvokeActionRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // connectorVersion Field Functions 
    bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
    void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
    inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
    inline InvokeActionRequest& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline InvokeActionRequest& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline InvokeActionRequest& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const map<string, string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, map<string, string>) };
    inline map<string, string> getPath() { DARABONBA_PTR_GET(path_, map<string, string>) };
    inline InvokeActionRequest& setPath(const map<string, string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline InvokeActionRequest& setPath(map<string, string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const map<string, string> & getQuery() const { DARABONBA_PTR_GET_CONST(query_, map<string, string>) };
    inline map<string, string> getQuery() { DARABONBA_PTR_GET(query_, map<string, string>) };
    inline InvokeActionRequest& setQuery(const map<string, string> & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline InvokeActionRequest& setQuery(map<string, string> && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline InvokeActionRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // This parameter is required.
    shared_ptr<string> actionId_ {};
    shared_ptr<string> actionVersion_ {};
    shared_ptr<InvokeActionRequest::AuthConfig> authConfig_ {};
    Darabonba::Json body_ {};
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    shared_ptr<string> connectorVersion_ {};
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<map<string, string>> path_ {};
    shared_ptr<map<string, string>> query_ {};
    shared_ptr<bool> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
