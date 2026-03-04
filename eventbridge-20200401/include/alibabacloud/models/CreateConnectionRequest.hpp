// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONREQUEST_HPP_
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
  class CreateConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthParameters, authParameters_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkParameters, networkParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthParameters, authParameters_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkParameters, networkParameters_);
    };
    CreateConnectionRequest() = default ;
    CreateConnectionRequest(const CreateConnectionRequest &) = default ;
    CreateConnectionRequest(CreateConnectionRequest &&) = default ;
    CreateConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectionRequest() = default ;
    CreateConnectionRequest& operator=(const CreateConnectionRequest &) = default ;
    CreateConnectionRequest& operator=(CreateConnectionRequest &&) = default ;
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
      // 
      // >  If you set this parameter to PrivateNetwork, you must also configure VpcId, VswitchId, and SecurityGroupId.
      // 
      // This parameter is required.
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
            // Specifies whether to enable authentication.
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
            // Specifies whether to enable authentication.
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
            // Specifies whether to enable authentication.
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
          // The parameters that are configured for the request body.
          shared_ptr<vector<OAuthHttpParameters::BodyParameters>> bodyParameters_ {};
          // The parameters that are configured for the request header.
          shared_ptr<vector<OAuthHttpParameters::HeaderParameters>> headerParameters_ {};
          // The parameters that are configured for the request path.
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
        // The endpoint of the authorized client. The endpoint can be up to 127 characters in length.
        shared_ptr<string> authorizationEndpoint_ {};
        // The parameters that are configured for the client.
        shared_ptr<OAuthParameters::ClientParameters> clientParameters_ {};
        // The HTTP request method. Valid values:
        // 
        // *   GET
        // *   POST
        // *   HEAD
        // *   DELETE
        // *   PUT
        // *   PATCH
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
        // The password for basic authentication.
        shared_ptr<string> password_ {};
        // The username for basic authentication.
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
      // The parameters that are configured for API key authentication.
      shared_ptr<AuthParameters::ApiKeyAuthParameters> apiKeyAuthParameters_ {};
      // The authentication type. Valid values:
      // 
      // *   BASIC: basic authentication. Basic authentication is a simple authentication scheme built into the HTTP protocol. When you use the HTTP protocol for communications, the authentication method that the HTTP server uses to authenticate user identities on the client is defined in the protocol. The request header is in the Authorization: Basic Base64-encoded string (`Username:Password`) format. If you use this authentication method, you must configure Username and Password.
      // *   API_KEY_AUTH: API key authentication. The request header is in the Token: Token value format. If you use this authentication method, you must configure ApiKeyName and ApiKeyValue.
      // *   OAUTH_AUTH: OAuth authentication. OAuth2.0 is an authentication mechanism. In normal cases, a system that does not use OAuth2.0 can access the resources of the server from the client. To ensure access security, access tokens are used to authenticate users in OAuth 2.0. The client must use an access token to access protected resources. This way, OAuth 2.0 protects resources from being accessed from malicious clients and improves system security. If you use this authentication method, you must configure AuthorizationEndpoint, OAuthHttpParameters, and HttpMethod.
      shared_ptr<string> authorizationType_ {};
      // The parameters that are configured for basic authentication.
      shared_ptr<AuthParameters::BasicAuthParameters> basicAuthParameters_ {};
      // The parameters that are configured for OAuth authentication.
      shared_ptr<AuthParameters::OAuthParameters> OAuthParameters_ {};
    };

    virtual bool empty() const override { return this->authParameters_ == nullptr
        && this->connectionName_ == nullptr && this->description_ == nullptr && this->networkParameters_ == nullptr; };
    // authParameters Field Functions 
    bool hasAuthParameters() const { return this->authParameters_ != nullptr;};
    void deleteAuthParameters() { this->authParameters_ = nullptr;};
    inline const CreateConnectionRequest::AuthParameters & getAuthParameters() const { DARABONBA_PTR_GET_CONST(authParameters_, CreateConnectionRequest::AuthParameters) };
    inline CreateConnectionRequest::AuthParameters getAuthParameters() { DARABONBA_PTR_GET(authParameters_, CreateConnectionRequest::AuthParameters) };
    inline CreateConnectionRequest& setAuthParameters(const CreateConnectionRequest::AuthParameters & authParameters) { DARABONBA_PTR_SET_VALUE(authParameters_, authParameters) };
    inline CreateConnectionRequest& setAuthParameters(CreateConnectionRequest::AuthParameters && authParameters) { DARABONBA_PTR_SET_RVALUE(authParameters_, authParameters) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateConnectionRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkParameters Field Functions 
    bool hasNetworkParameters() const { return this->networkParameters_ != nullptr;};
    void deleteNetworkParameters() { this->networkParameters_ = nullptr;};
    inline const CreateConnectionRequest::NetworkParameters & getNetworkParameters() const { DARABONBA_PTR_GET_CONST(networkParameters_, CreateConnectionRequest::NetworkParameters) };
    inline CreateConnectionRequest::NetworkParameters getNetworkParameters() { DARABONBA_PTR_GET(networkParameters_, CreateConnectionRequest::NetworkParameters) };
    inline CreateConnectionRequest& setNetworkParameters(const CreateConnectionRequest::NetworkParameters & networkParameters) { DARABONBA_PTR_SET_VALUE(networkParameters_, networkParameters) };
    inline CreateConnectionRequest& setNetworkParameters(CreateConnectionRequest::NetworkParameters && networkParameters) { DARABONBA_PTR_SET_RVALUE(networkParameters_, networkParameters) };


  protected:
    // The parameters that are configured for authentication.
    shared_ptr<CreateConnectionRequest::AuthParameters> authParameters_ {};
    // The name of the connection. The name must be 2 to 127 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> connectionName_ {};
    // The description of the connection. The description can be up to 255 characters in length.
    shared_ptr<string> description_ {};
    // The parameters that are configured for the network.
    // 
    // This parameter is required.
    shared_ptr<CreateConnectionRequest::NetworkParameters> networkParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
