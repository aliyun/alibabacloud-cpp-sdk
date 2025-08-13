// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DeleteSlb, deleteSlb_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DeleteSlb, deleteSlb_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    DeleteGatewayRequest() = default ;
    DeleteGatewayRequest(const DeleteGatewayRequest &) = default ;
    DeleteGatewayRequest(DeleteGatewayRequest &&) = default ;
    DeleteGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayRequest() = default ;
    DeleteGatewayRequest& operator=(const DeleteGatewayRequest &) = default ;
    DeleteGatewayRequest& operator=(DeleteGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->deleteSlb_ != nullptr && this->gatewayUniqueId_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeleteGatewayRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // deleteSlb Field Functions 
    bool hasDeleteSlb() const { return this->deleteSlb_ != nullptr;};
    void deleteDeleteSlb() { this->deleteSlb_ = nullptr;};
    inline bool deleteSlb() const { DARABONBA_PTR_GET_DEFAULT(deleteSlb_, false) };
    inline DeleteGatewayRequest& setDeleteSlb(bool deleteSlb) { DARABONBA_PTR_SET_VALUE(deleteSlb_, deleteSlb) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline DeleteGatewayRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Specifies whether to delete the SLB instance purchased for the gateway when you delete the gateway.
    std::shared_ptr<bool> deleteSlb_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
