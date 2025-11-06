// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateGatewayAuthConsumerResourceRequestResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayAuthConsumerResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayAuthConsumerResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayAuthConsumerResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
    };
    UpdateGatewayAuthConsumerResourceRequest() = default ;
    UpdateGatewayAuthConsumerResourceRequest(const UpdateGatewayAuthConsumerResourceRequest &) = default ;
    UpdateGatewayAuthConsumerResourceRequest(UpdateGatewayAuthConsumerResourceRequest &&) = default ;
    UpdateGatewayAuthConsumerResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayAuthConsumerResourceRequest() = default ;
    UpdateGatewayAuthConsumerResourceRequest& operator=(const UpdateGatewayAuthConsumerResourceRequest &) = default ;
    UpdateGatewayAuthConsumerResourceRequest& operator=(UpdateGatewayAuthConsumerResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->consumerId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->resourceList_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayAuthConsumerResourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline int64_t consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, 0L) };
    inline UpdateGatewayAuthConsumerResourceRequest& setConsumerId(int64_t consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayAuthConsumerResourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<UpdateGatewayAuthConsumerResourceRequestResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<UpdateGatewayAuthConsumerResourceRequestResourceList>) };
    inline vector<UpdateGatewayAuthConsumerResourceRequestResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<UpdateGatewayAuthConsumerResourceRequestResourceList>) };
    inline UpdateGatewayAuthConsumerResourceRequest& setResourceList(const vector<UpdateGatewayAuthConsumerResourceRequestResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline UpdateGatewayAuthConsumerResourceRequest& setResourceList(vector<UpdateGatewayAuthConsumerResourceRequestResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The gateway authentication consumer ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> consumerId_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The gateway authentication consumer ID.
    std::shared_ptr<vector<UpdateGatewayAuthConsumerResourceRequestResourceList>> resourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
