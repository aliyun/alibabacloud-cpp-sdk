// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DnsServerList, dnsServerList_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_TO_JSON(TlsSetting, tlsSetting_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DnsServerList, dnsServerList_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_FROM_JSON(TlsSetting, tlsSetting_);
    };
    UpdateGatewayServiceRequest() = default ;
    UpdateGatewayServiceRequest(const UpdateGatewayServiceRequest &) = default ;
    UpdateGatewayServiceRequest(UpdateGatewayServiceRequest &&) = default ;
    UpdateGatewayServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayServiceRequest() = default ;
    UpdateGatewayServiceRequest& operator=(const UpdateGatewayServiceRequest &) = default ;
    UpdateGatewayServiceRequest& operator=(UpdateGatewayServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->dnsServerList_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr && this->ipList_ == nullptr
        && this->name_ == nullptr && this->servicePort_ == nullptr && this->serviceProtocol_ == nullptr && this->tlsSetting_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayServiceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // dnsServerList Field Functions 
    bool hasDnsServerList() const { return this->dnsServerList_ != nullptr;};
    void deleteDnsServerList() { this->dnsServerList_ = nullptr;};
    inline const vector<string> & getDnsServerList() const { DARABONBA_PTR_GET_CONST(dnsServerList_, vector<string>) };
    inline vector<string> getDnsServerList() { DARABONBA_PTR_GET(dnsServerList_, vector<string>) };
    inline UpdateGatewayServiceRequest& setDnsServerList(const vector<string> & dnsServerList) { DARABONBA_PTR_SET_VALUE(dnsServerList_, dnsServerList) };
    inline UpdateGatewayServiceRequest& setDnsServerList(vector<string> && dnsServerList) { DARABONBA_PTR_SET_RVALUE(dnsServerList_, dnsServerList) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayServiceRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayServiceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateGatewayServiceRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<string> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
    inline vector<string> getIpList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
    inline UpdateGatewayServiceRequest& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline UpdateGatewayServiceRequest& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayServiceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline string getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
    inline UpdateGatewayServiceRequest& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline UpdateGatewayServiceRequest& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // tlsSetting Field Functions 
    bool hasTlsSetting() const { return this->tlsSetting_ != nullptr;};
    void deleteTlsSetting() { this->tlsSetting_ = nullptr;};
    inline string getTlsSetting() const { DARABONBA_PTR_GET_DEFAULT(tlsSetting_, "") };
    inline UpdateGatewayServiceRequest& setTlsSetting(string tlsSetting) { DARABONBA_PTR_SET_VALUE(tlsSetting_, tlsSetting) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<vector<string>> dnsServerList_ {};
    shared_ptr<int64_t> gatewayId_ {};
    shared_ptr<string> gatewayUniqueId_ {};
    shared_ptr<string> id_ {};
    shared_ptr<vector<string>> ipList_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> servicePort_ {};
    shared_ptr<string> serviceProtocol_ {};
    shared_ptr<string> tlsSetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
