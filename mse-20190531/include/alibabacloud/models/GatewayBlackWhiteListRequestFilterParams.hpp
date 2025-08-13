// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTREQUESTFILTERPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTREQUESTFILTERPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GatewayBlackWhiteListRequestFilterParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayBlackWhiteListRequestFilterParams& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SearchContent, searchContent_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayBlackWhiteListRequestFilterParams& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SearchContent, searchContent_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GatewayBlackWhiteListRequestFilterParams() = default ;
    GatewayBlackWhiteListRequestFilterParams(const GatewayBlackWhiteListRequestFilterParams &) = default ;
    GatewayBlackWhiteListRequestFilterParams(GatewayBlackWhiteListRequestFilterParams &&) = default ;
    GatewayBlackWhiteListRequestFilterParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayBlackWhiteListRequestFilterParams() = default ;
    GatewayBlackWhiteListRequestFilterParams& operator=(const GatewayBlackWhiteListRequestFilterParams &) = default ;
    GatewayBlackWhiteListRequestFilterParams& operator=(GatewayBlackWhiteListRequestFilterParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayId_ != nullptr
        && this->gatewayUniqueId_ != nullptr && this->isWhite_ != nullptr && this->resourceType_ != nullptr && this->searchContent_ != nullptr && this->searchType_ != nullptr
        && this->type_ != nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline GatewayBlackWhiteListRequestFilterParams& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GatewayBlackWhiteListRequestFilterParams& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool isWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline GatewayBlackWhiteListRequestFilterParams& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GatewayBlackWhiteListRequestFilterParams& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // searchContent Field Functions 
    bool hasSearchContent() const { return this->searchContent_ != nullptr;};
    void deleteSearchContent() { this->searchContent_ = nullptr;};
    inline string searchContent() const { DARABONBA_PTR_GET_DEFAULT(searchContent_, "") };
    inline GatewayBlackWhiteListRequestFilterParams& setSearchContent(string searchContent) { DARABONBA_PTR_SET_VALUE(searchContent_, searchContent) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline GatewayBlackWhiteListRequestFilterParams& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GatewayBlackWhiteListRequestFilterParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The gateway ID.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway. If this parameter is used together with the GatewayId parameter, the value of the GatewayId parameter is used.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // This parameter is unavailable for public use.
    std::shared_ptr<bool> isWhite_ = nullptr;
    // This parameter is unavailable for public use.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The content that you want to query.
    std::shared_ptr<string> searchContent_ = nullptr;
    // The query type. Valid values:
    // 
    // *   ROUTE: The list is queried by route. If the value of this parameter is ROUTE, set the SearchContent parameter to the route name.
    // *   DOMAIN: The list is queried by domain name. If the value of this parameter is DOMAIN, set the SearchContent parameter to the domain name.
    // *   IP: The list is queried by specified IP address. If the value of this parameter is IP, set the SearchContent parameter to the IP address.
    std::shared_ptr<string> searchType_ = nullptr;
    // This parameter is unavailable for public use.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
