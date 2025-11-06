// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBLACKWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBLACKWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetBlackWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBlackWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetBlackWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetBlackWhiteListRequest() = default ;
    GetBlackWhiteListRequest(const GetBlackWhiteListRequest &) = default ;
    GetBlackWhiteListRequest(GetBlackWhiteListRequest &&) = default ;
    GetBlackWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBlackWhiteListRequest() = default ;
    GetBlackWhiteListRequest& operator=(const GetBlackWhiteListRequest &) = default ;
    GetBlackWhiteListRequest& operator=(GetBlackWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->isWhite_ == nullptr && return this->resourceType_ == nullptr && return this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetBlackWhiteListRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetBlackWhiteListRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool isWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline GetBlackWhiteListRequest& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetBlackWhiteListRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetBlackWhiteListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // Specifies whether to enable the whitelist.
    std::shared_ptr<bool> isWhite_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
