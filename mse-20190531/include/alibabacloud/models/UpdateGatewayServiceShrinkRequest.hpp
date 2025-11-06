// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayServiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayServiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DnsServerList, dnsServerListShrink_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpList, ipListShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_TO_JSON(TlsSetting, tlsSetting_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayServiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DnsServerList, dnsServerListShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpList, ipListShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_FROM_JSON(TlsSetting, tlsSetting_);
    };
    UpdateGatewayServiceShrinkRequest() = default ;
    UpdateGatewayServiceShrinkRequest(const UpdateGatewayServiceShrinkRequest &) = default ;
    UpdateGatewayServiceShrinkRequest(UpdateGatewayServiceShrinkRequest &&) = default ;
    UpdateGatewayServiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayServiceShrinkRequest() = default ;
    UpdateGatewayServiceShrinkRequest& operator=(const UpdateGatewayServiceShrinkRequest &) = default ;
    UpdateGatewayServiceShrinkRequest& operator=(UpdateGatewayServiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->dnsServerListShrink_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->id_ == nullptr && return this->ipListShrink_ == nullptr
        && return this->name_ == nullptr && return this->servicePort_ == nullptr && return this->serviceProtocol_ == nullptr && return this->tlsSetting_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayServiceShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // dnsServerListShrink Field Functions 
    bool hasDnsServerListShrink() const { return this->dnsServerListShrink_ != nullptr;};
    void deleteDnsServerListShrink() { this->dnsServerListShrink_ = nullptr;};
    inline string dnsServerListShrink() const { DARABONBA_PTR_GET_DEFAULT(dnsServerListShrink_, "") };
    inline UpdateGatewayServiceShrinkRequest& setDnsServerListShrink(string dnsServerListShrink) { DARABONBA_PTR_SET_VALUE(dnsServerListShrink_, dnsServerListShrink) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayServiceShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayServiceShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateGatewayServiceShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipListShrink Field Functions 
    bool hasIpListShrink() const { return this->ipListShrink_ != nullptr;};
    void deleteIpListShrink() { this->ipListShrink_ = nullptr;};
    inline string ipListShrink() const { DARABONBA_PTR_GET_DEFAULT(ipListShrink_, "") };
    inline UpdateGatewayServiceShrinkRequest& setIpListShrink(string ipListShrink) { DARABONBA_PTR_SET_VALUE(ipListShrink_, ipListShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayServiceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline string servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
    inline UpdateGatewayServiceShrinkRequest& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline UpdateGatewayServiceShrinkRequest& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // tlsSetting Field Functions 
    bool hasTlsSetting() const { return this->tlsSetting_ != nullptr;};
    void deleteTlsSetting() { this->tlsSetting_ = nullptr;};
    inline string tlsSetting() const { DARABONBA_PTR_GET_DEFAULT(tlsSetting_, "") };
    inline UpdateGatewayServiceShrinkRequest& setTlsSetting(string tlsSetting) { DARABONBA_PTR_SET_VALUE(tlsSetting_, tlsSetting) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> dnsServerListShrink_ = nullptr;
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> ipListShrink_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> servicePort_ = nullptr;
    std::shared_ptr<string> serviceProtocol_ = nullptr;
    std::shared_ptr<string> tlsSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
