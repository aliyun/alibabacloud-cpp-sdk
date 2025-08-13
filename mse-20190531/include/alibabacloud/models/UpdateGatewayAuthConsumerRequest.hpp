// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayAuthConsumerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayAuthConsumerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jwks, jwks_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyValue, keyValue_);
      DARABONBA_PTR_TO_JSON(TokenName, tokenName_);
      DARABONBA_PTR_TO_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_TO_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_TO_JSON(TokenPrefix, tokenPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayAuthConsumerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jwks, jwks_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyValue, keyValue_);
      DARABONBA_PTR_FROM_JSON(TokenName, tokenName_);
      DARABONBA_PTR_FROM_JSON(TokenPass, tokenPass_);
      DARABONBA_PTR_FROM_JSON(TokenPosition, tokenPosition_);
      DARABONBA_PTR_FROM_JSON(TokenPrefix, tokenPrefix_);
    };
    UpdateGatewayAuthConsumerRequest() = default ;
    UpdateGatewayAuthConsumerRequest(const UpdateGatewayAuthConsumerRequest &) = default ;
    UpdateGatewayAuthConsumerRequest(UpdateGatewayAuthConsumerRequest &&) = default ;
    UpdateGatewayAuthConsumerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayAuthConsumerRequest() = default ;
    UpdateGatewayAuthConsumerRequest& operator=(const UpdateGatewayAuthConsumerRequest &) = default ;
    UpdateGatewayAuthConsumerRequest& operator=(UpdateGatewayAuthConsumerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->description_ != nullptr && this->encodeType_ != nullptr && this->gatewayUniqueId_ != nullptr && this->id_ != nullptr && this->jwks_ != nullptr
        && this->keyName_ != nullptr && this->keyValue_ != nullptr && this->tokenName_ != nullptr && this->tokenPass_ != nullptr && this->tokenPosition_ != nullptr
        && this->tokenPrefix_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayAuthConsumerRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateGatewayAuthConsumerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline UpdateGatewayAuthConsumerRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayAuthConsumerRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayAuthConsumerRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string jwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline UpdateGatewayAuthConsumerRequest& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline UpdateGatewayAuthConsumerRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyValue Field Functions 
    bool hasKeyValue() const { return this->keyValue_ != nullptr;};
    void deleteKeyValue() { this->keyValue_ = nullptr;};
    inline string keyValue() const { DARABONBA_PTR_GET_DEFAULT(keyValue_, "") };
    inline UpdateGatewayAuthConsumerRequest& setKeyValue(string keyValue) { DARABONBA_PTR_SET_VALUE(keyValue_, keyValue) };


    // tokenName Field Functions 
    bool hasTokenName() const { return this->tokenName_ != nullptr;};
    void deleteTokenName() { this->tokenName_ = nullptr;};
    inline string tokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
    inline UpdateGatewayAuthConsumerRequest& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


    // tokenPass Field Functions 
    bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
    void deleteTokenPass() { this->tokenPass_ = nullptr;};
    inline bool tokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
    inline UpdateGatewayAuthConsumerRequest& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


    // tokenPosition Field Functions 
    bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
    void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
    inline string tokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
    inline UpdateGatewayAuthConsumerRequest& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


    // tokenPrefix Field Functions 
    bool hasTokenPrefix() const { return this->tokenPrefix_ != nullptr;};
    void deleteTokenPrefix() { this->tokenPrefix_ = nullptr;};
    inline string tokenPrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenPrefix_, "") };
    inline UpdateGatewayAuthConsumerRequest& setTokenPrefix(string tokenPrefix) { DARABONBA_PTR_SET_VALUE(tokenPrefix_, tokenPrefix) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The description of the consumer.
    std::shared_ptr<string> description_ = nullptr;
    // The encryption type. Valid values:
    // 
    // *   RSA
    // *   OCT
    std::shared_ptr<string> encodeType_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the consumer.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The JWT public key. The JSON format is supported.
    std::shared_ptr<string> jwks_ = nullptr;
    // The name of the key used for JWT-based identity authentication.
    std::shared_ptr<string> keyName_ = nullptr;
    // The value of the key used for JWT-based identity authentication.
    std::shared_ptr<string> keyValue_ = nullptr;
    // The names of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
    std::shared_ptr<string> tokenName_ = nullptr;
    // Specifies whether to enable pass-through.
    std::shared_ptr<bool> tokenPass_ = nullptr;
    // The positions of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
    std::shared_ptr<string> tokenPosition_ = nullptr;
    // The prefixes of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
    std::shared_ptr<string> tokenPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
