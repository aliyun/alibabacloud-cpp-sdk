// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYAUTHCONSUMERDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYAUTHCONSUMERDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayAuthConsumerDetailResponseBodyDataResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayAuthConsumerDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayAuthConsumerDetailResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetGatewayAuthConsumerDetailResponseBodyData& obj) { 
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
    GetGatewayAuthConsumerDetailResponseBodyData() = default ;
    GetGatewayAuthConsumerDetailResponseBodyData(const GetGatewayAuthConsumerDetailResponseBodyData &) = default ;
    GetGatewayAuthConsumerDetailResponseBodyData(GetGatewayAuthConsumerDetailResponseBodyData &&) = default ;
    GetGatewayAuthConsumerDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayAuthConsumerDetailResponseBodyData() = default ;
    GetGatewayAuthConsumerDetailResponseBodyData& operator=(const GetGatewayAuthConsumerDetailResponseBodyData &) = default ;
    GetGatewayAuthConsumerDetailResponseBodyData& operator=(GetGatewayAuthConsumerDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerStatus_ != nullptr
        && this->description_ != nullptr && this->encodeType_ != nullptr && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->jwks_ != nullptr && this->keyName_ != nullptr && this->keyValue_ != nullptr && this->name_ != nullptr
        && this->primaryUser_ != nullptr && this->resourceList_ != nullptr && this->tokenName_ != nullptr && this->tokenPass_ != nullptr && this->tokenPosition_ != nullptr
        && this->tokenPrefix_ != nullptr && this->type_ != nullptr; };
    // consumerStatus Field Functions 
    bool hasConsumerStatus() const { return this->consumerStatus_ != nullptr;};
    void deleteConsumerStatus() { this->consumerStatus_ = nullptr;};
    inline bool consumerStatus() const { DARABONBA_PTR_GET_DEFAULT(consumerStatus_, false) };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setConsumerStatus(bool consumerStatus) { DARABONBA_PTR_SET_VALUE(consumerStatus_, consumerStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string jwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyValue Field Functions 
    bool hasKeyValue() const { return this->keyValue_ != nullptr;};
    void deleteKeyValue() { this->keyValue_ = nullptr;};
    inline string keyValue() const { DARABONBA_PTR_GET_DEFAULT(keyValue_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setKeyValue(string keyValue) { DARABONBA_PTR_SET_VALUE(keyValue_, keyValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryUser Field Functions 
    bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
    void deletePrimaryUser() { this->primaryUser_ = nullptr;};
    inline string primaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<Models::GetGatewayAuthConsumerDetailResponseBodyDataResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Models::GetGatewayAuthConsumerDetailResponseBodyDataResourceList>) };
    inline vector<Models::GetGatewayAuthConsumerDetailResponseBodyDataResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<Models::GetGatewayAuthConsumerDetailResponseBodyDataResourceList>) };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setResourceList(const vector<Models::GetGatewayAuthConsumerDetailResponseBodyDataResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setResourceList(vector<Models::GetGatewayAuthConsumerDetailResponseBodyDataResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // tokenName Field Functions 
    bool hasTokenName() const { return this->tokenName_ != nullptr;};
    void deleteTokenName() { this->tokenName_ = nullptr;};
    inline string tokenName() const { DARABONBA_PTR_GET_DEFAULT(tokenName_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setTokenName(string tokenName) { DARABONBA_PTR_SET_VALUE(tokenName_, tokenName) };


    // tokenPass Field Functions 
    bool hasTokenPass() const { return this->tokenPass_ != nullptr;};
    void deleteTokenPass() { this->tokenPass_ = nullptr;};
    inline bool tokenPass() const { DARABONBA_PTR_GET_DEFAULT(tokenPass_, false) };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setTokenPass(bool tokenPass) { DARABONBA_PTR_SET_VALUE(tokenPass_, tokenPass) };


    // tokenPosition Field Functions 
    bool hasTokenPosition() const { return this->tokenPosition_ != nullptr;};
    void deleteTokenPosition() { this->tokenPosition_ = nullptr;};
    inline string tokenPosition() const { DARABONBA_PTR_GET_DEFAULT(tokenPosition_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setTokenPosition(string tokenPosition) { DARABONBA_PTR_SET_VALUE(tokenPosition_, tokenPosition) };


    // tokenPrefix Field Functions 
    bool hasTokenPrefix() const { return this->tokenPrefix_ != nullptr;};
    void deleteTokenPrefix() { this->tokenPrefix_ = nullptr;};
    inline string tokenPrefix() const { DARABONBA_PTR_GET_DEFAULT(tokenPrefix_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setTokenPrefix(string tokenPrefix) { DARABONBA_PTR_SET_VALUE(tokenPrefix_, tokenPrefix) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The status of the consumer. Valid values:
    // 
    // *   true: enabled
    // *   false: disabled
    std::shared_ptr<bool> consumerStatus_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The encryption type. Valid values:
    // 
    // *   RSA
    // *   OCT
    std::shared_ptr<string> encodeType_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The time when the consumer authentication record was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the consumer authentication record was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the consumer.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The JWT public key. The JSON format is supported.
    std::shared_ptr<string> jwks_ = nullptr;
    // The name of the key used for JWT-based identity authentication.
    std::shared_ptr<string> keyName_ = nullptr;
    // The value of the key used for JWT-based identity authentication.
    std::shared_ptr<string> keyValue_ = nullptr;
    // The name of the consumer.
    std::shared_ptr<string> name_ = nullptr;
    // The creator.
    std::shared_ptr<string> primaryUser_ = nullptr;
    // The resource list.
    std::shared_ptr<vector<Models::GetGatewayAuthConsumerDetailResponseBodyDataResourceList>> resourceList_ = nullptr;
    // The names of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
    std::shared_ptr<string> tokenName_ = nullptr;
    // Specifies whether to enable pass-through.
    std::shared_ptr<bool> tokenPass_ = nullptr;
    // The positions of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
    std::shared_ptr<string> tokenPosition_ = nullptr;
    // The prefixes of the parameters that are required to verify each token. By default, each token is prefixed with Bearer and stored in the Authorization header, such as `Authorization: Bearer <Content of a token>`.
    std::shared_ptr<string> tokenPrefix_ = nullptr;
    // The authentication type. Valid values:
    // 
    // *   JWT
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
