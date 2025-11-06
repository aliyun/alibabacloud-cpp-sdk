// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAUTHCONSUMERRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAUTHCONSUMERRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayAuthConsumerResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayAuthConsumerResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayAuthConsumerResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
    };
    ListGatewayAuthConsumerResourceRequest() = default ;
    ListGatewayAuthConsumerResourceRequest(const ListGatewayAuthConsumerResourceRequest &) = default ;
    ListGatewayAuthConsumerResourceRequest(ListGatewayAuthConsumerResourceRequest &&) = default ;
    ListGatewayAuthConsumerResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayAuthConsumerResourceRequest() = default ;
    ListGatewayAuthConsumerResourceRequest& operator=(const ListGatewayAuthConsumerResourceRequest &) = default ;
    ListGatewayAuthConsumerResourceRequest& operator=(ListGatewayAuthConsumerResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->consumerId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->resourceStatus_ == nullptr
        && return this->routeName_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListGatewayAuthConsumerResourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline int64_t consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, 0L) };
    inline ListGatewayAuthConsumerResourceRequest& setConsumerId(int64_t consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayAuthConsumerResourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline string pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
    inline ListGatewayAuthConsumerResourceRequest& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListGatewayAuthConsumerResourceRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline bool resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, false) };
    inline ListGatewayAuthConsumerResourceRequest& setResourceStatus(bool resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline ListGatewayAuthConsumerResourceRequest& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the consumer.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> consumerId_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageNum_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The resource authorization status. Valid values:
    // 
    // *   true: enabled
    // *   false: disabled
    std::shared_ptr<bool> resourceStatus_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> routeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
