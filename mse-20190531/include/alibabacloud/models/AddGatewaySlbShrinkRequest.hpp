// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYSLBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYSLBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewaySlbShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewaySlbShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_TO_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_TO_JSON(HttpsVServerGroupId, httpsVServerGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceWeight, serviceWeight_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServiceList, VServiceListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewaySlbShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
      DARABONBA_PTR_FROM_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_FROM_JSON(HttpsVServerGroupId, httpsVServerGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceWeight, serviceWeight_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServiceList, VServiceListShrink_);
    };
    AddGatewaySlbShrinkRequest() = default ;
    AddGatewaySlbShrinkRequest(const AddGatewaySlbShrinkRequest &) = default ;
    AddGatewaySlbShrinkRequest(AddGatewaySlbShrinkRequest &&) = default ;
    AddGatewaySlbShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewaySlbShrinkRequest() = default ;
    AddGatewaySlbShrinkRequest& operator=(const AddGatewaySlbShrinkRequest &) = default ;
    AddGatewaySlbShrinkRequest& operator=(AddGatewaySlbShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->gatewayUniqueId_ != nullptr && this->httpPort_ != nullptr && this->httpsPort_ != nullptr && this->httpsVServerGroupId_ != nullptr && this->serviceWeight_ != nullptr
        && this->slbId_ != nullptr && this->type_ != nullptr && this->VServerGroupId_ != nullptr && this->VServiceListShrink_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewaySlbShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewaySlbShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline int32_t httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0) };
    inline AddGatewaySlbShrinkRequest& setHttpPort(int32_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // httpsPort Field Functions 
    bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
    void deleteHttpsPort() { this->httpsPort_ = nullptr;};
    inline int32_t httpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, 0) };
    inline AddGatewaySlbShrinkRequest& setHttpsPort(int32_t httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


    // httpsVServerGroupId Field Functions 
    bool hasHttpsVServerGroupId() const { return this->httpsVServerGroupId_ != nullptr;};
    void deleteHttpsVServerGroupId() { this->httpsVServerGroupId_ = nullptr;};
    inline string httpsVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(httpsVServerGroupId_, "") };
    inline AddGatewaySlbShrinkRequest& setHttpsVServerGroupId(string httpsVServerGroupId) { DARABONBA_PTR_SET_VALUE(httpsVServerGroupId_, httpsVServerGroupId) };


    // serviceWeight Field Functions 
    bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
    void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
    inline int32_t serviceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0) };
    inline AddGatewaySlbShrinkRequest& setServiceWeight(int32_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline AddGatewaySlbShrinkRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddGatewaySlbShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline AddGatewaySlbShrinkRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServiceListShrink Field Functions 
    bool hasVServiceListShrink() const { return this->VServiceListShrink_ != nullptr;};
    void deleteVServiceListShrink() { this->VServiceListShrink_ = nullptr;};
    inline string VServiceListShrink() const { DARABONBA_PTR_GET_DEFAULT(VServiceListShrink_, "") };
    inline AddGatewaySlbShrinkRequest& setVServiceListShrink(string VServiceListShrink) { DARABONBA_PTR_SET_VALUE(VServiceListShrink_, VServiceListShrink) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The HTTP port number (virtual service group).
    std::shared_ptr<int32_t> httpPort_ = nullptr;
    // The HTTPS port number (virtual service group).
    std::shared_ptr<int32_t> httpsPort_ = nullptr;
    // The ID of the HTTPS virtual service group.
    std::shared_ptr<string> httpsVServerGroupId_ = nullptr;
    // The service weight.
    std::shared_ptr<int32_t> serviceWeight_ = nullptr;
    // The ID of the SLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> slbId_ = nullptr;
    // The type of the service source. Valid values:
    // 
    // *   PUB_NET: Internet
    // *   PRIVATE_NET: VPC
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the HTTP virtual service group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The SLB monitoring information.
    std::shared_ptr<string> VServiceListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
