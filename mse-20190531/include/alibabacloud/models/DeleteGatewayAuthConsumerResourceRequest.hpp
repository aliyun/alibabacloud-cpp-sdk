// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYAUTHCONSUMERRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYAUTHCONSUMERRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteGatewayAuthConsumerResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayAuthConsumerResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayAuthConsumerResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
    };
    DeleteGatewayAuthConsumerResourceRequest() = default ;
    DeleteGatewayAuthConsumerResourceRequest(const DeleteGatewayAuthConsumerResourceRequest &) = default ;
    DeleteGatewayAuthConsumerResourceRequest(DeleteGatewayAuthConsumerResourceRequest &&) = default ;
    DeleteGatewayAuthConsumerResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayAuthConsumerResourceRequest() = default ;
    DeleteGatewayAuthConsumerResourceRequest& operator=(const DeleteGatewayAuthConsumerResourceRequest &) = default ;
    DeleteGatewayAuthConsumerResourceRequest& operator=(DeleteGatewayAuthConsumerResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->consumerId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->idList_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeleteGatewayAuthConsumerResourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline int64_t consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, 0L) };
    inline DeleteGatewayAuthConsumerResourceRequest& setConsumerId(int64_t consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline DeleteGatewayAuthConsumerResourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline string idList() const { DARABONBA_PTR_GET_DEFAULT(idList_, "") };
    inline DeleteGatewayAuthConsumerResourceRequest& setIdList(string idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The consumer ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> consumerId_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The IDs of the authorized resources that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> idList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
