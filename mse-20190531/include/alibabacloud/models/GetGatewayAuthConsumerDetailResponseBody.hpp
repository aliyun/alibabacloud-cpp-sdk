// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYAUTHCONSUMERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYAUTHCONSUMERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayAuthConsumerDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayAuthConsumerDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayAuthConsumerDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetGatewayAuthConsumerDetailResponseBody() = default ;
    GetGatewayAuthConsumerDetailResponseBody(const GetGatewayAuthConsumerDetailResponseBody &) = default ;
    GetGatewayAuthConsumerDetailResponseBody(GetGatewayAuthConsumerDetailResponseBody &&) = default ;
    GetGatewayAuthConsumerDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayAuthConsumerDetailResponseBody() = default ;
    GetGatewayAuthConsumerDetailResponseBody& operator=(const GetGatewayAuthConsumerDetailResponseBody &) = default ;
    GetGatewayAuthConsumerDetailResponseBody& operator=(GetGatewayAuthConsumerDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumerStatus, consumerStatus_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Jwks, jwks_);
        DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        DARABONBA_PTR_TO_JSON(KeyValue, keyValue_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
        DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
        DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
        DARABONBA_PTR_TO_JSON(TokenPrefix, tokenPrefix_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumerStatus, consumerStatus_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Jwks, jwks_);
        DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        DARABONBA_PTR_FROM_JSON(KeyValue, keyValue_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_FROM_JSON(TokenName, tokenName_);
        DARABONBA_PTR_FROM_JSON(TokenPass, tokenPass_);
        DARABONBA_PTR_FROM_JSON(TokenPosition, tokenPosition_);
        DARABONBA_PTR_FROM_JSON(TokenPrefix, tokenPrefix_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      class ResourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
          DARABONBA_PTR_TO_JSON(RouteId, routeId_);
          DARABONBA_PTR_TO_JSON(RouteName, routeName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
          DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
          DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
        };
        ResourceList() = default ;
        ResourceList(const ResourceList &) = default ;
        ResourceList(ResourceList &&) = default ;
        ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceList() = default ;
        ResourceList& operator=(const ResourceList &) = default ;
        ResourceList& operator=(ResourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->resourceStatus_ == nullptr
        && this->routeId_ == nullptr && this->routeName_ == nullptr; };
        // consumerId Field Functions 
        bool hasConsumerId() const { return this->consumerId_ != nullptr;};
        void deleteConsumerId() { this->consumerId_ = nullptr;};
        inline int64_t getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, 0L) };
        inline ResourceList& setConsumerId(int64_t consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline ResourceList& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResourceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResourceList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResourceList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // resourceStatus Field Functions 
        bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
        void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
        inline bool getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, false) };
        inline ResourceList& setResourceStatus(bool resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


        // routeId Field Functions 
        bool hasRouteId() const { return this->routeId_ != nullptr;};
        void deleteRouteId() { this->routeId_ = nullptr;};
        inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
        inline ResourceList& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


        // routeName Field Functions 
        bool hasRouteName() const { return this->routeName_ != nullptr;};
        void deleteRouteName() { this->routeName_ = nullptr;};
        inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
        inline ResourceList& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


      protected:
        // The consumer ID.
        shared_ptr<int64_t> consumerId_ {};
        // The unique ID of the gateway.
        shared_ptr<string> gatewayUniqueId_ {};
        // The time when the resource associated with the consumer authentication record was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the resource associated with the consumer authentication record was modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the authorized resource for the consumer.
        shared_ptr<int64_t> id_ {};
        // The resource authorization state. Valid values:
        // 
        // *   true: Resource authorization is enabled.
        // *   false: Resource authorization is disabled.
        shared_ptr<bool> resourceStatus_ {};
        // The ID of the route.
        shared_ptr<int64_t> routeId_ {};
        // The name of the route.
        shared_ptr<string> routeName_ {};
      };

      virtual bool empty() const override { return this->consumerStatus_ == nullptr
        && this->description_ == nullptr && this->encodeType_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->jwks_ == nullptr && this->keyName_ == nullptr && this->keyValue_ == nullptr && this->name_ == nullptr
        && this->primaryUser_ == nullptr && this->resourceList_ == nullptr && this->tokenName_ == nullptr && this->tokenPass_ == nullptr && this->tokenPosition_ == nullptr
        && this->tokenPrefix_ == nullptr && this->type_ == nullptr; };
      // consumerStatus Field Functions 
      bool hasConsumerStatus() const { return this->consumerStatus_ != nullptr;};
      void deleteConsumerStatus() { this->consumerStatus_ = nullptr;};
      inline bool getConsumerStatus() const { DARABONBA_PTR_GET_DEFAULT(consumerStatus_, false) };
      inline Data& setConsumerStatus(bool consumerStatus) { DARABONBA_PTR_SET_VALUE(consumerStatus_, consumerStatus) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline Data& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jwks Field Functions 
      bool hasJwks() const { return this->jwks_ != nullptr;};
      void deleteJwks() { this->jwks_ = nullptr;};
      inline string getJwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
      inline Data& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


      // keyName Field Functions 
      bool hasKeyName() const { return this->keyName_ != nullptr;};
      void deleteKeyName() { this->keyName_ = nullptr;};
      inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
      inline Data& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


      // keyValue Field Functions 
      bool hasKeyValue() const { return this->keyValue_ != nullptr;};
      void deleteKeyValue() { this->keyValue_ = nullptr;};
      inline string getKeyValue() const { DARABONBA_PTR_GET_DEFAULT(keyValue_, "") };
      inline Data& setKeyValue(string keyValue) { DARABONBA_PTR_SET_VALUE(keyValue_, keyValue) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // primaryUser Field Functions 
      bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
      void deletePrimaryUser() { this->primaryUser_ = nullptr;};
      inline string getPrimaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
      inline Data& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const vector<Data::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Data::ResourceList>) };
      inline vector<Data::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<Data::ResourceList>) };
      inline Data& setResourceList(const vector<Data::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline Data& setResourceList(vector<Data::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


      // tokenName Field Functions 
      bool hasTokenName() const { return this->tokenName_ != nullptr;};
      void deleteTokenName() { this->tokenName_ = nullptr;};
      inline string getTokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
      inline Data& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


      // tokenPass Field Functions 
      bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
      void deleteTokenPass() { this->tokenPass_ = nullptr;};
      inline bool getTokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
      inline Data& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


      // tokenPosition Field Functions 
      bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
      void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
      inline string getTokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
      inline Data& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


      // tokenPrefix Field Functions 
      bool hasTokenPrefix() const { return this->tokenPrefix_ != nullptr;};
      void deleteTokenPrefix() { this->tokenPrefix_ = nullptr;};
      inline string getTokenPrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenPrefix_, "") };
      inline Data& setTokenPrefix(string tokenPrefix) { DARABONBA_PTR_SET_VALUE(tokenPrefix_, tokenPrefix) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The status of the consumer. Valid values:
      // 
      // *   true: enabled
      // *   false: disabled
      shared_ptr<bool> consumerStatus_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The encryption type. Valid values:
      // 
      // *   RSA
      // *   OCT
      shared_ptr<string> encodeType_ {};
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The time when the consumer authentication record was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the consumer authentication record was modified.
      shared_ptr<string> gmtModified_ {};
      // The ID of the consumer.
      shared_ptr<int64_t> id_ {};
      // The JWT public key. The JSON format is supported.
      shared_ptr<string> jwks_ {};
      // The name of the key used for JWT-based identity authentication.
      shared_ptr<string> keyName_ {};
      // The value of the key used for JWT-based identity authentication.
      shared_ptr<string> keyValue_ {};
      // The name of the consumer.
      shared_ptr<string> name_ {};
      // The creator.
      shared_ptr<string> primaryUser_ {};
      // The resource list.
      shared_ptr<vector<Data::ResourceList>> resourceList_ {};
      // The names of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
      shared_ptr<string> tokenName_ {};
      // Specifies whether to enable pass-through.
      shared_ptr<bool> tokenPass_ {};
      // The positions of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
      shared_ptr<string> tokenPosition_ {};
      // The prefixes of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
      shared_ptr<string> tokenPrefix_ {};
      // The authentication type. Valid values:
      // 
      // *   JWT
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetGatewayAuthConsumerDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayAuthConsumerDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayAuthConsumerDetailResponseBody::Data) };
    inline GetGatewayAuthConsumerDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayAuthConsumerDetailResponseBody::Data) };
    inline GetGatewayAuthConsumerDetailResponseBody& setData(const GetGatewayAuthConsumerDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayAuthConsumerDetailResponseBody& setData(GetGatewayAuthConsumerDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetGatewayAuthConsumerDetailResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetGatewayAuthConsumerDetailResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetGatewayAuthConsumerDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetGatewayAuthConsumerDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayAuthConsumerDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayAuthConsumerDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetGatewayAuthConsumerDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 is returned if the request is successful.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<GetGatewayAuthConsumerDetailResponseBody::Data> data_ {};
    // The dynamic part in the error message.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // >  If the return value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the return value of the **DynamicMessage** parameter is **DtsJobId**, the specified **DtsJobId** parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error code that is returned.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
