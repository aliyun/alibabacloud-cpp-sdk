// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayServiceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayServiceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayServiceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
    };
    UpdateGatewayServiceVersionRequest() = default ;
    UpdateGatewayServiceVersionRequest(const UpdateGatewayServiceVersionRequest &) = default ;
    UpdateGatewayServiceVersionRequest(UpdateGatewayServiceVersionRequest &&) = default ;
    UpdateGatewayServiceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayServiceVersionRequest() = default ;
    UpdateGatewayServiceVersionRequest& operator=(const UpdateGatewayServiceVersionRequest &) = default ;
    UpdateGatewayServiceVersionRequest& operator=(UpdateGatewayServiceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->serviceId_ == nullptr && this->serviceVersion_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayServiceVersionRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayServiceVersionRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline UpdateGatewayServiceVersionRequest& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline UpdateGatewayServiceVersionRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The ID of the service.
    shared_ptr<int64_t> serviceId_ {};
    // The version of the service.
    shared_ptr<string> serviceVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
