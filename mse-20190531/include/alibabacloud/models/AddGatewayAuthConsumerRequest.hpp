// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYAUTHCONSUMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYAUTHCONSUMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayAuthConsumerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayAuthConsumerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Jwks, jwks_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyValue, keyValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
      DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_TO_JSON(TokenPrefix, tokenPrefix_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayAuthConsumerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Jwks, jwks_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyValue, keyValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TokenName, tokenName_);
      DARABONBA_PTR_FROM_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_FROM_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_FROM_JSON(TokenPrefix, tokenPrefix_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddGatewayAuthConsumerRequest() = default ;
    AddGatewayAuthConsumerRequest(const AddGatewayAuthConsumerRequest &) = default ;
    AddGatewayAuthConsumerRequest(AddGatewayAuthConsumerRequest &&) = default ;
    AddGatewayAuthConsumerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayAuthConsumerRequest() = default ;
    AddGatewayAuthConsumerRequest& operator=(const AddGatewayAuthConsumerRequest &) = default ;
    AddGatewayAuthConsumerRequest& operator=(AddGatewayAuthConsumerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->description_ == nullptr && this->encodeType_ == nullptr && this->gatewayUniqueId_ == nullptr && this->jwks_ == nullptr && this->keyName_ == nullptr
        && this->keyValue_ == nullptr && this->name_ == nullptr && this->tokenName_ == nullptr && this->tokenPass_ == nullptr && this->tokenPosition_ == nullptr
        && this->tokenPrefix_ == nullptr && this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewayAuthConsumerRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddGatewayAuthConsumerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline AddGatewayAuthConsumerRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewayAuthConsumerRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string getJwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline AddGatewayAuthConsumerRequest& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline AddGatewayAuthConsumerRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyValue Field Functions 
    bool hasKeyValue() const { return this->keyValue_ != nullptr;};
    void deleteKeyValue() { this->keyValue_ = nullptr;};
    inline string getKeyValue() const { DARABONBA_PTR_GET_DEFAULT(keyValue_, "") };
    inline AddGatewayAuthConsumerRequest& setKeyValue(string keyValue) { DARABONBA_PTR_SET_VALUE(keyValue_, keyValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayAuthConsumerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tokenName Field Functions 
    bool hasTokenName() const { return this->tokenName_ != nullptr;};
    void deleteTokenName() { this->tokenName_ = nullptr;};
    inline string getTokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
    inline AddGatewayAuthConsumerRequest& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


    // tokenPass Field Functions 
    bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
    void deleteTokenPass() { this->tokenPass_ = nullptr;};
    inline bool getTokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
    inline AddGatewayAuthConsumerRequest& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


    // tokenPosition Field Functions 
    bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
    void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
    inline string getTokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
    inline AddGatewayAuthConsumerRequest& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


    // tokenPrefix Field Functions 
    bool hasTokenPrefix() const { return this->tokenPrefix_ != nullptr;};
    void deleteTokenPrefix() { this->tokenPrefix_ = nullptr;};
    inline string getTokenPrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenPrefix_, "") };
    inline AddGatewayAuthConsumerRequest& setTokenPrefix(string tokenPrefix) { DARABONBA_PTR_SET_VALUE(tokenPrefix_, tokenPrefix) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGatewayAuthConsumerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The description of the consumer.
    shared_ptr<string> description_ {};
    // The encryption type. Valid values:
    // 
    // *   RSA
    // *   OCT
    shared_ptr<string> encodeType_ {};
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
    // The JWT public key. The JSON format is supported.
    shared_ptr<string> jwks_ {};
    // The name of the key used for JWT-based identity authentication.
    shared_ptr<string> keyName_ {};
    // The value of the key used for JWT-based identity authentication.
    shared_ptr<string> keyValue_ {};
    // The name of the consumer.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
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
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
