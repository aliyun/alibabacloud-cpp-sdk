// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConnectionResponseBody() = default ;
    GetConnectionResponseBody(const GetConnectionResponseBody &) = default ;
    GetConnectionResponseBody(GetConnectionResponseBody &&) = default ;
    GetConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBody() = default ;
    GetConnectionResponseBody& operator=(const GetConnectionResponseBody &) = default ;
    GetConnectionResponseBody& operator=(GetConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Connections, connections_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Connections, connections_);
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
      class Connections : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Connections& obj) { 
          DARABONBA_PTR_TO_JSON(AuthParameters, authParameters_);
          DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(NetworkParameters, networkParameters_);
        };
        friend void from_json(const Darabonba::Json& j, Connections& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthParameters, authParameters_);
          DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(NetworkParameters, networkParameters_);
        };
        Connections() = default ;
        Connections(const Connections &) = default ;
        Connections(Connections &&) = default ;
        Connections(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Connections() = default ;
        Connections& operator=(const Connections &) = default ;
        Connections& operator=(Connections &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NetworkParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkParameters& obj) { 
            DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
            DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
            DARABONBA_PTR_TO_JSON(VswitcheId, vswitcheId_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
            DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
            DARABONBA_PTR_FROM_JSON(VswitcheId, vswitcheId_);
          };
          NetworkParameters() = default ;
          NetworkParameters(const NetworkParameters &) = default ;
          NetworkParameters(NetworkParameters &&) = default ;
          NetworkParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkParameters() = default ;
          NetworkParameters& operator=(const NetworkParameters &) = default ;
          NetworkParameters& operator=(NetworkParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->networkType_ == nullptr
        && this->securityGroupId_ == nullptr && this->vpcId_ == nullptr && this->vswitcheId_ == nullptr; };
          // networkType Field Functions 
          bool hasNetworkType() const { return this->networkType_ != nullptr;};
          void deleteNetworkType() { this->networkType_ = nullptr;};
          inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
          inline NetworkParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline NetworkParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline NetworkParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          // vswitcheId Field Functions 
          bool hasVswitcheId() const { return this->vswitcheId_ != nullptr;};
          void deleteVswitcheId() { this->vswitcheId_ = nullptr;};
          inline string getVswitcheId() const { DARABONBA_PTR_GET_DEFAULT(vswitcheId_, "") };
          inline NetworkParameters& setVswitcheId(string vswitcheId) { DARABONBA_PTR_SET_VALUE(vswitcheId_, vswitcheId) };


        protected:
          // *   PublicNetwork: the Internet.
          // *   PrivateNetwork: virtual private cloud (VPC).
          shared_ptr<string> networkType_ {};
          // The security group ID.
          shared_ptr<string> securityGroupId_ {};
          // The VPC ID.
          shared_ptr<string> vpcId_ {};
          // The vSwitch ID.
          shared_ptr<string> vswitcheId_ {};
        };

        class AuthParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthParameters& obj) { 
            DARABONBA_PTR_TO_JSON(ApiKeyAuthParameters, apiKeyAuthParameters_);
            DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
            DARABONBA_PTR_TO_JSON(BasicAuthParameters, basicAuthParameters_);
            DARABONBA_PTR_TO_JSON(OAuthParameters, OAuthParameters_);
          };
          friend void from_json(const Darabonba::Json& j, AuthParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(ApiKeyAuthParameters, apiKeyAuthParameters_);
            DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
            DARABONBA_PTR_FROM_JSON(BasicAuthParameters, basicAuthParameters_);
            DARABONBA_PTR_FROM_JSON(OAuthParameters, OAuthParameters_);
          };
          AuthParameters() = default ;
          AuthParameters(const AuthParameters &) = default ;
          AuthParameters(AuthParameters &&) = default ;
          AuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthParameters() = default ;
          AuthParameters& operator=(const AuthParameters &) = default ;
          AuthParameters& operator=(AuthParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OAuthParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OAuthParameters& obj) { 
              DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
              DARABONBA_PTR_TO_JSON(ClientParameters, clientParameters_);
              DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
              DARABONBA_PTR_TO_JSON(OAuthHttpParameters, OAuthHttpParameters_);
            };
            friend void from_json(const Darabonba::Json& j, OAuthParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
              DARABONBA_PTR_FROM_JSON(ClientParameters, clientParameters_);
              DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
              DARABONBA_PTR_FROM_JSON(OAuthHttpParameters, OAuthHttpParameters_);
            };
            OAuthParameters() = default ;
            OAuthParameters(const OAuthParameters &) = default ;
            OAuthParameters(OAuthParameters &&) = default ;
            OAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OAuthParameters() = default ;
            OAuthParameters& operator=(const OAuthParameters &) = default ;
            OAuthParameters& operator=(OAuthParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OAuthHttpParameters : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OAuthHttpParameters& obj) { 
                DARABONBA_PTR_TO_JSON(BodyParameters, bodyParameters_);
                DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
                DARABONBA_PTR_TO_JSON(QueryStringParameters, queryStringParameters_);
              };
              friend void from_json(const Darabonba::Json& j, OAuthHttpParameters& obj) { 
                DARABONBA_PTR_FROM_JSON(BodyParameters, bodyParameters_);
                DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
                DARABONBA_PTR_FROM_JSON(QueryStringParameters, queryStringParameters_);
              };
              OAuthHttpParameters() = default ;
              OAuthHttpParameters(const OAuthHttpParameters &) = default ;
              OAuthHttpParameters(OAuthHttpParameters &&) = default ;
              OAuthHttpParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OAuthHttpParameters() = default ;
              OAuthHttpParameters& operator=(const OAuthHttpParameters &) = default ;
              OAuthHttpParameters& operator=(OAuthHttpParameters &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class QueryStringParameters : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const QueryStringParameters& obj) { 
                  DARABONBA_PTR_TO_JSON(IsValueSecret, isValueSecret_);
                  DARABONBA_PTR_TO_JSON(Key, key_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, QueryStringParameters& obj) { 
                  DARABONBA_PTR_FROM_JSON(IsValueSecret, isValueSecret_);
                  DARABONBA_PTR_FROM_JSON(Key, key_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                QueryStringParameters() = default ;
                QueryStringParameters(const QueryStringParameters &) = default ;
                QueryStringParameters(QueryStringParameters &&) = default ;
                QueryStringParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~QueryStringParameters() = default ;
                QueryStringParameters& operator=(const QueryStringParameters &) = default ;
                QueryStringParameters& operator=(QueryStringParameters &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->isValueSecret_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
                // isValueSecret Field Functions 
                bool hasIsValueSecret() const { return this->isValueSecret_ != nullptr;};
                void deleteIsValueSecret() { this->isValueSecret_ = nullptr;};
                inline string getIsValueSecret() const { DARABONBA_PTR_GET_DEFAULT(isValueSecret_, "") };
                inline QueryStringParameters& setIsValueSecret(string isValueSecret) { DARABONBA_PTR_SET_VALUE(isValueSecret_, isValueSecret) };


                // key Field Functions 
                bool hasKey() const { return this->key_ != nullptr;};
                void deleteKey() { this->key_ = nullptr;};
                inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
                inline QueryStringParameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline QueryStringParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                // Indicates whether authentication is enabled.
                shared_ptr<string> isValueSecret_ {};
                // The key of the request path.
                shared_ptr<string> key_ {};
                // The value of the request path.
                shared_ptr<string> value_ {};
              };

              class HeaderParameters : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const HeaderParameters& obj) { 
                  DARABONBA_PTR_TO_JSON(IsValueSecret, isValueSecret_);
                  DARABONBA_PTR_TO_JSON(Key, key_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, HeaderParameters& obj) { 
                  DARABONBA_PTR_FROM_JSON(IsValueSecret, isValueSecret_);
                  DARABONBA_PTR_FROM_JSON(Key, key_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                HeaderParameters() = default ;
                HeaderParameters(const HeaderParameters &) = default ;
                HeaderParameters(HeaderParameters &&) = default ;
                HeaderParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~HeaderParameters() = default ;
                HeaderParameters& operator=(const HeaderParameters &) = default ;
                HeaderParameters& operator=(HeaderParameters &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->isValueSecret_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
                // isValueSecret Field Functions 
                bool hasIsValueSecret() const { return this->isValueSecret_ != nullptr;};
                void deleteIsValueSecret() { this->isValueSecret_ = nullptr;};
                inline string getIsValueSecret() const { DARABONBA_PTR_GET_DEFAULT(isValueSecret_, "") };
                inline HeaderParameters& setIsValueSecret(string isValueSecret) { DARABONBA_PTR_SET_VALUE(isValueSecret_, isValueSecret) };


                // key Field Functions 
                bool hasKey() const { return this->key_ != nullptr;};
                void deleteKey() { this->key_ = nullptr;};
                inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
                inline HeaderParameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline HeaderParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                // Indicates whether authentication is enabled.
                shared_ptr<string> isValueSecret_ {};
                // The key of the request header.
                shared_ptr<string> key_ {};
                // The value of the request header.
                shared_ptr<string> value_ {};
              };

              class BodyParameters : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const BodyParameters& obj) { 
                  DARABONBA_PTR_TO_JSON(IsValueSecret, isValueSecret_);
                  DARABONBA_PTR_TO_JSON(Key, key_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, BodyParameters& obj) { 
                  DARABONBA_PTR_FROM_JSON(IsValueSecret, isValueSecret_);
                  DARABONBA_PTR_FROM_JSON(Key, key_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                BodyParameters() = default ;
                BodyParameters(const BodyParameters &) = default ;
                BodyParameters(BodyParameters &&) = default ;
                BodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~BodyParameters() = default ;
                BodyParameters& operator=(const BodyParameters &) = default ;
                BodyParameters& operator=(BodyParameters &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->isValueSecret_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
                // isValueSecret Field Functions 
                bool hasIsValueSecret() const { return this->isValueSecret_ != nullptr;};
                void deleteIsValueSecret() { this->isValueSecret_ = nullptr;};
                inline string getIsValueSecret() const { DARABONBA_PTR_GET_DEFAULT(isValueSecret_, "") };
                inline BodyParameters& setIsValueSecret(string isValueSecret) { DARABONBA_PTR_SET_VALUE(isValueSecret_, isValueSecret) };


                // key Field Functions 
                bool hasKey() const { return this->key_ != nullptr;};
                void deleteKey() { this->key_ = nullptr;};
                inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
                inline BodyParameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline BodyParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                // Indicates whether authentication is enabled.
                shared_ptr<string> isValueSecret_ {};
                // The key of the request body.
                shared_ptr<string> key_ {};
                // The value of the request body.
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->bodyParameters_ == nullptr
        && this->headerParameters_ == nullptr && this->queryStringParameters_ == nullptr; };
              // bodyParameters Field Functions 
              bool hasBodyParameters() const { return this->bodyParameters_ != nullptr;};
              void deleteBodyParameters() { this->bodyParameters_ = nullptr;};
              inline const vector<OAuthHttpParameters::BodyParameters> & getBodyParameters() const { DARABONBA_PTR_GET_CONST(bodyParameters_, vector<OAuthHttpParameters::BodyParameters>) };
              inline vector<OAuthHttpParameters::BodyParameters> getBodyParameters() { DARABONBA_PTR_GET(bodyParameters_, vector<OAuthHttpParameters::BodyParameters>) };
              inline OAuthHttpParameters& setBodyParameters(const vector<OAuthHttpParameters::BodyParameters> & bodyParameters) { DARABONBA_PTR_SET_VALUE(bodyParameters_, bodyParameters) };
              inline OAuthHttpParameters& setBodyParameters(vector<OAuthHttpParameters::BodyParameters> && bodyParameters) { DARABONBA_PTR_SET_RVALUE(bodyParameters_, bodyParameters) };


              // headerParameters Field Functions 
              bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
              void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
              inline const vector<OAuthHttpParameters::HeaderParameters> & getHeaderParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, vector<OAuthHttpParameters::HeaderParameters>) };
              inline vector<OAuthHttpParameters::HeaderParameters> getHeaderParameters() { DARABONBA_PTR_GET(headerParameters_, vector<OAuthHttpParameters::HeaderParameters>) };
              inline OAuthHttpParameters& setHeaderParameters(const vector<OAuthHttpParameters::HeaderParameters> & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
              inline OAuthHttpParameters& setHeaderParameters(vector<OAuthHttpParameters::HeaderParameters> && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


              // queryStringParameters Field Functions 
              bool hasQueryStringParameters() const { return this->queryStringParameters_ != nullptr;};
              void deleteQueryStringParameters() { this->queryStringParameters_ = nullptr;};
              inline const vector<OAuthHttpParameters::QueryStringParameters> & getQueryStringParameters() const { DARABONBA_PTR_GET_CONST(queryStringParameters_, vector<OAuthHttpParameters::QueryStringParameters>) };
              inline vector<OAuthHttpParameters::QueryStringParameters> getQueryStringParameters() { DARABONBA_PTR_GET(queryStringParameters_, vector<OAuthHttpParameters::QueryStringParameters>) };
              inline OAuthHttpParameters& setQueryStringParameters(const vector<OAuthHttpParameters::QueryStringParameters> & queryStringParameters) { DARABONBA_PTR_SET_VALUE(queryStringParameters_, queryStringParameters) };
              inline OAuthHttpParameters& setQueryStringParameters(vector<OAuthHttpParameters::QueryStringParameters> && queryStringParameters) { DARABONBA_PTR_SET_RVALUE(queryStringParameters_, queryStringParameters) };


            protected:
              // The information about the request body.
              shared_ptr<vector<OAuthHttpParameters::BodyParameters>> bodyParameters_ {};
              // The information about the request header.
              shared_ptr<vector<OAuthHttpParameters::HeaderParameters>> headerParameters_ {};
              // The information about the request path.
              shared_ptr<vector<OAuthHttpParameters::QueryStringParameters>> queryStringParameters_ {};
            };

            class ClientParameters : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ClientParameters& obj) { 
                DARABONBA_PTR_TO_JSON(ClientID, clientID_);
                DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
              };
              friend void from_json(const Darabonba::Json& j, ClientParameters& obj) { 
                DARABONBA_PTR_FROM_JSON(ClientID, clientID_);
                DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
              };
              ClientParameters() = default ;
              ClientParameters(const ClientParameters &) = default ;
              ClientParameters(ClientParameters &&) = default ;
              ClientParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ClientParameters() = default ;
              ClientParameters& operator=(const ClientParameters &) = default ;
              ClientParameters& operator=(ClientParameters &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->clientID_ == nullptr
        && this->clientSecret_ == nullptr; };
              // clientID Field Functions 
              bool hasClientID() const { return this->clientID_ != nullptr;};
              void deleteClientID() { this->clientID_ = nullptr;};
              inline string getClientID() const { DARABONBA_PTR_GET_DEFAULT(clientID_, "") };
              inline ClientParameters& setClientID(string clientID) { DARABONBA_PTR_SET_VALUE(clientID_, clientID) };


              // clientSecret Field Functions 
              bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
              void deleteClientSecret() { this->clientSecret_ = nullptr;};
              inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
              inline ClientParameters& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


            protected:
              // The client ID.
              shared_ptr<string> clientID_ {};
              // The AccessKey secret of the client.
              shared_ptr<string> clientSecret_ {};
            };

            virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && this->clientParameters_ == nullptr && this->httpMethod_ == nullptr && this->OAuthHttpParameters_ == nullptr; };
            // authorizationEndpoint Field Functions 
            bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
            void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
            inline string getAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
            inline OAuthParameters& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


            // clientParameters Field Functions 
            bool hasClientParameters() const { return this->clientParameters_ != nullptr;};
            void deleteClientParameters() { this->clientParameters_ = nullptr;};
            inline const OAuthParameters::ClientParameters & getClientParameters() const { DARABONBA_PTR_GET_CONST(clientParameters_, OAuthParameters::ClientParameters) };
            inline OAuthParameters::ClientParameters getClientParameters() { DARABONBA_PTR_GET(clientParameters_, OAuthParameters::ClientParameters) };
            inline OAuthParameters& setClientParameters(const OAuthParameters::ClientParameters & clientParameters) { DARABONBA_PTR_SET_VALUE(clientParameters_, clientParameters) };
            inline OAuthParameters& setClientParameters(OAuthParameters::ClientParameters && clientParameters) { DARABONBA_PTR_SET_RVALUE(clientParameters_, clientParameters) };


            // httpMethod Field Functions 
            bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
            void deleteHttpMethod() { this->httpMethod_ = nullptr;};
            inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
            inline OAuthParameters& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


            // OAuthHttpParameters Field Functions 
            bool hasOAuthHttpParameters() const { return this->OAuthHttpParameters_ != nullptr;};
            void deleteOAuthHttpParameters() { this->OAuthHttpParameters_ = nullptr;};
            inline const OAuthParameters::OAuthHttpParameters & getOAuthHttpParameters() const { DARABONBA_PTR_GET_CONST(OAuthHttpParameters_, OAuthParameters::OAuthHttpParameters) };
            inline OAuthParameters::OAuthHttpParameters getOAuthHttpParameters() { DARABONBA_PTR_GET(OAuthHttpParameters_, OAuthParameters::OAuthHttpParameters) };
            inline OAuthParameters& setOAuthHttpParameters(const OAuthParameters::OAuthHttpParameters & oAuthHttpParameters) { DARABONBA_PTR_SET_VALUE(OAuthHttpParameters_, oAuthHttpParameters) };
            inline OAuthParameters& setOAuthHttpParameters(OAuthParameters::OAuthHttpParameters && oAuthHttpParameters) { DARABONBA_PTR_SET_RVALUE(OAuthHttpParameters_, oAuthHttpParameters) };


          protected:
            // The endpoint that is used to obtain the OAuth token.
            shared_ptr<string> authorizationEndpoint_ {};
            // The information about the client.
            shared_ptr<OAuthParameters::ClientParameters> clientParameters_ {};
            // The HTTP request method. Valid values:
            // 
            // *   GET
            // *   POST
            // *   HEAD
            shared_ptr<string> httpMethod_ {};
            // The request parameters of OAuth authentication.
            shared_ptr<OAuthParameters::OAuthHttpParameters> OAuthHttpParameters_ {};
          };

          class BasicAuthParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BasicAuthParameters& obj) { 
              DARABONBA_PTR_TO_JSON(Password, password_);
              DARABONBA_PTR_TO_JSON(Username, username_);
            };
            friend void from_json(const Darabonba::Json& j, BasicAuthParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(Password, password_);
              DARABONBA_PTR_FROM_JSON(Username, username_);
            };
            BasicAuthParameters() = default ;
            BasicAuthParameters(const BasicAuthParameters &) = default ;
            BasicAuthParameters(BasicAuthParameters &&) = default ;
            BasicAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BasicAuthParameters() = default ;
            BasicAuthParameters& operator=(const BasicAuthParameters &) = default ;
            BasicAuthParameters& operator=(BasicAuthParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->password_ == nullptr
        && this->username_ == nullptr; };
            // password Field Functions 
            bool hasPassword() const { return this->password_ != nullptr;};
            void deletePassword() { this->password_ = nullptr;};
            inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
            inline BasicAuthParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


            // username Field Functions 
            bool hasUsername() const { return this->username_ != nullptr;};
            void deleteUsername() { this->username_ = nullptr;};
            inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
            inline BasicAuthParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


          protected:
            // The password of basic authentication.
            shared_ptr<string> password_ {};
            // The username of basic authentication.
            shared_ptr<string> username_ {};
          };

          class ApiKeyAuthParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApiKeyAuthParameters& obj) { 
              DARABONBA_PTR_TO_JSON(ApiKeyName, apiKeyName_);
              DARABONBA_PTR_TO_JSON(ApiKeyValue, apiKeyValue_);
            };
            friend void from_json(const Darabonba::Json& j, ApiKeyAuthParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(ApiKeyName, apiKeyName_);
              DARABONBA_PTR_FROM_JSON(ApiKeyValue, apiKeyValue_);
            };
            ApiKeyAuthParameters() = default ;
            ApiKeyAuthParameters(const ApiKeyAuthParameters &) = default ;
            ApiKeyAuthParameters(ApiKeyAuthParameters &&) = default ;
            ApiKeyAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApiKeyAuthParameters() = default ;
            ApiKeyAuthParameters& operator=(const ApiKeyAuthParameters &) = default ;
            ApiKeyAuthParameters& operator=(ApiKeyAuthParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->apiKeyName_ == nullptr
        && this->apiKeyValue_ == nullptr; };
            // apiKeyName Field Functions 
            bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
            void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
            inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
            inline ApiKeyAuthParameters& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


            // apiKeyValue Field Functions 
            bool hasApiKeyValue() const { return this->apiKeyValue_ != nullptr;};
            void deleteApiKeyValue() { this->apiKeyValue_ = nullptr;};
            inline string getApiKeyValue() const { DARABONBA_PTR_GET_DEFAULT(apiKeyValue_, "") };
            inline ApiKeyAuthParameters& setApiKeyValue(string apiKeyValue) { DARABONBA_PTR_SET_VALUE(apiKeyValue_, apiKeyValue) };


          protected:
            // The key of the API key.
            shared_ptr<string> apiKeyName_ {};
            // The value of the API key.
            shared_ptr<string> apiKeyValue_ {};
          };

          virtual bool empty() const override { return this->apiKeyAuthParameters_ == nullptr
        && this->authorizationType_ == nullptr && this->basicAuthParameters_ == nullptr && this->OAuthParameters_ == nullptr; };
          // apiKeyAuthParameters Field Functions 
          bool hasApiKeyAuthParameters() const { return this->apiKeyAuthParameters_ != nullptr;};
          void deleteApiKeyAuthParameters() { this->apiKeyAuthParameters_ = nullptr;};
          inline const AuthParameters::ApiKeyAuthParameters & getApiKeyAuthParameters() const { DARABONBA_PTR_GET_CONST(apiKeyAuthParameters_, AuthParameters::ApiKeyAuthParameters) };
          inline AuthParameters::ApiKeyAuthParameters getApiKeyAuthParameters() { DARABONBA_PTR_GET(apiKeyAuthParameters_, AuthParameters::ApiKeyAuthParameters) };
          inline AuthParameters& setApiKeyAuthParameters(const AuthParameters::ApiKeyAuthParameters & apiKeyAuthParameters) { DARABONBA_PTR_SET_VALUE(apiKeyAuthParameters_, apiKeyAuthParameters) };
          inline AuthParameters& setApiKeyAuthParameters(AuthParameters::ApiKeyAuthParameters && apiKeyAuthParameters) { DARABONBA_PTR_SET_RVALUE(apiKeyAuthParameters_, apiKeyAuthParameters) };


          // authorizationType Field Functions 
          bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
          void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
          inline string getAuthorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
          inline AuthParameters& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


          // basicAuthParameters Field Functions 
          bool hasBasicAuthParameters() const { return this->basicAuthParameters_ != nullptr;};
          void deleteBasicAuthParameters() { this->basicAuthParameters_ = nullptr;};
          inline const AuthParameters::BasicAuthParameters & getBasicAuthParameters() const { DARABONBA_PTR_GET_CONST(basicAuthParameters_, AuthParameters::BasicAuthParameters) };
          inline AuthParameters::BasicAuthParameters getBasicAuthParameters() { DARABONBA_PTR_GET(basicAuthParameters_, AuthParameters::BasicAuthParameters) };
          inline AuthParameters& setBasicAuthParameters(const AuthParameters::BasicAuthParameters & basicAuthParameters) { DARABONBA_PTR_SET_VALUE(basicAuthParameters_, basicAuthParameters) };
          inline AuthParameters& setBasicAuthParameters(AuthParameters::BasicAuthParameters && basicAuthParameters) { DARABONBA_PTR_SET_RVALUE(basicAuthParameters_, basicAuthParameters) };


          // OAuthParameters Field Functions 
          bool hasOAuthParameters() const { return this->OAuthParameters_ != nullptr;};
          void deleteOAuthParameters() { this->OAuthParameters_ = nullptr;};
          inline const AuthParameters::OAuthParameters & getOAuthParameters() const { DARABONBA_PTR_GET_CONST(OAuthParameters_, AuthParameters::OAuthParameters) };
          inline AuthParameters::OAuthParameters getOAuthParameters() { DARABONBA_PTR_GET(OAuthParameters_, AuthParameters::OAuthParameters) };
          inline AuthParameters& setOAuthParameters(const AuthParameters::OAuthParameters & oAuthParameters) { DARABONBA_PTR_SET_VALUE(OAuthParameters_, oAuthParameters) };
          inline AuthParameters& setOAuthParameters(AuthParameters::OAuthParameters && oAuthParameters) { DARABONBA_PTR_SET_RVALUE(OAuthParameters_, oAuthParameters) };


        protected:
          // The information about API key authentication.
          shared_ptr<AuthParameters::ApiKeyAuthParameters> apiKeyAuthParameters_ {};
          // The authentication method. Valid values:
          // 
          // *   BASIC_AUTH: basic authentication.
          // *   API_KEY_AUTH: API key authentication.
          // *   OAUTH_AUTH: OAuth authentication.
          shared_ptr<string> authorizationType_ {};
          // The information about basic authentication.
          shared_ptr<AuthParameters::BasicAuthParameters> basicAuthParameters_ {};
          // The information about OAuth authentication.
          shared_ptr<AuthParameters::OAuthParameters> OAuthParameters_ {};
        };

        virtual bool empty() const override { return this->authParameters_ == nullptr
        && this->connectionName_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->networkParameters_ == nullptr; };
        // authParameters Field Functions 
        bool hasAuthParameters() const { return this->authParameters_ != nullptr;};
        void deleteAuthParameters() { this->authParameters_ = nullptr;};
        inline const Connections::AuthParameters & getAuthParameters() const { DARABONBA_PTR_GET_CONST(authParameters_, Connections::AuthParameters) };
        inline Connections::AuthParameters getAuthParameters() { DARABONBA_PTR_GET(authParameters_, Connections::AuthParameters) };
        inline Connections& setAuthParameters(const Connections::AuthParameters & authParameters) { DARABONBA_PTR_SET_VALUE(authParameters_, authParameters) };
        inline Connections& setAuthParameters(Connections::AuthParameters && authParameters) { DARABONBA_PTR_SET_RVALUE(authParameters_, authParameters) };


        // connectionName Field Functions 
        bool hasConnectionName() const { return this->connectionName_ != nullptr;};
        void deleteConnectionName() { this->connectionName_ = nullptr;};
        inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
        inline Connections& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Connections& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Connections& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Connections& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // networkParameters Field Functions 
        bool hasNetworkParameters() const { return this->networkParameters_ != nullptr;};
        void deleteNetworkParameters() { this->networkParameters_ = nullptr;};
        inline const Connections::NetworkParameters & getNetworkParameters() const { DARABONBA_PTR_GET_CONST(networkParameters_, Connections::NetworkParameters) };
        inline Connections::NetworkParameters getNetworkParameters() { DARABONBA_PTR_GET(networkParameters_, Connections::NetworkParameters) };
        inline Connections& setNetworkParameters(const Connections::NetworkParameters & networkParameters) { DARABONBA_PTR_SET_VALUE(networkParameters_, networkParameters) };
        inline Connections& setNetworkParameters(Connections::NetworkParameters && networkParameters) { DARABONBA_PTR_SET_RVALUE(networkParameters_, networkParameters) };


      protected:
        // The authentication methods.
        shared_ptr<Connections::AuthParameters> authParameters_ {};
        // The connection name.
        shared_ptr<string> connectionName_ {};
        // The connection description.
        shared_ptr<string> description_ {};
        // The time when the connection was created.
        shared_ptr<int64_t> gmtCreate_ {};
        // The data source ID.
        shared_ptr<int64_t> id_ {};
        // The information about the network.
        shared_ptr<Connections::NetworkParameters> networkParameters_ {};
      };

      virtual bool empty() const override { return this->connections_ == nullptr; };
      // connections Field Functions 
      bool hasConnections() const { return this->connections_ != nullptr;};
      void deleteConnections() { this->connections_ = nullptr;};
      inline const vector<Data::Connections> & getConnections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Data::Connections>) };
      inline vector<Data::Connections> getConnections() { DARABONBA_PTR_GET(connections_, vector<Data::Connections>) };
      inline Data& setConnections(const vector<Data::Connections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
      inline Data& setConnections(vector<Data::Connections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


    protected:
      // The queried connections.
      shared_ptr<vector<Data::Connections>> connections_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConnectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConnectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConnectionResponseBody::Data) };
    inline GetConnectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConnectionResponseBody::Data) };
    inline GetConnectionResponseBody& setData(const GetConnectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConnectionResponseBody& setData(GetConnectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetConnectionResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConnectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned response code. The value Success indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetConnectionResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The returned request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
