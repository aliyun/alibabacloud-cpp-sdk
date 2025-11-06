// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERRESOURCESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERRESOURCESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayAuthConsumerResourceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayAuthConsumerResourceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayAuthConsumerResourceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
    };
    UpdateGatewayAuthConsumerResourceStatusRequest() = default ;
    UpdateGatewayAuthConsumerResourceStatusRequest(const UpdateGatewayAuthConsumerResourceStatusRequest &) = default ;
    UpdateGatewayAuthConsumerResourceStatusRequest(UpdateGatewayAuthConsumerResourceStatusRequest &&) = default ;
    UpdateGatewayAuthConsumerResourceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayAuthConsumerResourceStatusRequest() = default ;
    UpdateGatewayAuthConsumerResourceStatusRequest& operator=(const UpdateGatewayAuthConsumerResourceStatusRequest &) = default ;
    UpdateGatewayAuthConsumerResourceStatusRequest& operator=(UpdateGatewayAuthConsumerResourceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->consumerId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->idList_ == nullptr && return this->resourceStatus_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayAuthConsumerResourceStatusRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline int64_t consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, 0L) };
    inline UpdateGatewayAuthConsumerResourceStatusRequest& setConsumerId(int64_t consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayAuthConsumerResourceStatusRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline string idList() const { DARABONBA_PTR_GET_DEFAULT(idList_, "") };
    inline UpdateGatewayAuthConsumerResourceStatusRequest& setIdList(string idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline bool resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, false) };
    inline UpdateGatewayAuthConsumerResourceStatusRequest& setResourceStatus(bool resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


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
    // The list of IDs of the authorized resources that a user wants to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> idList_ = nullptr;
    // The resource authorization status. Valid values:
    // 
    // *   true: enabled
    // *   false: disabled
    // 
    // This parameter is required.
    std::shared_ptr<bool> resourceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
